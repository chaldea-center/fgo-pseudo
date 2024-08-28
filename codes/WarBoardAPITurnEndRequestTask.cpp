void __fastcall WarBoardAPITurnEndRequestTask___ctor(
        WarBoardAPITurnEndRequestTask_o *this,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  WarBoardAPIRequestTask___ctor_35478400((WarBoardAPIRequestTask_o *)this, resultCallback, onStartBeginRequest, 0LL);
}


void __fastcall WarBoardAPITurnEndRequestTask__SetRequest(
        WarBoardAPITurnEndRequestTask_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  WarBoardData_o *monitor; // x20
  WarBoardTurnEndRequest_o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A1D9B1 & 1) == 0 )
  {
    sub_1B715CC(&Method_NetworkManager_getRequest_WarBoardTurnEndRequest___, method);
    sub_1B715CC(&NetworkManager_TypeInfo, v3);
    sub_1B715CC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    byte_4A1D9B1 = 1;
  }
  WarBoardAPIRequestTask__SetRequest((WarBoardAPIRequestTask_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  monitor = (WarBoardData_o *)Instance[27].monitor;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               0LL,
               (const MethodInfo_2EDD4A0 *)Method_NetworkManager_getRequest_WarBoardTurnEndRequest___);
  if ( !monitor
    || (v8 = (WarBoardTurnEndRequest_o *)Instance, Instance = (Il2CppObject *)WarBoardData__get_id(monitor, 0LL), !v8) )
  {
LABEL_9:
    sub_1B71828(Instance, v6);
  }
  WarBoardTurnEndRequest__beginRequest(v8, (int32_t)Instance, monitor, 0LL);
  this->fields.request = (struct RequestBase_o *)v8;
  sub_1B71570((ServantStatusBattleListViewItem_o *)&this->fields.request, (int32_t)v8, v9, v10);
}