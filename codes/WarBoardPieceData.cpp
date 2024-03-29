void __fastcall WarBoardPieceData___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  float v2; // s4
  float v3; // s5
  float v4; // s6
  float v5; // s7
  struct WarBoardPieceData_StaticFields v6; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_421337C & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardPieceData_TypeInfo, v1);
    byte_421337C = 1;
  }
  v7.fields.r = 0.05;
  v7.fields.a = 1.0;
  v7.fields.g = 0.05;
  v7.fields.b = 0.05;
  v6 = (struct WarBoardPieceData_StaticFields)0LL;
  UnityEngine_Color___ctor(v7, v2, v3, v4, v5, (const MethodInfo *)&v6);
  *WarBoardPieceData_TypeInfo->static_fields = v6;
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  WarBoardPieceData_PieceStatusCache_o *v27; // x27
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  int64_t Master_WarQuestSelectionMaster; // x0
  int32_t pieceIndex; // w8
  int32_t forceId; // w28
  int32_t groupId; // w21
  int32_t v38; // w27
  int32_t squareIndex; // w8
  struct System_Int32_array *Individuality; // x0
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  int32_t breakPoint; // w8
  int32_t restrictionId; // w8
  struct BattleServantData_o **p_battleServant_k__BackingField; // x25
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  const MethodInfo *v56; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  int32_t TurnCount; // w0
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x8
  WarBoardStagePieceDetailEntity_o *v65; // x8
  int32_t type_k__BackingField; // w8
  struct WarBoardUserMasterData_o **p_serverMasterData_k__BackingField; // x27
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  WarBoardActionPointClassMaster_o *v69; // x26
  const MethodInfo *v70; // x1
  WarBoardActionPointClassEntity_o *MasterEntityFromStageId; // x0
  struct WarBoardCost_o *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  struct WarBoardUserMasterData_o *v79; // x8
  struct WarBoardUserMasterData_o *v80; // x8
  int32_t defeatPoint; // w8
  WebViewManager_o *Instance; // x0
  __int128 v83; // q1
  WarBoardManager_o *v84; // x26
  struct BattleServantData_o *BattleServant; // x0
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_String_array **v92; // x2
  System_String_array **v93; // x3
  System_Boolean_array **v94; // x4
  System_Int32_array **v95; // x5
  System_Int32_array *v96; // x6
  System_Int32_array *v97; // x7
  WarBoardActionPointClassMaster_o *v98; // x26
  const MethodInfo *v99; // x1
  WarBoardActionPointEntity_o *v100; // x27
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  struct WarBoardCost_o *v102; // x0
  System_String_array **v103; // x2
  System_String_array **v104; // x3
  System_Boolean_array **v105; // x4
  System_Int32_array **v106; // x5
  System_Int32_array *v107; // x6
  System_Int32_array *v108; // x7
  int32_t v109; // w8
  int32_t forceId_k__BackingField; // w8
  int64_t userEquipId; // x8
  __int64 v112; // x20
  __int64 v113; // x20
  __int64 v114; // x20
  __int64 v115; // x21
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t npcId; // x8
  __int64 v118; // x8
  int64_t npcSvtEquipId; // x8
  __int64 v120; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v122; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v123; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v124; // 0:x0.16

  if ( (byte_4213360 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEquipMaster___, layout);
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___, v16);
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___, v17);
    sub_B0D8A4(&DataManager_TypeInfo, v18);
    sub_B0D8A4(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__, v20);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
    sub_B0D8A4(&WarBoardPieceData_PieceStatusCache_TypeInfo, v23);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v24);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v25);
    sub_B0D8A4(&WarBoardPieceData_TypeInfo, v26);
    byte_4213360 = 1;
  }
  v27 = (WarBoardPieceData_PieceStatusCache_o *)sub_B0D974(
                                                  WarBoardPieceData_PieceStatusCache_TypeInfo,
                                                  layout,
                                                  servantData);
  WarBoardPieceData_PieceStatusCache___ctor(v27, 0LL);
  this->fields.statusCache = v27;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.statusCache,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
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
  v38 = layout->fields.pieceIndex;
  this->fields._index_k__BackingField = v38;
  if ( (BYTE3(WarBoardPieceData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPieceData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo);
  }
  this->fields._uniqueIndex_k__BackingField = (forceId << 24) | ((unsigned __int8)groupId << 16) | (unsigned __int16)v38;
  squareIndex = layout->fields.squareIndex;
  this->fields._nowSquareIndex_k__BackingField = squareIndex;
  this->fields._PutSquareIndex_k__BackingField = squareIndex;
  Individuality = WarBoardStageLayoutEntity__GetIndividuality(layout, 0LL);
  this->fields._individuality_k__BackingField = Individuality;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._individuality_k__BackingField,
    (System_Int32_array **)Individuality,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._battleServant_k__BackingField,
    0LL,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  this->fields._isDead_k__BackingField = 0;
  this->fields._isEditing_k__BackingField = 0;
  this->fields._isNotIncludeWin_k__BackingField = 0;
  this->fields._roleType_k__BackingField = 0;
  this->fields._IsDispConsumedPieceActionPoint_k__BackingField = 0;
  Master_WarQuestSelectionMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_91;
  if ( *(_QWORD *)(Master_WarQuestSelectionMaster + 432) )
  {
    Master_WarQuestSelectionMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    v65 = this->fields.stagePieceDetailEntity;
    this->fields._roleType_k__BackingField = Master_WarQuestSelectionMaster;
    if ( !v65 )
      goto LABEL_91;
    this->fields._isNotIncludeWin_k__BackingField = WarBoardStagePieceDetailEntity__IsNotIncludeWin(v65, 0LL);
  }
  type_k__BackingField = this->fields._type_k__BackingField;
  if ( masterData && type_k__BackingField == 1 )
  {
    this->fields._serverMasterData_k__BackingField = masterData;
    p_serverMasterData_k__BackingField = &this->fields._serverMasterData_k__BackingField;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields._serverMasterData_k__BackingField,
      (System_Int32_array **)masterData,
      v57,
      v58,
      v59,
      v60,
      v61,
      v62);
    serverMasterData_k__BackingField = this->fields._serverMasterData_k__BackingField;
    if ( !serverMasterData_k__BackingField )
      goto LABEL_91;
    this->fields._nowSquareIndex_k__BackingField = serverMasterData_k__BackingField->fields.squareIndex;
    this->fields._limitActionCount_k__BackingField = serverMasterData_k__BackingField->fields.limitActionPoint;
    this->fields._currentActionCount_k__BackingField = serverMasterData_k__BackingField->fields.currentLimitActionPoint;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v69 = (WarBoardActionPointClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    Master_WarQuestSelectionMaster = (int64_t)WarBoardPieceData__get_ActionPointEntity(this, v70);
    if ( !v69 )
      goto LABEL_91;
    MasterEntityFromStageId = WarBoardActionPointClassMaster__GetMasterEntityFromStageId(
                                v69,
                                (WarBoardActionPointEntity_o *)Master_WarQuestSelectionMaster,
                                0LL);
    v72 = WarBoardCost__Create(MasterEntityFromStageId, this->fields.stagePieceDetailEntity, 0LL, 0LL);
    this->fields._Cost_k__BackingField = v72;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields._Cost_k__BackingField,
      (System_Int32_array **)v72,
      v73,
      v74,
      v75,
      v76,
      v77,
      v78);
    v79 = this->fields._serverMasterData_k__BackingField;
    if ( !v79 )
      goto LABEL_91;
    Master_WarQuestSelectionMaster = (int64_t)this->fields._Cost_k__BackingField;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_91;
    WarBoardCost__UpdateCurrentPointByServerData(
      (WarBoardCost_o *)Master_WarQuestSelectionMaster,
      v79->fields.currentPieceActionPoint,
      0LL);
    v80 = *p_serverMasterData_k__BackingField;
    if ( !*p_serverMasterData_k__BackingField )
      goto LABEL_91;
    this->fields._attackCount_k__BackingField = v80->fields.attackCount;
    defeatPoint = v80->fields.defeatPoint;
    this->fields._breakPoint_k__BackingField = defeatPoint;
    if ( defeatPoint <= 0 )
LABEL_45:
      this->fields._isDead_k__BackingField = 1;
  }
  else if ( servantData && !type_k__BackingField )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v83 = *(_OWORD *)&servantData->fields.id.fields.fakeValue;
    v84 = (WarBoardManager_o *)Instance;
    *(_OWORD *)&v123.fields.currentCryptoKey = *(_OWORD *)&servantData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v123.fields.fakeValue = v83;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v122 = v123;
    Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v122, 0LL);
    if ( !v84 )
      goto LABEL_91;
    BattleServant = WarBoardManager__GetBattleServant(v84, Master_WarQuestSelectionMaster, 0LL);
    this->fields._battleServant_k__BackingField = BattleServant;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields._battleServant_k__BackingField,
      (System_Int32_array **)BattleServant,
      v86,
      v87,
      v88,
      v89,
      v90,
      v91);
    this->fields.serverServantData = servantData;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.serverServantData,
      (System_Int32_array **)servantData,
      v92,
      v93,
      v94,
      v95,
      v96,
      v97);
    this->fields._nowSquareIndex_k__BackingField = servantData->fields.squareIndex;
    this->fields._limitActionCount_k__BackingField = servantData->fields.limitActionPoint;
    this->fields._currentActionCount_k__BackingField = servantData->fields.currentActionPoint;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v98 = (WarBoardActionPointClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    Master_WarQuestSelectionMaster = (int64_t)WarBoardPieceData__get_ActionPointEntity(this, v99);
    if ( !this->fields._battleServant_k__BackingField )
      goto LABEL_91;
    v100 = (WarBoardActionPointEntity_o *)Master_WarQuestSelectionMaster;
    Master_WarQuestSelectionMaster = BattleServantData__getClassId(this->fields._battleServant_k__BackingField, 0LL);
    if ( !v98 )
      goto LABEL_91;
    EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                    v98,
                                    v100,
                                    Master_WarQuestSelectionMaster,
                                    0LL);
    v102 = WarBoardCost__Create(EntityFromActionPointEntity, this->fields.stagePieceDetailEntity, 0LL, 0LL);
    this->fields._Cost_k__BackingField = v102;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields._Cost_k__BackingField,
      (System_Int32_array **)v102,
      v103,
      v104,
      v105,
      v106,
      v107,
      v108);
    Master_WarQuestSelectionMaster = (int64_t)this->fields._Cost_k__BackingField;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_91;
    WarBoardCost__UpdateCurrentPointByServerData(
      (WarBoardCost_o *)Master_WarQuestSelectionMaster,
      servantData->fields.currentPieceActionPoint,
      0LL);
    this->fields._attackCount_k__BackingField = servantData->fields.attackCount;
    v109 = servantData->fields.defeatPoint;
    this->fields._breakPoint_k__BackingField = v109;
    if ( (v109 & 0x80000000) != 0 )
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
                                                  (const MethodInfo_2E284C4 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    }
    else
    {
      Master_WarQuestSelectionMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
      sub_B0D97C(Master_WarQuestSelectionMaster);
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
    v112 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v112 + 306) & 1) == 0 )
      sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v113 = **(_QWORD **)(v112 + 192);
    if ( (*(_BYTE *)(v113 + 306) & 1) == 0 )
      sub_AA65A4(v113);
    Master_WarQuestSelectionMaster = **(_QWORD **)(v113 + 184);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_91;
    Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)Master_WarQuestSelectionMaster,
                                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEquipMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_91;
    Master_WarQuestSelectionMaster = (int64_t)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Master_WarQuestSelectionMaster,
                                                this->fields._CurrentUserEquipId_k__BackingField,
                                                (const MethodInfo_2669DFC *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_91;
    v115 = *(_QWORD *)(Master_WarQuestSelectionMaster + 32);
    v114 = *(_QWORD *)(Master_WarQuestSelectionMaster + 40);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v124.fields.currentCryptoKey = v115;
    *(_QWORD *)&v124.fields.fakeValue = v114;
    this->fields._iconId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                             v124,
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
                                                      (const MethodInfo_2E284C4 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
        }
        else
        {
          Master_WarQuestSelectionMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
          v118 = *(_QWORD *)(Master_WarQuestSelectionMaster + 48);
          if ( !v118 )
            goto LABEL_91;
          if ( *(_DWORD *)(v118 + 24) <= (unsigned int)npcIdx )
          {
            v120 = sub_B0D9A8(Master_WarQuestSelectionMaster);
            sub_B0D948(v120, 0LL);
          }
          npcId = *(_QWORD *)(v118 + 8LL * npcIdx + 32);
        }
        this->fields._npcId_k__BackingField = npcId;
        npcSvtEquipId = servantData->fields.npcSvtEquipId;
        this->fields._isEditing_k__BackingField = 1;
        this->fields._npcEquipId_k__BackingField = npcSvtEquipId;
      }
LABEL_89:
      WarBoardPieceData__SetServantIconData(this, v56);
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


void __fastcall WarBoardPieceData___ctor_22019448(
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  WarBoardPieceData_PieceStatusCache_o *v24; // x27
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  int64_t Instance; // x0
  int32_t id; // w8
  int32_t v33; // w8
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
  WebViewManager_o *v45; // x0
  __int128 v46; // q1
  WarBoardManager_o *v47; // x24
  struct BattleServantData_o *BattleServant; // x0
  struct BattleServantData_o **p_battleServant_k__BackingField; // x24
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  int32_t v62; // w8
  WarBoardActionPointClassMaster_o *Master_WarQuestSelectionMaster; // x25
  const MethodInfo *v64; // x1
  WarBoardActionPointEntity_o *v65; // x26
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  struct WarBoardCost_o *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  const MethodInfo *v74; // x1
  int32_t forceId_k__BackingField; // w9
  int defeatPoint; // w8
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t npcId; // x8
  __int64 v79; // x8
  int64_t npcSvtEquipId; // x8
  __int64 v81; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+20h] [xbp-80h]
  int32_t value; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_4213361 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___, stageReinforcementsEntity);
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___, v17);
    sub_B0D8A4(&DataManager_TypeInfo, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__, v19);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20);
    sub_B0D8A4(&WarBoardPieceData_PieceStatusCache_TypeInfo, v21);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v22);
    sub_B0D8A4(&WarBoardPieceData_TypeInfo, v23);
    byte_4213361 = 1;
  }
  value = 0;
  v24 = (WarBoardPieceData_PieceStatusCache_o *)sub_B0D974(
                                                  WarBoardPieceData_PieceStatusCache_TypeInfo,
                                                  stageReinforcementsEntity,
                                                  reinfoEntity);
  WarBoardPieceData_PieceStatusCache___ctor(v24, 0LL);
  this->fields.statusCache = v24;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.statusCache,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !stageReinforcementsEntity )
    goto LABEL_57;
  this->fields.stageId = stageReinforcementsEntity->fields.warBoardStageId;
  id = stageReinforcementsEntity->fields.id;
  this->fields._ReinfoIndex_k__BackingField = reinfoIndex;
  this->fields._StageReinfoId_k__BackingField = id;
  if ( !reinfoEntity )
    goto LABEL_57;
  v33 = reinfoEntity->fields.id;
  this->fields._type_k__BackingField = 0;
  this->fields._ReinfoId_k__BackingField = v33;
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
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  if ( *(_QWORD *)(Instance + 432) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  Instance = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
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
  v45 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v46 = *(_OWORD *)&servantData->fields.id.fields.fakeValue;
  v47 = (WarBoardManager_o *)v45;
  *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)&servantData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v83.fields.fakeValue = v46;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v82 = v83;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v82, 0LL);
  if ( !v47 )
    goto LABEL_57;
  BattleServant = WarBoardManager__GetBattleServant(v47, Instance, 0LL);
  this->fields._battleServant_k__BackingField = BattleServant;
  p_battleServant_k__BackingField = &this->fields._battleServant_k__BackingField;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._battleServant_k__BackingField,
    (System_Int32_array **)BattleServant,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  this->fields.serverServantData = servantData;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.serverServantData,
    (System_Int32_array **)servantData,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  v62 = servantData->fields.squareIndex;
  this->fields._nowSquareIndex_k__BackingField = v62;
  this->fields._PutSquareIndex_k__BackingField = v62;
  this->fields._limitActionCount_k__BackingField = servantData->fields.limitActionPoint;
  this->fields._currentActionCount_k__BackingField = servantData->fields.currentActionPoint;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardActionPointClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
  Instance = (int64_t)WarBoardPieceData__get_ActionPointEntity(this, v64);
  if ( !this->fields._battleServant_k__BackingField
    || (v65 = (WarBoardActionPointEntity_o *)Instance,
        Instance = BattleServantData__getClassId(this->fields._battleServant_k__BackingField, 0LL),
        !Master_WarQuestSelectionMaster)
    || (EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                        Master_WarQuestSelectionMaster,
                                        v65,
                                        Instance,
                                        0LL),
        v67 = WarBoardCost__Create(EntityFromActionPointEntity, this->fields.stagePieceDetailEntity, reinfoEntity, 0LL),
        this->fields._Cost_k__BackingField = v67,
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields._Cost_k__BackingField,
          (System_Int32_array **)v67,
          v68,
          v69,
          v70,
          v71,
          v72,
          v73),
        (Instance = (int64_t)this->fields._Cost_k__BackingField) == 0) )
  {
LABEL_57:
    sub_B0D97C(Instance);
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
                            (const MethodInfo_2E284C4 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    }
    else
    {
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    v79 = *(_QWORD *)(Instance + 48);
    if ( !v79 )
      goto LABEL_57;
    if ( *(_DWORD *)(v79 + 24) > (unsigned int)npcIdx )
    {
      npcId = *(_QWORD *)(v79 + 8LL * npcIdx + 32);
      goto LABEL_55;
    }
LABEL_58:
    v81 = sub_B0D9A8(Instance);
    sub_B0D948(v81, 0LL);
  }
LABEL_56:
  WarBoardPieceData__SetServantIconData(this, v74);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceData___ctor_22020696(
        WarBoardPieceData_o *this,
        int32_t stageId,
        WarBoardUserServantData_o *servantData,
        WarBoardPieceData_SaveData_o *saveData,
        System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *npcDict,
        int32_t npcIdx,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  WarBoardPieceData_PieceStatusCache_o *v22; // x25
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  int64_t Master_WarQuestSelectionMaster; // x0
  struct System_Int32_array *reinforcementsIds; // x8
  __int64 ReinfoIndex_k__BackingField; // x9
  WarBoardReinforcementsEntity_o *v32; // x8
  int32_t id; // w9
  int32_t forceId; // w26
  int32_t groupId; // w27
  int32_t pieceIndex; // w28
  int32_t squareIndex; // w9
  struct WarBoardStagePieceDetailEntity_o **p_stagePieceDetailEntity; // x24
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x8
  bool IsNotIncludeWin; // w8
  int32_t actionType; // w8
  __int128 v42; // q1
  WarBoardManager_o *v43; // x23
  struct BattleServantData_o *BattleServant; // x0
  struct BattleServantData_o **p_battleServant_k__BackingField; // x23
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  int32_t v58; // w8
  WarBoardActionPointClassMaster_o *v59; // x24
  const MethodInfo *v60; // x1
  WarBoardActionPointEntity_o *v61; // x25
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  struct WarBoardCost_o *v63; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  const MethodInfo *v70; // x1
  int32_t forceId_k__BackingField; // w9
  int defeatPoint; // w8
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t npcId; // x8
  __int64 v75; // x8
  int64_t npcSvtEquipId; // x8
  __int64 v77; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+20h] [xbp-90h]
  int32_t value; // [xsp+4Ch] [xbp-64h] BYREF
  WarBoardReinforcementsEntity_o *reinforcementsEntity; // [xsp+50h] [xbp-60h] BYREF
  WarBoardStageReinforcementsEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_4213362 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___, *(_QWORD *)&stageId);
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, v13);
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___, v14);
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___, v15);
    sub_B0D8A4(&DataManager_TypeInfo, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__, v17);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    sub_B0D8A4(&WarBoardPieceData_PieceStatusCache_TypeInfo, v19);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v20);
    sub_B0D8A4(&WarBoardPieceData_TypeInfo, v21);
    byte_4213362 = 1;
  }
  reinforcementsEntity = 0LL;
  entity = 0LL;
  value = 0;
  v22 = (WarBoardPieceData_PieceStatusCache_o *)sub_B0D974(
                                                  WarBoardPieceData_PieceStatusCache_TypeInfo,
                                                  *(_QWORD *)&stageId,
                                                  servantData);
  WarBoardPieceData_PieceStatusCache___ctor(v22, 0LL);
  this->fields.statusCache = v22;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.statusCache,
    (System_Int32_array **)v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.stageId = stageId;
  if ( !saveData )
    goto LABEL_58;
  this->fields._StageReinfoId_k__BackingField = saveData->fields.stageReinforcementId;
  this->fields._ReinfoIndex_k__BackingField = saveData->fields.reinforcementIndex;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_58;
  WarBoardStageReinforcementsMaster__TryGetEntity(
    (WarBoardStageReinforcementsMaster_o *)Master_WarQuestSelectionMaster,
    &entity,
    stageId,
    this->fields._StageReinfoId_k__BackingField,
    0LL);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
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
  v32 = reinforcementsEntity;
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
    v32 = reinforcementsEntity;
  }
  this->fields._uniqueIndex_k__BackingField = (forceId << 24) | ((unsigned __int8)groupId << 16) | (unsigned __int16)pieceIndex;
  squareIndex = saveData->fields.squareIndex;
  this->fields._nowSquareIndex_k__BackingField = squareIndex;
  this->fields._PutSquareIndex_k__BackingField = squareIndex;
  this->fields._overwriteActionType_k__BackingField = saveData->fields.overwriteActionType;
  this->fields._overwriteAiId_k__BackingField = saveData->fields.overwriteAiId;
  this->fields._entryTurn_k__BackingField = saveData->fields.entryTurn;
  if ( !v32 )
    goto LABEL_58;
  this->fields._breakPointMax_k__BackingField = v32->fields.breakPoint;
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
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
  Master_WarQuestSelectionMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !servantData )
    goto LABEL_58;
  v42 = *(_OWORD *)&servantData->fields.id.fields.fakeValue;
  v43 = (WarBoardManager_o *)Master_WarQuestSelectionMaster;
  *(_OWORD *)&v79.fields.currentCryptoKey = *(_OWORD *)&servantData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v79.fields.fakeValue = v42;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v78 = v79;
  Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v78, 0LL);
  if ( !v43 )
    goto LABEL_58;
  BattleServant = WarBoardManager__GetBattleServant(v43, Master_WarQuestSelectionMaster, 0LL);
  this->fields._battleServant_k__BackingField = BattleServant;
  p_battleServant_k__BackingField = &this->fields._battleServant_k__BackingField;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._battleServant_k__BackingField,
    (System_Int32_array **)BattleServant,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  this->fields.serverServantData = servantData;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.serverServantData,
    (System_Int32_array **)servantData,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  v58 = servantData->fields.squareIndex;
  this->fields._nowSquareIndex_k__BackingField = v58;
  this->fields._PutSquareIndex_k__BackingField = v58;
  this->fields._limitActionCount_k__BackingField = servantData->fields.limitActionPoint;
  this->fields._currentActionCount_k__BackingField = servantData->fields.currentActionPoint;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v59 = (WarBoardActionPointClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
  Master_WarQuestSelectionMaster = (int64_t)WarBoardPieceData__get_ActionPointEntity(this, v60);
  if ( !this->fields._battleServant_k__BackingField
    || (v61 = (WarBoardActionPointEntity_o *)Master_WarQuestSelectionMaster,
        Master_WarQuestSelectionMaster = BattleServantData__getClassId(this->fields._battleServant_k__BackingField, 0LL),
        !v59)
    || (EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                        v59,
                                        v61,
                                        Master_WarQuestSelectionMaster,
                                        0LL),
        v63 = WarBoardCost__Create(
                EntityFromActionPointEntity,
                this->fields.stagePieceDetailEntity,
                reinforcementsEntity,
                0LL),
        this->fields._Cost_k__BackingField = v63,
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields._Cost_k__BackingField,
          (System_Int32_array **)v63,
          v64,
          v65,
          v66,
          v67,
          v68,
          v69),
        (Master_WarQuestSelectionMaster = (int64_t)this->fields._Cost_k__BackingField) == 0) )
  {
LABEL_58:
    sub_B0D97C(Master_WarQuestSelectionMaster);
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
                                                  (const MethodInfo_2E284C4 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    }
    else
    {
      Master_WarQuestSelectionMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    v75 = *(_QWORD *)(Master_WarQuestSelectionMaster + 48);
    if ( !v75 )
      goto LABEL_58;
    if ( *(_DWORD *)(v75 + 24) > (unsigned int)npcIdx )
    {
      npcId = *(_QWORD *)(v75 + 8LL * npcIdx + 32);
      goto LABEL_56;
    }
LABEL_59:
    v77 = sub_B0D9A8(Master_WarQuestSelectionMaster);
    sub_B0D948(v77, 0LL);
  }
LABEL_57:
  WarBoardPieceData__SetServantIconData(this, v70);
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
    sub_B0D97C(Cost_k__BackingField);
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
    sub_B0D97C(0LL);
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
      sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Color_o v15; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  *(_QWORD *)&v15.fields.r = 0LL;
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
        v16.fields.r = 0.05;
        v16.fields.a = 1.0;
        v16.fields.g = 0.05;
        v16.fields.b = 0.05;
        UnityEngine_Color___ctor(v16, v3, v4, v5, v6, (const MethodInfo *)&v15);
        if ( !enemyIcon )
LABEL_6:
          sub_B0D97C(v10);
        UIWidget__set_color((UIWidget_o *)enemyIcon, v15, 0LL);
        g = v15.fields.g;
        r = v15.fields.r;
        a = v15.fields.a;
        b = v15.fields.b;
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
    sub_B0D97C(0LL);
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
      sub_B0D97C(Cost_k__BackingField);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(pieceComponent);
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

  if ( (byte_4213369 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Empty_int___, targetWall);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Contains_int___, v5);
    byte_4213369 = 1;
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
    sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v9 = *(_WORD *)(v8 + 306);
  }
  if ( (v9 & 0x400) != 0 )
  {
    v10 = *v7[6];
    if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
      sub_AA65A4(*v7[6]);
    if ( !*(_DWORD *)(v10 + 224) )
    {
      v11 = *v7[6];
      if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
        sub_AA65A4(*v7[6]);
      j_il2cpp_runtime_class_init_0(v11);
    }
  }
  v12 = *v7[6];
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_AA65A4(*v7[6]);
  wallEntity = targetWall->fields.wallEntity;
  if ( wallEntity )
  {
    wallEntity = (WarBoardStageWallEntity_o *)WarBoardStageWallEntity__GetCondAttackIndividuality(wallEntity, 0LL);
    v14 = wallEntity;
    if ( wallEntity )
      goto LABEL_19;
LABEL_28:
    sub_B0D97C(wallEntity);
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
          v20 = sub_B0D9A8(Individuality);
          sub_B0D948(v20, 0LL);
        }
        Individuality = (System_Int32_array *)System_Linq_Enumerable__Contains_int_(
                                                v17,
                                                *(&v14->fields.attackForceId + v18),
                                                (const MethodInfo_1B451E8 *)Method_System_Linq_Enumerable_Contains_int___);
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
  __int64 v3; // x1
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x8
  __int64 v5; // x11
  UnityEngine_Object_o *v6; // x19
  _BOOL8 v7; // x0

  if ( (byte_4213371 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    sub_B0D8A4(&WarBoardServantPieceComponent_TypeInfo, v3);
    byte_4213371 = 1;
  }
  pieceComponent = this->fields.pieceComponent;
  if ( pieceComponent
    && (v5 = *(&WarBoardServantPieceComponent_TypeInfo->_2.bitflags2 + 1),
        *(&pieceComponent->klass->_2.bitflags2 + 1) >= (unsigned int)v5) )
  {
    if ( (WarBoardServantPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[v5 - 1] == WarBoardServantPieceComponent_TypeInfo )
      v6 = (UnityEngine_Object_o *)this->fields.pieceComponent;
    else
      v6 = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v7 = UnityEngine_Object__op_Equality(v6, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !v6 )
      sub_B0D97C(v7);
    WarBoardServantPieceComponent__ClearPartyBuff((WarBoardServantPieceComponent_o *)v6, 0LL);
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields._PrevAiRoute_k__BackingField, 0LL, v2, v3, v4, v5, v6, v7);
}


System_Int32_array *__fastcall WarBoardPieceData__CreatePieceEventVals(
        WarBoardPieceData_o *this,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  il2cpp_array_size_t max_length; // w8
  __int64 v5; // x0

  if ( (byte_421337B & 1) == 0 )
  {
    sub_B0D8A4(&int___TypeInfo, method);
    byte_421337B = 1;
  }
  result = (System_Int32_array *)sub_B0D8BC(int___TypeInfo, 3LL);
  if ( !result )
    sub_B0D97C(0LL);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = this->fields._forceId_k__BackingField, max_length == 1)
    || (result->m_Items[2] = this->fields._groupId_k__BackingField, max_length <= 2) )
  {
    v5 = sub_B0D9A8(result);
    sub_B0D948(v5, 0LL);
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
    sub_B0D97C(0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  WarBoardManager_TaskList_o *v6; // x19
  unsigned int breakPoint_k__BackingField; // w22
  unsigned int v8; // w21
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  if ( (byte_421336C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardMessageMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v4);
    sub_B0D8A4(&WarBoardManager_TaskList_TypeInfo, v5);
    byte_421336C = 1;
  }
  v6 = (WarBoardManager_TaskList_o *)sub_B0D974(WarBoardManager_TaskList_TypeInfo, method, v2);
  WarBoardManager_TaskList___ctor(v6, 0LL);
  breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
  v8 = breakPoint_k__BackingField - 1;
  if ( (int)(breakPoint_k__BackingField - 1) < 1 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
    pieceComponent = this->fields.pieceComponent;
    if ( pieceComponent )
    {
      ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, _QWORD, _QWORD, __int64, Il2CppMethodPointer))pieceComponent->klass->vtable._31_OnBreak.method)(
        pieceComponent,
        breakPoint_k__BackingField,
        0LL,
        v6,
        v8,
        0LL,
        1LL,
        pieceComponent->klass->vtable._32_OnDead.methodPtr);
      pieceComponent = this->fields.pieceComponent;
      if ( pieceComponent )
      {
        ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, WarBoardManager_TaskList_o *, __int64, Il2CppMethodPointer))pieceComponent->klass->vtable._32_OnDead.method)(
          pieceComponent,
          0LL,
          v6,
          1LL,
          pieceComponent->klass->vtable._33_OnRevive.methodPtr);
        return v6;
      }
    }
LABEL_13:
    sub_B0D97C(pieceComponent);
  }
  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    goto LABEL_13;
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, _QWORD, _QWORD, __int64, Il2CppMethodPointer))pieceComponent->klass->vtable._31_OnBreak.method)(
    pieceComponent,
    breakPoint_k__BackingField,
    0LL,
    v6,
    v8,
    0LL,
    1LL,
    pieceComponent->klass->vtable._32_OnDead.methodPtr);
  return v6;
}


void __fastcall WarBoardPieceData__Deselect(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardData_o *pieceComponent; // x0
  WarBoardSquareData_o *Square; // x0

  if ( (byte_421336B & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_421336B = 1;
  }
  pieceComponent = (WarBoardData_o *)this->fields.pieceComponent;
  if ( !pieceComponent
    || (((void (__fastcall *)(WarBoardData_o *, Il2CppMethodPointer))pieceComponent->klass[1].vtable._0_Equals.method)(
          pieceComponent,
          pieceComponent->klass[1].vtable._1_Finalize.methodPtr),
        (pieceComponent = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (pieceComponent = (WarBoardData_o *)pieceComponent[1].fields.reinforcementsSaveList) == 0LL )
  {
    sub_B0D97C(pieceComponent);
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
      sub_B0D97C(0LL);
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
      sub_B0D97C(0LL);
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
      sub_B0D97C(0LL);
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
      sub_B0D97C(0LL);
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
    sub_B0D97C(Cost_k__BackingField);
  p_currentActionCount_k__BackingField = &v4->fields._CurrentActionPoint_k__BackingField;
  return *p_currentActionCount_k__BackingField;
}


BuffList_TYPE_array *__fastcall WarBoardPieceData__GetBuffTypesFromConstantStr(
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Int32_array *ValueAsIntArray; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  WarBoardPieceData___c_c *v13; // x0
  struct WarBoardPieceData___c_StaticFields *static_fields; // x8
  System_Func_int__BuffList_TYPE__o *_9__336_0; // x20
  Il2CppObject *v16; // x21
  struct WarBoardPieceData___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  BuffList_TYPE_array *result; // x0
  _QWORD **v26; // x20
  __int64 v27; // x19
  __int16 v28; // w8
  __int64 v29; // x19
  __int64 v30; // x19
  __int64 v31; // x19

  if ( (byte_4213379 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Empty_BuffList_TYPE___, method);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_int__BuffList_TYPE___, v3);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_BuffList_TYPE___, v4);
    sub_B0D8A4(&Method_System_Func_int__BuffList_TYPE___ctor__, v5);
    sub_B0D8A4(&System_Func_int__BuffList_TYPE__TypeInfo, v6);
    sub_B0D8A4(&Method_WarBoardPieceData___c__GetBuffTypesFromConstantStr_b__336_0__, v7);
    sub_B0D8A4(&WarBoardPieceData___c_TypeInfo, v8);
    byte_4213379 = 1;
  }
  ValueAsIntArray = ConstantStrMaster__GetValueAsIntArray(key, 0LL);
  if ( !ValueAsIntArray )
    goto LABEL_13;
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)ValueAsIntArray;
  v13 = WarBoardPieceData___c_TypeInfo;
  if ( (BYTE3(WarBoardPieceData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPieceData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceData___c_TypeInfo);
    v13 = WarBoardPieceData___c_TypeInfo;
  }
  static_fields = v13->static_fields;
  _9__336_0 = static_fields->__9__336_0;
  if ( !_9__336_0 )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = WarBoardPieceData___c_TypeInfo->static_fields;
    }
    v16 = (Il2CppObject *)static_fields->__9;
    _9__336_0 = (System_Func_int__BuffList_TYPE__o *)sub_B0D974(System_Func_int__BuffList_TYPE__TypeInfo, v10, v11);
    System_Func_int__BuffList_TYPE____ctor(
      _9__336_0,
      v16,
      Method_WarBoardPieceData___c__GetBuffTypesFromConstantStr_b__336_0__,
      (const MethodInfo_2613FE4 *)Method_System_Func_int__BuffList_TYPE___ctor__);
    v17 = WarBoardPieceData___c_TypeInfo->static_fields;
    v17->__9__336_0 = _9__336_0;
    sub_B0D840(
      (BattleServantConfConponent_o *)&v17->__9__336_0,
      (System_Int32_array **)_9__336_0,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BuffList_TYPE_(
                                                               v12,
                                                               (System_Func_TSource__TResult__o *)_9__336_0,
                                                               (const MethodInfo_1B50AAC *)Method_System_Linq_Enumerable_Select_int__BuffList_TYPE___);
  result = System_Linq_Enumerable__ToArray_BuffList_TYPE_(
             v24,
             (const MethodInfo_1B5617C *)Method_System_Linq_Enumerable_ToArray_BuffList_TYPE___);
  if ( !result )
  {
LABEL_13:
    v26 = (_QWORD **)Method_System_Array_Empty_BuffList_TYPE___;
    v27 = **((_QWORD **)Method_System_Array_Empty_BuffList_TYPE___ + 6);
    v28 = *(_WORD *)(v27 + 306);
    if ( (v28 & 1) == 0 )
    {
      sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_BuffList_TYPE___ + 6));
      v28 = *(_WORD *)(v27 + 306);
    }
    if ( (v28 & 0x400) != 0 )
    {
      v29 = *v26[6];
      if ( (*(_BYTE *)(v29 + 306) & 1) == 0 )
        sub_AA65A4(*v26[6]);
      if ( !*(_DWORD *)(v29 + 224) )
      {
        v30 = *v26[6];
        if ( (*(_BYTE *)(v30 + 306) & 1) == 0 )
          sub_AA65A4(*v26[6]);
        j_il2cpp_runtime_class_init_0(v30);
      }
    }
    v31 = *v26[6];
    if ( (*(_BYTE *)(v31 + 306) & 1) == 0 )
      sub_AA65A4(*v26[6]);
    return **(BuffList_TYPE_array ***)(v31 + 184);
  }
  return result;
}


int32_t __fastcall WarBoardPieceData__GetDeadEffectType(WarBoardPieceData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WarBoardReinforcementsMaster_o *Master_WarQuestSelectionMaster; // x0
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x0
  int32_t value; // [xsp+4h] [xbp-1Ch] BYREF
  WarBoardReinforcementsEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4213374 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    byte_4213374 = 1;
  }
  entity = 0LL;
  value = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
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
    sub_B0D97C(Master_WarQuestSelectionMaster);
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_int__o *v11; // x20
  BattleServantData_o *battleServant_k__BackingField; // x0
  bool IsIgnoreIndivUnreleasable; // w3
  bool IsIncludeIgnoreIndividuality; // w2
  bool v15; // w4
  System_Int32_array *ConcatServantAndBuffIndividualityies; // x0

  if ( (byte_421335B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__AddRange__, args, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v5, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v7, v8);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v9, v10);
    byte_421335B = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    args,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
  if ( battleServant_k__BackingField )
  {
    if ( args )
    {
      IsIgnoreIndivUnreleasable = args->fields.IsIgnoreIndivUnreleasable;
      IsIncludeIgnoreIndividuality = args->fields.IsIncludeIgnoreIndividuality;
      v15 = !args->fields.IsIncludePassiveIndividuality;
    }
    else
    {
      IsIncludeIgnoreIndividuality = 0;
      IsIgnoreIndivUnreleasable = 0;
      v15 = 0;
    }
    ConcatServantAndBuffIndividualityies = BattleServantData__getConcatServantAndBuffIndividualityies(
                                             battleServant_k__BackingField,
                                             0LL,
                                             IsIncludeIgnoreIndividuality,
                                             IsIgnoreIndivUnreleasable,
                                             v15,
                                             0LL);
    if ( !v11 )
LABEL_15:
      sub_B0D97C(ConcatServantAndBuffIndividualityies);
    System_Collections_Generic_List_int___AddRange(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)ConcatServantAndBuffIndividualityies,
      (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  ConcatServantAndBuffIndividualityies = (System_Int32_array *)BasicHelper__IsNullOrEmpty(
                                                                 (System_Collections_ICollection_o *)this->fields._individuality_k__BackingField,
                                                                 0LL);
  if ( ((unsigned __int8)ConcatServantAndBuffIndividualityies & 1) != 0 )
  {
    if ( !v11 )
      goto LABEL_15;
  }
  else
  {
    if ( !v11 )
      goto LABEL_15;
    System_Collections_Generic_List_int___AddRange(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)this->fields._individuality_k__BackingField,
      (const MethodInfo_2FB0154 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
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
      sub_B0D97C(Cost_k__BackingField);
    }
    return this->fields._limitActionCount_k__BackingField;
  }
  return result;
}


int32_t __fastcall WarBoardPieceData__GetMoveAfterAttack(WarBoardPieceData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WarBoardReinforcementsMaster_o *Master_WarQuestSelectionMaster; // x0
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x0
  int32_t type; // [xsp+4h] [xbp-1Ch] BYREF
  WarBoardReinforcementsEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4213375 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    byte_4213375 = 1;
  }
  entity = 0LL;
  type = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
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
    sub_B0D97C(Master_WarQuestSelectionMaster);
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
  __int64 v3; // x1
  WarBoardReinforcementsMaster_o *Master_WarQuestSelectionMaster; // x0
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x0
  int32_t type; // [xsp+4h] [xbp-1Ch] BYREF
  WarBoardReinforcementsEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4213376 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    byte_4213376 = 1;
  }
  entity = 0LL;
  type = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
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
    sub_B0D97C(Master_WarQuestSelectionMaster);
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
  __int64 v3; // x1
  __int64 v4; // x1
  BattleServantData_o *battleServant_k__BackingField; // x0
  struct WarBoardPieceData_PieceStatusCache_o *statusCache; // x20
  bool HasAvailablePermanentSleepBuff; // w1
  __int16 *v8; // x0
  unsigned __int16 *p_HasAvailablePermanentSleepBuff_k__BackingField; // x0
  struct System_Nullable_bool__o v11; // [xsp+8h] [xbp-18h] BYREF
  unsigned __int16 HasAvailablePermanentSleepBuff_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4213367 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Nullable_bool___ctor__, method);
    sub_B0D8A4(&Method_System_Nullable_bool__get_HasValue__, v3);
    sub_B0D8A4(&Method_System_Nullable_bool__get_Value__, v4);
    byte_4213367 = 1;
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
          v8 = (__int16 *)&v11,
          v11 = 0,
          System_Nullable_bool____ctor(
            (System_Nullable_bool__o)v8,
            HasAvailablePermanentSleepBuff,
            (const MethodInfo_297C558 *)Method_System_Nullable_bool___ctor__),
          statusCache->fields._HasAvailablePermanentSleepBuff_k__BackingField = v11,
          (statusCache = this->fields.statusCache) == 0LL) )
    {
      sub_B0D97C(battleServant_k__BackingField);
    }
    p_HasAvailablePermanentSleepBuff_k__BackingField = &HasAvailablePermanentSleepBuff_k__BackingField;
    HasAvailablePermanentSleepBuff_k__BackingField = (unsigned __int16)statusCache->fields._HasAvailablePermanentSleepBuff_k__BackingField;
    LOBYTE(battleServant_k__BackingField) = System_Nullable_bool___get_Value(
                                              (System_Nullable_bool__o)p_HasAvailablePermanentSleepBuff_k__BackingField,
                                              (const MethodInfo_297C574 *)Method_System_Nullable_bool__get_Value__);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct WarBoardPieceData_PieceStatusCache_o *statusCache; // x8
  struct WarBoardPieceData_PieceStatusCache_o *v8; // x20
  bool HasAnyBuffByBuffTypes; // w1
  __int16 *v10; // x0
  unsigned __int16 *p_HasCompletelyActionDisabledBuff_k__BackingField; // x0
  struct System_Nullable_bool__o v14; // [xsp+8h] [xbp-18h] BYREF
  unsigned __int16 HasCompletelyActionDisabledBuff_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_4213368 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Nullable_bool___ctor__, method);
    sub_B0D8A4(&Method_System_Nullable_bool__get_HasValue__, v3);
    sub_B0D8A4(&Method_System_Nullable_bool__get_Value__, v4);
    sub_B0D8A4(&WarBoardPieceData_TypeInfo, v5);
    this = (WarBoardPieceData_o *)sub_B0D8A4(&StringLiteral_15374/*"WAR_BOARD_ACTION_DISABLED_BUFF_TYPES"*/, v6);
    byte_4213368 = 1;
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
                                      (System_String_o *)StringLiteral_15374/*"WAR_BOARD_ACTION_DISABLED_BUFF_TYPES"*/,
                                      method);
      if ( !v2->fields._battleServant_k__BackingField
        || (v8 = v2->fields.statusCache,
            HasAnyBuffByBuffTypes = BattleServantData__HasAnyBuffByBuffTypes(
                                      v2->fields._battleServant_k__BackingField,
                                      (BuffList_TYPE_array *)this,
                                      0LL),
            v10 = (__int16 *)&v14,
            v14 = 0,
            System_Nullable_bool____ctor(
              (System_Nullable_bool__o)v10,
              HasAnyBuffByBuffTypes,
              (const MethodInfo_297C558 *)Method_System_Nullable_bool___ctor__),
            !v8)
        || (v8->fields._HasCompletelyActionDisabledBuff_k__BackingField = v14,
            (statusCache = v2->fields.statusCache) == 0LL) )
      {
LABEL_16:
        sub_B0D97C(this);
      }
    }
    p_HasCompletelyActionDisabledBuff_k__BackingField = &HasCompletelyActionDisabledBuff_k__BackingField;
    HasCompletelyActionDisabledBuff_k__BackingField = (unsigned __int16)statusCache->fields._HasCompletelyActionDisabledBuff_k__BackingField;
    return System_Nullable_bool___get_Value(
             (System_Nullable_bool__o)p_HasCompletelyActionDisabledBuff_k__BackingField,
             (const MethodInfo_297C574 *)Method_System_Nullable_bool__get_Value__);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x20
  WarBoardData_o *Instance; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **reinforcementsSaveList; // x1
  WarBoardSquareData_o *Square; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_IEnumerable_TSource__o *linkedSquares; // x21
  System_Func_int__BattleActionData_SideEffectData__o *v28; // x22
  System_Collections_Generic_IEnumerable_T__o *v29; // x0
  System_Collections_Generic_IEnumerable_T__o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v33; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v34; // x21
  WarBoardCost_o *Cost_k__BackingField; // x0
  bool CanAction; // w8
  bool result; // w0

  if ( (byte_421335D & 1) == 0 )
  {
    sub_B0D8A4(&Method_BasicHelper_Any_WarBoardWallData___, method);
    sub_B0D8A4(&Method_BasicHelper_ExcludeNull_WarBoardWallData___, v4);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_int__WarBoardWallData___, v5);
    sub_B0D8A4(&Method_System_Linq_Enumerable_ToArray_WarBoardWallData___, v6);
    sub_B0D8A4(&Method_System_Func_WarBoardWallData__bool___ctor__, v7);
    sub_B0D8A4(&Method_System_Func_int__WarBoardWallData___ctor__, v8);
    sub_B0D8A4(&System_Func_int__WarBoardWallData__TypeInfo, v9);
    sub_B0D8A4(&System_Func_WarBoardWallData__bool__TypeInfo, v10);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v11);
    sub_B0D8A4(&Method_WarBoardPieceData___c__DisplayClass219_0__HasVitalityToDoAnyActions_b__0__, v12);
    sub_B0D8A4(&WarBoardPieceData___c__DisplayClass219_0_TypeInfo, v13);
    sub_B0D8A4(&Method_WarBoardPieceData_CheckWallAttackCond__, v14);
    byte_421335D = 1;
  }
  v15 = sub_B0D974(WarBoardPieceData___c__DisplayClass219_0_TypeInfo, method, v2);
  WarBoardPieceData___c__DisplayClass219_0___ctor((WarBoardPieceData___c__DisplayClass219_0_o *)v15, 0LL);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  if ( !v15 )
    goto LABEL_19;
  reinforcementsSaveList = (System_Int32_array **)Instance[1].fields.reinforcementsSaveList;
  *(_QWORD *)(v15 + 16) = reinforcementsSaveList;
  sub_B0D840((BattleServantConfConponent_o *)(v15 + 16), reinforcementsSaveList, v17, v18, v19, v20, v21, v22);
  Instance = *(WarBoardData_o **)(v15 + 16);
  if ( !Instance )
    goto LABEL_19;
  Square = WarBoardData__GetSquare(Instance, this->fields._nowSquareIndex_k__BackingField, 0LL);
  if ( Square
    && (linkedSquares = (System_Collections_Generic_IEnumerable_TSource__o *)Square->fields.linkedSquares) != 0LL )
  {
    v28 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B0D974(
                                                                   System_Func_int__WarBoardWallData__TypeInfo,
                                                                   v25,
                                                                   v26);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      v28,
      (Il2CppObject *)v15,
      Method_WarBoardPieceData___c__DisplayClass219_0__HasVitalityToDoAnyActions_b__0__,
      (const MethodInfo_26145DC *)Method_System_Func_int__WarBoardWallData___ctor__);
    v29 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                           linkedSquares,
                                                           (System_Func_TSource__TResult__o *)v28,
                                                           (const MethodInfo_1B50D58 *)Method_System_Linq_Enumerable_Select_int__WarBoardWallData___);
    v30 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
            v29,
            (const MethodInfo_17074D0 *)Method_BasicHelper_ExcludeNull_WarBoardWallData___);
    v33 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v30,
            (const MethodInfo_1B56294 *)Method_System_Linq_Enumerable_ToArray_WarBoardWallData___);
    if ( v33 )
    {
      v34 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                 System_Func_WarBoardWallData__bool__TypeInfo,
                                                                                 v31,
                                                                                 v32);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v34,
        (Il2CppObject *)this,
        Method_WarBoardPieceData_CheckWallAttackCond__,
        (const MethodInfo_26189B8 *)Method_System_Func_WarBoardWallData__bool___ctor__);
      LOBYTE(v33) = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
                      (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)v33,
                      (System_Func_T__bool__o *)v34,
                      (const MethodInfo_17071E4 *)Method_BasicHelper_Any_WarBoardWallData___);
    }
  }
  else
  {
    LOBYTE(v33) = 0;
  }
  Cost_k__BackingField = this->fields._Cost_k__BackingField;
  if ( Cost_k__BackingField && WarBoardCost__get_HasCost(Cost_k__BackingField, 0LL) )
  {
    Instance = (WarBoardData_o *)this->fields._Cost_k__BackingField;
    if ( Instance )
    {
      CanAction = WarBoardCost__CanAction((WarBoardCost_o *)Instance, 0, (unsigned __int8)v33 & 1, 0LL);
      result = 0;
      if ( !CanAction )
        return result;
      return this->fields._limitActionCount_k__BackingField < 1 || this->fields._currentActionCount_k__BackingField > 0;
    }
LABEL_19:
    sub_B0D97C(Instance);
  }
  return this->fields._limitActionCount_k__BackingField < 1 || this->fields._currentActionCount_k__BackingField > 0;
}


void __fastcall WarBoardPieceData__HideActionTarget(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
      sub_B0D97C(pieceComponent);
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
  __int64 v7; // x1
  __int64 v8; // x1
  unsigned int breakPoint_k__BackingField; // w24
  WarBoardManager_TaskList_o *v10; // x20
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x23
  struct WarBoardPieceBaseComponent_o *v12; // x0
  const MethodInfo *v13; // x2
  struct BattleServantData_o *battleServant_k__BackingField; // x20
  unsigned int MaxHp; // w0
  unsigned int v16; // w20
  int32_t type_k__BackingField; // w8
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  struct WarBoardUserServantData_o *serverServantData; // x8
  __int64 v20; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_float__o v21; // 0:x0.8
  System_Nullable_float__o v22; // 0:x0.8

  if ( (byte_4213378 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__, taskListBreak);
    sub_B0D8A4(&Method_System_Nullable_float___ctor__, v7);
    sub_B0D8A4(&WarBoardManager_TaskList_TypeInfo, v8);
    byte_4213378 = 1;
  }
  breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
  this->fields._breakPoint_k__BackingField = breakPoint_k__BackingField - 1;
  v10 = (WarBoardManager_TaskList_o *)sub_B0D974(WarBoardManager_TaskList_TypeInfo, taskListBreak, taskListDead);
  WarBoardManager_TaskList___ctor(v10, 0LL);
  pieceComponent = this->fields.pieceComponent;
  if ( ((breakPoint_k__BackingField - 1) & 0x80000000) == 0 )
  {
    v21 = (System_Nullable_float__o)&v20;
    v20 = 0LL;
    System_Nullable_float____ctor(v21, 1.0, (const MethodInfo_2981438 *)Method_System_Nullable_float___ctor__);
    if ( pieceComponent )
    {
      v12 = (struct WarBoardPieceBaseComponent_o *)((__int64 (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, __int64, WarBoardManager_TaskList_o *, __int64, _QWORD, __int64, Il2CppMethodPointer))pieceComponent->klass->vtable._31_OnBreak.method)(
                                                     pieceComponent,
                                                     breakPoint_k__BackingField,
                                                     v20,
                                                     v10,
                                                     0xFFFFFFFFLL,
                                                     0LL,
                                                     1LL,
                                                     pieceComponent->klass->vtable._32_OnDead.methodPtr);
      if ( taskListBreak )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskListBreak,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v10,
          (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__);
        battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
        if ( battleServant_k__BackingField )
        {
          MaxHp = BattleServantData__getMaxHp(this->fields._battleServant_k__BackingField, 0LL);
          ((void (__fastcall *)(struct BattleServantData_o *, _QWORD, Il2CppMethodPointer))battleServant_k__BackingField->klass->vtable._10_set_hp.method)(
            battleServant_k__BackingField,
            MaxHp,
            battleServant_k__BackingField->klass->vtable._11_get_reducedhp.methodPtr);
        }
        v16 = 1;
        goto LABEL_17;
      }
    }
LABEL_20:
    sub_B0D97C(v12);
  }
  v22 = (System_Nullable_float__o)&v20;
  v20 = 0LL;
  System_Nullable_float____ctor(v22, 1.0, (const MethodInfo_2981438 *)Method_System_Nullable_float___ctor__);
  if ( !pieceComponent )
    goto LABEL_20;
  v12 = (struct WarBoardPieceBaseComponent_o *)((__int64 (__fastcall *)(struct WarBoardPieceBaseComponent_o *, __int64, WarBoardManager_TaskList_o *, __int64, Il2CppMethodPointer))pieceComponent->klass->vtable._32_OnDead.method)(
                                                 pieceComponent,
                                                 v20,
                                                 v10,
                                                 1LL,
                                                 pieceComponent->klass->vtable._33_OnRevive.methodPtr);
  if ( !taskListDead )
    goto LABEL_20;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskListDead,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v10,
    (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__);
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
  v16 = 0;
LABEL_17:
  WarBoardPieceData__SetBreakPoint(this, this->fields._breakPoint_k__BackingField, v13);
  v12 = this->fields.pieceComponent;
  if ( !v12 )
    goto LABEL_20;
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, Il2CppMethodPointer))v12->klass->vtable._15_ChangeStatus.method)(
    v12,
    v16,
    v12->klass->vtable._16_IsModifyStatus.methodPtr);
  v12 = this->fields.pieceComponent;
  if ( !v12 )
    goto LABEL_20;
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))v12->klass->vtable._10_UpdateDisplayActionCount.method)(
    v12,
    v12->klass->vtable._11_UpdateUiBrightnessByPieceStatus.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceData__OnDeadOnMap(
        WarBoardPieceData_o *this,
        bool cameraMove,
        WarBoardManager_TaskList_o *taskList,
        const MethodInfo *method)
{
  unsigned int breakPoint_k__BackingField; // w22
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x23
  __int64 v9; // x0
  _BOOL4 v10; // w21
  struct WarBoardPieceBaseComponent_o *v11; // x22
  int32_t type_k__BackingField; // w8
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  struct WarBoardUserServantData_o *serverServantData; // x8
  __int64 v15; // [xsp+0h] [xbp-40h] BYREF
  __int64 v16; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_float__o v17; // 0:x0.8
  System_Nullable_float__o v18; // 0:x0.8

  if ( (byte_4213373 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Nullable_float___ctor__, cameraMove);
    byte_4213373 = 1;
  }
  this->fields._isDead_k__BackingField = 1;
  breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
  pieceComponent = this->fields.pieceComponent;
  v17 = (System_Nullable_float__o)&v16;
  v16 = 0LL;
  System_Nullable_float____ctor(v17, 1.0, (const MethodInfo_2981438 *)Method_System_Nullable_float___ctor__);
  if ( !pieceComponent
    || (v10 = cameraMove,
        ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, __int64, WarBoardManager_TaskList_o *, _QWORD, _QWORD, _BOOL4, Il2CppMethodPointer))pieceComponent->klass->vtable._31_OnBreak.method)(
          pieceComponent,
          breakPoint_k__BackingField,
          v16,
          taskList,
          breakPoint_k__BackingField - 1,
          0LL,
          v10,
          pieceComponent->klass->vtable._32_OnDead.methodPtr),
        v11 = this->fields.pieceComponent,
        v18 = (System_Nullable_float__o)&v15,
        v15 = 0LL,
        System_Nullable_float____ctor(v18, 1.0, (const MethodInfo_2981438 *)Method_System_Nullable_float___ctor__),
        !v11) )
  {
    sub_B0D97C(v9);
  }
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, __int64, WarBoardManager_TaskList_o *, _BOOL4, Il2CppMethodPointer))v11->klass->vtable._32_OnDead.method)(
    v11,
    v15,
    taskList,
    v10,
    v11->klass->vtable._33_OnRevive.methodPtr);
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
    sub_B0D97C(battleServant_k__BackingField);
  (*(void (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)battleServant_k__BackingField + 840LL))(
    battleServant_k__BackingField,
    0LL,
    *(_QWORD *)(*(_QWORD *)battleServant_k__BackingField + 848LL));
}


void __fastcall WarBoardPieceData__Select(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardData_o *pieceComponent; // x0
  WarBoardSquareData_o *Square; // x0

  if ( (byte_421336A & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_421336A = 1;
  }
  pieceComponent = (WarBoardData_o *)this->fields.pieceComponent;
  if ( !pieceComponent
    || ((*(void (__fastcall **)(WarBoardData_o *, Il2CppMethodPointer))&pieceComponent->klass[1]._2.naturalAligment)(
          pieceComponent,
          pieceComponent->klass[1].vtable._0_Equals.methodPtr),
        (pieceComponent = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (pieceComponent = (WarBoardData_o *)pieceComponent[1].fields.reinforcementsSaveList) == 0LL )
  {
    sub_B0D97C(pieceComponent);
  }
  Square = WarBoardData__GetSquare(pieceComponent, this->fields._nowSquareIndex_k__BackingField, 0LL);
  if ( Square )
    WarBoardSquareData__Select(Square, 0LL);
}


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
      sub_B0D97C(Cost_k__BackingField);
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
    sub_B0D97C(this);
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
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.pieceComponent,
    (System_Int32_array **)component,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall WarBoardPieceData__SetContinue(WarBoardPieceData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  void *pieceComponent; // x0
  int32_t limitActionCount_k__BackingField; // w9
  WarBoardCost_o *Cost_k__BackingField; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  WarBoardData_o *v11; // x20
  int32_t PutSquareIndex_k__BackingField; // w21
  int32_t nowSquareIndex_k__BackingField; // w22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v14; // x23
  int32_t v15; // w0
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  const MethodInfo *v17; // x1
  struct WarBoardUserServantData_o *serverServantData; // x8

  if ( (byte_4213377 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Func_WarBoardPieceData__bool___ctor__, method);
    sub_B0D8A4(&System_Func_WarBoardPieceData__bool__TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_B0D8A4(&Method_WarBoardPieceData__SetContinue_b__333_0__, v5);
    byte_4213377 = 1;
  }
  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    goto LABEL_22;
  pieceComponent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pieceComponent, 0LL);
  if ( !pieceComponent )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pieceComponent, 0, 0LL);
  limitActionCount_k__BackingField = this->fields._limitActionCount_k__BackingField;
  Cost_k__BackingField = this->fields._Cost_k__BackingField;
  this->fields._breakPoint_k__BackingField = this->fields._breakPointMax_k__BackingField;
  this->fields._currentActionCount_k__BackingField = limitActionCount_k__BackingField;
  if ( Cost_k__BackingField && WarBoardCost__get_HasCost(Cost_k__BackingField, 0LL) )
  {
    pieceComponent = this->fields._Cost_k__BackingField;
    if ( !pieceComponent )
      goto LABEL_22;
    WarBoardCost__Reset((WarBoardCost_o *)pieceComponent, 0LL);
  }
  pieceComponent = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceComponent )
    goto LABEL_22;
  v11 = (WarBoardData_o *)*((_QWORD *)pieceComponent + 54);
  PutSquareIndex_k__BackingField = this->fields._PutSquareIndex_k__BackingField;
  nowSquareIndex_k__BackingField = this->fields._nowSquareIndex_k__BackingField;
  v14 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                             v9,
                                                                             v10);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v14,
    (Il2CppObject *)this,
    Method_WarBoardPieceData__SetContinue_b__333_0__,
    (const MethodInfo_26189B8 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  if ( !v11 )
    goto LABEL_22;
  v15 = WarBoardData__SearchNearestEmptySquare(
          v11,
          PutSquareIndex_k__BackingField,
          nowSquareIndex_k__BackingField,
          (System_Func_WarBoardPieceData__bool__o *)v14,
          0LL);
  serverMasterData_k__BackingField = this->fields._serverMasterData_k__BackingField;
  this->fields._nowSquareIndex_k__BackingField = v15;
  if ( serverMasterData_k__BackingField )
    serverMasterData_k__BackingField->fields.defeatPoint = this->fields._breakPointMax_k__BackingField;
  if ( this->fields.serverServantData && this->fields._battleServant_k__BackingField )
  {
    pieceComponent = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( pieceComponent )
    {
      if ( this->fields._battleServant_k__BackingField )
      {
        BattleServantData__setContinue(
          this->fields._battleServant_k__BackingField,
          *((BattleData_o **)pieceComponent + 72),
          this->fields._isDead_k__BackingField,
          this->fields._isDead_k__BackingField,
          0LL);
        WarBoardPieceData__SetServantIconData(this, v17);
        pieceComponent = this->fields.serverServantData;
        if ( pieceComponent )
        {
          WarBoardUserServantData__FromBattleServantData(
            (WarBoardUserServantData_o *)pieceComponent,
            this->fields._battleServant_k__BackingField,
            0LL);
          serverServantData = this->fields.serverServantData;
          if ( serverServantData )
          {
            serverServantData->fields.defeatPoint = this->fields._breakPointMax_k__BackingField;
            goto LABEL_20;
          }
        }
      }
    }
LABEL_22:
    sub_B0D97C(pieceComponent);
  }
LABEL_20:
  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    goto LABEL_22;
  (*(void (__fastcall **)(void *, _QWORD))(*(_QWORD *)pieceComponent + 472LL))(
    pieceComponent,
    *(_QWORD *)(*(_QWORD *)pieceComponent + 480LL));
  this->fields._isDead_k__BackingField = 0;
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_IEnumerable_TSource__o *masterInfo; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v18; // x21
  System_Int32_array **v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  WarBoardActionPointClassMaster_o *Master_WarQuestSelectionMaster; // x20
  const MethodInfo *v28; // x1
  WarBoardActionPointClassEntity_o *MasterEntityFromStageId; // x0
  System_Int32_array **v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  struct WarBoardUserMasterData_o *v37; // x8
  int32_t currentPieceActionPoint; // w1
  System_Collections_Generic_IEnumerable_TSource__o *svtInfo; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v40; // x21
  System_Int32_array **v41; // x0
  struct WarBoardUserServantData_o **p_serverServantData; // x20
  System_String_array **v43; // x2
  System_String_array **v44; // x3
  System_Boolean_array **v45; // x4
  System_Int32_array **v46; // x5
  System_Int32_array *v47; // x6
  System_Int32_array *v48; // x7
  struct WarBoardUserServantData_o *serverServantData; // x8
  __int128 v50; // q1
  WarBoardPieceData_o *v51; // x21
  System_Int32_array **BattleServant; // x0
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  struct WarBoardUserServantData_o *v59; // x8
  WarBoardActionPointClassMaster_o *v60; // x20
  const MethodInfo *v61; // x1
  WarBoardActionPointEntity_o *v62; // x21
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x20
  System_Int32_array **v64; // x0
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  struct WarBoardUserServantData_o *v71; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v72; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v73; // [xsp+20h] [xbp-40h]
  WarBoardReinforcementsEntity_o *entity; // [xsp+48h] [xbp-18h] BYREF

  v4 = this;
  if ( (byte_421336D & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___, warBoardDataEntity);
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, v5);
    sub_B0D8A4(&DataManager_TypeInfo, v6);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___, v8);
    sub_B0D8A4(&Method_System_Func_WarBoardUserMasterData__bool___ctor__, v9);
    sub_B0D8A4(&Method_System_Func_WarBoardUserServantData__bool___ctor__, v10);
    sub_B0D8A4(&System_Func_WarBoardUserMasterData__bool__TypeInfo, v11);
    sub_B0D8A4(&System_Func_WarBoardUserServantData__bool__TypeInfo, v12);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v14);
    sub_B0D8A4(&Method_WarBoardPieceData__SetInitinalData_b__311_0__, v15);
    this = (WarBoardPieceData_o *)sub_B0D8A4(&Method_WarBoardPieceData__SetInitinalData_b__311_1__, v16);
    byte_421336D = 1;
  }
  entity = 0LL;
  if ( !v4->fields._isDead_k__BackingField )
  {
    if ( warBoardDataEntity )
    {
      if ( v4->fields._type_k__BackingField == 1 )
      {
        masterInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.masterInfo;
        v18 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                   System_Func_WarBoardUserMasterData__bool__TypeInfo,
                                                                                   warBoardDataEntity,
                                                                                   method);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v18,
          (Il2CppObject *)v4,
          Method_WarBoardPieceData__SetInitinalData_b__311_0__,
          (const MethodInfo_26189B8 *)Method_System_Func_WarBoardUserMasterData__bool___ctor__);
        v19 = (System_Int32_array **)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                       masterInfo,
                                       (System_Func_TSource__bool__o *)v18,
                                       (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
        v4->fields._serverMasterData_k__BackingField = (struct WarBoardUserMasterData_o *)v19;
        sub_B0D840(
          (BattleServantConfConponent_o *)&v4->fields._serverMasterData_k__BackingField,
          v19,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25);
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
          Master_WarQuestSelectionMaster = (WarBoardActionPointClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
          this = (WarBoardPieceData_o *)WarBoardPieceData__get_ActionPointEntity(v4, v28);
          if ( Master_WarQuestSelectionMaster )
          {
            MasterEntityFromStageId = WarBoardActionPointClassMaster__GetMasterEntityFromStageId(
                                        Master_WarQuestSelectionMaster,
                                        (WarBoardActionPointEntity_o *)this,
                                        0LL);
            v30 = (System_Int32_array **)WarBoardCost__Create(
                                           MasterEntityFromStageId,
                                           v4->fields.stagePieceDetailEntity,
                                           0LL,
                                           0LL);
            v4->fields._Cost_k__BackingField = (struct WarBoardCost_o *)v30;
            sub_B0D840(
              (BattleServantConfConponent_o *)&v4->fields._Cost_k__BackingField,
              v30,
              v31,
              v32,
              v33,
              v34,
              v35,
              v36);
            v37 = v4->fields._serverMasterData_k__BackingField;
            if ( v37 )
            {
              this = (WarBoardPieceData_o *)v4->fields._Cost_k__BackingField;
              if ( this )
              {
                currentPieceActionPoint = v37->fields.currentPieceActionPoint;
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
        v40 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                                   System_Func_WarBoardUserServantData__bool__TypeInfo,
                                                                                   warBoardDataEntity,
                                                                                   method);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v40,
          (Il2CppObject *)v4,
          Method_WarBoardPieceData__SetInitinalData_b__311_1__,
          (const MethodInfo_26189B8 *)Method_System_Func_WarBoardUserServantData__bool___ctor__);
        v41 = (System_Int32_array **)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                       svtInfo,
                                       (System_Func_TSource__bool__o *)v40,
                                       (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
        p_serverServantData = &v4->fields.serverServantData;
        v4->fields.serverServantData = (struct WarBoardUserServantData_o *)v41;
        sub_B0D840((BattleServantConfConponent_o *)&v4->fields.serverServantData, v41, v43, v44, v45, v46, v47, v48);
        this = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        serverServantData = v4->fields.serverServantData;
        if ( serverServantData )
        {
          v50 = *(_OWORD *)&serverServantData->fields.id.fields.fakeValue;
          v51 = this;
          *(_OWORD *)&v73.fields.currentCryptoKey = *(_OWORD *)&serverServantData->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v73.fields.fakeValue = v50;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v72 = v73;
          this = (WarBoardPieceData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v72, 0LL);
          if ( v51 )
          {
            BattleServant = (System_Int32_array **)WarBoardManager__GetBattleServant(
                                                     (WarBoardManager_o *)v51,
                                                     (int64_t)this,
                                                     0LL);
            v4->fields._battleServant_k__BackingField = (struct BattleServantData_o *)BattleServant;
            sub_B0D840(
              (BattleServantConfConponent_o *)&v4->fields._battleServant_k__BackingField,
              BattleServant,
              v53,
              v54,
              v55,
              v56,
              v57,
              v58);
            this = (WarBoardPieceData_o *)v4->fields.serverServantData;
            if ( this )
            {
              WarBoardUserServantData__FromBattleServantData(
                (WarBoardUserServantData_o *)this,
                v4->fields._battleServant_k__BackingField,
                0LL);
              v59 = *p_serverServantData;
              if ( *p_serverServantData )
              {
                v4->fields._limitActionCount_k__BackingField = v59->fields.limitActionPoint;
                v4->fields._currentActionCount_k__BackingField = v59->fields.currentActionPoint;
                v4->fields._attackCount_k__BackingField = v59->fields.attackCount;
                v4->fields._nowSquareIndex_k__BackingField = v59->fields.squareIndex;
                if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                }
                v60 = (WarBoardActionPointClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
                this = (WarBoardPieceData_o *)WarBoardPieceData__get_ActionPointEntity(v4, v61);
                if ( v4->fields._battleServant_k__BackingField )
                {
                  v62 = (WarBoardActionPointEntity_o *)this;
                  this = (WarBoardPieceData_o *)BattleServantData__getClassId(
                                                  v4->fields._battleServant_k__BackingField,
                                                  0LL);
                  if ( v60 )
                  {
                    EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                                    v60,
                                                    v62,
                                                    (int32_t)this,
                                                    0LL);
                    this = (WarBoardPieceData_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
                    if ( this )
                    {
                      WarBoardReinforcementsMaster__TryGetEntity(
                        (WarBoardReinforcementsMaster_o *)this,
                        &entity,
                        v4->fields._ReinfoId_k__BackingField,
                        0LL);
                      v64 = (System_Int32_array **)WarBoardCost__Create(
                                                     EntityFromActionPointEntity,
                                                     v4->fields.stagePieceDetailEntity,
                                                     entity,
                                                     0LL);
                      v4->fields._Cost_k__BackingField = (struct WarBoardCost_o *)v64;
                      sub_B0D840(
                        (BattleServantConfConponent_o *)&v4->fields._Cost_k__BackingField,
                        v64,
                        v65,
                        v66,
                        v67,
                        v68,
                        v69,
                        v70);
                      v71 = v4->fields.serverServantData;
                      if ( v71 )
                      {
                        this = (WarBoardPieceData_o *)v4->fields._Cost_k__BackingField;
                        if ( this )
                        {
                          currentPieceActionPoint = v71->fields.currentPieceActionPoint;
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
    sub_B0D97C(this);
  }
}


void __fastcall WarBoardPieceData__SetMasterEquip(
        WarBoardPieceData_o *this,
        int64_t userEquipId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x20
  __int64 v11; // x20
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  struct System_Byte_array *masterDataBytes; // x20
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x21
  int32_t v15; // w0
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x8
  __int64 v17; // x11
  UnityEngine_Object_o *v18; // x19
  const MethodInfo *v19; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_4213364 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserEquipMaster___, userEquipId);
    sub_B0D8A4(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8);
    sub_B0D8A4(&WarBoardMasterPieceComponent_TypeInfo, v9);
    byte_4213364 = 1;
  }
  this->fields._CurrentUserEquipId_k__BackingField = userEquipId;
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    sub_AA65A4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v11 = **(_QWORD **)(v10 + 192);
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_AA65A4(v11);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v11 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_26;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_26;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)MasterData_WarQuestSelectionMaster,
                                                          this->fields._CurrentUserEquipId_k__BackingField,
                                                          (const MethodInfo_2669DFC *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_26;
  lookup = MasterData_WarQuestSelectionMaster->fields.lookup;
  masterDataBytes = MasterData_WarQuestSelectionMaster->fields.masterDataBytes;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v20.fields.currentCryptoKey = lookup;
  *(_QWORD *)&v20.fields.fakeValue = masterDataBytes;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v20, 0LL);
  pieceComponent = this->fields.pieceComponent;
  this->fields._iconId_k__BackingField = v15;
  if ( pieceComponent
    && (v17 = *(&WarBoardMasterPieceComponent_TypeInfo->_2.bitflags2 + 1),
        *(&pieceComponent->klass->_2.bitflags2 + 1) >= (unsigned int)v17) )
  {
    if ( (WarBoardMasterPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[v17 - 1] == WarBoardMasterPieceComponent_TypeInfo )
      v18 = (UnityEngine_Object_o *)pieceComponent;
    else
      v18 = 0LL;
  }
  else
  {
    v18 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  MasterData_WarQuestSelectionMaster = (DataManager_o *)UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
  if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( v18 )
    {
      WarBoardMasterPieceComponent__SetMasterIcon((WarBoardMasterPieceComponent_o *)v18, v19);
      return;
    }
LABEL_26:
    sub_B0D97C(MasterData_WarQuestSelectionMaster);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceData__SetOverwriteActionType(
        WarBoardPieceData_o *this,
        int32_t actionType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  intptr_t v8; // w21
  System_Type_o *TypeFromHandle; // x21
  Il2CppObject *v10; // x22
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF
  System_RuntimeTypeHandle_o v12; // 0:w0.4

  if ( (byte_421337A & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardStageLayoutEntity_ActionType_var, *(_QWORD *)&actionType);
    sub_B0D8A4(&System_Enum_TypeInfo, v5);
    sub_B0D8A4(&int_TypeInfo, v6);
    sub_B0D8A4(&System_Type_TypeInfo, v7);
    byte_421337A = 1;
  }
  v8 = (int)WarBoardStageLayoutEntity_ActionType_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v12.fields.value = v8;
  TypeFromHandle = System_Type__GetTypeFromHandle(v12, 0LL);
  v11 = actionType;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  if ( System_Enum__IsDefined(TypeFromHandle, v10, 0LL) )
    this->fields._overwriteActionType_k__BackingField = actionType;
}


void __fastcall WarBoardPieceData__SetOverwriteAiId(WarBoardPieceData_o *this, int32_t aiId, const MethodInfo *method)
{
  this->fields._overwriteAiId_k__BackingField = aiId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceData__SetPartyBuffLevel(
        WarBoardPieceData_o *this,
        int32_t level,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x8
  __int64 v7; // x11
  UnityEngine_Object_o *v8; // x20
  _BOOL8 v9; // x0

  if ( (byte_4213370 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&level);
    sub_B0D8A4(&WarBoardServantPieceComponent_TypeInfo, v5);
    byte_4213370 = 1;
  }
  pieceComponent = this->fields.pieceComponent;
  if ( pieceComponent
    && (v7 = *(&WarBoardServantPieceComponent_TypeInfo->_2.bitflags2 + 1),
        *(&pieceComponent->klass->_2.bitflags2 + 1) >= (unsigned int)v7) )
  {
    if ( (WarBoardServantPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[v7 - 1] == WarBoardServantPieceComponent_TypeInfo )
      v8 = (UnityEngine_Object_o *)this->fields.pieceComponent;
    else
      v8 = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v9 = UnityEngine_Object__op_Equality(v8, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !v8 )
      sub_B0D97C(v9);
    WarBoardServantPieceComponent__SetPartyBuffLevel((WarBoardServantPieceComponent_o *)v8, level, 0LL);
  }
}


void __fastcall WarBoardPieceData__SetPieceEnable(WarBoardPieceData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_B0D97C(0LL);
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
  if ( (byte_4213372 & 1) == 0 )
  {
    this = (WarBoardPieceData_o *)sub_B0D8A4(&WarBoardPieceData_RouteSaveData_TypeInfo, prev);
    byte_4213372 = 1;
  }
  if ( !prev )
    sub_B0D97C(this);
  baseIndex = prev->fields.baseIndex;
  actionIndex = prev->fields.actionIndex;
  flagNow = prev->fields.flagNow;
  v8 = (WarBoardPieceData_RouteSaveData_o *)sub_B0D974(WarBoardPieceData_RouteSaveData_TypeInfo, prev, method);
  WarBoardPieceData_RouteSaveData___ctor_22736840(v8, baseIndex, actionIndex, flagNow, 0LL);
  v4->fields._PrevAiRoute_k__BackingField = v8;
  sub_B0D840(
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  DataManager_o *Instance; // x0
  __int64 v13; // x22
  __int64 v14; // x23
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x8
  __int64 v16; // x11
  UnityEngine_Object_o *v17; // x20
  UserServantEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4213365 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, userServantId);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v7);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v8);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B0D8A4(&WarBoardServantPieceComponent_TypeInfo, v11);
    byte_4213365 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                &entity,
                                userServantId,
                                (const MethodInfo_2669E58 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    this->fields._UserServantId_k__BackingField = userServantId;
    if ( !entity )
      goto LABEL_31;
    v14 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
    v13 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v19.fields.currentCryptoKey = v14;
    *(_QWORD *)&v19.fields.fakeValue = v13;
    this->fields._iconId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v19, 0LL);
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
      sub_B0D97C(Instance);
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
    && (v16 = *(&WarBoardServantPieceComponent_TypeInfo->_2.bitflags2 + 1),
        *(&pieceComponent->klass->_2.bitflags2 + 1) >= (unsigned int)v16) )
  {
    if ( (WarBoardServantPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[v16 - 1] == WarBoardServantPieceComponent_TypeInfo )
      v17 = (UnityEngine_Object_o *)this->fields.pieceComponent;
    else
      v17 = 0LL;
  }
  else
  {
    v17 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v17, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( v17 )
    {
      WarBoardServantPieceComponent__SetServant((WarBoardServantPieceComponent_o *)v17, userServantId, 0LL);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x21
  __int64 v12; // x22
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x8
  __int64 v14; // x11
  UnityEngine_Object_o *v15; // x20
  UserServantEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4213366 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, userServantEquipId);
    sub_B0D8A4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B0D8A4(&WarBoardServantPieceComponent_TypeInfo, v9);
    byte_4213366 = 1;
  }
  entity = 0LL;
  this->fields._UserServantEquipId_k__BackingField = userServantEquipId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                &entity,
                                this->fields._UserServantEquipId_k__BackingField,
                                (const MethodInfo_2669E58 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_26;
    v12 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
    v11 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v17.fields.currentCryptoKey = v12;
    *(_QWORD *)&v17.fields.fakeValue = v11;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v17, 0LL);
    this->fields._iconEquipId_k__BackingField = (int)Instance;
    if ( !entity )
      goto LABEL_26;
    this->fields._equipLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
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
    && (v14 = *(&WarBoardServantPieceComponent_TypeInfo->_2.bitflags2 + 1),
        *(&pieceComponent->klass->_2.bitflags2 + 1) >= (unsigned int)v14) )
  {
    if ( (WarBoardServantPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[v14 - 1] == WarBoardServantPieceComponent_TypeInfo )
      v15 = (UnityEngine_Object_o *)this->fields.pieceComponent;
    else
      v15 = 0LL;
  }
  else
  {
    v15 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v15, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( v15 )
    {
      WarBoardServantPieceComponent__SetServantEquip((WarBoardServantPieceComponent_o *)v15, userServantEquipId, 0LL);
      return;
    }
LABEL_26:
    sub_B0D97C(Instance);
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
  if ( (byte_4213363 & 1) == 0 )
  {
    this = (WarBoardPieceData_o *)sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4213363 = 1;
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
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v21, 0LL);
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
      this = (WarBoardPieceData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v22, 0LL);
      v2->fields._iconEquipId_k__BackingField = (int)this;
      if ( !equipList->max_length )
      {
LABEL_40:
        v20 = sub_B0D9A8(this);
        sub_B0D948(v20, 0LL);
      }
      v16 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)equipList->m_Items[0];
      if ( !v16
        || (this = (WarBoardPieceData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(
                                            v16[6],
                                            0LL),
            v9 = v2->fields._battleServant_k__BackingField,
            v2->fields._equipLimitCount_k__BackingField = (int)this,
            !v9) )
      {
LABEL_39:
        sub_B0D97C(this);
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
          sub_B0D97C(this);
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
    sub_B0D97C(0LL);
  WarBoardPieceBaseComponent__SetTouchEnable(pieceComponent, enable, method);
}


void __fastcall WarBoardPieceData__ShowActionTarget(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  if ( !this->fields._isDead_k__BackingField && WarBoardPieceData__get_enableAction(this, method) )
  {
    pieceComponent = this->fields.pieceComponent;
    if ( !pieceComponent )
      sub_B0D97C(0LL);
    ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))pieceComponent->klass->vtable._20_ShowActionTarget.method)(
      pieceComponent,
      pieceComponent->klass->vtable._21_HideActionTarget.methodPtr);
  }
}


System_String_o *__fastcall WarBoardPieceData__ToJson(WarBoardPieceData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *serverMasterData_k__BackingField; // x19
  WarBoardUserServantData_o *serverServantData; // x0

  if ( (byte_421336F & 1) == 0 )
  {
    sub_B0D8A4(&JsonManager_TypeInfo, method);
    sub_B0D8A4(&string_TypeInfo, v3);
    byte_421336F = 1;
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
    sub_B0D97C(0LL);
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))pieceComponent->klass->vtable._9_HideActionCount.method)(
    pieceComponent,
    pieceComponent->klass->vtable._10_UpdateDisplayActionCount.methodPtr);
}


void __fastcall WarBoardPieceData__TurnStart(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_B0D97C(0LL);
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  System_Collections_Generic_IEnumerable_TSource__o *masterInfo; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v37; // x22
  struct WarBoardUserMasterData_o *v38; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  int32_t defeatPoint; // w8
  struct WarBoardUserMasterData_o *v46; // x22
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  struct WarBoardUserMasterData_o **p_serverMasterData_k__BackingField; // x21
  _BOOL4 v49; // w24
  System_Collections_Generic_IEnumerable_TSource__o *svtInfo; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v51; // x24
  WarBoardData_SquareRangeSearch_o *v52; // x0
  __int64 v53; // x1
  __int64 v54; // x2
  int32_t breakPoint_k__BackingField; // w26
  int32_t monitor_high; // w8
  struct WarBoardUserServantData_o *v57; // x22
  unsigned int v58; // w21
  __int64 v59; // x24
  __int64 pieceComponent; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Int32_array **v67; // x1
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  struct WarBoardUserServantData_o *serverServantData; // x8
  struct WarBoardUserServantData_o **p_serverServantData; // x23
  _BOOL4 v76; // w26
  struct WarBoardCost_o *v77; // x8
  _BOOL4 v78; // w22
  int32_t currentActionCount_k__BackingField; // w28
  int32_t currentActionPoint; // w24
  struct WarBoardPieceData_SaveData_o *localSaveData; // x9
  unsigned int v82; // w27
  _BOOL4 v83; // w25
  int32_t *v84; // x8
  int v85; // w23
  _BOOL4 v86; // w8
  struct WarBoardPieceBaseComponent_o *v87; // x8
  __int64 v88; // x11
  UnityEngine_Object_o *v89; // x20
  bool v90; // w8
  WarBoardCost_o *Cost_k__BackingField; // x0
  struct WarBoardCost_o *v92; // x8
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  struct WarBoardUserServantData_o *v94; // x8
  int32_t squareIndex; // w9
  WarBoardActionPointClassMaster_o *Master_WarQuestSelectionMaster; // x22
  const MethodInfo *v97; // x1
  WarBoardActionPointEntity_o *v98; // x23
  struct WarBoardUserServantData_o *v99; // x8
  WarBoardActionPointClassEntity_o *v100; // x22
  WarBoardCost_o *v101; // x23
  int v102; // w22
  const MethodInfo *v103; // x1
  int v104; // w23
  struct WarBoardPieceBaseComponent_o *v105; // x8
  __int64 v106; // x11
  UnityEngine_Object_o *v107; // x20
  struct BattleServantData_o *v108; // x8
  __int64 v109; // x21
  __int64 v110; // x22
  int32_t v111; // w0
  struct WarBoardUserServantData_o *v112; // x8
  WarBoardPieceData_o *v113; // x21
  struct BattleServantData_o *v114; // x8
  __int64 v115; // x1
  __int64 v116; // x2
  WarBoardPieceData___c__DisplayClass312_0_o *v117; // x20
  __int64 v118; // x1
  __int64 v119; // x2
  System_Func_bool__o *v120; // x19
  __int64 v121; // x1
  __int64 v122; // x2
  UnityEngine_WaitUntil_o *v123; // x21
  __int64 v124; // x1
  __int64 v125; // x2
  __int64 v126; // x19
  __int64 v127; // x1
  __int64 v128; // x2
  System_Delegate_o *v129; // x22
  WarBoardTaskBase_TaskCallback_o *v130; // x23
  System_Int32_array **v131; // x0
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  WebViewManager_o *Instance; // x20
  __int64 v139; // x21
  __int64 v140; // x0
  System_String_array **v141; // x2
  System_String_array **v142; // x3
  System_Boolean_array **v143; // x4
  System_Int32_array **v144; // x5
  System_Int32_array *v145; // x6
  System_Int32_array *v146; // x7
  __int64 v147; // x0
  __int64 v148; // x0
  WarBoardPieceData_o *v149; // x0
  const MethodInfo *v150; // x1
  _BOOL4 v151; // [xsp+Ch] [xbp-54h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v152; // 0:x0.16

  v6 = forceUpdate;
  if ( (byte_421336E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___, warBoardDataEntity);
    sub_B0D8A4(&DataManager_TypeInfo, v11);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___, v12);
    sub_B0D8A4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___, v13);
    sub_B0D8A4(&Method_System_Func_bool___ctor__, v14);
    sub_B0D8A4(&System_Func_bool__TypeInfo, v15);
    sub_B0D8A4(&Method_System_Func_WarBoardUserMasterData__bool___ctor__, v16);
    sub_B0D8A4(&Method_System_Func_WarBoardUserServantData__bool___ctor__, v17);
    sub_B0D8A4(&System_Func_WarBoardUserMasterData__bool__TypeInfo, v18);
    sub_B0D8A4(&System_Func_WarBoardUserServantData__bool__TypeInfo, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__Add__, v20);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v21);
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v23);
    sub_B0D8A4(&WarBoardTaskBase_TaskCallback_TypeInfo, v24);
    sub_B0D8A4(&Method_WarBoardPieceData___c__DisplayClass312_0__UpdateFromServerData_b__2__, v25);
    sub_B0D8A4(&Method_WarBoardPieceData___c__DisplayClass312_0__UpdateFromServerData_b__3__, v26);
    sub_B0D8A4(&WarBoardPieceData___c__DisplayClass312_0_TypeInfo, v27);
    sub_B0D8A4(&UnityEngine_WaitUntil_TypeInfo, v28);
    sub_B0D8A4(&WarBoardCallbackTask_TypeInfo, v29);
    sub_B0D8A4(&WarBoardData_WarBoardDeadBreakList_TypeInfo, v30);
    sub_B0D8A4(&WarBoardMasterPieceComponent_TypeInfo, v31);
    sub_B0D8A4(&Method_WarBoardPieceData__UpdateFromServerData_b__312_0__, v32);
    sub_B0D8A4(&Method_WarBoardPieceData__UpdateFromServerData_b__312_1__, v33);
    sub_B0D8A4(&WarBoardServantPieceComponent_TypeInfo, v34);
    sub_B0D8A4(&WarBoardTaskBase___TypeInfo, v35);
    byte_421336E = 1;
  }
  if ( !warBoardDataEntity )
    return;
  if ( this->fields._type_k__BackingField != 1 )
  {
    svtInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.svtInfo;
    v51 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                               System_Func_WarBoardUserServantData__bool__TypeInfo,
                                                                               warBoardDataEntity,
                                                                               deadBreakList);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v51,
      (Il2CppObject *)this,
      Method_WarBoardPieceData__UpdateFromServerData_b__312_1__,
      (const MethodInfo_26189B8 *)Method_System_Func_WarBoardUserServantData__bool___ctor__);
    v52 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
            svtInfo,
            (System_Func_TSource__bool__o *)v51,
            (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
    if ( !v52 )
      return;
    breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
    monitor_high = HIDWORD(v52[23].monitor);
    v57 = (struct WarBoardUserServantData_o *)v52;
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
      v58 = 0;
    }
    else
    {
      this->fields._breakPoint_k__BackingField = monitor_high;
      v58 = 1;
      if ( (HIDWORD(v52[23].monitor) & 0x80000000) != 0 )
      {
        this->fields._isDead_k__BackingField = 1;
        v58 = 0;
      }
      v59 = sub_B0D974(WarBoardData_WarBoardDeadBreakList_TypeInfo, v53, v54);
      WarBoardData_WarBoardDeadBreakList___ctor((WarBoardData_WarBoardDeadBreakList_o *)v59, 0LL);
      if ( !v59 )
        goto LABEL_150;
      v67 = (System_Int32_array **)this->fields.pieceComponent;
      *(_QWORD *)(v59 + 16) = v67;
      sub_B0D840((BattleServantConfConponent_o *)(v59 + 16), v67, v61, v62, v63, v64, v65, v66);
      *(_DWORD *)(v59 + 24) = v57->fields.defeatPoint;
      *(_DWORD *)(v59 + 28) = breakPoint_k__BackingField;
      if ( !deadBreakList )
        goto LABEL_150;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)deadBreakList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v59,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__Add__);
    }
    p_serverServantData = &this->fields.serverServantData;
    serverServantData = this->fields.serverServantData;
    if ( serverServantData )
      v76 = serverServantData->fields.transformIndex != v57->fields.transformIndex;
    else
      v76 = 0;
    currentActionCount_k__BackingField = this->fields._currentActionCount_k__BackingField;
    currentActionPoint = v57->fields.currentActionPoint;
    localSaveData = this->fields.localSaveData;
    v82 = currentActionCount_k__BackingField != currentActionPoint;
    if ( !localSaveData )
      goto LABEL_150;
    if ( v57->fields.consumedActionPointDateTime <= localSaveData->fields.consumedActionPointDateTime
      || this->fields._forceId_k__BackingField
      || this->fields._groupId_k__BackingField )
    {
      v151 = 0;
      if ( serverServantData )
      {
LABEL_34:
        v83 = serverServantData->fields.criticalStars != v57->fields.criticalStars;
LABEL_63:
        v90 = v57->fields.consumedRecoverDonotActCostDateTime > localSaveData->fields.consumedRecoverDonotActCostDateTime
           && !this->fields._forceId_k__BackingField
           && !this->fields._groupId_k__BackingField
           && !this->fields._isDead_k__BackingField;
        this->fields._IsDispConsumedPieceActionPoint_k__BackingField = v90;
        Cost_k__BackingField = this->fields._Cost_k__BackingField;
        this->fields._ConsumedRecoverDonotActCost_k__BackingField = v57->fields.consumedRecoverDonotActCost;
        if ( Cost_k__BackingField )
        {
          pieceComponent = WarBoardCost__get_HasCost(Cost_k__BackingField, 0LL);
          v82 = (currentActionCount_k__BackingField != currentActionPoint) | (unsigned int)pieceComponent;
          if ( currentActionCount_k__BackingField == currentActionPoint && (pieceComponent & 1) != 0 )
          {
            v92 = this->fields._Cost_k__BackingField;
            if ( !v92 )
              goto LABEL_150;
            v82 = v92->fields._CurrentActionPoint_k__BackingField != v57->fields.currentPieceActionPoint;
          }
        }
        this->fields.serverServantData = v57;
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.serverServantData,
          (System_Int32_array **)v57,
          v68,
          v69,
          v70,
          v71,
          v72,
          v73);
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
        v94 = this->fields.serverServantData;
        if ( !v94 )
          goto LABEL_150;
        this->fields._limitActionCount_k__BackingField = v94->fields.limitActionPoint;
        this->fields._currentActionCount_k__BackingField = v94->fields.currentActionPoint;
        this->fields._attackCount_k__BackingField = v94->fields.attackCount;
        squareIndex = v94->fields.squareIndex;
        if ( squareIndex == -1 )
        {
          this->fields._lastSquareIndex_k__BackingField = this->fields._nowSquareIndex_k__BackingField;
          squareIndex = v94->fields.squareIndex;
        }
        this->fields._nowSquareIndex_k__BackingField = squareIndex;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (WarBoardActionPointClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
        pieceComponent = (__int64)WarBoardPieceData__get_ActionPointEntity(this, v97);
        if ( !this->fields._battleServant_k__BackingField )
          goto LABEL_150;
        v98 = (WarBoardActionPointEntity_o *)pieceComponent;
        pieceComponent = BattleServantData__getClassId(this->fields._battleServant_k__BackingField, 0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_150;
        pieceComponent = (__int64)WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                    Master_WarQuestSelectionMaster,
                                    v98,
                                    pieceComponent,
                                    0LL);
        v99 = this->fields.serverServantData;
        if ( !v99 )
          goto LABEL_150;
        v100 = (WarBoardActionPointClassEntity_o *)pieceComponent;
        pieceComponent = (__int64)this->fields._Cost_k__BackingField;
        if ( !pieceComponent )
          goto LABEL_150;
        WarBoardCost__UpdateCurrentPointByServerData(
          (WarBoardCost_o *)pieceComponent,
          v99->fields.currentPieceActionPoint,
          0LL);
        pieceComponent = (__int64)this->fields._battleServant_k__BackingField;
        if ( !pieceComponent )
          goto LABEL_150;
        v101 = this->fields._Cost_k__BackingField;
        pieceComponent = BattleServantData__getClassId((BattleServantData_o *)pieceComponent, 0LL);
        if ( !v101 )
          goto LABEL_150;
        if ( WarBoardCost__IsSameClass(v101, pieceComponent, 0LL) )
        {
          v102 = 0;
        }
        else
        {
          pieceComponent = (__int64)WarBoardCost__Create(v100, 0LL, 0LL, 0LL);
          if ( !this->fields._Cost_k__BackingField )
            goto LABEL_150;
          WarBoardCost__UpdateClassCost(this->fields._Cost_k__BackingField, (WarBoardCost_o *)pieceComponent, 0LL);
          v102 = 1;
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
            v58,
            *(_QWORD *)(*(_QWORD *)pieceComponent + 560LL));
        }
        if ( v102 | (v82 | v6) & 1 && !this->fields._isDead_k__BackingField )
        {
          pieceComponent = (__int64)this->fields.pieceComponent;
          if ( !pieceComponent )
            goto LABEL_150;
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)pieceComponent + 472LL))(
            pieceComponent,
            *(_QWORD *)(*(_QWORD *)pieceComponent + 480LL));
        }
        v104 = v6;
        if ( v76 | v104 && !this->fields._isDead_k__BackingField )
        {
          v105 = this->fields.pieceComponent;
          if ( v105
            && (v106 = *(&WarBoardServantPieceComponent_TypeInfo->_2.bitflags2 + 1),
                *(&v105->klass->_2.bitflags2 + 1) >= (unsigned int)v106) )
          {
            if ( (WarBoardServantPieceComponent_c *)v105->klass->_2.typeHierarchy[v106 - 1] == WarBoardServantPieceComponent_TypeInfo )
              v107 = (UnityEngine_Object_o *)this->fields.pieceComponent;
            else
              v107 = 0LL;
          }
          else
          {
            v107 = 0LL;
          }
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          pieceComponent = UnityEngine_Object__op_Inequality(v107, 0LL, 0LL);
          if ( (pieceComponent & 1) != 0 )
          {
            v108 = this->fields._battleServant_k__BackingField;
            if ( !v108 )
              goto LABEL_150;
            v110 = *(_QWORD *)&v108->fields.svtId.fields.currentCryptoKey;
            v109 = *(_QWORD *)&v108->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v152.fields.currentCryptoKey = v110;
            *(_QWORD *)&v152.fields.fakeValue = v109;
            v111 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44162576(v152, 0LL);
            v112 = this->fields.serverServantData;
            this->fields._iconId_k__BackingField = v111;
            if ( v112 )
            {
              pieceComponent = NpcSvtType__IsEnemy(v112->fields.npcSvtType, 0LL);
              v113 = (pieceComponent & 1) != 0 ? this : 0LL;
            }
            else
            {
              pieceComponent = 0LL;
              v113 = 0LL;
            }
            if ( !this->fields._battleServant_k__BackingField )
              goto LABEL_150;
            if ( (pieceComponent & 1) != 0 )
            {
              pieceComponent = BattleServantData__getLimitCount(this->fields._battleServant_k__BackingField, 0LL);
              if ( !v113 )
                goto LABEL_150;
            }
            else
            {
              LODWORD(pieceComponent) = BattleServantData__GetIconImageLimitCount(
                                          this->fields._battleServant_k__BackingField,
                                          0LL);
              v113 = this;
            }
            v113->fields._iconLimitCount_k__BackingField = pieceComponent;
            pieceComponent = (__int64)this->fields._battleServant_k__BackingField;
            if ( !pieceComponent )
              goto LABEL_150;
            pieceComponent = BattleServantData__getClassId((BattleServantData_o *)pieceComponent, 0LL);
            v114 = this->fields._battleServant_k__BackingField;
            this->fields._iconClassId_k__BackingField = pieceComponent;
            if ( !v114 )
              goto LABEL_150;
            this->fields._iconFrameType_k__BackingField = v114->fields._frameType_k__BackingField;
            this->fields._iconLevel_k__BackingField = v114->fields.level;
            if ( !v107 )
              goto LABEL_150;
            WarBoardServantPieceComponent__SetServantIcon((WarBoardServantPieceComponent_o *)v107, 0LL);
            ((void (__fastcall *)(UnityEngine_Object_o *, void *))v107->klass[1]._1.parent)(
              v107,
              v107->klass[1]._1.generic_class);
            ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *))v107->klass[1]._1.castClass)(
              v107,
              v107->klass[1]._1.declaringType);
          }
        }
        if ( v83 | v104 && !this->fields._isDead_k__BackingField )
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
          WarBoardPieceBaseComponent__UpdateUiByBuffChanged((WarBoardPieceBaseComponent_o *)pieceComponent, v103);
          if ( v151 )
          {
            v117 = (WarBoardPieceData___c__DisplayClass312_0_o *)sub_B0D974(
                                                                   WarBoardPieceData___c__DisplayClass312_0_TypeInfo,
                                                                   v115,
                                                                   v116);
            WarBoardPieceData___c__DisplayClass312_0___ctor(v117, 0LL);
            if ( !v117 )
              goto LABEL_150;
            v117->fields.popupClose = 0;
            v120 = (System_Func_bool__o *)sub_B0D974(System_Func_bool__TypeInfo, v118, v119);
            System_Func_bool____ctor(
              v120,
              (Il2CppObject *)v117,
              Method_WarBoardPieceData___c__DisplayClass312_0__UpdateFromServerData_b__2__,
              (const MethodInfo_26056AC *)Method_System_Func_bool___ctor__);
            v123 = (UnityEngine_WaitUntil_o *)sub_B0D974(UnityEngine_WaitUntil_TypeInfo, v121, v122);
            UnityEngine_WaitUntil___ctor(v123, v120, 0LL);
            v126 = sub_B0D974(WarBoardCallbackTask_TypeInfo, v124, v125);
            WarBoardCallbackTask___ctor(
              (WarBoardCallbackTask_o *)v126,
              (UnityEngine_CustomYieldInstruction_o *)v123,
              0LL);
            if ( !v126 )
              goto LABEL_150;
            v129 = *(System_Delegate_o **)(v126 + 32);
            v130 = (WarBoardTaskBase_TaskCallback_o *)sub_B0D974(WarBoardTaskBase_TaskCallback_TypeInfo, v127, v128);
            WarBoardTaskBase_TaskCallback___ctor(
              v130,
              (Il2CppObject *)v117,
              Method_WarBoardPieceData___c__DisplayClass312_0__UpdateFromServerData_b__3__,
              0LL);
            v131 = (System_Int32_array **)System_Delegate__Combine(v129, (System_Delegate_o *)v130, 0LL);
            if ( v131 && *v131 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
            {
              v149 = (WarBoardPieceData_o *)sub_B0DC70(v131);
              WarBoardPieceData__ToJson(v149, v150);
            }
            else
            {
              *(_QWORD *)(v126 + 32) = v131;
              sub_B0D840((BattleServantConfConponent_o *)(v126 + 32), v131, v132, v133, v134, v135, v136, v137);
              Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              pieceComponent = sub_B0D8BC(WarBoardTaskBase___TypeInfo, 1LL);
              if ( !pieceComponent )
                goto LABEL_150;
              v139 = pieceComponent;
              v140 = sub_B0D964(v126, *(_QWORD *)(*(_QWORD *)pieceComponent + 64LL));
              if ( !v140 )
              {
                v147 = sub_B0D99C();
                sub_B0D948(v147, 0LL);
              }
              if ( !*(_DWORD *)(v139 + 24) )
              {
                v148 = sub_B0D9A8(v140);
                sub_B0D948(v148, 0LL);
              }
              *(_QWORD *)(v139 + 32) = v126;
              sub_B0D840(
                (BattleServantConfConponent_o *)(v139 + 32),
                (System_Int32_array **)v126,
                v141,
                v142,
                v143,
                v144,
                v145,
                v146);
              if ( !Instance )
                goto LABEL_150;
              WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 1, (WarBoardTaskBase_array *)v139, 0LL);
            }
          }
          return;
        }
LABEL_150:
        sub_B0D97C(pieceComponent);
      }
    }
    else
    {
      v151 = !this->fields._isDead_k__BackingField;
      if ( serverServantData )
        goto LABEL_34;
    }
    v83 = 0;
    goto LABEL_63;
  }
  masterInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.masterInfo;
  v37 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                             System_Func_WarBoardUserMasterData__bool__TypeInfo,
                                                                             warBoardDataEntity,
                                                                             deadBreakList);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v37,
    (Il2CppObject *)this,
    Method_WarBoardPieceData__UpdateFromServerData_b__312_0__,
    (const MethodInfo_26189B8 *)Method_System_Func_WarBoardUserMasterData__bool___ctor__);
  v38 = (struct WarBoardUserMasterData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                             masterInfo,
                                             (System_Func_TSource__bool__o *)v37,
                                             (const MethodInfo_1B4C408 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
  if ( !v38 )
    return;
  defeatPoint = v38->fields.defeatPoint;
  v46 = v38;
  if ( this->fields._breakPoint_k__BackingField > defeatPoint )
  {
    this->fields._breakPoint_k__BackingField = defeatPoint;
    if ( v38->fields.defeatPoint <= 0 )
      this->fields._isDead_k__BackingField = 1;
  }
  p_serverMasterData_k__BackingField = &this->fields._serverMasterData_k__BackingField;
  serverMasterData_k__BackingField = this->fields._serverMasterData_k__BackingField;
  if ( serverMasterData_k__BackingField )
    v49 = serverMasterData_k__BackingField->fields.commandSpellNum != v38->fields.commandSpellNum;
  else
    v49 = 1;
  this->fields._serverMasterData_k__BackingField = v38;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._serverMasterData_k__BackingField,
    (System_Int32_array **)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  if ( this->fields._currentActionCount_k__BackingField == v46->fields.currentLimitActionPoint )
  {
    v77 = this->fields._Cost_k__BackingField;
    if ( v77 )
    {
      if ( !*p_serverMasterData_k__BackingField )
        goto LABEL_150;
      v78 = v77->fields._CurrentActionPoint_k__BackingField != (*p_serverMasterData_k__BackingField)->fields.currentPieceActionPoint;
    }
    else
    {
      v78 = 0;
    }
  }
  else
  {
    v78 = 1;
  }
  v84 = (int32_t *)*p_serverMasterData_k__BackingField;
  if ( !*p_serverMasterData_k__BackingField )
    goto LABEL_150;
  pieceComponent = (__int64)this->fields._Cost_k__BackingField;
  this->fields._limitActionCount_k__BackingField = v84[12];
  this->fields._currentActionCount_k__BackingField = v84[11];
  this->fields._attackCount_k__BackingField = v84[13];
  this->fields._nowSquareIndex_k__BackingField = v84[14];
  if ( !pieceComponent )
    goto LABEL_150;
  v85 = v6;
  WarBoardCost__UpdateCurrentPointByServerData((WarBoardCost_o *)pieceComponent, v84[18], 0LL);
  v86 = !this->fields._forceId_k__BackingField
     && !this->fields._groupId_k__BackingField
     && this->fields._type_k__BackingField == 1;
  if ( (v86 & (v49 | v85)) != 0 )
  {
    v87 = this->fields.pieceComponent;
    if ( v87
      && (v88 = *(&WarBoardMasterPieceComponent_TypeInfo->_2.bitflags2 + 1),
          *(&v87->klass->_2.bitflags2 + 1) >= (unsigned int)v88) )
    {
      v89 = (WarBoardMasterPieceComponent_c *)v87->klass->_2.typeHierarchy[v88 - 1] == WarBoardMasterPieceComponent_TypeInfo
          ? (UnityEngine_Object_o *)this->fields.pieceComponent
          : 0LL;
    }
    else
    {
      v89 = 0LL;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    pieceComponent = UnityEngine_Object__op_Inequality(v89, 0LL, 0LL);
    if ( (pieceComponent & 1) != 0 )
    {
      if ( !*p_serverMasterData_k__BackingField )
        goto LABEL_150;
      if ( !v89 )
        goto LABEL_150;
      pieceComponent = (__int64)v89[13].monitor;
      if ( !pieceComponent )
        goto LABEL_150;
      CommandSpellIconComponent__SetRemain(
        (CommandSpellIconComponent_o *)pieceComponent,
        (*p_serverMasterData_k__BackingField)->fields.commandSpellNum,
        0LL);
    }
  }
  if ( v78 | v85 && !this->fields._isDead_k__BackingField )
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
    sub_B0D97C(0LL);
  WarBoardPieceBaseComponent__UpdateWidgetDepth(pieceComponent, method);
}


void __fastcall WarBoardPieceData__WallAttack(WarBoardPieceData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_B0D97C(0LL);
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, int32_t, Il2CppMethodPointer))pieceComponent->klass->vtable._28_OnWallAttack.method)(
    pieceComponent,
    squareIndex,
    pieceComponent->klass->vtable._29_OnAfterWallAttack.methodPtr);
}


bool __fastcall WarBoardPieceData___SetContinue_b__333_0(
        WarBoardPieceData_o *this,
        WarBoardPieceData_o *otherPiece,
        const MethodInfo *method)
{
  if ( !otherPiece )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return x->fields.forceId == this->fields._forceId_k__BackingField
      && x->fields.groupId == this->fields._groupId_k__BackingField;
}


bool __fastcall WarBoardPieceData___SetInitinalData_b__311_1(
        WarBoardPieceData_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
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
    sub_B0D97C(this);
  return x->fields.forceId == this->fields._forceId_k__BackingField
      && x->fields.groupId == this->fields._groupId_k__BackingField;
}


bool __fastcall WarBoardPieceData___UpdateFromServerData_b__312_1(
        WarBoardPieceData_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return x->fields.forceId == this->fields._forceId_k__BackingField
      && x->fields.groupId == this->fields._groupId_k__BackingField
      && x->fields.pieceIndex == this->fields._index_k__BackingField;
}


WarBoardActionPointEntity_o *__fastcall WarBoardPieceData__get_ActionPointEntity(
        WarBoardPieceData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  WarBoardActionPointMaster_o *Master_WarQuestSelectionMaster; // x0

  if ( (byte_421335F & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMaster_WarBoardActionPointMaster___, method);
    sub_B0D8A4(&DataManager_TypeInfo, v3);
    byte_421335F = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardActionPointMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarBoardActionPointMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B0D97C(0LL);
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
    sub_B0D97C(this);
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
  if ( (byte_421335E & 1) == 0 )
  {
    this = (WarBoardPieceData_o *)sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_421335E = 1;
  }
  serverServantData = v2->fields.serverServantData;
  if ( !serverServantData )
    sub_B0D97C(this);
  v4 = *(_OWORD *)&serverServantData->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&serverServantData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(&v6, 0LL);
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
    sub_B0D97C(0LL);
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

  if ( (byte_421335C & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_421335C = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList) == 0LL )
    sub_B0D97C(Instance);
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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
  sub_B0D840(
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


void __fastcall WarBoardPieceData_RouteSaveData___ctor_22736840(
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
  *(_OWORD *)&this->fields.forceId = xmmword_3202D70;
}


void __fastcall WarBoardPieceData_SaveData___ctor_22736960(
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
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct WarBoardPieceData_o *v18; // x0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.owner = owner;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.owner, (System_Int32_array **)owner, v5, v6, v7, v8, v9, v10);
  WarBoardPieceData_SaveData__Save(this, v11);
  v18 = this->fields.owner;
  if ( !v18 )
    sub_B0D97C(0LL);
  v18->fields.localSaveData = this;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v18->fields.localSaveData,
    (System_Int32_array **)this,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
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
  __int64 v9; // x1
  struct WarBoardPieceData_o *owner; // x8
  struct WarBoardPieceData_o *v11; // x8
  struct WarBoardPieceData_o *v12; // x8
  struct WarBoardPieceData_o *v13; // x8
  System_Int32_array **prevAiRoute; // x1
  struct WarBoardPieceData_o *v15; // x8
  struct WarBoardPieceData_o *v16; // x8
  struct WarBoardPieceData_o *v17; // x8
  struct WarBoardPieceData_o *v18; // x8
  struct WarBoardPieceData_o *v19; // x8
  struct WarBoardPieceData_o *v20; // x8
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct WarBoardPieceData_o *v27; // x8
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  struct WarBoardPieceData_o *v29; // x8
  struct WarBoardUserMasterData_o *v30; // x8
  struct WarBoardPieceData_o *v31; // x8
  struct WarBoardUserMasterData_o *v32; // x8
  struct WarBoardPieceData_o *v33; // x8
  struct WarBoardUserMasterData_o *v34; // x8
  struct WarBoardPieceData_o *v35; // x8
  struct WarBoardUserMasterData_o *v36; // x8
  struct WarBoardPieceData_o *v37; // x8
  struct WarBoardUserMasterData_o *v38; // x8
  struct WarBoardUserServantData_o *serverServantData; // x8
  struct WarBoardPieceData_o *v40; // x8
  struct WarBoardUserServantData_o *v41; // x8
  struct WarBoardPieceData_o *v42; // x8
  struct WarBoardUserServantData_o *v43; // x8
  System_Int32_array **buffSave; // x1
  struct WarBoardPieceData_o *v45; // x8
  struct WarBoardUserServantData_o *v46; // x8
  struct WarBoardPieceData_o *v47; // x8
  struct WarBoardUserServantData_o *v48; // x8
  struct WarBoardPieceData_o *v49; // x8
  struct WarBoardUserServantData_o *v50; // x8
  struct WarBoardPieceData_o *v51; // x8
  struct WarBoardUserServantData_o *v52; // x8
  struct WarBoardPieceData_o *v53; // x8
  struct WarBoardUserServantData_o *v54; // x8
  struct WarBoardPieceData_o *v55; // x8
  struct WarBoardUserServantData_o *v56; // x8
  struct WarBoardPieceData_o *v57; // x8
  struct WarBoardUserServantData_o *v58; // x8
  struct WarBoardPieceData_o *v59; // x8
  struct WarBoardUserServantData_o *v60; // x8
  __int128 v61; // q1
  WarBoardPieceData_SaveData_o *v62; // x20
  struct WarBoardPieceData_o *v63; // x8
  BattleServantData_o *v64; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+20h] [xbp-30h]

  v8 = this;
  if ( (byte_421388D & 1) == 0 )
  {
    sub_B0D8A4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    this = (WarBoardPieceData_SaveData_o *)sub_B0D8A4(
                                             &Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__,
                                             v9);
    byte_421388D = 1;
  }
  owner = v8->fields.owner;
  if ( owner )
  {
    owner->fields._breakPoint_k__BackingField = v8->fields.breakPoint;
    v11 = v8->fields.owner;
    if ( !v11 )
      goto LABEL_62;
    v11->fields._nowSquareIndex_k__BackingField = v8->fields.squareIndex;
    v12 = v8->fields.owner;
    if ( !v12 )
      goto LABEL_62;
    v12->fields._currentActionCount_k__BackingField = v8->fields.actionCount;
    v13 = v8->fields.owner;
    if ( !v13 )
      goto LABEL_62;
    v13->fields._attackCount_k__BackingField = v8->fields.attackCount;
    this = (WarBoardPieceData_SaveData_o *)v8->fields.owner;
    if ( !this )
      goto LABEL_62;
    prevAiRoute = (System_Int32_array **)v8->fields.prevAiRoute;
    *(_QWORD *)&this[1].fields.pieceIndex = prevAiRoute;
    sub_B0D840((BattleServantConfConponent_o *)&this[1].fields.pieceIndex, prevAiRoute, v2, v3, v4, v5, v6, v7);
    v15 = v8->fields.owner;
    if ( !v15 )
      goto LABEL_62;
    v15->fields._entryTurn_k__BackingField = v8->fields.entryTurn;
    v16 = v8->fields.owner;
    if ( !v16 )
      goto LABEL_62;
    v16->fields._StageReinfoId_k__BackingField = v8->fields.stageReinforcementId;
    v17 = v8->fields.owner;
    if ( !v17 )
      goto LABEL_62;
    v17->fields._ReinfoIndex_k__BackingField = v8->fields.reinforcementIndex;
    v18 = v8->fields.owner;
    if ( !v18 )
      goto LABEL_62;
    v18->fields._overwriteActionType_k__BackingField = v8->fields.overwriteActionType;
    v19 = v8->fields.owner;
    if ( !v19 )
      goto LABEL_62;
    v19->fields._overwriteAiId_k__BackingField = v8->fields.overwriteAiId;
    this = (WarBoardPieceData_SaveData_o *)v8->fields.owner;
    if ( !this )
      goto LABEL_62;
    this = (WarBoardPieceData_SaveData_o *)WarBoardPieceData__get_HasCost((WarBoardPieceData_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v20 = v8->fields.owner;
      if ( !v20 )
        goto LABEL_62;
      this = (WarBoardPieceData_SaveData_o *)v20->fields._Cost_k__BackingField;
      if ( !this )
        goto LABEL_62;
      WarBoardCost__UpdateCurrentPointBySaveData((WarBoardCost_o *)this, v8->fields.currentActionPoint, 0LL);
    }
    this = (WarBoardPieceData_SaveData_o *)v8->fields.owner;
    if ( !this )
      goto LABEL_62;
    this = (WarBoardPieceData_SaveData_o *)WarBoardPieceData__get_isMaster((WarBoardPieceData_o *)this, 0LL);
    v27 = v8->fields.owner;
    if ( !v27 )
      goto LABEL_62;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      serverMasterData_k__BackingField = v27->fields._serverMasterData_k__BackingField;
      if ( serverMasterData_k__BackingField )
      {
        serverMasterData_k__BackingField->fields.currentLimitActionPoint = v8->fields.actionCount;
        v29 = v8->fields.owner;
        if ( v29 )
        {
          v30 = v29->fields._serverMasterData_k__BackingField;
          if ( v30 )
          {
            v30->fields.squareIndex = v8->fields.squareIndex;
            v31 = v8->fields.owner;
            if ( v31 )
            {
              v32 = v31->fields._serverMasterData_k__BackingField;
              if ( v32 )
              {
                v32->fields.currentForceActionPoint = v8->fields.currentForceActionPoint;
                v33 = v8->fields.owner;
                if ( v33 )
                {
                  v34 = v33->fields._serverMasterData_k__BackingField;
                  if ( v34 )
                  {
                    v34->fields.attackCount = v8->fields.attackCount;
                    v35 = v8->fields.owner;
                    if ( v35 )
                    {
                      v36 = v35->fields._serverMasterData_k__BackingField;
                      if ( v36 )
                      {
                        v36->fields.currentPieceActionPoint = v8->fields.currentActionPoint;
                        v37 = v8->fields.owner;
                        if ( v37 )
                        {
                          v38 = v37->fields._serverMasterData_k__BackingField;
                          if ( v38 )
                          {
                            v38->fields.defeatPoint = v8->fields.breakPoint;
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
        sub_B0D97C(this);
      }
    }
    else
    {
      serverServantData = v27->fields.serverServantData;
      if ( serverServantData )
      {
        serverServantData->fields.currentActionPoint = v8->fields.actionCount;
        v40 = v8->fields.owner;
        if ( !v40 )
          goto LABEL_62;
        v41 = v40->fields.serverServantData;
        if ( !v41 )
          goto LABEL_62;
        v41->fields.squareIndex = v8->fields.squareIndex;
        v42 = v8->fields.owner;
        if ( !v42 )
          goto LABEL_62;
        v43 = v42->fields.serverServantData;
        if ( !v43 )
          goto LABEL_62;
        buffSave = (System_Int32_array **)v8->fields.buffSave;
        v43->fields.buffDataSave = (struct BattleBuffData_SaveData_o *)buffSave;
        sub_B0D840((BattleServantConfConponent_o *)&v43->fields.buffDataSave, buffSave, v21, v22, v23, v24, v25, v26);
        v45 = v8->fields.owner;
        if ( !v45 )
          goto LABEL_62;
        v46 = v45->fields.serverServantData;
        if ( !v46 )
          goto LABEL_62;
        v46->fields.attackCount = v8->fields.attackCount;
        v47 = v8->fields.owner;
        if ( !v47 )
          goto LABEL_62;
        v48 = v47->fields.serverServantData;
        if ( !v48 )
          goto LABEL_62;
        v48->fields.currentHp = v8->fields.hp;
        v49 = v8->fields.owner;
        if ( !v49 )
          goto LABEL_62;
        v50 = v49->fields.serverServantData;
        if ( !v50 )
          goto LABEL_62;
        v50->fields.currentNp = v8->fields.np;
        v51 = v8->fields.owner;
        if ( !v51 )
          goto LABEL_62;
        v52 = v51->fields.serverServantData;
        if ( !v52 )
          goto LABEL_62;
        v52->fields.nextNpTurn = v8->fields.tdTurn;
        v53 = v8->fields.owner;
        if ( !v53 )
          goto LABEL_62;
        v54 = v53->fields.serverServantData;
        if ( !v54 )
          goto LABEL_62;
        v54->fields.criticalStars = v8->fields.criticalStars;
        v55 = v8->fields.owner;
        if ( !v55 )
          goto LABEL_62;
        v56 = v55->fields.serverServantData;
        if ( !v56 )
          goto LABEL_62;
        v56->fields.currentPieceActionPoint = v8->fields.currentActionPoint;
        v57 = v8->fields.owner;
        if ( !v57 )
          goto LABEL_62;
        v58 = v57->fields.serverServantData;
        if ( !v58 )
          goto LABEL_62;
        v58->fields.defeatPoint = v8->fields.breakPoint;
        this = (WarBoardPieceData_SaveData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        v59 = v8->fields.owner;
        if ( !v59 )
          goto LABEL_62;
        v60 = v59->fields.serverServantData;
        if ( !v60 )
          goto LABEL_62;
        v61 = *(_OWORD *)&v60->fields.id.fields.fakeValue;
        v62 = this;
        *(_OWORD *)&v66.fields.currentCryptoKey = *(_OWORD *)&v60->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v66.fields.fakeValue = v61;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v65 = v66;
        this = (WarBoardPieceData_SaveData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44165732(
                                                 &v65,
                                                 0LL);
        if ( !v62 )
          goto LABEL_62;
        this = (WarBoardPieceData_SaveData_o *)WarBoardManager__GetBattleServant(
                                                 (WarBoardManager_o *)v62,
                                                 (int64_t)this,
                                                 0LL);
        v63 = v8->fields.owner;
        if ( !v63 )
          goto LABEL_62;
        v64 = (BattleServantData_o *)this;
        this = (WarBoardPieceData_SaveData_o *)v63->fields.serverServantData;
        if ( !this )
          goto LABEL_62;
        WarBoardUserServantData__SetBattleServantData((WarBoardUserServantData_o *)this, v64, 0LL);
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
      sub_B0D97C(this);
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.buffSave, 0LL, v4, v5, v6, v7, v8, v9);
  v19 = this->fields.owner;
  this->fields.currentForceActionPoint = 0;
  if ( !v19 )
    goto LABEL_28;
  PrevAiRoute_k__BackingField = v19->fields._PrevAiRoute_k__BackingField;
  this->fields.prevAiRoute = PrevAiRoute_k__BackingField;
  sub_B0D840(
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
        sub_B0D840(
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
      sub_B0D97C(owner);
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
    sub_B0D97C(this);
  Piece = WarBoardData__GetPiece(data, this->fields.forceId, this->fields.groupId, this->fields.pieceIndex, 0, 0LL);
  this->fields.owner = Piece;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.owner, (System_Int32_array **)Piece, v5, v6, v7, v8, v9, v10);
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields.localSaveData = this;
    sub_B0D840(
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
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_421388A & 1) == 0 )
  {
    sub_B0D8A4(&WarBoardPieceData___c_TypeInfo, v1);
    byte_421388A = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(WarBoardPieceData___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardPieceData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v3;
  sub_B0D840(static_fields, (System_Int32_array **)v3, v5, v6, v7, v8, v9, v10);
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
    sub_B0D97C(0LL);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_bool__o *_9__4; // x22
  WarBoardManager_o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_421388B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_bool___ctor__, method);
    sub_B0D8A4(&System_Action_bool__TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_B0D8A4(&Method_WarBoardPieceData___c__DisplayClass312_0__UpdateFromServerData_b__4__, v5);
    byte_421388B = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__4 = this->fields.__9__4;
  v10 = (WarBoardManager_o *)Instance;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_bool__o *)sub_B0D974(System_Action_bool__TypeInfo, v7, v8);
    System_Action_bool____ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_WarBoardPieceData___c__DisplayClass312_0__UpdateFromServerData_b__4__,
      (const MethodInfo_246AAF4 *)Method_System_Action_bool___ctor__);
    this->fields.__9__4 = _9__4;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.__9__4,
      (System_Int32_array **)_9__4,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !v10 )
    sub_B0D97C(Instance);
  WarBoardManager__ShowActionCountDecreaseNoticePopup(v10, _9__4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceData___c__DisplayClass312_0___UpdateFromServerData_b__4(
        WarBoardPieceData___c__DisplayClass312_0_o *this,
        bool ok,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *_9__5; // x22
  WarBoardManager_o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_421388C & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, ok);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_B0D8A4(&Method_WarBoardPieceData___c__DisplayClass312_0__UpdateFromServerData_b__5__, v5);
    byte_421388C = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__5 = this->fields.__9__5;
  v10 = (WarBoardManager_o *)Instance;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v7, v8);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)this,
      Method_WarBoardPieceData___c__DisplayClass312_0__UpdateFromServerData_b__5__,
      0LL);
    this->fields.__9__5 = _9__5;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.__9__5,
      (System_Int32_array **)_9__5,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( !v10 )
    sub_B0D97C(Instance);
  WarBoardManager__HideActionCountDecreaseNoticePopup(v10, _9__5, 0LL);
}


void __fastcall WarBoardPieceData___c__DisplayClass312_0___UpdateFromServerData_b__5(
        WarBoardPieceData___c__DisplayClass312_0_o *this,
        const MethodInfo *method)
{
  this->fields.popupClose = 1;
}