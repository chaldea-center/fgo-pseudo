void TestBattleRequestButton___ctor(TestBattleRequestButton_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


System_Collections_IEnumerator_o *TestBattleRequestButton__battleRequest(
        TestBattleRequestButton_o *this,
        int32_t questNo,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C249DB & 1) == 0 )
  {
    sub_1C2D490(&TestBattleRequestButton__battleRequest_d__4_TypeInfo);
    byte_4C249DB = 1;
  }
  v7 = sub_1C2D6DC(TestBattleRequestButton__battleRequest_d__4_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_DWORD *)(v7 + 40) = questNo;
  *(_DWORD *)(v7 + 44) = questPhase;
  return (System_Collections_IEnumerator_o *)v7;
}


void TestBattleRequestButton__beginInitialize(TestBattleRequestButton_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C249DA & 1) == 0 )
  {
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C249DA = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C2D6EC(0, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0);
}


void TestBattleRequestButton__beginStartUp(TestBattleRequestButton_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_41259456((SceneRootComponent_o *)this, 0);
}


void TestBattleRequestButton__callbackRequest(
        TestBattleRequestButton_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  this->fields.isRequest = 1;
}


void TestBattleRequestButton__startRequestA(TestBattleRequestButton_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_Collections_IEnumerator_o *v4; // x1

  v4 = TestBattleRequestButton__battleRequest(this, 1010, 1, v2);
  UnityEngine_MonoBehaviour__StartCoroutine_71149276((UnityEngine_MonoBehaviour_o *)this, v4, 0);
}


void TestBattleRequestButton__battleRequest_d__4___ctor(
        TestBattleRequestButton__battleRequest_d__4_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool TestBattleRequestButton__battleRequest_d__4__MoveNext(
        TestBattleRequestButton__battleRequest_d__4_o *this,
        const MethodInfo *method)
{
  TestBattleRequestButton__battleRequest_d__4_o *v2; // x19
  int32_t _1__state; // w8
  struct TestBattleRequestButton_o *_4__this; // x20
  UserGameEntity_o *SelfUserGame; // x21
  NetworkManager_ResultCallbackFunc_o *v6; // x22
  int64_t activeDeckId; // x3
  bool result; // w0
  UnityEngine_WaitForEndOfFrame_o *v9; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  v2 = this;
  if ( (byte_4C249DC & 1) == 0 )
  {
    sub_1C2D490(&Method_NetworkManager_getRequest_BattleSetupRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C2D490(&Method_TestBattleRequestButton_callbackRequest__);
    sub_1C2D490(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    this = (TestBattleRequestButton__battleRequest_d__4_o *)sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C249DC = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_19;
      _4__this->fields.isRequest = 0;
      SelfUserGame = UserGameMaster__getSelfUserGame(0);
      v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1C2D6DC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v6,
        (Il2CppObject *)_4__this,
        Method_TestBattleRequestButton_callbackRequest__,
        0);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (TestBattleRequestButton__battleRequest_d__4_o *)NetworkManager__getRequest_object_(
                                                                v6,
                                                                (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_BattleSetupRequest___);
      if ( SelfUserGame )
      {
        activeDeckId = SelfUserGame->fields.activeDeckId;
        if ( !this )
LABEL_19:
          sub_1C2D6EC(this, method);
      }
      else
      {
        activeDeckId = 0;
        if ( !this )
          goto LABEL_19;
      }
      BattleSetupRequest__beginRequest(
        (BattleSetupRequest_o *)this,
        v2->fields.questNo,
        v2->fields.questPhase,
        activeDeckId,
        1000,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        0,
        (System_String_o *)StringLiteral_1/*""*/,
        0,
        0,
        0,
        0,
        0,
        0,
        0);
      goto LABEL_18;
    }
    return 0;
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_19;
  if ( _4__this->fields.isRequest )
  {
    this = (TestBattleRequestButton__battleRequest_d__4_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_19;
    AvalonSceneManager__changeScene((AvalonSceneManager_o *)this, 10, 1, 0, 0);
    return 0;
  }
LABEL_18:
  v9 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C2D6DC(UnityEngine_WaitForEndOfFrame_TypeInfo);
  UnityEngine_WaitForEndOfFrame___ctor(v9, 0);
  v2->fields.__2__current = (Il2CppObject *)v9;
  p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1C2D434(p__2__current, (int32_t)v9, v11, v12);
  result = 1;
  LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return result;
}


Il2CppObject *TestBattleRequestButton__battleRequest_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TestBattleRequestButton__battleRequest_d__4_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn TestBattleRequestButton__battleRequest_d__4__System_Collections_IEnumerator_Reset(
        TestBattleRequestButton__battleRequest_d__4_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C2D4A4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C2D6DC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C2D4A4(&Method_TestBattleRequestButton__battleRequest_d__4_System_Collections_IEnumerator_Reset__);
  sub_1C2D5B8(v3, v4);
}


Il2CppObject *TestBattleRequestButton__battleRequest_d__4__System_Collections_IEnumerator_get_Current(
        TestBattleRequestButton__battleRequest_d__4_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void TestBattleRequestButton__battleRequest_d__4__System_IDisposable_Dispose(
        TestBattleRequestButton__battleRequest_d__4_o *this,
        const MethodInfo *method)
{
  ;
}