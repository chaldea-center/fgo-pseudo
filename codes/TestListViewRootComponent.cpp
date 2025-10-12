void TestListViewRootComponent___ctor(TestListViewRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void TestListViewRootComponent__beginInitialize(TestListViewRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C350FA & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C350FA = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void TestListViewRootComponent__beginStartUp(TestListViewRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_41381708((SceneRootComponent_o *)this, 0);
}