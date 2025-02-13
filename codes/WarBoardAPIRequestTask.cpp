void __fastcall WarBoardAPIRequestTask___ctor(
        WarBoardAPIRequestTask_o *this,
        RequestBase_o *request,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x0
  __int64 v16; // x1
  struct RequestBase_o *v17; // x21
  PartyOrganizationUtility_o *p_fields; // x21
  System_Delegate_o *CallBack; // t1
  NetworkManager_ResultCallbackFunc_o *v20; // x23
  System_Delegate_o *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  WarBoardAPIRequestTask_c *v28; // x8
  NetworkManager_ResultCallbackFunc_c *v29; // x1
  System_Delegate_o *v30; // t1
  WarBoardAPIRequestTask_c *v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  NetworkManager_ResultCallbackFunc_c *v38; // x1

  if ( (byte_4BDA343 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&Method_WarBoardAPIRequestTask_requestComplete__);
    byte_4BDA343 = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)request);
  this->fields.request = request;
  this->fields.onStartBeginRequest = onStartBeginRequest;
  this->fields.requestDone = 0;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.request, (int64_t)request, v9, v10, v11, v12, v13, v14);
  v17 = this->fields.request;
  if ( !v17 )
    sub_1C22094(v15, v16);
  CallBack = (System_Delegate_o *)v17->fields.CallBack;
  p_fields = (PartyOrganizationUtility_o *)&v17->fields;
  v20 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v20,
    (Il2CppObject *)this,
    Method_WarBoardAPIRequestTask_requestComplete__,
    0LL);
  v21 = System_Delegate__Combine(CallBack, (System_Delegate_o *)v20, 0LL);
  v28 = (WarBoardAPIRequestTask_c *)v21;
  if ( v21 )
  {
    v29 = NetworkManager_ResultCallbackFunc_TypeInfo;
    if ( (NetworkManager_ResultCallbackFunc_c *)v21->klass != NetworkManager_ResultCallbackFunc_TypeInfo )
      goto LABEL_12;
    p_fields->klass = (PartyOrganizationUtility_c *)v21;
    if ( (NetworkManager_ResultCallbackFunc_c *)v21->klass != v29 )
      goto LABEL_12;
  }
  else
  {
    p_fields->klass = 0LL;
  }
  sub_1C21DDC(p_fields, (int64_t)v21, v22, v23, v24, v25, v26, v27);
  v30 = (System_Delegate_o *)this->fields.resultCallback;
  this = (WarBoardAPIRequestTask_o *)((char *)this + 72);
  v31 = (WarBoardAPIRequestTask_c *)System_Delegate__Combine(v30, (System_Delegate_o *)resultCallback, 0LL);
  v28 = v31;
  if ( !v31 )
  {
LABEL_13:
    this->klass = v28;
    goto LABEL_14;
  }
  v38 = NetworkManager_ResultCallbackFunc_TypeInfo;
  if ( v31->_1.image != NetworkManager_ResultCallbackFunc_TypeInfo || (this->klass = v31, v31->_1.image != v38) )
  {
LABEL_12:
    sub_1C22354(v28);
    goto LABEL_13;
  }
LABEL_14:
  sub_1C21DDC((PartyOrganizationUtility_o *)this, (int64_t)v28, v32, v33, v34, v35, v36, v37);
}


void __fastcall WarBoardAPIRequestTask___ctor_36857788(
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

  if ( (byte_4BDA344 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4BDA344 = 1;
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
    sub_1C22354(v9);
LABEL_7:
    p_resultCallback->klass = (PartyOrganizationUtility_c *)v16;
  }
  sub_1C21DDC(p_resultCallback, v16, v10, v11, v12, v13, v14, v15);
}


System_Collections_IEnumerator_o *__fastcall WarBoardAPIRequestTask__Execute(
        WarBoardAPIRequestTask_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDA346 & 1) == 0 )
  {
    sub_1C21E38(&WarBoardAPIRequestTask__Execute_d__11_TypeInfo);
    byte_4BDA346 = 1;
  }
  v3 = sub_1C22084(WarBoardAPIRequestTask__Execute_d__11_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall WarBoardAPIRequestTask__OnEnd(WarBoardAPIRequestTask_o *this, const MethodInfo *method)
{
  struct NetworkManager_ResultCallbackFunc_o *resultCallback; // x8
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  if ( (byte_4BDA347 & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BDA347 = 1;
  }
  resultCallback = this->fields.resultCallback;
  if ( resultCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct System_String_o *, _QWORD))resultCallback->fields.m_target)(
      resultCallback->fields.original_method_info,
      this->fields.responseStr,
      *(_QWORD *)&resultCallback->fields.extra_arg);
  if ( this->fields.isShowConnect )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1C22094(0LL, v5);
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
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8
  long double v4; // q0
  struct RequestBase_o *request; // x20
  PartyOrganizationUtility_o *p_fields; // x20
  System_Delegate_o *CallBack; // t1
  NetworkManager_ResultCallbackFunc_o *v8; // x22
  System_Delegate_o *v9; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  NetworkManager_ResultCallbackFunc_c *v16; // x1
  __int64 v17; // x1
  RequestBase_o *Instance; // x0

  if ( (byte_4BDA345 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_WarBoardAPIRequestTask_requestComplete__);
    byte_4BDA345 = 1;
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
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1C22084(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_WarBoardAPIRequestTask_requestComplete__,
    0LL);
  v9 = System_Delegate__Combine(CallBack, (System_Delegate_o *)v8, 0LL);
  if ( v9 )
  {
    v16 = NetworkManager_ResultCallbackFunc_TypeInfo;
    if ( (NetworkManager_ResultCallbackFunc_c *)v9->klass != NetworkManager_ResultCallbackFunc_TypeInfo
      || (p_fields->klass = (PartyOrganizationUtility_c *)v9, (NetworkManager_ResultCallbackFunc_c *)v9->klass != v16) )
    {
      v4 = sub_1C22354(v9);
LABEL_10:
      ((void (__fastcall *)(WarBoardAPIRequestTask_o *, Il2CppMethodPointer, long double))this->klass->vtable._6_OnEnd.method)(
        this,
        this->klass->vtable._7_OnPause.methodPtr,
        v4);
      return;
    }
  }
  else
  {
    p_fields->klass = 0LL;
  }
  sub_1C21DDC(p_fields, (int64_t)v9, v10, v11, v12, v13, v14, v15);
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
    Instance = (RequestBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetConnect((CommonUI_o *)Instance, 1, 0LL);
      return;
    }
LABEL_22:
    sub_1C22094(Instance, v17);
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
  sub_1C21DDC((PartyOrganizationUtility_o *)p_responseStr, (int64_t)result, (int64_t)method, v3, v4, v5, v6, v7);
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
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v6; // x21
  UnityEngine_WaitUntil_o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int32_t v14; // w8

  if ( (byte_4BDA348 & 1) == 0 )
  {
    sub_1C21E38(&System_Func_bool__TypeInfo);
    sub_1C21E38(&UnityEngine_WaitUntil_TypeInfo);
    sub_1C21E38(&Method_WarBoardAPIRequestTask__Execute_b__11_0__);
    byte_4BDA348 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v14 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v6 = (System_Func_bool__o *)sub_1C22084(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v6, _4__this, Method_WarBoardAPIRequestTask__Execute_b__11_0__, 0LL);
    v7 = (UnityEngine_WaitUntil_o *)sub_1C22084(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v7, v6, 0LL);
    this->fields.__2__current = (Il2CppObject *)v7;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__2__current, (int64_t)v7, v8, v9, v10, v11, v12, v13);
    v14 = 1;
    result = 1;
  }
  this->fields.__1__state = v14;
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_WarBoardAPIRequestTask__Execute_d__11_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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