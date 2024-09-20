void __fastcall WarBoardAPITurnEndRequestTask___ctor(
        WarBoardAPITurnEndRequestTask_o *this,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  WarBoardAPIRequestTask___ctor_35674108((WarBoardAPIRequestTask_o *)this, resultCallback, onStartBeginRequest, 0LL);
}


void __fastcall WarBoardAPITurnEndRequestTask__SetRequest(
        WarBoardAPITurnEndRequestTask_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  WarBoardData_o *monitor; // x20
  WarBoardTurnEndRequest_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A590CE & 1) == 0 )
  {
    sub_1B885B0(&Method_NetworkManager_getRequest_WarBoardTurnEndRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4A590CE = 1;
  }
  WarBoardAPIRequestTask__SetRequest((WarBoardAPIRequestTask_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  monitor = (WarBoardData_o *)Instance[27].monitor;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               0LL,
               (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_WarBoardTurnEndRequest___);
  if ( !monitor
    || (v6 = (WarBoardTurnEndRequest_o *)Instance, Instance = (Il2CppObject *)WarBoardData__get_id(monitor, 0LL), !v6) )
  {
LABEL_9:
    sub_1B8880C(Instance, v4);
  }
  WarBoardTurnEndRequest__beginRequest(v6, (int32_t)Instance, monitor, 0LL);
  this->fields.request = (struct RequestBase_o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.request, (int32_t)v6, v7, v8);
}