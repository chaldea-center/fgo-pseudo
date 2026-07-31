void WarBoardAPIMasterAttackRequestTask___ctor(
        WarBoardAPIMasterAttackRequestTask_o *this,
        WarBoardPieceData_o *attacker,
        WarBoardPieceData_o *target,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  WarBoardAPIRequestTask___ctor_45133660(
    (WarBoardAPIRequestTask_o *)this,
    resultCallback,
    onStartBeginRequest,
    (const MethodInfo *)resultCallback);
  this->fields.attackPieceData = attacker;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.attackPieceData,
    (int32_t)attacker,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.targetPieceData = target;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.targetPieceData,
    (int32_t)target,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


void WarBoardAPIMasterAttackRequestTask__SetRequest(
        WarBoardAPIMasterAttackRequestTask_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  WarBoardData_o *warBoardData; // x20
  WarBoardMasterAttackRequest_o *v7; // x21
  struct WarBoardPieceData_o *attackPieceData; // x8
  struct WarBoardPieceData_o *targetPieceData; // x9
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5936227 & 1) == 0 )
  {
    sub_21FFC50(&Method_NetworkManager_getRequest_WarBoardMasterAttackRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_5936227 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  warBoardData = (WarBoardData_o *)Instance[27].monitor;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
  Instance = NetworkManager__getRequest_object_(
               0,
               (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_WarBoardMasterAttackRequest___);
  if ( !warBoardData
    || (v7 = (WarBoardMasterAttackRequest_o *)Instance,
        Instance = (Il2CppObject *)WarBoardData__get_id(warBoardData, 0),
        (attackPieceData = this->fields.attackPieceData) == 0)
    || (targetPieceData = this->fields.targetPieceData) == 0
    || !v7 )
  {
LABEL_11:
    sub_21FFECC(Instance, v4);
  }
  WarBoardMasterAttackRequest__beginRequest(
    v7,
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
    0);
  this->fields.request = (struct RequestBase_o *)v7;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.request, (int32_t)v7, v10, v11, v12, v13, v14, v15);
}