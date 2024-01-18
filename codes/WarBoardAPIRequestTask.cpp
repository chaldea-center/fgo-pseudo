void __fastcall WarBoardAPIRequestTask___ctor(
        WarBoardAPIRequestTask_o *this,
        RequestBase_o *request,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x0
  __int64 v17; // x1
  struct RequestBase_o *v18; // x21
  BattleServantConfConponent_o *p_fields; // x21
  System_Delegate_o *CallBack; // t1
  NetworkManager_ResultCallbackFunc_o *v21; // x23
  System_Int32_array **v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Int32_array **v29; // x8
  BattleServantConfConponent_o *p_resultCallback; // x19
  System_Delegate_o *v31; // t1
  System_Int32_array **v32; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_4186796 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, request);
    sub_B2C35C(&Method_WarBoardAPIRequestTask_requestComplete__, v9);
    byte_4186796 = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, 0LL);
  this->fields.request = request;
  *(_WORD *)&this->fields.onStartBeginRequest = onStartBeginRequest;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.request,
    (System_Int32_array **)request,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v18 = this->fields.request;
  if ( !v18 )
LABEL_10:
    sub_B2C434(v16, v17);
  CallBack = (System_Delegate_o *)v18->fields.CallBack;
  p_fields = (BattleServantConfConponent_o *)&v18->fields;
  v21 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v21,
    (Il2CppObject *)this,
    Method_WarBoardAPIRequestTask_requestComplete__,
    0LL);
  v22 = (System_Int32_array **)System_Delegate__Combine(CallBack, (System_Delegate_o *)v21, 0LL);
  v29 = v22;
  if ( v22 && *v22 != (System_Int32_array *)NetworkManager_ResultCallbackFunc_TypeInfo
    || (p_fields->klass = (BattleServantConfConponent_c *)v22,
        sub_B2C2F8(p_fields, v22, v23, v24, v25, v26, v27, v28),
        v31 = (System_Delegate_o *)this->fields.resultCallback,
        p_resultCallback = (BattleServantConfConponent_o *)&this->fields.resultCallback,
        v32 = (System_Int32_array **)System_Delegate__Combine(v31, (System_Delegate_o *)resultCallback, 0LL),
        (v29 = v32) != 0LL)
    && *v32 != (System_Int32_array *)NetworkManager_ResultCallbackFunc_TypeInfo )
  {
    v16 = sub_B2C728(v29);
    goto LABEL_10;
  }
  p_resultCallback->klass = (BattleServantConfConponent_c *)v32;
  sub_B2C2F8(p_resultCallback, v32, v33, v34, v35, v36, v37, v38);
}


void __fastcall WarBoardAPIRequestTask___ctor_22725128(
        WarBoardAPIRequestTask_o *this,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_resultCallback; // x19
  System_Delegate_o *v8; // t1
  System_Int32_array **v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  WarBoardAPIContinueRequestTask_o *v16; // x0
  const MethodInfo *v17; // x1

  if ( (byte_4186797 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, resultCallback);
    byte_4186797 = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, 0LL);
  v8 = (System_Delegate_o *)this->fields.resultCallback;
  p_resultCallback = (BattleServantConfConponent_o *)&this->fields.resultCallback;
  *(_WORD *)&p_resultCallback[-1].fields.isOpenAfter = onStartBeginRequest;
  v9 = (System_Int32_array **)System_Delegate__Combine(v8, (System_Delegate_o *)resultCallback, 0LL);
  if ( v9 && *v9 != (System_Int32_array *)NetworkManager_ResultCallbackFunc_TypeInfo )
  {
    v16 = (WarBoardAPIContinueRequestTask_o *)sub_B2C728(v9);
    WarBoardAPIContinueRequestTask__SetRequest(v16, v17);
  }
  else
  {
    p_resultCallback->klass = (BattleServantConfConponent_c *)v9;
    sub_B2C2F8(p_resultCallback, v9, v10, v11, v12, v13, v14, v15);
  }
}


System_Collections_IEnumerator_o *__fastcall WarBoardAPIRequestTask__Execute(
        WarBoardAPIRequestTask_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4186799 & 1) == 0 )
  {
    sub_B2C35C(&WarBoardAPIRequestTask__Execute_d__11_TypeInfo, method);
    byte_4186799 = 1;
  }
  v3 = sub_B2C42C(WarBoardAPIRequestTask__Execute_d__11_TypeInfo);
  WarBoardAPIRequestTask__Execute_d__11___ctor((WarBoardAPIRequestTask__Execute_d__11_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall WarBoardAPIRequestTask__OnEnd(WarBoardAPIRequestTask_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *resultCallback; // x0
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_418679A & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_418679A = 1;
  }
  resultCallback = this->fields.resultCallback;
  if ( resultCallback )
    NetworkManager_ResultCallbackFunc__Invoke(resultCallback, this->fields.responseStr, 0LL);
  if ( this->fields.isShowConnect )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v5);
    CommonUI__SetConnect(Instance, 0, 0LL);
  }
  WarBoardTaskBase__OnEnd((WarBoardTaskBase_o *)this, 0LL);
}


void __fastcall WarBoardAPIRequestTask__OnStart(WarBoardAPIRequestTask_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct RequestBase_o *request; // x20
  BattleServantConfConponent_o *p_fields; // x20
  System_Delegate_o *CallBack; // t1
  NetworkManager_ResultCallbackFunc_o *v8; // x22
  System_Int32_array **v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  RequestBase_o *Instance; // x0

  if ( (byte_4186798 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&Method_WarBoardAPIRequestTask_requestComplete__, v4);
    byte_4186798 = 1;
  }
  WarBoardTaskBase__OnStart((WarBoardTaskBase_o *)this, 0LL);
  ((void (__fastcall *)(WarBoardAPIRequestTask_o *, void *))this->klass->vtable._9_SetRequest.method)(
    this,
    this->klass[1]._1.image);
  request = this->fields.request;
  if ( !request )
  {
    ((void (__fastcall *)(WarBoardAPIRequestTask_o *, Il2CppMethodPointer))this->klass->vtable._6_OnEnd.method)(
      this,
      this->klass->vtable._7_OnPause.methodPtr);
    return;
  }
  CallBack = (System_Delegate_o *)request->fields.CallBack;
  p_fields = (BattleServantConfConponent_o *)&request->fields;
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_WarBoardAPIRequestTask_requestComplete__,
    0LL);
  v9 = (System_Int32_array **)System_Delegate__Combine(CallBack, (System_Delegate_o *)v8, 0LL);
  if ( v9 && *v9 != (System_Int32_array *)NetworkManager_ResultCallbackFunc_TypeInfo )
  {
    Instance = (RequestBase_o *)sub_B2C728(v9);
    goto LABEL_18;
  }
  p_fields->klass = (BattleServantConfConponent_c *)v9;
  sub_B2C2F8(p_fields, v9, v10, v11, v12, v13, v14, v15);
  if ( this->fields.requestDone )
    return;
  Instance = this->fields.request;
  if ( !Instance )
LABEL_18:
    sub_B2C434(Instance, v16);
  if ( this->fields.onStartBeginRequest )
  {
    RequestBase__beginRequest(Instance, 0LL);
    return;
  }
  if ( (((__int64 (__fastcall *)(RequestBase_o *, Il2CppMethodPointer))Instance->klass->vtable._8_isBackgroundRequest.method)(
          Instance,
          Instance->klass->vtable._9_isShowConnect.methodPtr) & 1) != 0 )
    goto LABEL_15;
  Instance = this->fields.request;
  if ( !Instance )
    goto LABEL_18;
  if ( (((__int64 (__fastcall *)(RequestBase_o *, Il2CppMethodPointer))Instance->klass->vtable._9_isShowConnect.method)(
          Instance,
          Instance->klass->vtable._10_requestCompleted.methodPtr) & 1) == 0 )
  {
LABEL_15:
    this->fields.isShowConnect = 1;
    Instance = (RequestBase_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetConnect((CommonUI_o *)Instance, 1, 0LL);
      return;
    }
    goto LABEL_18;
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct System_String_o **p_responseStr; // x0

  this->fields.responseStr = result;
  p_responseStr = &this->fields.responseStr;
  *((_BYTE *)p_responseStr - 15) = 1;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)p_responseStr,
    (System_Int32_array **)result,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v9; // x21
  UnityEngine_WaitUntil_o *v10; // x20
  int32_t v11; // w8

  if ( (byte_4185719 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Func_bool___ctor__, method);
    sub_B2C35C(&System_Func_bool__TypeInfo, v3);
    sub_B2C35C(&UnityEngine_WaitUntil_TypeInfo, v4);
    sub_B2C35C(&Method_WarBoardAPIRequestTask__Execute_b__11_0__, v5);
    byte_4185719 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v11 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v9 = (System_Func_bool__o *)sub_B2C42C(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v9,
      _4__this,
      Method_WarBoardAPIRequestTask__Execute_b__11_0__,
      (const MethodInfo_26FE8F8 *)Method_System_Func_bool___ctor__);
    v10 = (UnityEngine_WaitUntil_o *)sub_B2C42C(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v10, v9, 0LL);
    this->fields.__2__current = (Il2CppObject *)v10;
    sub_B2C2F8(&this->fields.__2__current, v10);
    v11 = 1;
    result = 1;
  }
  this->fields.__1__state = v11;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_WarBoardAPIRequestTask__Execute_d__11_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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