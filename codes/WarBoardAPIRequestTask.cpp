void __fastcall WarBoardAPIRequestTask___ctor(
        WarBoardAPIRequestTask_o *this,
        RequestBase_o *request,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  struct RequestBase_o *v21; // x21
  PartyOrganizationUtility_o *p_fields; // x21
  System_Delegate_o *CallBack; // t1
  NetworkManager_ResultCallbackFunc_o *v24; // x23
  System_Delegate_o *v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  WarBoardAPIRequestTask_c *v32; // x8
  NetworkManager_ResultCallbackFunc_c *v33; // x1
  System_Delegate_o *v34; // t1
  WarBoardAPIRequestTask_c *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  NetworkManager_ResultCallbackFunc_c *v42; // x1

  if ( (byte_4B14051 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, request, resultCallback);
    sub_1BCA7E0(&Method_WarBoardAPIRequestTask_requestComplete__, v9, v10);
    byte_4B14051 = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)request);
  this->fields.request = request;
  this->fields.onStartBeginRequest = onStartBeginRequest;
  this->fields.requestDone = 0;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.request, (int64_t)request, v11, v12, v13, v14, v15, v16);
  v21 = this->fields.request;
  if ( !v21 )
    sub_1BCAA3C(v17, v18);
  CallBack = (System_Delegate_o *)v21->fields.CallBack;
  p_fields = (PartyOrganizationUtility_o *)&v21->fields;
  v24 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v18, v19, v20);
  NetworkManager_ResultCallbackFunc___ctor(
    v24,
    (Il2CppObject *)this,
    Method_WarBoardAPIRequestTask_requestComplete__,
    0LL);
  v25 = System_Delegate__Combine(CallBack, (System_Delegate_o *)v24, 0LL);
  v32 = (WarBoardAPIRequestTask_c *)v25;
  if ( v25 )
  {
    v33 = NetworkManager_ResultCallbackFunc_TypeInfo;
    if ( (NetworkManager_ResultCallbackFunc_c *)v25->klass != NetworkManager_ResultCallbackFunc_TypeInfo )
      goto LABEL_12;
    p_fields->klass = (PartyOrganizationUtility_c *)v25;
    if ( (NetworkManager_ResultCallbackFunc_c *)v25->klass != v33 )
      goto LABEL_12;
  }
  else
  {
    p_fields->klass = 0LL;
  }
  sub_1BCA784(p_fields, (int64_t)v25, v26, v27, v28, v29, v30, v31);
  v34 = (System_Delegate_o *)this->fields.resultCallback;
  this = (WarBoardAPIRequestTask_o *)((char *)this + 72);
  v35 = (WarBoardAPIRequestTask_c *)System_Delegate__Combine(v34, (System_Delegate_o *)resultCallback, 0LL);
  v32 = v35;
  if ( !v35 )
  {
LABEL_13:
    this->klass = v32;
    goto LABEL_14;
  }
  v42 = NetworkManager_ResultCallbackFunc_TypeInfo;
  if ( v35->_1.image != NetworkManager_ResultCallbackFunc_TypeInfo || (this->klass = v35, v35->_1.image != v42) )
  {
LABEL_12:
    sub_1BCACFC(v32);
    goto LABEL_13;
  }
LABEL_14:
  sub_1BCA784((PartyOrganizationUtility_o *)this, (int64_t)v32, v36, v37, v38, v39, v40, v41);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAPIRequestTask___ctor_36369024(
        WarBoardAPIRequestTask_o *this,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  PartyOrganizationUtility_o *p_resultCallback; // x19
  System_Delegate_o *v8; // t1
  System_Delegate_o *v9; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x8
  NetworkManager_ResultCallbackFunc_c *v17; // x1

  if ( (byte_4B14052 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, resultCallback, onStartBeginRequest);
    byte_4B14052 = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)resultCallback);
  v8 = (System_Delegate_o *)this->fields.resultCallback;
  p_resultCallback = (PartyOrganizationUtility_o *)&this->fields.resultCallback;
  p_resultCallback[-1].fields._IsQuestStartMenuMode_k__BackingField = onStartBeginRequest;
  p_resultCallback[-1].fields._IsNormalFlowQuest_k__BackingField = 0;
  v9 = System_Delegate__Combine(v8, (System_Delegate_o *)resultCallback, 0LL);
  v16 = (int64_t)v9;
  if ( !v9 )
    goto LABEL_7;
  v17 = NetworkManager_ResultCallbackFunc_TypeInfo;
  if ( (NetworkManager_ResultCallbackFunc_c *)v9->klass != NetworkManager_ResultCallbackFunc_TypeInfo
    || (p_resultCallback->klass = (PartyOrganizationUtility_c *)v9,
        (NetworkManager_ResultCallbackFunc_c *)v9->klass != v17) )
  {
    sub_1BCACFC(v9);
LABEL_7:
    p_resultCallback->klass = (PartyOrganizationUtility_c *)v16;
  }
  sub_1BCA784(p_resultCallback, v16, v10, v11, v12, v13, v14, v15);
}


System_Collections_IEnumerator_o *__fastcall WarBoardAPIRequestTask__Execute(
        WarBoardAPIRequestTask_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B14054 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardAPIRequestTask__Execute_d__11_TypeInfo, method, v2);
    byte_4B14054 = 1;
  }
  v5 = sub_1BCAA2C(WarBoardAPIRequestTask__Execute_d__11_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall WarBoardAPIRequestTask__OnEnd(WarBoardAPIRequestTask_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct NetworkManager_ResultCallbackFunc_o *resultCallback; // x8
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  if ( (byte_4B14055 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method, v2);
    byte_4B14055 = 1;
  }
  resultCallback = this->fields.resultCallback;
  if ( resultCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct System_String_o *, _QWORD))resultCallback->fields.m_target)(
      resultCallback->fields.original_method_info,
      this->fields.responseStr,
      *(_QWORD *)&resultCallback->fields.extra_arg);
  if ( this->fields.isShowConnect )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v6);
    CommonUI__SetConnect((CommonUI_o *)Instance, 0, 0LL);
  }
  EndCallback = this->fields.EndCallback;
  this->fields._isPlaying_k__BackingField = 0;
  if ( EndCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))EndCallback->fields.m_target)(
      EndCallback->fields.original_method_info,
      *(_QWORD *)&EndCallback->fields.extra_arg);
}


void __fastcall WarBoardAPIRequestTask__OnStart(WarBoardAPIRequestTask_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  long double v12; // q0
  struct RequestBase_o *request; // x20
  PartyOrganizationUtility_o *p_fields; // x20
  System_Delegate_o *CallBack; // t1
  NetworkManager_ResultCallbackFunc_o *v16; // x22
  System_Delegate_o *v17; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  NetworkManager_ResultCallbackFunc_c *v24; // x1
  __int64 v25; // x1
  RequestBase_o *Instance; // x0

  if ( (byte_4B14053 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_WarBoardAPIRequestTask_requestComplete__, v6, v7);
    byte_4B14053 = 1;
  }
  StartCallback = this->fields.StartCallback;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))StartCallback->fields.m_target)(
      StartCallback->fields.original_method_info,
      *(_QWORD *)&StartCallback->fields.extra_arg);
  ((void (__fastcall *)(WarBoardAPIRequestTask_o *, void *))this->klass->vtable._9_SetRequest.method)(
    this,
    this->klass[1]._1.image);
  request = this->fields.request;
  if ( !request )
    goto LABEL_10;
  CallBack = (System_Delegate_o *)request->fields.CallBack;
  p_fields = (PartyOrganizationUtility_o *)&request->fields;
  v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10, v11);
  NetworkManager_ResultCallbackFunc___ctor(
    v16,
    (Il2CppObject *)this,
    Method_WarBoardAPIRequestTask_requestComplete__,
    0LL);
  v17 = System_Delegate__Combine(CallBack, (System_Delegate_o *)v16, 0LL);
  if ( v17 )
  {
    v24 = NetworkManager_ResultCallbackFunc_TypeInfo;
    if ( (NetworkManager_ResultCallbackFunc_c *)v17->klass != NetworkManager_ResultCallbackFunc_TypeInfo
      || (p_fields->klass = (PartyOrganizationUtility_c *)v17, (NetworkManager_ResultCallbackFunc_c *)v17->klass != v24) )
    {
      v12 = sub_1BCACFC(v17);
LABEL_10:
      ((void (__fastcall *)(WarBoardAPIRequestTask_o *, Il2CppMethodPointer, long double))this->klass->vtable._6_OnEnd.method)(
        this,
        this->klass->vtable._7_OnPause.methodPtr,
        v12);
      return;
    }
  }
  else
  {
    p_fields->klass = 0LL;
  }
  sub_1BCA784(p_fields, (int64_t)v17, v18, v19, v20, v21, v22, v23);
  if ( !this->fields.requestDone )
  {
    Instance = this->fields.request;
    if ( !Instance )
      goto LABEL_22;
    if ( this->fields.onStartBeginRequest )
    {
      RequestBase__beginRequest(Instance, 0LL);
      return;
    }
    if ( (((__int64 (__fastcall *)(RequestBase_o *, Il2CppMethodPointer))Instance->klass->vtable._8_isBackgroundRequest.method)(
            Instance,
            Instance->klass->vtable._9_isShowConnect.methodPtr) & 1) == 0 )
    {
      Instance = this->fields.request;
      if ( !Instance )
        goto LABEL_22;
      if ( (((__int64 (__fastcall *)(RequestBase_o *, Il2CppMethodPointer))Instance->klass->vtable._9_isShowConnect.method)(
              Instance,
              Instance->klass->vtable._10_requestCompleted.methodPtr) & 1) != 0 )
        return;
    }
    this->fields.isShowConnect = 1;
    Instance = (RequestBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetConnect((CommonUI_o *)Instance, 1, 0LL);
      return;
    }
LABEL_22:
    sub_1BCAA3C(Instance, v25);
  }
}


void __fastcall WarBoardAPIRequestTask__SetRequest(WarBoardAPIRequestTask_o *this, const MethodInfo *method)
{
  ;
}


bool __fastcall WarBoardAPIRequestTask___Execute_b__11_0(WarBoardAPIRequestTask_o *this, const MethodInfo *method)
{
  return this->fields.requestDone;
}


void __fastcall WarBoardAPIRequestTask__requestComplete(
        WarBoardAPIRequestTask_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct System_String_o **p_responseStr; // x0

  this->fields.responseStr = result;
  p_responseStr = &this->fields.responseStr;
  *((_BYTE *)p_responseStr - 15) = 1;
  sub_1BCA784((PartyOrganizationUtility_o *)p_responseStr, (int64_t)result, (int64_t)method, v3, v4, v5, v6, v7);
}


void __fastcall WarBoardAPIRequestTask__Execute_d__11___ctor(
        WarBoardAPIRequestTask__Execute_d__11_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall WarBoardAPIRequestTask__Execute_d__11__MoveNext(
        WarBoardAPIRequestTask__Execute_d__11_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  UnityEngine_WaitUntil_o *v16; // x20
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int32_t v23; // w8

  if ( (byte_4B14056 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Func_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_WarBoardAPIRequestTask__Execute_b__11_0__, v7, v8);
    byte_4B14056 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v23 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v12 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, method, v2, v3);
    System_Func_bool____ctor(v12, _4__this, Method_WarBoardAPIRequestTask__Execute_b__11_0__, 0LL);
    v16 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, v13, v14, v15);
    UnityEngine_WaitUntil___ctor(v16, v12, 0LL);
    this->fields.__2__current = (Il2CppObject *)v16;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v16, v17, v18, v19, v20, v21, v22);
    v23 = 1;
    result = 1;
  }
  this->fields.__1__state = v23;
  return result;
}


Il2CppObject *__fastcall WarBoardAPIRequestTask__Execute_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardAPIRequestTask__Execute_d__11_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn WarBoardAPIRequestTask__Execute_d__11__System_Collections_IEnumerator_Reset(
        WarBoardAPIRequestTask__Execute_d__11_o *this,
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
  v8 = sub_1BCA7F4(&Method_WarBoardAPIRequestTask__Execute_d__11_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
}


Il2CppObject *__fastcall WarBoardAPIRequestTask__Execute_d__11__System_Collections_IEnumerator_get_Current(
        WarBoardAPIRequestTask__Execute_d__11_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall WarBoardAPIRequestTask__Execute_d__11__System_IDisposable_Dispose(
        WarBoardAPIRequestTask__Execute_d__11_o *this,
        const MethodInfo *method)
{
  ;
}