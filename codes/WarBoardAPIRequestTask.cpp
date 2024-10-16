void __fastcall WarBoardAPIRequestTask___ctor(
        WarBoardAPIRequestTask_o *this,
        RequestBase_o *request,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x0
  __int64 v13; // x1
  struct RequestBase_o *v14; // x21
  ServantStatusBattleListViewItem_o *p_fields; // x21
  System_Delegate_o *CallBack; // t1
  NetworkManager_ResultCallbackFunc_o *v17; // x23
  System_Delegate_o *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  WarBoardAPIRequestTask_c *v21; // x8
  NetworkManager_ResultCallbackFunc_c *v22; // x1
  System_Delegate_o *v23; // t1
  WarBoardAPIRequestTask_c *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  NetworkManager_ResultCallbackFunc_c *v27; // x1

  if ( (byte_4AB3BD4 & 1) == 0 )
  {
    sub_1BAB41C(&NetworkManager_ResultCallbackFunc_TypeInfo, request);
    sub_1BAB41C(&Method_WarBoardAPIRequestTask_requestComplete__, v9);
    byte_4AB3BD4 = 1;
  }
  WarBoardTaskBase___ctor((WarBoardTaskBase_o *)this, 0LL);
  this->fields.request = request;
  this->fields.onStartBeginRequest = onStartBeginRequest;
  this->fields.requestDone = 0;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.request, (int32_t)request, v10, v11);
  v14 = this->fields.request;
  if ( !v14 )
    sub_1BAB678(v12, v13);
  CallBack = (System_Delegate_o *)v14->fields.CallBack;
  p_fields = (ServantStatusBattleListViewItem_o *)&v14->fields;
  v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1BAB668(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v17,
    (Il2CppObject *)this,
    Method_WarBoardAPIRequestTask_requestComplete__,
    0LL);
  v18 = System_Delegate__Combine(CallBack, (System_Delegate_o *)v17, 0LL);
  v21 = (WarBoardAPIRequestTask_c *)v18;
  if ( v18 )
  {
    v22 = NetworkManager_ResultCallbackFunc_TypeInfo;
    if ( (NetworkManager_ResultCallbackFunc_c *)v18->klass != NetworkManager_ResultCallbackFunc_TypeInfo )
      goto LABEL_12;
    p_fields->klass = (ServantStatusBattleListViewItem_c *)v18;
    if ( (NetworkManager_ResultCallbackFunc_c *)v18->klass != v22 )
      goto LABEL_12;
  }
  else
  {
    p_fields->klass = 0LL;
  }
  sub_1BAB3C0(p_fields, (int32_t)v18, v19, v20);
  v23 = (System_Delegate_o *)this->fields.resultCallback;
  this = (WarBoardAPIRequestTask_o *)((char *)this + 72);
  v24 = (WarBoardAPIRequestTask_c *)System_Delegate__Combine(v23, (System_Delegate_o *)resultCallback, 0LL);
  v21 = v24;
  if ( !v24 )
  {
LABEL_13:
    this->klass = v21;
    goto LABEL_14;
  }
  v27 = NetworkManager_ResultCallbackFunc_TypeInfo;
  if ( v24->_1.image != NetworkManager_ResultCallbackFunc_TypeInfo || (this->klass = v24, v24->_1.image != v27) )
  {
LABEL_12:
    sub_1BAB938(v21);
    goto LABEL_13;
  }
LABEL_14:
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)this, (int32_t)v21, v25, v26);
}


void __fastcall WarBoardAPIRequestTask___ctor_36050576(
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

  if ( (byte_4AB3BD5 & 1) == 0 )
  {
    sub_1BAB41C(&NetworkManager_ResultCallbackFunc_TypeInfo, resultCallback);
    byte_4AB3BD5 = 1;
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
    sub_1BAB938(v9);
LABEL_7:
    p_resultCallback->klass = (ServantStatusBattleListViewItem_c *)v12;
  }
  sub_1BAB3C0(p_resultCallback, (int32_t)v12, v10, v11);
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

  if ( (byte_4AB3BD7 & 1) == 0 )
  {
    sub_1BAB41C(&WarBoardAPIRequestTask__Execute_d__11_TypeInfo, method);
    byte_4AB3BD7 = 1;
  }
  v3 = sub_1BAB668(WarBoardAPIRequestTask__Execute_d__11_TypeInfo);
  WarBoardAPIRequestTask__Execute_d__11___ctor((WarBoardAPIRequestTask__Execute_d__11_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1BAB678(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall WarBoardAPIRequestTask__OnEnd(WarBoardAPIRequestTask_o *this, const MethodInfo *method)
{
  struct NetworkManager_ResultCallbackFunc_o *resultCallback; // x8
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4AB3BD8 & 1) == 0 )
  {
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4AB3BD8 = 1;
  }
  resultCallback = this->fields.resultCallback;
  if ( resultCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct System_String_o *, _QWORD))resultCallback->fields.m_target)(
      resultCallback->fields.original_method_info,
      this->fields.responseStr,
      *(_QWORD *)&resultCallback->fields.extra_arg);
  if ( this->fields.isShowConnect )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      sub_1BAB678(0LL, v5);
    CommonUI__SetConnect((CommonUI_o *)Instance, 0, 0LL);
  }
  WarBoardTaskBase__OnEnd((WarBoardTaskBase_o *)this, 0LL);
}


void __fastcall WarBoardAPIRequestTask__OnStart(WarBoardAPIRequestTask_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  long double v5; // q0
  struct RequestBase_o *request; // x20
  ServantStatusBattleListViewItem_o *p_fields; // x20
  System_Delegate_o *CallBack; // t1
  NetworkManager_ResultCallbackFunc_o *v9; // x22
  System_Delegate_o *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  NetworkManager_ResultCallbackFunc_c *v13; // x1
  __int64 v14; // x1
  RequestBase_o *Instance; // x0

  if ( (byte_4AB3BD6 & 1) == 0 )
  {
    sub_1BAB41C(&NetworkManager_ResultCallbackFunc_TypeInfo, method);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1BAB41C(&Method_WarBoardAPIRequestTask_requestComplete__, v4);
    byte_4AB3BD6 = 1;
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
  v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1BAB668(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_WarBoardAPIRequestTask_requestComplete__,
    0LL);
  v10 = System_Delegate__Combine(CallBack, (System_Delegate_o *)v9, 0LL);
  if ( v10 )
  {
    v13 = NetworkManager_ResultCallbackFunc_TypeInfo;
    if ( (NetworkManager_ResultCallbackFunc_c *)v10->klass != NetworkManager_ResultCallbackFunc_TypeInfo
      || (p_fields->klass = (ServantStatusBattleListViewItem_c *)v10,
          (NetworkManager_ResultCallbackFunc_c *)v10->klass != v13) )
    {
      v5 = sub_1BAB938(v10);
LABEL_8:
      ((void (__fastcall *)(WarBoardAPIRequestTask_o *, Il2CppMethodPointer, long double))this->klass->vtable._6_OnEnd.method)(
        this,
        this->klass->vtable._7_OnPause.methodPtr,
        v5);
      return;
    }
  }
  else
  {
    p_fields->klass = 0LL;
  }
  sub_1BAB3C0(p_fields, (int32_t)v10, v11, v12);
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
    Instance = (RequestBase_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetConnect((CommonUI_o *)Instance, 1, 0LL);
      return;
    }
LABEL_20:
    sub_1BAB678(Instance, v14);
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
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)p_responseStr, (int32_t)result, (int32_t)method, v3);
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
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *_4__this; // x20
  System_Func_bool__o *v8; // x21
  UnityEngine_WaitUntil_o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w8

  if ( (byte_4AB3BDA & 1) == 0 )
  {
    sub_1BAB41C(&System_Func_bool__TypeInfo, method);
    sub_1BAB41C(&UnityEngine_WaitUntil_TypeInfo, v3);
    sub_1BAB41C(&Method_WarBoardAPIRequestTask__Execute_b__11_0__, v4);
    byte_4AB3BDA = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v12 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    this->fields.__1__state = -1;
    _4__this = (Il2CppObject *)this->fields.__4__this;
    v8 = (System_Func_bool__o *)sub_1BAB668(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(v8, _4__this, Method_WarBoardAPIRequestTask__Execute_b__11_0__, 0LL);
    v9 = (UnityEngine_WaitUntil_o *)sub_1BAB668(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v9, v8, 0LL);
    this->fields.__2__current = (Il2CppObject *)v9;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.__2__current, (int32_t)v9, v10, v11);
    v12 = 1;
    result = 1;
  }
  this->fields.__1__state = v12;
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

  v2 = sub_1BAB430(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BAB668(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BAB430(&Method_WarBoardAPIRequestTask__Execute_d__11_System_Collections_IEnumerator_Reset__);
  sub_1BAB544(v3, v4);
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