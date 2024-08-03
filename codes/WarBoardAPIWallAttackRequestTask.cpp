void __fastcall WarBoardAPIWallAttackRequestTask___ctor(
        WarBoardAPIWallAttackRequestTask_o *this,
        WarBoardPieceData_o *attacker,
        WarBoardWallData_o *target,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3

  WarBoardAPIRequestTask___ctor_35375264((WarBoardAPIRequestTask_o *)this, resultCallback, onStartBeginRequest, 0LL);
  this->fields.attackPieceData = attacker;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.attackPieceData, (int32_t)attacker, v9, v10);
  this->fields.targetWallData = target;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.targetWallData, (int32_t)target, v11, v12);
}


void __fastcall WarBoardAPIWallAttackRequestTask__SetRequest(
        WarBoardAPIWallAttackRequestTask_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  WarBoardData_o *warBoardData; // x20
  WarBoardWallAttackRequest_o *v7; // x21
  struct WarBoardPieceData_o *attackPieceData; // x8
  struct WarBoardWallData_o *targetWallData; // x9
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_49FA30F & 1) == 0 )
  {
    sub_1B640C8(&Method_NetworkManager_getRequest_WarBoardWallAttackRequest___, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    byte_49FA30F = 1;
  }
  WarBoardAPIRequestTask__SetRequest((WarBoardAPIRequestTask_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  warBoardData = (WarBoardData_o *)Instance[27].monitor;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               0LL,
               (const MethodInfo_2EBA9D0 *)Method_NetworkManager_getRequest_WarBoardWallAttackRequest___);
  if ( !warBoardData
    || (v7 = (WarBoardWallAttackRequest_o *)Instance,
        Instance = (Il2CppObject *)WarBoardData__get_id(warBoardData, 0LL),
        (attackPieceData = this->fields.attackPieceData) == 0LL)
    || (targetWallData = this->fields.targetWallData) == 0LL
    || !v7 )
  {
LABEL_11:
    sub_1B64324(Instance);
  }
  WarBoardWallAttackRequest__beginRequest(
    v7,
    (int32_t)Instance,
    attackPieceData->fields._forceId_k__BackingField,
    attackPieceData->fields._groupId_k__BackingField,
    attackPieceData->fields._index_k__BackingField,
    targetWallData->fields._wallId_k__BackingField,
    attackPieceData->fields._nowSquareIndex_k__BackingField,
    targetWallData->fields._squareIndex_k__BackingField,
    warBoardData,
    0LL);
  this->fields.request = (struct RequestBase_o *)v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.request, (int32_t)v7, v10, v11);
}