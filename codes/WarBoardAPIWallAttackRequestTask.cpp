void __fastcall WarBoardAPIWallAttackRequestTask___ctor(
        WarBoardAPIWallAttackRequestTask_o *this,
        WarBoardPieceData_o *attacker,
        WarBoardWallData_o *target,
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

  WarBoardAPIRequestTask___ctor_22956192(
    (WarBoardAPIRequestTask_o *)this,
    resultCallback,
    onStartBeginRequest,
    (const MethodInfo *)resultCallback);
  this->fields.attackPieceData = attacker;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.attackPieceData,
    (System_Int32_array **)attacker,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields.targetWallData = target;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetWallData,
    (System_Int32_array **)target,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


void __fastcall WarBoardAPIWallAttackRequestTask__SetRequest(
        WarBoardAPIWallAttackRequestTask_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  WarBoardData_o *warBoardData; // x20
  WarBoardWallAttackRequest_o *Request_WarBoardWallAttackRequest; // x0
  WarBoardWallAttackRequest_o *v8; // x21
  int32_t id; // w0
  struct WarBoardPieceData_o *attackPieceData; // x8
  struct WarBoardWallData_o *targetWallData; // x9
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_40F8C0C & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_WarBoardWallAttackRequest___, method);
    sub_B16FFC(&NetworkManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    byte_40F8C0C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  warBoardData = (WarBoardData_o *)Instance[4].monitor;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                        0LL,
                                        (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_WarBoardWallAttackRequest___);
  if ( !warBoardData
    || (v8 = Request_WarBoardWallAttackRequest,
        id = WarBoardData__get_id(warBoardData, 0LL),
        (attackPieceData = this->fields.attackPieceData) == 0LL)
    || (targetWallData = this->fields.targetWallData) == 0LL
    || !v8 )
  {
LABEL_12:
    sub_B170D4();
  }
  WarBoardWallAttackRequest__beginRequest(
    v8,
    id,
    attackPieceData->fields._forceId_k__BackingField,
    attackPieceData->fields._groupId_k__BackingField,
    attackPieceData->fields._index_k__BackingField,
    targetWallData->fields._wallId_k__BackingField,
    attackPieceData->fields._nowSquareIndex_k__BackingField,
    targetWallData->fields._squareIndex_k__BackingField,
    warBoardData,
    0LL);
  this->fields.request = (struct RequestBase_o *)v8;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.request,
    (System_Int32_array **)v8,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}