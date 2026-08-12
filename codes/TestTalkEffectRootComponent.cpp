void TestTalkEffectRootComponent___ctor(TestTalkEffectRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void TestTalkEffectRootComponent__beginInitialize(TestTalkEffectRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_596DE81 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_596DE81 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void TestTalkEffectRootComponent__beginStartUp(TestTalkEffectRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_48466984((SceneRootComponent_o *)this, 0);
}


bool TestTalkEffectRootComponent__setupTestEffectPrefab(TestTalkEffectRootComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_GameObject_o *testEffectPrefab; // x20
  UnityEngine_GameObject_o *testBackEffectPrefab; // x21
  UnityEngine_GameObject_o *testCharaBackEffectPrefab; // x19
  UnityEngine_GameObject_o *testCharaEffectPrefab; // x22

  if ( (byte_596DE82 & 1) == 0 )
  {
    sub_2213A60(&CommonEffectManager_TypeInfo);
    byte_596DE82 = 1;
  }
  testEffectPrefab = this->fields.testEffectPrefab;
  testBackEffectPrefab = this->fields.testBackEffectPrefab;
  testCharaEffectPrefab = this->fields.testCharaEffectPrefab;
  testCharaBackEffectPrefab = this->fields.testCharaBackEffectPrefab;
  if ( !*(&CommonEffectManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo, method, v2);
  CommonEffectManager__SetTestEffectPrefab(
    testEffectPrefab,
    testBackEffectPrefab,
    testCharaEffectPrefab,
    testCharaBackEffectPrefab,
    0);
  return 1;
}