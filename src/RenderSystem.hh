<?hh

type EntityCollection = Vector<RenderableEntity>;

class RenderSystem
{
    protected EntityCollection $entities;
    protected Canvas $canvas;

    public function __construct(Size $size)
    {
        $this->entities = Vector{};
        $this->canvas = new Canvas($size);
    }

    public function addEntity(RenderableEntity $entity): bool
    {
        $this->entities->add($entity);
    }

    public function render(): bool
    {
        foreach ($this->entities as $entity)
        {
            if ($entity instanceof RenderableEntity) {
                $this->canvas->draw($entity);
            }
        }

        return true;
    }

    public function getEntities(): EntityCollection
    {
        return $this->$entities;
    }
}
