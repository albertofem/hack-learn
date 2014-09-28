<?hh

interface RenderableEntity
{
    public function getAsset(): Asset;
    public function getWidth(): int;
    public function getHeight(): int;
    public function getX(): int;
    public function getY(): int;
}

class Entity implements RenderableEntity
{
    protected Asset $asset;
    protected Vector2 $position;
    protected (int, int) $size;

    public function __construct(Asset $asset, Vector2 $position, (int, int) $size)
    {
        $this->asset = $asset;
        $this->position = $position;
    }

    public function getAsset(): Asset
    {
        return $this->asset;
    }

    public function getX(): int
    {
        return $this->position->getX();
    }

    public function getY(): int
    {
        return $this->position->getY();
    }

    public function getWidth(): int
    {
        list($width, $_) = $this->size;

        return $width;
    }

    public function getHeight(): int
    {
        list($_, $height) = $this->size;

        return $height;
    }
}
