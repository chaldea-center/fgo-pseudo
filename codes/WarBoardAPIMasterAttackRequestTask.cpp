void __fastcall WarBoardAPIMasterAttackRequestTask___ctor(
        WarBoardAPIMasterAttackRequestTask_o *this,
        WarBoardPieceData_o *attacker,
        WarBoardPieceData_o *target,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  WarBoardAPIRequestTask___ctor_37334524(
    (WarBoardAPIRequestTask_o *)this,
    resultCallback,
    onStartBeginRequest,
    (const MethodInfo *)resultCallback);
  this->fields.attackPieceData = attacker;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.attackPieceData, (int32_t)attacker, v9, v10);
  this->fields.targetPieceData = target;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.targetPieceData, (int32_t)target, v11, v12);
}


void __fastcall WarBoardAPIMasterAttackRequestTask__SetRequest(
        WarBoardAPIMasterAttackRequestTask_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  WarBoardData_o *warBoardData; // x20
  WarBoardMasterAttackRequest_o *v8; // x21
  struct WarBoardPieceData_o *attackPieceData; // x8
  struct WarBoardPieceData_o *targetPieceData; // x9
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4AFFD29 & 1) == 0 )
  {
    sub_1BC3008(&Method_NetworkManager_getRequest_WarBoardMasterAttackRequest___, method);
    sub_1BC3008(&NetworkManager_TypeInfo, v3);
    sub_1BC3008(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    byte_4AFFD29 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  warBoardData = (WarBoardData_o *)Instance[27].monitor;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               0LL,
               (const MethodInfo_3089B54 *)Method_NetworkManager_getRequest_WarBoardMasterAttackRequest___);
  if ( !warBoardData
    || (v8 = (WarBoardMasterAttackRequest_o *)Instance,
        Instance = (Il2CppObject *)WarBoardData__get_id(warBoardData, 0LL),
        (attackPieceData = this->fields.attackPieceData) == 0LL)
    || (targetPieceData = this->fields.targetPieceData) == 0LL
    || !v8 )
  {
LABEL_11:
    sub_1BC3264(Instance, v6);
  }
  WarBoardMasterAttackRequest__beginRequest(
    v8,
    (int32_t)Instance,
    attackPieceData->fields._forceId_k__BackingField,
    attackPieceData->fields._groupId_k__BackingField,
    attackPieceData->fields._index_k__BackingField,
    targetPieceData->fields._forceId_k__BackingField,
    targetPieceData->fields._groupId_k__BackingField,
    targetPieceData->fields._index_k__BackingField,
    attackPieceData->fields._nowSquareIndex_k__BackingField,
    targetPieceData->fields._nowSquareIndex_k__BackingField,
    warBoardData,
    0LL);
  this->fields.request = (struct RequestBase_o *)v8;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.request, (int32_t)v8, v11, v12);
}