void __fastcall WarBoardAPIContinueRequestTask___ctor(
        WarBoardAPIContinueRequestTask_o *this,
        int32_t consume,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  WarBoardAPIRequestTask___ctor_34519832((WarBoardAPIRequestTask_o *)this, resultCallback, onStartBeginRequest, 0LL);
  this->fields.consumeType = consume;
}


void __fastcall WarBoardAPIContinueRequestTask__SetRequest(
        WarBoardAPIContinueRequestTask_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  WarBoardData_o *monitor; // x20
  WarBoardContinueRequest_o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t id; // w0

  if ( (byte_48E07AC & 1) == 0 )
  {
    sub_1B00CCC(&Method_NetworkManager_getRequest_WarBoardContinueRequest___, method);
    sub_1B00CCC(&NetworkManager_TypeInfo, v3);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    byte_48E07AC = 1;
  }
  WarBoardAPIRequestTask__SetRequest((WarBoardAPIRequestTask_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  monitor = (WarBoardData_o *)Instance[27].monitor;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               0LL,
               (const MethodInfo_2DD4818 *)Method_NetworkManager_getRequest_WarBoardContinueRequest___);
  if ( !Instance )
    goto LABEL_11;
  v8 = (WarBoardContinueRequest_o *)Instance;
  Instance = (Il2CppObject *)RequestBase__beginRetryRequest((RequestBase_o *)Instance, 0, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( monitor )
    {
      id = WarBoardData__get_id(monitor, 0LL);
      WarBoardContinueRequest__beginRequest(v8, id, this->fields.consumeType, monitor, 0LL);
      goto LABEL_10;
    }
LABEL_11:
    sub_1B00F28(Instance, v6);
  }
LABEL_10:
  this->fields.request = (struct RequestBase_o *)v8;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.request, (int32_t)v8, v9, v10);
}