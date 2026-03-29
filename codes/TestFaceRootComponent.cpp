void TestFaceRootComponent___ctor(TestFaceRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void TestFaceRootComponent__beginInitialize(TestFaceRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4D2E09D & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4D2E09D = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void TestFaceRootComponent__beginStartUp(TestFaceRootComponent_o *this, const MethodInfo *method)
{
  StandFigureManager__CreateRenderPrefab_41393712(this->fields.figureParent, 100100, 0, 1, 5, 10, 0, 0, -1, 0, 0);
  SceneRootComponent__beginStartUp_42213664((SceneRootComponent_o *)this, 0);
}