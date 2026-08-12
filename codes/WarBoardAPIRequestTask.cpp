void WarBoardAPIRequestTask___ctor(
        WarBoardAPIRequestTask_o *this,
        RequestBase_o *request,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x0
  __int64 v16; // x1
  struct RequestBase_o *v17; // x21
  MissionNaviTransitionBoardItem_o *p_fields; // x21
  System_Delegate_o *CallBack; // t1
  NetworkManager_ResultCallbackFunc_o *v20; // x23
  System_Delegate_o *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  void *v28; // x8
  NetworkManager_ResultCallbackFunc_c *v29; // x1
  System_Delegate_o *v30; // t1
  WarBoardAPIRequestTask_c *v31; // x0
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7

  if ( (byte_596E37B & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_WarBoardAPIRequestTask_requestComplete__);
    byte_596E37B = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)request);
  this->fields.request = request;
  this->fields.onStartBeginRequest = onStartBeginRequest;
  this->fields.requestDone = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.request, (int32_t)request, v9, v10, v11, v12, v13, v14);
  v17 = this->fields.request;
  if ( !v17 )
    sub_2213CDC(v15, v16);
  CallBack = (System_Delegate_o *)v17->fields.CallBack;
  p_fields = (MissionNaviTransitionBoardItem_o *)&v17->fields;
  v20 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v20,
    (Il2CppObject *)this,
    Method_WarBoardAPIRequestTask_requestComplete__,
    0);
  v21 = System_Delegate__Combine(CallBack, (System_Delegate_o *)v20, 0);
  v28 = v21;
  if ( v21 )
  {
    v29 = NetworkManager_ResultCallbackFunc_TypeInfo;
    if ( (NetworkManager_ResultCallbackFunc_c *)v21->klass != NetworkManager_ResultCallbackFunc_TypeInfo )
      goto LABEL_12;
    p_fields->klass = (MissionNaviTransitionBoardItem_c *)v21;
    if ( (NetworkManager_ResultCallbackFunc_c *)v21->klass != v29 )
      goto LABEL_12;
  }
  else
  {
    p_fields->klass = 0;
  }
  sub_2213A04(p_fields, (int32_t)v21, v22, v23, v24, v25, v26, v27);
  v30 = (System_Delegate_o *)this->fields.resultCallback;
  this = (WarBoardAPIRequestTask_o *)((char *)this + 72);
  v31 = (WarBoardAPIRequestTask_c *)System_Delegate__Combine(v30, (System_Delegate_o *)resultCallback, 0);
  v28 = v31;
  if ( !v31 )
  {
LABEL_13:
    this->klass = 0;
    goto LABEL_14;
  }
  v29 = NetworkManager_ResultCallbackFunc_TypeInfo;
  if ( v31->_1.image != NetworkManager_ResultCallbackFunc_TypeInfo || (this->klass = v31, v31->_1.image != v29) )
  {
LABEL_12:
    sub_221405C(v28, v29, v22, v23);
    goto LABEL_13;
  }
LABEL_14:
  sub_2213A04((MissionNaviTransitionBoardItem_o *)this, (int32_t)v28, v22, v23, v32, v33, v34, v35);
}


void WarBoardAPIRequestTask___ctor_45157924(
        WarBoardAPIRequestTask_o *this,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  MissionNaviTransitionBoardItem_o *p_resultCallback; // x19
  System_Delegate_o *v8; // t1
  System_Delegate_o *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w8
  NetworkManager_ResultCallbackFunc_c *v17; // x1

  if ( (byte_596E37C & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_596E37C = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, (const MethodInfo *)resultCallback);
  v8 = (System_Delegate_o *)this->fields.resultCallback;
  p_resultCallback = (MissionNaviTransitionBoardItem_o *)&this->fields.resultCallback;
  LOBYTE(p_resultCallback[-1].fields._BoardType_k__BackingField) = onStartBeginRequest;
  BYTE1(p_resultCallback[-1].fields._BoardType_k__BackingField) = 0;
  v9 = System_Delegate__Combine(v8, (System_Delegate_o *)resultCallback, 0);
  v16 = (int)v9;
  if ( !v9 )
    goto LABEL_7;
  v17 = NetworkManager_ResultCallbackFunc_TypeInfo;
  if ( (NetworkManager_ResultCallbackFunc_c *)v9->klass != NetworkManager_ResultCallbackFunc_TypeInfo
    || (p_resultCallback->klass = (MissionNaviTransitionBoardItem_c *)v9,
        (NetworkManager_ResultCallbackFunc_c *)v9->klass != v17) )
  {
    sub_221405C(v9, v17, v10, v11);
LABEL_7:
    p_resultCallback->klass = 0;
  }
  sub_2213A04(p_resultCallback, v16, v10, v11, v12, v13, v14, v15);
}


System_Collections_IEnumerator_o *WarBoardAPIRequestTask__Execute(
        WarBoardAPIRequestTask_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596E37E & 1) == 0 )
  {
    sub_2213A60(&WarBoardAPIRequestTask__Execute_d__11_TypeInfo);
    byte_596E37E = 1;
  }
  v3 = sub_2213CCC(WarBoardAPIRequestTask__Execute_d__11_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void WarBoardAPIRequestTask__OnEnd(WarBoardAPIRequestTask_o *this, const MethodInfo *method)
{
  struct NetworkManager_ResultCallbackFunc_o *resultCallback; // x8
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  struct WarBoardTaskBase_TaskCallback_o *EndCallback; // x8

  if ( (byte_596E37F & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_596E37F = 1;
  }
  resultCallback = this->fields.resultCallback;
  if ( resultCallback )
    ((void (__fastcall *)(intptr_t, struct System_String_o *, intptr_t))resultCallback->fields.invoke_impl)(
      resultCallback->fields.method_code,
      this->fields.responseStr,
      resultCallback->fields.method);
  if ( this->fields.isShowConnect )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_2213CDC(0, v5);
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
  MissionNaviTransitionBoardItem_o *p_fields; // x20
  System_Delegate_o *CallBack; // t1
  NetworkManager_ResultCallbackFunc_o *v8; // x22
  System_Delegate_o *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  NetworkManager_ResultCallbackFunc_c *v16; // x1
  __int64 v17; // x1
  RequestBase_o *Instance; // x0

  if ( (byte_596E37D & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_2213A60(&Method_WarBoardAPIRequestTask_requestComplete__);
    byte_596E37D = 1;
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
  p_fields = (MissionNaviTransitionBoardItem_o *)&request->fields;
  v8 = (NetworkManager_ResultCallbackFunc_o *)sub_2213CCC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v8, (Il2CppObject *)this, Method_WarBoardAPIRequestTask_requestComplete__, 0);
  v9 = System_Delegate__Combine(CallBack, (System_Delegate_o *)v8, 0);
  if ( v9 )
  {
    v16 = NetworkManager_ResultCallbackFunc_TypeInfo;
    if ( (NetworkManager_ResultCallbackFunc_c *)v9->klass != NetworkManager_ResultCallbackFunc_TypeInfo
      || (p_fields->klass = (MissionNaviTransitionBoardItem_c *)v9,
          (NetworkManager_ResultCallbackFunc_c *)v9->klass != v16) )
    {
      v4 = sub_221405C(v9, v16, v10, v11);
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
  sub_2213A04(p_fields, (int32_t)v9, v10, v11, v12, v13, v14, v15);
  if ( !this->fields.requestDone )
  {
    Instance = this->fields.request;
    if ( this->fields.onStartBeginRequest )
    {
      if ( Instance )
      {
        RequestBase__beginRequest(Instance, 0);
        return;
      }
    }
    else
    {
      if ( !Instance )
        goto LABEL_23;
      if ( (((__int64 (__fastcall *)(RequestBase_o *, const MethodInfo *))Instance->klass->vtable._8_isBackgroundRequest.methodPtr)(
              Instance,
              Instance->klass->vtable._8_isBackgroundRequest.method)
          & 1) == 0 )
      {
        Instance = this->fields.request;
        if ( !Instance )
          goto LABEL_23;
        if ( (((__int64 (__fastcall *)(RequestBase_o *, const MethodInfo *))Instance->klass->vtable._9_isShowConnect.methodPtr)(
                Instance,
                Instance->klass->vtable._9_isShowConnect.method)
            & 1) != 0 )
          return;
      }
      this->fields.isShowConnect = 1;
      Instance = (RequestBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetConnect((CommonUI_o *)Instance, 1, 0);
        return;
      }
    }
LABEL_23:
    sub_2213CDC(Instance, v17);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o **p_responseStr; // x0

  this->fields.responseStr = result;
  p_responseStr = &this->fields.responseStr;
  *((_BYTE *)p_responseStr - 15) = 1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)p_responseStr,
    (int32_t)result,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int32_t _1__state; // w22
  int32_t v4; // w8
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v6; // x21
  UnityEngine_WaitUntil_o *v7; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_596E380 & 1) == 0 )
  {
    sub_2213A60(&System_Func_bool__TypeInfo);
    sub_2213A60(&UnityEngine_WaitUntil_TypeInfo);
    sub_2213A60(&Method_WarBoardAPIRequestTask__Execute_b__11_0__);
    byte_596E380 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( !_1__state )
  {
    _4__this = (Il2CppObject *)this->fields.__4__this;
    this->fields.__1__state = -1;
    v6 = (System_Func_bool__o *)sub_2213CCC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v6, _4__this, Method_WarBoardAPIRequestTask__Execute_b__11_0__, 0);
    v7 = (UnityEngine_WaitUntil_o *)sub_2213CCC(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v7, v6, 0);
    this->fields.__2__current = (Il2CppObject *)v7;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.__2__current, (int32_t)v7, v8, v9, v10, v11, v12, v13);
    v4 = 1;
    goto LABEL_7;
  }
  if ( _1__state == 1 )
  {
    v4 = -1;
LABEL_7:
    this->fields.__1__state = v4;
  }
  return _1__state == 0;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_WarBoardAPIRequestTask__Execute_d__11_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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