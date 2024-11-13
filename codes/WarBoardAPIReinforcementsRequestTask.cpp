void __fastcall WarBoardAPIReinforcementsRequestTask___ctor(
        WarBoardAPIReinforcementsRequestTask_o *this,
        int32_t stageReinforcementId,
        System_Int32_array *reinforcementsIdx,
        System_Int32_array *squareIds,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  WarBoardAPIRequestTask___ctor_36369024(
    (WarBoardAPIRequestTask_o *)this,
    resultCallback,
    onStartBeginRequest,
    (const MethodInfo *)squareIds);
  this->fields.reinforcementsId = stageReinforcementId;
  this->fields.reinforcementsIndexes = reinforcementsIdx;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.reinforcementsIndexes,
    (int64_t)reinforcementsIdx,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.squareIndexes = squareIds;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.squareIndexes,
    (int64_t)squareIds,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
}


void __fastcall WarBoardAPIReinforcementsRequestTask__SetRequest(
        WarBoardAPIReinforcementsRequestTask_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  WarBoardReinforcementsRequest_o *Instance; // x0
  __int64 v9; // x1
  WarBoardData_o *klass; // x20
  struct RequestBase_o *v11; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B1405F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NetworkManager_getRequest_WarBoardReinforcementsRequest___, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v6, v7);
    byte_4B1405F = 1;
  }
  Instance = (WarBoardReinforcementsRequest_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  klass = (WarBoardData_o *)Instance[11].klass;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v9);
  Instance = (WarBoardReinforcementsRequest_o *)NetworkManager__getRequest_object_(
                                                  0LL,
                                                  (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_WarBoardReinforcementsRequest___);
  if ( !Instance )
LABEL_8:
    sub_1BCAA3C(Instance, v9);
  v11 = (struct RequestBase_o *)Instance;
  WarBoardReinforcementsRequest__beginRequest(
    Instance,
    klass,
    this->fields.reinforcementsId,
    this->fields.reinforcementsIndexes,
    this->fields.squareIndexes,
    0LL);
  this->fields.request = v11;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.request, (int64_t)v11, v12, v13, v14, v15, v16, v17);
}