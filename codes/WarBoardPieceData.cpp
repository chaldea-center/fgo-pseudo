void __fastcall WarBoardPieceData___cctor(const MethodInfo *method)
{
  float v1; // s4
  float v2; // s5
  float v3; // s6
  float v4; // s7
  struct WarBoardPieceData_StaticFields v5; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438AF3B & 1) == 0 )
  {
    sub_B775C4(&WarBoardPieceData_TypeInfo);
    byte_438AF3B = 1;
  }
  v6.fields.r = 0.05;
  v6.fields.a = 1.0;
  v6.fields.g = 0.05;
  v6.fields.b = 0.05;
  v5 = (struct WarBoardPieceData_StaticFields)0LL;
  UnityEngine_Color___ctor(v6, v1, v2, v3, v4, (const MethodInfo *)&v5);
  *WarBoardPieceData_TypeInfo->static_fields = v5;
}


void __fastcall WarBoardPieceData___ctor(
        WarBoardPieceData_o *this,
        WarBoardStageLayoutEntity_o *layout,
        WarBoardUserServantData_o *servantData,
        WarBoardUserMasterData_o *masterData,
        WarBoardDataEntity_WarBoardDeckData_o *deckData,
        bool isPrepare,
        System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *npcDict,
        int32_t npcIdx,
        const MethodInfo *method)
{
  WarBoardPieceData_PieceStatusCache_o *v16; // x27
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  int64_t Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v24; // x1
  int32_t pieceIndex; // w8
  int32_t forceId; // w28
  int32_t groupId; // w21
  int32_t v28; // w27
  int32_t squareIndex; // w8
  struct System_Int32_array *Individuality; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  int32_t breakPoint; // w8
  int32_t restrictionId; // w8
  struct BattleServantData_o **p_battleServant_k__BackingField; // x25
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  int32_t TurnCount; // w0
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x8
  WarBoardStagePieceDetailEntity_o *v54; // x8
  int32_t type_k__BackingField; // w8
  struct WarBoardUserMasterData_o **p_serverMasterData_k__BackingField; // x27
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  WarBoardActionPointClassMaster_o *v58; // x26
  const MethodInfo *v59; // x1
  WarBoardActionPointClassEntity_o *MasterEntityFromStageId; // x0
  struct WarBoardCost_o *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  struct WarBoardUserMasterData_o *v68; // x8
  struct WarBoardUserMasterData_o *v69; // x8
  int32_t defeatPoint; // w8
  WebViewManager_o *Instance; // x0
  __int128 v72; // q1
  WarBoardManager_o *v73; // x26
  struct BattleServantData_o *BattleServant; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  WarBoardActionPointClassMaster_o *v87; // x26
  const MethodInfo *v88; // x1
  WarBoardActionPointEntity_o *v89; // x27
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  struct WarBoardCost_o *v91; // x0
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  int32_t v98; // w8
  int32_t forceId_k__BackingField; // w8
  int64_t userEquipId; // x8
  __int64 v101; // x20
  __int64 v102; // x20
  __int64 v103; // x20
  __int64 v104; // x21
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t npcId; // x8
  __int64 v107; // x8
  int64_t npcSvtEquipId; // x8
  __int64 v109; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v111; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v112; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16

  if ( (byte_438AF1F & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&WarBoardPieceData_PieceStatusCache_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&WarBoardPieceData_TypeInfo);
    byte_438AF1F = 1;
  }
  v16 = (WarBoardPieceData_PieceStatusCache_o *)sub_B77694(WarBoardPieceData_PieceStatusCache_TypeInfo);
  WarBoardPieceData_PieceStatusCache___ctor(v16, 0LL);
  this->fields.statusCache = v16;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.statusCache,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !layout )
    goto LABEL_91;
  this->fields.stageId = layout->fields.stageId;
  pieceIndex = layout->fields.pieceIndex;
  *(_QWORD *)&this->fields._StageReinfoId_k__BackingField = -1LL;
  this->fields._ReinfoId_k__BackingField = -1;
  this->fields._type_k__BackingField = pieceIndex == 0;
  forceId = layout->fields.forceId;
  this->fields._forceId_k__BackingField = forceId;
  groupId = layout->fields.groupId;
  this->fields._groupId_k__BackingField = groupId;
  v28 = layout->fields.pieceIndex;
  this->fields._index_k__BackingField = v28;
  if ( (BYTE3(WarBoardPieceData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPieceData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo);
  }
  this->fields._uniqueIndex_k__BackingField = (forceId << 24) | ((unsigned __int8)groupId << 16) | (unsigned __int16)v28;
  squareIndex = layout->fields.squareIndex;
  this->fields._nowSquareIndex_k__BackingField = squareIndex;
  this->fields._PutSquareIndex_k__BackingField = squareIndex;
  Individuality = WarBoardStageLayoutEntity__GetIndividuality(layout, 0LL);
  this->fields._individuality_k__BackingField = Individuality;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._individuality_k__BackingField,
    (System_Int32_array **)Individuality,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_91;
  WarBoardStagePieceDetailMaster__TryGetEntity(
    (WarBoardStagePieceDetailMaster_o *)Master_WarQuestSelectionMaster,
    &this->fields.stagePieceDetailEntity,
    this->fields.stageId,
    this->fields._forceId_k__BackingField,
    this->fields._groupId_k__BackingField,
    this->fields._index_k__BackingField,
    0LL);
  *(_QWORD *)&this->fields._overwriteActionType_k__BackingField = -1LL;
  breakPoint = layout->fields.breakPoint;
  this->fields._breakPoint_k__BackingField = breakPoint;
  this->fields._breakPointMax_k__BackingField = breakPoint;
  this->fields._actionType_k__BackingField = layout->fields.actionType;
  restrictionId = layout->fields.restrictionId;
  this->fields._battleServant_k__BackingField = 0LL;
  p_battleServant_k__BackingField = &this->fields._battleServant_k__BackingField;
  this->fields._restrictionId_k__BackingField = restrictionId;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._battleServant_k__BackingField,
    0LL,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  this->fields._isDead_k__BackingField = 0;
  this->fields._isEditing_k__BackingField = 0;
  this->fields._isNotIncludeWin_k__BackingField = 0;
  this->fields._roleType_k__BackingField = 0;
  this->fields._IsDispConsumedPieceActionPoint_k__BackingField = 0;
  Master_WarQuestSelectionMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_91;
  if ( *(_QWORD *)(Master_WarQuestSelectionMaster + 432) )
  {
    Master_WarQuestSelectionMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_91;
    Master_WarQuestSelectionMaster = *(_QWORD *)(Master_WarQuestSelectionMaster + 432);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_91;
    TurnCount = WarBoardData__get_TurnCount((WarBoardData_o *)Master_WarQuestSelectionMaster, 0LL);
  }
  else
  {
    TurnCount = 0;
  }
  stagePieceDetailEntity = this->fields.stagePieceDetailEntity;
  this->fields._entryTurn_k__BackingField = TurnCount;
  if ( stagePieceDetailEntity )
  {
    Master_WarQuestSelectionMaster = WarBoardStagePieceDetailEntity__getRoleType(stagePieceDetailEntity, 0LL);
    v54 = this->fields.stagePieceDetailEntity;
    this->fields._roleType_k__BackingField = Master_WarQuestSelectionMaster;
    if ( !v54 )
      goto LABEL_91;
    this->fields._isNotIncludeWin_k__BackingField = WarBoardStagePieceDetailEntity__IsNotIncludeWin(v54, 0LL);
  }
  type_k__BackingField = this->fields._type_k__BackingField;
  if ( masterData && type_k__BackingField == 1 )
  {
    this->fields._serverMasterData_k__BackingField = masterData;
    p_serverMasterData_k__BackingField = &this->fields._serverMasterData_k__BackingField;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields._serverMasterData_k__BackingField,
      (System_Int32_array **)masterData,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
    serverMasterData_k__BackingField = this->fields._serverMasterData_k__BackingField;
    if ( !serverMasterData_k__BackingField )
      goto LABEL_91;
    this->fields._nowSquareIndex_k__BackingField = serverMasterData_k__BackingField->fields.squareIndex;
    this->fields._limitActionCount_k__BackingField = serverMasterData_k__BackingField->fields.limitActionPoint;
    this->fields._currentActionCount_k__BackingField = serverMasterData_k__BackingField->fields.currentLimitActionPoint;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v58 = (WarBoardActionPointClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    Master_WarQuestSelectionMaster = (int64_t)WarBoardPieceData__get_ActionPointEntity(this, v59);
    if ( !v58 )
      goto LABEL_91;
    MasterEntityFromStageId = WarBoardActionPointClassMaster__GetMasterEntityFromStageId(
                                v58,
                                (WarBoardActionPointEntity_o *)Master_WarQuestSelectionMaster,
                                0LL);
    v61 = WarBoardCost__Create(MasterEntityFromStageId, this->fields.stagePieceDetailEntity, 0LL, 0LL);
    this->fields._Cost_k__BackingField = v61;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields._Cost_k__BackingField,
      (System_Int32_array **)v61,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67);
    v68 = this->fields._serverMasterData_k__BackingField;
    if ( !v68 )
      goto LABEL_91;
    Master_WarQuestSelectionMaster = (int64_t)this->fields._Cost_k__BackingField;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_91;
    WarBoardCost__UpdateCurrentPointByServerData(
      (WarBoardCost_o *)Master_WarQuestSelectionMaster,
      v68->fields.currentPieceActionPoint,
      0LL);
    v69 = *p_serverMasterData_k__BackingField;
    if ( !*p_serverMasterData_k__BackingField )
      goto LABEL_91;
    this->fields._attackCount_k__BackingField = v69->fields.attackCount;
    defeatPoint = v69->fields.defeatPoint;
    this->fields._breakPoint_k__BackingField = defeatPoint;
    if ( defeatPoint <= 0 )
LABEL_45:
      this->fields._isDead_k__BackingField = 1;
  }
  else if ( servantData && !type_k__BackingField )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v72 = *(_OWORD *)&servantData->fields.id.fields.fakeValue;
    v73 = (WarBoardManager_o *)Instance;
    *(_OWORD *)&v112.fields.currentCryptoKey = *(_OWORD *)&servantData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v112.fields.fakeValue = v72;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v111 = v112;
    Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v111, 0LL);
    if ( !v73 )
      goto LABEL_91;
    BattleServant = WarBoardManager__GetBattleServant(v73, Master_WarQuestSelectionMaster, 0LL);
    this->fields._battleServant_k__BackingField = BattleServant;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields._battleServant_k__BackingField,
      (System_Int32_array **)BattleServant,
      v75,
      v76,
      v77,
      v78,
      v79,
      v80);
    this->fields.serverServantData = servantData;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.serverServantData,
      (System_Int32_array **)servantData,
      v81,
      v82,
      v83,
      v84,
      v85,
      v86);
    this->fields._nowSquareIndex_k__BackingField = servantData->fields.squareIndex;
    this->fields._limitActionCount_k__BackingField = servantData->fields.limitActionPoint;
    this->fields._currentActionCount_k__BackingField = servantData->fields.currentActionPoint;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v87 = (WarBoardActionPointClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    Master_WarQuestSelectionMaster = (int64_t)WarBoardPieceData__get_ActionPointEntity(this, v88);
    if ( !this->fields._battleServant_k__BackingField )
      goto LABEL_91;
    v89 = (WarBoardActionPointEntity_o *)Master_WarQuestSelectionMaster;
    Master_WarQuestSelectionMaster = BattleServantData__getClassId(this->fields._battleServant_k__BackingField, 0LL);
    if ( !v87 )
      goto LABEL_91;
    EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                    v87,
                                    v89,
                                    Master_WarQuestSelectionMaster,
                                    0LL);
    v91 = WarBoardCost__Create(EntityFromActionPointEntity, this->fields.stagePieceDetailEntity, 0LL, 0LL);
    this->fields._Cost_k__BackingField = v91;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields._Cost_k__BackingField,
      (System_Int32_array **)v91,
      v92,
      v93,
      v94,
      v95,
      v96,
      v97);
    Master_WarQuestSelectionMaster = (int64_t)this->fields._Cost_k__BackingField;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_91;
    WarBoardCost__UpdateCurrentPointByServerData(
      (WarBoardCost_o *)Master_WarQuestSelectionMaster,
      servantData->fields.currentPieceActionPoint,
      0LL);
    this->fields._attackCount_k__BackingField = servantData->fields.attackCount;
    v98 = servantData->fields.defeatPoint;
    this->fields._breakPoint_k__BackingField = v98;
    if ( (v98 & 0x80000000) != 0 )
      goto LABEL_45;
  }
  forceId_k__BackingField = this->fields._forceId_k__BackingField;
  if ( forceId_k__BackingField || this->fields._groupId_k__BackingField )
  {
    if ( npcDict )
    {
      Master_WarQuestSelectionMaster = (int64_t)System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___get_Item(
                                                  (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)npcDict,
                                                  (forceId_k__BackingField << 24) | ((unsigned __int8)this->fields._groupId_k__BackingField << 16),
                                                  (const MethodInfo_2FC65D0 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    }
    else
    {
      Master_WarQuestSelectionMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_91;
      Master_WarQuestSelectionMaster = *(_QWORD *)(Master_WarQuestSelectionMaster + 432);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_91;
      Master_WarQuestSelectionMaster = (int64_t)WarBoardData__GetNpcEntity(
                                                  (WarBoardData_o *)Master_WarQuestSelectionMaster,
                                                  this->fields._forceId_k__BackingField,
                                                  this->fields._groupId_k__BackingField,
                                                  0LL);
    }
    if ( this->fields._type_k__BackingField == 1 )
    {
      if ( Master_WarQuestSelectionMaster )
      {
        this->fields._iconId_k__BackingField = *(_DWORD *)(Master_WarQuestSelectionMaster + 40);
        return;
      }
LABEL_91:
      sub_B7769C(Master_WarQuestSelectionMaster, v24);
    }
    goto LABEL_89;
  }
  if ( this->fields._type_k__BackingField == 1 )
  {
    Master_WarQuestSelectionMaster = (int64_t)UserGameMaster__getSelfUserGame(0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_91;
    this->fields._CurrentUserEquipId_k__BackingField = UserGameEntity__getActiveUserEquipId(
                                                         (UserGameEntity_o *)Master_WarQuestSelectionMaster,
                                                         0LL);
    if ( deckData )
    {
      userEquipId = deckData->fields.userEquipId;
      if ( (int)userEquipId >= 1 )
        this->fields._CurrentUserEquipId_k__BackingField = userEquipId;
    }
    v101 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v101 + 306) & 1) == 0 )
      sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v102 = **(_QWORD **)(v101 + 192);
    if ( (*(_BYTE *)(v102 + 306) & 1) == 0 )
      sub_B0F2C4(v102);
    Master_WarQuestSelectionMaster = **(_QWORD **)(v102 + 184);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_91;
    Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)Master_WarQuestSelectionMaster,
                                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserEquipMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_91;
    Master_WarQuestSelectionMaster = (int64_t)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Master_WarQuestSelectionMaster,
                                                this->fields._CurrentUserEquipId_k__BackingField,
                                                (const MethodInfo_21FBABC *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_91;
    v104 = *(_QWORD *)(Master_WarQuestSelectionMaster + 32);
    v103 = *(_QWORD *)(Master_WarQuestSelectionMaster + 40);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v113.fields.currentCryptoKey = v104;
    *(_QWORD *)&v113.fields.fakeValue = v103;
    this->fields._iconId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                             v113,
                                             0LL);
  }
  else
  {
    if ( servantData )
    {
      if ( (npcIdx & 0x80000000) == 0 )
      {
        if ( npcDict )
        {
          Master_WarQuestSelectionMaster = (int64_t)System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___get_Item(
                                                      (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)npcDict,
                                                      0,
                                                      (const MethodInfo_2FC65D0 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
        }
        else
        {
          Master_WarQuestSelectionMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_91;
          Master_WarQuestSelectionMaster = *(_QWORD *)(Master_WarQuestSelectionMaster + 432);
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_91;
          Master_WarQuestSelectionMaster = (int64_t)WarBoardData__GetNpcEntity(
                                                      (WarBoardData_o *)Master_WarQuestSelectionMaster,
                                                      this->fields._forceId_k__BackingField,
                                                      this->fields._groupId_k__BackingField,
                                                      0LL);
        }
        if ( *p_battleServant_k__BackingField )
        {
          deckSvt = (*p_battleServant_k__BackingField)->fields.deckSvt;
          if ( !deckSvt )
            goto LABEL_91;
          npcId = deckSvt->fields.npcId;
        }
        else
        {
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_91;
          v107 = *(_QWORD *)(Master_WarQuestSelectionMaster + 48);
          if ( !v107 )
            goto LABEL_91;
          if ( *(_DWORD *)(v107 + 24) <= (unsigned int)npcIdx )
          {
            v109 = sub_B776C8(Master_WarQuestSelectionMaster);
            sub_B77668(v109, 0LL);
          }
          npcId = *(_QWORD *)(v107 + 8LL * npcIdx + 32);
        }
        this->fields._npcId_k__BackingField = npcId;
        npcSvtEquipId = servantData->fields.npcSvtEquipId;
        this->fields._isEditing_k__BackingField = 1;
        this->fields._npcEquipId_k__BackingField = npcSvtEquipId;
      }
LABEL_89:
      WarBoardPieceData__SetServantIconData(this, v24);
      return;
    }
    this->fields._iconId_k__BackingField = 0;
    this->fields._iconLimitCount_k__BackingField = 0;
    this->fields._isEditing_k__BackingField = 1;
    if ( !isPrepare )
    {
      this->fields._isDead_k__BackingField = 1;
      this->fields._isEditing_k__BackingField = 0;
      this->fields._breakPoint_k__BackingField = -1;
    }
  }
}


void __fastcall WarBoardPieceData___ctor_24943784(
        WarBoardPieceData_o *this,
        WarBoardStageReinforcementsEntity_o *stageReinforcementsEntity,
        WarBoardReinforcementsEntity_o *reinfoEntity,
        WarBoardUserServantData_o *servantData,
        System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *npcDict,
        int32_t npcIdx,
        int32_t squareIndex,
        int32_t reinfoIndex,
        const MethodInfo *method)
{
  WarBoardPieceData_PieceStatusCache_o *v17; // x27
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  int64_t Instance; // x0
  const MethodInfo *v25; // x1
  int32_t id; // w8
  int32_t v27; // w8
  int32_t forceId; // w28
  int32_t groupId; // w26
  int32_t pieceIndex; // w27
  int32_t TurnCount; // w0
  int32_t breakPoint; // w8
  struct System_Int32_array *specifyPieceIndexes; // x8
  __int64 ReinfoIndex_k__BackingField; // x9
  struct WarBoardStagePieceDetailEntity_o **p_stagePieceDetailEntity; // x24
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x8
  bool IsNotIncludeWin; // w8
  int32_t actionType; // w8
  WebViewManager_o *v39; // x0
  __int128 v40; // q1
  WarBoardManager_o *v41; // x24
  struct BattleServantData_o *BattleServant; // x0
  struct BattleServantData_o **p_battleServant_k__BackingField; // x24
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  int32_t v56; // w8
  WarBoardActionPointClassMaster_o *Master_WarQuestSelectionMaster; // x25
  const MethodInfo *v58; // x1
  WarBoardActionPointEntity_o *v59; // x26
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  struct WarBoardCost_o *v61; // x0
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  int32_t forceId_k__BackingField; // w9
  int defeatPoint; // w8
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t npcId; // x8
  __int64 v72; // x8
  int64_t npcSvtEquipId; // x8
  __int64 v74; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+20h] [xbp-80h]
  int32_t value; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_438AF20 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&WarBoardPieceData_PieceStatusCache_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&WarBoardPieceData_TypeInfo);
    byte_438AF20 = 1;
  }
  value = 0;
  v17 = (WarBoardPieceData_PieceStatusCache_o *)sub_B77694(WarBoardPieceData_PieceStatusCache_TypeInfo);
  WarBoardPieceData_PieceStatusCache___ctor(v17, 0LL);
  this->fields.statusCache = v17;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.statusCache,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !stageReinforcementsEntity )
    goto LABEL_57;
  this->fields.stageId = stageReinforcementsEntity->fields.warBoardStageId;
  id = stageReinforcementsEntity->fields.id;
  this->fields._ReinfoIndex_k__BackingField = reinfoIndex;
  this->fields._StageReinfoId_k__BackingField = id;
  if ( !reinfoEntity )
    goto LABEL_57;
  v27 = reinfoEntity->fields.id;
  this->fields._type_k__BackingField = 0;
  this->fields._ReinfoId_k__BackingField = v27;
  if ( !servantData )
    goto LABEL_57;
  forceId = servantData->fields.forceId;
  this->fields._forceId_k__BackingField = forceId;
  groupId = servantData->fields.groupId;
  this->fields._groupId_k__BackingField = groupId;
  pieceIndex = servantData->fields.pieceIndex;
  this->fields._index_k__BackingField = pieceIndex;
  if ( (BYTE3(WarBoardPieceData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPieceData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo);
  }
  this->fields._nowSquareIndex_k__BackingField = squareIndex;
  this->fields._PutSquareIndex_k__BackingField = squareIndex;
  this->fields._uniqueIndex_k__BackingField = (forceId << 24) | ((unsigned __int8)groupId << 16) | (unsigned __int16)pieceIndex;
  *(_QWORD *)&this->fields._overwriteActionType_k__BackingField = -1LL;
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  if ( *(_QWORD *)(Instance + 432) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_57;
    Instance = *(_QWORD *)(Instance + 432);
    if ( !Instance )
      goto LABEL_57;
    TurnCount = WarBoardData__get_TurnCount((WarBoardData_o *)Instance, 0LL);
  }
  else
  {
    TurnCount = 0;
  }
  this->fields._entryTurn_k__BackingField = TurnCount;
  breakPoint = reinfoEntity->fields.breakPoint;
  this->fields._breakPoint_k__BackingField = breakPoint;
  this->fields._breakPointMax_k__BackingField = breakPoint;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
  specifyPieceIndexes = stageReinforcementsEntity->fields.specifyPieceIndexes;
  if ( !specifyPieceIndexes )
    goto LABEL_57;
  ReinfoIndex_k__BackingField = this->fields._ReinfoIndex_k__BackingField;
  if ( (unsigned int)ReinfoIndex_k__BackingField >= specifyPieceIndexes->max_length )
    goto LABEL_58;
  if ( !Instance )
    goto LABEL_57;
  p_stagePieceDetailEntity = &this->fields.stagePieceDetailEntity;
  if ( WarBoardStagePieceDetailMaster__TryGetEntity(
         (WarBoardStagePieceDetailMaster_o *)Instance,
         &this->fields.stagePieceDetailEntity,
         this->fields.stageId,
         this->fields._forceId_k__BackingField,
         this->fields._groupId_k__BackingField,
         specifyPieceIndexes->m_Items[ReinfoIndex_k__BackingField + 1],
         0LL) )
  {
    Instance = (int64_t)*p_stagePieceDetailEntity;
    if ( !*p_stagePieceDetailEntity )
      goto LABEL_57;
    Instance = WarBoardStagePieceDetailEntity__getRoleType((WarBoardStagePieceDetailEntity_o *)Instance, 0LL);
    stagePieceDetailEntity = this->fields.stagePieceDetailEntity;
    this->fields._roleType_k__BackingField = Instance;
    if ( !stagePieceDetailEntity )
      goto LABEL_57;
    IsNotIncludeWin = WarBoardStagePieceDetailEntity__IsNotIncludeWin(stagePieceDetailEntity, 0LL);
  }
  else
  {
    IsNotIncludeWin = 0;
    this->fields._roleType_k__BackingField = 0;
  }
  this->fields._isNotIncludeWin_k__BackingField = IsNotIncludeWin;
  if ( WarBoardReinforcementsEntity__TryGetRoleType(reinfoEntity, &value, 0LL) )
    this->fields._roleType_k__BackingField = value;
  if ( WarBoardReinforcementsEntity__IsNotIncludeWin(reinfoEntity, 0LL) )
    this->fields._isNotIncludeWin_k__BackingField = 1;
  actionType = reinfoEntity->fields.actionType;
  this->fields._isEditing_k__BackingField = 0;
  this->fields._IsDispConsumedPieceActionPoint_k__BackingField = 0;
  this->fields._actionType_k__BackingField = actionType;
  v39 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v40 = *(_OWORD *)&servantData->fields.id.fields.fakeValue;
  v41 = (WarBoardManager_o *)v39;
  *(_OWORD *)&v76.fields.currentCryptoKey = *(_OWORD *)&servantData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v76.fields.fakeValue = v40;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v75 = v76;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v75, 0LL);
  if ( !v41 )
    goto LABEL_57;
  BattleServant = WarBoardManager__GetBattleServant(v41, Instance, 0LL);
  this->fields._battleServant_k__BackingField = BattleServant;
  p_battleServant_k__BackingField = &this->fields._battleServant_k__BackingField;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._battleServant_k__BackingField,
    (System_Int32_array **)BattleServant,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.serverServantData = servantData;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.serverServantData,
    (System_Int32_array **)servantData,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  v56 = servantData->fields.squareIndex;
  this->fields._nowSquareIndex_k__BackingField = v56;
  this->fields._PutSquareIndex_k__BackingField = v56;
  this->fields._limitActionCount_k__BackingField = servantData->fields.limitActionPoint;
  this->fields._currentActionCount_k__BackingField = servantData->fields.currentActionPoint;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardActionPointClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
  Instance = (int64_t)WarBoardPieceData__get_ActionPointEntity(this, v58);
  if ( !this->fields._battleServant_k__BackingField
    || (v59 = (WarBoardActionPointEntity_o *)Instance,
        Instance = BattleServantData__getClassId(this->fields._battleServant_k__BackingField, 0LL),
        !Master_WarQuestSelectionMaster)
    || (EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                        Master_WarQuestSelectionMaster,
                                        v59,
                                        Instance,
                                        0LL),
        v61 = WarBoardCost__Create(EntityFromActionPointEntity, this->fields.stagePieceDetailEntity, reinfoEntity, 0LL),
        this->fields._Cost_k__BackingField = v61,
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields._Cost_k__BackingField,
          (System_Int32_array **)v61,
          v62,
          v63,
          v64,
          v65,
          v66,
          v67),
        (Instance = (int64_t)this->fields._Cost_k__BackingField) == 0) )
  {
LABEL_57:
    sub_B7769C(Instance, v25);
  }
  WarBoardCost__UpdateCurrentPointByServerData(
    (WarBoardCost_o *)Instance,
    servantData->fields.currentPieceActionPoint,
    0LL);
  forceId_k__BackingField = this->fields._forceId_k__BackingField;
  this->fields._attackCount_k__BackingField = servantData->fields.attackCount;
  defeatPoint = servantData->fields.defeatPoint;
  this->fields._breakPoint_k__BackingField = defeatPoint;
  this->fields._isDead_k__BackingField = defeatPoint < 0;
  if ( !forceId_k__BackingField && (npcIdx & 0x80000000) == 0 && !this->fields._groupId_k__BackingField )
  {
    if ( npcDict )
    {
      Instance = (int64_t)System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___get_Item(
                            (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)npcDict,
                            0,
                            (const MethodInfo_2FC65D0 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    }
    else
    {
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Instance )
        goto LABEL_57;
      Instance = *(_QWORD *)(Instance + 432);
      if ( !Instance )
        goto LABEL_57;
      Instance = (int64_t)WarBoardData__GetNpcEntity(
                            (WarBoardData_o *)Instance,
                            this->fields._forceId_k__BackingField,
                            this->fields._groupId_k__BackingField,
                            0LL);
    }
    if ( *p_battleServant_k__BackingField )
    {
      deckSvt = (*p_battleServant_k__BackingField)->fields.deckSvt;
      if ( deckSvt )
      {
        npcId = deckSvt->fields.npcId;
LABEL_55:
        this->fields._npcId_k__BackingField = npcId;
        npcSvtEquipId = servantData->fields.npcSvtEquipId;
        this->fields._isEditing_k__BackingField = 1;
        this->fields._npcEquipId_k__BackingField = npcSvtEquipId;
        goto LABEL_56;
      }
      goto LABEL_57;
    }
    if ( !Instance )
      goto LABEL_57;
    v72 = *(_QWORD *)(Instance + 48);
    if ( !v72 )
      goto LABEL_57;
    if ( *(_DWORD *)(v72 + 24) > (unsigned int)npcIdx )
    {
      npcId = *(_QWORD *)(v72 + 8LL * npcIdx + 32);
      goto LABEL_55;
    }
LABEL_58:
    v74 = sub_B776C8(Instance);
    sub_B77668(v74, 0LL);
  }
LABEL_56:
  WarBoardPieceData__SetServantIconData(this, v25);
}


void __fastcall WarBoardPieceData___ctor_24945032(
        WarBoardPieceData_o *this,
        int32_t stageId,
        WarBoardUserServantData_o *servantData,
        WarBoardPieceData_SaveData_o *saveData,
        System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *npcDict,
        int32_t npcIdx,
        const MethodInfo *method)
{
  WarBoardPieceData_PieceStatusCache_o *v13; // x25
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  int64_t Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v21; // x1
  struct System_Int32_array *reinforcementsIds; // x8
  __int64 ReinfoIndex_k__BackingField; // x9
  WarBoardReinforcementsEntity_o *v24; // x8
  int32_t id; // w9
  int32_t forceId; // w26
  int32_t groupId; // w27
  int32_t pieceIndex; // w28
  int32_t squareIndex; // w9
  struct WarBoardStagePieceDetailEntity_o **p_stagePieceDetailEntity; // x24
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x8
  bool IsNotIncludeWin; // w8
  int32_t actionType; // w8
  __int128 v34; // q1
  WarBoardManager_o *v35; // x23
  struct BattleServantData_o *BattleServant; // x0
  struct BattleServantData_o **p_battleServant_k__BackingField; // x23
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  int32_t v50; // w8
  WarBoardActionPointClassMaster_o *v51; // x24
  const MethodInfo *v52; // x1
  WarBoardActionPointEntity_o *v53; // x25
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  struct WarBoardCost_o *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  int32_t forceId_k__BackingField; // w9
  int defeatPoint; // w8
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t npcId; // x8
  __int64 v66; // x8
  int64_t npcSvtEquipId; // x8
  __int64 v68; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v70; // [xsp+20h] [xbp-90h]
  int32_t value; // [xsp+4Ch] [xbp-64h] BYREF
  WarBoardReinforcementsEntity_o *reinforcementsEntity; // [xsp+50h] [xbp-60h] BYREF
  WarBoardStageReinforcementsEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_438AF21 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&WarBoardPieceData_PieceStatusCache_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&WarBoardPieceData_TypeInfo);
    byte_438AF21 = 1;
  }
  reinforcementsEntity = 0LL;
  entity = 0LL;
  value = 0;
  v13 = (WarBoardPieceData_PieceStatusCache_o *)sub_B77694(WarBoardPieceData_PieceStatusCache_TypeInfo);
  WarBoardPieceData_PieceStatusCache___ctor(v13, 0LL);
  this->fields.statusCache = v13;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.statusCache,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.stageId = stageId;
  if ( !saveData )
    goto LABEL_58;
  this->fields._StageReinfoId_k__BackingField = saveData->fields.stageReinforcementId;
  this->fields._ReinfoIndex_k__BackingField = saveData->fields.reinforcementIndex;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_58;
  WarBoardStageReinforcementsMaster__TryGetEntity(
    (WarBoardStageReinforcementsMaster_o *)Master_WarQuestSelectionMaster,
    &entity,
    stageId,
    this->fields._StageReinfoId_k__BackingField,
    0LL);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  if ( !entity )
    goto LABEL_58;
  reinforcementsIds = entity->fields.reinforcementsIds;
  if ( !reinforcementsIds )
    goto LABEL_58;
  ReinfoIndex_k__BackingField = this->fields._ReinfoIndex_k__BackingField;
  if ( (unsigned int)ReinfoIndex_k__BackingField >= reinforcementsIds->max_length )
    goto LABEL_59;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_58;
  Master_WarQuestSelectionMaster = WarBoardReinforcementsMaster__TryGetEntity(
                                     (WarBoardReinforcementsMaster_o *)Master_WarQuestSelectionMaster,
                                     &reinforcementsEntity,
                                     reinforcementsIds->m_Items[ReinfoIndex_k__BackingField + 1],
                                     0LL);
  v24 = reinforcementsEntity;
  if ( !reinforcementsEntity )
    goto LABEL_58;
  id = reinforcementsEntity->fields.id;
  this->fields._type_k__BackingField = 0;
  this->fields._ReinfoId_k__BackingField = id;
  forceId = saveData->fields.forceId;
  this->fields._forceId_k__BackingField = forceId;
  groupId = saveData->fields.groupId;
  this->fields._groupId_k__BackingField = groupId;
  pieceIndex = saveData->fields.pieceIndex;
  this->fields._index_k__BackingField = pieceIndex;
  Master_WarQuestSelectionMaster = (int64_t)WarBoardPieceData_TypeInfo;
  if ( (BYTE3(WarBoardPieceData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPieceData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo);
    v24 = reinforcementsEntity;
  }
  this->fields._uniqueIndex_k__BackingField = (forceId << 24) | ((unsigned __int8)groupId << 16) | (unsigned __int16)pieceIndex;
  squareIndex = saveData->fields.squareIndex;
  this->fields._nowSquareIndex_k__BackingField = squareIndex;
  this->fields._PutSquareIndex_k__BackingField = squareIndex;
  this->fields._overwriteActionType_k__BackingField = saveData->fields.overwriteActionType;
  this->fields._overwriteAiId_k__BackingField = saveData->fields.overwriteAiId;
  this->fields._entryTurn_k__BackingField = saveData->fields.entryTurn;
  if ( !v24 )
    goto LABEL_58;
  this->fields._breakPointMax_k__BackingField = v24->fields.breakPoint;
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_58;
  p_stagePieceDetailEntity = &this->fields.stagePieceDetailEntity;
  if ( WarBoardStagePieceDetailMaster__TryGetEntity(
         (WarBoardStagePieceDetailMaster_o *)Master_WarQuestSelectionMaster,
         &this->fields.stagePieceDetailEntity,
         stageId,
         this->fields._forceId_k__BackingField,
         this->fields._groupId_k__BackingField,
         this->fields._index_k__BackingField,
         0LL) )
  {
    Master_WarQuestSelectionMaster = (int64_t)*p_stagePieceDetailEntity;
    if ( !*p_stagePieceDetailEntity )
      goto LABEL_58;
    Master_WarQuestSelectionMaster = WarBoardStagePieceDetailEntity__getRoleType(
                                       (WarBoardStagePieceDetailEntity_o *)Master_WarQuestSelectionMaster,
                                       0LL);
    stagePieceDetailEntity = this->fields.stagePieceDetailEntity;
    this->fields._roleType_k__BackingField = Master_WarQuestSelectionMaster;
    if ( !stagePieceDetailEntity )
      goto LABEL_58;
    IsNotIncludeWin = WarBoardStagePieceDetailEntity__IsNotIncludeWin(stagePieceDetailEntity, 0LL);
  }
  else
  {
    IsNotIncludeWin = 0;
    this->fields._roleType_k__BackingField = 0;
  }
  this->fields._isNotIncludeWin_k__BackingField = IsNotIncludeWin;
  Master_WarQuestSelectionMaster = (int64_t)reinforcementsEntity;
  if ( !reinforcementsEntity )
    goto LABEL_58;
  if ( WarBoardReinforcementsEntity__TryGetRoleType(reinforcementsEntity, &value, 0LL) )
    this->fields._roleType_k__BackingField = value;
  Master_WarQuestSelectionMaster = (int64_t)reinforcementsEntity;
  if ( !reinforcementsEntity )
    goto LABEL_58;
  Master_WarQuestSelectionMaster = WarBoardReinforcementsEntity__IsNotIncludeWin(reinforcementsEntity, 0LL);
  if ( (Master_WarQuestSelectionMaster & 1) != 0 )
    this->fields._isNotIncludeWin_k__BackingField = 1;
  if ( !reinforcementsEntity )
    goto LABEL_58;
  actionType = reinforcementsEntity->fields.actionType;
  this->fields._isEditing_k__BackingField = 0;
  this->fields._IsDispConsumedPieceActionPoint_k__BackingField = 0;
  this->fields._actionType_k__BackingField = actionType;
  Master_WarQuestSelectionMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !servantData )
    goto LABEL_58;
  v34 = *(_OWORD *)&servantData->fields.id.fields.fakeValue;
  v35 = (WarBoardManager_o *)Master_WarQuestSelectionMaster;
  *(_OWORD *)&v70.fields.currentCryptoKey = *(_OWORD *)&servantData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v70.fields.fakeValue = v34;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v69 = v70;
  Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v69, 0LL);
  if ( !v35 )
    goto LABEL_58;
  BattleServant = WarBoardManager__GetBattleServant(v35, Master_WarQuestSelectionMaster, 0LL);
  this->fields._battleServant_k__BackingField = BattleServant;
  p_battleServant_k__BackingField = &this->fields._battleServant_k__BackingField;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._battleServant_k__BackingField,
    (System_Int32_array **)BattleServant,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  this->fields.serverServantData = servantData;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.serverServantData,
    (System_Int32_array **)servantData,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v50 = servantData->fields.squareIndex;
  this->fields._nowSquareIndex_k__BackingField = v50;
  this->fields._PutSquareIndex_k__BackingField = v50;
  this->fields._limitActionCount_k__BackingField = servantData->fields.limitActionPoint;
  this->fields._currentActionCount_k__BackingField = servantData->fields.currentActionPoint;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v51 = (WarBoardActionPointClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
  Master_WarQuestSelectionMaster = (int64_t)WarBoardPieceData__get_ActionPointEntity(this, v52);
  if ( !this->fields._battleServant_k__BackingField
    || (v53 = (WarBoardActionPointEntity_o *)Master_WarQuestSelectionMaster,
        Master_WarQuestSelectionMaster = BattleServantData__getClassId(this->fields._battleServant_k__BackingField, 0LL),
        !v51)
    || (EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                        v51,
                                        v53,
                                        Master_WarQuestSelectionMaster,
                                        0LL),
        v55 = WarBoardCost__Create(
                EntityFromActionPointEntity,
                this->fields.stagePieceDetailEntity,
                reinforcementsEntity,
                0LL),
        this->fields._Cost_k__BackingField = v55,
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields._Cost_k__BackingField,
          (System_Int32_array **)v55,
          v56,
          v57,
          v58,
          v59,
          v60,
          v61),
        (Master_WarQuestSelectionMaster = (int64_t)this->fields._Cost_k__BackingField) == 0) )
  {
LABEL_58:
    sub_B7769C(Master_WarQuestSelectionMaster, v21);
  }
  WarBoardCost__UpdateCurrentPointByServerData(
    (WarBoardCost_o *)Master_WarQuestSelectionMaster,
    servantData->fields.currentPieceActionPoint,
    0LL);
  forceId_k__BackingField = this->fields._forceId_k__BackingField;
  this->fields._attackCount_k__BackingField = servantData->fields.attackCount;
  defeatPoint = servantData->fields.defeatPoint;
  this->fields._breakPoint_k__BackingField = defeatPoint;
  this->fields._isDead_k__BackingField = defeatPoint < 0;
  if ( !forceId_k__BackingField && (npcIdx & 0x80000000) == 0 && !this->fields._groupId_k__BackingField )
  {
    if ( npcDict )
    {
      Master_WarQuestSelectionMaster = (int64_t)System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___get_Item(
                                                  (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)npcDict,
                                                  0,
                                                  (const MethodInfo_2FC65D0 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    }
    else
    {
      Master_WarQuestSelectionMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_58;
      Master_WarQuestSelectionMaster = *(_QWORD *)(Master_WarQuestSelectionMaster + 432);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_58;
      Master_WarQuestSelectionMaster = (int64_t)WarBoardData__GetNpcEntity(
                                                  (WarBoardData_o *)Master_WarQuestSelectionMaster,
                                                  this->fields._forceId_k__BackingField,
                                                  this->fields._groupId_k__BackingField,
                                                  0LL);
    }
    if ( *p_battleServant_k__BackingField )
    {
      deckSvt = (*p_battleServant_k__BackingField)->fields.deckSvt;
      if ( deckSvt )
      {
        npcId = deckSvt->fields.npcId;
LABEL_56:
        this->fields._npcId_k__BackingField = npcId;
        npcSvtEquipId = servantData->fields.npcSvtEquipId;
        this->fields._isEditing_k__BackingField = 1;
        this->fields._npcEquipId_k__BackingField = npcSvtEquipId;
        goto LABEL_57;
      }
      goto LABEL_58;
    }
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_58;
    v66 = *(_QWORD *)(Master_WarQuestSelectionMaster + 48);
    if ( !v66 )
      goto LABEL_58;
    if ( *(_DWORD *)(v66 + 24) > (unsigned int)npcIdx )
    {
      npcId = *(_QWORD *)(v66 + 8LL * npcIdx + 32);
      goto LABEL_56;
    }
LABEL_59:
    v68 = sub_B776C8(Master_WarQuestSelectionMaster);
    sub_B77668(v68, 0LL);
  }
LABEL_57:
  WarBoardPieceData__SetServantIconData(this, v21);
}


void __fastcall WarBoardPieceData__ActionMove(WarBoardPieceData_o *this, const MethodInfo *method)
{
  int32_t currentActionCount_k__BackingField; // w8
  WarBoardCost_o *Cost_k__BackingField; // x0

  currentActionCount_k__BackingField = this->fields._currentActionCount_k__BackingField;
  Cost_k__BackingField = this->fields._Cost_k__BackingField;
  this->fields._currentActionCount_k__BackingField = currentActionCount_k__BackingField - 1;
  if ( !Cost_k__BackingField
    || (WarBoardCost__ActionMove(Cost_k__BackingField, 0LL),
        (Cost_k__BackingField = (WarBoardCost_o *)this->fields.pieceComponent) == 0LL) )
  {
    sub_B7769C(Cost_k__BackingField, method);
  }
  ((void (__fastcall *)(WarBoardCost_o *, void *))Cost_k__BackingField->klass[1]._1.typeMetadataHandle)(
    Cost_k__BackingField,
    Cost_k__BackingField->klass[1]._1.interopData);
}


void __fastcall WarBoardPieceData__ActivateCacheMode(WarBoardPieceData_o *this, bool flg, const MethodInfo *method)
{
  WarBoardPieceData_PieceStatusCache_o *statusCache; // x0

  statusCache = this->fields.statusCache;
  if ( !statusCache )
    sub_B7769C(0LL, flg);
  WarBoardPieceData_PieceStatusCache__SetEnable(statusCache, flg, 0LL);
}


void __fastcall WarBoardPieceData__AddCriticalStar(WarBoardPieceData_o *this, int32_t count, const MethodInfo *method)
{
  struct WarBoardUserServantData_o *serverServantData; // x8
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  serverServantData = this->fields.serverServantData;
  if ( serverServantData )
  {
    serverServantData->fields.criticalStars += count;
    pieceComponent = this->fields.pieceComponent;
    if ( !pieceComponent )
      sub_B7769C(0LL, count);
    ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))pieceComponent->klass->vtable._17_ChangeCriticalStars.method)(
      pieceComponent,
      pieceComponent->klass->vtable._18_Selectable.methodPtr);
  }
}


void __fastcall WarBoardPieceData__AfterAttack(
        WarBoardPieceData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_B7769C(0LL, squareIndex);
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, int32_t, Il2CppMethodPointer))pieceComponent->klass->vtable._27_OnAfterAttack.method)(
    pieceComponent,
    squareIndex,
    pieceComponent->klass->vtable._28_OnWallAttack.methodPtr);
}


void __fastcall WarBoardPieceData__AfterWallAttack(
        WarBoardPieceData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_B7769C(0LL, squareIndex);
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, int32_t, Il2CppMethodPointer))pieceComponent->klass->vtable._29_OnAfterWallAttack.method)(
    pieceComponent,
    squareIndex,
    pieceComponent->klass->vtable._30_OnDamage.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceData__ApplyDisplayType(
        WarBoardPieceData_o *this,
        UISpriteAltMat_o *enemyIcon,
        const MethodInfo *method)
{
  float v3; // s4
  float v4; // s5
  float v5; // s6
  float v6; // s7
  struct WarBoardUserServantData_o *serverServantData; // x8
  int32_t displayType; // w8
  __int64 v10; // x0
  __int64 v11; // x1
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Color_o v16; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  *(_QWORD *)&v16.fields.r = 0LL;
  serverServantData = this->fields.serverServantData;
  if ( serverServantData )
  {
    displayType = serverServantData->fields.displayType;
    if ( displayType != 3 )
    {
      if ( displayType == 2 )
      {
        if ( !this->fields._IsShadow_k__BackingField )
          return;
        v17.fields.r = 0.05;
        v17.fields.a = 1.0;
        v17.fields.g = 0.05;
        v17.fields.b = 0.05;
        UnityEngine_Color___ctor(v17, v3, v4, v5, v6, (const MethodInfo *)&v16);
        if ( !enemyIcon )
LABEL_6:
          sub_B7769C(v10, v11);
        UIWidget__set_color((UIWidget_o *)enemyIcon, v16, 0LL);
        g = v16.fields.g;
        r = v16.fields.r;
        a = v16.fields.a;
        b = v16.fields.b;
        goto LABEL_10;
      }
      if ( displayType != 1 )
        return;
    }
    *(UnityEngine_Color_o *)&r = UnityEngine_Color__get_white(0LL);
    if ( !enemyIcon )
      goto LABEL_6;
LABEL_10:
    UIWidget__set_color((UIWidget_o *)enemyIcon, *(UnityEngine_Color_o *)&r, 0LL);
  }
}


void __fastcall WarBoardPieceData__Attack(WarBoardPieceData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_B7769C(0LL, squareIndex);
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, int32_t, Il2CppMethodPointer))pieceComponent->klass->vtable._25_OnAttack.method)(
    pieceComponent,
    squareIndex,
    pieceComponent->klass->vtable._26_OnAttackResume.methodPtr);
}


void __fastcall WarBoardPieceData__AttackAction(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardCost_o *Cost_k__BackingField; // x0

  if ( this->fields._limitActionCount_k__BackingField <= 0 )
  {
    Cost_k__BackingField = this->fields._Cost_k__BackingField;
    if ( !Cost_k__BackingField )
      goto LABEL_7;
    if ( WarBoardCost__get_HasCost(Cost_k__BackingField, 0LL) )
    {
      Cost_k__BackingField = this->fields._Cost_k__BackingField;
      if ( Cost_k__BackingField )
      {
        WarBoardCost__ActionAttack(Cost_k__BackingField, 0LL);
        return;
      }
LABEL_7:
      sub_B7769C(Cost_k__BackingField, method);
    }
  }
  --this->fields._currentActionCount_k__BackingField;
}


void __fastcall WarBoardPieceData__AttackResume(
        WarBoardPieceData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_B7769C(0LL, squareIndex);
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, int32_t, Il2CppMethodPointer))pieceComponent->klass->vtable._26_OnAttackResume.method)(
    pieceComponent,
    squareIndex,
    pieceComponent->klass->vtable._27_OnAfterAttack.methodPtr);
}


void __fastcall WarBoardPieceData__ChangeStatus(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    goto LABEL_8;
  WarBoardPieceBaseComponent__UpdateUiByBuffChanged(pieceComponent, method);
  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    goto LABEL_8;
  if ( (((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))pieceComponent->klass->vtable._16_IsModifyStatus.method)(
          pieceComponent,
          pieceComponent->klass->vtable._17_ChangeCriticalStars.methodPtr) & 1) != 0
    && !this->fields._isDead_k__BackingField )
  {
    pieceComponent = this->fields.pieceComponent;
    if ( pieceComponent )
    {
      ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, _QWORD, Il2CppMethodPointer))pieceComponent->klass->vtable._15_ChangeStatus.method)(
        pieceComponent,
        0LL,
        pieceComponent->klass->vtable._16_IsModifyStatus.methodPtr);
      return;
    }
LABEL_8:
    sub_B7769C(pieceComponent, method);
  }
}


bool __fastcall WarBoardPieceData__CheckWallAttackCond(
        WarBoardPieceData_o *this,
        WarBoardWallData_o *targetWall,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  _QWORD **v7; // x22
  __int64 v8; // x21
  __int16 v9; // w8
  __int64 v10; // x21
  __int64 v11; // x21
  __int64 v12; // x21
  WarBoardStageWallEntity_o *wallEntity; // x0
  WarBoardStageWallEntity_o *v14; // x20
  System_Int32_array *Individuality; // x0
  struct System_String_o *name; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x19
  unsigned __int64 v18; // x21
  __int64 v20; // x0

  if ( (byte_438AF28 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_Empty_int___);
    sub_B775C4(&Method_System_Linq_Enumerable_Contains_int___);
    byte_438AF28 = 1;
  }
  if ( !targetWall
    || WarBoardWallData__get_wallAttackForceId(targetWall, 0LL) != this->fields._forceId_k__BackingField
    && (WarBoardWallData__get_wallAttackForceId(targetWall, 0LL) & 0x80000000) == 0 )
  {
    return 0;
  }
  v7 = (_QWORD **)Method_System_Array_Empty_int___;
  v8 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v9 = *(_WORD *)(v8 + 306);
  if ( (v9 & 1) == 0 )
  {
    sub_B0F2C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v9 = *(_WORD *)(v8 + 306);
  }
  if ( (v9 & 0x400) != 0 )
  {
    v10 = *v7[6];
    if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
      sub_B0F2C4(*v7[6]);
    if ( !*(_DWORD *)(v10 + 224) )
    {
      v11 = *v7[6];
      if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
        sub_B0F2C4(*v7[6]);
      j_il2cpp_runtime_class_init_0(v11);
    }
  }
  v12 = *v7[6];
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_B0F2C4(*v7[6]);
  wallEntity = targetWall->fields.wallEntity;
  if ( wallEntity )
  {
    wallEntity = (WarBoardStageWallEntity_o *)WarBoardStageWallEntity__GetCondAttackIndividuality(wallEntity, 0LL);
    v14 = wallEntity;
    if ( wallEntity )
      goto LABEL_19;
LABEL_28:
    sub_B7769C(wallEntity, v5);
  }
  v14 = **(WarBoardStageWallEntity_o ***)(v12 + 184);
  if ( !v14 )
    goto LABEL_28;
LABEL_19:
  if ( v14->fields.name )
  {
    Individuality = WarBoardPieceData__GetIndividuality(this, 0LL, v6);
    name = v14->fields.name;
    if ( (int)name >= 1 )
    {
      v17 = (System_Collections_Generic_IEnumerable_TSource__o *)Individuality;
      v18 = 0LL;
      while ( 1 )
      {
        if ( v18 >= (unsigned int)name )
        {
          v20 = sub_B776C8(Individuality);
          sub_B77668(v20, 0LL);
        }
        Individuality = (System_Int32_array *)System_Linq_Enumerable__Contains_int_(
                                                v17,
                                                *(&v14->fields.attackForceId + v18),
                                                (const MethodInfo_1D2A620 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)Individuality & 1) != 0 )
          break;
        LODWORD(name) = v14->fields.name;
        if ( (__int64)++v18 >= (int)name )
          return 0;
      }
      return 1;
    }
    return 0;
  }
  return 1;
}


void __fastcall WarBoardPieceData__ClearPartyBuff(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x8
  __int64 v4; // x11
  UnityEngine_Object_o *v5; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_438AF30 & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&WarBoardServantPieceComponent_TypeInfo);
    byte_438AF30 = 1;
  }
  pieceComponent = this->fields.pieceComponent;
  if ( pieceComponent
    && (v4 = *(&WarBoardServantPieceComponent_TypeInfo->_2.bitflags2 + 1),
        *(&pieceComponent->klass->_2.bitflags2 + 1) >= (unsigned int)v4) )
  {
    if ( (WarBoardServantPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[v4 - 1] == WarBoardServantPieceComponent_TypeInfo )
      v5 = (UnityEngine_Object_o *)this->fields.pieceComponent;
    else
      v5 = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = UnityEngine_Object__op_Equality(v5, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !v5 )
      sub_B7769C(v6, v7);
    WarBoardServantPieceComponent__ClearPartyBuff((WarBoardServantPieceComponent_o *)v5, 0LL);
  }
}


void __fastcall WarBoardPieceData__ClearPrevAiRoute(WarBoardPieceData_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._PrevAiRoute_k__BackingField = 0LL;
  sub_B77560((BattleServantConfConponent_o *)&this->fields._PrevAiRoute_k__BackingField, 0LL, v2, v3, v4, v5, v6, v7);
}


System_Int32_array *__fastcall WarBoardPieceData__CreatePieceEventVals(
        WarBoardPieceData_o *this,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  __int64 v4; // x1
  il2cpp_array_size_t max_length; // w8
  __int64 v6; // x0

  if ( (byte_438AF3A & 1) == 0 )
  {
    sub_B775C4(&int___TypeInfo);
    byte_438AF3A = 1;
  }
  result = (System_Int32_array *)sub_B775DC(int___TypeInfo, 3LL);
  if ( !result )
    sub_B7769C(0LL, v4);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = this->fields._forceId_k__BackingField, max_length == 1)
    || (result->m_Items[2] = this->fields._groupId_k__BackingField, max_length <= 2) )
  {
    v6 = sub_B776C8(result);
    sub_B77668(v6, 0LL);
  }
  result->m_Items[3] = this->fields._index_k__BackingField;
  return result;
}


void __fastcall WarBoardPieceData__DeadNow(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  this->fields._isDead_k__BackingField = 1;
  if ( !pieceComponent )
    sub_B7769C(0LL, method);
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, _QWORD, __int64, Il2CppMethodPointer))pieceComponent->klass->vtable._32_OnDead.method)(
    pieceComponent,
    0LL,
    0LL,
    1LL,
    pieceComponent->klass->vtable._33_OnRevive.methodPtr);
}


WarBoardManager_TaskList_o *__fastcall WarBoardPieceData__DecrementBreakPointPerformance(
        WarBoardPieceData_o *this,
        const MethodInfo *method)
{
  WarBoardManager_TaskList_o *v3; // x19
  __int64 v4; // x1
  unsigned int breakPoint_k__BackingField; // w22
  unsigned int v6; // w21
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  if ( (byte_438AF2B & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_WarBoardMessageMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&WarBoardManager_TaskList_TypeInfo);
    byte_438AF2B = 1;
  }
  v3 = (WarBoardManager_TaskList_o *)sub_B77694(WarBoardManager_TaskList_TypeInfo);
  WarBoardManager_TaskList___ctor(v3, 0LL);
  breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
  v6 = breakPoint_k__BackingField - 1;
  if ( (int)(breakPoint_k__BackingField - 1) < 1 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
    pieceComponent = this->fields.pieceComponent;
    if ( pieceComponent )
    {
      ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, _QWORD, _QWORD, __int64, Il2CppMethodPointer))pieceComponent->klass->vtable._31_OnBreak.method)(
        pieceComponent,
        breakPoint_k__BackingField,
        0LL,
        v3,
        v6,
        0LL,
        1LL,
        pieceComponent->klass->vtable._32_OnDead.methodPtr);
      pieceComponent = this->fields.pieceComponent;
      if ( pieceComponent )
      {
        ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, WarBoardManager_TaskList_o *, __int64, Il2CppMethodPointer))pieceComponent->klass->vtable._32_OnDead.method)(
          pieceComponent,
          0LL,
          v3,
          1LL,
          pieceComponent->klass->vtable._33_OnRevive.methodPtr);
        return v3;
      }
    }
LABEL_13:
    sub_B7769C(pieceComponent, v4);
  }
  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    goto LABEL_13;
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, _QWORD, _QWORD, __int64, Il2CppMethodPointer))pieceComponent->klass->vtable._31_OnBreak.method)(
    pieceComponent,
    breakPoint_k__BackingField,
    0LL,
    v3,
    v6,
    0LL,
    1LL,
    pieceComponent->klass->vtable._32_OnDead.methodPtr);
  return v3;
}


void __fastcall WarBoardPieceData__Deselect(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardData_o *pieceComponent; // x0
  WarBoardSquareData_o *Square; // x0

  if ( (byte_438AF2A & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_438AF2A = 1;
  }
  pieceComponent = (WarBoardData_o *)this->fields.pieceComponent;
  if ( !pieceComponent
    || (((void (__fastcall *)(WarBoardData_o *, Il2CppMethodPointer))pieceComponent->klass[1].vtable._0_Equals.method)(
          pieceComponent,
          pieceComponent->klass[1].vtable._1_Finalize.methodPtr),
        (pieceComponent = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (pieceComponent = (WarBoardData_o *)pieceComponent[1].fields.reinforcementsSaveList) == 0LL )
  {
    sub_B7769C(pieceComponent, method);
  }
  Square = WarBoardData__GetSquare(pieceComponent, this->fields._nowSquareIndex_k__BackingField, 0LL);
  if ( Square )
    WarBoardSquareData__Deselect(Square, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardPieceData__EnableAttack(
        WarBoardPieceData_o *this,
        int32_t substructPoint,
        const MethodInfo *method)
{
  WarBoardCost_o *Cost_k__BackingField; // x0
  WarBoardCost_o *v6; // x0

  Cost_k__BackingField = this->fields._Cost_k__BackingField;
  if ( Cost_k__BackingField && WarBoardCost__get_HasCost(Cost_k__BackingField, 0LL) )
  {
    v6 = this->fields._Cost_k__BackingField;
    if ( !v6 )
      sub_B7769C(0LL, *(_QWORD *)&substructPoint);
    if ( !WarBoardCost__IsAttack(v6, substructPoint, 0LL) )
      return 0;
  }
  if ( WarBoardPieceData__HasSelfMoveDisabledBuff(this, *(const MethodInfo **)&substructPoint) )
    return 0;
  if ( this->fields._limitActionCount_k__BackingField < 1 )
    return 1;
  return this->fields._currentActionCount_k__BackingField > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardPieceData__EnableMoveBySelf(
        WarBoardPieceData_o *this,
        int32_t substructPoint,
        const MethodInfo *method)
{
  WarBoardCost_o *Cost_k__BackingField; // x0
  WarBoardCost_o *v6; // x0

  Cost_k__BackingField = this->fields._Cost_k__BackingField;
  if ( Cost_k__BackingField && WarBoardCost__get_HasCost(Cost_k__BackingField, 0LL) )
  {
    v6 = this->fields._Cost_k__BackingField;
    if ( !v6 )
      sub_B7769C(0LL, *(_QWORD *)&substructPoint);
    if ( !WarBoardCost__IsMove(v6, substructPoint, 0LL) )
      return 0;
  }
  if ( WarBoardPieceData__HasSelfMoveDisabledBuff(this, *(const MethodInfo **)&substructPoint) )
    return 0;
  if ( this->fields._limitActionCount_k__BackingField < 1 )
    return 1;
  return this->fields._currentActionCount_k__BackingField > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardPieceData__EnableSwapByOther(
        WarBoardPieceData_o *this,
        int32_t substructPoint,
        const MethodInfo *method)
{
  WarBoardCost_o *Cost_k__BackingField; // x0
  WarBoardCost_o *v6; // x0

  Cost_k__BackingField = this->fields._Cost_k__BackingField;
  if ( Cost_k__BackingField && WarBoardCost__get_HasCost(Cost_k__BackingField, 0LL) )
  {
    v6 = this->fields._Cost_k__BackingField;
    if ( !v6 )
      sub_B7769C(0LL, *(_QWORD *)&substructPoint);
    if ( !WarBoardCost__IsMove(v6, substructPoint, 0LL) )
      return 0;
  }
  if ( WarBoardPieceData__HasCompletelyActionDisabledBuff(this, *(const MethodInfo **)&substructPoint) )
    return 0;
  if ( this->fields._limitActionCount_k__BackingField < 1 )
    return 1;
  return this->fields._currentActionCount_k__BackingField > 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardPieceData__EnableWallAttack(
        WarBoardPieceData_o *this,
        int32_t substructPoint,
        const MethodInfo *method)
{
  WarBoardCost_o *Cost_k__BackingField; // x0
  WarBoardCost_o *v6; // x0

  Cost_k__BackingField = this->fields._Cost_k__BackingField;
  if ( Cost_k__BackingField && WarBoardCost__get_HasCost(Cost_k__BackingField, 0LL) )
  {
    v6 = this->fields._Cost_k__BackingField;
    if ( !v6 )
      sub_B7769C(0LL, *(_QWORD *)&substructPoint);
    if ( !WarBoardCost__IsWallAttack(v6, substructPoint, 0LL) )
      return 0;
  }
  if ( WarBoardPieceData__HasSelfMoveDisabledBuff(this, *(const MethodInfo **)&substructPoint) )
    return 0;
  if ( this->fields._limitActionCount_k__BackingField < 1 )
    return 1;
  return this->fields._currentActionCount_k__BackingField > 0;
}


int32_t __fastcall WarBoardPieceData__GetActionPoint(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardCost_o *Cost_k__BackingField; // x0
  struct WarBoardCost_o *v4; // x8
  int32_t *p_currentActionCount_k__BackingField; // x8

  if ( this->fields._limitActionCount_k__BackingField > 0 )
    goto LABEL_6;
  Cost_k__BackingField = this->fields._Cost_k__BackingField;
  if ( !Cost_k__BackingField )
    goto LABEL_8;
  Cost_k__BackingField = (WarBoardCost_o *)WarBoardCost__get_HasCost(Cost_k__BackingField, 0LL);
  if ( ((unsigned __int8)Cost_k__BackingField & 1) == 0 )
  {
LABEL_6:
    p_currentActionCount_k__BackingField = &this->fields._currentActionCount_k__BackingField;
    return *p_currentActionCount_k__BackingField;
  }
  v4 = this->fields._Cost_k__BackingField;
  if ( !v4 )
LABEL_8:
    sub_B7769C(Cost_k__BackingField, method);
  p_currentActionCount_k__BackingField = &v4->fields._CurrentActionPoint_k__BackingField;
  return *p_currentActionCount_k__BackingField;
}


BuffList_TYPE_array *__fastcall WarBoardPieceData__GetBuffTypesFromConstantStr(
        System_String_o *key,
        const MethodInfo *method)
{
  System_Int32_array *ValueAsIntArray; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v4; // x19
  WarBoardPieceData___c_c *v5; // x0
  struct WarBoardPieceData___c_StaticFields *static_fields; // x8
  System_Func_int__BuffList_TYPE__o *_9__336_0; // x20
  Il2CppObject *v8; // x21
  struct WarBoardPieceData___c_StaticFields *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  BuffList_TYPE_array *result; // x0
  _QWORD **v18; // x20
  __int64 v19; // x19
  __int16 v20; // w8
  __int64 v21; // x19
  __int64 v22; // x19
  __int64 v23; // x19

  if ( (byte_438AF38 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Array_Empty_BuffList_TYPE___);
    sub_B775C4(&Method_System_Linq_Enumerable_Select_int__BuffList_TYPE___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_BuffList_TYPE___);
    sub_B775C4(&Method_System_Func_int__BuffList_TYPE___ctor__);
    sub_B775C4(&System_Func_int__BuffList_TYPE__TypeInfo);
    sub_B775C4(&Method_WarBoardPieceData___c__GetBuffTypesFromConstantStr_b__336_0__);
    sub_B775C4(&WarBoardPieceData___c_TypeInfo);
    byte_438AF38 = 1;
  }
  ValueAsIntArray = ConstantStrMaster__GetValueAsIntArray(key, 0LL);
  if ( !ValueAsIntArray )
    goto LABEL_13;
  v4 = (System_Collections_Generic_IEnumerable_TSource__o *)ValueAsIntArray;
  v5 = WarBoardPieceData___c_TypeInfo;
  if ( (BYTE3(WarBoardPieceData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPieceData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceData___c_TypeInfo);
    v5 = WarBoardPieceData___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  _9__336_0 = static_fields->__9__336_0;
  if ( !_9__336_0 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = WarBoardPieceData___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__336_0 = (System_Func_int__BuffList_TYPE__o *)sub_B77694(System_Func_int__BuffList_TYPE__TypeInfo);
    System_Func_int__BuffList_TYPE____ctor(
      _9__336_0,
      v8,
      Method_WarBoardPieceData___c__GetBuffTypesFromConstantStr_b__336_0__,
      (const MethodInfo_29E3934 *)Method_System_Func_int__BuffList_TYPE___ctor__);
    v9 = WarBoardPieceData___c_TypeInfo->static_fields;
    v9->__9__336_0 = _9__336_0;
    sub_B77560(
      (BattleServantConfConponent_o *)&v9->__9__336_0,
      (System_Int32_array **)_9__336_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BuffList_TYPE_(
                                                               v4,
                                                               (System_Func_TSource__TResult__o *)_9__336_0,
                                                               (const MethodInfo_1D37548 *)Method_System_Linq_Enumerable_Select_int__BuffList_TYPE___);
  result = System_Linq_Enumerable__ToArray_BuffList_TYPE_(
             v16,
             (const MethodInfo_1D3D4CC *)Method_System_Linq_Enumerable_ToArray_BuffList_TYPE___);
  if ( !result )
  {
LABEL_13:
    v18 = (_QWORD **)Method_System_Array_Empty_BuffList_TYPE___;
    v19 = **((_QWORD **)Method_System_Array_Empty_BuffList_TYPE___ + 6);
    v20 = *(_WORD *)(v19 + 306);
    if ( (v20 & 1) == 0 )
    {
      sub_B0F2C4(**((_QWORD **)Method_System_Array_Empty_BuffList_TYPE___ + 6));
      v20 = *(_WORD *)(v19 + 306);
    }
    if ( (v20 & 0x400) != 0 )
    {
      v21 = *v18[6];
      if ( (*(_BYTE *)(v21 + 306) & 1) == 0 )
        sub_B0F2C4(*v18[6]);
      if ( !*(_DWORD *)(v21 + 224) )
      {
        v22 = *v18[6];
        if ( (*(_BYTE *)(v22 + 306) & 1) == 0 )
          sub_B0F2C4(*v18[6]);
        j_il2cpp_runtime_class_init_0(v22);
      }
    }
    v23 = *v18[6];
    if ( (*(_BYTE *)(v23 + 306) & 1) == 0 )
      sub_B0F2C4(*v18[6]);
    return **(BuffList_TYPE_array ***)(v23 + 184);
  }
  return result;
}


int32_t __fastcall WarBoardPieceData__GetDeadEffectType(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardReinforcementsMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x0
  int32_t value; // [xsp+4h] [xbp-1Ch] BYREF
  WarBoardReinforcementsEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438AF33 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    byte_438AF33 = 1;
  }
  entity = 0LL;
  value = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_14;
  if ( !WarBoardReinforcementsMaster__TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          this->fields._ReinfoId_k__BackingField,
          0LL) )
    goto LABEL_11;
  Master_WarQuestSelectionMaster = (WarBoardReinforcementsMaster_o *)entity;
  if ( !entity )
LABEL_14:
    sub_B7769C(Master_WarQuestSelectionMaster, v4);
  if ( WarBoardReinforcementsEntity__TryGetDeadEffectType(entity, &value, 0LL) )
  {
    LODWORD(stagePieceDetailEntity) = value;
    return (int)stagePieceDetailEntity;
  }
LABEL_11:
  stagePieceDetailEntity = this->fields.stagePieceDetailEntity;
  if ( stagePieceDetailEntity )
    LODWORD(stagePieceDetailEntity) = WarBoardStagePieceDetailEntity__GetDeadEffectType(stagePieceDetailEntity, 0LL);
  return (int)stagePieceDetailEntity;
}


System_Int32_array *__fastcall WarBoardPieceData__GetIndividuality(
        WarBoardPieceData_o *this,
        IWarBoardObjectData_IndivGetArgs_o *args,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v5; // x20
  BattleServantData_o *battleServant_k__BackingField; // x0
  bool IsIgnoreIndivUnreleasable; // w3
  bool IsIncludeIgnoreIndividuality; // w2
  bool v9; // w4
  System_Int32_array *ConcatServantAndBuffIndividualityies; // x0
  __int64 v11; // x1

  if ( (byte_438AF1A & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_B775C4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    byte_438AF1A = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
  if ( battleServant_k__BackingField )
  {
    if ( args )
    {
      IsIgnoreIndivUnreleasable = args->fields.IsIgnoreIndivUnreleasable;
      IsIncludeIgnoreIndividuality = args->fields.IsIncludeIgnoreIndividuality;
      v9 = !args->fields.IsIncludePassiveIndividuality;
    }
    else
    {
      IsIncludeIgnoreIndividuality = 0;
      IsIgnoreIndivUnreleasable = 0;
      v9 = 0;
    }
    ConcatServantAndBuffIndividualityies = BattleServantData__getConcatServantAndBuffIndividualityies(
                                             battleServant_k__BackingField,
                                             0LL,
                                             IsIncludeIgnoreIndividuality,
                                             IsIgnoreIndivUnreleasable,
                                             v9,
                                             0LL);
    if ( !v5 )
LABEL_15:
      sub_B7769C(ConcatServantAndBuffIndividualityies, v11);
    System_Collections_Generic_List_int___AddRange(
      v5,
      (System_Collections_Generic_IEnumerable_T__o *)ConcatServantAndBuffIndividualityies,
      (const MethodInfo_30E603C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  ConcatServantAndBuffIndividualityies = (System_Int32_array *)BasicHelper__IsNullOrEmpty(
                                                                 (System_Collections_ICollection_o *)this->fields._individuality_k__BackingField,
                                                                 0LL);
  if ( ((unsigned __int8)ConcatServantAndBuffIndividualityies & 1) != 0 )
  {
    if ( !v5 )
      goto LABEL_15;
  }
  else
  {
    if ( !v5 )
      goto LABEL_15;
    System_Collections_Generic_List_int___AddRange(
      v5,
      (System_Collections_Generic_IEnumerable_T__o *)this->fields._individuality_k__BackingField,
      (const MethodInfo_30E603C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_30E7EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall WarBoardPieceData__GetMaxActionPoint(WarBoardPieceData_o *this, const MethodInfo *method)
{
  int32_t result; // w0
  WarBoardCost_o *Cost_k__BackingField; // x0

  result = this->fields._limitActionCount_k__BackingField;
  if ( result <= 0 )
  {
    Cost_k__BackingField = this->fields._Cost_k__BackingField;
    if ( !Cost_k__BackingField )
      goto LABEL_8;
    if ( WarBoardCost__get_HasCost(Cost_k__BackingField, 0LL) )
    {
      Cost_k__BackingField = this->fields._Cost_k__BackingField;
      if ( Cost_k__BackingField )
        return WarBoardCost__get_BaseActionPoint(Cost_k__BackingField, 0LL);
LABEL_8:
      sub_B7769C(Cost_k__BackingField, method);
    }
    return this->fields._limitActionCount_k__BackingField;
  }
  return result;
}


int32_t __fastcall WarBoardPieceData__GetMoveAfterAttack(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardReinforcementsMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x0
  int32_t type; // [xsp+4h] [xbp-1Ch] BYREF
  WarBoardReinforcementsEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438AF34 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    byte_438AF34 = 1;
  }
  entity = 0LL;
  type = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_14;
  if ( !WarBoardReinforcementsMaster__TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          this->fields._ReinfoId_k__BackingField,
          0LL) )
    goto LABEL_11;
  Master_WarQuestSelectionMaster = (WarBoardReinforcementsMaster_o *)entity;
  if ( !entity )
LABEL_14:
    sub_B7769C(Master_WarQuestSelectionMaster, v4);
  if ( WarBoardReinforcementsEntity__TryGetMoveAfterAttackType(entity, &type, 0LL) )
  {
    LODWORD(stagePieceDetailEntity) = type;
    return (int)stagePieceDetailEntity;
  }
LABEL_11:
  stagePieceDetailEntity = this->fields.stagePieceDetailEntity;
  if ( stagePieceDetailEntity )
    LODWORD(stagePieceDetailEntity) = WarBoardStagePieceDetailEntity__GetMoveAfterAttackType(
                                        stagePieceDetailEntity,
                                        0LL);
  return (int)stagePieceDetailEntity;
}


int32_t __fastcall WarBoardPieceData__GetMovedAferDefend(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardReinforcementsMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x0
  int32_t type; // [xsp+4h] [xbp-1Ch] BYREF
  WarBoardReinforcementsEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438AF35 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    byte_438AF35 = 1;
  }
  entity = 0LL;
  type = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_14;
  if ( !WarBoardReinforcementsMaster__TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          this->fields._ReinfoId_k__BackingField,
          0LL) )
    goto LABEL_11;
  Master_WarQuestSelectionMaster = (WarBoardReinforcementsMaster_o *)entity;
  if ( !entity )
LABEL_14:
    sub_B7769C(Master_WarQuestSelectionMaster, v4);
  if ( WarBoardReinforcementsEntity__GetMovedAfterDefendType(entity, &type, 0LL) )
  {
    LODWORD(stagePieceDetailEntity) = type;
    return (int)stagePieceDetailEntity;
  }
LABEL_11:
  stagePieceDetailEntity = this->fields.stagePieceDetailEntity;
  if ( stagePieceDetailEntity )
    LODWORD(stagePieceDetailEntity) = WarBoardStagePieceDetailEntity__GetMovedAfterDefendType(
                                        stagePieceDetailEntity,
                                        0LL);
  return (int)stagePieceDetailEntity;
}


uint32_t __fastcall WarBoardPieceData__GetUniqueIndex(
        int32_t forceId,
        int32_t groupId,
        int32_t index,
        const MethodInfo *method)
{
  return (forceId << 24) | ((unsigned __int8)groupId << 16) | (unsigned __int16)index;
}


bool __fastcall WarBoardPieceData__HasActionCount(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._limitActionCount_k__BackingField < 1 || this->fields._currentActionCount_k__BackingField > 0;
}


bool __fastcall WarBoardPieceData__HasAvailablePermanentSleepBuff(WarBoardPieceData_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleServant_k__BackingField; // x0
  struct WarBoardPieceData_PieceStatusCache_o *statusCache; // x20
  bool HasAvailablePermanentSleepBuff; // w1
  __int16 *v6; // x0
  unsigned __int16 *p_HasAvailablePermanentSleepBuff_k__BackingField; // x0
  struct System_Nullable_bool__o v9; // [xsp+8h] [xbp-18h] BYREF
  unsigned __int16 HasAvailablePermanentSleepBuff_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_438AF26 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Nullable_bool___ctor__);
    sub_B775C4(&Method_System_Nullable_bool__get_HasValue__);
    sub_B775C4(&Method_System_Nullable_bool__get_Value__);
    byte_438AF26 = 1;
  }
  HasAvailablePermanentSleepBuff_k__BackingField = 0;
  battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
  if ( battleServant_k__BackingField )
  {
    statusCache = this->fields.statusCache;
    if ( !statusCache
      || (!statusCache->fields._IsEnabled_k__BackingField
       || (HasAvailablePermanentSleepBuff_k__BackingField = (unsigned __int16)statusCache->fields._HasAvailablePermanentSleepBuff_k__BackingField,
           HasAvailablePermanentSleepBuff_k__BackingField <= 0xFFu))
      && (HasAvailablePermanentSleepBuff = BattleServantData__HasAvailablePermanentSleepBuff(
                                             battleServant_k__BackingField,
                                             0LL),
          v6 = (__int16 *)&v9,
          v9 = 0,
          System_Nullable_bool____ctor(
            (System_Nullable_bool__o)v6,
            HasAvailablePermanentSleepBuff,
            (const MethodInfo_2473198 *)Method_System_Nullable_bool___ctor__),
          statusCache->fields._HasAvailablePermanentSleepBuff_k__BackingField = v9,
          (statusCache = this->fields.statusCache) == 0LL) )
    {
      sub_B7769C(battleServant_k__BackingField, method);
    }
    p_HasAvailablePermanentSleepBuff_k__BackingField = &HasAvailablePermanentSleepBuff_k__BackingField;
    HasAvailablePermanentSleepBuff_k__BackingField = (unsigned __int16)statusCache->fields._HasAvailablePermanentSleepBuff_k__BackingField;
    LOBYTE(battleServant_k__BackingField) = System_Nullable_bool___get_Value(
                                              (System_Nullable_bool__o)p_HasAvailablePermanentSleepBuff_k__BackingField,
                                              (const MethodInfo_24731B4 *)Method_System_Nullable_bool__get_Value__);
  }
  return (unsigned __int8)battleServant_k__BackingField & 1;
}


bool __fastcall WarBoardPieceData__HasAvailableWarBoardNotAttackedBuff(
        WarBoardPieceData_o *this,
        const MethodInfo *method)
{
  BattleServantData_o *battleServant_k__BackingField; // x0

  battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
  if ( battleServant_k__BackingField )
    LOBYTE(battleServant_k__BackingField) = BattleServantData__HasAvailableWarBoardNotAttackedBuff(
                                              battleServant_k__BackingField,
                                              0LL);
  return (char)battleServant_k__BackingField;
}


bool __fastcall WarBoardPieceData__HasCompletelyActionDisabledBuff(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardPieceData_o *v2; // x19
  struct WarBoardPieceData_PieceStatusCache_o *statusCache; // x8
  struct WarBoardPieceData_PieceStatusCache_o *v4; // x20
  bool HasAnyBuffByBuffTypes; // w1
  __int16 *v6; // x0
  unsigned __int16 *p_HasCompletelyActionDisabledBuff_k__BackingField; // x0
  struct System_Nullable_bool__o v10; // [xsp+8h] [xbp-18h] BYREF
  unsigned __int16 HasCompletelyActionDisabledBuff_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_438AF27 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Nullable_bool___ctor__);
    sub_B775C4(&Method_System_Nullable_bool__get_HasValue__);
    sub_B775C4(&Method_System_Nullable_bool__get_Value__);
    sub_B775C4(&WarBoardPieceData_TypeInfo);
    this = (WarBoardPieceData_o *)sub_B775C4(&StringLiteral_15587/*"WAR_BOARD_ACTION_DISABLED_BUFF_TYPES"*/);
    byte_438AF27 = 1;
  }
  HasCompletelyActionDisabledBuff_k__BackingField = 0;
  if ( v2->fields._battleServant_k__BackingField )
  {
    statusCache = v2->fields.statusCache;
    if ( !statusCache )
      goto LABEL_16;
    if ( !statusCache->fields._IsEnabled_k__BackingField
      || (HasCompletelyActionDisabledBuff_k__BackingField = (unsigned __int16)statusCache->fields._HasCompletelyActionDisabledBuff_k__BackingField,
          HasCompletelyActionDisabledBuff_k__BackingField <= 0xFFu) )
    {
      if ( (BYTE3(WarBoardPieceData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !WarBoardPieceData_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo);
      }
      this = (WarBoardPieceData_o *)WarBoardPieceData__GetBuffTypesFromConstantStr(
                                      (System_String_o *)StringLiteral_15587/*"WAR_BOARD_ACTION_DISABLED_BUFF_TYPES"*/,
                                      method);
      if ( !v2->fields._battleServant_k__BackingField
        || (v4 = v2->fields.statusCache,
            HasAnyBuffByBuffTypes = BattleServantData__HasAnyBuffByBuffTypes(
                                      v2->fields._battleServant_k__BackingField,
                                      (BuffList_TYPE_array *)this,
                                      0LL),
            v6 = (__int16 *)&v10,
            v10 = 0,
            System_Nullable_bool____ctor(
              (System_Nullable_bool__o)v6,
              HasAnyBuffByBuffTypes,
              (const MethodInfo_2473198 *)Method_System_Nullable_bool___ctor__),
            !v4)
        || (v4->fields._HasCompletelyActionDisabledBuff_k__BackingField = v10,
            (statusCache = v2->fields.statusCache) == 0LL) )
      {
LABEL_16:
        sub_B7769C(this, method);
      }
    }
    p_HasCompletelyActionDisabledBuff_k__BackingField = &HasCompletelyActionDisabledBuff_k__BackingField;
    HasCompletelyActionDisabledBuff_k__BackingField = (unsigned __int16)statusCache->fields._HasCompletelyActionDisabledBuff_k__BackingField;
    return System_Nullable_bool___get_Value(
             (System_Nullable_bool__o)p_HasCompletelyActionDisabledBuff_k__BackingField,
             (const MethodInfo_24731B4 *)Method_System_Nullable_bool__get_Value__);
  }
  else
  {
    return 0;
  }
}


bool __fastcall WarBoardPieceData__HasSelfMoveDisabledBuff(WarBoardPieceData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( !this->fields._battleServant_k__BackingField )
    return 0;
  if ( WarBoardPieceData__HasAvailablePermanentSleepBuff(this, method) )
    return 1;
  return WarBoardPieceData__HasCompletelyActionDisabledBuff(this, v3);
}


bool __fastcall WarBoardPieceData__HasVitalityToDoAnyActions(WarBoardPieceData_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  WarBoardData_o *Instance; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Int32_array **reinforcementsSaveList; // x1
  WarBoardSquareData_o *Square; // x0
  System_Collections_Generic_IEnumerable_TSource__o *linkedSquares; // x21
  System_Func_int__BattleActionData_SideEffectData__o *v15; // x22
  System_Collections_Generic_IEnumerable_T__o *v16; // x0
  System_Collections_Generic_IEnumerable_T__o *v17; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v18; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v19; // x21
  WarBoardCost_o *Cost_k__BackingField; // x0
  bool CanAction; // w8
  bool result; // w0

  if ( (byte_438AF1C & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Any_WarBoardWallData___);
    sub_B775C4(&Method_BasicHelper_ExcludeNull_WarBoardWallData___);
    sub_B775C4(&Method_System_Linq_Enumerable_Select_int__WarBoardWallData___);
    sub_B775C4(&Method_System_Linq_Enumerable_ToArray_WarBoardWallData___);
    sub_B775C4(&Method_System_Func_WarBoardWallData__bool___ctor__);
    sub_B775C4(&Method_System_Func_int__WarBoardWallData___ctor__);
    sub_B775C4(&System_Func_int__WarBoardWallData__TypeInfo);
    sub_B775C4(&System_Func_WarBoardWallData__bool__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&Method_WarBoardPieceData___c__DisplayClass219_0__HasVitalityToDoAnyActions_b__0__);
    sub_B775C4(&WarBoardPieceData___c__DisplayClass219_0_TypeInfo);
    sub_B775C4(&Method_WarBoardPieceData_CheckWallAttackCond__);
    byte_438AF1C = 1;
  }
  v3 = sub_B77694(WarBoardPieceData___c__DisplayClass219_0_TypeInfo);
  WarBoardPieceData___c__DisplayClass219_0___ctor((WarBoardPieceData___c__DisplayClass219_0_o *)v3, 0LL);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  if ( !v3 )
    goto LABEL_19;
  reinforcementsSaveList = (System_Int32_array **)Instance[1].fields.reinforcementsSaveList;
  *(_QWORD *)(v3 + 16) = reinforcementsSaveList;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 16), reinforcementsSaveList, v6, v7, v8, v9, v10, v11);
  Instance = *(WarBoardData_o **)(v3 + 16);
  if ( !Instance )
    goto LABEL_19;
  Square = WarBoardData__GetSquare(Instance, this->fields._nowSquareIndex_k__BackingField, 0LL);
  if ( Square
    && (linkedSquares = (System_Collections_Generic_IEnumerable_TSource__o *)Square->fields.linkedSquares) != 0LL )
  {
    v15 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B77694(System_Func_int__WarBoardWallData__TypeInfo);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      v15,
      (Il2CppObject *)v3,
      Method_WarBoardPieceData___c__DisplayClass219_0__HasVitalityToDoAnyActions_b__0__,
      (const MethodInfo_29E3F2C *)Method_System_Func_int__WarBoardWallData___ctor__);
    v16 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                           linkedSquares,
                                                           (System_Func_TSource__TResult__o *)v15,
                                                           (const MethodInfo_1D377F4 *)Method_System_Linq_Enumerable_Select_int__WarBoardWallData___);
    v17 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
            v16,
            (const MethodInfo_1C664DC *)Method_BasicHelper_ExcludeNull_WarBoardWallData___);
    v18 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v17,
            (const MethodInfo_1D3D5E4 *)Method_System_Linq_Enumerable_ToArray_WarBoardWallData___);
    if ( v18 )
    {
      v19 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_WarBoardWallData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v19,
        (Il2CppObject *)this,
        Method_WarBoardPieceData_CheckWallAttackCond__,
        (const MethodInfo_29E92C4 *)Method_System_Func_WarBoardWallData__bool___ctor__);
      LOBYTE(v18) = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
                      (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)v18,
                      (System_Func_T__bool__o *)v19,
                      (const MethodInfo_1C661F0 *)Method_BasicHelper_Any_WarBoardWallData___);
    }
  }
  else
  {
    LOBYTE(v18) = 0;
  }
  Cost_k__BackingField = this->fields._Cost_k__BackingField;
  if ( Cost_k__BackingField && WarBoardCost__get_HasCost(Cost_k__BackingField, 0LL) )
  {
    Instance = (WarBoardData_o *)this->fields._Cost_k__BackingField;
    if ( Instance )
    {
      CanAction = WarBoardCost__CanAction((WarBoardCost_o *)Instance, 0, (unsigned __int8)v18 & 1, 0LL);
      result = 0;
      if ( !CanAction )
        return result;
      return this->fields._limitActionCount_k__BackingField < 1 || this->fields._currentActionCount_k__BackingField > 0;
    }
LABEL_19:
    sub_B7769C(Instance, v5);
  }
  return this->fields._limitActionCount_k__BackingField < 1 || this->fields._currentActionCount_k__BackingField > 0;
}


void __fastcall WarBoardPieceData__HideActionTarget(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_B7769C(0LL, method);
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))pieceComponent->klass->vtable._21_HideActionTarget.method)(
    pieceComponent,
    pieceComponent->klass->vtable._22_OnSelect.methodPtr);
}


bool __fastcall WarBoardPieceData__IsEnabledMoveAfterAttack(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return WarBoardPieceData__GetMoveAfterAttack(this, method) == 0;
}


bool __fastcall WarBoardPieceData__IsEnabledMovedAfterDefend(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return WarBoardPieceData__GetMovedAferDefend(this, method) == 0;
}


void __fastcall WarBoardPieceData__Move(WarBoardPieceData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_B7769C(0LL, squareIndex);
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, int32_t, Il2CppMethodPointer))pieceComponent->klass->vtable._24_OnMove.method)(
    pieceComponent,
    squareIndex,
    pieceComponent->klass->vtable._25_OnAttack.methodPtr);
}


void __fastcall WarBoardPieceData__NondisplacedDeactive(WarBoardPieceData_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *pieceComponent; // x0

  if ( this->fields._isEditing_k__BackingField && !this->fields._iconId_k__BackingField )
  {
    pieceComponent = (UnityEngine_Component_o *)this->fields.pieceComponent;
    this->fields._isDead_k__BackingField = 1;
    if ( !pieceComponent
      || (pieceComponent = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(pieceComponent, 0LL)) == 0LL )
    {
      sub_B7769C(pieceComponent, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pieceComponent, 0, 0LL);
    this->fields._breakPoint_k__BackingField = -1;
  }
  this->fields._isEditing_k__BackingField = 0;
}


void __fastcall WarBoardPieceData__OnBpDamageFromMap(
        WarBoardPieceData_o *this,
        WarBoardManager_TaskMultiList_o *taskListBreak,
        WarBoardManager_TaskMultiList_o *taskListDead,
        const MethodInfo *method)
{
  unsigned int breakPoint_k__BackingField; // w24
  WarBoardManager_TaskList_o *v8; // x20
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x23
  struct WarBoardPieceBaseComponent_o *v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  struct BattleServantData_o *battleServant_k__BackingField; // x20
  unsigned int MaxHp; // w0
  unsigned int v15; // w20
  int32_t type_k__BackingField; // w8
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  struct WarBoardUserServantData_o *serverServantData; // x8
  __int64 v19; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_float__o v20; // 0:x0.8
  System_Nullable_float__o v21; // 0:x0.8

  if ( (byte_438AF37 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__);
    sub_B775C4(&Method_System_Nullable_float___ctor__);
    sub_B775C4(&WarBoardManager_TaskList_TypeInfo);
    byte_438AF37 = 1;
  }
  breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
  this->fields._breakPoint_k__BackingField = breakPoint_k__BackingField - 1;
  v8 = (WarBoardManager_TaskList_o *)sub_B77694(WarBoardManager_TaskList_TypeInfo);
  WarBoardManager_TaskList___ctor(v8, 0LL);
  pieceComponent = this->fields.pieceComponent;
  if ( ((breakPoint_k__BackingField - 1) & 0x80000000) == 0 )
  {
    v20 = (System_Nullable_float__o)&v19;
    v19 = 0LL;
    System_Nullable_float____ctor(v20, 1.0, (const MethodInfo_2478078 *)Method_System_Nullable_float___ctor__);
    if ( pieceComponent )
    {
      v10 = (struct WarBoardPieceBaseComponent_o *)((__int64 (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, __int64, WarBoardManager_TaskList_o *, __int64, _QWORD, __int64, Il2CppMethodPointer))pieceComponent->klass->vtable._31_OnBreak.method)(
                                                     pieceComponent,
                                                     breakPoint_k__BackingField,
                                                     v19,
                                                     v8,
                                                     0xFFFFFFFFLL,
                                                     0LL,
                                                     1LL,
                                                     pieceComponent->klass->vtable._32_OnDead.methodPtr);
      if ( taskListBreak )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskListBreak,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v8,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__);
        battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
        if ( battleServant_k__BackingField )
        {
          MaxHp = BattleServantData__getMaxHp(this->fields._battleServant_k__BackingField, 0LL);
          ((void (__fastcall *)(struct BattleServantData_o *, _QWORD, Il2CppMethodPointer))battleServant_k__BackingField->klass->vtable._10_set_hp.method)(
            battleServant_k__BackingField,
            MaxHp,
            battleServant_k__BackingField->klass->vtable._11_get_reducedhp.methodPtr);
        }
        v15 = 1;
        goto LABEL_17;
      }
    }
LABEL_20:
    sub_B7769C(v10, v11);
  }
  v21 = (System_Nullable_float__o)&v19;
  v19 = 0LL;
  System_Nullable_float____ctor(v21, 1.0, (const MethodInfo_2478078 *)Method_System_Nullable_float___ctor__);
  if ( !pieceComponent )
    goto LABEL_20;
  v10 = (struct WarBoardPieceBaseComponent_o *)((__int64 (__fastcall *)(struct WarBoardPieceBaseComponent_o *, __int64, WarBoardManager_TaskList_o *, __int64, Il2CppMethodPointer))pieceComponent->klass->vtable._32_OnDead.method)(
                                                 pieceComponent,
                                                 v19,
                                                 v8,
                                                 1LL,
                                                 pieceComponent->klass->vtable._33_OnRevive.methodPtr);
  if ( !taskListDead )
    goto LABEL_20;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskListDead,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v8,
    (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__);
  type_k__BackingField = this->fields._type_k__BackingField;
  this->fields._nowSquareIndex_k__BackingField = -1;
  if ( type_k__BackingField == 1 )
  {
    serverMasterData_k__BackingField = this->fields._serverMasterData_k__BackingField;
    if ( serverMasterData_k__BackingField )
      serverMasterData_k__BackingField->fields.squareIndex = -1;
  }
  else
  {
    serverServantData = this->fields.serverServantData;
    if ( serverServantData )
      serverServantData->fields.squareIndex = -1;
  }
  v15 = 0;
LABEL_17:
  WarBoardPieceData__SetBreakPoint(this, this->fields._breakPoint_k__BackingField, v12);
  v10 = this->fields.pieceComponent;
  if ( !v10 )
    goto LABEL_20;
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._15_ChangeStatus.method)(
    v10,
    v15,
    v10->klass->vtable._16_IsModifyStatus.methodPtr);
  v10 = this->fields.pieceComponent;
  if ( !v10 )
    goto LABEL_20;
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))v10->klass->vtable._10_UpdateDisplayActionCount.method)(
    v10,
    v10->klass->vtable._11_UpdateUiBrightnessByPieceStatus.methodPtr);
}


void __fastcall WarBoardPieceData__OnDeadOnMap(
        WarBoardPieceData_o *this,
        bool cameraMove,
        WarBoardManager_TaskList_o *taskList,
        const MethodInfo *method)
{
  unsigned int breakPoint_k__BackingField; // w22
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x23
  __int64 v9; // x0
  __int64 v10; // x1
  _BOOL4 v11; // w21
  struct WarBoardPieceBaseComponent_o *v12; // x22
  int32_t type_k__BackingField; // w8
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  struct WarBoardUserServantData_o *serverServantData; // x8
  __int64 v16; // [xsp+0h] [xbp-40h] BYREF
  __int64 v17; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_float__o v18; // 0:x0.8
  System_Nullable_float__o v19; // 0:x0.8

  if ( (byte_438AF32 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Nullable_float___ctor__);
    byte_438AF32 = 1;
  }
  this->fields._isDead_k__BackingField = 1;
  breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
  pieceComponent = this->fields.pieceComponent;
  v18 = (System_Nullable_float__o)&v17;
  v17 = 0LL;
  System_Nullable_float____ctor(v18, 1.0, (const MethodInfo_2478078 *)Method_System_Nullable_float___ctor__);
  if ( !pieceComponent
    || (v11 = cameraMove,
        ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, __int64, WarBoardManager_TaskList_o *, _QWORD, _QWORD, _BOOL4, Il2CppMethodPointer))pieceComponent->klass->vtable._31_OnBreak.method)(
          pieceComponent,
          breakPoint_k__BackingField,
          v17,
          taskList,
          breakPoint_k__BackingField - 1,
          0LL,
          v11,
          pieceComponent->klass->vtable._32_OnDead.methodPtr),
        v12 = this->fields.pieceComponent,
        v19 = (System_Nullable_float__o)&v16,
        v16 = 0LL,
        System_Nullable_float____ctor(v19, 1.0, (const MethodInfo_2478078 *)Method_System_Nullable_float___ctor__),
        !v12) )
  {
    sub_B7769C(v9, v10);
  }
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, __int64, WarBoardManager_TaskList_o *, _BOOL4, Il2CppMethodPointer))v12->klass->vtable._32_OnDead.method)(
    v12,
    v16,
    taskList,
    v11,
    v12->klass->vtable._33_OnRevive.methodPtr);
  type_k__BackingField = this->fields._type_k__BackingField;
  this->fields._nowSquareIndex_k__BackingField = -1;
  if ( type_k__BackingField == 1 )
  {
    serverMasterData_k__BackingField = this->fields._serverMasterData_k__BackingField;
    if ( serverMasterData_k__BackingField )
      serverMasterData_k__BackingField->fields.squareIndex = -1;
  }
  else
  {
    serverServantData = this->fields.serverServantData;
    if ( serverServantData )
      serverServantData->fields.squareIndex = -1;
  }
}


void __fastcall WarBoardPieceData__PreOnBpDamageFromMap(WarBoardPieceData_o *this, const MethodInfo *method)
{
  if ( this->fields._breakPoint_k__BackingField - 1 < 0 )
    this->fields._isDead_k__BackingField = 1;
}


void __fastcall WarBoardPieceData__ProcContinue(WarBoardPieceData_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *pieceComponent; // x0
  int32_t limitActionCount_k__BackingField; // w9
  WarBoardCost_o *Cost_k__BackingField; // x0
  WarBoardData_o *klass; // x20
  int32_t PutSquareIndex_k__BackingField; // w21
  int32_t nowSquareIndex_k__BackingField; // w22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v9; // x23
  int32_t v10; // w0
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  struct WarBoardUserServantData_o *serverServantData; // x8

  if ( (byte_438AF36 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Func_WarBoardPieceData__bool___ctor__);
    sub_B775C4(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&Method_WarBoardPieceData__ProcContinue_b__333_0__);
    byte_438AF36 = 1;
  }
  pieceComponent = (UnityEngine_Component_o *)this->fields.pieceComponent;
  if ( !pieceComponent )
    goto LABEL_18;
  pieceComponent = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(pieceComponent, 0LL);
  if ( !pieceComponent )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pieceComponent, 0, 0LL);
  limitActionCount_k__BackingField = this->fields._limitActionCount_k__BackingField;
  Cost_k__BackingField = this->fields._Cost_k__BackingField;
  this->fields._breakPoint_k__BackingField = this->fields._breakPointMax_k__BackingField;
  this->fields._currentActionCount_k__BackingField = limitActionCount_k__BackingField;
  if ( Cost_k__BackingField && WarBoardCost__get_HasCost(Cost_k__BackingField, 0LL) )
  {
    pieceComponent = (UnityEngine_Component_o *)this->fields._Cost_k__BackingField;
    if ( !pieceComponent )
      goto LABEL_18;
    WarBoardCost__Reset((WarBoardCost_o *)pieceComponent, 0LL);
  }
  pieceComponent = (UnityEngine_Component_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceComponent )
    goto LABEL_18;
  klass = (WarBoardData_o *)pieceComponent[18].klass;
  PutSquareIndex_k__BackingField = this->fields._PutSquareIndex_k__BackingField;
  nowSquareIndex_k__BackingField = this->fields._nowSquareIndex_k__BackingField;
  v9 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v9,
    (Il2CppObject *)this,
    Method_WarBoardPieceData__ProcContinue_b__333_0__,
    (const MethodInfo_29E92C4 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  if ( !klass )
    goto LABEL_18;
  v10 = WarBoardData__SearchNearestEmptySquare(
          klass,
          PutSquareIndex_k__BackingField,
          nowSquareIndex_k__BackingField,
          (System_Func_WarBoardPieceData__bool__o *)v9,
          0LL);
  serverMasterData_k__BackingField = this->fields._serverMasterData_k__BackingField;
  this->fields._nowSquareIndex_k__BackingField = v10;
  if ( serverMasterData_k__BackingField )
    serverMasterData_k__BackingField->fields.defeatPoint = this->fields._breakPointMax_k__BackingField;
  serverServantData = this->fields.serverServantData;
  if ( serverServantData )
  {
    serverServantData->fields.defeatPoint = this->fields._breakPointMax_k__BackingField;
    WarBoardPieceData__SetServantIconData(this, method);
    pieceComponent = (UnityEngine_Component_o *)this->fields.serverServantData;
    if ( !pieceComponent )
      goto LABEL_18;
    WarBoardUserServantData__FromBattleServantData(
      (WarBoardUserServantData_o *)pieceComponent,
      this->fields._battleServant_k__BackingField,
      0LL);
  }
  pieceComponent = (UnityEngine_Component_o *)this->fields.pieceComponent;
  if ( !pieceComponent )
LABEL_18:
    sub_B7769C(pieceComponent, method);
  ((void (__fastcall *)(UnityEngine_Component_o *, void *))pieceComponent->klass[1]._1.typeMetadataHandle)(
    pieceComponent,
    pieceComponent->klass[1]._1.interopData);
  this->fields._isDead_k__BackingField = 0;
}


void __fastcall WarBoardPieceData__ReviveNow(WarBoardPieceData_o *this, const MethodInfo *method)
{
  void *battleServant_k__BackingField; // x0
  struct BattleServantData_o *v4; // x20
  unsigned int MaxHp; // w0

  battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
  this->fields._isDead_k__BackingField = 0;
  if ( !battleServant_k__BackingField )
    goto LABEL_7;
  battleServant_k__BackingField = (void *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)battleServant_k__BackingField
                                                                                    + 456LL))(
                                            battleServant_k__BackingField,
                                            *(_QWORD *)(*(_QWORD *)battleServant_k__BackingField + 464LL));
  if ( (int)battleServant_k__BackingField <= 0 )
  {
    v4 = this->fields._battleServant_k__BackingField;
    if ( !v4 )
      goto LABEL_7;
    MaxHp = BattleServantData__getMaxHp(this->fields._battleServant_k__BackingField, 0LL);
    ((void (__fastcall *)(struct BattleServantData_o *, _QWORD, Il2CppMethodPointer))v4->klass->vtable._10_set_hp.method)(
      v4,
      MaxHp,
      v4->klass->vtable._11_get_reducedhp.methodPtr);
  }
  battleServant_k__BackingField = this->fields.pieceComponent;
  if ( !battleServant_k__BackingField )
LABEL_7:
    sub_B7769C(battleServant_k__BackingField, method);
  (*(void (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)battleServant_k__BackingField + 840LL))(
    battleServant_k__BackingField,
    0LL,
    *(_QWORD *)(*(_QWORD *)battleServant_k__BackingField + 848LL));
}


void __fastcall WarBoardPieceData__Select(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardData_o *pieceComponent; // x0
  WarBoardSquareData_o *Square; // x0

  if ( (byte_438AF29 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_438AF29 = 1;
  }
  pieceComponent = (WarBoardData_o *)this->fields.pieceComponent;
  if ( !pieceComponent
    || ((*(void (__fastcall **)(WarBoardData_o *, Il2CppMethodPointer))&pieceComponent->klass[1]._2.naturalAligment)(
          pieceComponent,
          pieceComponent->klass[1].vtable._0_Equals.methodPtr),
        (pieceComponent = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (pieceComponent = (WarBoardData_o *)pieceComponent[1].fields.reinforcementsSaveList) == 0LL )
  {
    sub_B7769C(pieceComponent, method);
  }
  Square = WarBoardData__GetSquare(pieceComponent, this->fields._nowSquareIndex_k__BackingField, 0LL);
  if ( Square )
    WarBoardSquareData__Select(Square, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceData__SetActionPoint(WarBoardPieceData_o *this, int32_t ap, const MethodInfo *method)
{
  WarBoardCost_o *Cost_k__BackingField; // x0

  if ( this->fields._limitActionCount_k__BackingField <= 0 )
  {
    Cost_k__BackingField = this->fields._Cost_k__BackingField;
    if ( !Cost_k__BackingField )
      goto LABEL_7;
    if ( WarBoardCost__get_HasCost(Cost_k__BackingField, 0LL) )
    {
      Cost_k__BackingField = this->fields._Cost_k__BackingField;
      if ( Cost_k__BackingField )
      {
        WarBoardCost__UpdateCurrentPointBySaveData(Cost_k__BackingField, ap, 0LL);
        return;
      }
LABEL_7:
      sub_B7769C(Cost_k__BackingField, *(_QWORD *)&ap);
    }
  }
  this->fields._currentActionCount_k__BackingField = ap;
}


void __fastcall WarBoardPieceData__SetBreakPoint(WarBoardPieceData_o *this, int32_t bp, const MethodInfo *method)
{
  struct WarBoardPieceData_SaveData_o *localSaveData; // x8
  struct WarBoardUserServantData_o *serverServantData; // x8
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8

  localSaveData = this->fields.localSaveData;
  this->fields._breakPoint_k__BackingField = bp;
  if ( !localSaveData )
    sub_B7769C(this, bp);
  localSaveData->fields.breakPoint = bp;
  serverServantData = this->fields.serverServantData;
  if ( serverServantData )
    serverServantData->fields.defeatPoint = bp;
  battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
  if ( battleServant_k__BackingField )
    battleServant_k__BackingField->fields.defeatPoint = bp;
  serverMasterData_k__BackingField = this->fields._serverMasterData_k__BackingField;
  if ( serverMasterData_k__BackingField )
    serverMasterData_k__BackingField->fields.defeatPoint = bp;
}


void __fastcall WarBoardPieceData__SetComponent(
        WarBoardPieceData_o *this,
        WarBoardPieceBaseComponent_o *component,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.pieceComponent = component;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.pieceComponent,
    (System_Int32_array **)component,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardPieceData__SetDeadSquareIndex(WarBoardPieceData_o *this, const MethodInfo *method)
{
  int32_t type_k__BackingField; // w8
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  struct WarBoardUserServantData_o *serverServantData; // x8

  type_k__BackingField = this->fields._type_k__BackingField;
  this->fields._nowSquareIndex_k__BackingField = -1;
  if ( type_k__BackingField == 1 )
  {
    serverMasterData_k__BackingField = this->fields._serverMasterData_k__BackingField;
    if ( serverMasterData_k__BackingField )
      serverMasterData_k__BackingField->fields.squareIndex = -1;
  }
  else
  {
    serverServantData = this->fields.serverServantData;
    if ( serverServantData )
      serverServantData->fields.squareIndex = -1;
  }
}


void __fastcall WarBoardPieceData__SetInitinalData(
        WarBoardPieceData_o *this,
        WarBoardDataEntity_o *warBoardDataEntity,
        const MethodInfo *method)
{
  WarBoardPieceData_o *v4; // x19
  System_Collections_Generic_IEnumerable_TSource__o *masterInfo; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v6; // x21
  System_Int32_array **v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  WarBoardActionPointClassMaster_o *Master_WarQuestSelectionMaster; // x20
  const MethodInfo *v16; // x1
  WarBoardActionPointClassEntity_o *MasterEntityFromStageId; // x0
  System_Int32_array **v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct WarBoardUserMasterData_o *v25; // x8
  int32_t currentPieceActionPoint; // w1
  System_Collections_Generic_IEnumerable_TSource__o *svtInfo; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v28; // x21
  System_Int32_array **v29; // x0
  struct WarBoardUserServantData_o **p_serverServantData; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct WarBoardUserServantData_o *serverServantData; // x8
  __int128 v38; // q1
  WarBoardPieceData_o *v39; // x21
  System_Int32_array **BattleServant; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct WarBoardUserServantData_o *v47; // x8
  WarBoardActionPointClassMaster_o *v48; // x20
  const MethodInfo *v49; // x1
  WarBoardActionPointEntity_o *v50; // x21
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x20
  System_Int32_array **v52; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  struct WarBoardUserServantData_o *v59; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v60; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+20h] [xbp-40h]
  WarBoardReinforcementsEntity_o *entity; // [xsp+48h] [xbp-18h] BYREF

  v4 = this;
  if ( (byte_438AF2C & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    sub_B775C4(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
    sub_B775C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
    sub_B775C4(&Method_System_Func_WarBoardUserMasterData__bool___ctor__);
    sub_B775C4(&Method_System_Func_WarBoardUserServantData__bool___ctor__);
    sub_B775C4(&System_Func_WarBoardUserMasterData__bool__TypeInfo);
    sub_B775C4(&System_Func_WarBoardUserServantData__bool__TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&Method_WarBoardPieceData__SetInitinalData_b__311_0__);
    this = (WarBoardPieceData_o *)sub_B775C4(&Method_WarBoardPieceData__SetInitinalData_b__311_1__);
    byte_438AF2C = 1;
  }
  entity = 0LL;
  if ( !v4->fields._isDead_k__BackingField )
  {
    if ( warBoardDataEntity )
    {
      if ( v4->fields._type_k__BackingField == 1 )
      {
        masterInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.masterInfo;
        v6 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_WarBoardUserMasterData__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v6,
          (Il2CppObject *)v4,
          Method_WarBoardPieceData__SetInitinalData_b__311_0__,
          (const MethodInfo_29E92C4 *)Method_System_Func_WarBoardUserMasterData__bool___ctor__);
        v7 = (System_Int32_array **)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                      masterInfo,
                                      (System_Func_TSource__bool__o *)v6,
                                      (const MethodInfo_1D31FE4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
        v4->fields._serverMasterData_k__BackingField = (struct WarBoardUserMasterData_o *)v7;
        sub_B77560(
          (BattleServantConfConponent_o *)&v4->fields._serverMasterData_k__BackingField,
          v7,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13);
        serverMasterData_k__BackingField = v4->fields._serverMasterData_k__BackingField;
        if ( serverMasterData_k__BackingField )
        {
          v4->fields._limitActionCount_k__BackingField = serverMasterData_k__BackingField->fields.limitActionPoint;
          v4->fields._currentActionCount_k__BackingField = serverMasterData_k__BackingField->fields.currentLimitActionPoint;
          v4->fields._attackCount_k__BackingField = serverMasterData_k__BackingField->fields.attackCount;
          v4->fields._nowSquareIndex_k__BackingField = serverMasterData_k__BackingField->fields.squareIndex;
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = (WarBoardActionPointClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
          this = (WarBoardPieceData_o *)WarBoardPieceData__get_ActionPointEntity(v4, v16);
          if ( Master_WarQuestSelectionMaster )
          {
            MasterEntityFromStageId = WarBoardActionPointClassMaster__GetMasterEntityFromStageId(
                                        Master_WarQuestSelectionMaster,
                                        (WarBoardActionPointEntity_o *)this,
                                        0LL);
            v18 = (System_Int32_array **)WarBoardCost__Create(
                                           MasterEntityFromStageId,
                                           v4->fields.stagePieceDetailEntity,
                                           0LL,
                                           0LL);
            v4->fields._Cost_k__BackingField = (struct WarBoardCost_o *)v18;
            sub_B77560(
              (BattleServantConfConponent_o *)&v4->fields._Cost_k__BackingField,
              v18,
              v19,
              v20,
              v21,
              v22,
              v23,
              v24);
            v25 = v4->fields._serverMasterData_k__BackingField;
            if ( v25 )
            {
              this = (WarBoardPieceData_o *)v4->fields._Cost_k__BackingField;
              if ( this )
              {
                currentPieceActionPoint = v25->fields.currentPieceActionPoint;
LABEL_30:
                WarBoardCost__UpdateCurrentPointByServerData((WarBoardCost_o *)this, currentPieceActionPoint, 0LL);
                return;
              }
            }
          }
        }
      }
      else
      {
        svtInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.svtInfo;
        v28 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_WarBoardUserServantData__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v28,
          (Il2CppObject *)v4,
          Method_WarBoardPieceData__SetInitinalData_b__311_1__,
          (const MethodInfo_29E92C4 *)Method_System_Func_WarBoardUserServantData__bool___ctor__);
        v29 = (System_Int32_array **)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                       svtInfo,
                                       (System_Func_TSource__bool__o *)v28,
                                       (const MethodInfo_1D31FE4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
        p_serverServantData = &v4->fields.serverServantData;
        v4->fields.serverServantData = (struct WarBoardUserServantData_o *)v29;
        sub_B77560((BattleServantConfConponent_o *)&v4->fields.serverServantData, v29, v31, v32, v33, v34, v35, v36);
        this = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        serverServantData = v4->fields.serverServantData;
        if ( serverServantData )
        {
          v38 = *(_OWORD *)&serverServantData->fields.id.fields.fakeValue;
          v39 = this;
          *(_OWORD *)&v61.fields.currentCryptoKey = *(_OWORD *)&serverServantData->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v61.fields.fakeValue = v38;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v60 = v61;
          this = (WarBoardPieceData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v60, 0LL);
          if ( v39 )
          {
            BattleServant = (System_Int32_array **)WarBoardManager__GetBattleServant(
                                                     (WarBoardManager_o *)v39,
                                                     (int64_t)this,
                                                     0LL);
            v4->fields._battleServant_k__BackingField = (struct BattleServantData_o *)BattleServant;
            sub_B77560(
              (BattleServantConfConponent_o *)&v4->fields._battleServant_k__BackingField,
              BattleServant,
              v41,
              v42,
              v43,
              v44,
              v45,
              v46);
            this = (WarBoardPieceData_o *)v4->fields.serverServantData;
            if ( this )
            {
              WarBoardUserServantData__FromBattleServantData(
                (WarBoardUserServantData_o *)this,
                v4->fields._battleServant_k__BackingField,
                0LL);
              v47 = *p_serverServantData;
              if ( *p_serverServantData )
              {
                v4->fields._limitActionCount_k__BackingField = v47->fields.limitActionPoint;
                v4->fields._currentActionCount_k__BackingField = v47->fields.currentActionPoint;
                v4->fields._attackCount_k__BackingField = v47->fields.attackCount;
                v4->fields._nowSquareIndex_k__BackingField = v47->fields.squareIndex;
                if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                }
                v48 = (WarBoardActionPointClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
                this = (WarBoardPieceData_o *)WarBoardPieceData__get_ActionPointEntity(v4, v49);
                if ( v4->fields._battleServant_k__BackingField )
                {
                  v50 = (WarBoardActionPointEntity_o *)this;
                  this = (WarBoardPieceData_o *)BattleServantData__getClassId(
                                                  v4->fields._battleServant_k__BackingField,
                                                  0LL);
                  if ( v48 )
                  {
                    EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                                    v48,
                                                    v50,
                                                    (int32_t)this,
                                                    0LL);
                    this = (WarBoardPieceData_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
                    if ( this )
                    {
                      WarBoardReinforcementsMaster__TryGetEntity(
                        (WarBoardReinforcementsMaster_o *)this,
                        &entity,
                        v4->fields._ReinfoId_k__BackingField,
                        0LL);
                      v52 = (System_Int32_array **)WarBoardCost__Create(
                                                     EntityFromActionPointEntity,
                                                     v4->fields.stagePieceDetailEntity,
                                                     entity,
                                                     0LL);
                      v4->fields._Cost_k__BackingField = (struct WarBoardCost_o *)v52;
                      sub_B77560(
                        (BattleServantConfConponent_o *)&v4->fields._Cost_k__BackingField,
                        v52,
                        v53,
                        v54,
                        v55,
                        v56,
                        v57,
                        v58);
                      v59 = v4->fields.serverServantData;
                      if ( v59 )
                      {
                        this = (WarBoardPieceData_o *)v4->fields._Cost_k__BackingField;
                        if ( this )
                        {
                          currentPieceActionPoint = v59->fields.currentPieceActionPoint;
                          goto LABEL_30;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_B7769C(this, warBoardDataEntity);
  }
}


void __fastcall WarBoardPieceData__SetMasterEquip(
        WarBoardPieceData_o *this,
        int64_t userEquipId,
        const MethodInfo *method)
{
  __int64 v5; // x20
  __int64 v6; // x20
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  struct System_Byte_array *masterDataBytes; // x20
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x21
  int32_t v10; // w0
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x8
  __int64 v12; // x11
  UnityEngine_Object_o *v13; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_438AF23 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_B775C4(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_B775C4(&WarBoardMasterPieceComponent_TypeInfo);
    byte_438AF23 = 1;
  }
  this->fields._CurrentUserEquipId_k__BackingField = userEquipId;
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v5 + 306) & 1) == 0 )
    sub_B0F2C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v6 = **(_QWORD **)(v5 + 192);
  if ( (*(_BYTE *)(v6 + 306) & 1) == 0 )
    sub_B0F2C4(v6);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v6 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_26;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_26;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)MasterData_WarQuestSelectionMaster,
                                                          this->fields._CurrentUserEquipId_k__BackingField,
                                                          (const MethodInfo_21FBABC *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_26;
  lookup = MasterData_WarQuestSelectionMaster->fields.lookup;
  masterDataBytes = MasterData_WarQuestSelectionMaster->fields.masterDataBytes;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v14.fields.currentCryptoKey = lookup;
  *(_QWORD *)&v14.fields.fakeValue = masterDataBytes;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v14, 0LL);
  pieceComponent = this->fields.pieceComponent;
  this->fields._iconId_k__BackingField = v10;
  if ( pieceComponent
    && (v12 = *(&WarBoardMasterPieceComponent_TypeInfo->_2.bitflags2 + 1),
        *(&pieceComponent->klass->_2.bitflags2 + 1) >= (unsigned int)v12) )
  {
    if ( (WarBoardMasterPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[v12 - 1] == WarBoardMasterPieceComponent_TypeInfo )
      v13 = (UnityEngine_Object_o *)pieceComponent;
    else
      v13 = 0LL;
  }
  else
  {
    v13 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  MasterData_WarQuestSelectionMaster = (DataManager_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
  if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( v13 )
    {
      WarBoardMasterPieceComponent__SetMasterIcon(
        (WarBoardMasterPieceComponent_o *)v13,
        (const MethodInfo *)userEquipId);
      return;
    }
LABEL_26:
    sub_B7769C(MasterData_WarQuestSelectionMaster, userEquipId);
  }
}


void __fastcall WarBoardPieceData__SetOverwriteActionType(
        WarBoardPieceData_o *this,
        int32_t actionType,
        const MethodInfo *method)
{
  intptr_t v5; // w21
  System_Type_o *TypeFromHandle; // x21
  __int64 v7; // x2
  Il2CppObject *v8; // x22
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF
  System_RuntimeTypeHandle_o v10; // 0:w0.4

  if ( (byte_438AF39 & 1) == 0 )
  {
    sub_B775C4(&WarBoardStageLayoutEntity_ActionType_var);
    sub_B775C4(&System_Enum_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&System_Type_TypeInfo);
    byte_438AF39 = 1;
  }
  v5 = (int)WarBoardStageLayoutEntity_ActionType_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v10.fields.value = v5;
  TypeFromHandle = System_Type__GetTypeFromHandle(v10, 0LL);
  v9 = actionType;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9, v7);
  if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  if ( System_Enum__IsDefined(TypeFromHandle, v8, 0LL) )
    this->fields._overwriteActionType_k__BackingField = actionType;
}


void __fastcall WarBoardPieceData__SetOverwriteAiId(WarBoardPieceData_o *this, int32_t aiId, const MethodInfo *method)
{
  this->fields._overwriteAiId_k__BackingField = aiId;
}


void __fastcall WarBoardPieceData__SetPartyBuffLevel(
        WarBoardPieceData_o *this,
        int32_t level,
        const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x8
  __int64 v6; // x11
  UnityEngine_Object_o *v7; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1

  if ( (byte_438AF2F & 1) == 0 )
  {
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&WarBoardServantPieceComponent_TypeInfo);
    byte_438AF2F = 1;
  }
  pieceComponent = this->fields.pieceComponent;
  if ( pieceComponent
    && (v6 = *(&WarBoardServantPieceComponent_TypeInfo->_2.bitflags2 + 1),
        *(&pieceComponent->klass->_2.bitflags2 + 1) >= (unsigned int)v6) )
  {
    if ( (WarBoardServantPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[v6 - 1] == WarBoardServantPieceComponent_TypeInfo )
      v7 = (UnityEngine_Object_o *)this->fields.pieceComponent;
    else
      v7 = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = UnityEngine_Object__op_Equality(v7, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !v7 )
      sub_B7769C(v8, v9);
    WarBoardServantPieceComponent__SetPartyBuffLevel((WarBoardServantPieceComponent_o *)v7, level, 0LL);
  }
}


void __fastcall WarBoardPieceData__SetPieceEnable(WarBoardPieceData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_B7769C(0LL, enable);
  WarBoardPieceBaseComponent__SetColliderEnable(pieceComponent, enable, method);
}


void __fastcall WarBoardPieceData__SetPrevAiRoute(
        WarBoardPieceData_o *this,
        WarBoardAIRoute_RouteData_o *prev,
        const MethodInfo *method)
{
  WarBoardPieceData_o *v4; // x19
  int32_t baseIndex; // w21
  int32_t actionIndex; // w22
  int64_t flagNow; // x20
  WarBoardPieceData_RouteSaveData_o *v8; // x23
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  v4 = this;
  if ( (byte_438AF31 & 1) == 0 )
  {
    this = (WarBoardPieceData_o *)sub_B775C4(&WarBoardPieceData_RouteSaveData_TypeInfo);
    byte_438AF31 = 1;
  }
  if ( !prev )
    sub_B7769C(this, prev);
  baseIndex = prev->fields.baseIndex;
  actionIndex = prev->fields.actionIndex;
  flagNow = prev->fields.flagNow;
  v8 = (WarBoardPieceData_RouteSaveData_o *)sub_B77694(WarBoardPieceData_RouteSaveData_TypeInfo);
  WarBoardPieceData_RouteSaveData___ctor_21667496(v8, baseIndex, actionIndex, flagNow, 0LL);
  v4->fields._PrevAiRoute_k__BackingField = v8;
  sub_B77560(
    (BattleServantConfConponent_o *)&v4->fields._PrevAiRoute_k__BackingField,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


void __fastcall WarBoardPieceData__SetServant(
        WarBoardPieceData_o *this,
        int64_t userServantId,
        int32_t overwriteLimitCount,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x22
  __int64 v10; // x23
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x8
  __int64 v12; // x11
  UnityEngine_Object_o *v13; // x20
  UserServantEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_438AF24 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&WarBoardServantPieceComponent_TypeInfo);
    byte_438AF24 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                &entity,
                                userServantId,
                                (const MethodInfo_21FBB18 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    this->fields._UserServantId_k__BackingField = userServantId;
    if ( !entity )
      goto LABEL_31;
    v10 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
    v9 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v15.fields.currentCryptoKey = v10;
    *(_QWORD *)&v15.fields.fakeValue = v9;
    this->fields._iconId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v15, 0LL);
    if ( (overwriteLimitCount & 0x80000000) != 0 )
    {
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_31;
      overwriteLimitCount = UserServantEntity__getIconLimitCount(entity, 0, 0LL);
    }
    this->fields._iconLimitCount_k__BackingField = overwriteLimitCount;
    Instance = (DataManager_o *)entity;
    if ( !entity
      || (this->fields._iconClassId_k__BackingField = UserServantEntity__getSvtClassId(entity, 0LL),
          (Instance = (DataManager_o *)entity) == 0LL)
      || (Instance = (DataManager_o *)UserServantEntity__getFrameType(entity, 0LL),
          this->fields._iconFrameType_k__BackingField = (int)Instance,
          !entity) )
    {
LABEL_31:
      sub_B7769C(Instance, v8);
    }
    this->fields._iconLevel_k__BackingField = entity->fields.lv;
  }
  else
  {
    this->fields._UserServantId_k__BackingField = 0LL;
    this->fields._iconId_k__BackingField = 0;
  }
  pieceComponent = this->fields.pieceComponent;
  if ( pieceComponent
    && (v12 = *(&WarBoardServantPieceComponent_TypeInfo->_2.bitflags2 + 1),
        *(&pieceComponent->klass->_2.bitflags2 + 1) >= (unsigned int)v12) )
  {
    if ( (WarBoardServantPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[v12 - 1] == WarBoardServantPieceComponent_TypeInfo )
      v13 = (UnityEngine_Object_o *)this->fields.pieceComponent;
    else
      v13 = 0LL;
  }
  else
  {
    v13 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( v13 )
    {
      WarBoardServantPieceComponent__SetServant((WarBoardServantPieceComponent_o *)v13, userServantId, 0LL);
      return;
    }
    goto LABEL_31;
  }
}


void __fastcall WarBoardPieceData__SetServantEquip(
        WarBoardPieceData_o *this,
        int64_t userServantEquipId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x22
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x8
  __int64 v10; // x11
  UnityEngine_Object_o *v11; // x20
  UserServantEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_438AF25 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B775C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B775C4(&WarBoardServantPieceComponent_TypeInfo);
    byte_438AF25 = 1;
  }
  entity = 0LL;
  this->fields._UserServantEquipId_k__BackingField = userServantEquipId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1D183F0 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                &entity,
                                this->fields._UserServantEquipId_k__BackingField,
                                (const MethodInfo_21FBB18 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_26;
    v8 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
    v7 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v13.fields.currentCryptoKey = v8;
    *(_QWORD *)&v13.fields.fakeValue = v7;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v13, 0LL);
    this->fields._iconEquipId_k__BackingField = (int)Instance;
    if ( !entity )
      goto LABEL_26;
    this->fields._equipLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                                      entity->fields.limitCount,
                                                      0LL);
  }
  else
  {
    this->fields._UserServantEquipId_k__BackingField = 0LL;
    this->fields._iconEquipId_k__BackingField = 0;
    this->fields._equipLimitCount_k__BackingField = 0;
  }
  pieceComponent = this->fields.pieceComponent;
  if ( pieceComponent
    && (v10 = *(&WarBoardServantPieceComponent_TypeInfo->_2.bitflags2 + 1),
        *(&pieceComponent->klass->_2.bitflags2 + 1) >= (unsigned int)v10) )
  {
    if ( (WarBoardServantPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[v10 - 1] == WarBoardServantPieceComponent_TypeInfo )
      v11 = (UnityEngine_Object_o *)this->fields.pieceComponent;
    else
      v11 = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( v11 )
    {
      WarBoardServantPieceComponent__SetServantEquip((WarBoardServantPieceComponent_o *)v11, userServantEquipId, 0LL);
      return;
    }
LABEL_26:
    sub_B7769C(Instance, v6);
  }
}


void __fastcall WarBoardPieceData__SetServantIconData(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardPieceData_o *v2; // x19
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  __int64 v4; // x20
  __int64 v5; // x21
  int32_t v6; // w0
  struct WarBoardUserServantData_o *serverServantData; // x8
  WarBoardPieceData_o *v8; // x20
  struct BattleServantData_o *v9; // x8
  int32_t level; // w9
  struct BattleUserServantData_array *equipList; // x23
  __int64 v12; // x9
  BattleUserServantData_o *v13; // x9
  __int64 v14; // x20
  __int64 v15; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v16; // x8
  BattleDeckServantData_o *deckSvt; // x20
  int32_t DispLimitCnt; // w0
  struct WarBoardUserServantData_o *v19; // x8
  __int64 v20; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v21; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  v2 = this;
  if ( (byte_438AF22 & 1) == 0 )
  {
    this = (WarBoardPieceData_o *)sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_438AF22 = 1;
  }
  battleServant_k__BackingField = v2->fields._battleServant_k__BackingField;
  if ( !battleServant_k__BackingField )
    goto LABEL_39;
  v5 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v21.fields.currentCryptoKey = v5;
  *(_QWORD *)&v21.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v21, 0LL);
  serverServantData = v2->fields.serverServantData;
  v2->fields._iconId_k__BackingField = v6;
  if ( serverServantData )
  {
    this = (WarBoardPieceData_o *)NpcSvtType__IsEnemy(serverServantData->fields.npcSvtType, 0LL);
    v8 = ((unsigned __int8)this & 1) != 0 ? v2 : 0LL;
  }
  else
  {
    this = 0LL;
    v8 = 0LL;
  }
  if ( !v2->fields._battleServant_k__BackingField )
    goto LABEL_39;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (WarBoardPieceData_o *)BattleServantData__getLimitCount(v2->fields._battleServant_k__BackingField, 0LL);
    if ( !v8 )
      goto LABEL_39;
  }
  else
  {
    LODWORD(this) = BattleServantData__GetIconImageLimitCount(v2->fields._battleServant_k__BackingField, 0LL);
    v8 = v2;
  }
  v8->fields._iconLimitCount_k__BackingField = (int)this;
  this = (WarBoardPieceData_o *)v2->fields._battleServant_k__BackingField;
  if ( !this )
    goto LABEL_39;
  this = (WarBoardPieceData_o *)BattleServantData__getClassId((BattleServantData_o *)this, 0LL);
  v9 = v2->fields._battleServant_k__BackingField;
  v2->fields._iconClassId_k__BackingField = (int)this;
  if ( !v9 )
    goto LABEL_39;
  v2->fields._iconFrameType_k__BackingField = v9->fields._frameType_k__BackingField;
  level = v9->fields.level;
  v2->fields._iconEquipId_k__BackingField = 0;
  v2->fields._equipLimitCount_k__BackingField = 0;
  v2->fields._iconLevel_k__BackingField = level;
  equipList = v9->fields.equipList;
  if ( equipList )
  {
    v12 = *(_QWORD *)&equipList->max_length;
    if ( v12 )
    {
      if ( !(_DWORD)v12 )
        goto LABEL_40;
      v13 = equipList->m_Items[0];
      if ( !v13 )
        goto LABEL_29;
      v15 = *(_QWORD *)&v13->fields.svtId.fields.currentCryptoKey;
      v14 = *(_QWORD *)&v13->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v22.fields.currentCryptoKey = v15;
      *(_QWORD *)&v22.fields.fakeValue = v14;
      this = (WarBoardPieceData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v22, 0LL);
      v2->fields._iconEquipId_k__BackingField = (int)this;
      if ( !equipList->max_length )
      {
LABEL_40:
        v20 = sub_B776C8(this);
        sub_B77668(v20, 0LL);
      }
      v16 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)equipList->m_Items[0];
      if ( !v16
        || (this = (WarBoardPieceData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(
                                            v16[6],
                                            0LL),
            v9 = v2->fields._battleServant_k__BackingField,
            v2->fields._equipLimitCount_k__BackingField = (int)this,
            !v9) )
      {
LABEL_39:
        sub_B7769C(this, method);
      }
    }
  }
LABEL_29:
  deckSvt = v9->fields.deckSvt;
  if ( deckSvt && deckSvt->fields.enemyScript )
  {
    v2->fields._npcImageSvtId_k__BackingField = BattleDeckServantData__GetImageSvtId(deckSvt, 0LL);
    DispLimitCnt = BattleDeckServantData__GetDispLimitCnt(deckSvt, 0LL);
    v19 = v2->fields.serverServantData;
    v2->fields._npcDispLimitCount_k__BackingField = DispLimitCnt;
    if ( v19 )
    {
      if ( v19->fields.displayType == 2 )
        LOBYTE(v19) = v2->fields._npcImageSvtId_k__BackingField < 1 || BattleDeckServantData__IsShadow(deckSvt, 0LL);
      else
        LOBYTE(v19) = 0;
    }
    v2->fields._IsShadow_k__BackingField = (char)v19;
  }
}


void __fastcall WarBoardPieceData__SetServarData(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardPieceData_o *v2; // x19
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  struct WarBoardUserMasterData_o *v4; // x8
  struct WarBoardUserMasterData_o *v5; // x8
  WarBoardCost_o *Cost_k__BackingField; // x0
  struct WarBoardCost_o *v7; // x8
  struct WarBoardUserMasterData_o *v8; // x9
  struct WarBoardUserServantData_o *serverServantData; // x8
  struct WarBoardUserServantData_o *v10; // x8
  struct WarBoardUserServantData_o *v11; // x8
  WarBoardCost_o *v12; // x0
  struct WarBoardCost_o *v13; // x8
  struct WarBoardUserServantData_o *v14; // x9

  v2 = this;
  if ( this->fields._type_k__BackingField == 1 )
  {
    serverMasterData_k__BackingField = this->fields._serverMasterData_k__BackingField;
    if ( serverMasterData_k__BackingField )
    {
      serverMasterData_k__BackingField->fields.currentLimitActionPoint = this->fields._currentActionCount_k__BackingField;
      v4 = this->fields._serverMasterData_k__BackingField;
      if ( !v4 )
        goto LABEL_20;
      v4->fields.attackCount = this->fields._attackCount_k__BackingField;
      v5 = this->fields._serverMasterData_k__BackingField;
      if ( !v5 )
        goto LABEL_20;
      v5->fields.squareIndex = this->fields._nowSquareIndex_k__BackingField;
      Cost_k__BackingField = this->fields._Cost_k__BackingField;
      if ( Cost_k__BackingField )
      {
        this = (WarBoardPieceData_o *)WarBoardCost__get_HasCost(Cost_k__BackingField, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v7 = v2->fields._Cost_k__BackingField;
          if ( v7 )
          {
            v8 = v2->fields._serverMasterData_k__BackingField;
            if ( v8 )
            {
              v8->fields.currentPieceActionPoint = v7->fields._CurrentActionPoint_k__BackingField;
              return;
            }
          }
LABEL_20:
          sub_B7769C(this, method);
        }
      }
    }
  }
  else
  {
    serverServantData = this->fields.serverServantData;
    if ( serverServantData )
    {
      serverServantData->fields.currentActionPoint = this->fields._currentActionCount_k__BackingField;
      v10 = this->fields.serverServantData;
      if ( !v10 )
        goto LABEL_20;
      v10->fields.attackCount = this->fields._attackCount_k__BackingField;
      v11 = this->fields.serverServantData;
      if ( !v11 )
        goto LABEL_20;
      v11->fields.squareIndex = this->fields._nowSquareIndex_k__BackingField;
      this = (WarBoardPieceData_o *)this->fields.serverServantData;
      if ( !this )
        goto LABEL_20;
      WarBoardUserServantData__FromBattleServantData(
        (WarBoardUserServantData_o *)this,
        v2->fields._battleServant_k__BackingField,
        0LL);
      v12 = v2->fields._Cost_k__BackingField;
      if ( v12 )
      {
        this = (WarBoardPieceData_o *)WarBoardCost__get_HasCost(v12, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v13 = v2->fields._Cost_k__BackingField;
          if ( !v13 )
            goto LABEL_20;
          v14 = v2->fields.serverServantData;
          if ( !v14 )
            goto LABEL_20;
          v14->fields.currentPieceActionPoint = v13->fields._CurrentActionPoint_k__BackingField;
        }
      }
    }
  }
}


void __fastcall WarBoardPieceData__SetSquareIndex(
        WarBoardPieceData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  this->fields._nowSquareIndex_k__BackingField = squareIndex;
}


void __fastcall WarBoardPieceData__SetTouchEnable(WarBoardPieceData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_B7769C(0LL, enable);
  WarBoardPieceBaseComponent__SetTouchEnable(pieceComponent, enable, method);
}


void __fastcall WarBoardPieceData__ShowActionTarget(WarBoardPieceData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  if ( !this->fields._isDead_k__BackingField && WarBoardPieceData__get_enableAction(this, method) )
  {
    pieceComponent = this->fields.pieceComponent;
    if ( !pieceComponent )
      sub_B7769C(0LL, v3);
    ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))pieceComponent->klass->vtable._20_ShowActionTarget.method)(
      pieceComponent,
      pieceComponent->klass->vtable._21_HideActionTarget.methodPtr);
  }
}


System_String_o *__fastcall WarBoardPieceData__ToJson(WarBoardPieceData_o *this, const MethodInfo *method)
{
  Il2CppObject *serverMasterData_k__BackingField; // x19
  WarBoardUserServantData_o *serverServantData; // x0

  if ( (byte_438AF2E & 1) == 0 )
  {
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&string_TypeInfo);
    byte_438AF2E = 1;
  }
  WarBoardPieceData__SetServarData(this, method);
  if ( this->fields._type_k__BackingField != 1 )
  {
    serverServantData = this->fields.serverServantData;
    if ( serverServantData )
      return WarBoardUserServantData__ToJson(serverServantData, 0LL);
    return string_TypeInfo->static_fields->Empty;
  }
  serverMasterData_k__BackingField = (Il2CppObject *)this->fields._serverMasterData_k__BackingField;
  if ( !serverMasterData_k__BackingField )
    return string_TypeInfo->static_fields->Empty;
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson(serverMasterData_k__BackingField, 0, 0, 0LL);
}


void __fastcall WarBoardPieceData__TurnEnd(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_B7769C(0LL, method);
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))pieceComponent->klass->vtable._9_HideActionCount.method)(
    pieceComponent,
    pieceComponent->klass->vtable._10_UpdateDisplayActionCount.methodPtr);
}


void __fastcall WarBoardPieceData__TurnStart(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_B7769C(0LL, method);
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))pieceComponent->klass->vtable._8_ShowActionCount.method)(
    pieceComponent,
    pieceComponent->klass->vtable._9_HideActionCount.methodPtr);
}


void __fastcall WarBoardPieceData__UpdateFromServerData(
        WarBoardPieceData_o *this,
        WarBoardDataEntity_o *warBoardDataEntity,
        System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__o *deadBreakList,
        WarBoardManager_TaskList_o *taskList,
        bool forceUpdate,
        const MethodInfo *method)
{
  _BOOL4 v6; // w20
  System_Collections_Generic_IEnumerable_TSource__o *masterInfo; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v12; // x22
  struct WarBoardUserMasterData_o *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  int32_t defeatPoint; // w8
  struct WarBoardUserMasterData_o *v21; // x22
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  struct WarBoardUserMasterData_o **p_serverMasterData_k__BackingField; // x21
  _BOOL4 v24; // w24
  System_Collections_Generic_IEnumerable_TSource__o *svtInfo; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v26; // x24
  WarBoardData_SquareRangeSearch_o *v27; // x0
  const MethodInfo *v28; // x1
  int32_t breakPoint_k__BackingField; // w26
  int32_t monitor_high; // w8
  struct WarBoardUserServantData_o *v31; // x22
  unsigned int v32; // w21
  __int64 v33; // x24
  __int64 pieceComponent; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  struct WarBoardUserServantData_o *serverServantData; // x8
  struct WarBoardUserServantData_o **p_serverServantData; // x23
  _BOOL4 v50; // w26
  struct WarBoardCost_o *v51; // x8
  _BOOL4 v52; // w22
  int32_t currentActionCount_k__BackingField; // w28
  int32_t currentActionPoint; // w24
  struct WarBoardPieceData_SaveData_o *localSaveData; // x9
  unsigned int v56; // w27
  _BOOL4 v57; // w25
  int32_t *v58; // x8
  int v59; // w23
  _BOOL4 v60; // w8
  struct WarBoardPieceBaseComponent_o *v61; // x8
  __int64 v62; // x11
  UnityEngine_Object_o *v63; // x20
  bool v64; // w8
  WarBoardCost_o *Cost_k__BackingField; // x0
  struct WarBoardCost_o *v66; // x8
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  struct WarBoardUserServantData_o *v68; // x8
  int32_t squareIndex; // w9
  WarBoardActionPointClassMaster_o *Master_WarQuestSelectionMaster; // x22
  const MethodInfo *v71; // x1
  WarBoardActionPointEntity_o *v72; // x23
  struct WarBoardUserServantData_o *v73; // x8
  WarBoardActionPointClassEntity_o *v74; // x22
  WarBoardCost_o *v75; // x23
  int v76; // w22
  int v77; // w23
  struct WarBoardPieceBaseComponent_o *v78; // x8
  __int64 v79; // x11
  UnityEngine_Object_o *v80; // x20
  struct BattleServantData_o *v81; // x8
  __int64 v82; // x21
  __int64 v83; // x22
  int32_t v84; // w0
  struct WarBoardUserServantData_o *v85; // x8
  WarBoardPieceData_o *v86; // x21
  struct BattleServantData_o *v87; // x8
  WarBoardPieceData___c__DisplayClass312_0_o *v88; // x20
  System_Func_bool__o *v89; // x19
  UnityEngine_WaitUntil_o *v90; // x21
  __int64 v91; // x19
  System_Delegate_o *v92; // x22
  WarBoardTaskBase_TaskCallback_o *v93; // x23
  System_Int32_array **v94; // x0
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  WebViewManager_o *Instance; // x20
  __int64 v102; // x21
  __int64 v103; // x0
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  __int64 v110; // x0
  __int64 v111; // x0
  WarBoardPieceData_o *v112; // x0
  const MethodInfo *v113; // x1
  _BOOL4 v114; // [xsp+Ch] [xbp-54h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v115; // 0:x0.16

  v6 = forceUpdate;
  if ( (byte_438AF2D & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
    sub_B775C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
    sub_B775C4(&Method_System_Func_bool___ctor__);
    sub_B775C4(&System_Func_bool__TypeInfo);
    sub_B775C4(&Method_System_Func_WarBoardUserMasterData__bool___ctor__);
    sub_B775C4(&Method_System_Func_WarBoardUserServantData__bool___ctor__);
    sub_B775C4(&System_Func_WarBoardUserMasterData__bool__TypeInfo);
    sub_B775C4(&System_Func_WarBoardUserServantData__bool__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__Add__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_B775C4(&Method_WarBoardPieceData___c__DisplayClass312_0__UpdateFromServerData_b__2__);
    sub_B775C4(&Method_WarBoardPieceData___c__DisplayClass312_0__UpdateFromServerData_b__3__);
    sub_B775C4(&WarBoardPieceData___c__DisplayClass312_0_TypeInfo);
    sub_B775C4(&UnityEngine_WaitUntil_TypeInfo);
    sub_B775C4(&WarBoardCallbackTask_TypeInfo);
    sub_B775C4(&WarBoardData_WarBoardDeadBreakList_TypeInfo);
    sub_B775C4(&WarBoardMasterPieceComponent_TypeInfo);
    sub_B775C4(&Method_WarBoardPieceData__UpdateFromServerData_b__312_0__);
    sub_B775C4(&Method_WarBoardPieceData__UpdateFromServerData_b__312_1__);
    sub_B775C4(&WarBoardServantPieceComponent_TypeInfo);
    sub_B775C4(&WarBoardTaskBase___TypeInfo);
    byte_438AF2D = 1;
  }
  if ( !warBoardDataEntity )
    return;
  if ( this->fields._type_k__BackingField != 1 )
  {
    svtInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.svtInfo;
    v26 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_WarBoardUserServantData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v26,
      (Il2CppObject *)this,
      Method_WarBoardPieceData__UpdateFromServerData_b__312_1__,
      (const MethodInfo_29E92C4 *)Method_System_Func_WarBoardUserServantData__bool___ctor__);
    v27 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
            svtInfo,
            (System_Func_TSource__bool__o *)v26,
            (const MethodInfo_1D31FE4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
    if ( !v27 )
      return;
    breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
    monitor_high = HIDWORD(v27[23].monitor);
    v31 = (struct WarBoardUserServantData_o *)v27;
    if ( breakPoint_k__BackingField <= monitor_high )
    {
      pieceComponent = (__int64)this->fields.pieceComponent;
      if ( !pieceComponent )
        goto LABEL_150;
      pieceComponent = (*(__int64 (__fastcall **)(__int64, WarBoardManager_TaskList_o *, _QWORD))(*(_QWORD *)pieceComponent
                                                                                                + 792LL))(
                         pieceComponent,
                         taskList,
                         *(_QWORD *)(*(_QWORD *)pieceComponent + 800LL));
      v32 = 0;
    }
    else
    {
      this->fields._breakPoint_k__BackingField = monitor_high;
      v32 = 1;
      if ( (HIDWORD(v27[23].monitor) & 0x80000000) != 0 )
      {
        this->fields._isDead_k__BackingField = 1;
        v32 = 0;
      }
      v33 = sub_B77694(WarBoardData_WarBoardDeadBreakList_TypeInfo);
      WarBoardData_WarBoardDeadBreakList___ctor((WarBoardData_WarBoardDeadBreakList_o *)v33, 0LL);
      if ( !v33 )
        goto LABEL_150;
      v41 = (System_Int32_array **)this->fields.pieceComponent;
      *(_QWORD *)(v33 + 16) = v41;
      sub_B77560((BattleServantConfConponent_o *)(v33 + 16), v41, v35, v36, v37, v38, v39, v40);
      *(_DWORD *)(v33 + 24) = v31->fields.defeatPoint;
      *(_DWORD *)(v33 + 28) = breakPoint_k__BackingField;
      if ( !deadBreakList )
        goto LABEL_150;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)deadBreakList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v33,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__Add__);
    }
    p_serverServantData = &this->fields.serverServantData;
    serverServantData = this->fields.serverServantData;
    if ( serverServantData )
      v50 = serverServantData->fields.transformIndex != v31->fields.transformIndex;
    else
      v50 = 0;
    currentActionCount_k__BackingField = this->fields._currentActionCount_k__BackingField;
    currentActionPoint = v31->fields.currentActionPoint;
    localSaveData = this->fields.localSaveData;
    v56 = currentActionCount_k__BackingField != currentActionPoint;
    if ( !localSaveData )
      goto LABEL_150;
    if ( v31->fields.consumedActionPointDateTime <= localSaveData->fields.consumedActionPointDateTime
      || this->fields._forceId_k__BackingField
      || this->fields._groupId_k__BackingField )
    {
      v114 = 0;
      if ( serverServantData )
      {
LABEL_34:
        v57 = serverServantData->fields.criticalStars != v31->fields.criticalStars;
LABEL_63:
        v64 = v31->fields.consumedRecoverDonotActCostDateTime > localSaveData->fields.consumedRecoverDonotActCostDateTime
           && !this->fields._forceId_k__BackingField
           && !this->fields._groupId_k__BackingField
           && !this->fields._isDead_k__BackingField;
        this->fields._IsDispConsumedPieceActionPoint_k__BackingField = v64;
        Cost_k__BackingField = this->fields._Cost_k__BackingField;
        this->fields._ConsumedRecoverDonotActCost_k__BackingField = v31->fields.consumedRecoverDonotActCost;
        if ( Cost_k__BackingField )
        {
          pieceComponent = WarBoardCost__get_HasCost(Cost_k__BackingField, 0LL);
          v56 = (currentActionCount_k__BackingField != currentActionPoint) | (unsigned int)pieceComponent;
          if ( currentActionCount_k__BackingField == currentActionPoint && (pieceComponent & 1) != 0 )
          {
            v66 = this->fields._Cost_k__BackingField;
            if ( !v66 )
              goto LABEL_150;
            v56 = v66->fields._CurrentActionPoint_k__BackingField != v31->fields.currentPieceActionPoint;
          }
        }
        this->fields.serverServantData = v31;
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.serverServantData,
          (System_Int32_array **)v31,
          v42,
          v43,
          v44,
          v45,
          v46,
          v47);
        pieceComponent = (__int64)this->fields.serverServantData;
        if ( !pieceComponent )
          goto LABEL_150;
        WarBoardUserServantData__SetBattleServantData(
          (WarBoardUserServantData_o *)pieceComponent,
          this->fields._battleServant_k__BackingField,
          0LL);
        battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
        if ( !battleServant_k__BackingField )
          goto LABEL_150;
        pieceComponent = (__int64)battleServant_k__BackingField->fields.buffData;
        if ( !pieceComponent )
          goto LABEL_150;
        BattleBuffData__UpdateForceNoField((BattleBuffData_o *)pieceComponent, 0LL);
        pieceComponent = (__int64)this->fields._battleServant_k__BackingField;
        if ( !pieceComponent )
          goto LABEL_150;
        BattleServantData__updateHp((BattleServantData_o *)pieceComponent, 0LL);
        pieceComponent = (__int64)*p_serverServantData;
        if ( !*p_serverServantData )
          goto LABEL_150;
        WarBoardUserServantData__FromBattleServantData(
          (WarBoardUserServantData_o *)pieceComponent,
          this->fields._battleServant_k__BackingField,
          0LL);
        v68 = this->fields.serverServantData;
        if ( !v68 )
          goto LABEL_150;
        this->fields._limitActionCount_k__BackingField = v68->fields.limitActionPoint;
        this->fields._currentActionCount_k__BackingField = v68->fields.currentActionPoint;
        this->fields._attackCount_k__BackingField = v68->fields.attackCount;
        squareIndex = v68->fields.squareIndex;
        if ( squareIndex == -1 )
        {
          this->fields._lastSquareIndex_k__BackingField = this->fields._nowSquareIndex_k__BackingField;
          squareIndex = v68->fields.squareIndex;
        }
        this->fields._nowSquareIndex_k__BackingField = squareIndex;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (WarBoardActionPointClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
        pieceComponent = (__int64)WarBoardPieceData__get_ActionPointEntity(this, v71);
        if ( !this->fields._battleServant_k__BackingField )
          goto LABEL_150;
        v72 = (WarBoardActionPointEntity_o *)pieceComponent;
        pieceComponent = BattleServantData__getClassId(this->fields._battleServant_k__BackingField, 0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_150;
        pieceComponent = (__int64)WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                    Master_WarQuestSelectionMaster,
                                    v72,
                                    pieceComponent,
                                    0LL);
        v73 = this->fields.serverServantData;
        if ( !v73 )
          goto LABEL_150;
        v74 = (WarBoardActionPointClassEntity_o *)pieceComponent;
        pieceComponent = (__int64)this->fields._Cost_k__BackingField;
        if ( !pieceComponent )
          goto LABEL_150;
        WarBoardCost__UpdateCurrentPointByServerData(
          (WarBoardCost_o *)pieceComponent,
          v73->fields.currentPieceActionPoint,
          0LL);
        pieceComponent = (__int64)this->fields._battleServant_k__BackingField;
        if ( !pieceComponent )
          goto LABEL_150;
        v75 = this->fields._Cost_k__BackingField;
        pieceComponent = BattleServantData__getClassId((BattleServantData_o *)pieceComponent, 0LL);
        if ( !v75 )
          goto LABEL_150;
        if ( WarBoardCost__IsSameClass(v75, pieceComponent, 0LL) )
        {
          v76 = 0;
        }
        else
        {
          pieceComponent = (__int64)WarBoardCost__Create(v74, 0LL, 0LL, 0LL);
          if ( !this->fields._Cost_k__BackingField )
            goto LABEL_150;
          WarBoardCost__UpdateClassCost(this->fields._Cost_k__BackingField, (WarBoardCost_o *)pieceComponent, 0LL);
          v76 = 1;
        }
        pieceComponent = (__int64)this->fields.pieceComponent;
        if ( !pieceComponent )
          goto LABEL_150;
        if ( (((*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)pieceComponent + 568LL))(
                 pieceComponent,
                 *(_QWORD *)(*(_QWORD *)pieceComponent + 576LL)) & 1) != 0
           || v6)
          && !this->fields._isDead_k__BackingField )
        {
          pieceComponent = (__int64)this->fields.pieceComponent;
          if ( !pieceComponent )
            goto LABEL_150;
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)pieceComponent + 552LL))(
            pieceComponent,
            v32,
            *(_QWORD *)(*(_QWORD *)pieceComponent + 560LL));
        }
        if ( v76 | (v56 | v6) & 1 && !this->fields._isDead_k__BackingField )
        {
          pieceComponent = (__int64)this->fields.pieceComponent;
          if ( !pieceComponent )
            goto LABEL_150;
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)pieceComponent + 472LL))(
            pieceComponent,
            *(_QWORD *)(*(_QWORD *)pieceComponent + 480LL));
        }
        v77 = v6;
        if ( v50 | v77 && !this->fields._isDead_k__BackingField )
        {
          v78 = this->fields.pieceComponent;
          if ( v78
            && (v79 = *(&WarBoardServantPieceComponent_TypeInfo->_2.bitflags2 + 1),
                *(&v78->klass->_2.bitflags2 + 1) >= (unsigned int)v79) )
          {
            if ( (WarBoardServantPieceComponent_c *)v78->klass->_2.typeHierarchy[v79 - 1] == WarBoardServantPieceComponent_TypeInfo )
              v80 = (UnityEngine_Object_o *)this->fields.pieceComponent;
            else
              v80 = 0LL;
          }
          else
          {
            v80 = 0LL;
          }
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          pieceComponent = UnityEngine_Object__op_Inequality(v80, 0LL, 0LL);
          if ( (pieceComponent & 1) != 0 )
          {
            v81 = this->fields._battleServant_k__BackingField;
            if ( !v81 )
              goto LABEL_150;
            v83 = *(_QWORD *)&v81->fields.svtId.fields.currentCryptoKey;
            v82 = *(_QWORD *)&v81->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v115.fields.currentCryptoKey = v83;
            *(_QWORD *)&v115.fields.fakeValue = v82;
            v84 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_45425956(v115, 0LL);
            v85 = this->fields.serverServantData;
            this->fields._iconId_k__BackingField = v84;
            if ( v85 )
            {
              pieceComponent = NpcSvtType__IsEnemy(v85->fields.npcSvtType, 0LL);
              v86 = (pieceComponent & 1) != 0 ? this : 0LL;
            }
            else
            {
              pieceComponent = 0LL;
              v86 = 0LL;
            }
            if ( !this->fields._battleServant_k__BackingField )
              goto LABEL_150;
            if ( (pieceComponent & 1) != 0 )
            {
              pieceComponent = BattleServantData__getLimitCount(this->fields._battleServant_k__BackingField, 0LL);
              if ( !v86 )
                goto LABEL_150;
            }
            else
            {
              LODWORD(pieceComponent) = BattleServantData__GetIconImageLimitCount(
                                          this->fields._battleServant_k__BackingField,
                                          0LL);
              v86 = this;
            }
            v86->fields._iconLimitCount_k__BackingField = pieceComponent;
            pieceComponent = (__int64)this->fields._battleServant_k__BackingField;
            if ( !pieceComponent )
              goto LABEL_150;
            pieceComponent = BattleServantData__getClassId((BattleServantData_o *)pieceComponent, 0LL);
            v87 = this->fields._battleServant_k__BackingField;
            this->fields._iconClassId_k__BackingField = pieceComponent;
            if ( !v87 )
              goto LABEL_150;
            this->fields._iconFrameType_k__BackingField = v87->fields._frameType_k__BackingField;
            this->fields._iconLevel_k__BackingField = v87->fields.level;
            if ( !v80 )
              goto LABEL_150;
            WarBoardServantPieceComponent__SetServantIcon((WarBoardServantPieceComponent_o *)v80, 0LL);
            ((void (__fastcall *)(UnityEngine_Object_o *, void *))v80->klass[1]._1.parent)(
              v80,
              v80->klass[1]._1.generic_class);
            ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *))v80->klass[1]._1.castClass)(
              v80,
              v80->klass[1]._1.declaringType);
          }
        }
        if ( v57 | v77 && !this->fields._isDead_k__BackingField )
        {
          pieceComponent = (__int64)this->fields.pieceComponent;
          if ( !pieceComponent )
            goto LABEL_150;
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)pieceComponent + 584LL))(
            pieceComponent,
            *(_QWORD *)(*(_QWORD *)pieceComponent + 592LL));
        }
        pieceComponent = (__int64)this->fields.pieceComponent;
        if ( pieceComponent )
        {
          WarBoardPieceBaseComponent__UpdateUiByBuffChanged((WarBoardPieceBaseComponent_o *)pieceComponent, v28);
          if ( v114 )
          {
            v88 = (WarBoardPieceData___c__DisplayClass312_0_o *)sub_B77694(WarBoardPieceData___c__DisplayClass312_0_TypeInfo);
            WarBoardPieceData___c__DisplayClass312_0___ctor(v88, 0LL);
            if ( !v88 )
              goto LABEL_150;
            v88->fields.popupClose = 0;
            v89 = (System_Func_bool__o *)sub_B77694(System_Func_bool__TypeInfo);
            System_Func_bool____ctor(
              v89,
              (Il2CppObject *)v88,
              Method_WarBoardPieceData___c__DisplayClass312_0__UpdateFromServerData_b__2__,
              (const MethodInfo_29D1078 *)Method_System_Func_bool___ctor__);
            v90 = (UnityEngine_WaitUntil_o *)sub_B77694(UnityEngine_WaitUntil_TypeInfo);
            UnityEngine_WaitUntil___ctor(v90, v89, 0LL);
            v91 = sub_B77694(WarBoardCallbackTask_TypeInfo);
            WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v91, (UnityEngine_CustomYieldInstruction_o *)v90, 0LL);
            if ( !v91 )
              goto LABEL_150;
            v92 = *(System_Delegate_o **)(v91 + 32);
            v93 = (WarBoardTaskBase_TaskCallback_o *)sub_B77694(WarBoardTaskBase_TaskCallback_TypeInfo);
            WarBoardTaskBase_TaskCallback___ctor(
              v93,
              (Il2CppObject *)v88,
              Method_WarBoardPieceData___c__DisplayClass312_0__UpdateFromServerData_b__3__,
              0LL);
            v94 = (System_Int32_array **)System_Delegate__Combine(v92, (System_Delegate_o *)v93, 0LL);
            if ( v94 && *v94 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
            {
              v112 = (WarBoardPieceData_o *)sub_B77990(v94);
              WarBoardPieceData__ToJson(v112, v113);
            }
            else
            {
              *(_QWORD *)(v91 + 32) = v94;
              sub_B77560((BattleServantConfConponent_o *)(v91 + 32), v94, v95, v96, v97, v98, v99, v100);
              Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              pieceComponent = sub_B775DC(WarBoardTaskBase___TypeInfo, 1LL);
              if ( !pieceComponent )
                goto LABEL_150;
              v102 = pieceComponent;
              v103 = sub_B77684(v91, *(_QWORD *)(*(_QWORD *)pieceComponent + 64LL));
              if ( !v103 )
              {
                v110 = sub_B776BC(0LL);
                sub_B77668(v110, 0LL);
              }
              if ( !*(_DWORD *)(v102 + 24) )
              {
                v111 = sub_B776C8(v103);
                sub_B77668(v111, 0LL);
              }
              *(_QWORD *)(v102 + 32) = v91;
              sub_B77560(
                (BattleServantConfConponent_o *)(v102 + 32),
                (System_Int32_array **)v91,
                v104,
                v105,
                v106,
                v107,
                v108,
                v109);
              if ( !Instance )
                goto LABEL_150;
              WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 1, (WarBoardTaskBase_array *)v102, 0LL);
            }
          }
          return;
        }
LABEL_150:
        sub_B7769C(pieceComponent, v28);
      }
    }
    else
    {
      v114 = !this->fields._isDead_k__BackingField;
      if ( serverServantData )
        goto LABEL_34;
    }
    v57 = 0;
    goto LABEL_63;
  }
  masterInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.masterInfo;
  v12 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B77694(System_Func_WarBoardUserMasterData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v12,
    (Il2CppObject *)this,
    Method_WarBoardPieceData__UpdateFromServerData_b__312_0__,
    (const MethodInfo_29E92C4 *)Method_System_Func_WarBoardUserMasterData__bool___ctor__);
  v13 = (struct WarBoardUserMasterData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                             masterInfo,
                                             (System_Func_TSource__bool__o *)v12,
                                             (const MethodInfo_1D31FE4 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
  if ( !v13 )
    return;
  defeatPoint = v13->fields.defeatPoint;
  v21 = v13;
  if ( this->fields._breakPoint_k__BackingField > defeatPoint )
  {
    this->fields._breakPoint_k__BackingField = defeatPoint;
    if ( v13->fields.defeatPoint <= 0 )
      this->fields._isDead_k__BackingField = 1;
  }
  p_serverMasterData_k__BackingField = &this->fields._serverMasterData_k__BackingField;
  serverMasterData_k__BackingField = this->fields._serverMasterData_k__BackingField;
  if ( serverMasterData_k__BackingField )
    v24 = serverMasterData_k__BackingField->fields.commandSpellNum != v13->fields.commandSpellNum;
  else
    v24 = 1;
  this->fields._serverMasterData_k__BackingField = v13;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._serverMasterData_k__BackingField,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  if ( this->fields._currentActionCount_k__BackingField == v21->fields.currentLimitActionPoint )
  {
    v51 = this->fields._Cost_k__BackingField;
    if ( v51 )
    {
      if ( !*p_serverMasterData_k__BackingField )
        goto LABEL_150;
      v52 = v51->fields._CurrentActionPoint_k__BackingField != (*p_serverMasterData_k__BackingField)->fields.currentPieceActionPoint;
    }
    else
    {
      v52 = 0;
    }
  }
  else
  {
    v52 = 1;
  }
  v58 = (int32_t *)*p_serverMasterData_k__BackingField;
  if ( !*p_serverMasterData_k__BackingField )
    goto LABEL_150;
  pieceComponent = (__int64)this->fields._Cost_k__BackingField;
  this->fields._limitActionCount_k__BackingField = v58[12];
  this->fields._currentActionCount_k__BackingField = v58[11];
  this->fields._attackCount_k__BackingField = v58[13];
  this->fields._nowSquareIndex_k__BackingField = v58[14];
  if ( !pieceComponent )
    goto LABEL_150;
  v59 = v6;
  WarBoardCost__UpdateCurrentPointByServerData((WarBoardCost_o *)pieceComponent, v58[18], 0LL);
  v60 = !this->fields._forceId_k__BackingField
     && !this->fields._groupId_k__BackingField
     && this->fields._type_k__BackingField == 1;
  if ( (v60 & (v24 | v59)) != 0 )
  {
    v61 = this->fields.pieceComponent;
    if ( v61
      && (v62 = *(&WarBoardMasterPieceComponent_TypeInfo->_2.bitflags2 + 1),
          *(&v61->klass->_2.bitflags2 + 1) >= (unsigned int)v62) )
    {
      v63 = (WarBoardMasterPieceComponent_c *)v61->klass->_2.typeHierarchy[v62 - 1] == WarBoardMasterPieceComponent_TypeInfo
          ? (UnityEngine_Object_o *)this->fields.pieceComponent
          : 0LL;
    }
    else
    {
      v63 = 0LL;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    pieceComponent = UnityEngine_Object__op_Inequality(v63, 0LL, 0LL);
    if ( (pieceComponent & 1) != 0 )
    {
      if ( !*p_serverMasterData_k__BackingField )
        goto LABEL_150;
      if ( !v63 )
        goto LABEL_150;
      pieceComponent = (__int64)v63[13].monitor;
      if ( !pieceComponent )
        goto LABEL_150;
      CommandSpellIconComponent__SetRemain(
        (CommandSpellIconComponent_o *)pieceComponent,
        (*p_serverMasterData_k__BackingField)->fields.commandSpellNum,
        0LL);
    }
  }
  if ( v52 | v59 && !this->fields._isDead_k__BackingField )
  {
    pieceComponent = (__int64)this->fields.pieceComponent;
    if ( pieceComponent )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)pieceComponent + 472LL))(
        pieceComponent,
        *(_QWORD *)(*(_QWORD *)pieceComponent + 480LL));
      return;
    }
    goto LABEL_150;
  }
}


void __fastcall WarBoardPieceData__UpdateWidgetDepth(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_B7769C(0LL, method);
  WarBoardPieceBaseComponent__UpdateWidgetDepth(pieceComponent, method);
}


void __fastcall WarBoardPieceData__WallAttack(WarBoardPieceData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_B7769C(0LL, squareIndex);
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, int32_t, Il2CppMethodPointer))pieceComponent->klass->vtable._28_OnWallAttack.method)(
    pieceComponent,
    squareIndex,
    pieceComponent->klass->vtable._29_OnAfterWallAttack.methodPtr);
}


bool __fastcall WarBoardPieceData___ProcContinue_b__333_0(
        WarBoardPieceData_o *this,
        WarBoardPieceData_o *otherPiece,
        const MethodInfo *method)
{
  if ( !otherPiece )
    sub_B7769C(this, 0LL);
  return !otherPiece->fields._forceId_k__BackingField
      && !otherPiece->fields._groupId_k__BackingField
      && otherPiece->fields._nowSquareIndex_k__BackingField != otherPiece->fields._PutSquareIndex_k__BackingField
      && otherPiece->fields._index_k__BackingField >= this->fields._index_k__BackingField;
}


bool __fastcall WarBoardPieceData___SetInitinalData_b__311_0(
        WarBoardPieceData_o *this,
        WarBoardUserMasterData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return x->fields.forceId == this->fields._forceId_k__BackingField
      && x->fields.groupId == this->fields._groupId_k__BackingField;
}


bool __fastcall WarBoardPieceData___SetInitinalData_b__311_1(
        WarBoardPieceData_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return x->fields.forceId == this->fields._forceId_k__BackingField
      && x->fields.groupId == this->fields._groupId_k__BackingField
      && x->fields.pieceIndex == this->fields._index_k__BackingField;
}


bool __fastcall WarBoardPieceData___UpdateFromServerData_b__312_0(
        WarBoardPieceData_o *this,
        WarBoardUserMasterData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return x->fields.forceId == this->fields._forceId_k__BackingField
      && x->fields.groupId == this->fields._groupId_k__BackingField;
}


bool __fastcall WarBoardPieceData___UpdateFromServerData_b__312_1(
        WarBoardPieceData_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7769C(this, 0LL);
  return x->fields.forceId == this->fields._forceId_k__BackingField
      && x->fields.groupId == this->fields._groupId_k__BackingField
      && x->fields.pieceIndex == this->fields._index_k__BackingField;
}


WarBoardActionPointEntity_o *__fastcall WarBoardPieceData__get_ActionPointEntity(
        WarBoardPieceData_o *this,
        const MethodInfo *method)
{
  WarBoardActionPointMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1

  if ( (byte_438AF1E & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_WarBoardActionPointMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    byte_438AF1E = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardActionPointMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_WarBoardActionPointMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B7769C(0LL, v4);
  return WarBoardActionPointMaster__GetEntity(
           Master_WarQuestSelectionMaster,
           this->fields.stageId,
           this->fields._forceId_k__BackingField,
           this->fields._groupId_k__BackingField,
           0LL);
}


int32_t __fastcall WarBoardPieceData__get_ActionType(WarBoardPieceData_o *this, const MethodInfo *method)
{
  int32_t result; // w0

  result = this->fields._overwriteActionType_k__BackingField;
  if ( result <= 0 )
    return this->fields._actionType_k__BackingField;
  return result;
}


int32_t __fastcall WarBoardPieceData__get_AiTargetSortPrimeIndex(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return 3;
}


int32_t __fastcall WarBoardPieceData__get_AiTargetSortSecondIndex(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._index_k__BackingField;
}


int32_t __fastcall WarBoardPieceData__get_AttackValue(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleServant_k__BackingField; // x8

  battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
  if ( battleServant_k__BackingField )
    return battleServant_k__BackingField->fields.atk;
  else
    return 0;
}


BattleBuffData_o *__fastcall WarBoardPieceData__get_BuffData(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleServant_k__BackingField; // x8

  battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
  if ( battleServant_k__BackingField )
    return battleServant_k__BackingField->fields.buffData;
  else
    return 0LL;
}


WarBoardPieceBaseComponent_o *__fastcall WarBoardPieceData__get_Component(
        WarBoardPieceData_o *this,
        const MethodInfo *method)
{
  return this->fields.pieceComponent;
}


int32_t __fastcall WarBoardPieceData__get_ConsumedRecoverDonotActCost(
        WarBoardPieceData_o *this,
        const MethodInfo *method)
{
  return this->fields._ConsumedRecoverDonotActCost_k__BackingField;
}


WarBoardCost_o *__fastcall WarBoardPieceData__get_Cost(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._Cost_k__BackingField;
}


int32_t __fastcall WarBoardPieceData__get_CriticalStars(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardUserServantData_o *serverServantData; // x8

  serverServantData = this->fields.serverServantData;
  if ( serverServantData )
    return serverServantData->fields.criticalStars;
  else
    return 0;
}


int32_t __fastcall WarBoardPieceData__get_CurrentHp(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleServant_k__BackingField; // x0

  battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
  if ( battleServant_k__BackingField )
    LODWORD(battleServant_k__BackingField) = ((__int64 (__fastcall *)(struct BattleServantData_o *, Il2CppMethodPointer))battleServant_k__BackingField->klass->vtable._9_get_hp.method)(
                                               battleServant_k__BackingField,
                                               battleServant_k__BackingField->klass->vtable._10_set_hp.methodPtr);
  return (int)battleServant_k__BackingField;
}


float __fastcall WarBoardPieceData__get_CurrentHpProgress(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleServant_k__BackingField; // x0
  float MaxHp; // s8
  int v5; // w0
  BattleServantData_o *v6; // x8
  int v7; // w19

  battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
  MaxHp = 1.0;
  if ( battleServant_k__BackingField )
  {
    v5 = ((__int64 (__fastcall *)(struct BattleServantData_o *, Il2CppMethodPointer))battleServant_k__BackingField->klass->vtable._9_get_hp.method)(
           battleServant_k__BackingField,
           battleServant_k__BackingField->klass->vtable._10_set_hp.methodPtr);
    v6 = this->fields._battleServant_k__BackingField;
    v7 = v5;
    if ( v6 )
      MaxHp = (float)BattleServantData__getMaxHp(v6, 0LL);
  }
  else
  {
    v7 = 0;
  }
  return (float)v7 / MaxHp;
}


float __fastcall WarBoardPieceData__get_CurrentNpProgress(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  float result; // s0
  int maxtpturn; // w9
  float lineMaxNp; // s1
  float np; // s0

  battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
  result = 0.0;
  if ( battleServant_k__BackingField )
  {
    if ( this->fields._forceId_k__BackingField || this->fields._groupId_k__BackingField )
    {
      maxtpturn = battleServant_k__BackingField->fields.maxtpturn;
      if ( maxtpturn < 1 )
        return result;
      lineMaxNp = (float)maxtpturn;
      np = (float)(maxtpturn - battleServant_k__BackingField->fields.nexttpturn);
    }
    else
    {
      np = (float)battleServant_k__BackingField->fields.np;
      lineMaxNp = (float)battleServant_k__BackingField->fields.lineMaxNp;
    }
    return np / lineMaxNp;
  }
  return result;
}


int64_t __fastcall WarBoardPieceData__get_CurrentUserEquipId(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._CurrentUserEquipId_k__BackingField;
}


bool __fastcall WarBoardPieceData__get_HasCost(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardCost_o *Cost_k__BackingField; // x0

  Cost_k__BackingField = this->fields._Cost_k__BackingField;
  if ( Cost_k__BackingField )
    LOBYTE(Cost_k__BackingField) = WarBoardCost__get_HasCost(Cost_k__BackingField, 0LL);
  return (char)Cost_k__BackingField;
}


bool __fastcall WarBoardPieceData__get_IsAiTargetable(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return !this->fields._isDead_k__BackingField;
}


bool __fastcall WarBoardPieceData__get_IsDispConsumedPieceActionPoint(
        WarBoardPieceData_o *this,
        const MethodInfo *method)
{
  return this->fields._IsDispConsumedPieceActionPoint_k__BackingField;
}


bool __fastcall WarBoardPieceData__get_IsEnemyMonster(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardUserServantData_o *serverServantData; // x8

  serverServantData = this->fields.serverServantData;
  return serverServantData && NpcSvtType__IsEnemy(serverServantData->fields.npcSvtType, 0LL);
}


bool __fastcall WarBoardPieceData__get_IsNpc(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._npcId_k__BackingField > 0;
}


bool __fastcall WarBoardPieceData__get_IsPutInit(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return (unsigned int)this->fields._ReinfoId_k__BackingField >> 31;
}


bool __fastcall WarBoardPieceData__get_IsReinforcement(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._ReinfoId_k__BackingField >= 0;
}


bool __fastcall WarBoardPieceData__get_IsShadow(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._IsShadow_k__BackingField;
}


bool __fastcall WarBoardPieceData__get_IsStageBoss(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardUserServantData_o *serverServantData; // x0

  serverServantData = this->fields.serverServantData;
  if ( serverServantData )
    LOBYTE(serverServantData) = WarBoardUserServantData__IsBoss(serverServantData, 0LL);
  return (char)serverServantData;
}


int32_t __fastcall WarBoardPieceData__get_MaxHp(WarBoardPieceData_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleServant_k__BackingField; // x0

  battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
  if ( battleServant_k__BackingField )
    return BattleServantData__getMaxHp(battleServant_k__BackingField, 0LL);
  else
    return 1;
}


int32_t __fastcall WarBoardPieceData__get_NowSquareIndex(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._nowSquareIndex_k__BackingField;
}


int32_t __fastcall WarBoardPieceData__get_NpcDisplayType(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardUserServantData_o *serverServantData; // x8

  serverServantData = this->fields.serverServantData;
  if ( serverServantData )
    return serverServantData->fields.displayType;
  else
    return 0;
}


WarBoardPieceData_RouteSaveData_o *__fastcall WarBoardPieceData__get_PrevAiRoute(
        WarBoardPieceData_o *this,
        const MethodInfo *method)
{
  return this->fields._PrevAiRoute_k__BackingField;
}


int32_t __fastcall WarBoardPieceData__get_PutSquareIndex(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._PutSquareIndex_k__BackingField;
}


int32_t __fastcall WarBoardPieceData__get_ReinfoId(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._ReinfoId_k__BackingField;
}


int32_t __fastcall WarBoardPieceData__get_ReinfoIndex(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._ReinfoIndex_k__BackingField;
}


int32_t __fastcall WarBoardPieceData__get_StageBossIdx(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardUserServantData_o *serverServantData; // x8

  serverServantData = this->fields.serverServantData;
  if ( !serverServantData )
    sub_B7769C(this, method);
  return serverServantData->fields.stageBossIdx;
}


int32_t __fastcall WarBoardPieceData__get_StageReinfoId(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._StageReinfoId_k__BackingField;
}


int64_t __fastcall WarBoardPieceData__get_UserServantEquipId(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._UserServantEquipId_k__BackingField;
}


int64_t __fastcall WarBoardPieceData__get_UserServantId(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._UserServantId_k__BackingField;
}


int64_t __fastcall WarBoardPieceData__get_WarBoardUserServantDataId(
        WarBoardPieceData_o *this,
        const MethodInfo *method)
{
  WarBoardPieceData_o *v2; // x19
  struct WarBoardUserServantData_o *serverServantData; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-30h]

  v2 = this;
  if ( (byte_438AF1D & 1) == 0 )
  {
    this = (WarBoardPieceData_o *)sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_438AF1D = 1;
  }
  serverServantData = v2->fields.serverServantData;
  if ( !serverServantData )
    sub_B7769C(this, method);
  v4 = *(_OWORD *)&serverServantData->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&serverServantData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(&v6, 0LL);
}


int32_t __fastcall WarBoardPieceData__get_actionType(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._actionType_k__BackingField;
}


int32_t __fastcall WarBoardPieceData__get_attackCount(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._attackCount_k__BackingField;
}


BattleServantData_o *__fastcall WarBoardPieceData__get_battleServant(
        WarBoardPieceData_o *this,
        const MethodInfo *method)
{
  return this->fields._battleServant_k__BackingField;
}


int32_t __fastcall WarBoardPieceData__get_breakPoint(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._breakPoint_k__BackingField;
}


int32_t __fastcall WarBoardPieceData__get_breakPointMax(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._breakPointMax_k__BackingField;
}


int32_t __fastcall WarBoardPieceData__get_currentActionCount(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._currentActionCount_k__BackingField;
}


bool __fastcall WarBoardPieceData__get_enableAction(WarBoardPieceData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  return WarBoardPieceData__HasVitalityToDoAnyActions(this, method)
      && !WarBoardPieceData__HasSelfMoveDisabledBuff(this, v3);
}


int32_t __fastcall WarBoardPieceData__get_entryTurn(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._entryTurn_k__BackingField;
}


int32_t __fastcall WarBoardPieceData__get_equipLimitCount(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._equipLimitCount_k__BackingField;
}


int32_t __fastcall WarBoardPieceData__get_forceId(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._forceId_k__BackingField;
}


UnityEngine_GameObject_o *__fastcall WarBoardPieceData__get_gameObject(
        WarBoardPieceData_o *this,
        const MethodInfo *method)
{
  UnityEngine_Component_o *pieceComponent; // x0

  pieceComponent = (UnityEngine_Component_o *)this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_B7769C(0LL, method);
  return UnityEngine_Component__get_gameObject(pieceComponent, 0LL);
}


int32_t __fastcall WarBoardPieceData__get_groupId(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._groupId_k__BackingField;
}


int32_t __fastcall WarBoardPieceData__get_iconClassId(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._iconClassId_k__BackingField;
}


int32_t __fastcall WarBoardPieceData__get_iconEquipId(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._iconEquipId_k__BackingField;
}


int32_t __fastcall WarBoardPieceData__get_iconFrameType(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._iconFrameType_k__BackingField;
}


int32_t __fastcall WarBoardPieceData__get_iconId(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._iconId_k__BackingField;
}


int32_t __fastcall WarBoardPieceData__get_iconLevel(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._iconLevel_k__BackingField;
}


int32_t __fastcall WarBoardPieceData__get_iconLimitCount(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._iconLimitCount_k__BackingField;
}


int32_t __fastcall WarBoardPieceData__get_index(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._index_k__BackingField;
}


System_Int32_array *__fastcall WarBoardPieceData__get_individuality(
        WarBoardPieceData_o *this,
        const MethodInfo *method)
{
  return this->fields._individuality_k__BackingField;
}


bool __fastcall WarBoardPieceData__get_isDead(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._isDead_k__BackingField;
}


bool __fastcall WarBoardPieceData__get_isEditing(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._isEditing_k__BackingField;
}


bool __fastcall WarBoardPieceData__get_isEnemyServant(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._forceId_k__BackingField && this->fields._type_k__BackingField == 0;
}


bool __fastcall WarBoardPieceData__get_isInfinitelyActable(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._limitActionCount_k__BackingField < 1;
}


bool __fastcall WarBoardPieceData__get_isMaster(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._type_k__BackingField == 1;
}


bool __fastcall WarBoardPieceData__get_isNotIncludeWin(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._isNotIncludeWin_k__BackingField;
}


bool __fastcall WarBoardPieceData__get_isPlayerGroup(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return !this->fields._forceId_k__BackingField && this->fields._groupId_k__BackingField == 0;
}


bool __fastcall WarBoardPieceData__get_isPlayerMaster(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return !this->fields._forceId_k__BackingField
      && !this->fields._groupId_k__BackingField
      && this->fields._type_k__BackingField == 1;
}


bool __fastcall WarBoardPieceData__get_isPlayerServant(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return !this->fields._forceId_k__BackingField
      && !this->fields._groupId_k__BackingField
      && this->fields._type_k__BackingField == 0;
}


bool __fastcall WarBoardPieceData__get_isServant(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._type_k__BackingField == 0;
}


int32_t __fastcall WarBoardPieceData__get_lastSquareIndex(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._lastSquareIndex_k__BackingField;
}


int32_t __fastcall WarBoardPieceData__get_limitActionCount(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._limitActionCount_k__BackingField;
}


int32_t __fastcall WarBoardPieceData__get_nowSquareIndex(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._nowSquareIndex_k__BackingField;
}


int32_t __fastcall WarBoardPieceData__get_npcDispLimitCount(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._npcDispLimitCount_k__BackingField;
}


int64_t __fastcall WarBoardPieceData__get_npcEquipId(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._npcEquipId_k__BackingField;
}


int64_t __fastcall WarBoardPieceData__get_npcId(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._npcId_k__BackingField;
}


int32_t __fastcall WarBoardPieceData__get_npcImageSvtId(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._npcImageSvtId_k__BackingField;
}


int32_t __fastcall WarBoardPieceData__get_overwriteActionType(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._overwriteActionType_k__BackingField;
}


int32_t __fastcall WarBoardPieceData__get_overwriteAiId(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._overwriteAiId_k__BackingField;
}


int32_t __fastcall WarBoardPieceData__get_restrictionId(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._restrictionId_k__BackingField;
}


int32_t __fastcall WarBoardPieceData__get_roleType(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._roleType_k__BackingField;
}


WarBoardUserMasterData_o *__fastcall WarBoardPieceData__get_serverMasterData(
        WarBoardPieceData_o *this,
        const MethodInfo *method)
{
  return this->fields._serverMasterData_k__BackingField;
}


int32_t __fastcall WarBoardPieceData__get_survivalTurn(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_438AF1B & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_438AF1B = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList) == 0LL )
    sub_B7769C(Instance, v4);
  return WarBoardData__get_TurnCount(Instance, 0LL) - this->fields._entryTurn_k__BackingField;
}


int32_t __fastcall WarBoardPieceData__get_type(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._type_k__BackingField;
}


uint32_t __fastcall WarBoardPieceData__get_uniqueIndex(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._uniqueIndex_k__BackingField;
}


void __fastcall WarBoardPieceData__set_ConsumedRecoverDonotActCost(
        WarBoardPieceData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ConsumedRecoverDonotActCost_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_Cost(WarBoardPieceData_o *this, WarBoardCost_o *value, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._Cost_k__BackingField = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._Cost_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardPieceData__set_CurrentUserEquipId(
        WarBoardPieceData_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._CurrentUserEquipId_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_IsDispConsumedPieceActionPoint(
        WarBoardPieceData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsDispConsumedPieceActionPoint_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_IsShadow(WarBoardPieceData_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsShadow_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_PrevAiRoute(
        WarBoardPieceData_o *this,
        WarBoardPieceData_RouteSaveData_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._PrevAiRoute_k__BackingField = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._PrevAiRoute_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardPieceData__set_PutSquareIndex(
        WarBoardPieceData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._PutSquareIndex_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_ReinfoId(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._ReinfoId_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_ReinfoIndex(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._ReinfoIndex_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_StageReinfoId(
        WarBoardPieceData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._StageReinfoId_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_UserServantEquipId(
        WarBoardPieceData_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._UserServantEquipId_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_UserServantId(
        WarBoardPieceData_o *this,
        int64_t value,
        const MethodInfo *method)
{
  this->fields._UserServantId_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_actionType(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._actionType_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_attackCount(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._attackCount_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_battleServant(
        WarBoardPieceData_o *this,
        BattleServantData_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._battleServant_k__BackingField = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._battleServant_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardPieceData__set_breakPoint(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._breakPoint_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_breakPointMax(
        WarBoardPieceData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._breakPointMax_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_currentActionCount(
        WarBoardPieceData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._currentActionCount_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_entryTurn(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._entryTurn_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_equipLimitCount(
        WarBoardPieceData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._equipLimitCount_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_forceId(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._forceId_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_groupId(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._groupId_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_iconClassId(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._iconClassId_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_iconEquipId(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._iconEquipId_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_iconFrameType(
        WarBoardPieceData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._iconFrameType_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_iconId(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._iconId_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_iconLevel(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._iconLevel_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_iconLimitCount(
        WarBoardPieceData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._iconLimitCount_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_index(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._index_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_individuality(
        WarBoardPieceData_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._individuality_k__BackingField = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._individuality_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardPieceData__set_isDead(WarBoardPieceData_o *this, bool value, const MethodInfo *method)
{
  this->fields._isDead_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_isEditing(WarBoardPieceData_o *this, bool value, const MethodInfo *method)
{
  this->fields._isEditing_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_isNotIncludeWin(WarBoardPieceData_o *this, bool value, const MethodInfo *method)
{
  this->fields._isNotIncludeWin_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_lastSquareIndex(
        WarBoardPieceData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._lastSquareIndex_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_limitActionCount(
        WarBoardPieceData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._limitActionCount_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_nowSquareIndex(
        WarBoardPieceData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._nowSquareIndex_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_npcDispLimitCount(
        WarBoardPieceData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._npcDispLimitCount_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_npcEquipId(WarBoardPieceData_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._npcEquipId_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_npcId(WarBoardPieceData_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._npcId_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_npcImageSvtId(
        WarBoardPieceData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._npcImageSvtId_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_overwriteActionType(
        WarBoardPieceData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._overwriteActionType_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_overwriteAiId(
        WarBoardPieceData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._overwriteAiId_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_restrictionId(
        WarBoardPieceData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._restrictionId_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_roleType(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._roleType_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_serverMasterData(
        WarBoardPieceData_o *this,
        WarBoardUserMasterData_o *value,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._serverMasterData_k__BackingField = value;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields._serverMasterData_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardPieceData__set_type(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._type_k__BackingField = value;
}


void __fastcall WarBoardPieceData__set_uniqueIndex(WarBoardPieceData_o *this, uint32_t value, const MethodInfo *method)
{
  this->fields._uniqueIndex_k__BackingField = value;
}


void __fastcall WarBoardPieceData_PieceStatusCache___ctor(
        WarBoardPieceData_PieceStatusCache_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardPieceData_PieceStatusCache__ClearCache(
        WarBoardPieceData_PieceStatusCache_o *this,
        const MethodInfo *method)
{
  *(_DWORD *)&this->fields._HasAvailablePermanentSleepBuff_k__BackingField.fields.value = 0;
}


void __fastcall WarBoardPieceData_PieceStatusCache__SetEnable(
        WarBoardPieceData_PieceStatusCache_o *this,
        bool flg,
        const MethodInfo *method)
{
  *(_DWORD *)&this->fields._HasAvailablePermanentSleepBuff_k__BackingField.fields.value = 0;
  this->fields._IsEnabled_k__BackingField = flg;
}


System_Nullable_bool__o __fastcall WarBoardPieceData_PieceStatusCache__get_HasAvailablePermanentSleepBuff(
        WarBoardPieceData_PieceStatusCache_o *this,
        const MethodInfo *method)
{
  return this->fields._HasAvailablePermanentSleepBuff_k__BackingField;
}


System_Nullable_bool__o __fastcall WarBoardPieceData_PieceStatusCache__get_HasCompletelyActionDisabledBuff(
        WarBoardPieceData_PieceStatusCache_o *this,
        const MethodInfo *method)
{
  return this->fields._HasCompletelyActionDisabledBuff_k__BackingField;
}


bool __fastcall WarBoardPieceData_PieceStatusCache__get_IsEnabled(
        WarBoardPieceData_PieceStatusCache_o *this,
        const MethodInfo *method)
{
  return this->fields._IsEnabled_k__BackingField;
}


void __fastcall WarBoardPieceData_PieceStatusCache__set_HasAvailablePermanentSleepBuff(
        WarBoardPieceData_PieceStatusCache_o *this,
        System_Nullable_bool__o value,
        const MethodInfo *method)
{
  this->fields._HasAvailablePermanentSleepBuff_k__BackingField = value;
}


void __fastcall WarBoardPieceData_PieceStatusCache__set_HasCompletelyActionDisabledBuff(
        WarBoardPieceData_PieceStatusCache_o *this,
        System_Nullable_bool__o value,
        const MethodInfo *method)
{
  this->fields._HasCompletelyActionDisabledBuff_k__BackingField = value;
}


void __fastcall WarBoardPieceData_PieceStatusCache__set_IsEnabled(
        WarBoardPieceData_PieceStatusCache_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsEnabled_k__BackingField = value;
}


void __fastcall WarBoardPieceData_RouteSaveData___ctor(
        WarBoardPieceData_RouteSaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WarBoardPieceData_RouteSaveData___ctor_21667496(
        WarBoardPieceData_RouteSaveData_o *this,
        int32_t inBaseIndex,
        int32_t inActionIndex,
        int64_t inFlagNow,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.baseIndex = inBaseIndex;
  this->fields.actionIndex = inActionIndex;
  this->fields.flagNow = inFlagNow;
}


int32_t __fastcall WarBoardPieceData_RouteSaveData__get_ActionIndex(
        WarBoardPieceData_RouteSaveData_o *this,
        const MethodInfo *method)
{
  return this->fields.actionIndex;
}


int32_t __fastcall WarBoardPieceData_RouteSaveData__get_BaseIndex(
        WarBoardPieceData_RouteSaveData_o *this,
        const MethodInfo *method)
{
  return this->fields.baseIndex;
}


int64_t __fastcall WarBoardPieceData_RouteSaveData__get_FlagNow(
        WarBoardPieceData_RouteSaveData_o *this,
        const MethodInfo *method)
{
  return this->fields.flagNow;
}


bool __fastcall WarBoardPieceData_RouteSaveData__get_notAction(
        WarBoardPieceData_RouteSaveData_o *this,
        const MethodInfo *method)
{
  return this->fields.baseIndex == this->fields.actionIndex;
}


void __fastcall WarBoardPieceData_SaveData___ctor(WarBoardPieceData_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.consumedActionPointDateTime = 0;
  this->fields.consumedRecoverDonotActCostDateTime = 0;
  *(_OWORD *)&this->fields.forceId = xmmword_331BD30;
}


void __fastcall WarBoardPieceData_SaveData___ctor_21667616(
        WarBoardPieceData_SaveData_o *this,
        WarBoardPieceData_o *owner,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  const MethodInfo *v11; // x1
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct WarBoardPieceData_o *v19; // x0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.owner = owner;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.owner, (System_Int32_array **)owner, v5, v6, v7, v8, v9, v10);
  WarBoardPieceData_SaveData__Save(this, v11);
  v19 = this->fields.owner;
  if ( !v19 )
    sub_B7769C(0LL, v12);
  v19->fields.localSaveData = this;
  sub_B77560(
    (BattleServantConfConponent_o *)&v19->fields.localSaveData,
    (System_Int32_array **)this,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void __fastcall WarBoardPieceData_SaveData__Load(WarBoardPieceData_SaveData_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  WarBoardPieceData_SaveData_o *v8; // x19
  struct WarBoardPieceData_o *owner; // x8
  struct WarBoardPieceData_o *v10; // x8
  struct WarBoardPieceData_o *v11; // x8
  struct WarBoardPieceData_o *v12; // x8
  System_Int32_array **prevAiRoute; // x1
  struct WarBoardPieceData_o *v14; // x8
  struct WarBoardPieceData_o *v15; // x8
  struct WarBoardPieceData_o *v16; // x8
  struct WarBoardPieceData_o *v17; // x8
  struct WarBoardPieceData_o *v18; // x8
  struct WarBoardPieceData_o *v19; // x8
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct WarBoardPieceData_o *v26; // x8
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  struct WarBoardPieceData_o *v28; // x8
  struct WarBoardUserMasterData_o *v29; // x8
  struct WarBoardPieceData_o *v30; // x8
  struct WarBoardUserMasterData_o *v31; // x8
  struct WarBoardPieceData_o *v32; // x8
  struct WarBoardUserMasterData_o *v33; // x8
  struct WarBoardPieceData_o *v34; // x8
  struct WarBoardUserMasterData_o *v35; // x8
  struct WarBoardPieceData_o *v36; // x8
  struct WarBoardUserMasterData_o *v37; // x8
  struct WarBoardUserServantData_o *serverServantData; // x8
  struct WarBoardPieceData_o *v39; // x8
  struct WarBoardUserServantData_o *v40; // x8
  struct WarBoardPieceData_o *v41; // x8
  struct WarBoardUserServantData_o *v42; // x8
  System_Int32_array **buffSave; // x1
  struct WarBoardPieceData_o *v44; // x8
  struct WarBoardUserServantData_o *v45; // x8
  struct WarBoardPieceData_o *v46; // x8
  struct WarBoardUserServantData_o *v47; // x8
  struct WarBoardPieceData_o *v48; // x8
  struct WarBoardUserServantData_o *v49; // x8
  struct WarBoardPieceData_o *v50; // x8
  struct WarBoardUserServantData_o *v51; // x8
  struct WarBoardPieceData_o *v52; // x8
  struct WarBoardUserServantData_o *v53; // x8
  struct WarBoardPieceData_o *v54; // x8
  struct WarBoardUserServantData_o *v55; // x8
  struct WarBoardPieceData_o *v56; // x8
  struct WarBoardUserServantData_o *v57; // x8
  struct WarBoardPieceData_o *v58; // x8
  struct WarBoardUserServantData_o *v59; // x8
  __int128 v60; // q1
  WarBoardPieceData_SaveData_o *v61; // x20
  struct WarBoardPieceData_o *v62; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+20h] [xbp-30h]

  v8 = this;
  if ( (byte_4389275 & 1) == 0 )
  {
    sub_B775C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    this = (WarBoardPieceData_SaveData_o *)sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4389275 = 1;
  }
  owner = v8->fields.owner;
  if ( owner )
  {
    owner->fields._breakPoint_k__BackingField = v8->fields.breakPoint;
    v10 = v8->fields.owner;
    if ( !v10 )
      goto LABEL_62;
    v10->fields._nowSquareIndex_k__BackingField = v8->fields.squareIndex;
    v11 = v8->fields.owner;
    if ( !v11 )
      goto LABEL_62;
    v11->fields._currentActionCount_k__BackingField = v8->fields.actionCount;
    v12 = v8->fields.owner;
    if ( !v12 )
      goto LABEL_62;
    v12->fields._attackCount_k__BackingField = v8->fields.attackCount;
    this = (WarBoardPieceData_SaveData_o *)v8->fields.owner;
    if ( !this )
      goto LABEL_62;
    prevAiRoute = (System_Int32_array **)v8->fields.prevAiRoute;
    *(_QWORD *)&this[1].fields.pieceIndex = prevAiRoute;
    sub_B77560((BattleServantConfConponent_o *)&this[1].fields.pieceIndex, prevAiRoute, v2, v3, v4, v5, v6, v7);
    v14 = v8->fields.owner;
    if ( !v14 )
      goto LABEL_62;
    v14->fields._entryTurn_k__BackingField = v8->fields.entryTurn;
    v15 = v8->fields.owner;
    if ( !v15 )
      goto LABEL_62;
    v15->fields._StageReinfoId_k__BackingField = v8->fields.stageReinforcementId;
    v16 = v8->fields.owner;
    if ( !v16 )
      goto LABEL_62;
    v16->fields._ReinfoIndex_k__BackingField = v8->fields.reinforcementIndex;
    v17 = v8->fields.owner;
    if ( !v17 )
      goto LABEL_62;
    v17->fields._overwriteActionType_k__BackingField = v8->fields.overwriteActionType;
    v18 = v8->fields.owner;
    if ( !v18 )
      goto LABEL_62;
    v18->fields._overwriteAiId_k__BackingField = v8->fields.overwriteAiId;
    this = (WarBoardPieceData_SaveData_o *)v8->fields.owner;
    if ( !this )
      goto LABEL_62;
    this = (WarBoardPieceData_SaveData_o *)WarBoardPieceData__get_HasCost((WarBoardPieceData_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v19 = v8->fields.owner;
      if ( !v19 )
        goto LABEL_62;
      this = (WarBoardPieceData_SaveData_o *)v19->fields._Cost_k__BackingField;
      if ( !this )
        goto LABEL_62;
      WarBoardCost__UpdateCurrentPointBySaveData((WarBoardCost_o *)this, v8->fields.currentActionPoint, 0LL);
    }
    this = (WarBoardPieceData_SaveData_o *)v8->fields.owner;
    if ( !this )
      goto LABEL_62;
    this = (WarBoardPieceData_SaveData_o *)WarBoardPieceData__get_isMaster((WarBoardPieceData_o *)this, 0LL);
    v26 = v8->fields.owner;
    if ( !v26 )
      goto LABEL_62;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      serverMasterData_k__BackingField = v26->fields._serverMasterData_k__BackingField;
      if ( serverMasterData_k__BackingField )
      {
        serverMasterData_k__BackingField->fields.currentLimitActionPoint = v8->fields.actionCount;
        v28 = v8->fields.owner;
        if ( v28 )
        {
          v29 = v28->fields._serverMasterData_k__BackingField;
          if ( v29 )
          {
            v29->fields.squareIndex = v8->fields.squareIndex;
            v30 = v8->fields.owner;
            if ( v30 )
            {
              v31 = v30->fields._serverMasterData_k__BackingField;
              if ( v31 )
              {
                v31->fields.currentForceActionPoint = v8->fields.currentForceActionPoint;
                v32 = v8->fields.owner;
                if ( v32 )
                {
                  v33 = v32->fields._serverMasterData_k__BackingField;
                  if ( v33 )
                  {
                    v33->fields.attackCount = v8->fields.attackCount;
                    v34 = v8->fields.owner;
                    if ( v34 )
                    {
                      v35 = v34->fields._serverMasterData_k__BackingField;
                      if ( v35 )
                      {
                        v35->fields.currentPieceActionPoint = v8->fields.currentActionPoint;
                        v36 = v8->fields.owner;
                        if ( v36 )
                        {
                          v37 = v36->fields._serverMasterData_k__BackingField;
                          if ( v37 )
                          {
                            v37->fields.defeatPoint = v8->fields.breakPoint;
                            return;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LABEL_62:
        sub_B7769C(this, method);
      }
    }
    else
    {
      serverServantData = v26->fields.serverServantData;
      if ( serverServantData )
      {
        serverServantData->fields.currentActionPoint = v8->fields.actionCount;
        v39 = v8->fields.owner;
        if ( !v39 )
          goto LABEL_62;
        v40 = v39->fields.serverServantData;
        if ( !v40 )
          goto LABEL_62;
        v40->fields.squareIndex = v8->fields.squareIndex;
        v41 = v8->fields.owner;
        if ( !v41 )
          goto LABEL_62;
        v42 = v41->fields.serverServantData;
        if ( !v42 )
          goto LABEL_62;
        buffSave = (System_Int32_array **)v8->fields.buffSave;
        v42->fields.buffDataSave = (struct BattleBuffData_SaveData_o *)buffSave;
        sub_B77560((BattleServantConfConponent_o *)&v42->fields.buffDataSave, buffSave, v20, v21, v22, v23, v24, v25);
        v44 = v8->fields.owner;
        if ( !v44 )
          goto LABEL_62;
        v45 = v44->fields.serverServantData;
        if ( !v45 )
          goto LABEL_62;
        v45->fields.attackCount = v8->fields.attackCount;
        v46 = v8->fields.owner;
        if ( !v46 )
          goto LABEL_62;
        v47 = v46->fields.serverServantData;
        if ( !v47 )
          goto LABEL_62;
        v47->fields.currentHp = v8->fields.hp;
        v48 = v8->fields.owner;
        if ( !v48 )
          goto LABEL_62;
        v49 = v48->fields.serverServantData;
        if ( !v49 )
          goto LABEL_62;
        v49->fields.currentNp = v8->fields.np;
        v50 = v8->fields.owner;
        if ( !v50 )
          goto LABEL_62;
        v51 = v50->fields.serverServantData;
        if ( !v51 )
          goto LABEL_62;
        v51->fields.nextNpTurn = v8->fields.tdTurn;
        v52 = v8->fields.owner;
        if ( !v52 )
          goto LABEL_62;
        v53 = v52->fields.serverServantData;
        if ( !v53 )
          goto LABEL_62;
        v53->fields.criticalStars = v8->fields.criticalStars;
        v54 = v8->fields.owner;
        if ( !v54 )
          goto LABEL_62;
        v55 = v54->fields.serverServantData;
        if ( !v55 )
          goto LABEL_62;
        v55->fields.currentPieceActionPoint = v8->fields.currentActionPoint;
        v56 = v8->fields.owner;
        if ( !v56 )
          goto LABEL_62;
        v57 = v56->fields.serverServantData;
        if ( !v57 )
          goto LABEL_62;
        v57->fields.defeatPoint = v8->fields.breakPoint;
        this = (WarBoardPieceData_SaveData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        v58 = v8->fields.owner;
        if ( !v58 )
          goto LABEL_62;
        v59 = v58->fields.serverServantData;
        if ( !v59 )
          goto LABEL_62;
        v60 = *(_OWORD *)&v59->fields.id.fields.fakeValue;
        v61 = this;
        *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)&v59->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v64.fields.fakeValue = v60;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v63 = v64;
        this = (WarBoardPieceData_SaveData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_45429112(
                                                 &v63,
                                                 0LL);
        if ( !v61 )
          goto LABEL_62;
        this = (WarBoardPieceData_SaveData_o *)WarBoardManager__GetBattleServant(
                                                 (WarBoardManager_o *)v61,
                                                 (int64_t)this,
                                                 0LL);
        v62 = v8->fields.owner;
        if ( !v62 )
          goto LABEL_62;
        method = (const MethodInfo *)this;
        this = (WarBoardPieceData_SaveData_o *)v62->fields.serverServantData;
        if ( !this )
          goto LABEL_62;
        WarBoardUserServantData__SetBattleServantData(
          (WarBoardUserServantData_o *)this,
          (BattleServantData_o *)method,
          0LL);
      }
    }
  }
}


void __fastcall WarBoardPieceData_SaveData__LoadOverwriteData(
        WarBoardPieceData_SaveData_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *owner; // x8
  struct WarBoardPieceData_o *v3; // x8

  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields._overwriteActionType_k__BackingField = this->fields.overwriteActionType;
    v3 = this->fields.owner;
    if ( !v3 )
      sub_B7769C(this, method);
    v3->fields._overwriteAiId_k__BackingField = this->fields.overwriteAiId;
  }
}


void __fastcall WarBoardPieceData_SaveData__Save(WarBoardPieceData_SaveData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceData_o *owner; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct WarBoardPieceData_o *v10; // x8
  struct WarBoardCost_o *Cost_k__BackingField; // x8
  int32_t CurrentActionPoint_k__BackingField; // w8
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct WarBoardPieceData_o *v19; // x8
  struct WarBoardPieceData_RouteSaveData_o *PrevAiRoute_k__BackingField; // x1
  struct WarBoardPieceData_o *v21; // x8
  struct WarBoardUserServantData_o *serverServantData; // x9
  struct WarBoardUserServantData_o *v23; // x9
  struct WarBoardUserServantData_o *v24; // x9
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  struct BattleBuffData_SaveData_o *SaveData; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  struct WarBoardPieceData_o *v33; // x8
  struct WarBoardPieceData_o *v34; // x8
  struct BattleServantData_o *v35; // x9
  struct BattleServantData_o *v36; // x8
  struct WarBoardPieceData_o *v37; // x8
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8

  owner = this->fields.owner;
  if ( !owner )
    goto LABEL_28;
  this->fields.forceId = owner->fields._forceId_k__BackingField;
  this->fields.groupId = owner->fields._groupId_k__BackingField;
  this->fields.pieceIndex = owner->fields._index_k__BackingField;
  this->fields.breakPoint = owner->fields._breakPoint_k__BackingField;
  this->fields.squareIndex = owner->fields._nowSquareIndex_k__BackingField;
  this->fields.actionCount = owner->fields._currentActionCount_k__BackingField;
  this->fields.attackCount = owner->fields._attackCount_k__BackingField;
  owner = (struct WarBoardPieceData_o *)WarBoardPieceData__get_HasCost(owner, 0LL);
  if ( ((unsigned __int8)owner & 1) != 0 )
  {
    v10 = this->fields.owner;
    if ( !v10 )
      goto LABEL_28;
    Cost_k__BackingField = v10->fields._Cost_k__BackingField;
    if ( !Cost_k__BackingField )
      goto LABEL_28;
    CurrentActionPoint_k__BackingField = Cost_k__BackingField->fields._CurrentActionPoint_k__BackingField;
  }
  else
  {
    CurrentActionPoint_k__BackingField = 0;
  }
  this->fields.buffSave = 0LL;
  this->fields.consumedActionPointDateTime = 0;
  this->fields.currentActionPoint = CurrentActionPoint_k__BackingField;
  this->fields.consumedRecoverDonotActCostDateTime = 0;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.buffSave, 0LL, v4, v5, v6, v7, v8, v9);
  v19 = this->fields.owner;
  this->fields.currentForceActionPoint = 0;
  if ( !v19 )
    goto LABEL_28;
  PrevAiRoute_k__BackingField = v19->fields._PrevAiRoute_k__BackingField;
  this->fields.prevAiRoute = PrevAiRoute_k__BackingField;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.prevAiRoute,
    (System_Int32_array **)PrevAiRoute_k__BackingField,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  owner = this->fields.owner;
  if ( !owner )
    goto LABEL_28;
  this->fields.entryTurn = owner->fields._entryTurn_k__BackingField;
  this->fields.stageReinforcementId = owner->fields._StageReinfoId_k__BackingField;
  this->fields.reinforcementIndex = owner->fields._ReinfoIndex_k__BackingField;
  this->fields.overwriteActionType = owner->fields._overwriteActionType_k__BackingField;
  this->fields.overwriteAiId = owner->fields._overwriteAiId_k__BackingField;
  owner = (struct WarBoardPieceData_o *)WarBoardPieceData__get_isServant(owner, 0LL);
  v21 = this->fields.owner;
  if ( !v21 )
    goto LABEL_28;
  if ( ((unsigned __int8)owner & 1) != 0 )
  {
    serverServantData = v21->fields.serverServantData;
    if ( serverServantData )
    {
      this->fields.consumedActionPointDateTime = serverServantData->fields.consumedActionPointDateTime;
      v23 = v21->fields.serverServantData;
      if ( !v23 )
        goto LABEL_28;
      this->fields.criticalStars = v23->fields.criticalStars;
      v24 = v21->fields.serverServantData;
      if ( !v24 )
        goto LABEL_28;
      this->fields.consumedRecoverDonotActCostDateTime = v24->fields.consumedRecoverDonotActCostDateTime;
    }
    battleServant_k__BackingField = v21->fields._battleServant_k__BackingField;
    if ( battleServant_k__BackingField )
    {
      owner = (struct WarBoardPieceData_o *)battleServant_k__BackingField->fields.buffData;
      if ( owner )
      {
        SaveData = BattleBuffData__getSaveData((BattleBuffData_o *)owner, 0LL);
        this->fields.buffSave = SaveData;
        sub_B77560(
          (BattleServantConfConponent_o *)&this->fields.buffSave,
          (System_Int32_array **)SaveData,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
        v33 = this->fields.owner;
        if ( v33 )
        {
          owner = (struct WarBoardPieceData_o *)v33->fields._battleServant_k__BackingField;
          if ( owner )
          {
            owner = (struct WarBoardPieceData_o *)((__int64 (__fastcall *)(struct WarBoardPieceData_o *, Il2CppMethodPointer))owner->klass->vtable._9_get_AiTargetSortSecondIndex.method)(
                                                    owner,
                                                    owner->klass->vtable._10_GetIndividuality.methodPtr);
            v34 = this->fields.owner;
            this->fields.hp = (int)owner;
            if ( v34 )
            {
              v35 = v34->fields._battleServant_k__BackingField;
              if ( v35 )
              {
                this->fields.np = v35->fields.np;
                v36 = v34->fields._battleServant_k__BackingField;
                if ( v36 )
                {
                  this->fields.tdTurn = v36->fields.nexttpturn;
                  return;
                }
              }
            }
          }
        }
      }
LABEL_28:
      sub_B7769C(owner, method);
    }
  }
  else
  {
    owner = (struct WarBoardPieceData_o *)WarBoardPieceData__get_isMaster(this->fields.owner, 0LL);
    if ( ((unsigned __int8)owner & 1) != 0 )
    {
      v37 = this->fields.owner;
      if ( !v37 )
        goto LABEL_28;
      serverMasterData_k__BackingField = v37->fields._serverMasterData_k__BackingField;
      if ( serverMasterData_k__BackingField )
        this->fields.currentForceActionPoint = serverMasterData_k__BackingField->fields.currentForceActionPoint;
    }
  }
}


void __fastcall WarBoardPieceData_SaveData__SetOwner(
        WarBoardPieceData_SaveData_o *this,
        WarBoardData_o *data,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *Piece; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct WarBoardPieceData_o *owner; // x0

  if ( !data )
    sub_B7769C(this, 0LL);
  Piece = WarBoardData__GetPiece(data, this->fields.forceId, this->fields.groupId, this->fields.pieceIndex, 0, 0LL);
  this->fields.owner = Piece;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.owner, (System_Int32_array **)Piece, v5, v6, v7, v8, v9, v10);
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields.localSaveData = this;
    sub_B77560(
      (BattleServantConfConponent_o *)&owner->fields.localSaveData,
      (System_Int32_array **)this,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
}


void __fastcall WarBoardPieceData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_4389272 & 1) == 0 )
  {
    sub_B775C4(&WarBoardPieceData___c_TypeInfo);
    byte_4389272 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(WarBoardPieceData___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardPieceData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall WarBoardPieceData___c___ctor(WarBoardPieceData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WarBoardPieceData___c___GetBuffTypesFromConstantStr_b__336_0(
        WarBoardPieceData___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x;
}


void __fastcall WarBoardPieceData___c__DisplayClass219_0___ctor(
        WarBoardPieceData___c__DisplayClass219_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


WarBoardWallData_o *__fastcall WarBoardPieceData___c__DisplayClass219_0___HasVitalityToDoAnyActions_b__0(
        WarBoardPieceData___c__DisplayClass219_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  WarBoardData_o *warBoardData; // x0

  warBoardData = this->fields.warBoardData;
  if ( !warBoardData )
    sub_B7769C(0LL, x);
  return WarBoardData__GetWall(warBoardData, x, 0, 0LL);
}


void __fastcall WarBoardPieceData___c__DisplayClass312_0___ctor(
        WarBoardPieceData___c__DisplayClass312_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardPieceData___c__DisplayClass312_0___UpdateFromServerData_b__2(
        WarBoardPieceData___c__DisplayClass312_0_o *this,
        const MethodInfo *method)
{
  return this->fields.popupClose;
}


void __fastcall WarBoardPieceData___c__DisplayClass312_0___UpdateFromServerData_b__3(
        WarBoardPieceData___c__DisplayClass312_0_o *this,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v4; // x1
  System_Action_bool__o *_9__4; // x22
  WarBoardManager_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_4389273 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Action_bool___ctor__);
    sub_B775C4(&System_Action_bool__TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&Method_WarBoardPieceData___c__DisplayClass312_0__UpdateFromServerData_b__4__);
    byte_4389273 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__4 = this->fields.__9__4;
  v6 = (WarBoardManager_o *)Instance;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_bool__o *)sub_B77694(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_WarBoardPieceData___c__DisplayClass312_0__UpdateFromServerData_b__4__,
      (const MethodInfo_269C920 *)Method_System_Action_bool___ctor__);
    this->fields.__9__4 = _9__4;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.__9__4,
      (System_Int32_array **)_9__4,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  if ( !v6 )
    sub_B7769C(Instance, v4);
  WarBoardManager__ShowActionCountDecreaseNoticePopup(v6, _9__4, 0LL);
}


void __fastcall WarBoardPieceData___c__DisplayClass312_0___UpdateFromServerData_b__4(
        WarBoardPieceData___c__DisplayClass312_0_o *this,
        bool ok,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v5; // x1
  System_Action_o *_9__5; // x22
  WarBoardManager_o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4389274 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_B775C4(&Method_WarBoardPieceData___c__DisplayClass312_0__UpdateFromServerData_b__5__);
    byte_4389274 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__5 = this->fields.__9__5;
  v7 = (WarBoardManager_o *)Instance;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)this,
      Method_WarBoardPieceData___c__DisplayClass312_0__UpdateFromServerData_b__5__,
      0LL);
    this->fields.__9__5 = _9__5;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.__9__5,
      (System_Int32_array **)_9__5,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  if ( !v7 )
    sub_B7769C(Instance, v5);
  WarBoardManager__HideActionCountDecreaseNoticePopup(v7, _9__5, 0LL);
}


void __fastcall WarBoardPieceData___c__DisplayClass312_0___UpdateFromServerData_b__5(
        WarBoardPieceData___c__DisplayClass312_0_o *this,
        const MethodInfo *method)
{
  this->fields.popupClose = 1;
}