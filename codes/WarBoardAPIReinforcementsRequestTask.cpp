void WarBoardAPIReinforcementsRequestTask___ctor(
        WarBoardAPIReinforcementsRequestTask_o *this,
        int32_t stageReinforcementId,
        System_Int32_array *reinforcementsIdx,
        System_Int32_array *squareIds,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  WarBoardAPIRequestTask___ctor_45133660(
    (WarBoardAPIRequestTask_o *)this,
    resultCallback,
    onStartBeginRequest,
    (const MethodInfo *)squareIds);
  this->fields.reinforcementsId = stageReinforcementId;
  this->fields.reinforcementsIndexes = reinforcementsIdx;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.reinforcementsIndexes,
    (int32_t)reinforcementsIdx,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.squareIndexes = squareIds;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.squareIndexes,
    (int32_t)squareIds,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
}


void WarBoardAPIReinforcementsRequestTask__SetRequest(
        WarBoardAPIReinforcementsRequestTask_o *this,
        const MethodInfo *method)
{
  WarBoardReinforcementsRequest_o *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  WarBoardData_o *monitor; // x20
  struct RequestBase_o *v7; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_593622F & 1) == 0 )
  {
    sub_21FFC50(&Method_NetworkManager_getRequest_WarBoardReinforcementsRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_593622F = 1;
  }
  Instance = (WarBoardReinforcementsRequest_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  monitor = (WarBoardData_o *)Instance[9].monitor;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
  Instance = (WarBoardReinforcementsRequest_o *)NetworkManager__getRequest_object_(
                                                  0,
                                                  (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_WarBoardReinforcementsRequest___);
  if ( !Instance )
LABEL_8:
    sub_21FFECC(Instance, v4);
  v7 = (struct RequestBase_o *)Instance;
  WarBoardReinforcementsRequest__beginRequest(
    Instance,
    monitor,
    this->fields.reinforcementsId,
    this->fields.reinforcementsIndexes,
    this->fields.squareIndexes,
    0);
  this->fields.request = v7;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.request, (int32_t)v7, v8, v9, v10, v11, v12, v13);
}