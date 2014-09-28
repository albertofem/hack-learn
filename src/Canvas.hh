<?hh

type Size = shape(
    'width' => int,
    'height' => int
);

class Canvas
{
    protected resource $image;
    protected Size $size;

    public function __construct(Size $size)
    {
        $this->size = $size;
        $this->resource = imagecreate($width, $height);
    }

    public function draw<T as RenderableEntity>(T $entity): bool
    {
        imagecopy(
            $this->resource,
            $entity->getAsset()->getResource(),
            $entity->getX(),
            $entity->getY(),
            0,
            0,
            $entity->getWidth(),
            $entity->getHeight()
        );
    }

    public function getSize(): Size
    {
        return $this->size;
    }
}
