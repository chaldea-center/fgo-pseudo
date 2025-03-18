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

  if ( (byte_4C1F792 & 1) == 0 )
  {
    sub_1C3B764(&TestBattleRequestButton__battleRequest_d__4_TypeInfo, *(_QWORD *)&questNo);
    byte_4C1F792 = 1;
  }
  v7 = sub_1C3B9B0(TestBattleRequestButton__battleRequest_d__4_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_DWORD *)(v7 + 40) = questNo;
  *(_DWORD *)(v7 + 44) = questPhase;
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall TestBattleRequestButton__beginInitialize(TestBattleRequestButton_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4C1F791 & 1) == 0 )
  {
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_4C1F791 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C3B9C0(0LL, v4);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)Instance, (SceneRootComponent_o *)this, 0LL);
}


void __fastcall TestBattleRequestButton__beginStartUp(TestBattleRequestButton_o *this, const MethodInfo *method)
{
  SceneRootComponent__beginStartUp_40100344((SceneRootComponent_o *)this, 0LL);
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
  UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t _1__state; // w8
  struct TestBattleRequestButton_o *_4__this; // x20
  UserGameEntity_o *SelfUserGame; // x21
  NetworkManager_ResultCallbackFunc_o *v12; // x22
  int64_t activeDeckId; // x3
  bool result; // w0
  UnityEngine_WaitForEndOfFrame_o *v15; // x20
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  v2 = this;
  if ( (byte_4C1F793 & 1) == 0 )
  {
    sub_1C3B764(&Method_NetworkManager_getRequest_BattleSetupRequest___, method);
    sub_1C3B764(&NetworkManager_TypeInfo, v3);
    sub_1C3B764(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    sub_1C3B764(&Method_TestBattleRequestButton_callbackRequest__, v6);
    sub_1C3B764(&UnityEngine_WaitForEndOfFrame_TypeInfo, v7);
    this = (TestBattleRequestButton__battleRequest_d__4_o *)sub_1C3B764(&StringLiteral_1/*""*/, v8);
    byte_4C1F793 = 1;
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
      SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
      v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1C3B9B0(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v12,
        (Il2CppObject *)_4__this,
        Method_TestBattleRequestButton_callbackRequest__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      this = (TestBattleRequestButton__battleRequest_d__4_o *)NetworkManager__getRequest_object_(
                                                                v12,
                                                                (const MethodInfo_3075AE8 *)Method_NetworkManager_getRequest_BattleSetupRequest___);
      if ( SelfUserGame )
      {
        activeDeckId = SelfUserGame->fields.activeDeckId;
        if ( !this )
LABEL_19:
          sub_1C3B9C0(this, method);
      }
      else
      {
        activeDeckId = 0LL;
        if ( !this )
          goto LABEL_19;
      }
      BattleSetupRequest__beginRequest(
        (BattleSetupRequest_o *)this,
        v2->fields.questNo,
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
        0,
        0,
        0LL,
        0LL);
      goto LABEL_18;
    }
    return 0;
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_19;
  if ( _4__this->fields.isRequest )
  {
    this = (TestBattleRequestButton__battleRequest_d__4_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38C8734 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !this )
      goto LABEL_19;
    AvalonSceneManager__changeScene((AvalonSceneManager_o *)this, 10, 1, 0LL, 0LL);
    return 0;
  }
LABEL_18:
  v15 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3B9B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
  UnityEngine_WaitForEndOfFrame___ctor(v15, 0LL);
  v2->fields.__2__current = (Il2CppObject *)v15;
  p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
  sub_1C3B708(p__2__current, (int64_t)v15, v17, v18, v19, v20, v21, v22);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_TestBattleRequestButton__battleRequest_d__4_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
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