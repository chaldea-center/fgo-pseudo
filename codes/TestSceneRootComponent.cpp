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

  if ( (byte_4C544DD & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C544DD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void TestSceneRootComponent__beginStartUp(TestSceneRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_41529716((SceneRootComponent_o *)this, 0);
}