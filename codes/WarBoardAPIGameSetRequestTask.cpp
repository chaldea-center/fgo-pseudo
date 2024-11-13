// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardAPIGameSetRequestTask___ctor(
        WarBoardAPIGameSetRequestTask_o *this,
        int32_t result,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  WarBoardAPIRequestTask___ctor_36369024(
    (WarBoardAPIRequestTask_o *)this,
    resultCallback,
    onStartBeginRequest,
    (const MethodInfo *)onStartBeginRequest);
  this->fields.gameResult = result;
}


void __fastcall WarBoardAPIGameSetRequestTask__SetRequest(
        WarBoardAPIGameSetRequestTask_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  WarBoardData_o *monitor; // x20
  WarBoardFinishRequest_o *v11; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B1405D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_WarBoardFinishRequest___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6, v7);
    byte_4B1405D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  monitor = (WarBoardData_o *)Instance[27].monitor;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
  Instance = NetworkManager__getRequest_object_(
               0LL,
               (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_WarBoardFinishRequest___);
  if ( !monitor
    || (v11 = (WarBoardFinishRequest_o *)Instance, Instance = (Il2CppObject *)WarBoardData__get_id(monitor, 0LL), !v11) )
  {
LABEL_9:
    sub_1BCAA3C(Instance, v9);
  }
  WarBoardFinishRequest__beginRequest(
    v11,
    (int32_t)Instance,
    this->fields.gameResult,
    monitor->fields.winCondId,
    monitor->fields.winCondGroup,
    0LL);
  this->fields.request = (struct RequestBase_o *)v11;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.request, (int64_t)v11, v12, v13, v14, v15, v16, v17);
}