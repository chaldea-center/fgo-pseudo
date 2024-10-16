void __fastcall WarBoardAPIReinforcementsRequestTask___ctor(
        WarBoardAPIReinforcementsRequestTask_o *this,
        int32_t stageReinforcementId,
        System_Int32_array *reinforcementsIdx,
        System_Int32_array *squareIds,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3

  WarBoardAPIRequestTask___ctor_36050576((WarBoardAPIRequestTask_o *)this, resultCallback, onStartBeginRequest, 0LL);
  this->fields.reinforcementsId = stageReinforcementId;
  this->fields.reinforcementsIndexes = reinforcementsIdx;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&this->fields.reinforcementsIndexes,
    (int32_t)reinforcementsIdx,
    v11,
    v12);
  this->fields.squareIndexes = squareIds;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.squareIndexes, (int32_t)squareIds, v13, v14);
}


void __fastcall WarBoardAPIReinforcementsRequestTask__SetRequest(
        WarBoardAPIReinforcementsRequestTask_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WarBoardReinforcementsRequest_o *Instance; // x0
  __int64 v6; // x1
  WarBoardData_o *klass; // x20
  struct RequestBase_o *v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4AB3BE3 & 1) == 0 )
  {
    sub_1BAB41C(&Method_NetworkManager_getRequest_WarBoardReinforcementsRequest___, method);
    sub_1BAB41C(&NetworkManager_TypeInfo, v3);
    sub_1BAB41C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    byte_4AB3BE3 = 1;
  }
  WarBoardAPIRequestTask__SetRequest((WarBoardAPIRequestTask_o *)this, 0LL);
  Instance = (WarBoardReinforcementsRequest_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_378A22C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  klass = (WarBoardData_o *)Instance[11].klass;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (WarBoardReinforcementsRequest_o *)NetworkManager__getRequest_object_(
                                                  0LL,
                                                  (const MethodInfo_2F47108 *)Method_NetworkManager_getRequest_WarBoardReinforcementsRequest___);
  if ( !Instance )
LABEL_8:
    sub_1BAB678(Instance, v6);
  v8 = (struct RequestBase_o *)Instance;
  WarBoardReinforcementsRequest__beginRequest(
    Instance,
    klass,
    this->fields.reinforcementsId,
    this->fields.reinforcementsIndexes,
    this->fields.squareIndexes,
    0LL);
  this->fields.request = v8;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&this->fields.request, (int32_t)v8, v9, v10);
}