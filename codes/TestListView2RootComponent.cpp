void TestListView2RootComponent___ctor(TestListView2RootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void TestListView2RootComponent__beginInitialize(TestListView2RootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5935DB9 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_5935DB9 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void TestListView2RootComponent__beginStartUp(TestListView2RootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_48429240((SceneRootComponent_o *)this, 0);
}