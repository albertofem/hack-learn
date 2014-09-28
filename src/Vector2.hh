<?hh

class Vector3
{
    public function __construct(
        protected int $x,
        protected int $y,
        protected int $z
    ) {

    }

    public function magnitude(): float
    {
        return sqrt($this->x * $this->x + $this->y + $this->y + $this->z + $this->z);
    }
}
