void WarBoardAPIWallAttackRequestTask___ctor(
        WarBoardAPIWallAttackRequestTask_o *this,
        WarBoardPieceData_o *attacker,
        WarBoardWallData_o *target,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  WarBoardAPIRequestTask___ctor_38162528(
    (WarBoardAPIRequestTask_o *)this,
    resultCallback,
    onStartBeginRequest,
    (const MethodInfo *)resultCallback);
  this->fields.attackPieceData = attacker;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.attackPieceData, (int32_t)attacker, v9, v10);
  this->fields.targetWallData = target;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.targetWallData, (int32_t)target, v11, v12);
}


void WarBoardAPIWallAttackRequestTask__SetRequest(WarBoardAPIWallAttackRequestTask_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  WarBoardData_o *warBoardData; // x20
  WarBoardWallAttackRequest_o *v5; // x21
  struct WarBoardPieceData_o *attackPieceData; // x8
  struct WarBoardWallData_o *targetWallData; // x9
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C35632 & 1) == 0 )
  {
    sub_1C32C20(&Method_NetworkManager_getRequest_WarBoardWallAttackRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4C35632 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  warBoardData = (WarBoardData_o *)Instance[27].monitor;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               0,
               (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_WarBoardWallAttackRequest___);
  if ( !warBoardData
    || (v5 = (WarBoardWallAttackRequest_o *)Instance,
        Instance = (Il2CppObject *)WarBoardData__get_id(warBoardData, 0),
        (attackPieceData = this->fields.attackPieceData) == 0)
    || (targetWallData = this->fields.targetWallData) == 0
    || !v5 )
  {
LABEL_11:
    sub_1C32E7C(Instance);
  }
  WarBoardWallAttackRequest__beginRequest(
    v5,
    (int32_t)Instance,
    attackPieceData->fields._forceId_k__BackingField,
    attackPieceData->fields._groupId_k__BackingField,
    attackPieceData->fields._index_k__BackingField,
    targetWallData->fields._wallId_k__BackingField,
    attackPieceData->fields._nowSquareIndex_k__BackingField,
    targetWallData->fields._squareIndex_k__BackingField,
    warBoardData,
    0);
  this->fields.request = (struct RequestBase_o *)v5;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.request, (int32_t)v5, v8, v9);
}