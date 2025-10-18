void WarBoardAPIRequestTask___ctor(
        WarBoardAPIRequestTask_o *this,
        RequestBase_o *request,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x0
  struct RequestBase_o *v12; // x21
  CGThumbnailListItem_o *p_fields; // x21
  System_Delegate_o *CallBack; // t1
  NetworkManager_ResultCallbackFunc_o *v15; // x23
  System_Delegate_o *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  WarBoardAPIRequestTask_c *v19; // x8
  NetworkManager_ResultCallbackFunc_c *v20; // x1
  System_Delegate_o *v21; // t1
  WarBoardAPIRequestTask_c *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  NetworkManager_ResultCallbackFunc_c *v25; // x1

  if ( (byte_4C40C16 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C37058(&Method_WarBoardAPIRequestTask_requestComplete__);
    byte_4C40C16 = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)request);
  this->fields.request = request;
  this->fields.onStartBeginRequest = onStartBeginRequest;
  this->fields.requestDone = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.request, (int32_t)request, v9, v10);
  v12 = this->fields.request;
  if ( !v12 )
    sub_1C372B4(v11);
  CallBack = (System_Delegate_o *)v12->fields.CallBack;
  p_fields = (CGThumbnailListItem_o *)&v12->fields;
  v15 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v15,
    (Il2CppObject *)this,
    Method_WarBoardAPIRequestTask_requestComplete__,
    0);
  v16 = System_Delegate__Combine(CallBack, (System_Delegate_o *)v15, 0);
  v19 = (WarBoardAPIRequestTask_c *)v16;
  if ( v16 )
  {
    v20 = NetworkManager_ResultCallbackFunc_TypeInfo;
    if ( (NetworkManager_ResultCallbackFunc_c *)v16->klass != NetworkManager_ResultCallbackFunc_TypeInfo )
      goto LABEL_12;
    p_fields->klass = (CGThumbnailListItem_c *)v16;
    if ( (NetworkManager_ResultCallbackFunc_c *)v16->klass != v20 )
      goto LABEL_12;
  }
  else
  {
    p_fields->klass = 0;
  }
  sub_1C36FFC(p_fields, (int32_t)v16, v17, v18);
  v21 = (System_Delegate_o *)this->fields.resultCallback;
  this = (WarBoardAPIRequestTask_o *)((char *)this + 72);
  v22 = (WarBoardAPIRequestTask_c *)System_Delegate__Combine(v21, (System_Delegate_o *)resultCallback, 0);
  v19 = v22;
  if ( !v22 )
  {
LABEL_13:
    this->klass = v19;
    goto LABEL_14;
  }
  v25 = NetworkManager_ResultCallbackFunc_TypeInfo;
  if ( v22->_1.image != NetworkManager_ResultCallbackFunc_TypeInfo || (this->klass = v22, v22->_1.image != v25) )
  {
LABEL_12:
    sub_1C37574(v19);
    goto LABEL_13;
  }
LABEL_14:
  sub_1C36FFC((CGThumbnailListItem_o *)this, (int32_t)v19, v23, v24);
}


void WarBoardAPIRequestTask___ctor_38258280(
        WarBoardAPIRequestTask_o *this,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_resultCallback; // x19
  System_Delegate_o *v8; // t1
  System_Delegate_o *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Delegate_o *v12; // x8
  NetworkManager_ResultCallbackFunc_c *v13; // x1

  if ( (byte_4C40C17 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C40C17 = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)resultCallback);
  v8 = (System_Delegate_o *)this->fields.resultCallback;
  p_resultCallback = (CGThumbnailListItem_o *)&this->fields.resultCallback;
  LOBYTE(p_resultCallback[-1].fields._ThumbnailSpritePath_k__BackingField) = onStartBeginRequest;
  BYTE1(p_resultCallback[-1].fields._ThumbnailSpritePath_k__BackingField) = 0;
  v9 = System_Delegate__Combine(v8, (System_Delegate_o *)resultCallback, 0);
  v12 = v9;
  if ( !v9 )
    goto LABEL_7;
  v13 = NetworkManager_ResultCallbackFunc_TypeInfo;
  if ( (NetworkManager_ResultCallbackFunc_c *)v9->klass != NetworkManager_ResultCallbackFunc_TypeInfo
    || (p_resultCallback->klass = (CGThumbnailListItem_c *)v9, (NetworkManager_ResultCallbackFunc_c *)v9->klass != v13) )
  {
    sub_1C37574(v9);
LABEL_7:
    p_resultCallback->klass = (CGThumbnailListItem_c *)v12;
  }
  sub_1C36FFC(p_resultCallback, (int32_t)v12, v10, v11);
}


System_Collections_IEnumerator_o *WarBoardAPIRequestTask__Execute(
        WarBoardAPIRequestTask_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C40C19 & 1) == 0 )
  {
    sub_1C37058(&WarBoardAPIRequestTask__Execute_d__11_TypeInfo);
    byte_4C40C19 = 1;
  }
  v3 = sub_1C372A4(WarBoardAPIRequestTask__Execute_d__11_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void WarBoardAPIRequestTask__OnEnd(WarBoardAPIRequestTask_o *this, const MethodInfo *method)
{
  struct NetworkManager_ResultCallbackFunc_o *resultCallback; // x8
  Il2CppObject *Instance; // x0
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  if ( (byte_4C40C1A & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C40C1A = 1;
  }
  resultCallback = this->fields.resultCallback;
  if ( resultCallback )
    ((void (__fastcall *)(intptr_t, struct System_String_o *, intptr_t))resultCallback->fields.invoke_impl)(
      resultCallback->fields.method_code,
      this->fields.responseStr,
      resultCallback->fields.method);
  if ( this->fields.isShowConnect )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1C372B4(0);
    CommonUI__SetConnect((CommonUI_o *)Instance, 0, 0);
  }
  EndCallback = this->fields.EndCallback;
  this->fields._isPlaying_k__BackingField = 0;
  if ( EndCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))EndCallback->fields.invoke_impl)(
      EndCallback->fields.method_code,
      EndCallback->fields.method);
}


void WarBoardAPIRequestTask__OnStart(WarBoardAPIRequestTask_o *this, const MethodInfo *method)
{
  struct WarBoardTaskBase_TaskCallback_o *StartCallback; // x8
  long double v4; // q0
  struct RequestBase_o *request; // x20
  CGThumbnailListItem_o *p_fields; // x20
  System_Delegate_o *CallBack; // t1
  NetworkManager_ResultCallbackFunc_o *v8; // x22
  System_Delegate_o *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  NetworkManager_ResultCallbackFunc_c *v12; // x1
  RequestBase_o *Instance; // x0

  if ( (byte_4C40C18 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_WarBoardAPIRequestTask_requestComplete__);
    byte_4C40C18 = 1;
  }
  StartCallback = this->fields.StartCallback;
  this->fields._isPlaying_k__BackingField = 1;
  if ( StartCallback )
    ((void (__fastcall *)(intptr_t, intptr_t))StartCallback->fields.invoke_impl)(
      StartCallback->fields.method_code,
      StartCallback->fields.method);
  ((void (__fastcall *)(WarBoardAPIRequestTask_o *, const MethodInfo *))this->klass->vtable._9_SetRequest.methodPtr)(
    this,
    this->klass->vtable._9_SetRequest.method);
  request = this->fields.request;
  if ( !request )
    goto LABEL_10;
  CallBack = (System_Delegate_o *)request->fields.CallBack;
  p_fields = (CGThumbnailListItem_o *)&request->fields;
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v8, (Il2CppObject *)this, Method_WarBoardAPIRequestTask_requestComplete__, 0);
  v9 = System_Delegate__Combine(CallBack, (System_Delegate_o *)v8, 0);
  if ( v9 )
  {
    v12 = NetworkManager_ResultCallbackFunc_TypeInfo;
    if ( (NetworkManager_ResultCallbackFunc_c *)v9->klass != NetworkManager_ResultCallbackFunc_TypeInfo
      || (p_fields->klass = (CGThumbnailListItem_c *)v9, (NetworkManager_ResultCallbackFunc_c *)v9->klass != v12) )
    {
      v4 = sub_1C37574(v9);
LABEL_10:
      ((void (__fastcall *)(WarBoardAPIRequestTask_o *, const MethodInfo *, long double))this->klass->vtable._6_OnEnd.methodPtr)(
        this,
        this->klass->vtable._6_OnEnd.method,
        v4);
      return;
    }
  }
  else
  {
    p_fields->klass = 0;
  }
  sub_1C36FFC(p_fields, (int32_t)v9, v10, v11);
  if ( !this->fields.requestDone )
  {
    Instance = this->fields.request;
    if ( !Instance )
      goto LABEL_22;
    if ( this->fields.onStartBeginRequest )
    {
      RequestBase__beginRequest(Instance, 0);
      return;
    }
    if ( (((__int64 (__fastcall *)(RequestBase_o *, const MethodInfo *))Instance->klass->vtable._8_isBackgroundRequest.methodPtr)(
            Instance,
            Instance->klass->vtable._8_isBackgroundRequest.method)
        & 1) == 0 )
    {
      Instance = this->fields.request;
      if ( !Instance )
        goto LABEL_22;
      if ( (((__int64 (__fastcall *)(RequestBase_o *, const MethodInfo *))Instance->klass->vtable._9_isShowConnect.methodPtr)(
              Instance,
              Instance->klass->vtable._9_isShowConnect.method)
          & 1) != 0 )
        return;
    }
    this->fields.isShowConnect = 1;
    Instance = (RequestBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetConnect((CommonUI_o *)Instance, 1, 0);
      return;
    }
LABEL_22:
    sub_1C372B4(Instance);
  }
}


void WarBoardAPIRequestTask__SetRequest(WarBoardAPIRequestTask_o *this, const MethodInfo *method)
{
  ;
}


bool WarBoardAPIRequestTask___Execute_b__11_0(WarBoardAPIRequestTask_o *this, const MethodInfo *method)
{
  return this->fields.requestDone;
}


void WarBoardAPIRequestTask__requestComplete(
        WarBoardAPIRequestTask_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct System_String_o **p_responseStr; // x0

  this->fields.responseStr = result;
  p_responseStr = &this->fields.responseStr;
  *((_BYTE *)p_responseStr - 15) = 1;
  sub_1C36FFC((CGThumbnailListItem_o *)p_responseStr, (int32_t)result, (int32_t)method, v3);
}


void WarBoardAPIRequestTask__Execute_d__11___ctor(
        WarBoardAPIRequestTask__Execute_d__11_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool WarBoardAPIRequestTask__Execute_d__11__MoveNext(
        WarBoardAPIRequestTask__Execute_d__11_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v6; // x21
  UnityEngine_WaitUntil_o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w8

  if ( (byte_4C40C1B & 1) == 0 )
  {
    sub_1C37058(&System_Func_bool__TypeInfo);
    sub_1C37058(&UnityEngine_WaitUntil_TypeInfo);
    sub_1C37058(&Method_WarBoardAPIRequestTask__Execute_b__11_0__);
    byte_4C40C1B = 1;
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
    v6 = (System_Func_bool__o *)sub_1C372A4(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v6, _4__this, Method_WarBoardAPIRequestTask__Execute_b__11_0__, 0);
    v7 = (UnityEngine_WaitUntil_o *)sub_1C372A4(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v7, v6, 0);
    this->fields.__2__current = (Il2CppObject *)v7;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v7, v8, v9);
    v10 = 1;
    result = 1;
  }
  this->fields.__1__state = v10;
  return result;
}


Il2CppObject *WarBoardAPIRequestTask__Execute_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        WarBoardAPIRequestTask__Execute_d__11_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn WarBoardAPIRequestTask__Execute_d__11__System_Collections_IEnumerator_Reset(
        WarBoardAPIRequestTask__Execute_d__11_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_WarBoardAPIRequestTask__Execute_d__11_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *WarBoardAPIRequestTask__Execute_d__11__System_Collections_IEnumerator_get_Current(
        WarBoardAPIRequestTask__Execute_d__11_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void WarBoardAPIRequestTask__Execute_d__11__System_IDisposable_Dispose(
        WarBoardAPIRequestTask__Execute_d__11_o *this,
        const MethodInfo *method)
{
  ;
}