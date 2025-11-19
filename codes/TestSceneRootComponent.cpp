void TestSceneRootComponent___ctor(TestSceneRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void TestSceneRootComponent__beginFinish(TestSceneRootComponent_o *this, const MethodInfo *method)
{
  ;
}


void TestSceneRootComponent__beginInitialize(TestSceneRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CB3A2F & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CB3A2F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void TestSceneRootComponent__beginStartUp(TestSceneRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_41715136((SceneRootComponent_o *)this, 0);
}