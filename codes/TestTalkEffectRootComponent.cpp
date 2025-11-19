void TestTalkEffectRootComponent___ctor(TestTalkEffectRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


void TestTalkEffectRootComponent__beginInitialize(TestTalkEffectRootComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CB3A9C & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4CB3A9C = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void TestTalkEffectRootComponent__beginStartUp(TestTalkEffectRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_41715136((SceneRootComponent_o *)this, 0);
}


bool TestTalkEffectRootComponent__setupTestEffectPrefab(TestTalkEffectRootComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *testBackEffectPrefab; // x21
  UnityEngine_GameObject_o *testEffectPrefab; // x22
  UnityEngine_GameObject_o *testCharaBackEffectPrefab; // x19
  UnityEngine_GameObject_o *testCharaEffectPrefab; // x20

  if ( (byte_4CB3A9D & 1) == 0 )
  {
    sub_1C6BA08(&CommonEffectManager_TypeInfo);
    byte_4CB3A9D = 1;
  }
  testEffectPrefab = this->fields.testEffectPrefab;
  testBackEffectPrefab = this->fields.testBackEffectPrefab;
  testCharaEffectPrefab = this->fields.testCharaEffectPrefab;
  testCharaBackEffectPrefab = this->fields.testCharaBackEffectPrefab;
  if ( !CommonEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CommonEffectManager_TypeInfo);
  CommonEffectManager__SetTestEffectPrefab(
    testEffectPrefab,
    testBackEffectPrefab,
    testCharaEffectPrefab,
    testCharaBackEffectPrefab,
    0);
  return 1;
}