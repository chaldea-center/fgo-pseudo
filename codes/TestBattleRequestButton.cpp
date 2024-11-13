void __fastcall TestBattleRequestButton___ctor(TestBattleRequestButton_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall TestBattleRequestButton__battleRequest(
        TestBattleRequestButton_o *this,
        int32_t questNo,
        int32_t questPhase,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B13AA1 & 1) == 0 )
  {
    sub_1BCA7E0(&TestBattleRequestButton__battleRequest_d__4_TypeInfo, *(_QWORD *)&questNo, *(_QWORD *)&questPhase);
    byte_4B13AA1 = 1;
  }
  v7 = sub_1BCAA2C(
         TestBattleRequestButton__battleRequest_d__4_TypeInfo,
         *(_QWORD *)&questNo,
         *(_QWORD *)&questPhase,
         method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 40) = questNo;
  *(_DWORD *)(v7 + 44) = questPhase;
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall TestBattleRequestButton__beginInitialize(TestBattleRequestButton_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B13AA0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B13AA0 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall TestBattleRequestButton__beginStartUp(TestBattleRequestButton_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_39382928((SceneRootComponent_o *)this, 0LL);
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
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x3
  TestBattleRequestButton__battleRequest_d__4_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  int32_t _1__state; // w8
  struct TestBattleRequestButton_o *_4__this; // x20
  UserGameEntity_o *SelfUserGame; // x21
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  NetworkManager_ResultCallbackFunc_o *v23; // x22
  __int64 v24; // x1
  int64_t activeDeckId; // x3
  bool result; // w0
  UnityEngine_WaitForEndOfFrame_o *v27; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7

  v4 = this;
  if ( (byte_4B13AA2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_BattleSetupRequest___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_TestBattleRequestButton_callbackRequest__, v11, v12);
    sub_1BCA7E0(&UnityEngine_WaitForEndOfFrame_TypeInfo, v13, v14);
    this = (TestBattleRequestButton__battleRequest_d__4_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v15, v16);
    byte_4B13AA2 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_19;
      _4__this->fields.isRequest = 0;
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      v23 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v20,
                                                     v21,
                                                     v22);
      NetworkManager_ResultCallbackFunc___ctor(
        v23,
        (Il2CppObject *)_4__this,
        Method_TestBattleRequestButton_callbackRequest__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v24);
      this = (TestBattleRequestButton__battleRequest_d__4_o *)NetworkManager__getRequest_object_(
                                                                v23,
                                                                (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_BattleSetupRequest___);
      if ( SelfUserGame )
      {
        activeDeckId = SelfUserGame->fields.activeDeckId;
        if ( !this )
LABEL_19:
          sub_1BCAA3C(this, method);
      }
      else
      {
        activeDeckId = 0LL;
        if ( !this )
          goto LABEL_19;
      }
      BattleSetupRequest__beginRequest(
        (BattleSetupRequest_o *)this,
        v4->fields.questNo,
        v4->fields.questPhase,
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
        0,
        0,
        0LL);
      goto LABEL_18;
    }
    return 0;
  }
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_19;
  if ( _4__this->fields.isRequest )
  {
    this = (TestBattleRequestButton__battleRequest_d__4_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_19;
    AvalonSceneManager__changeScene((AvalonSceneManager_o *)this, 10, 1, 0LL, 0LL);
    return 0;
  }
LABEL_18:
  v27 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, method, v2, v3);
  UnityEngine_WaitForEndOfFrame___ctor(v27, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v27;
  p__2__current = (PartyOrganizationUtility_o *)&v4->fields.__2__current;
  sub_1BCA784(p__2__current, (int64_t)v27, v29, v30, v31, v32, v33, v34);
  result = 1;
  *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_TestBattleRequestButton__battleRequest_d__4_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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