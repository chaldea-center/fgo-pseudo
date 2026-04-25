void TestFaceRootComponent___ctor(TestFaceRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void TestFaceRootComponent__beginInitialize(TestFaceRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4E020DA & 1) == 0 )
  {
    sub_1CE6700(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4E020DA = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1CE6958(0, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void TestFaceRootComponent__beginStartUp(TestFaceRootComponent_o *this, const MethodInfo *method)
{
  StandFigureManager__CreateRenderPrefab_41818780(this->fields.figureParent, 100100, 0, 1, 5, 10, 0, 0, -1, 0, 0);
  SceneRootComponent__beginStartUp_42637640((SceneRootComponent_o *)this, 0);
}