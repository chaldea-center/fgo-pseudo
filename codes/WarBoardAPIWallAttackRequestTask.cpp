void WarBoardAPIWallAttackRequestTask___ctor(
        WarBoardAPIWallAttackRequestTask_o *this,
        WarBoardPieceData_o *attacker,
        WarBoardWallData_o *target,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  WarBoardAPIRequestTask___ctor_38522232(
    (WarBoardAPIRequestTask_o *)this,
    resultCallback,
    onStartBeginRequest,
    (const MethodInfo *)resultCallback);
  this->fields.attackPieceData = attacker;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.attackPieceData,
    (int32_t)attacker,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.targetWallData = target;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.targetWallData,
    (int32_t)target,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


void WarBoardAPIWallAttackRequestTask__SetRequest(WarBoardAPIWallAttackRequestTask_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  WarBoardData_o *warBoardData; // x20
  WarBoardWallAttackRequest_o *v6; // x21
  struct WarBoardPieceData_o *attackPieceData; // x8
  struct WarBoardWallData_o *targetWallData; // x9
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4CC5028 & 1) == 0 )
  {
    sub_1C713B0(&Method_NetworkManager_getRequest_WarBoardWallAttackRequest___);
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4CC5028 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  warBoardData = (WarBoardData_o *)Instance[27].monitor;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               0,
               (const MethodInfo_31D69E8 *)Method_NetworkManager_getRequest_WarBoardWallAttackRequest___);
  if ( !warBoardData
    || (v6 = (WarBoardWallAttackRequest_o *)Instance,
        Instance = (Il2CppObject *)WarBoardData__get_id(warBoardData, 0),
        (attackPieceData = this->fields.attackPieceData) == 0)
    || (targetWallData = this->fields.targetWallData) == 0
    || !v6 )
  {
LABEL_11:
    sub_1C71608(Instance, v4);
  }
  WarBoardWallAttackRequest__beginRequest(
    v6,
    (int32_t)Instance,
    attackPieceData->fields._forceId_k__BackingField,
    attackPieceData->fields._groupId_k__BackingField,
    attackPieceData->fields._index_k__BackingField,
    targetWallData->fields._wallId_k__BackingField,
    attackPieceData->fields._nowSquareIndex_k__BackingField,
    targetWallData->fields._squareIndex_k__BackingField,
    warBoardData,
    0);
  this->fields.request = (struct RequestBase_o *)v6;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.request, (int32_t)v6, v9, v10, v11, v12, v13, v14);
}