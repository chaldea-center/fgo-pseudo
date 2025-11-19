void WarBoardAPIReinforcementsRequestTask___ctor(
        WarBoardAPIReinforcementsRequestTask_o *this,
        int32_t stageReinforcementId,
        System_Int32_array *reinforcementsIdx,
        System_Int32_array *squareIds,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  WarBoardAPIRequestTask___ctor_38483148(
    (WarBoardAPIRequestTask_o *)this,
    resultCallback,
    onStartBeginRequest,
    (const MethodInfo *)squareIds);
  this->fields.reinforcementsId = stageReinforcementId;
  this->fields.reinforcementsIndexes = reinforcementsIdx;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.reinforcementsIndexes, (int32_t)reinforcementsIdx, v11, v12);
  this->fields.squareIndexes = squareIds;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.squareIndexes, (int32_t)squareIds, v13, v14);
}


void WarBoardAPIReinforcementsRequestTask__SetRequest(
        WarBoardAPIReinforcementsRequestTask_o *this,
        const MethodInfo *method)
{
  WarBoardReinforcementsRequest_o *Instance; // x0
  __int64 v4; // x1
  WarBoardData_o *klass; // x20
  struct RequestBase_o *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4CB3F17 & 1) == 0 )
  {
    sub_1C6BA08(&Method_NetworkManager_getRequest_WarBoardReinforcementsRequest___);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4CB3F17 = 1;
  }
  Instance = (WarBoardReinforcementsRequest_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_8;
  klass = (WarBoardData_o *)Instance[11].klass;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (WarBoardReinforcementsRequest_o *)NetworkManager__getRequest_object_(
                                                  0,
                                                  (const MethodInfo_31C6C44 *)Method_NetworkManager_getRequest_WarBoardReinforcementsRequest___);
  if ( !Instance )
LABEL_8:
    sub_1C6BC60(Instance, v4);
  v6 = (struct RequestBase_o *)Instance;
  WarBoardReinforcementsRequest__beginRequest(
    Instance,
    klass,
    this->fields.reinforcementsId,
    this->fields.reinforcementsIndexes,
    this->fields.squareIndexes,
    0);
  this->fields.request = v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.request, (int32_t)v6, v7, v8);
}