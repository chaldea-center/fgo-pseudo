void __fastcall WarBoardAPIMasterAttackRequestTask___ctor(
        WarBoardAPIMasterAttackRequestTask_o *this,
        WarBoardPieceData_o *attacker,
        WarBoardPieceData_o *target,
        NetworkManager_ResultCallbackFunc_o *resultCallback,
        bool onStartBeginRequest,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3

  WarBoardAPIRequestTask___ctor_35674108((WarBoardAPIRequestTask_o *)this, resultCallback, onStartBeginRequest, 0LL);
  this->fields.attackPieceData = attacker;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.attackPieceData, (int32_t)attacker, v9, v10);
  this->fields.targetPieceData = target;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.targetPieceData, (int32_t)target, v11, v12);
}


void __fastcall WarBoardAPIMasterAttackRequestTask__SetRequest(
        WarBoardAPIMasterAttackRequestTask_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  WarBoardData_o *warBoardData; // x20
  WarBoardMasterAttackRequest_o *v6; // x21
  struct WarBoardPieceData_o *attackPieceData; // x8
  struct WarBoardPieceData_o *targetPieceData; // x9
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A590CC & 1) == 0 )
  {
    sub_1B885B0(&Method_NetworkManager_getRequest_WarBoardMasterAttackRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4A590CC = 1;
  }
  WarBoardAPIRequestTask__SetRequest((WarBoardAPIRequestTask_o *)this, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  warBoardData = (WarBoardData_o *)Instance[27].monitor;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = NetworkManager__getRequest_object_(
               0LL,
               (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_WarBoardMasterAttackRequest___);
  if ( !warBoardData
    || (v6 = (WarBoardMasterAttackRequest_o *)Instance,
        Instance = (Il2CppObject *)WarBoardData__get_id(warBoardData, 0LL),
        (attackPieceData = this->fields.attackPieceData) == 0LL)
    || (targetPieceData = this->fields.targetPieceData) == 0LL
    || !v6 )
  {
LABEL_11:
    sub_1B8880C(Instance, v4);
  }
  WarBoardMasterAttackRequest__beginRequest(
    v6,
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
  this->fields.request = (struct RequestBase_o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.request, (int32_t)v6, v9, v10);
}