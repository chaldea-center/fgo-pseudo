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

  WarBoardAPIRequestTask___ctor_21403204(
    (WarBoardAPIRequestTask_o *)this,
    resultCallback,
    onStartBeginRequest,
    (const MethodInfo *)resultCallback);
  this->fields.attackPieceData = attacker;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.attackPieceData,
    (System_Int32_array **)attacker,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.targetPieceData = target;
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  void *Instance; // x0
  __int64 v12; // x1
  WarBoardData_o *warBoardData; // x20
  WarBoardMasterAttackRequest_o *v14; // x21
  struct WarBoardPieceData_o *attackPieceData; // x8
  struct WarBoardPieceData_o *targetPieceData; // x9
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  if ( (byte_42E690A & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_WarBoardMasterAttackRequest___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8, v9, v10);
    byte_42E690A = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
               (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_WarBoardMasterAttackRequest___);
  if ( !warBoardData
    || (v14 = (WarBoardMasterAttackRequest_o *)Instance,
        Instance = (void *)WarBoardData__get_id(warBoardData, 0LL),
        (attackPieceData = this->fields.attackPieceData) == 0LL)
    || (targetPieceData = this->fields.targetPieceData) == 0LL
    || !v14 )
  {
LABEL_12:
    sub_B5D69C(Instance, v12);
  }
  WarBoardMasterAttackRequest__beginRequest(
    v14,
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
  this->fields.request = (struct RequestBase_o *)v14;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.request,
    (System_Int32_array **)v14,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
}