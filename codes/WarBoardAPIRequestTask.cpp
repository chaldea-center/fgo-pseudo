void __fastcall WarBoardAPIRequestTask___ctor(
        WarBoardAPIRequestTask_o *this,
        RequestBase_o *request,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  __int64 v11; // x0
  __int64 v12; // x1
  struct RequestBase_o *v13; // x21
  ServantStatusBattleListViewItem_o *p_fields; // x21
  System_Delegate_o *CallBack; // t1
  NetworkManager_ResultCallbackFunc_o *v16; // x23
  System_Delegate_o *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  WarBoardAPIRequestTask_c *v20; // x8
  NetworkManager_ResultCallbackFunc_c *v21; // x1
  System_Delegate_o *v22; // t1
  WarBoardAPIRequestTask_c *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  NetworkManager_ResultCallbackFunc_c *v26; // x1

  if ( (byte_4A5901F & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_WarBoardAPIRequestTask_requestComplete__);
    byte_4A5901F = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, 0LL);
  this->fields.request = request;
  this->fields.onStartBeginRequest = onStartBeginRequest;
  this->fields.requestDone = 0;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.request, (int32_t)request, v9, v10);
  v13 = this->fields.request;
  if ( !v13 )
    sub_1B8880C(v11, v12);
  CallBack = (System_Delegate_o *)v13->fields.CallBack;
  p_fields = (ServantStatusBattleListViewItem_o *)&v13->fields;
  v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v16,
    (Il2CppObject *)this,
    Method_WarBoardAPIRequestTask_requestComplete__,
    0LL);
  v17 = System_Delegate__Combine(CallBack, (System_Delegate_o *)v16, 0LL);
  v20 = (WarBoardAPIRequestTask_c *)v17;
  if ( v17 )
  {
    v21 = NetworkManager_ResultCallbackFunc_TypeInfo;
    if ( (NetworkManager_ResultCallbackFunc_c *)v17->klass != NetworkManager_ResultCallbackFunc_TypeInfo )
      goto LABEL_12;
    p_fields->klass = (ServantStatusBattleListViewItem_c *)v17;
    if ( (NetworkManager_ResultCallbackFunc_c *)v17->klass != v21 )
      goto LABEL_12;
  }
  else
  {
    p_fields->klass = 0LL;
  }
  sub_1B88554(p_fields, (int32_t)v17, v18, v19);
  v22 = (System_Delegate_o *)this->fields.resultCallback;
  this = (WarBoardAPIRequestTask_o *)((char *)this + 72);
  v23 = (WarBoardAPIRequestTask_c *)System_Delegate__Combine(v22, (System_Delegate_o *)resultCallback, 0LL);
  v20 = v23;
  if ( !v23 )
  {
LABEL_13:
    this->klass = v20;
    goto LABEL_14;
  }
  v26 = NetworkManager_ResultCallbackFunc_TypeInfo;
  if ( v23->_1.image != NetworkManager_ResultCallbackFunc_TypeInfo || (this->klass = v23, v23->_1.image != v26) )
  {
LABEL_12:
    sub_1B88ACC(v20);
    goto LABEL_13;
  }
LABEL_14:
  sub_1B88554((ServantStatusBattleListViewItem_o *)this, (int32_t)v20, v24, v25);
}


void __fastcall WarBoardAPIRequestTask___ctor_35674108(
        WarBoardAPIRequestTask_o *this,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_resultCallback; // x19
  System_Delegate_o *v8; // t1
  System_Delegate_o *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_Delegate_o *v12; // x8
  NetworkManager_ResultCallbackFunc_c *v13; // x1

  if ( (byte_4A59020 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4A59020 = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, 0LL);
  v8 = (System_Delegate_o *)this->fields.resultCallback;
  p_resultCallback = (ServantStatusBattleListViewItem_o *)&this->fields.resultCallback;
  p_resultCallback[-1].fields.isMine = onStartBeginRequest;
  *(&p_resultCallback[-1].fields.isMine + 1) = 0;
  v9 = System_Delegate__Combine(v8, (System_Delegate_o *)resultCallback, 0LL);
  v12 = v9;
  if ( !v9 )
    goto LABEL_7;
  v13 = NetworkManager_ResultCallbackFunc_TypeInfo;
  if ( (NetworkManager_ResultCallbackFunc_c *)v9->klass != NetworkManager_ResultCallbackFunc_TypeInfo
    || (p_resultCallback->klass = (ServantStatusBattleListViewItem_c *)v9,
        (NetworkManager_ResultCallbackFunc_c *)v9->klass != v13) )
  {
    sub_1B88ACC(v9);
LABEL_7:
    p_resultCallback->klass = (ServantStatusBattleListViewItem_c *)v12;
  }
  sub_1B88554(p_resultCallback, (int32_t)v12, v10, v11);
}


System_Collections_IEnumerator_o *__fastcall WarBoardAPIRequestTask__Execute(
        WarBoardAPIRequestTask_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A59022 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardAPIRequestTask__Execute_d__11_TypeInfo);
    byte_4A59022 = 1;
  }
  v3 = sub_1B887FC(WarBoardAPIRequestTask__Execute_d__11_TypeInfo);
  WarBoardAPIRequestTask__Execute_d__11___ctor((WarBoardAPIRequestTask__Execute_d__11_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1B8880C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall WarBoardAPIRequestTask__OnEnd(WarBoardAPIRequestTask_o *this, const MethodInfo *method)
{
  struct NetworkManager_ResultCallbackFunc_o *resultCallback; // x8
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A59023 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A59023 = 1;
  }
  resultCallback = this->fields.resultCallback;
  if ( resultCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct System_String_o *, _QWORD))resultCallback->fields.m_target)(
      resultCallback->fields.original_method_info,
      this->fields.responseStr,
      *(_QWORD *)&resultCallback->fields.extra_arg);
  if ( this->fields.isShowConnect )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1B8880C(0LL, v5);
    CommonUI__SetConnect((CommonUI_o *)Instance, 0, 0LL);
  }
  WarBoardTaskBase__OnEnd((WarBoardTaskBase_o *)this, 0LL);
}


void __fastcall WarBoardAPIRequestTask__OnStart(WarBoardAPIRequestTask_o *this, const MethodInfo *method)
{
  long double v3; // q0
  struct RequestBase_o *request; // x20
  ServantStatusBattleListViewItem_o *p_fields; // x20
  System_Delegate_o *CallBack; // t1
  NetworkManager_ResultCallbackFunc_o *v7; // x22
  System_Delegate_o *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  NetworkManager_ResultCallbackFunc_c *v11; // x1
  __int64 v12; // x1
  RequestBase_o *Instance; // x0

  if ( (byte_4A59021 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_WarBoardAPIRequestTask_requestComplete__);
    byte_4A59021 = 1;
  }
  WarBoardTaskBase__OnStart((WarBoardTaskBase_o *)this, 0LL);
  ((void (__fastcall *)(WarBoardAPIRequestTask_o *, void *))this->klass->vtable._9_SetRequest.method)(
    this,
    this->klass[1]._1.image);
  request = this->fields.request;
  if ( !request )
    goto LABEL_8;
  CallBack = (System_Delegate_o *)request->fields.CallBack;
  p_fields = (ServantStatusBattleListViewItem_o *)&request->fields;
  v7 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_WarBoardAPIRequestTask_requestComplete__,
    0LL);
  v8 = System_Delegate__Combine(CallBack, (System_Delegate_o *)v7, 0LL);
  if ( v8 )
  {
    v11 = NetworkManager_ResultCallbackFunc_TypeInfo;
    if ( (NetworkManager_ResultCallbackFunc_c *)v8->klass != NetworkManager_ResultCallbackFunc_TypeInfo
      || (p_fields->klass = (ServantStatusBattleListViewItem_c *)v8,
          (NetworkManager_ResultCallbackFunc_c *)v8->klass != v11) )
    {
      v3 = sub_1B88ACC(v8);
LABEL_8:
      ((void (__fastcall *)(WarBoardAPIRequestTask_o *, Il2CppMethodPointer, long double))this->klass->vtable._6_OnEnd.method)(
        this,
        this->klass->vtable._7_OnPause.methodPtr,
        v3);
      return;
    }
  }
  else
  {
    p_fields->klass = 0LL;
  }
  sub_1B88554(p_fields, (int32_t)v8, v9, v10);
  if ( !this->fields.requestDone )
  {
    Instance = this->fields.request;
    if ( !Instance )
      goto LABEL_20;
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
        goto LABEL_20;
      if ( (((__int64 (__fastcall *)(RequestBase_o *, Il2CppMethodPointer))Instance->klass->vtable._9_isShowConnect.method)(
              Instance,
              Instance->klass->vtable._10_requestCompleted.methodPtr) & 1) != 0 )
        return;
    }
    this->fields.isShowConnect = 1;
    Instance = (RequestBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetConnect((CommonUI_o *)Instance, 1, 0LL);
      return;
    }
LABEL_20:
    sub_1B8880C(Instance, v12);
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
  struct System_String_o **p_responseStr; // x0

  this->fields.responseStr = result;
  p_responseStr = &this->fields.responseStr;
  *((_BYTE *)p_responseStr - 15) = 1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_responseStr, (int32_t)result, (int32_t)method, v3);
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
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w8

  if ( (byte_4A590CB & 1) == 0 )
  {
    sub_1B885B0(&System_Func_bool__TypeInfo);
    sub_1B885B0(&UnityEngine_WaitUntil_TypeInfo);
    sub_1B885B0(&Method_WarBoardAPIRequestTask__Execute_b__11_0__);
    byte_4A590CB = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v10 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v6 = (System_Func_bool__o *)sub_1B887FC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v6, _4__this, Method_WarBoardAPIRequestTask__Execute_b__11_0__, 0LL);
    v7 = (UnityEngine_WaitUntil_o *)sub_1B887FC(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v7, v6, 0LL);
    this->fields.__2__current = (Il2CppObject *)v7;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v7, v8, v9);
    v10 = 1;
    result = 1;
  }
  this->fields.__1__state = v10;
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_WarBoardAPIRequestTask__Execute_d__11_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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