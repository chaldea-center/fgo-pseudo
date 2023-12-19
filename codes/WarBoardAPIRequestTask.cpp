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
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  struct RequestBase_o *v20; // x21
  BattleServantConfConponent_o *p_fields; // x21
  System_Delegate_o *CallBack; // t1
  NetworkManager_ResultCallbackFunc_o *v23; // x23
  System_Int32_array **v24; // x0
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x8
  BattleServantConfConponent_o *p_resultCallback; // x19
  System_Delegate_o *v33; // t1
  System_Int32_array **v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7

  if ( (byte_40F8C04 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, request);
    sub_B16FFC(&Method_WarBoardAPIRequestTask_requestComplete__, v9);
    byte_40F8C04 = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, 0LL);
  this->fields.request = request;
  *(_WORD *)&this->fields.onStartBeginRequest = onStartBeginRequest;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.request,
    (System_Int32_array **)request,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v20 = this->fields.request;
  if ( !v20 )
LABEL_10:
    sub_B170D4();
  CallBack = (System_Delegate_o *)v20->fields.CallBack;
  p_fields = (BattleServantConfConponent_o *)&v20->fields;
  v23 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 v16,
                                                 v17,
                                                 v18,
                                                 v19);
  NetworkManager_ResultCallbackFunc___ctor(
    v23,
    (Il2CppObject *)this,
    Method_WarBoardAPIRequestTask_requestComplete__,
    0LL);
  v24 = (System_Int32_array **)System_Delegate__Combine(CallBack, (System_Delegate_o *)v23, 0LL);
  v31 = v24;
  if ( v24 && *v24 != (System_Int32_array *)NetworkManager_ResultCallbackFunc_TypeInfo
    || (p_fields->klass = (BattleServantConfConponent_c *)v24,
        sub_B16F98(p_fields, v24, v25, v26, v27, v28, v29, v30),
        v33 = (System_Delegate_o *)this->fields.resultCallback,
        p_resultCallback = (BattleServantConfConponent_o *)&this->fields.resultCallback,
        v34 = (System_Int32_array **)System_Delegate__Combine(v33, (System_Delegate_o *)resultCallback, 0LL),
        (v31 = v34) != 0LL)
    && *v34 != (System_Int32_array *)NetworkManager_ResultCallbackFunc_TypeInfo )
  {
    sub_B173C8(v31);
    goto LABEL_10;
  }
  p_resultCallback->klass = (BattleServantConfConponent_c *)v34;
  sub_B16F98(p_resultCallback, v34, v35, v36, v37, v38, v39, v40);
}


void __fastcall WarBoardAPIRequestTask___ctor_22956192(
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

  if ( (byte_40F8C05 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, resultCallback);
    byte_40F8C05 = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, 0LL);
  v8 = (System_Delegate_o *)this->fields.resultCallback;
  p_resultCallback = (BattleServantConfConponent_o *)&this->fields.resultCallback;
  *(_WORD *)&p_resultCallback[-1].fields.isOpenAfter = onStartBeginRequest;
  v9 = (System_Int32_array **)System_Delegate__Combine(v8, (System_Delegate_o *)resultCallback, 0LL);
  if ( v9 && *v9 != (System_Int32_array *)NetworkManager_ResultCallbackFunc_TypeInfo )
  {
    v16 = (WarBoardAPIContinueRequestTask_o *)sub_B173C8(v9);
    WarBoardAPIContinueRequestTask__SetRequest(v16, v17);
  }
  else
  {
    p_resultCallback->klass = (BattleServantConfConponent_c *)v9;
    sub_B16F98(p_resultCallback, v9, v10, v11, v12, v13, v14, v15);
  }
}


System_Collections_IEnumerator_o *__fastcall WarBoardAPIRequestTask__Execute(
        WarBoardAPIRequestTask_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F8C07 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardAPIRequestTask__Execute_d__11_TypeInfo, method);
    byte_40F8C07 = 1;
  }
  v6 = sub_B170CC(WarBoardAPIRequestTask__Execute_d__11_TypeInfo, method, v2, v3, v4);
  WarBoardAPIRequestTask__Execute_d__11___ctor((WarBoardAPIRequestTask__Execute_d__11_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall WarBoardAPIRequestTask__OnEnd(WarBoardAPIRequestTask_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *resultCallback; // x0
  CommonUI_o *Instance; // x0

  if ( (byte_40F8C08 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_40F8C08 = 1;
  }
  resultCallback = this->fields.resultCallback;
  if ( resultCallback )
    NetworkManager_ResultCallbackFunc__Invoke(resultCallback, this->fields.responseStr, 0LL);
  if ( this->fields.isShowConnect )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_B170D4();
    CommonUI__SetConnect(Instance, 0, 0LL);
  }
  WarBoardTaskBase__OnEnd((WarBoardTaskBase_o *)this, 0LL);
}


void __fastcall WarBoardAPIRequestTask__OnStart(WarBoardAPIRequestTask_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  struct RequestBase_o *request; // x20
  BattleServantConfConponent_o *p_fields; // x20
  System_Delegate_o *CallBack; // t1
  NetworkManager_ResultCallbackFunc_o *v12; // x22
  System_Int32_array **v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  RequestBase_o *v20; // x0
  struct RequestBase_o *v21; // x0
  CommonUI_o *Instance; // x0

  if ( (byte_40F8C06 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&Method_WarBoardAPIRequestTask_requestComplete__, v4);
    byte_40F8C06 = 1;
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
  v12 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(NetworkManager_ResultCallbackFunc_TypeInfo, v5, v6, v7, v8);
  NetworkManager_ResultCallbackFunc___ctor(
    v12,
    (Il2CppObject *)this,
    Method_WarBoardAPIRequestTask_requestComplete__,
    0LL);
  v13 = (System_Int32_array **)System_Delegate__Combine(CallBack, (System_Delegate_o *)v12, 0LL);
  if ( v13 && *v13 != (System_Int32_array *)NetworkManager_ResultCallbackFunc_TypeInfo )
  {
    sub_B173C8(v13);
    goto LABEL_18;
  }
  p_fields->klass = (BattleServantConfConponent_c *)v13;
  sub_B16F98(p_fields, v13, v14, v15, v16, v17, v18, v19);
  if ( this->fields.requestDone )
    return;
  v20 = this->fields.request;
  if ( !v20 )
LABEL_18:
    sub_B170D4();
  if ( this->fields.onStartBeginRequest )
  {
    RequestBase__beginRequest(v20, 0LL);
    return;
  }
  if ( (((__int64 (__fastcall *)(RequestBase_o *, Il2CppMethodPointer))v20->klass->vtable._8_isBackgroundRequest.method)(
          v20,
          v20->klass->vtable._9_isShowConnect.methodPtr) & 1) != 0 )
    goto LABEL_15;
  v21 = this->fields.request;
  if ( !v21 )
    goto LABEL_18;
  if ( (((__int64 (__fastcall *)(struct RequestBase_o *, Il2CppMethodPointer))v21->klass->vtable._9_isShowConnect.method)(
          v21,
          v21->klass->vtable._10_requestCompleted.methodPtr) & 1) == 0 )
  {
LABEL_15:
    this->fields.isShowConnect = 1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetConnect(Instance, 1, 0LL);
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
  sub_B16F98(
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  UnityEngine_WaitUntil_o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  int32_t v24; // w8

  if ( (byte_40F7ABB & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_bool___ctor__, method);
    sub_B16FFC(&System_Func_bool__TypeInfo, v6);
    sub_B16FFC(&UnityEngine_WaitUntil_TypeInfo, v7);
    sub_B16FFC(&Method_WarBoardAPIRequestTask__Execute_b__11_0__, v8);
    byte_40F7ABB = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v24 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v12 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, method, v2, v3, v4);
    System_Func_bool____ctor(
      v12,
      _4__this,
      Method_WarBoardAPIRequestTask__Execute_b__11_0__,
      (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
    v17 = (UnityEngine_WaitUntil_o *)sub_B170CC(UnityEngine_WaitUntil_TypeInfo, v13, v14, v15, v16);
    UnityEngine_WaitUntil___ctor(v17, v12, 0LL);
    this->fields.__2__current = (Il2CppObject *)v17;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__2__current,
      (System_Int32_array **)v17,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    v24 = 1;
    result = 1;
  }
  this->fields.__1__state = v24;
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
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_WarBoardAPIRequestTask__Execute_d__11_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
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