// local variable allocation has failed, the output may be wrong!
void WarBoardAPIGameSetRequestTask___ctor(
        WarBoardAPIGameSetRequestTask_o *this,
        int32_t result,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  WarBoardAPIRequestTask___ctor_38162528(
    (WarBoardAPIRequestTask_o *)this,
    resultCallback,
    onStartBeginRequest,
    (const MethodInfo *)onStartBeginRequest);
  this->fields.gameResult = result;
}


void WarBoardAPIGameSetRequestTask__SetRequest(WarBoardAPIGameSetRequestTask_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  WarBoardData_o *monitor; // x20
  WarBoardFinishRequest_o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C35637 & 1) == 0 )
  {
    sub_1C32C20(&Method_NetworkManager_getRequest_WarBoardFinishRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C35637 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  monitor = (WarBoardData_o *)Instance[27].monitor;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               0,
               (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_WarBoardFinishRequest___);
  if ( !monitor
    || (v5 = (WarBoardFinishRequest_o *)Instance, Instance = (Il2CppObject *)WarBoardData__get_id(monitor, 0), !v5) )
  {
LABEL_9:
    sub_1C32E7C(Instance);
  }
  WarBoardFinishRequest__beginRequest(
    v5,
    (int32_t)Instance,
    this->fields.gameResult,
    monitor->fields.winCondId,
    monitor->fields.winCondGroup,
    0);
  this->fields.request = (struct RequestBase_o *)v5;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.request, (int32_t)v5, v6, v7);
}