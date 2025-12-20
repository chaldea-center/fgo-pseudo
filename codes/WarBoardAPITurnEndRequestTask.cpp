void WarBoardAPITurnEndRequestTask___ctor(
        WarBoardAPITurnEndRequestTask_o *this,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  WarBoardAPIRequestTask___ctor_38909196((WarBoardAPIRequestTask_o *)this, resultCallback, onStartBeginRequest, method);
}


void WarBoardAPITurnEndRequestTask__SetRequest(WarBoardAPITurnEndRequestTask_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  WarBoardData_o *monitor; // x20
  WarBoardTurnEndRequest_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D2A3D7 & 1) == 0 )
  {
    sub_1C94098(&Method_NetworkManager_getRequest_WarBoardTurnEndRequest___);
    sub_1C94098(&NetworkManager_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2A3D7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  monitor = (WarBoardData_o *)Instance[27].monitor;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               0,
               (const MethodInfo_32282A8 *)Method_NetworkManager_getRequest_WarBoardTurnEndRequest___);
  if ( !monitor
    || (v6 = (WarBoardTurnEndRequest_o *)Instance, Instance = (Il2CppObject *)WarBoardData__get_id(monitor, 0), !v6) )
  {
LABEL_9:
    sub_1C942F0(Instance, v4);
  }
  WarBoardTurnEndRequest__beginRequest(v6, (int32_t)Instance, monitor, 0);
  this->fields.request = (struct RequestBase_o *)v6;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.request, (int32_t)v6, v7, v8, v9, v10, v11, v12);
}