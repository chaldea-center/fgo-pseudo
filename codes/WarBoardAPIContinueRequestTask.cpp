// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAPIContinueRequestTask___ctor(
        WarBoardAPIContinueRequestTask_o *this,
        int32_t consume,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  WarBoardAPIRequestTask___ctor_22956192(
    (WarBoardAPIRequestTask_o *)this,
    resultCallback,
    onStartBeginRequest,
    (const MethodInfo *)onStartBeginRequest);
  this->fields.consumeType = consume;
}


void __fastcall WarBoardAPIContinueRequestTask__SetRequest(
        WarBoardAPIContinueRequestTask_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  WarBoardData_o *monitor; // x20
  RequestBase_o *Request_WarBoardWallAttackRequest; // x0
  WarBoardContinueRequest_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  int32_t id; // w0

  if ( (byte_40F8C00 & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_WarBoardContinueRequest___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    byte_40F8C00 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  monitor = (WarBoardData_o *)Instance[4].monitor;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (RequestBase_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                         0LL,
                                                         (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_WarBoardContinueRequest___);
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_12;
  v8 = (WarBoardContinueRequest_o *)Request_WarBoardWallAttackRequest;
  if ( !RequestBase__beginRetryRequest(Request_WarBoardWallAttackRequest, 0, 0LL) )
  {
    if ( monitor )
    {
      id = WarBoardData__get_id(monitor, 0LL);
      WarBoardContinueRequest__beginRequest(v8, id, this->fields.consumeType, monitor, 0LL);
      goto LABEL_11;
    }
LABEL_12:
    sub_B170D4();
  }
LABEL_11:
  this->fields.request = (struct RequestBase_o *)v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.request,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}