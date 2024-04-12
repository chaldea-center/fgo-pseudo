void __fastcall TestBattleRequestButton___ctor(TestBattleRequestButton_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


System_Collections_IEnumerator_o *__fastcall TestBattleRequestButton__battleRequest(
        TestBattleRequestButton_o *this,
        int32_t questNo,
        int32_t questPhase,
        const MethodInfo *method)
{
  TestBattleRequestButton__battleRequest_d__4_o *v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_42AC69E & 1) == 0 )
  {
    sub_B52984(&TestBattleRequestButton__battleRequest_d__4_TypeInfo);
    byte_42AC69E = 1;
  }
  v7 = (TestBattleRequestButton__battleRequest_d__4_o *)sub_B52A54(TestBattleRequestButton__battleRequest_d__4_TypeInfo);
  TestBattleRequestButton__battleRequest_d__4___ctor(v7, 0, 0LL);
  if ( !v7 )
    sub_B52A5C(v8, v9);
  v7->fields.__4__this = this;
  sub_B52920(&v7->fields.__4__this);
  v7->fields.questNo = questNo;
  v7->fields.questPhase = questPhase;
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall TestBattleRequestButton__beginInitialize(TestBattleRequestButton_o *this, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_42AC69D & 1) == 0 )
  {
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_42AC69D = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v4);
  AvalonSceneManager__endInitialize(Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall TestBattleRequestButton__beginStartUp(TestBattleRequestButton_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_17470260((SceneRootComponent_o *)this, 0LL);
}


void __fastcall TestBattleRequestButton__callbackRequest(
        TestBattleRequestButton_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  this->fields.isRequest = 1;
}


void __fastcall TestBattleRequestButton__startRequestA(TestBattleRequestButton_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_Collections_IEnumerator_o *v4; // x1

  v4 = TestBattleRequestButton__battleRequest(this, 1010, 1, v2);
  UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall TestBattleRequestButton__battleRequest_d__4___ctor(
        TestBattleRequestButton__battleRequest_d__4_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TestBattleRequestButton__battleRequest_d__4__MoveNext(
        TestBattleRequestButton__battleRequest_d__4_o *this,
        const MethodInfo *method)
{
  TestBattleRequestButton__battleRequest_d__4_o *v2; // x19
  int32_t _1__state; // w8
  struct TestBattleRequestButton_o *_4__this; // x21
  UserGameEntity_o *SelfUserGame; // x20
  NetworkManager_ResultCallbackFunc_o *v6; // x22
  int64_t activeDeckId; // x3
  bool result; // w0
  UnityEngine_WaitForEndOfFrame_o *v9; // x20
  Il2CppObject **p__2__current; // x19

  v2 = this;
  if ( (byte_42AD999 & 1) == 0 )
  {
    sub_B52984(&Method_NetworkManager_getRequest_BattleSetupRequest___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&Method_TestBattleRequestButton_callbackRequest__);
    sub_B52984(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    this = (TestBattleRequestButton__battleRequest_d__4_o *)sub_B52984(&StringLiteral_1/*""*/);
    byte_42AD999 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v2->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_20;
      _4__this->fields.isRequest = 0;
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      v6 = (NetworkManager_ResultCallbackFunc_o *)sub_B52A54(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v6,
        (Il2CppObject *)_4__this,
        Method_TestBattleRequestButton_callbackRequest__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      this = (TestBattleRequestButton__battleRequest_d__4_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                v6,
                                                                (const MethodInfo_1F705CC *)Method_NetworkManager_getRequest_BattleSetupRequest___);
      method = (const MethodInfo *)(unsigned int)v2->fields.questNo;
      if ( SelfUserGame )
      {
        activeDeckId = SelfUserGame->fields.activeDeckId;
        if ( !this )
LABEL_20:
          sub_B52A5C(this, method);
      }
      else
      {
        activeDeckId = 0LL;
        if ( !this )
          goto LABEL_20;
      }
      BattleSetupRequest__beginRequest(
        (BattleSetupRequest_o *)this,
        (int32_t)method,
        v2->fields.questPhase,
        activeDeckId,
        1000LL,
        0,
        0,
        0,
        0,
        0,
        0LL,
        0,
        0LL,
        0,
        (System_String_o *)StringLiteral_1/*""*/,
        0,
        0,
        0,
        0LL);
      goto LABEL_19;
    }
    return 0;
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_20;
  if ( _4__this->fields.isRequest )
  {
    this = (TestBattleRequestButton__battleRequest_d__4_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_20;
    AvalonSceneManager__changeScene((AvalonSceneManager_o *)this, 10, 1, 0LL, 0LL);
    return 0;
  }
LABEL_19:
  v9 = (UnityEngine_WaitForEndOfFrame_o *)sub_B52A54(UnityEngine_WaitForEndOfFrame_TypeInfo);
  UnityEngine_WaitForEndOfFrame___ctor(v9, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v9;
  p__2__current = &v2->fields.__2__current;
  sub_B52920(p__2__current);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall TestBattleRequestButton__battleRequest_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TestBattleRequestButton__battleRequest_d__4_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TestBattleRequestButton__battleRequest_d__4__System_Collections_IEnumerator_Reset(
        TestBattleRequestButton__battleRequest_d__4_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_TestBattleRequestButton__battleRequest_d__4_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
}


Il2CppObject *__fastcall TestBattleRequestButton__battleRequest_d__4__System_Collections_IEnumerator_get_Current(
        TestBattleRequestButton__battleRequest_d__4_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TestBattleRequestButton__battleRequest_d__4__System_IDisposable_Dispose(
        TestBattleRequestButton__battleRequest_d__4_o *this,
        const MethodInfo *method)
{
  ;
}