void __fastcall WarBoardAPIMasterAttackRequestTask___ctor(
        WarBoardAPIMasterAttackRequestTask_o *this,
        WarBoardPieceData_o *attacker,
        WarBoardPieceData_o *target,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  WarBoardAPIRequestTask___ctor_22725128(
    (WarBoardAPIRequestTask_o *)this,
    resultCallback,
    onStartBeginRequest,
    (const MethodInfo *)resultCallback);
  this->fields.attackPieceData = attacker;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.attackPieceData,
    (System_Int32_array **)attacker,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.targetPieceData = target;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.targetPieceData,
    (System_Int32_array **)target,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


void __fastcall WarBoardAPIMasterAttackRequestTask__SetRequest(
        WarBoardAPIMasterAttackRequestTask_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  void *Instance; // x0
  __int64 v6; // x1
  WarBoardData_o *warBoardData; // x20
  WarBoardMasterAttackRequest_o *v8; // x21
  struct WarBoardPieceData_o *attackPieceData; // x8
  struct WarBoardPieceData_o *targetPieceData; // x9
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_4186794 & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_WarBoardMasterAttackRequest___, method);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    byte_4186794 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  warBoardData = (WarBoardData_o *)*((_QWORD *)Instance + 54);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Instance = NetworkManager__getRequest_WarBoardWallAttackRequest_(
               0LL,
               (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_WarBoardMasterAttackRequest___);
  if ( !warBoardData
    || (v8 = (WarBoardMasterAttackRequest_o *)Instance,
        Instance = (void *)WarBoardData__get_id(warBoardData, 0LL),
        (attackPieceData = this->fields.attackPieceData) == 0LL)
    || (targetPieceData = this->fields.targetPieceData) == 0LL
    || !v8 )
  {
LABEL_12:
    sub_B2C434(Instance, v6);
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.request,
    (System_Int32_array **)v8,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
}