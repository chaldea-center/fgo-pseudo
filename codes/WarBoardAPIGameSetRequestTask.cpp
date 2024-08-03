void __fastcall WarBoardAPIGameSetRequestTask___ctor(
        WarBoardAPIGameSetRequestTask_o *this,
        int32_t result,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  WarBoardAPIRequestTask___ctor_35375264((WarBoardAPIRequestTask_o *)this, resultCallback, onStartBeginRequest, 0LL);
  this->fields.gameResult = result;
}


void __fastcall WarBoardAPIGameSetRequestTask__SetRequest(
        WarBoardAPIGameSetRequestTask_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  WarBoardData_o *monitor; // x20
  WarBoardFinishRequest_o *v7; // x21
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49FA314 & 1) == 0 )
  {
    sub_1B640C8(&Method_NetworkManager_getRequest_WarBoardFinishRequest___, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    byte_49FA314 = 1;
  }
  WarBoardAPIRequestTask__SetRequest((WarBoardAPIRequestTask_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  monitor = (WarBoardData_o *)Instance[27].monitor;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               0LL,
               (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_WarBoardFinishRequest___);
  if ( !monitor
    || (v7 = (WarBoardFinishRequest_o *)Instance, Instance = (Il2CppObject *)WarBoardData__get_id(monitor, 0LL), !v7) )
  {
LABEL_9:
    sub_1B64324(Instance);
  }
  WarBoardFinishRequest__beginRequest(
    v7,
    (int32_t)Instance,
    this->fields.gameResult,
    monitor->fields.winCondId,
    monitor->fields.winCondGroup,
    0LL);
  this->fields.request = (struct RequestBase_o *)v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.request, (int32_t)v7, v8, v9);
}