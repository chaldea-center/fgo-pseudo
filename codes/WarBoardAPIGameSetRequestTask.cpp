// local variable allocation has failed, the output may be wrong!
void WarBoardAPIGameSetRequestTask___ctor(
        WarBoardAPIGameSetRequestTask_o *this,
        int32_t result,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  WarBoardAPIRequestTask___ctor_38043512(
    (WarBoardAPIRequestTask_o *)this,
    resultCallback,
    onStartBeginRequest,
    (const MethodInfo *)onStartBeginRequest);
  this->fields.gameResult = result;
}


void WarBoardAPIGameSetRequestTask__SetRequest(WarBoardAPIGameSetRequestTask_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  WarBoardData_o *monitor; // x20
  WarBoardFinishRequest_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C24F62 & 1) == 0 )
  {
    sub_1C2D490(&Method_NetworkManager_getRequest_WarBoardFinishRequest___);
    sub_1C2D490(&NetworkManager_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C24F62 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  monitor = (WarBoardData_o *)Instance[27].monitor;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               0,
               (const MethodInfo_31599E8 *)Method_NetworkManager_getRequest_WarBoardFinishRequest___);
  if ( !monitor
    || (v6 = (WarBoardFinishRequest_o *)Instance, Instance = (Il2CppObject *)WarBoardData__get_id(monitor, 0), !v6) )
  {
LABEL_9:
    sub_1C2D6EC(Instance, v4);
  }
  WarBoardFinishRequest__beginRequest(
    v6,
    (int32_t)Instance,
    this->fields.gameResult,
    monitor->fields.winCondId,
    monitor->fields.winCondGroup,
    0);
  this->fields.request = (struct RequestBase_o *)v6;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.request, (int32_t)v6, v7, v8);
}