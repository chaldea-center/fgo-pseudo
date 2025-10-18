void WarBoardAPITurnEndRequestTask___ctor(
        WarBoardAPITurnEndRequestTask_o *this,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  WarBoardAPIRequestTask___ctor_38258280((WarBoardAPIRequestTask_o *)this, resultCallback, onStartBeginRequest, method);
}


void WarBoardAPITurnEndRequestTask__SetRequest(WarBoardAPITurnEndRequestTask_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  WarBoardData_o *monitor; // x20
  WarBoardTurnEndRequest_o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C40C1E & 1) == 0 )
  {
    sub_1C37058(&Method_NetworkManager_getRequest_WarBoardTurnEndRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C40C1E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  monitor = (WarBoardData_o *)Instance[27].monitor;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               0,
               (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_WarBoardTurnEndRequest___);
  if ( !monitor
    || (v5 = (WarBoardTurnEndRequest_o *)Instance, Instance = (Il2CppObject *)WarBoardData__get_id(monitor, 0), !v5) )
  {
LABEL_9:
    sub_1C372B4(Instance);
  }
  WarBoardTurnEndRequest__beginRequest(v5, (int32_t)Instance, monitor, 0);
  this->fields.request = (struct RequestBase_o *)v5;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.request, (int32_t)v5, v6, v7);
}