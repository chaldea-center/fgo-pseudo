void __fastcall WarBoardAPITurnEndRequestTask___ctor(
        WarBoardAPITurnEndRequestTask_o *this,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  WarBoardAPIRequestTask___ctor_22956192((WarBoardAPIRequestTask_o *)this, resultCallback, onStartBeginRequest, method);
}


void __fastcall WarBoardAPITurnEndRequestTask__SetRequest(
        WarBoardAPITurnEndRequestTask_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  WarBoardData_o *monitor; // x20
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  WarBoardTurnEndRequest_o *v8; // x21
  int32_t id; // w0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_40F8C0B & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_WarBoardTurnEndRequest___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    byte_40F8C0B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  monitor = (WarBoardData_o *)Instance[4].monitor;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        0LL,
                                        (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_WarBoardTurnEndRequest___);
  if ( !monitor
    || (v8 = (WarBoardTurnEndRequest_o *)Request_WarBoardWallAttackRequest, id = WarBoardData__get_id(monitor, 0LL), !v8) )
  {
LABEL_10:
    sub_B170D4();
  }
  WarBoardTurnEndRequest__beginRequest(v8, id, monitor, 0LL);
  this->fields.request = (struct RequestBase_o *)v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.request,
    (System_Int32_array **)v8,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}