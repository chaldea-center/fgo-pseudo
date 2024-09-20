void __fastcall WarBoardAPIContinueRequestTask___ctor(
        WarBoardAPIContinueRequestTask_o *this,
        int32_t consume,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  WarBoardAPIRequestTask___ctor_35674108((WarBoardAPIRequestTask_o *)this, resultCallback, onStartBeginRequest, 0LL);
  this->fields.consumeType = consume;
}


void __fastcall WarBoardAPIContinueRequestTask__SetRequest(
        WarBoardAPIContinueRequestTask_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  WarBoardData_o *monitor; // x20
  WarBoardContinueRequest_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t id; // w0

  if ( (byte_4A590D3 & 1) == 0 )
  {
    sub_1B885B0(&Method_NetworkManager_getRequest_WarBoardContinueRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4A590D3 = 1;
  }
  WarBoardAPIRequestTask__SetRequest((WarBoardAPIRequestTask_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  monitor = (WarBoardData_o *)Instance[27].monitor;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               0LL,
               (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_WarBoardContinueRequest___);
  if ( !Instance )
    goto LABEL_11;
  v6 = (WarBoardContinueRequest_o *)Instance;
  Instance = (Il2CppObject *)RequestBase__beginRetryRequest((RequestBase_o *)Instance, 0, 0LL);
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( monitor )
    {
      id = WarBoardData__get_id(monitor, 0LL);
      WarBoardContinueRequest__beginRequest(v6, id, this->fields.consumeType, monitor, 0LL);
      goto LABEL_10;
    }
LABEL_11:
    sub_1B8880C(Instance, v4);
  }
LABEL_10:
  this->fields.request = (struct RequestBase_o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.request, (int32_t)v6, v7, v8);
}