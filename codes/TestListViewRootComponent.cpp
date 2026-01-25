void TestListViewRootComponent___ctor(TestListViewRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void TestListViewRootComponent__beginInitialize(TestListViewRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CEBD9E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CEBD9E = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void TestListViewRootComponent__beginStartUp(TestListViewRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_42059656((SceneRootComponent_o *)this, 0);
}