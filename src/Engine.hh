<?hh

class Engine
{
    protected RenderSystem $renderSystem;


    public function __construct()
    {
        this->rendering = new RenderSystem(['width' => 100, 'height' => 100]);
    }

    public function getRenderSystem(): RenderSystem
    {
        return $this->rendering;
    }

    public function render(): bool
    {
        $this->renderSystem->render();

        return true;
    }

    public function __destruct()
    {
        $this->RenderSystem = null;
    }
}
