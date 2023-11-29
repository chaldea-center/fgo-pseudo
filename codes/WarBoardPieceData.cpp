void __fastcall WarBoardPieceData___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  float v2; // s4
  float v3; // s5
  float v4; // s6
  float v5; // s7
  struct WarBoardPieceData_StaticFields v6; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_40F8613 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardPieceData_TypeInfo, v1);
    byte_40F8613 = 1;
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
  int32_t pieceIndex; // w8
  int32_t forceId; // w28
  int32_t groupId; // w21
  int32_t v37; // w27
  int32_t squareIndex; // w8
  struct System_Int32_array *Individuality; // x0
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  WarBoardStagePieceDetailMaster_o *Master_WarQuestSelectionMaster; // x0
  int32_t breakPoint; // w8
  int32_t restrictionId; // w8
  struct BattleServantData_o **p_battleServant_k__BackingField; // x25
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  WebViewManager_o *Instance; // x0
  const MethodInfo *v57; // x1
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  WebViewManager_o *v64; // x0
  WarBoardData_o *monitor; // x0
  int32_t TurnCount; // w0
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x8
  int32_t RoleType; // w0
  WarBoardStagePieceDetailEntity_o *v69; // x8
  int32_t type_k__BackingField; // w8
  struct WarBoardUserMasterData_o **p_serverMasterData_k__BackingField; // x27
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  WarBoardActionPointClassMaster_o *v73; // x26
  const MethodInfo *v74; // x1
  WarBoardActionPointEntity_o *ActionPointEntity; // x0
  WarBoardActionPointClassEntity_o *MasterEntityFromStageId; // x0
  struct WarBoardCost_o *v77; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  struct WarBoardUserMasterData_o *v84; // x8
  WarBoardCost_o *Cost_k__BackingField; // x0
  struct WarBoardUserMasterData_o *v86; // x8
  int32_t defeatPoint; // w8
  WebViewManager_o *v88; // x0
  __int128 v89; // q1
  WarBoardManager_o *v90; // x26
  int64_t v91; // x0
  struct BattleServantData_o *BattleServant; // x0
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_String_array **v99; // x2
  System_String_array **v100; // x3
  System_Boolean_array **v101; // x4
  System_Int32_array **v102; // x5
  System_Int32_array *v103; // x6
  System_Int32_array *v104; // x7
  WarBoardActionPointClassMaster_o *v105; // x26
  const MethodInfo *v106; // x1
  WarBoardActionPointEntity_o *v107; // x0
  WarBoardActionPointEntity_o *v108; // x27
  int32_t ClassId; // w0
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  struct WarBoardCost_o *v111; // x0
  System_String_array **v112; // x2
  System_String_array **v113; // x3
  System_Boolean_array **v114; // x4
  System_Int32_array **v115; // x5
  System_Int32_array *v116; // x6
  System_Int32_array *v117; // x7
  WarBoardCost_o *v118; // x0
  int32_t v119; // w8
  int32_t forceId_k__BackingField; // w8
  _DWORD *Item; // x0
  WebViewManager_o *v122; // x0
  WarBoardData_o *v123; // x0
  UserGameEntity_o *SelfUserGame; // x0
  int64_t userEquipId; // x8
  __int64 v126; // x20
  __int64 v127; // x20
  DataManager_o *v128; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x0
  __int64 v131; // x20
  int64_t fakeValue; // x21
  _QWORD *NpcEntity; // x0
  __int64 v134; // x2
  WebViewManager_o *v135; // x0
  WarBoardData_o *v136; // x0
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t npcId; // x8
  __int64 v139; // x8
  int64_t npcSvtEquipId; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v142; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v143; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v144; // 0:x0.16

  if ( (byte_40F85F7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEquipMaster___, layout);
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___, v16);
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___, v17);
    sub_B16FFC(&DataManager_TypeInfo, v18);
    sub_B16FFC(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v19);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__, v20);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
    sub_B16FFC(&WarBoardPieceData_PieceStatusCache_TypeInfo, v23);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v24);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v25);
    sub_B16FFC(&WarBoardPieceData_TypeInfo, v26);
    byte_40F85F7 = 1;
  }
  v27 = (WarBoardPieceData_PieceStatusCache_o *)sub_B170CC(
                                                  WarBoardPieceData_PieceStatusCache_TypeInfo,
                                                  layout,
                                                  servantData,
                                                  masterData,
                                                  deckData);
  WarBoardPieceData_PieceStatusCache___ctor(v27, 0LL);
  this->fields.statusCache = v27;
  sub_B16F98(
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
  v37 = layout->fields.pieceIndex;
  this->fields._index_k__BackingField = v37;
  if ( (BYTE3(WarBoardPieceData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPieceData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo);
  }
  this->fields._uniqueIndex_k__BackingField = (forceId << 24) | ((unsigned __int8)groupId << 16) | (unsigned __int16)v37;
  squareIndex = layout->fields.squareIndex;
  this->fields._nowSquareIndex_k__BackingField = squareIndex;
  this->fields._PutSquareIndex_k__BackingField = squareIndex;
  Individuality = WarBoardStageLayoutEntity__GetIndividuality(layout, 0LL);
  this->fields._individuality_k__BackingField = Individuality;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._individuality_k__BackingField,
    (System_Int32_array **)Individuality,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardStagePieceDetailMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_91;
  WarBoardStagePieceDetailMaster__TryGetEntity(
    Master_WarQuestSelectionMaster,
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
  sub_B16F98(
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_91;
  if ( Instance[4].monitor )
  {
    v64 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v64 )
      goto LABEL_91;
    monitor = (WarBoardData_o *)v64[4].monitor;
    if ( !monitor )
      goto LABEL_91;
    TurnCount = WarBoardData__get_TurnCount(monitor, 0LL);
  }
  else
  {
    TurnCount = 0;
  }
  stagePieceDetailEntity = this->fields.stagePieceDetailEntity;
  this->fields._entryTurn_k__BackingField = TurnCount;
  if ( stagePieceDetailEntity )
  {
    RoleType = WarBoardStagePieceDetailEntity__getRoleType(stagePieceDetailEntity, 0LL);
    v69 = this->fields.stagePieceDetailEntity;
    this->fields._roleType_k__BackingField = RoleType;
    if ( !v69 )
      goto LABEL_91;
    this->fields._isNotIncludeWin_k__BackingField = WarBoardStagePieceDetailEntity__IsNotIncludeWin(v69, 0LL);
  }
  type_k__BackingField = this->fields._type_k__BackingField;
  if ( masterData && type_k__BackingField == 1 )
  {
    this->fields._serverMasterData_k__BackingField = masterData;
    p_serverMasterData_k__BackingField = &this->fields._serverMasterData_k__BackingField;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._serverMasterData_k__BackingField,
      (System_Int32_array **)masterData,
      v58,
      v59,
      v60,
      v61,
      v62,
      v63);
    serverMasterData_k__BackingField = this->fields._serverMasterData_k__BackingField;
    if ( !serverMasterData_k__BackingField )
      goto LABEL_91;
    this->fields._nowSquareIndex_k__BackingField = serverMasterData_k__BackingField->fields.squareIndex;
    this->fields._limitActionCount_k__BackingField = serverMasterData_k__BackingField->fields.limitActionPoint;
    this->fields._currentActionCount_k__BackingField = serverMasterData_k__BackingField->fields.currentLimitActionPoint;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v73 = (WarBoardActionPointClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    ActionPointEntity = WarBoardPieceData__get_ActionPointEntity(this, v74);
    if ( !v73 )
      goto LABEL_91;
    MasterEntityFromStageId = WarBoardActionPointClassMaster__GetMasterEntityFromStageId(v73, ActionPointEntity, 0LL);
    v77 = WarBoardCost__Create(MasterEntityFromStageId, this->fields.stagePieceDetailEntity, 0LL, 0LL);
    this->fields._Cost_k__BackingField = v77;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._Cost_k__BackingField,
      (System_Int32_array **)v77,
      v78,
      v79,
      v80,
      v81,
      v82,
      v83);
    v84 = this->fields._serverMasterData_k__BackingField;
    if ( !v84 )
      goto LABEL_91;
    Cost_k__BackingField = this->fields._Cost_k__BackingField;
    if ( !Cost_k__BackingField )
      goto LABEL_91;
    WarBoardCost__UpdateCurrentPointByServerData(Cost_k__BackingField, v84->fields.currentPieceActionPoint, 0LL);
    v86 = *p_serverMasterData_k__BackingField;
    if ( !*p_serverMasterData_k__BackingField )
      goto LABEL_91;
    this->fields._attackCount_k__BackingField = v86->fields.attackCount;
    defeatPoint = v86->fields.defeatPoint;
    this->fields._breakPoint_k__BackingField = defeatPoint;
    if ( defeatPoint <= 0 )
LABEL_45:
      this->fields._isDead_k__BackingField = 1;
  }
  else if ( servantData && !type_k__BackingField )
  {
    v88 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v89 = *(_OWORD *)&servantData->fields.id.fields.fakeValue;
    v90 = (WarBoardManager_o *)v88;
    *(_OWORD *)&v143.fields.currentCryptoKey = *(_OWORD *)&servantData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v143.fields.fakeValue = v89;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v142 = v143;
    v91 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v142, 0LL);
    if ( !v90 )
      goto LABEL_91;
    BattleServant = WarBoardManager__GetBattleServant(v90, v91, 0LL);
    this->fields._battleServant_k__BackingField = BattleServant;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._battleServant_k__BackingField,
      (System_Int32_array **)BattleServant,
      v93,
      v94,
      v95,
      v96,
      v97,
      v98);
    this->fields.serverServantData = servantData;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.serverServantData,
      (System_Int32_array **)servantData,
      v99,
      v100,
      v101,
      v102,
      v103,
      v104);
    this->fields._nowSquareIndex_k__BackingField = servantData->fields.squareIndex;
    this->fields._limitActionCount_k__BackingField = servantData->fields.limitActionPoint;
    this->fields._currentActionCount_k__BackingField = servantData->fields.currentActionPoint;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v105 = (WarBoardActionPointClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    v107 = WarBoardPieceData__get_ActionPointEntity(this, v106);
    if ( !this->fields._battleServant_k__BackingField )
      goto LABEL_91;
    v108 = v107;
    ClassId = BattleServantData__getClassId(this->fields._battleServant_k__BackingField, 0LL);
    if ( !v105 )
      goto LABEL_91;
    EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                    v105,
                                    v108,
                                    ClassId,
                                    0LL);
    v111 = WarBoardCost__Create(EntityFromActionPointEntity, this->fields.stagePieceDetailEntity, 0LL, 0LL);
    this->fields._Cost_k__BackingField = v111;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields._Cost_k__BackingField,
      (System_Int32_array **)v111,
      v112,
      v113,
      v114,
      v115,
      v116,
      v117);
    v118 = this->fields._Cost_k__BackingField;
    if ( !v118 )
      goto LABEL_91;
    WarBoardCost__UpdateCurrentPointByServerData(v118, servantData->fields.currentPieceActionPoint, 0LL);
    this->fields._attackCount_k__BackingField = servantData->fields.attackCount;
    v119 = servantData->fields.defeatPoint;
    this->fields._breakPoint_k__BackingField = v119;
    if ( (v119 & 0x80000000) != 0 )
      goto LABEL_45;
  }
  forceId_k__BackingField = this->fields._forceId_k__BackingField;
  if ( forceId_k__BackingField || this->fields._groupId_k__BackingField )
  {
    if ( npcDict )
    {
      Item = System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___get_Item(
               (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)npcDict,
               (forceId_k__BackingField << 24) | ((unsigned __int8)this->fields._groupId_k__BackingField << 16),
               (const MethodInfo_2D65D74 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    }
    else
    {
      v122 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !v122 )
        goto LABEL_91;
      v123 = (WarBoardData_o *)v122[4].monitor;
      if ( !v123 )
        goto LABEL_91;
      Item = WarBoardData__GetNpcEntity(
               v123,
               this->fields._forceId_k__BackingField,
               this->fields._groupId_k__BackingField,
               0LL);
    }
    if ( this->fields._type_k__BackingField == 1 )
    {
      if ( Item )
      {
        this->fields._iconId_k__BackingField = Item[10];
        return;
      }
LABEL_91:
      sub_B170D4();
    }
    goto LABEL_89;
  }
  if ( this->fields._type_k__BackingField == 1 )
  {
    SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
    if ( !SelfUserGame )
      goto LABEL_91;
    this->fields._CurrentUserEquipId_k__BackingField = UserGameEntity__getActiveUserEquipId(SelfUserGame, 0LL);
    if ( deckData )
    {
      userEquipId = deckData->fields.userEquipId;
      if ( (int)userEquipId >= 1 )
        this->fields._CurrentUserEquipId_k__BackingField = userEquipId;
    }
    v126 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v126 + 306) & 1) == 0 )
      sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v127 = **(_QWORD **)(v126 + 192);
    if ( (*(_BYTE *)(v127 + 306) & 1) == 0 )
      sub_AAFCFC(v127);
    v128 = **(DataManager_o ***)(v127 + 184);
    if ( !v128 )
      goto LABEL_91;
    MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(v128, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEquipMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_91;
    Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
               MasterData_WarQuestSelectionMaster,
               this->fields._CurrentUserEquipId_k__BackingField,
               (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    if ( !Entity )
      goto LABEL_91;
    fakeValue = Entity->fields.id.fields.fakeValue;
    v131 = *(_QWORD *)&Entity->fields.id.fields.inited;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v144.fields.currentCryptoKey = fakeValue;
    *(_QWORD *)&v144.fields.fakeValue = v131;
    this->fields._iconId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                             v144,
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
          NpcEntity = System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___get_Item(
                        (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)npcDict,
                        0,
                        (const MethodInfo_2D65D74 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
        }
        else
        {
          v135 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !v135 )
            goto LABEL_91;
          v136 = (WarBoardData_o *)v135[4].monitor;
          if ( !v136 )
            goto LABEL_91;
          NpcEntity = WarBoardData__GetNpcEntity(
                        v136,
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
          if ( !NpcEntity )
            goto LABEL_91;
          v139 = NpcEntity[6];
          if ( !v139 )
            goto LABEL_91;
          if ( *(_DWORD *)(v139 + 24) <= (unsigned int)npcIdx )
          {
            sub_B17100(NpcEntity, v57, v134);
            sub_B170A0();
          }
          npcId = *(_QWORD *)(v139 + 8LL * npcIdx + 32);
        }
        this->fields._npcId_k__BackingField = npcId;
        npcSvtEquipId = servantData->fields.npcSvtEquipId;
        this->fields._isEditing_k__BackingField = 1;
        this->fields._npcEquipId_k__BackingField = npcSvtEquipId;
      }
LABEL_89:
      WarBoardPieceData__SetServantIconData(this, v57);
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


void __fastcall WarBoardPieceData___ctor_22205312(
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
  int32_t id; // w8
  int32_t v32; // w8
  int32_t forceId; // w28
  int32_t groupId; // w26
  int32_t pieceIndex; // w27
  WebViewManager_o *Instance; // x0
  WebViewManager_o *v37; // x0
  WarBoardData_o *monitor; // x0
  int32_t TurnCount; // w0
  int32_t breakPoint; // w8
  WarBoardStagePieceDetailMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v42; // x1
  __int64 v43; // x2
  struct System_Int32_array *specifyPieceIndexes; // x8
  __int64 ReinfoIndex_k__BackingField; // x9
  WarBoardStagePieceDetailEntity_o **p_stagePieceDetailEntity; // x24
  int32_t RoleType; // w0
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x8
  bool IsNotIncludeWin; // w8
  int32_t actionType; // w8
  WebViewManager_o *v51; // x0
  __int128 v52; // q1
  WarBoardManager_o *v53; // x24
  int64_t v54; // x0
  struct BattleServantData_o *BattleServant; // x0
  struct BattleServantData_o **p_battleServant_k__BackingField; // x24
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  System_String_array **v63; // x2
  System_String_array **v64; // x3
  System_Boolean_array **v65; // x4
  System_Int32_array **v66; // x5
  System_Int32_array *v67; // x6
  System_Int32_array *v68; // x7
  int32_t v69; // w8
  WarBoardActionPointClassMaster_o *v70; // x25
  const MethodInfo *v71; // x1
  WarBoardActionPointEntity_o *ActionPointEntity; // x0
  WarBoardActionPointEntity_o *v73; // x26
  int32_t ClassId; // w0
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  struct WarBoardCost_o *v76; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  WarBoardCost_o *Cost_k__BackingField; // x0
  int32_t forceId_k__BackingField; // w9
  int defeatPoint; // w8
  WebViewManager_o *v86; // x0
  WarBoardData_o *v87; // x0
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t npcId; // x8
  struct MiniMessagePack_MiniMessagePacker_o *seriazlier; // x8
  int64_t npcSvtEquipId; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v92; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v93; // [xsp+20h] [xbp-80h]
  int32_t value; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_40F85F8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___, stageReinforcementsEntity);
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___, v17);
    sub_B16FFC(&DataManager_TypeInfo, v18);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__, v19);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20);
    sub_B16FFC(&WarBoardPieceData_PieceStatusCache_TypeInfo, v21);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v22);
    sub_B16FFC(&WarBoardPieceData_TypeInfo, v23);
    byte_40F85F8 = 1;
  }
  value = 0;
  v24 = (WarBoardPieceData_PieceStatusCache_o *)sub_B170CC(
                                                  WarBoardPieceData_PieceStatusCache_TypeInfo,
                                                  stageReinforcementsEntity,
                                                  reinfoEntity,
                                                  servantData,
                                                  npcDict);
  WarBoardPieceData_PieceStatusCache___ctor(v24, 0LL);
  this->fields.statusCache = v24;
  sub_B16F98(
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
  v32 = reinfoEntity->fields.id;
  this->fields._type_k__BackingField = 0;
  this->fields._ReinfoId_k__BackingField = v32;
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  if ( Instance[4].monitor )
  {
    v37 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !v37 )
      goto LABEL_57;
    monitor = (WarBoardData_o *)v37[4].monitor;
    if ( !monitor )
      goto LABEL_57;
    TurnCount = WarBoardData__get_TurnCount(monitor, 0LL);
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
  Master_WarQuestSelectionMaster = (WarBoardStagePieceDetailMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
  specifyPieceIndexes = stageReinforcementsEntity->fields.specifyPieceIndexes;
  if ( !specifyPieceIndexes )
    goto LABEL_57;
  ReinfoIndex_k__BackingField = this->fields._ReinfoIndex_k__BackingField;
  if ( (unsigned int)ReinfoIndex_k__BackingField >= specifyPieceIndexes->max_length )
    goto LABEL_58;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_57;
  p_stagePieceDetailEntity = &this->fields.stagePieceDetailEntity;
  if ( WarBoardStagePieceDetailMaster__TryGetEntity(
         Master_WarQuestSelectionMaster,
         &this->fields.stagePieceDetailEntity,
         this->fields.stageId,
         this->fields._forceId_k__BackingField,
         this->fields._groupId_k__BackingField,
         specifyPieceIndexes->m_Items[ReinfoIndex_k__BackingField + 1],
         0LL) )
  {
    if ( !*p_stagePieceDetailEntity )
      goto LABEL_57;
    RoleType = WarBoardStagePieceDetailEntity__getRoleType(*p_stagePieceDetailEntity, 0LL);
    stagePieceDetailEntity = this->fields.stagePieceDetailEntity;
    this->fields._roleType_k__BackingField = RoleType;
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
  v51 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v52 = *(_OWORD *)&servantData->fields.id.fields.fakeValue;
  v53 = (WarBoardManager_o *)v51;
  *(_OWORD *)&v93.fields.currentCryptoKey = *(_OWORD *)&servantData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v93.fields.fakeValue = v52;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v92 = v93;
  v54 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v92, 0LL);
  if ( !v53 )
    goto LABEL_57;
  BattleServant = WarBoardManager__GetBattleServant(v53, v54, 0LL);
  this->fields._battleServant_k__BackingField = BattleServant;
  p_battleServant_k__BackingField = &this->fields._battleServant_k__BackingField;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._battleServant_k__BackingField,
    (System_Int32_array **)BattleServant,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
  this->fields.serverServantData = servantData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.serverServantData,
    (System_Int32_array **)servantData,
    v63,
    v64,
    v65,
    v66,
    v67,
    v68);
  v69 = servantData->fields.squareIndex;
  this->fields._nowSquareIndex_k__BackingField = v69;
  this->fields._PutSquareIndex_k__BackingField = v69;
  this->fields._limitActionCount_k__BackingField = servantData->fields.limitActionPoint;
  this->fields._currentActionCount_k__BackingField = servantData->fields.currentActionPoint;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v70 = (WarBoardActionPointClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
  ActionPointEntity = WarBoardPieceData__get_ActionPointEntity(this, v71);
  if ( !this->fields._battleServant_k__BackingField
    || (v73 = ActionPointEntity,
        ClassId = BattleServantData__getClassId(this->fields._battleServant_k__BackingField, 0LL),
        !v70)
    || (EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                        v70,
                                        v73,
                                        ClassId,
                                        0LL),
        v76 = WarBoardCost__Create(EntityFromActionPointEntity, this->fields.stagePieceDetailEntity, reinfoEntity, 0LL),
        this->fields._Cost_k__BackingField = v76,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._Cost_k__BackingField,
          (System_Int32_array **)v76,
          v77,
          v78,
          v79,
          v80,
          v81,
          v82),
        (Cost_k__BackingField = this->fields._Cost_k__BackingField) == 0LL) )
  {
LABEL_57:
    sub_B170D4();
  }
  WarBoardCost__UpdateCurrentPointByServerData(Cost_k__BackingField, servantData->fields.currentPieceActionPoint, 0LL);
  forceId_k__BackingField = this->fields._forceId_k__BackingField;
  this->fields._attackCount_k__BackingField = servantData->fields.attackCount;
  defeatPoint = servantData->fields.defeatPoint;
  this->fields._breakPoint_k__BackingField = defeatPoint;
  this->fields._isDead_k__BackingField = defeatPoint < 0;
  if ( !forceId_k__BackingField && (npcIdx & 0x80000000) == 0 && !this->fields._groupId_k__BackingField )
  {
    if ( npcDict )
    {
      Master_WarQuestSelectionMaster = (WarBoardStagePieceDetailMaster_o *)System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___get_Item(
                                                                             (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)npcDict,
                                                                             0,
                                                                             (const MethodInfo_2D65D74 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    }
    else
    {
      v86 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !v86 )
        goto LABEL_57;
      v87 = (WarBoardData_o *)v86[4].monitor;
      if ( !v87 )
        goto LABEL_57;
      Master_WarQuestSelectionMaster = (WarBoardStagePieceDetailMaster_o *)WarBoardData__GetNpcEntity(
                                                                             v87,
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
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_57;
    seriazlier = Master_WarQuestSelectionMaster->fields.seriazlier;
    if ( !seriazlier )
      goto LABEL_57;
    if ( LODWORD(seriazlier->fields.tmp0) > npcIdx )
    {
      npcId = *((_QWORD *)&seriazlier->fields.tmp1 + npcIdx);
      goto LABEL_55;
    }
LABEL_58:
    sub_B17100(Master_WarQuestSelectionMaster, v42, v43);
    sub_B170A0();
  }
LABEL_56:
  WarBoardPieceData__SetServantIconData(this, v42);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceData___ctor_22206560(
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
  WarBoardStageReinforcementsMaster_o *Master_WarQuestSelectionMaster; // x0
  WarBoardReinforcementsMaster_o *Item; // x0
  const MethodInfo *v31; // x1
  __int64 v32; // x2
  struct System_Int32_array *reinforcementsIds; // x8
  __int64 ReinfoIndex_k__BackingField; // x9
  WarBoardReinforcementsEntity_o *v35; // x8
  int32_t id; // w9
  int32_t forceId; // w26
  int32_t groupId; // w27
  int32_t pieceIndex; // w28
  int32_t squareIndex; // w9
  WarBoardStagePieceDetailMaster_o *v41; // x0
  WarBoardStagePieceDetailEntity_o **p_stagePieceDetailEntity; // x24
  int32_t RoleType; // w0
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x8
  bool IsNotIncludeWin; // w8
  int32_t actionType; // w8
  WebViewManager_o *Instance; // x0
  __int128 v48; // q1
  WarBoardManager_o *v49; // x23
  int64_t v50; // x0
  struct BattleServantData_o *BattleServant; // x0
  struct BattleServantData_o **p_battleServant_k__BackingField; // x23
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  int32_t v65; // w8
  WarBoardActionPointClassMaster_o *v66; // x24
  const MethodInfo *v67; // x1
  WarBoardActionPointEntity_o *ActionPointEntity; // x0
  WarBoardActionPointEntity_o *v69; // x25
  int32_t ClassId; // w0
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  struct WarBoardCost_o *v72; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  WarBoardCost_o *Cost_k__BackingField; // x0
  int32_t forceId_k__BackingField; // w9
  int defeatPoint; // w8
  WebViewManager_o *v82; // x0
  WarBoardData_o *monitor; // x0
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t npcId; // x8
  struct MiniMessagePack_MiniMessagePacker_o *seriazlier; // x8
  int64_t npcSvtEquipId; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+20h] [xbp-90h]
  int32_t value; // [xsp+4Ch] [xbp-64h] BYREF
  WarBoardReinforcementsEntity_o *reinforcementsEntity; // [xsp+50h] [xbp-60h] BYREF
  WarBoardStageReinforcementsEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_40F85F9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___, *(_QWORD *)&stageId);
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___, v15);
    sub_B16FFC(&DataManager_TypeInfo, v16);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__, v17);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    sub_B16FFC(&WarBoardPieceData_PieceStatusCache_TypeInfo, v19);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v20);
    sub_B16FFC(&WarBoardPieceData_TypeInfo, v21);
    byte_40F85F9 = 1;
  }
  reinforcementsEntity = 0LL;
  entity = 0LL;
  value = 0;
  v22 = (WarBoardPieceData_PieceStatusCache_o *)sub_B170CC(
                                                  WarBoardPieceData_PieceStatusCache_TypeInfo,
                                                  *(_QWORD *)&stageId,
                                                  servantData,
                                                  saveData,
                                                  npcDict);
  WarBoardPieceData_PieceStatusCache___ctor(v22, 0LL);
  this->fields.statusCache = v22;
  sub_B16F98(
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
  Master_WarQuestSelectionMaster = (WarBoardStageReinforcementsMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_58;
  WarBoardStageReinforcementsMaster__TryGetEntity(
    Master_WarQuestSelectionMaster,
    &entity,
    stageId,
    this->fields._StageReinfoId_k__BackingField,
    0LL);
  Item = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  if ( !entity )
    goto LABEL_58;
  reinforcementsIds = entity->fields.reinforcementsIds;
  if ( !reinforcementsIds )
    goto LABEL_58;
  ReinfoIndex_k__BackingField = this->fields._ReinfoIndex_k__BackingField;
  if ( (unsigned int)ReinfoIndex_k__BackingField >= reinforcementsIds->max_length )
    goto LABEL_59;
  if ( !Item )
    goto LABEL_58;
  WarBoardReinforcementsMaster__TryGetEntity(
    Item,
    &reinforcementsEntity,
    reinforcementsIds->m_Items[ReinfoIndex_k__BackingField + 1],
    0LL);
  v35 = reinforcementsEntity;
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
  if ( (BYTE3(WarBoardPieceData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPieceData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo);
    v35 = reinforcementsEntity;
  }
  this->fields._uniqueIndex_k__BackingField = (forceId << 24) | ((unsigned __int8)groupId << 16) | (unsigned __int16)pieceIndex;
  squareIndex = saveData->fields.squareIndex;
  this->fields._nowSquareIndex_k__BackingField = squareIndex;
  this->fields._PutSquareIndex_k__BackingField = squareIndex;
  this->fields._overwriteActionType_k__BackingField = saveData->fields.overwriteActionType;
  this->fields._overwriteAiId_k__BackingField = saveData->fields.overwriteAiId;
  this->fields._entryTurn_k__BackingField = saveData->fields.entryTurn;
  if ( !v35 )
    goto LABEL_58;
  this->fields._breakPointMax_k__BackingField = v35->fields.breakPoint;
  v41 = (WarBoardStagePieceDetailMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
  if ( !v41 )
    goto LABEL_58;
  p_stagePieceDetailEntity = &this->fields.stagePieceDetailEntity;
  if ( WarBoardStagePieceDetailMaster__TryGetEntity(
         v41,
         &this->fields.stagePieceDetailEntity,
         stageId,
         this->fields._forceId_k__BackingField,
         this->fields._groupId_k__BackingField,
         this->fields._index_k__BackingField,
         0LL) )
  {
    if ( !*p_stagePieceDetailEntity )
      goto LABEL_58;
    RoleType = WarBoardStagePieceDetailEntity__getRoleType(*p_stagePieceDetailEntity, 0LL);
    stagePieceDetailEntity = this->fields.stagePieceDetailEntity;
    this->fields._roleType_k__BackingField = RoleType;
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
  if ( !reinforcementsEntity )
    goto LABEL_58;
  if ( WarBoardReinforcementsEntity__TryGetRoleType(reinforcementsEntity, &value, 0LL) )
    this->fields._roleType_k__BackingField = value;
  if ( !reinforcementsEntity )
    goto LABEL_58;
  if ( WarBoardReinforcementsEntity__IsNotIncludeWin(reinforcementsEntity, 0LL) )
    this->fields._isNotIncludeWin_k__BackingField = 1;
  if ( !reinforcementsEntity )
    goto LABEL_58;
  actionType = reinforcementsEntity->fields.actionType;
  this->fields._isEditing_k__BackingField = 0;
  this->fields._IsDispConsumedPieceActionPoint_k__BackingField = 0;
  this->fields._actionType_k__BackingField = actionType;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !servantData )
    goto LABEL_58;
  v48 = *(_OWORD *)&servantData->fields.id.fields.fakeValue;
  v49 = (WarBoardManager_o *)Instance;
  *(_OWORD *)&v89.fields.currentCryptoKey = *(_OWORD *)&servantData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v89.fields.fakeValue = v48;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v88 = v89;
  v50 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v88, 0LL);
  if ( !v49 )
    goto LABEL_58;
  BattleServant = WarBoardManager__GetBattleServant(v49, v50, 0LL);
  this->fields._battleServant_k__BackingField = BattleServant;
  p_battleServant_k__BackingField = &this->fields._battleServant_k__BackingField;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._battleServant_k__BackingField,
    (System_Int32_array **)BattleServant,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  this->fields.serverServantData = servantData;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.serverServantData,
    (System_Int32_array **)servantData,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  v65 = servantData->fields.squareIndex;
  this->fields._nowSquareIndex_k__BackingField = v65;
  this->fields._PutSquareIndex_k__BackingField = v65;
  this->fields._limitActionCount_k__BackingField = servantData->fields.limitActionPoint;
  this->fields._currentActionCount_k__BackingField = servantData->fields.currentActionPoint;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v66 = (WarBoardActionPointClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
  ActionPointEntity = WarBoardPieceData__get_ActionPointEntity(this, v67);
  if ( !this->fields._battleServant_k__BackingField
    || (v69 = ActionPointEntity,
        ClassId = BattleServantData__getClassId(this->fields._battleServant_k__BackingField, 0LL),
        !v66)
    || (EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                        v66,
                                        v69,
                                        ClassId,
                                        0LL),
        v72 = WarBoardCost__Create(
                EntityFromActionPointEntity,
                this->fields.stagePieceDetailEntity,
                reinforcementsEntity,
                0LL),
        this->fields._Cost_k__BackingField = v72,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._Cost_k__BackingField,
          (System_Int32_array **)v72,
          v73,
          v74,
          v75,
          v76,
          v77,
          v78),
        (Cost_k__BackingField = this->fields._Cost_k__BackingField) == 0LL) )
  {
LABEL_58:
    sub_B170D4();
  }
  WarBoardCost__UpdateCurrentPointByServerData(Cost_k__BackingField, servantData->fields.currentPieceActionPoint, 0LL);
  forceId_k__BackingField = this->fields._forceId_k__BackingField;
  this->fields._attackCount_k__BackingField = servantData->fields.attackCount;
  defeatPoint = servantData->fields.defeatPoint;
  this->fields._breakPoint_k__BackingField = defeatPoint;
  this->fields._isDead_k__BackingField = defeatPoint < 0;
  if ( !forceId_k__BackingField && (npcIdx & 0x80000000) == 0 && !this->fields._groupId_k__BackingField )
  {
    if ( npcDict )
    {
      Item = (WarBoardReinforcementsMaster_o *)System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget___get_Item(
                                                 (System_Collections_Generic_Dictionary_uint__WarBoardAIRoute_PutSquareTarget__o *)npcDict,
                                                 0,
                                                 (const MethodInfo_2D65D74 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    }
    else
    {
      v82 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !v82 )
        goto LABEL_58;
      monitor = (WarBoardData_o *)v82[4].monitor;
      if ( !monitor )
        goto LABEL_58;
      Item = (WarBoardReinforcementsMaster_o *)WarBoardData__GetNpcEntity(
                                                 monitor,
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
    if ( !Item )
      goto LABEL_58;
    seriazlier = Item->fields.seriazlier;
    if ( !seriazlier )
      goto LABEL_58;
    if ( LODWORD(seriazlier->fields.tmp0) > npcIdx )
    {
      npcId = *((_QWORD *)&seriazlier->fields.tmp1 + npcIdx);
      goto LABEL_56;
    }
LABEL_59:
    sub_B17100(Item, v31, v32);
    sub_B170A0();
  }
LABEL_57:
  WarBoardPieceData__SetServantIconData(this, v31);
}


void __fastcall WarBoardPieceData__ActionMove(WarBoardPieceData_o *this, const MethodInfo *method)
{
  int32_t currentActionCount_k__BackingField; // w8
  WarBoardCost_o *Cost_k__BackingField; // x0
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  currentActionCount_k__BackingField = this->fields._currentActionCount_k__BackingField;
  Cost_k__BackingField = this->fields._Cost_k__BackingField;
  this->fields._currentActionCount_k__BackingField = currentActionCount_k__BackingField - 1;
  if ( !Cost_k__BackingField
    || (WarBoardCost__ActionMove(Cost_k__BackingField, 0LL), (pieceComponent = this->fields.pieceComponent) == 0LL) )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))pieceComponent->klass->vtable._10_UpdateDisplayActionCount.method)(
    pieceComponent,
    pieceComponent->klass->vtable._11_UpdateUiBrightnessByPieceStatus.methodPtr);
}


void __fastcall WarBoardPieceData__ActivateCacheMode(WarBoardPieceData_o *this, bool flg, const MethodInfo *method)
{
  WarBoardPieceData_PieceStatusCache_o *statusCache; // x0

  statusCache = this->fields.statusCache;
  if ( !statusCache )
    sub_B170D4();
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
      sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
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
  float r; // s0
  float g; // s1
  float b; // s2
  float a; // s3
  UnityEngine_Color_o v14; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  *(_QWORD *)&v14.fields.r = 0LL;
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
        v15.fields.r = 0.05;
        v15.fields.a = 1.0;
        v15.fields.g = 0.05;
        v15.fields.b = 0.05;
        UnityEngine_Color___ctor(v15, v3, v4, v5, v6, (const MethodInfo *)&v14);
        if ( !enemyIcon )
LABEL_6:
          sub_B170D4();
        UIWidget__set_color((UIWidget_o *)enemyIcon, v14, 0LL);
        g = v14.fields.g;
        r = v14.fields.r;
        a = v14.fields.a;
        b = v14.fields.b;
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
    sub_B170D4();
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, int32_t, Il2CppMethodPointer))pieceComponent->klass->vtable._25_OnAttack.method)(
    pieceComponent,
    squareIndex,
    pieceComponent->klass->vtable._26_OnAttackResume.methodPtr);
}


void __fastcall WarBoardPieceData__AttackAction(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardCost_o *Cost_k__BackingField; // x0
  WarBoardCost_o *v4; // x0

  if ( this->fields._limitActionCount_k__BackingField <= 0 )
  {
    Cost_k__BackingField = this->fields._Cost_k__BackingField;
    if ( !Cost_k__BackingField )
      goto LABEL_7;
    if ( WarBoardCost__get_HasCost(Cost_k__BackingField, 0LL) )
    {
      v4 = this->fields._Cost_k__BackingField;
      if ( v4 )
      {
        WarBoardCost__ActionAttack(v4, 0LL);
        return;
      }
LABEL_7:
      sub_B170D4();
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
    sub_B170D4();
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, int32_t, Il2CppMethodPointer))pieceComponent->klass->vtable._26_OnAttackResume.method)(
    pieceComponent,
    squareIndex,
    pieceComponent->klass->vtable._27_OnAfterAttack.methodPtr);
}


void __fastcall WarBoardPieceData__ChangeStatus(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *pieceComponent; // x0
  struct WarBoardPieceBaseComponent_o *v4; // x0
  struct WarBoardPieceBaseComponent_o *v5; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    goto LABEL_8;
  WarBoardPieceBaseComponent__UpdateUiByBuffChanged(pieceComponent, method);
  v4 = this->fields.pieceComponent;
  if ( !v4 )
    goto LABEL_8;
  if ( (((__int64 (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))v4->klass->vtable._16_IsModifyStatus.method)(
          v4,
          v4->klass->vtable._17_ChangeCriticalStars.methodPtr) & 1) != 0
    && !this->fields._isDead_k__BackingField )
  {
    v5 = this->fields.pieceComponent;
    if ( v5 )
    {
      ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, Il2CppMethodPointer))v5->klass->vtable._15_ChangeStatus.method)(
        v5,
        0LL,
        v5->klass->vtable._16_IsModifyStatus.methodPtr);
      return;
    }
LABEL_8:
    sub_B170D4();
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
  System_Int32_array *CondAttackIndividuality; // x20
  System_Int32_array *Individuality; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  unsigned __int64 v20; // x21

  if ( (byte_40F8600 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_int___, targetWall);
    sub_B16FFC(&Method_System_Linq_Enumerable_Contains_int___, v5);
    byte_40F8600 = 1;
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
    sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v9 = *(_WORD *)(v8 + 306);
  }
  if ( (v9 & 0x400) != 0 )
  {
    v10 = *v7[6];
    if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
      sub_AAFCFC(*v7[6]);
    if ( !*(_DWORD *)(v10 + 224) )
    {
      v11 = *v7[6];
      if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
        sub_AAFCFC(*v7[6]);
      j_il2cpp_runtime_class_init_0(v11);
    }
  }
  v12 = *v7[6];
  if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
    sub_AAFCFC(*v7[6]);
  wallEntity = targetWall->fields.wallEntity;
  if ( wallEntity )
  {
    CondAttackIndividuality = WarBoardStageWallEntity__GetCondAttackIndividuality(wallEntity, 0LL);
    if ( CondAttackIndividuality )
      goto LABEL_19;
LABEL_28:
    sub_B170D4();
  }
  CondAttackIndividuality = **(System_Int32_array ***)(v12 + 184);
  if ( !CondAttackIndividuality )
    goto LABEL_28;
LABEL_19:
  if ( *(_QWORD *)&CondAttackIndividuality->max_length )
  {
    Individuality = WarBoardPieceData__GetIndividuality(this, 0LL, v6);
    v18 = *(_QWORD *)&CondAttackIndividuality->max_length;
    if ( (int)v18 >= 1 )
    {
      v19 = (System_Collections_Generic_IEnumerable_TSource__o *)Individuality;
      v20 = 0LL;
      while ( 1 )
      {
        if ( v20 >= (unsigned int)v18 )
        {
          sub_B17100(Individuality, v16, v17);
          sub_B170A0();
        }
        Individuality = (System_Int32_array *)System_Linq_Enumerable__Contains_int_(
                                                v19,
                                                CondAttackIndividuality->m_Items[v20 + 1],
                                                (const MethodInfo_18D1B3C *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)Individuality & 1) != 0 )
          break;
        LODWORD(v18) = CondAttackIndividuality->max_length;
        if ( (__int64)++v20 >= (int)v18 )
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
  struct WarBoardPieceBaseComponent_o *v6; // x19

  if ( (byte_40F8608 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    sub_B16FFC(&WarBoardServantPieceComponent_TypeInfo, v3);
    byte_40F8608 = 1;
  }
  pieceComponent = this->fields.pieceComponent;
  if ( pieceComponent
    && (v5 = *(&WarBoardServantPieceComponent_TypeInfo->_2.bitflags2 + 1),
        *(&pieceComponent->klass->_2.bitflags2 + 1) >= (unsigned int)v5) )
  {
    if ( (WarBoardServantPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[v5 - 1] == WarBoardServantPieceComponent_TypeInfo )
      v6 = this->fields.pieceComponent;
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
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v6, 0LL, 0LL) )
  {
    if ( !v6 )
      sub_B170D4();
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields._PrevAiRoute_k__BackingField, 0LL, v2, v3, v4, v5, v6, v7);
}


System_Int32_array *__fastcall WarBoardPieceData__CreatePieceEventVals(
        WarBoardPieceData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Int32_array *result; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  il2cpp_array_size_t max_length; // w8

  if ( (byte_40F8612 & 1) == 0 )
  {
    sub_B16FFC(&int___TypeInfo, method);
    byte_40F8612 = 1;
  }
  result = (System_Int32_array *)sub_B17014(int___TypeInfo, 3LL, v2);
  if ( !result )
    sub_B170D4();
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = this->fields._forceId_k__BackingField, max_length == 1)
    || (result->m_Items[2] = this->fields._groupId_k__BackingField, max_length <= 2) )
  {
    sub_B17100(result, v5, v6);
    sub_B170A0();
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
    sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  WarBoardManager_TaskList_o *v8; // x19
  unsigned int breakPoint_k__BackingField; // w22
  unsigned int v10; // w21
  struct WarBoardPieceBaseComponent_o *v11; // x0
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0
  struct WarBoardPieceBaseComponent_o *v13; // x0

  if ( (byte_40F8603 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardMessageMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v6);
    sub_B16FFC(&WarBoardManager_TaskList_TypeInfo, v7);
    byte_40F8603 = 1;
  }
  v8 = (WarBoardManager_TaskList_o *)sub_B170CC(WarBoardManager_TaskList_TypeInfo, method, v2, v3, v4);
  WarBoardManager_TaskList___ctor(v8, 0LL);
  breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
  v10 = breakPoint_k__BackingField - 1;
  if ( (int)(breakPoint_k__BackingField - 1) < 1 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
    pieceComponent = this->fields.pieceComponent;
    if ( pieceComponent )
    {
      ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, _QWORD, _QWORD, __int64, Il2CppMethodPointer))pieceComponent->klass->vtable._31_OnBreak.method)(
        pieceComponent,
        breakPoint_k__BackingField,
        0LL,
        v8,
        v10,
        0LL,
        1LL,
        pieceComponent->klass->vtable._32_OnDead.methodPtr);
      v13 = this->fields.pieceComponent;
      if ( v13 )
      {
        ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, WarBoardManager_TaskList_o *, __int64, Il2CppMethodPointer))v13->klass->vtable._32_OnDead.method)(
          v13,
          0LL,
          v8,
          1LL,
          v13->klass->vtable._33_OnRevive.methodPtr);
        return v8;
      }
    }
LABEL_13:
    sub_B170D4();
  }
  v11 = this->fields.pieceComponent;
  if ( !v11 )
    goto LABEL_13;
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, _QWORD, _QWORD, __int64, Il2CppMethodPointer))v11->klass->vtable._31_OnBreak.method)(
    v11,
    breakPoint_k__BackingField,
    0LL,
    v8,
    v10,
    0LL,
    1LL,
    v11->klass->vtable._32_OnDead.methodPtr);
  return v8;
}


void __fastcall WarBoardPieceData__Deselect(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0
  WebViewManager_o *Instance; // x0
  WarBoardData_o *monitor; // x0
  WarBoardSquareData_o *Square; // x0

  if ( (byte_40F8602 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_40F8602 = 1;
  }
  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent
    || (((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))pieceComponent->klass->vtable._23_OnDeselect.method)(
          pieceComponent,
          pieceComponent->klass->vtable._24_OnMove.methodPtr),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (monitor = (WarBoardData_o *)Instance[4].monitor) == 0LL )
  {
    sub_B170D4();
  }
  Square = WarBoardData__GetSquare(monitor, this->fields._nowSquareIndex_k__BackingField, 0LL);
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
      sub_B170D4();
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
      sub_B170D4();
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
      sub_B170D4();
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
      sub_B170D4();
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
  if ( !WarBoardCost__get_HasCost(Cost_k__BackingField, 0LL) )
  {
LABEL_6:
    p_currentActionCount_k__BackingField = &this->fields._currentActionCount_k__BackingField;
    return *p_currentActionCount_k__BackingField;
  }
  v4 = this->fields._Cost_k__BackingField;
  if ( !v4 )
LABEL_8:
    sub_B170D4();
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
  __int64 v12; // x3
  __int64 v13; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v14; // x19
  WarBoardPieceData___c_c *v15; // x0
  struct WarBoardPieceData___c_StaticFields *static_fields; // x8
  System_Func_int__BuffList_TYPE__o *_9__336_0; // x20
  Il2CppObject *v18; // x21
  struct WarBoardPieceData___c_StaticFields *v19; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  BuffList_TYPE_array *result; // x0
  _QWORD **v28; // x20
  __int64 v29; // x19
  __int16 v30; // w8
  __int64 v31; // x19
  __int64 v32; // x19
  __int64 v33; // x19

  if ( (byte_40F8610 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_BuffList_TYPE___, method);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_int__BuffList_TYPE___, v3);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_BuffList_TYPE___, v4);
    sub_B16FFC(&Method_System_Func_int__BuffList_TYPE___ctor__, v5);
    sub_B16FFC(&System_Func_int__BuffList_TYPE__TypeInfo, v6);
    sub_B16FFC(&Method_WarBoardPieceData___c__GetBuffTypesFromConstantStr_b__336_0__, v7);
    sub_B16FFC(&WarBoardPieceData___c_TypeInfo, v8);
    byte_40F8610 = 1;
  }
  ValueAsIntArray = ConstantStrMaster__GetValueAsIntArray(key, 0LL);
  if ( !ValueAsIntArray )
    goto LABEL_13;
  v14 = (System_Collections_Generic_IEnumerable_TSource__o *)ValueAsIntArray;
  v15 = WarBoardPieceData___c_TypeInfo;
  if ( (BYTE3(WarBoardPieceData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPieceData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceData___c_TypeInfo);
    v15 = WarBoardPieceData___c_TypeInfo;
  }
  static_fields = v15->static_fields;
  _9__336_0 = static_fields->__9__336_0;
  if ( !_9__336_0 )
  {
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v15);
      static_fields = WarBoardPieceData___c_TypeInfo->static_fields;
    }
    v18 = (Il2CppObject *)static_fields->__9;
    _9__336_0 = (System_Func_int__BuffList_TYPE__o *)sub_B170CC(
                                                       System_Func_int__BuffList_TYPE__TypeInfo,
                                                       v10,
                                                       v11,
                                                       v12,
                                                       v13);
    System_Func_int__BuffList_TYPE____ctor(
      _9__336_0,
      v18,
      Method_WarBoardPieceData___c__GetBuffTypesFromConstantStr_b__336_0__,
      (const MethodInfo_2B6616C *)Method_System_Func_int__BuffList_TYPE___ctor__);
    v19 = WarBoardPieceData___c_TypeInfo->static_fields;
    v19->__9__336_0 = _9__336_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v19->__9__336_0,
      (System_Int32_array **)_9__336_0,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
  }
  v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BuffList_TYPE_(
                                                               v14,
                                                               (System_Func_TSource__TResult__o *)_9__336_0,
                                                               (const MethodInfo_19BF5BC *)Method_System_Linq_Enumerable_Select_int__BuffList_TYPE___);
  result = System_Linq_Enumerable__ToArray_BuffList_TYPE_(
             v26,
             (const MethodInfo_19C4AB4 *)Method_System_Linq_Enumerable_ToArray_BuffList_TYPE___);
  if ( !result )
  {
LABEL_13:
    v28 = (_QWORD **)Method_System_Array_Empty_BuffList_TYPE___;
    v29 = **((_QWORD **)Method_System_Array_Empty_BuffList_TYPE___ + 6);
    v30 = *(_WORD *)(v29 + 306);
    if ( (v30 & 1) == 0 )
    {
      sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_BuffList_TYPE___ + 6));
      v30 = *(_WORD *)(v29 + 306);
    }
    if ( (v30 & 0x400) != 0 )
    {
      v31 = *v28[6];
      if ( (*(_BYTE *)(v31 + 306) & 1) == 0 )
        sub_AAFCFC(*v28[6]);
      if ( !*(_DWORD *)(v31 + 224) )
      {
        v32 = *v28[6];
        if ( (*(_BYTE *)(v32 + 306) & 1) == 0 )
          sub_AAFCFC(*v28[6]);
        j_il2cpp_runtime_class_init_0(v32);
      }
    }
    v33 = *v28[6];
    if ( (*(_BYTE *)(v33 + 306) & 1) == 0 )
      sub_AAFCFC(*v28[6]);
    return **(BuffList_TYPE_array ***)(v33 + 184);
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

  if ( (byte_40F860B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    byte_40F860B = 1;
  }
  entity = 0LL;
  value = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_14;
  if ( !WarBoardReinforcementsMaster__TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          this->fields._ReinfoId_k__BackingField,
          0LL) )
    goto LABEL_11;
  if ( !entity )
LABEL_14:
    sub_B170D4();
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *v10; // x20
  BattleServantData_o *battleServant_k__BackingField; // x0
  bool IsIgnoreIndivUnreleasable; // w3
  bool IsIncludeIgnoreIndividuality; // w2
  bool v14; // w4
  System_Collections_Generic_IEnumerable_T__o *ConcatServantAndBuffIndividualityies; // x0

  if ( (byte_40F85F2 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__AddRange__, args);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v9);
    byte_40F85F2 = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    args,
                                                    method,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
  if ( battleServant_k__BackingField )
  {
    if ( args )
    {
      IsIgnoreIndivUnreleasable = args->fields.IsIgnoreIndivUnreleasable;
      IsIncludeIgnoreIndividuality = args->fields.IsIncludeIgnoreIndividuality;
      v14 = !args->fields.IsIncludePassiveIndividuality;
    }
    else
    {
      IsIncludeIgnoreIndividuality = 0;
      IsIgnoreIndivUnreleasable = 0;
      v14 = 0;
    }
    ConcatServantAndBuffIndividualityies = (System_Collections_Generic_IEnumerable_T__o *)BattleServantData__getConcatServantAndBuffIndividualityies(
                                                                                            battleServant_k__BackingField,
                                                                                            0LL,
                                                                                            IsIncludeIgnoreIndividuality,
                                                                                            IsIgnoreIndivUnreleasable,
                                                                                            v14,
                                                                                            0LL);
    if ( !v10 )
LABEL_15:
      sub_B170D4();
    System_Collections_Generic_List_int___AddRange(
      v10,
      ConcatServantAndBuffIndividualityies,
      (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields._individuality_k__BackingField, 0LL) )
  {
    if ( !v10 )
      goto LABEL_15;
  }
  else
  {
    if ( !v10 )
      goto LABEL_15;
    System_Collections_Generic_List_int___AddRange(
      v10,
      (System_Collections_Generic_IEnumerable_T__o *)this->fields._individuality_k__BackingField,
      (const MethodInfo_2F10744 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall WarBoardPieceData__GetMaxActionPoint(WarBoardPieceData_o *this, const MethodInfo *method)
{
  int32_t result; // w0
  WarBoardCost_o *Cost_k__BackingField; // x0
  WarBoardCost_o *v5; // x0

  result = this->fields._limitActionCount_k__BackingField;
  if ( result <= 0 )
  {
    Cost_k__BackingField = this->fields._Cost_k__BackingField;
    if ( !Cost_k__BackingField )
      goto LABEL_8;
    if ( WarBoardCost__get_HasCost(Cost_k__BackingField, 0LL) )
    {
      v5 = this->fields._Cost_k__BackingField;
      if ( v5 )
        return WarBoardCost__get_BaseActionPoint(v5, 0LL);
LABEL_8:
      sub_B170D4();
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

  if ( (byte_40F860C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    byte_40F860C = 1;
  }
  entity = 0LL;
  type = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_14;
  if ( !WarBoardReinforcementsMaster__TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          this->fields._ReinfoId_k__BackingField,
          0LL) )
    goto LABEL_11;
  if ( !entity )
LABEL_14:
    sub_B170D4();
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

  if ( (byte_40F860D & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    byte_40F860D = 1;
  }
  entity = 0LL;
  type = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_14;
  if ( !WarBoardReinforcementsMaster__TryGetEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          this->fields._ReinfoId_k__BackingField,
          0LL) )
    goto LABEL_11;
  if ( !entity )
LABEL_14:
    sub_B170D4();
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

  if ( (byte_40F85FE & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Nullable_bool___ctor__, method);
    sub_B16FFC(&Method_System_Nullable_bool__get_HasValue__, v3);
    sub_B16FFC(&Method_System_Nullable_bool__get_Value__, v4);
    byte_40F85FE = 1;
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
            (const MethodInfo_296535C *)Method_System_Nullable_bool___ctor__),
          statusCache->fields._HasAvailablePermanentSleepBuff_k__BackingField = v11,
          (statusCache = this->fields.statusCache) == 0LL) )
    {
      sub_B170D4();
    }
    p_HasAvailablePermanentSleepBuff_k__BackingField = &HasAvailablePermanentSleepBuff_k__BackingField;
    HasAvailablePermanentSleepBuff_k__BackingField = (unsigned __int16)statusCache->fields._HasAvailablePermanentSleepBuff_k__BackingField;
    LOBYTE(battleServant_k__BackingField) = System_Nullable_bool___get_Value(
                                              (System_Nullable_bool__o)p_HasAvailablePermanentSleepBuff_k__BackingField,
                                              (const MethodInfo_2965378 *)Method_System_Nullable_bool__get_Value__);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct WarBoardPieceData_PieceStatusCache_o *statusCache; // x8
  BuffList_TYPE_array *BuffTypesFromConstantStr; // x0
  struct WarBoardPieceData_PieceStatusCache_o *v9; // x20
  bool HasAnyBuffByBuffTypes; // w1
  __int16 *v11; // x0
  unsigned __int16 *p_HasCompletelyActionDisabledBuff_k__BackingField; // x0
  struct System_Nullable_bool__o v15; // [xsp+8h] [xbp-18h] BYREF
  unsigned __int16 HasCompletelyActionDisabledBuff_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F85FF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Nullable_bool___ctor__, method);
    sub_B16FFC(&Method_System_Nullable_bool__get_HasValue__, v3);
    sub_B16FFC(&Method_System_Nullable_bool__get_Value__, v4);
    sub_B16FFC(&WarBoardPieceData_TypeInfo, v5);
    sub_B16FFC(&StringLiteral_15267, v6);
    byte_40F85FF = 1;
  }
  HasCompletelyActionDisabledBuff_k__BackingField = 0;
  if ( this->fields._battleServant_k__BackingField )
  {
    statusCache = this->fields.statusCache;
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
      BuffTypesFromConstantStr = WarBoardPieceData__GetBuffTypesFromConstantStr(
                                   (System_String_o *)StringLiteral_15267,
                                   method);
      if ( !this->fields._battleServant_k__BackingField
        || (v9 = this->fields.statusCache,
            HasAnyBuffByBuffTypes = BattleServantData__HasAnyBuffByBuffTypes(
                                      this->fields._battleServant_k__BackingField,
                                      BuffTypesFromConstantStr,
                                      0LL),
            v11 = (__int16 *)&v15,
            v15 = 0,
            System_Nullable_bool____ctor(
              (System_Nullable_bool__o)v11,
              HasAnyBuffByBuffTypes,
              (const MethodInfo_296535C *)Method_System_Nullable_bool___ctor__),
            !v9)
        || (v9->fields._HasCompletelyActionDisabledBuff_k__BackingField = v15,
            (statusCache = this->fields.statusCache) == 0LL) )
      {
LABEL_16:
        sub_B170D4();
      }
    }
    p_HasCompletelyActionDisabledBuff_k__BackingField = &HasCompletelyActionDisabledBuff_k__BackingField;
    HasCompletelyActionDisabledBuff_k__BackingField = (unsigned __int16)statusCache->fields._HasCompletelyActionDisabledBuff_k__BackingField;
    return System_Nullable_bool___get_Value(
             (System_Nullable_bool__o)p_HasCompletelyActionDisabledBuff_k__BackingField,
             (const MethodInfo_2965378 *)Method_System_Nullable_bool__get_Value__);
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
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v17; // x20
  WebViewManager_o *Instance; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **monitor; // x1
  WarBoardData_o *v26; // x0
  WarBoardSquareData_o *Square; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  System_Collections_Generic_IEnumerable_TSource__o *linkedSquares; // x21
  System_Func_int__BattleActionData_SideEffectData__o *v33; // x22
  System_Collections_Generic_IEnumerable_T__o *v34; // x0
  System_Collections_Generic_IEnumerable_T__o *v35; // x0
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v40; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v41; // x21
  WarBoardCost_o *Cost_k__BackingField; // x0
  WarBoardCost_o *v43; // x0
  bool CanAction; // w8
  bool result; // w0

  if ( (byte_40F85F4 & 1) == 0 )
  {
    sub_B16FFC(&Method_BasicHelper_Any_WarBoardWallData___, method);
    sub_B16FFC(&Method_BasicHelper_ExcludeNull_WarBoardWallData___, v6);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_int__WarBoardWallData___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_ToArray_WarBoardWallData___, v8);
    sub_B16FFC(&Method_System_Func_WarBoardWallData__bool___ctor__, v9);
    sub_B16FFC(&Method_System_Func_int__WarBoardWallData___ctor__, v10);
    sub_B16FFC(&System_Func_int__WarBoardWallData__TypeInfo, v11);
    sub_B16FFC(&System_Func_WarBoardWallData__bool__TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v13);
    sub_B16FFC(&Method_WarBoardPieceData___c__DisplayClass219_0__HasVitalityToDoAnyActions_b__0__, v14);
    sub_B16FFC(&WarBoardPieceData___c__DisplayClass219_0_TypeInfo, v15);
    sub_B16FFC(&Method_WarBoardPieceData_CheckWallAttackCond__, v16);
    byte_40F85F4 = 1;
  }
  v17 = sub_B170CC(WarBoardPieceData___c__DisplayClass219_0_TypeInfo, method, v2, v3, v4);
  WarBoardPieceData___c__DisplayClass219_0___ctor((WarBoardPieceData___c__DisplayClass219_0_o *)v17, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  if ( !v17 )
    goto LABEL_19;
  monitor = (System_Int32_array **)Instance[4].monitor;
  *(_QWORD *)(v17 + 16) = monitor;
  sub_B16F98((BattleServantConfConponent_o *)(v17 + 16), monitor, v19, v20, v21, v22, v23, v24);
  v26 = *(WarBoardData_o **)(v17 + 16);
  if ( !v26 )
    goto LABEL_19;
  Square = WarBoardData__GetSquare(v26, this->fields._nowSquareIndex_k__BackingField, 0LL);
  if ( Square
    && (linkedSquares = (System_Collections_Generic_IEnumerable_TSource__o *)Square->fields.linkedSquares) != 0LL )
  {
    v33 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B170CC(
                                                                   System_Func_int__WarBoardWallData__TypeInfo,
                                                                   v28,
                                                                   v29,
                                                                   v30,
                                                                   v31);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      v33,
      (Il2CppObject *)v17,
      Method_WarBoardPieceData___c__DisplayClass219_0__HasVitalityToDoAnyActions_b__0__,
      (const MethodInfo_2B66764 *)Method_System_Func_int__WarBoardWallData___ctor__);
    v34 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                           linkedSquares,
                                                           (System_Func_TSource__TResult__o *)v33,
                                                           (const MethodInfo_19BF868 *)Method_System_Linq_Enumerable_Select_int__WarBoardWallData___);
    v35 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
            v34,
            (const MethodInfo_18B6360 *)Method_BasicHelper_ExcludeNull_WarBoardWallData___);
    v40 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v35,
            (const MethodInfo_19C4BCC *)Method_System_Linq_Enumerable_ToArray_WarBoardWallData___);
    if ( v40 )
    {
      v41 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                 System_Func_WarBoardWallData__bool__TypeInfo,
                                                                                 v36,
                                                                                 v37,
                                                                                 v38,
                                                                                 v39);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v41,
        (Il2CppObject *)this,
        Method_WarBoardPieceData_CheckWallAttackCond__,
        (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardWallData__bool___ctor__);
      LOBYTE(v40) = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
                      (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)v40,
                      (System_Func_T__bool__o *)v41,
                      (const MethodInfo_18B6074 *)Method_BasicHelper_Any_WarBoardWallData___);
    }
  }
  else
  {
    LOBYTE(v40) = 0;
  }
  Cost_k__BackingField = this->fields._Cost_k__BackingField;
  if ( Cost_k__BackingField && WarBoardCost__get_HasCost(Cost_k__BackingField, 0LL) )
  {
    v43 = this->fields._Cost_k__BackingField;
    if ( v43 )
    {
      CanAction = WarBoardCost__CanAction(v43, 0, (unsigned __int8)v40 & 1, 0LL);
      result = 0;
      if ( !CanAction )
        return result;
      return this->fields._limitActionCount_k__BackingField < 1 || this->fields._currentActionCount_k__BackingField > 0;
    }
LABEL_19:
    sub_B170D4();
  }
  return this->fields._limitActionCount_k__BackingField < 1 || this->fields._currentActionCount_k__BackingField > 0;
}


void __fastcall WarBoardPieceData__HideActionTarget(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_B170D4();
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
    sub_B170D4();
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, int32_t, Il2CppMethodPointer))pieceComponent->klass->vtable._24_OnMove.method)(
    pieceComponent,
    squareIndex,
    pieceComponent->klass->vtable._25_OnAttack.methodPtr);
}


void __fastcall WarBoardPieceData__NondisplacedDeactive(WarBoardPieceData_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *pieceComponent; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( this->fields._isEditing_k__BackingField && !this->fields._iconId_k__BackingField )
  {
    pieceComponent = (UnityEngine_Component_o *)this->fields.pieceComponent;
    this->fields._isDead_k__BackingField = 1;
    if ( !pieceComponent || (gameObject = UnityEngine_Component__get_gameObject(pieceComponent, 0LL)) == 0LL )
      sub_B170D4();
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
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
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  unsigned int breakPoint_k__BackingField; // w24
  WarBoardManager_TaskList_o *v11; // x20
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x23
  const MethodInfo *v13; // x2
  struct BattleServantData_o *battleServant_k__BackingField; // x20
  unsigned int MaxHp; // w0
  unsigned int v16; // w20
  int32_t type_k__BackingField; // w8
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  struct WarBoardUserServantData_o *serverServantData; // x8
  struct WarBoardPieceBaseComponent_o *v20; // x0
  struct WarBoardPieceBaseComponent_o *v21; // x0
  __int64 v22; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_float__o v23; // 0:x0.8
  System_Nullable_float__o v24; // 0:x0.8

  if ( (byte_40F860F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__, taskListBreak);
    sub_B16FFC(&Method_System_Nullable_float___ctor__, v8);
    sub_B16FFC(&WarBoardManager_TaskList_TypeInfo, v9);
    byte_40F860F = 1;
  }
  breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
  this->fields._breakPoint_k__BackingField = breakPoint_k__BackingField - 1;
  v11 = (WarBoardManager_TaskList_o *)sub_B170CC(
                                        WarBoardManager_TaskList_TypeInfo,
                                        taskListBreak,
                                        taskListDead,
                                        method,
                                        v4);
  WarBoardManager_TaskList___ctor(v11, 0LL);
  pieceComponent = this->fields.pieceComponent;
  if ( ((breakPoint_k__BackingField - 1) & 0x80000000) == 0 )
  {
    v23 = (System_Nullable_float__o)&v22;
    v22 = 0LL;
    System_Nullable_float____ctor(v23, 1.0, (const MethodInfo_296A23C *)Method_System_Nullable_float___ctor__);
    if ( pieceComponent )
    {
      ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, __int64, WarBoardManager_TaskList_o *, __int64, _QWORD, __int64, Il2CppMethodPointer))pieceComponent->klass->vtable._31_OnBreak.method)(
        pieceComponent,
        breakPoint_k__BackingField,
        v22,
        v11,
        0xFFFFFFFFLL,
        0LL,
        1LL,
        pieceComponent->klass->vtable._32_OnDead.methodPtr);
      if ( taskListBreak )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskListBreak,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__);
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
    sub_B170D4();
  }
  v24 = (System_Nullable_float__o)&v22;
  v22 = 0LL;
  System_Nullable_float____ctor(v24, 1.0, (const MethodInfo_296A23C *)Method_System_Nullable_float___ctor__);
  if ( !pieceComponent )
    goto LABEL_20;
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, __int64, WarBoardManager_TaskList_o *, __int64, Il2CppMethodPointer))pieceComponent->klass->vtable._32_OnDead.method)(
    pieceComponent,
    v22,
    v11,
    1LL,
    pieceComponent->klass->vtable._33_OnRevive.methodPtr);
  if ( !taskListDead )
    goto LABEL_20;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskListDead,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v11,
    (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__);
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
  v20 = this->fields.pieceComponent;
  if ( !v20 )
    goto LABEL_20;
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, Il2CppMethodPointer))v20->klass->vtable._15_ChangeStatus.method)(
    v20,
    v16,
    v20->klass->vtable._16_IsModifyStatus.methodPtr);
  v21 = this->fields.pieceComponent;
  if ( !v21 )
    goto LABEL_20;
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))v21->klass->vtable._10_UpdateDisplayActionCount.method)(
    v21,
    v21->klass->vtable._11_UpdateUiBrightnessByPieceStatus.methodPtr);
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
  _BOOL4 v9; // w21
  struct WarBoardPieceBaseComponent_o *v10; // x22
  int32_t type_k__BackingField; // w8
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  struct WarBoardUserServantData_o *serverServantData; // x8
  __int64 v14; // [xsp+0h] [xbp-40h] BYREF
  __int64 v15; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_float__o v16; // 0:x0.8
  System_Nullable_float__o v17; // 0:x0.8

  if ( (byte_40F860A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Nullable_float___ctor__, cameraMove);
    byte_40F860A = 1;
  }
  this->fields._isDead_k__BackingField = 1;
  breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
  pieceComponent = this->fields.pieceComponent;
  v16 = (System_Nullable_float__o)&v15;
  v15 = 0LL;
  System_Nullable_float____ctor(v16, 1.0, (const MethodInfo_296A23C *)Method_System_Nullable_float___ctor__);
  if ( !pieceComponent
    || (v9 = cameraMove,
        ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, __int64, WarBoardManager_TaskList_o *, _QWORD, _QWORD, _BOOL4, Il2CppMethodPointer))pieceComponent->klass->vtable._31_OnBreak.method)(
          pieceComponent,
          breakPoint_k__BackingField,
          v15,
          taskList,
          breakPoint_k__BackingField - 1,
          0LL,
          v9,
          pieceComponent->klass->vtable._32_OnDead.methodPtr),
        v10 = this->fields.pieceComponent,
        v17 = (System_Nullable_float__o)&v14,
        v14 = 0LL,
        System_Nullable_float____ctor(v17, 1.0, (const MethodInfo_296A23C *)Method_System_Nullable_float___ctor__),
        !v10) )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, __int64, WarBoardManager_TaskList_o *, _BOOL4, Il2CppMethodPointer))v10->klass->vtable._32_OnDead.method)(
    v10,
    v14,
    taskList,
    v9,
    v10->klass->vtable._33_OnRevive.methodPtr);
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
  struct BattleServantData_o *battleServant_k__BackingField; // x0
  struct BattleServantData_o *v4; // x20
  unsigned int MaxHp; // w0
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
  this->fields._isDead_k__BackingField = 0;
  if ( !battleServant_k__BackingField )
    goto LABEL_7;
  if ( ((__int64 (__fastcall *)(struct BattleServantData_o *, Il2CppMethodPointer))battleServant_k__BackingField->klass->vtable._9_get_hp.method)(
         battleServant_k__BackingField,
         battleServant_k__BackingField->klass->vtable._10_set_hp.methodPtr) <= 0 )
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
  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
LABEL_7:
    sub_B170D4();
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, Il2CppMethodPointer))pieceComponent->klass->vtable._33_OnRevive.method)(
    pieceComponent,
    0LL,
    pieceComponent->klass->vtable._34_GetIconPosition.methodPtr);
}


void __fastcall WarBoardPieceData__Select(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0
  WebViewManager_o *Instance; // x0
  WarBoardData_o *monitor; // x0
  WarBoardSquareData_o *Square; // x0

  if ( (byte_40F8601 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_40F8601 = 1;
  }
  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent
    || (((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))pieceComponent->klass->vtable._22_OnSelect.method)(
          pieceComponent,
          pieceComponent->klass->vtable._23_OnDeselect.methodPtr),
        (Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (monitor = (WarBoardData_o *)Instance[4].monitor) == 0LL )
  {
    sub_B170D4();
  }
  Square = WarBoardData__GetSquare(monitor, this->fields._nowSquareIndex_k__BackingField, 0LL);
  if ( Square )
    WarBoardSquareData__Select(Square, 0LL);
}


void __fastcall WarBoardPieceData__SetActionPoint(WarBoardPieceData_o *this, int32_t ap, const MethodInfo *method)
{
  WarBoardCost_o *Cost_k__BackingField; // x0
  WarBoardCost_o *v6; // x0

  if ( this->fields._limitActionCount_k__BackingField <= 0 )
  {
    Cost_k__BackingField = this->fields._Cost_k__BackingField;
    if ( !Cost_k__BackingField )
      goto LABEL_7;
    if ( WarBoardCost__get_HasCost(Cost_k__BackingField, 0LL) )
    {
      v6 = this->fields._Cost_k__BackingField;
      if ( v6 )
      {
        WarBoardCost__UpdateCurrentPointBySaveData(v6, ap, 0LL);
        return;
      }
LABEL_7:
      sub_B170D4();
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
    sub_B170D4();
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
  sub_B16F98(
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
  UnityEngine_Component_o *pieceComponent; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t limitActionCount_k__BackingField; // w9
  WarBoardCost_o *Cost_k__BackingField; // x0
  WarBoardCost_o *v10; // x0
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  WarBoardData_o *monitor; // x20
  int32_t PutSquareIndex_k__BackingField; // w21
  int32_t nowSquareIndex_k__BackingField; // w22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v19; // x23
  int32_t v20; // w0
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  WebViewManager_o *v22; // x0
  const MethodInfo *v23; // x1
  WarBoardUserServantData_o *serverServantData; // x0
  struct WarBoardUserServantData_o *v25; // x8
  struct WarBoardPieceBaseComponent_o *v26; // x0

  if ( (byte_40F860E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Func_WarBoardPieceData__bool___ctor__, method);
    sub_B16FFC(&System_Func_WarBoardPieceData__bool__TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_B16FFC(&Method_WarBoardPieceData__SetContinue_b__333_0__, v5);
    byte_40F860E = 1;
  }
  pieceComponent = (UnityEngine_Component_o *)this->fields.pieceComponent;
  if ( !pieceComponent )
    goto LABEL_22;
  gameObject = UnityEngine_Component__get_gameObject(pieceComponent, 0LL);
  if ( !gameObject )
    goto LABEL_22;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  limitActionCount_k__BackingField = this->fields._limitActionCount_k__BackingField;
  Cost_k__BackingField = this->fields._Cost_k__BackingField;
  this->fields._breakPoint_k__BackingField = this->fields._breakPointMax_k__BackingField;
  this->fields._currentActionCount_k__BackingField = limitActionCount_k__BackingField;
  if ( Cost_k__BackingField && WarBoardCost__get_HasCost(Cost_k__BackingField, 0LL) )
  {
    v10 = this->fields._Cost_k__BackingField;
    if ( !v10 )
      goto LABEL_22;
    WarBoardCost__Reset(v10, 0LL);
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  monitor = (WarBoardData_o *)Instance[4].monitor;
  PutSquareIndex_k__BackingField = this->fields._PutSquareIndex_k__BackingField;
  nowSquareIndex_k__BackingField = this->fields._nowSquareIndex_k__BackingField;
  v19 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_WarBoardPieceData__bool__TypeInfo,
                                                                             v12,
                                                                             v13,
                                                                             v14,
                                                                             v15);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v19,
    (Il2CppObject *)this,
    Method_WarBoardPieceData__SetContinue_b__333_0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  if ( !monitor )
    goto LABEL_22;
  v20 = WarBoardData__SearchNearestEmptySquare(
          monitor,
          PutSquareIndex_k__BackingField,
          nowSquareIndex_k__BackingField,
          (System_Func_WarBoardPieceData__bool__o *)v19,
          0LL);
  serverMasterData_k__BackingField = this->fields._serverMasterData_k__BackingField;
  this->fields._nowSquareIndex_k__BackingField = v20;
  if ( serverMasterData_k__BackingField )
    serverMasterData_k__BackingField->fields.defeatPoint = this->fields._breakPointMax_k__BackingField;
  if ( this->fields.serverServantData && this->fields._battleServant_k__BackingField )
  {
    v22 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( v22 )
    {
      if ( this->fields._battleServant_k__BackingField )
      {
        BattleServantData__setContinue(
          this->fields._battleServant_k__BackingField,
          (BattleData_o *)v22[5].fields.webViewScreen,
          this->fields._isDead_k__BackingField,
          this->fields._isDead_k__BackingField,
          0LL);
        WarBoardPieceData__SetServantIconData(this, v23);
        serverServantData = this->fields.serverServantData;
        if ( serverServantData )
        {
          WarBoardUserServantData__FromBattleServantData(
            serverServantData,
            this->fields._battleServant_k__BackingField,
            0LL);
          v25 = this->fields.serverServantData;
          if ( v25 )
          {
            v25->fields.defeatPoint = this->fields._breakPointMax_k__BackingField;
            goto LABEL_20;
          }
        }
      }
    }
LABEL_22:
    sub_B170D4();
  }
LABEL_20:
  v26 = this->fields.pieceComponent;
  if ( !v26 )
    goto LABEL_22;
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))v26->klass->vtable._10_UpdateDisplayActionCount.method)(
    v26,
    v26->klass->vtable._11_UpdateUiBrightnessByPieceStatus.methodPtr);
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
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v17; // x1
  __int64 v18; // x1
  System_Collections_Generic_IEnumerable_TSource__o *masterInfo; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v20; // x21
  WarBoardData_SquareRangeSearch_o *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  WarBoardActionPointClassMaster_o *Master_WarQuestSelectionMaster; // x20
  const MethodInfo *v30; // x1
  WarBoardActionPointEntity_o *ActionPointEntity; // x0
  WarBoardActionPointClassEntity_o *MasterEntityFromStageId; // x0
  struct WarBoardCost_o *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct WarBoardUserMasterData_o *v40; // x8
  WarBoardCost_o *Cost_k__BackingField; // x0
  int32_t currentPieceActionPoint; // w1
  System_Collections_Generic_IEnumerable_TSource__o *svtInfo; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v44; // x21
  WarBoardData_SquareRangeSearch_o *v45; // x0
  struct WarBoardUserServantData_o **p_serverServantData; // x20
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  WebViewManager_o *Instance; // x0
  struct WarBoardUserServantData_o *serverServantData; // x8
  __int128 v55; // q1
  WarBoardManager_o *v56; // x21
  int64_t v57; // x0
  struct BattleServantData_o *BattleServant; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  WarBoardUserServantData_o *v65; // x0
  int32_t *v66; // x8
  WarBoardActionPointClassMaster_o *v67; // x20
  const MethodInfo *v68; // x1
  WarBoardActionPointEntity_o *v69; // x0
  WarBoardActionPointEntity_o *v70; // x21
  int32_t ClassId; // w0
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x20
  WarBoardReinforcementsMaster_o *v73; // x0
  struct WarBoardCost_o *v74; // x0
  System_String_array **v75; // x2
  System_String_array **v76; // x3
  System_Boolean_array **v77; // x4
  System_Int32_array **v78; // x5
  System_Int32_array *v79; // x6
  System_Int32_array *v80; // x7
  struct WarBoardUserServantData_o *v81; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v82; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v83; // [xsp+20h] [xbp-40h]
  WarBoardReinforcementsEntity_o *entity; // [xsp+48h] [xbp-18h] BYREF

  if ( (byte_40F8604 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___, warBoardDataEntity);
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___, v10);
    sub_B16FFC(&Method_System_Func_WarBoardUserMasterData__bool___ctor__, v11);
    sub_B16FFC(&Method_System_Func_WarBoardUserServantData__bool___ctor__, v12);
    sub_B16FFC(&System_Func_WarBoardUserMasterData__bool__TypeInfo, v13);
    sub_B16FFC(&System_Func_WarBoardUserServantData__bool__TypeInfo, v14);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v15);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v16);
    sub_B16FFC(&Method_WarBoardPieceData__SetInitinalData_b__311_0__, v17);
    sub_B16FFC(&Method_WarBoardPieceData__SetInitinalData_b__311_1__, v18);
    byte_40F8604 = 1;
  }
  entity = 0LL;
  if ( !this->fields._isDead_k__BackingField )
  {
    if ( warBoardDataEntity )
    {
      if ( this->fields._type_k__BackingField == 1 )
      {
        masterInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.masterInfo;
        v20 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                   System_Func_WarBoardUserMasterData__bool__TypeInfo,
                                                                                   warBoardDataEntity,
                                                                                   method,
                                                                                   v3,
                                                                                   v4);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v20,
          (Il2CppObject *)this,
          Method_WarBoardPieceData__SetInitinalData_b__311_0__,
          (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardUserMasterData__bool___ctor__);
        v21 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                masterInfo,
                (System_Func_TSource__bool__o *)v20,
                (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
        this->fields._serverMasterData_k__BackingField = (struct WarBoardUserMasterData_o *)v21;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._serverMasterData_k__BackingField,
          (System_Int32_array **)v21,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
        serverMasterData_k__BackingField = this->fields._serverMasterData_k__BackingField;
        if ( serverMasterData_k__BackingField )
        {
          this->fields._limitActionCount_k__BackingField = serverMasterData_k__BackingField->fields.limitActionPoint;
          this->fields._currentActionCount_k__BackingField = serverMasterData_k__BackingField->fields.currentLimitActionPoint;
          this->fields._attackCount_k__BackingField = serverMasterData_k__BackingField->fields.attackCount;
          this->fields._nowSquareIndex_k__BackingField = serverMasterData_k__BackingField->fields.squareIndex;
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = (WarBoardActionPointClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
          ActionPointEntity = WarBoardPieceData__get_ActionPointEntity(this, v30);
          if ( Master_WarQuestSelectionMaster )
          {
            MasterEntityFromStageId = WarBoardActionPointClassMaster__GetMasterEntityFromStageId(
                                        Master_WarQuestSelectionMaster,
                                        ActionPointEntity,
                                        0LL);
            v33 = WarBoardCost__Create(MasterEntityFromStageId, this->fields.stagePieceDetailEntity, 0LL, 0LL);
            this->fields._Cost_k__BackingField = v33;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields._Cost_k__BackingField,
              (System_Int32_array **)v33,
              v34,
              v35,
              v36,
              v37,
              v38,
              v39);
            v40 = this->fields._serverMasterData_k__BackingField;
            if ( v40 )
            {
              Cost_k__BackingField = this->fields._Cost_k__BackingField;
              if ( Cost_k__BackingField )
              {
                currentPieceActionPoint = v40->fields.currentPieceActionPoint;
LABEL_30:
                WarBoardCost__UpdateCurrentPointByServerData(Cost_k__BackingField, currentPieceActionPoint, 0LL);
                return;
              }
            }
          }
        }
      }
      else
      {
        svtInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.svtInfo;
        v44 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                                   System_Func_WarBoardUserServantData__bool__TypeInfo,
                                                                                   warBoardDataEntity,
                                                                                   method,
                                                                                   v3,
                                                                                   v4);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v44,
          (Il2CppObject *)this,
          Method_WarBoardPieceData__SetInitinalData_b__311_1__,
          (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardUserServantData__bool___ctor__);
        v45 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                svtInfo,
                (System_Func_TSource__bool__o *)v44,
                (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
        p_serverServantData = &this->fields.serverServantData;
        this->fields.serverServantData = (struct WarBoardUserServantData_o *)v45;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.serverServantData,
          (System_Int32_array **)v45,
          v47,
          v48,
          v49,
          v50,
          v51,
          v52);
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        serverServantData = this->fields.serverServantData;
        if ( serverServantData )
        {
          v55 = *(_OWORD *)&serverServantData->fields.id.fields.fakeValue;
          v56 = (WarBoardManager_o *)Instance;
          *(_OWORD *)&v83.fields.currentCryptoKey = *(_OWORD *)&serverServantData->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v83.fields.fakeValue = v55;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v82 = v83;
          v57 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v82, 0LL);
          if ( v56 )
          {
            BattleServant = WarBoardManager__GetBattleServant(v56, v57, 0LL);
            this->fields._battleServant_k__BackingField = BattleServant;
            sub_B16F98(
              (BattleServantConfConponent_o *)&this->fields._battleServant_k__BackingField,
              (System_Int32_array **)BattleServant,
              v59,
              v60,
              v61,
              v62,
              v63,
              v64);
            v65 = this->fields.serverServantData;
            if ( v65 )
            {
              WarBoardUserServantData__FromBattleServantData(v65, this->fields._battleServant_k__BackingField, 0LL);
              v66 = (int32_t *)*p_serverServantData;
              if ( *p_serverServantData )
              {
                this->fields._limitActionCount_k__BackingField = v66[154];
                this->fields._currentActionCount_k__BackingField = v66[153];
                this->fields._attackCount_k__BackingField = v66[155];
                this->fields._nowSquareIndex_k__BackingField = v66[152];
                if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                }
                v67 = (WarBoardActionPointClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
                v69 = WarBoardPieceData__get_ActionPointEntity(this, v68);
                if ( this->fields._battleServant_k__BackingField )
                {
                  v70 = v69;
                  ClassId = BattleServantData__getClassId(this->fields._battleServant_k__BackingField, 0LL);
                  if ( v67 )
                  {
                    EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                                    v67,
                                                    v70,
                                                    ClassId,
                                                    0LL);
                    v73 = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
                    if ( v73 )
                    {
                      WarBoardReinforcementsMaster__TryGetEntity(
                        v73,
                        &entity,
                        this->fields._ReinfoId_k__BackingField,
                        0LL);
                      v74 = WarBoardCost__Create(
                              EntityFromActionPointEntity,
                              this->fields.stagePieceDetailEntity,
                              entity,
                              0LL);
                      this->fields._Cost_k__BackingField = v74;
                      sub_B16F98(
                        (BattleServantConfConponent_o *)&this->fields._Cost_k__BackingField,
                        (System_Int32_array **)v74,
                        v75,
                        v76,
                        v77,
                        v78,
                        v79,
                        v80);
                      v81 = this->fields.serverServantData;
                      if ( v81 )
                      {
                        Cost_k__BackingField = this->fields._Cost_k__BackingField;
                        if ( Cost_k__BackingField )
                        {
                          currentPieceActionPoint = v81->fields.currentPieceActionPoint;
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
    sub_B170D4();
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
  DataManager_o *v12; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *Entity; // x0
  __int64 v15; // x20
  int64_t fakeValue; // x21
  int32_t v17; // w0
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x8
  __int64 v19; // x11
  WarBoardMasterPieceComponent_o *v20; // x19
  const MethodInfo *v21; // x1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v22; // 0:x0.16

  if ( (byte_40F85FB & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserEquipMaster___, userEquipId);
    sub_B16FFC(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8);
    sub_B16FFC(&WarBoardMasterPieceComponent_TypeInfo, v9);
    byte_40F85FB = 1;
  }
  this->fields._CurrentUserEquipId_k__BackingField = userEquipId;
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
    sub_AAFCFC(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v11 = **(_QWORD **)(v10 + 192);
  if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
    sub_AAFCFC(v11);
  v12 = **(DataManager_o ***)(v11 + 184);
  if ( !v12 )
    goto LABEL_26;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(v12, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_26;
  Entity = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
             MasterData_WarQuestSelectionMaster,
             this->fields._CurrentUserEquipId_k__BackingField,
             (const MethodInfo_266F5B0 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  if ( !Entity )
    goto LABEL_26;
  fakeValue = Entity->fields.id.fields.fakeValue;
  v15 = *(_QWORD *)&Entity->fields.id.fields.inited;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v22.fields.currentCryptoKey = fakeValue;
  *(_QWORD *)&v22.fields.fakeValue = v15;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v22, 0LL);
  pieceComponent = this->fields.pieceComponent;
  this->fields._iconId_k__BackingField = v17;
  if ( pieceComponent
    && (v19 = *(&WarBoardMasterPieceComponent_TypeInfo->_2.bitflags2 + 1),
        *(&pieceComponent->klass->_2.bitflags2 + 1) >= (unsigned int)v19) )
  {
    if ( (WarBoardMasterPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[v19 - 1] == WarBoardMasterPieceComponent_TypeInfo )
      v20 = (WarBoardMasterPieceComponent_o *)pieceComponent;
    else
      v20 = 0LL;
  }
  else
  {
    v20 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0LL, 0LL) )
  {
    if ( v20 )
    {
      WarBoardMasterPieceComponent__SetMasterIcon(v20, v21);
      return;
    }
LABEL_26:
    sub_B170D4();
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

  if ( (byte_40F8611 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardStageLayoutEntity_ActionType_var, *(_QWORD *)&actionType);
    sub_B16FFC(&System_Enum_TypeInfo, v5);
    sub_B16FFC(&int_TypeInfo, v6);
    sub_B16FFC(&System_Type_TypeInfo, v7);
    byte_40F8611 = 1;
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
  struct WarBoardPieceBaseComponent_o *v8; // x20

  if ( (byte_40F8607 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&level);
    sub_B16FFC(&WarBoardServantPieceComponent_TypeInfo, v5);
    byte_40F8607 = 1;
  }
  pieceComponent = this->fields.pieceComponent;
  if ( pieceComponent
    && (v7 = *(&WarBoardServantPieceComponent_TypeInfo->_2.bitflags2 + 1),
        *(&pieceComponent->klass->_2.bitflags2 + 1) >= (unsigned int)v7) )
  {
    if ( (WarBoardServantPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[v7 - 1] == WarBoardServantPieceComponent_TypeInfo )
      v8 = this->fields.pieceComponent;
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
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v8, 0LL, 0LL) )
  {
    if ( !v8 )
      sub_B170D4();
    WarBoardServantPieceComponent__SetPartyBuffLevel((WarBoardServantPieceComponent_o *)v8, level, 0LL);
  }
}


void __fastcall WarBoardPieceData__SetPieceEnable(WarBoardPieceData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_B170D4();
  WarBoardPieceBaseComponent__SetColliderEnable(pieceComponent, enable, method);
}


void __fastcall WarBoardPieceData__SetPrevAiRoute(
        WarBoardPieceData_o *this,
        WarBoardAIRoute_RouteData_o *prev,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  int32_t baseIndex; // w21
  int32_t actionIndex; // w22
  int64_t flagNow; // x20
  WarBoardPieceData_RouteSaveData_o *v10; // x23
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_40F8609 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardPieceData_RouteSaveData_TypeInfo, prev);
    byte_40F8609 = 1;
  }
  if ( !prev )
    sub_B170D4();
  baseIndex = prev->fields.baseIndex;
  actionIndex = prev->fields.actionIndex;
  flagNow = prev->fields.flagNow;
  v10 = (WarBoardPieceData_RouteSaveData_o *)sub_B170CC(WarBoardPieceData_RouteSaveData_TypeInfo, prev, method, v3, v4);
  WarBoardPieceData_RouteSaveData___ctor_20437776(v10, baseIndex, actionIndex, flagNow, 0LL);
  this->fields._PrevAiRoute_k__BackingField = v10;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._PrevAiRoute_k__BackingField,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v14; // x22
  __int64 v15; // x23
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x8
  __int64 v17; // x11
  struct WarBoardPieceBaseComponent_o *v18; // x20
  UserServantEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v20; // 0:x0.16

  if ( (byte_40F85FC & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, userServantId);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v7);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v8);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_B16FFC(&WarBoardServantPieceComponent_TypeInfo, v11);
    byte_40F85FC = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_31;
  if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         userServantId,
         (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    this->fields._UserServantId_k__BackingField = userServantId;
    if ( !entity )
      goto LABEL_31;
    v15 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
    v14 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v20.fields.currentCryptoKey = v15;
    *(_QWORD *)&v20.fields.fakeValue = v14;
    this->fields._iconId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v20, 0LL);
    if ( (overwriteLimitCount & 0x80000000) != 0 )
    {
      if ( !entity )
        goto LABEL_31;
      overwriteLimitCount = UserServantEntity__getIconLimitCount(entity, 0, 0LL);
    }
    this->fields._iconLimitCount_k__BackingField = overwriteLimitCount;
    if ( !entity
      || (this->fields._iconClassId_k__BackingField = UserServantEntity__getSvtClassId(entity, 0LL), !entity)
      || (this->fields._iconFrameType_k__BackingField = UserServantEntity__getFrameType(entity, 0LL), !entity) )
    {
LABEL_31:
      sub_B170D4();
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
    && (v17 = *(&WarBoardServantPieceComponent_TypeInfo->_2.bitflags2 + 1),
        *(&pieceComponent->klass->_2.bitflags2 + 1) >= (unsigned int)v17) )
  {
    if ( (WarBoardServantPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[v17 - 1] == WarBoardServantPieceComponent_TypeInfo )
      v18 = this->fields.pieceComponent;
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
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0LL, 0LL) )
  {
    if ( v18 )
    {
      WarBoardServantPieceComponent__SetServant((WarBoardServantPieceComponent_o *)v18, userServantId, 0LL);
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
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v12; // x21
  __int64 v13; // x22
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x8
  __int64 v15; // x11
  struct WarBoardPieceBaseComponent_o *v16; // x20
  UserServantEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_40F85FD & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, userServantEquipId);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B16FFC(&WarBoardServantPieceComponent_TypeInfo, v9);
    byte_40F85FD = 1;
  }
  entity = 0LL;
  this->fields._UserServantEquipId_k__BackingField = userServantEquipId;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_26;
  if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         this->fields._UserServantEquipId_k__BackingField,
         (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__) )
  {
    if ( !entity )
      goto LABEL_26;
    v13 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v18.fields.currentCryptoKey = v13;
    *(_QWORD *)&v18.fields.fakeValue = v12;
    this->fields._iconEquipId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
                                                  v18,
                                                  0LL);
    if ( !entity )
      goto LABEL_26;
    this->fields._equipLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(
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
    && (v15 = *(&WarBoardServantPieceComponent_TypeInfo->_2.bitflags2 + 1),
        *(&pieceComponent->klass->_2.bitflags2 + 1) >= (unsigned int)v15) )
  {
    if ( (WarBoardServantPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[v15 - 1] == WarBoardServantPieceComponent_TypeInfo )
      v16 = this->fields.pieceComponent;
    else
      v16 = 0LL;
  }
  else
  {
    v16 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0LL, 0LL) )
  {
    if ( v16 )
    {
      WarBoardServantPieceComponent__SetServantEquip((WarBoardServantPieceComponent_o *)v16, userServantEquipId, 0LL);
      return;
    }
LABEL_26:
    sub_B170D4();
  }
}


void __fastcall WarBoardPieceData__SetServantIconData(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  __int64 v4; // x20
  __int64 v5; // x21
  int32_t v6; // w0
  struct WarBoardUserServantData_o *serverServantData; // x8
  bool IsEnemy; // w0
  WarBoardPieceData_o *v9; // x20
  int32_t LimitCount; // w0
  BattleServantData_o *v11; // x0
  __int64 ClassId; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  struct BattleServantData_o *v15; // x8
  int32_t level; // w9
  struct BattleUserServantData_array *equipList; // x23
  __int64 v18; // x9
  BattleUserServantData_o *v19; // x9
  __int64 v20; // x20
  __int64 v21; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v22; // x8
  int32_t v23; // w0
  BattleDeckServantData_o *deckSvt; // x20
  int32_t DispLimitCnt; // w0
  struct WarBoardUserServantData_o *v26; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  if ( (byte_40F85FA & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_40F85FA = 1;
  }
  battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
  if ( !battleServant_k__BackingField )
    goto LABEL_39;
  v5 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v27.fields.currentCryptoKey = v5;
  *(_QWORD *)&v27.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v27, 0LL);
  serverServantData = this->fields.serverServantData;
  this->fields._iconId_k__BackingField = v6;
  if ( serverServantData )
  {
    IsEnemy = NpcSvtType__IsEnemy(serverServantData->fields.npcSvtType, 0LL);
    v9 = IsEnemy ? this : 0LL;
  }
  else
  {
    IsEnemy = 0;
    v9 = 0LL;
  }
  if ( !this->fields._battleServant_k__BackingField )
    goto LABEL_39;
  if ( IsEnemy )
  {
    LimitCount = BattleServantData__getLimitCount(this->fields._battleServant_k__BackingField, 0LL);
    if ( !v9 )
      goto LABEL_39;
  }
  else
  {
    LimitCount = BattleServantData__GetIconImageLimitCount(this->fields._battleServant_k__BackingField, 0LL);
    v9 = this;
  }
  v9->fields._iconLimitCount_k__BackingField = LimitCount;
  v11 = this->fields._battleServant_k__BackingField;
  if ( !v11 )
    goto LABEL_39;
  ClassId = BattleServantData__getClassId(v11, 0LL);
  v15 = this->fields._battleServant_k__BackingField;
  this->fields._iconClassId_k__BackingField = ClassId;
  if ( !v15 )
    goto LABEL_39;
  this->fields._iconFrameType_k__BackingField = v15->fields._frameType_k__BackingField;
  level = v15->fields.level;
  this->fields._iconEquipId_k__BackingField = 0;
  this->fields._equipLimitCount_k__BackingField = 0;
  this->fields._iconLevel_k__BackingField = level;
  equipList = v15->fields.equipList;
  if ( equipList )
  {
    v18 = *(_QWORD *)&equipList->max_length;
    if ( v18 )
    {
      if ( !(_DWORD)v18 )
        goto LABEL_40;
      v19 = equipList->m_Items[0];
      if ( !v19 )
        goto LABEL_29;
      v21 = *(_QWORD *)&v19->fields.svtId.fields.currentCryptoKey;
      v20 = *(_QWORD *)&v19->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v28.fields.currentCryptoKey = v21;
      *(_QWORD *)&v28.fields.fakeValue = v20;
      ClassId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v28, 0LL);
      this->fields._iconEquipId_k__BackingField = ClassId;
      if ( !equipList->max_length )
      {
LABEL_40:
        sub_B17100(ClassId, v13, v14);
        sub_B170A0();
      }
      v22 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)equipList->m_Items[0];
      if ( !v22
        || (v23 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v22[6], 0LL),
            v15 = this->fields._battleServant_k__BackingField,
            this->fields._equipLimitCount_k__BackingField = v23,
            !v15) )
      {
LABEL_39:
        sub_B170D4();
      }
    }
  }
LABEL_29:
  deckSvt = v15->fields.deckSvt;
  if ( deckSvt && deckSvt->fields.enemyScript )
  {
    this->fields._npcImageSvtId_k__BackingField = BattleDeckServantData__GetImageSvtId(deckSvt, 0LL);
    DispLimitCnt = BattleDeckServantData__GetDispLimitCnt(deckSvt, 0LL);
    v26 = this->fields.serverServantData;
    this->fields._npcDispLimitCount_k__BackingField = DispLimitCnt;
    if ( v26 )
    {
      if ( v26->fields.displayType == 2 )
        LOBYTE(v26) = this->fields._npcImageSvtId_k__BackingField < 1 || BattleDeckServantData__IsShadow(deckSvt, 0LL);
      else
        LOBYTE(v26) = 0;
    }
    this->fields._IsShadow_k__BackingField = (char)v26;
  }
}


void __fastcall WarBoardPieceData__SetServarData(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  struct WarBoardUserMasterData_o *v4; // x8
  struct WarBoardUserMasterData_o *v5; // x8
  WarBoardCost_o *Cost_k__BackingField; // x0
  struct WarBoardCost_o *v7; // x8
  struct WarBoardUserMasterData_o *v8; // x9
  struct WarBoardUserServantData_o *serverServantData; // x8
  struct WarBoardUserServantData_o *v10; // x8
  struct WarBoardUserServantData_o *v11; // x8
  WarBoardUserServantData_o *v12; // x0
  WarBoardCost_o *v13; // x0
  struct WarBoardCost_o *v14; // x8
  struct WarBoardUserServantData_o *v15; // x9

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
        if ( WarBoardCost__get_HasCost(Cost_k__BackingField, 0LL) )
        {
          v7 = this->fields._Cost_k__BackingField;
          if ( v7 )
          {
            v8 = this->fields._serverMasterData_k__BackingField;
            if ( v8 )
            {
              v8->fields.currentPieceActionPoint = v7->fields._CurrentActionPoint_k__BackingField;
              return;
            }
          }
LABEL_20:
          sub_B170D4();
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
      v12 = this->fields.serverServantData;
      if ( !v12 )
        goto LABEL_20;
      WarBoardUserServantData__FromBattleServantData(v12, this->fields._battleServant_k__BackingField, 0LL);
      v13 = this->fields._Cost_k__BackingField;
      if ( v13 && WarBoardCost__get_HasCost(v13, 0LL) )
      {
        v14 = this->fields._Cost_k__BackingField;
        if ( !v14 )
          goto LABEL_20;
        v15 = this->fields.serverServantData;
        if ( !v15 )
          goto LABEL_20;
        v15->fields.currentPieceActionPoint = v14->fields._CurrentActionPoint_k__BackingField;
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
    sub_B170D4();
  WarBoardPieceBaseComponent__SetTouchEnable(pieceComponent, enable, method);
}


void __fastcall WarBoardPieceData__ShowActionTarget(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  if ( !this->fields._isDead_k__BackingField && WarBoardPieceData__get_enableAction(this, method) )
  {
    pieceComponent = this->fields.pieceComponent;
    if ( !pieceComponent )
      sub_B170D4();
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

  if ( (byte_40F8606 & 1) == 0 )
  {
    sub_B16FFC(&JsonManager_TypeInfo, method);
    sub_B16FFC(&string_TypeInfo, v3);
    byte_40F8606 = 1;
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
    sub_B170D4();
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))pieceComponent->klass->vtable._9_HideActionCount.method)(
    pieceComponent,
    pieceComponent->klass->vtable._10_UpdateDisplayActionCount.methodPtr);
}


void __fastcall WarBoardPieceData__TurnStart(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_B170D4();
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))pieceComponent->klass->vtable._8_ShowActionCount.method)(
    pieceComponent,
    pieceComponent->klass->vtable._9_HideActionCount.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v55; // x3
  __int64 v56; // x4
  int32_t breakPoint_k__BackingField; // w26
  int32_t monitor_high; // w8
  struct WarBoardUserServantData_o *v59; // x22
  unsigned int v60; // w21
  __int64 v61; // x24
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  System_Int32_array **v68; // x1
  System_String_array **v69; // x2
  System_String_array **v70; // x3
  System_Boolean_array **v71; // x4
  System_Int32_array **v72; // x5
  System_Int32_array *v73; // x6
  System_Int32_array *v74; // x7
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0
  struct WarBoardUserServantData_o *serverServantData; // x8
  WarBoardUserServantData_o **p_serverServantData; // x23
  _BOOL4 v78; // w26
  struct WarBoardCost_o *v79; // x8
  _BOOL4 v80; // w22
  int32_t currentActionCount_k__BackingField; // w28
  int32_t currentActionPoint; // w24
  struct WarBoardPieceData_SaveData_o *localSaveData; // x9
  int v84; // w27
  _BOOL4 v85; // w25
  int32_t *v86; // x8
  WarBoardCost_o *v87; // x0
  int v88; // w23
  _BOOL4 v89; // w8
  struct WarBoardPieceBaseComponent_o *v90; // x8
  __int64 v91; // x11
  UnityEngine_Object_o *v92; // x20
  CommandSpellIconComponent_o *monitor; // x0
  struct WarBoardPieceBaseComponent_o *v94; // x0
  bool v95; // w8
  WarBoardCost_o *Cost_k__BackingField; // x0
  _BOOL4 HasCost; // w0
  struct WarBoardCost_o *v98; // x8
  WarBoardUserServantData_o *v99; // x0
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  BattleBuffData_o *buffData; // x0
  BattleServantData_o *v102; // x0
  struct WarBoardUserServantData_o *v103; // x8
  int32_t squareIndex; // w9
  WarBoardActionPointClassMaster_o *Master_WarQuestSelectionMaster; // x22
  const MethodInfo *v106; // x1
  WarBoardActionPointEntity_o *ActionPointEntity; // x0
  WarBoardActionPointEntity_o *v108; // x23
  int32_t ClassId; // w0
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  struct WarBoardUserServantData_o *v111; // x8
  WarBoardActionPointClassEntity_o *v112; // x22
  WarBoardCost_o *v113; // x0
  BattleServantData_o *v114; // x0
  WarBoardCost_o *v115; // x23
  int32_t v116; // w0
  int v117; // w22
  WarBoardCost_o *v118; // x0
  struct WarBoardPieceBaseComponent_o *v119; // x0
  const MethodInfo *v120; // x1
  struct WarBoardPieceBaseComponent_o *v121; // x0
  struct WarBoardPieceBaseComponent_o *v122; // x0
  int v123; // w23
  struct WarBoardPieceBaseComponent_o *v124; // x8
  __int64 v125; // x11
  struct WarBoardPieceBaseComponent_o *v126; // x20
  struct BattleServantData_o *v127; // x8
  __int64 v128; // x21
  __int64 v129; // x22
  int32_t v130; // w0
  struct WarBoardUserServantData_o *v131; // x8
  bool IsEnemy; // w0
  WarBoardPieceData_o *v133; // x21
  int32_t LimitCount; // w0
  BattleServantData_o *v135; // x0
  int32_t v136; // w0
  struct BattleServantData_o *v137; // x8
  struct WarBoardPieceBaseComponent_o *v138; // x0
  WarBoardPieceBaseComponent_o *v139; // x0
  __int64 v140; // x1
  __int64 v141; // x2
  __int64 v142; // x3
  __int64 v143; // x4
  WarBoardPieceData___c__DisplayClass312_0_o *v144; // x20
  __int64 v145; // x1
  __int64 v146; // x2
  __int64 v147; // x3
  __int64 v148; // x4
  System_Func_bool__o *v149; // x19
  __int64 v150; // x1
  __int64 v151; // x2
  __int64 v152; // x3
  __int64 v153; // x4
  UnityEngine_WaitUntil_o *v154; // x21
  __int64 v155; // x1
  __int64 v156; // x2
  __int64 v157; // x3
  __int64 v158; // x4
  __int64 v159; // x19
  __int64 v160; // x1
  __int64 v161; // x2
  __int64 v162; // x3
  __int64 v163; // x4
  System_Delegate_o *v164; // x22
  WarBoardTaskBase_TaskCallback_o *v165; // x23
  System_Int32_array **v166; // x0
  System_String_array **v167; // x2
  System_String_array **v168; // x3
  System_Boolean_array **v169; // x4
  System_Int32_array **v170; // x5
  System_Int32_array *v171; // x6
  System_Int32_array *v172; // x7
  WebViewManager_o *Instance; // x20
  __int64 v174; // x2
  __int64 v175; // x0
  __int64 v176; // x21
  __int64 v177; // x0
  __int64 v178; // x1
  System_String_array **v179; // x2
  System_String_array **v180; // x3
  System_Boolean_array **v181; // x4
  System_Int32_array **v182; // x5
  System_Int32_array *v183; // x6
  System_Int32_array *v184; // x7
  WarBoardPieceData_o *v185; // x0
  const MethodInfo *v186; // x1
  _BOOL4 v187; // [xsp+Ch] [xbp-54h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v188; // 0:x0.16

  v6 = forceUpdate;
  if ( (byte_40F8605 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___, warBoardDataEntity);
    sub_B16FFC(&DataManager_TypeInfo, v11);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___, v12);
    sub_B16FFC(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___, v13);
    sub_B16FFC(&Method_System_Func_bool___ctor__, v14);
    sub_B16FFC(&System_Func_bool__TypeInfo, v15);
    sub_B16FFC(&Method_System_Func_WarBoardUserMasterData__bool___ctor__, v16);
    sub_B16FFC(&Method_System_Func_WarBoardUserServantData__bool___ctor__, v17);
    sub_B16FFC(&System_Func_WarBoardUserMasterData__bool__TypeInfo, v18);
    sub_B16FFC(&System_Func_WarBoardUserServantData__bool__TypeInfo, v19);
    sub_B16FFC(&Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__Add__, v20);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v21);
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v22);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v23);
    sub_B16FFC(&WarBoardTaskBase_TaskCallback_TypeInfo, v24);
    sub_B16FFC(&Method_WarBoardPieceData___c__DisplayClass312_0__UpdateFromServerData_b__2__, v25);
    sub_B16FFC(&Method_WarBoardPieceData___c__DisplayClass312_0__UpdateFromServerData_b__3__, v26);
    sub_B16FFC(&WarBoardPieceData___c__DisplayClass312_0_TypeInfo, v27);
    sub_B16FFC(&UnityEngine_WaitUntil_TypeInfo, v28);
    sub_B16FFC(&WarBoardCallbackTask_TypeInfo, v29);
    sub_B16FFC(&WarBoardData_WarBoardDeadBreakList_TypeInfo, v30);
    sub_B16FFC(&WarBoardMasterPieceComponent_TypeInfo, v31);
    sub_B16FFC(&Method_WarBoardPieceData__UpdateFromServerData_b__312_0__, v32);
    sub_B16FFC(&Method_WarBoardPieceData__UpdateFromServerData_b__312_1__, v33);
    sub_B16FFC(&WarBoardServantPieceComponent_TypeInfo, v34);
    sub_B16FFC(&WarBoardTaskBase___TypeInfo, v35);
    byte_40F8605 = 1;
  }
  if ( !warBoardDataEntity )
    return;
  if ( this->fields._type_k__BackingField != 1 )
  {
    svtInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.svtInfo;
    v51 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                               System_Func_WarBoardUserServantData__bool__TypeInfo,
                                                                               warBoardDataEntity,
                                                                               deadBreakList,
                                                                               taskList,
                                                                               forceUpdate);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v51,
      (Il2CppObject *)this,
      Method_WarBoardPieceData__UpdateFromServerData_b__312_1__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardUserServantData__bool___ctor__);
    v52 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
            svtInfo,
            (System_Func_TSource__bool__o *)v51,
            (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
    if ( !v52 )
      return;
    breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
    monitor_high = HIDWORD(v52[23].monitor);
    v59 = (struct WarBoardUserServantData_o *)v52;
    if ( breakPoint_k__BackingField <= monitor_high )
    {
      pieceComponent = this->fields.pieceComponent;
      if ( !pieceComponent )
        goto LABEL_150;
      ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, WarBoardManager_TaskList_o *, Il2CppMethodPointer))pieceComponent->klass->vtable._30_OnDamage.method)(
        pieceComponent,
        taskList,
        pieceComponent->klass->vtable._31_OnBreak.methodPtr);
      v60 = 0;
    }
    else
    {
      this->fields._breakPoint_k__BackingField = monitor_high;
      v60 = 1;
      if ( (HIDWORD(v52[23].monitor) & 0x80000000) != 0 )
      {
        this->fields._isDead_k__BackingField = 1;
        v60 = 0;
      }
      v61 = sub_B170CC(WarBoardData_WarBoardDeadBreakList_TypeInfo, v53, v54, v55, v56);
      WarBoardData_WarBoardDeadBreakList___ctor((WarBoardData_WarBoardDeadBreakList_o *)v61, 0LL);
      if ( !v61 )
        goto LABEL_150;
      v68 = (System_Int32_array **)this->fields.pieceComponent;
      *(_QWORD *)(v61 + 16) = v68;
      sub_B16F98((BattleServantConfConponent_o *)(v61 + 16), v68, v62, v63, v64, v65, v66, v67);
      *(_DWORD *)(v61 + 24) = v59->fields.defeatPoint;
      *(_DWORD *)(v61 + 28) = breakPoint_k__BackingField;
      if ( !deadBreakList )
        goto LABEL_150;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)deadBreakList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v61,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__Add__);
    }
    p_serverServantData = &this->fields.serverServantData;
    serverServantData = this->fields.serverServantData;
    if ( serverServantData )
      v78 = serverServantData->fields.transformIndex != v59->fields.transformIndex;
    else
      v78 = 0;
    currentActionCount_k__BackingField = this->fields._currentActionCount_k__BackingField;
    currentActionPoint = v59->fields.currentActionPoint;
    localSaveData = this->fields.localSaveData;
    v84 = currentActionCount_k__BackingField != currentActionPoint;
    if ( !localSaveData )
      goto LABEL_150;
    if ( v59->fields.consumedActionPointDateTime <= localSaveData->fields.consumedActionPointDateTime
      || this->fields._forceId_k__BackingField
      || this->fields._groupId_k__BackingField )
    {
      v187 = 0;
      if ( serverServantData )
      {
LABEL_34:
        v85 = serverServantData->fields.criticalStars != v59->fields.criticalStars;
LABEL_63:
        v95 = v59->fields.consumedRecoverDonotActCostDateTime > localSaveData->fields.consumedRecoverDonotActCostDateTime
           && !this->fields._forceId_k__BackingField
           && !this->fields._groupId_k__BackingField
           && !this->fields._isDead_k__BackingField;
        this->fields._IsDispConsumedPieceActionPoint_k__BackingField = v95;
        Cost_k__BackingField = this->fields._Cost_k__BackingField;
        this->fields._ConsumedRecoverDonotActCost_k__BackingField = v59->fields.consumedRecoverDonotActCost;
        if ( Cost_k__BackingField )
        {
          HasCost = WarBoardCost__get_HasCost(Cost_k__BackingField, 0LL);
          v84 = currentActionCount_k__BackingField != currentActionPoint || HasCost;
          if ( currentActionCount_k__BackingField == currentActionPoint && HasCost )
          {
            v98 = this->fields._Cost_k__BackingField;
            if ( !v98 )
              goto LABEL_150;
            v84 = v98->fields._CurrentActionPoint_k__BackingField != v59->fields.currentPieceActionPoint;
          }
        }
        this->fields.serverServantData = v59;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.serverServantData,
          (System_Int32_array **)v59,
          v69,
          v70,
          v71,
          v72,
          v73,
          v74);
        v99 = this->fields.serverServantData;
        if ( !v99 )
          goto LABEL_150;
        WarBoardUserServantData__SetBattleServantData(v99, this->fields._battleServant_k__BackingField, 0LL);
        battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
        if ( !battleServant_k__BackingField )
          goto LABEL_150;
        buffData = battleServant_k__BackingField->fields.buffData;
        if ( !buffData )
          goto LABEL_150;
        BattleBuffData__UpdateForceNoField(buffData, 0LL);
        v102 = this->fields._battleServant_k__BackingField;
        if ( !v102 )
          goto LABEL_150;
        BattleServantData__updateHp(v102, 0LL);
        if ( !*p_serverServantData )
          goto LABEL_150;
        WarBoardUserServantData__FromBattleServantData(
          *p_serverServantData,
          this->fields._battleServant_k__BackingField,
          0LL);
        v103 = this->fields.serverServantData;
        if ( !v103 )
          goto LABEL_150;
        this->fields._limitActionCount_k__BackingField = v103->fields.limitActionPoint;
        this->fields._currentActionCount_k__BackingField = v103->fields.currentActionPoint;
        this->fields._attackCount_k__BackingField = v103->fields.attackCount;
        squareIndex = v103->fields.squareIndex;
        if ( squareIndex == -1 )
        {
          this->fields._lastSquareIndex_k__BackingField = this->fields._nowSquareIndex_k__BackingField;
          squareIndex = v103->fields.squareIndex;
        }
        this->fields._nowSquareIndex_k__BackingField = squareIndex;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (WarBoardActionPointClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
        ActionPointEntity = WarBoardPieceData__get_ActionPointEntity(this, v106);
        if ( !this->fields._battleServant_k__BackingField )
          goto LABEL_150;
        v108 = ActionPointEntity;
        ClassId = BattleServantData__getClassId(this->fields._battleServant_k__BackingField, 0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_150;
        EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                        Master_WarQuestSelectionMaster,
                                        v108,
                                        ClassId,
                                        0LL);
        v111 = this->fields.serverServantData;
        if ( !v111 )
          goto LABEL_150;
        v112 = EntityFromActionPointEntity;
        v113 = this->fields._Cost_k__BackingField;
        if ( !v113 )
          goto LABEL_150;
        WarBoardCost__UpdateCurrentPointByServerData(v113, v111->fields.currentPieceActionPoint, 0LL);
        v114 = this->fields._battleServant_k__BackingField;
        if ( !v114 )
          goto LABEL_150;
        v115 = this->fields._Cost_k__BackingField;
        v116 = BattleServantData__getClassId(v114, 0LL);
        if ( !v115 )
          goto LABEL_150;
        if ( WarBoardCost__IsSameClass(v115, v116, 0LL) )
        {
          v117 = 0;
        }
        else
        {
          v118 = WarBoardCost__Create(v112, 0LL, 0LL, 0LL);
          if ( !this->fields._Cost_k__BackingField )
            goto LABEL_150;
          WarBoardCost__UpdateClassCost(this->fields._Cost_k__BackingField, v118, 0LL);
          v117 = 1;
        }
        v119 = this->fields.pieceComponent;
        if ( !v119 )
          goto LABEL_150;
        if ( ((((__int64 (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))v119->klass->vtable._16_IsModifyStatus.method)(
                 v119,
                 v119->klass->vtable._17_ChangeCriticalStars.methodPtr) & 1) != 0
           || v6)
          && !this->fields._isDead_k__BackingField )
        {
          v121 = this->fields.pieceComponent;
          if ( !v121 )
            goto LABEL_150;
          ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, Il2CppMethodPointer))v121->klass->vtable._15_ChangeStatus.method)(
            v121,
            v60,
            v121->klass->vtable._16_IsModifyStatus.methodPtr);
        }
        if ( v117 | (v84 | v6) & 1 && !this->fields._isDead_k__BackingField )
        {
          v122 = this->fields.pieceComponent;
          if ( !v122 )
            goto LABEL_150;
          ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))v122->klass->vtable._10_UpdateDisplayActionCount.method)(
            v122,
            v122->klass->vtable._11_UpdateUiBrightnessByPieceStatus.methodPtr);
        }
        v123 = v6;
        if ( v78 | v123 && !this->fields._isDead_k__BackingField )
        {
          v124 = this->fields.pieceComponent;
          if ( v124
            && (v125 = *(&WarBoardServantPieceComponent_TypeInfo->_2.bitflags2 + 1),
                *(&v124->klass->_2.bitflags2 + 1) >= (unsigned int)v125) )
          {
            if ( (WarBoardServantPieceComponent_c *)v124->klass->_2.typeHierarchy[v125 - 1] == WarBoardServantPieceComponent_TypeInfo )
              v126 = this->fields.pieceComponent;
            else
              v126 = 0LL;
          }
          else
          {
            v126 = 0LL;
          }
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v126, 0LL, 0LL) )
          {
            v127 = this->fields._battleServant_k__BackingField;
            if ( !v127 )
              goto LABEL_150;
            v129 = *(_QWORD *)&v127->fields.svtId.fields.currentCryptoKey;
            v128 = *(_QWORD *)&v127->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v188.fields.currentCryptoKey = v129;
            *(_QWORD *)&v188.fields.fakeValue = v128;
            v130 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44068536(v188, 0LL);
            v131 = this->fields.serverServantData;
            this->fields._iconId_k__BackingField = v130;
            if ( v131 )
            {
              IsEnemy = NpcSvtType__IsEnemy(v131->fields.npcSvtType, 0LL);
              v133 = IsEnemy ? this : 0LL;
            }
            else
            {
              IsEnemy = 0;
              v133 = 0LL;
            }
            if ( !this->fields._battleServant_k__BackingField )
              goto LABEL_150;
            if ( IsEnemy )
            {
              LimitCount = BattleServantData__getLimitCount(this->fields._battleServant_k__BackingField, 0LL);
              if ( !v133 )
                goto LABEL_150;
            }
            else
            {
              LimitCount = BattleServantData__GetIconImageLimitCount(this->fields._battleServant_k__BackingField, 0LL);
              v133 = this;
            }
            v133->fields._iconLimitCount_k__BackingField = LimitCount;
            v135 = this->fields._battleServant_k__BackingField;
            if ( !v135 )
              goto LABEL_150;
            v136 = BattleServantData__getClassId(v135, 0LL);
            v137 = this->fields._battleServant_k__BackingField;
            this->fields._iconClassId_k__BackingField = v136;
            if ( !v137 )
              goto LABEL_150;
            this->fields._iconFrameType_k__BackingField = v137->fields._frameType_k__BackingField;
            this->fields._iconLevel_k__BackingField = v137->fields.level;
            if ( !v126 )
              goto LABEL_150;
            WarBoardServantPieceComponent__SetServantIcon((WarBoardServantPieceComponent_o *)v126, 0LL);
            ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))v126->klass->vtable._9_HideActionCount.method)(
              v126,
              v126->klass->vtable._10_UpdateDisplayActionCount.methodPtr);
            ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))v126->klass->vtable._8_ShowActionCount.method)(
              v126,
              v126->klass->vtable._9_HideActionCount.methodPtr);
          }
        }
        if ( v85 | v123 && !this->fields._isDead_k__BackingField )
        {
          v138 = this->fields.pieceComponent;
          if ( !v138 )
            goto LABEL_150;
          ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))v138->klass->vtable._17_ChangeCriticalStars.method)(
            v138,
            v138->klass->vtable._18_Selectable.methodPtr);
        }
        v139 = this->fields.pieceComponent;
        if ( v139 )
        {
          WarBoardPieceBaseComponent__UpdateUiByBuffChanged(v139, v120);
          if ( v187 )
          {
            v144 = (WarBoardPieceData___c__DisplayClass312_0_o *)sub_B170CC(
                                                                   WarBoardPieceData___c__DisplayClass312_0_TypeInfo,
                                                                   v140,
                                                                   v141,
                                                                   v142,
                                                                   v143);
            WarBoardPieceData___c__DisplayClass312_0___ctor(v144, 0LL);
            if ( !v144 )
              goto LABEL_150;
            v144->fields.popupClose = 0;
            v149 = (System_Func_bool__o *)sub_B170CC(System_Func_bool__TypeInfo, v145, v146, v147, v148);
            System_Func_bool____ctor(
              v149,
              (Il2CppObject *)v144,
              Method_WarBoardPieceData___c__DisplayClass312_0__UpdateFromServerData_b__2__,
              (const MethodInfo_284E7D0 *)Method_System_Func_bool___ctor__);
            v154 = (UnityEngine_WaitUntil_o *)sub_B170CC(UnityEngine_WaitUntil_TypeInfo, v150, v151, v152, v153);
            UnityEngine_WaitUntil___ctor(v154, v149, 0LL);
            v159 = sub_B170CC(WarBoardCallbackTask_TypeInfo, v155, v156, v157, v158);
            WarBoardCallbackTask___ctor(
              (WarBoardCallbackTask_o *)v159,
              (UnityEngine_CustomYieldInstruction_o *)v154,
              0LL);
            if ( !v159 )
              goto LABEL_150;
            v164 = *(System_Delegate_o **)(v159 + 32);
            v165 = (WarBoardTaskBase_TaskCallback_o *)sub_B170CC(
                                                        WarBoardTaskBase_TaskCallback_TypeInfo,
                                                        v160,
                                                        v161,
                                                        v162,
                                                        v163);
            WarBoardTaskBase_TaskCallback___ctor(
              v165,
              (Il2CppObject *)v144,
              Method_WarBoardPieceData___c__DisplayClass312_0__UpdateFromServerData_b__3__,
              0LL);
            v166 = (System_Int32_array **)System_Delegate__Combine(v164, (System_Delegate_o *)v165, 0LL);
            if ( v166 && *v166 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
            {
              v185 = (WarBoardPieceData_o *)sub_B173C8(v166);
              WarBoardPieceData__ToJson(v185, v186);
            }
            else
            {
              *(_QWORD *)(v159 + 32) = v166;
              sub_B16F98((BattleServantConfConponent_o *)(v159 + 32), v166, v167, v168, v169, v170, v171, v172);
              Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              v175 = sub_B17014(WarBoardTaskBase___TypeInfo, 1LL, v174);
              if ( !v175 )
                goto LABEL_150;
              v176 = v175;
              v177 = sub_B170BC(v159, *(_QWORD *)(*(_QWORD *)v175 + 64LL));
              if ( !v177 )
              {
                sub_B170F4(0LL);
                sub_B170A0();
              }
              if ( !*(_DWORD *)(v176 + 24) )
              {
                sub_B17100(v177, v178, v179);
                sub_B170A0();
              }
              *(_QWORD *)(v176 + 32) = v159;
              sub_B16F98(
                (BattleServantConfConponent_o *)(v176 + 32),
                (System_Int32_array **)v159,
                v179,
                v180,
                v181,
                v182,
                v183,
                v184);
              if ( !Instance )
                goto LABEL_150;
              WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 1, (WarBoardTaskBase_array *)v176, 0LL);
            }
          }
          return;
        }
LABEL_150:
        sub_B170D4();
      }
    }
    else
    {
      v187 = !this->fields._isDead_k__BackingField;
      if ( serverServantData )
        goto LABEL_34;
    }
    v85 = 0;
    goto LABEL_63;
  }
  masterInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.masterInfo;
  v37 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                             System_Func_WarBoardUserMasterData__bool__TypeInfo,
                                                                             warBoardDataEntity,
                                                                             deadBreakList,
                                                                             taskList,
                                                                             forceUpdate);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v37,
    (Il2CppObject *)this,
    Method_WarBoardPieceData__UpdateFromServerData_b__312_0__,
    (const MethodInfo_2B6AB40 *)Method_System_Func_WarBoardUserMasterData__bool___ctor__);
  v38 = (struct WarBoardUserMasterData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                             masterInfo,
                                             (System_Func_TSource__bool__o *)v37,
                                             (const MethodInfo_18D8450 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
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
  sub_B16F98(
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
    v79 = this->fields._Cost_k__BackingField;
    if ( v79 )
    {
      if ( !*p_serverMasterData_k__BackingField )
        goto LABEL_150;
      v80 = v79->fields._CurrentActionPoint_k__BackingField != (*p_serverMasterData_k__BackingField)->fields.currentPieceActionPoint;
    }
    else
    {
      v80 = 0;
    }
  }
  else
  {
    v80 = 1;
  }
  v86 = (int32_t *)*p_serverMasterData_k__BackingField;
  if ( !*p_serverMasterData_k__BackingField )
    goto LABEL_150;
  v87 = this->fields._Cost_k__BackingField;
  this->fields._limitActionCount_k__BackingField = v86[12];
  this->fields._currentActionCount_k__BackingField = v86[11];
  this->fields._attackCount_k__BackingField = v86[13];
  this->fields._nowSquareIndex_k__BackingField = v86[14];
  if ( !v87 )
    goto LABEL_150;
  v88 = v6;
  WarBoardCost__UpdateCurrentPointByServerData(v87, v86[18], 0LL);
  v89 = !this->fields._forceId_k__BackingField
     && !this->fields._groupId_k__BackingField
     && this->fields._type_k__BackingField == 1;
  if ( (v89 & (v49 | v88)) != 0 )
  {
    v90 = this->fields.pieceComponent;
    if ( v90
      && (v91 = *(&WarBoardMasterPieceComponent_TypeInfo->_2.bitflags2 + 1),
          *(&v90->klass->_2.bitflags2 + 1) >= (unsigned int)v91) )
    {
      v92 = (WarBoardMasterPieceComponent_c *)v90->klass->_2.typeHierarchy[v91 - 1] == WarBoardMasterPieceComponent_TypeInfo
          ? (UnityEngine_Object_o *)this->fields.pieceComponent
          : 0LL;
    }
    else
    {
      v92 = 0LL;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v92, 0LL, 0LL) )
    {
      if ( !*p_serverMasterData_k__BackingField )
        goto LABEL_150;
      if ( !v92 )
        goto LABEL_150;
      monitor = (CommandSpellIconComponent_o *)v92[13].monitor;
      if ( !monitor )
        goto LABEL_150;
      CommandSpellIconComponent__SetRemain(monitor, (*p_serverMasterData_k__BackingField)->fields.commandSpellNum, 0LL);
    }
  }
  if ( v80 | v88 && !this->fields._isDead_k__BackingField )
  {
    v94 = this->fields.pieceComponent;
    if ( v94 )
    {
      ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))v94->klass->vtable._10_UpdateDisplayActionCount.method)(
        v94,
        v94->klass->vtable._11_UpdateUiBrightnessByPieceStatus.methodPtr);
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
    sub_B170D4();
  WarBoardPieceBaseComponent__UpdateWidgetDepth(pieceComponent, method);
}


void __fastcall WarBoardPieceData__WallAttack(WarBoardPieceData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_B170D4();
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
    sub_B170D4();
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
    sub_B170D4();
  return x->fields.forceId == this->fields._forceId_k__BackingField
      && x->fields.groupId == this->fields._groupId_k__BackingField;
}


bool __fastcall WarBoardPieceData___SetInitinalData_b__311_1(
        WarBoardPieceData_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
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
    sub_B170D4();
  return x->fields.forceId == this->fields._forceId_k__BackingField
      && x->fields.groupId == this->fields._groupId_k__BackingField;
}


bool __fastcall WarBoardPieceData___UpdateFromServerData_b__312_1(
        WarBoardPieceData_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B170D4();
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

  if ( (byte_40F85F6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_WarBoardActionPointMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    byte_40F85F6 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardActionPointMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarBoardActionPointMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B170D4();
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
    sub_B170D4();
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
  struct WarBoardUserServantData_o *serverServantData; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-30h]

  if ( (byte_40F85F5 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_40F85F5 = 1;
  }
  serverServantData = this->fields.serverServantData;
  if ( !serverServantData )
    sub_B170D4();
  v4 = *(_OWORD *)&serverServantData->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&serverServantData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v6, 0LL);
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
    sub_B170D4();
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
  WebViewManager_o *Instance; // x0
  WarBoardData_o *monitor; // x0

  if ( (byte_40F85F3 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_40F85F3 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (monitor = (WarBoardData_o *)Instance[4].monitor) == 0LL )
    sub_B170D4();
  return WarBoardData__get_TurnCount(monitor, 0LL) - this->fields._entryTurn_k__BackingField;
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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
  sub_B16F98(
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


void __fastcall WarBoardPieceData_RouteSaveData___ctor_20437776(
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
  *(_OWORD *)&this->fields.forceId = xmmword_3133190;
}


void __fastcall WarBoardPieceData_SaveData___ctor_20437896(
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.owner, (System_Int32_array **)owner, v5, v6, v7, v8, v9, v10);
  WarBoardPieceData_SaveData__Save(this, v11);
  v18 = this->fields.owner;
  if ( !v18 )
    sub_B170D4();
  v18->fields.localSaveData = this;
  sub_B16F98(
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
  __int64 v9; // x1
  struct WarBoardPieceData_o *owner; // x8
  struct WarBoardPieceData_o *v11; // x8
  struct WarBoardPieceData_o *v12; // x8
  struct WarBoardPieceData_o *v13; // x8
  struct WarBoardPieceData_o *v14; // x0
  System_Int32_array **prevAiRoute; // x1
  struct WarBoardPieceData_o *v16; // x8
  struct WarBoardPieceData_o *v17; // x8
  struct WarBoardPieceData_o *v18; // x8
  struct WarBoardPieceData_o *v19; // x8
  struct WarBoardPieceData_o *v20; // x8
  WarBoardPieceData_o *v21; // x0
  struct WarBoardPieceData_o *v22; // x8
  WarBoardCost_o *Cost_k__BackingField; // x0
  WarBoardPieceData_o *v24; // x0
  bool isMaster; // w0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  struct WarBoardPieceData_o *v32; // x8
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  struct WarBoardPieceData_o *v34; // x8
  struct WarBoardUserMasterData_o *v35; // x8
  struct WarBoardPieceData_o *v36; // x8
  struct WarBoardUserMasterData_o *v37; // x8
  struct WarBoardPieceData_o *v38; // x8
  struct WarBoardUserMasterData_o *v39; // x8
  struct WarBoardPieceData_o *v40; // x8
  struct WarBoardUserMasterData_o *v41; // x8
  struct WarBoardPieceData_o *v42; // x8
  struct WarBoardUserMasterData_o *v43; // x8
  struct WarBoardUserServantData_o *serverServantData; // x8
  struct WarBoardPieceData_o *v45; // x8
  struct WarBoardUserServantData_o *v46; // x8
  struct WarBoardPieceData_o *v47; // x8
  struct WarBoardUserServantData_o *v48; // x8
  System_Int32_array **buffSave; // x1
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
  struct WarBoardPieceData_o *v60; // x8
  struct WarBoardUserServantData_o *v61; // x8
  struct WarBoardPieceData_o *v62; // x8
  struct WarBoardUserServantData_o *v63; // x8
  WebViewManager_o *Instance; // x0
  struct WarBoardPieceData_o *v65; // x8
  struct WarBoardUserServantData_o *v66; // x8
  __int128 v67; // q1
  WarBoardManager_o *v68; // x20
  int64_t v69; // x0
  BattleServantData_o *BattleServant; // x0
  struct WarBoardPieceData_o *v71; // x8
  BattleServantData_o *v72; // x1
  WarBoardUserServantData_o *v73; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+20h] [xbp-30h]

  if ( (byte_40F7866 & 1) == 0 )
  {
    sub_B16FFC(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9);
    byte_40F7866 = 1;
  }
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields._breakPoint_k__BackingField = this->fields.breakPoint;
    v11 = this->fields.owner;
    if ( !v11 )
      goto LABEL_62;
    v11->fields._nowSquareIndex_k__BackingField = this->fields.squareIndex;
    v12 = this->fields.owner;
    if ( !v12 )
      goto LABEL_62;
    v12->fields._currentActionCount_k__BackingField = this->fields.actionCount;
    v13 = this->fields.owner;
    if ( !v13 )
      goto LABEL_62;
    v13->fields._attackCount_k__BackingField = this->fields.attackCount;
    v14 = this->fields.owner;
    if ( !v14 )
      goto LABEL_62;
    prevAiRoute = (System_Int32_array **)this->fields.prevAiRoute;
    v14->fields._PrevAiRoute_k__BackingField = (struct WarBoardPieceData_RouteSaveData_o *)prevAiRoute;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v14->fields._PrevAiRoute_k__BackingField,
      prevAiRoute,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7);
    v16 = this->fields.owner;
    if ( !v16 )
      goto LABEL_62;
    v16->fields._entryTurn_k__BackingField = this->fields.entryTurn;
    v17 = this->fields.owner;
    if ( !v17 )
      goto LABEL_62;
    v17->fields._StageReinfoId_k__BackingField = this->fields.stageReinforcementId;
    v18 = this->fields.owner;
    if ( !v18 )
      goto LABEL_62;
    v18->fields._ReinfoIndex_k__BackingField = this->fields.reinforcementIndex;
    v19 = this->fields.owner;
    if ( !v19 )
      goto LABEL_62;
    v19->fields._overwriteActionType_k__BackingField = this->fields.overwriteActionType;
    v20 = this->fields.owner;
    if ( !v20 )
      goto LABEL_62;
    v20->fields._overwriteAiId_k__BackingField = this->fields.overwriteAiId;
    v21 = this->fields.owner;
    if ( !v21 )
      goto LABEL_62;
    if ( WarBoardPieceData__get_HasCost(v21, 0LL) )
    {
      v22 = this->fields.owner;
      if ( !v22 )
        goto LABEL_62;
      Cost_k__BackingField = v22->fields._Cost_k__BackingField;
      if ( !Cost_k__BackingField )
        goto LABEL_62;
      WarBoardCost__UpdateCurrentPointBySaveData(Cost_k__BackingField, this->fields.currentActionPoint, 0LL);
    }
    v24 = this->fields.owner;
    if ( !v24 )
      goto LABEL_62;
    isMaster = WarBoardPieceData__get_isMaster(v24, 0LL);
    v32 = this->fields.owner;
    if ( !v32 )
      goto LABEL_62;
    if ( isMaster )
    {
      serverMasterData_k__BackingField = v32->fields._serverMasterData_k__BackingField;
      if ( serverMasterData_k__BackingField )
      {
        serverMasterData_k__BackingField->fields.currentLimitActionPoint = this->fields.actionCount;
        v34 = this->fields.owner;
        if ( v34 )
        {
          v35 = v34->fields._serverMasterData_k__BackingField;
          if ( v35 )
          {
            v35->fields.squareIndex = this->fields.squareIndex;
            v36 = this->fields.owner;
            if ( v36 )
            {
              v37 = v36->fields._serverMasterData_k__BackingField;
              if ( v37 )
              {
                v37->fields.currentForceActionPoint = this->fields.currentForceActionPoint;
                v38 = this->fields.owner;
                if ( v38 )
                {
                  v39 = v38->fields._serverMasterData_k__BackingField;
                  if ( v39 )
                  {
                    v39->fields.attackCount = this->fields.attackCount;
                    v40 = this->fields.owner;
                    if ( v40 )
                    {
                      v41 = v40->fields._serverMasterData_k__BackingField;
                      if ( v41 )
                      {
                        v41->fields.currentPieceActionPoint = this->fields.currentActionPoint;
                        v42 = this->fields.owner;
                        if ( v42 )
                        {
                          v43 = v42->fields._serverMasterData_k__BackingField;
                          if ( v43 )
                          {
                            v43->fields.defeatPoint = this->fields.breakPoint;
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
        sub_B170D4();
      }
    }
    else
    {
      serverServantData = v32->fields.serverServantData;
      if ( serverServantData )
      {
        serverServantData->fields.currentActionPoint = this->fields.actionCount;
        v45 = this->fields.owner;
        if ( !v45 )
          goto LABEL_62;
        v46 = v45->fields.serverServantData;
        if ( !v46 )
          goto LABEL_62;
        v46->fields.squareIndex = this->fields.squareIndex;
        v47 = this->fields.owner;
        if ( !v47 )
          goto LABEL_62;
        v48 = v47->fields.serverServantData;
        if ( !v48 )
          goto LABEL_62;
        buffSave = (System_Int32_array **)this->fields.buffSave;
        v48->fields.buffDataSave = (struct BattleBuffData_SaveData_o *)buffSave;
        sub_B16F98((BattleServantConfConponent_o *)&v48->fields.buffDataSave, buffSave, v26, v27, v28, v29, v30, v31);
        v50 = this->fields.owner;
        if ( !v50 )
          goto LABEL_62;
        v51 = v50->fields.serverServantData;
        if ( !v51 )
          goto LABEL_62;
        v51->fields.attackCount = this->fields.attackCount;
        v52 = this->fields.owner;
        if ( !v52 )
          goto LABEL_62;
        v53 = v52->fields.serverServantData;
        if ( !v53 )
          goto LABEL_62;
        v53->fields.currentHp = this->fields.hp;
        v54 = this->fields.owner;
        if ( !v54 )
          goto LABEL_62;
        v55 = v54->fields.serverServantData;
        if ( !v55 )
          goto LABEL_62;
        v55->fields.currentNp = this->fields.np;
        v56 = this->fields.owner;
        if ( !v56 )
          goto LABEL_62;
        v57 = v56->fields.serverServantData;
        if ( !v57 )
          goto LABEL_62;
        v57->fields.nextNpTurn = this->fields.tdTurn;
        v58 = this->fields.owner;
        if ( !v58 )
          goto LABEL_62;
        v59 = v58->fields.serverServantData;
        if ( !v59 )
          goto LABEL_62;
        v59->fields.criticalStars = this->fields.criticalStars;
        v60 = this->fields.owner;
        if ( !v60 )
          goto LABEL_62;
        v61 = v60->fields.serverServantData;
        if ( !v61 )
          goto LABEL_62;
        v61->fields.currentPieceActionPoint = this->fields.currentActionPoint;
        v62 = this->fields.owner;
        if ( !v62 )
          goto LABEL_62;
        v63 = v62->fields.serverServantData;
        if ( !v63 )
          goto LABEL_62;
        v63->fields.defeatPoint = this->fields.breakPoint;
        Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        v65 = this->fields.owner;
        if ( !v65 )
          goto LABEL_62;
        v66 = v65->fields.serverServantData;
        if ( !v66 )
          goto LABEL_62;
        v67 = *(_OWORD *)&v66->fields.id.fields.fakeValue;
        v68 = (WarBoardManager_o *)Instance;
        *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)&v66->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v75.fields.fakeValue = v67;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v74 = v75;
        v69 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44071692(&v74, 0LL);
        if ( !v68 )
          goto LABEL_62;
        BattleServant = WarBoardManager__GetBattleServant(v68, v69, 0LL);
        v71 = this->fields.owner;
        if ( !v71 )
          goto LABEL_62;
        v72 = BattleServant;
        v73 = v71->fields.serverServantData;
        if ( !v73 )
          goto LABEL_62;
        WarBoardUserServantData__SetBattleServantData(v73, v72, 0LL);
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
      sub_B170D4();
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
  struct WarBoardPieceData_o *v21; // x0
  bool isServant; // w0
  struct WarBoardPieceData_o *v23; // x8
  struct WarBoardUserServantData_o *serverServantData; // x9
  struct WarBoardUserServantData_o *v25; // x9
  struct WarBoardUserServantData_o *v26; // x9
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  BattleBuffData_o *buffData; // x0
  struct BattleBuffData_SaveData_o *SaveData; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct WarBoardPieceData_o *v36; // x8
  struct BattleServantData_o *v37; // x0
  int32_t v38; // w0
  struct WarBoardPieceData_o *v39; // x8
  struct BattleServantData_o *v40; // x9
  struct BattleServantData_o *v41; // x8
  struct WarBoardPieceData_o *v42; // x8
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
  if ( WarBoardPieceData__get_HasCost(owner, 0LL) )
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
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.buffSave, 0LL, v4, v5, v6, v7, v8, v9);
  v19 = this->fields.owner;
  this->fields.currentForceActionPoint = 0;
  if ( !v19 )
    goto LABEL_28;
  PrevAiRoute_k__BackingField = v19->fields._PrevAiRoute_k__BackingField;
  this->fields.prevAiRoute = PrevAiRoute_k__BackingField;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.prevAiRoute,
    (System_Int32_array **)PrevAiRoute_k__BackingField,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v21 = this->fields.owner;
  if ( !v21 )
    goto LABEL_28;
  this->fields.entryTurn = v21->fields._entryTurn_k__BackingField;
  this->fields.stageReinforcementId = v21->fields._StageReinfoId_k__BackingField;
  this->fields.reinforcementIndex = v21->fields._ReinfoIndex_k__BackingField;
  this->fields.overwriteActionType = v21->fields._overwriteActionType_k__BackingField;
  this->fields.overwriteAiId = v21->fields._overwriteAiId_k__BackingField;
  isServant = WarBoardPieceData__get_isServant(v21, 0LL);
  v23 = this->fields.owner;
  if ( !v23 )
    goto LABEL_28;
  if ( isServant )
  {
    serverServantData = v23->fields.serverServantData;
    if ( serverServantData )
    {
      this->fields.consumedActionPointDateTime = serverServantData->fields.consumedActionPointDateTime;
      v25 = v23->fields.serverServantData;
      if ( !v25 )
        goto LABEL_28;
      this->fields.criticalStars = v25->fields.criticalStars;
      v26 = v23->fields.serverServantData;
      if ( !v26 )
        goto LABEL_28;
      this->fields.consumedRecoverDonotActCostDateTime = v26->fields.consumedRecoverDonotActCostDateTime;
    }
    battleServant_k__BackingField = v23->fields._battleServant_k__BackingField;
    if ( battleServant_k__BackingField )
    {
      buffData = battleServant_k__BackingField->fields.buffData;
      if ( buffData )
      {
        SaveData = BattleBuffData__getSaveData(buffData, 0LL);
        this->fields.buffSave = SaveData;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.buffSave,
          (System_Int32_array **)SaveData,
          v30,
          v31,
          v32,
          v33,
          v34,
          v35);
        v36 = this->fields.owner;
        if ( v36 )
        {
          v37 = v36->fields._battleServant_k__BackingField;
          if ( v37 )
          {
            v38 = ((__int64 (__fastcall *)(struct BattleServantData_o *, Il2CppMethodPointer))v37->klass->vtable._9_get_hp.method)(
                    v37,
                    v37->klass->vtable._10_set_hp.methodPtr);
            v39 = this->fields.owner;
            this->fields.hp = v38;
            if ( v39 )
            {
              v40 = v39->fields._battleServant_k__BackingField;
              if ( v40 )
              {
                this->fields.np = v40->fields.np;
                v41 = v39->fields._battleServant_k__BackingField;
                if ( v41 )
                {
                  this->fields.tdTurn = v41->fields.nexttpturn;
                  return;
                }
              }
            }
          }
        }
      }
LABEL_28:
      sub_B170D4();
    }
  }
  else if ( WarBoardPieceData__get_isMaster(this->fields.owner, 0LL) )
  {
    v42 = this->fields.owner;
    if ( !v42 )
      goto LABEL_28;
    serverMasterData_k__BackingField = v42->fields._serverMasterData_k__BackingField;
    if ( serverMasterData_k__BackingField )
      this->fields.currentForceActionPoint = serverMasterData_k__BackingField->fields.currentForceActionPoint;
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
    sub_B170D4();
  Piece = WarBoardData__GetPiece(data, this->fields.forceId, this->fields.groupId, this->fields.pieceIndex, 0, 0LL);
  this->fields.owner = Piece;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.owner, (System_Int32_array **)Piece, v5, v6, v7, v8, v9, v10);
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields.localSaveData = this;
    sub_B16F98(
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7863 & 1) == 0 )
  {
    sub_B16FFC(&WarBoardPieceData___c_TypeInfo, v1);
    byte_40F7863 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(WarBoardPieceData___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)WarBoardPieceData___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
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
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_bool__o *_9__4; // x22
  WarBoardManager_o *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_40F7864 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_bool___ctor__, method);
    sub_B16FFC(&System_Action_bool__TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_B16FFC(&Method_WarBoardPieceData___c__DisplayClass312_0__UpdateFromServerData_b__4__, v5);
    byte_40F7864 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__4 = this->fields.__9__4;
  v12 = (WarBoardManager_o *)Instance;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_bool__o *)sub_B170CC(System_Action_bool__TypeInfo, v7, v8, v9, v10);
    System_Action_bool____ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_WarBoardPieceData___c__DisplayClass312_0__UpdateFromServerData_b__4__,
      (const MethodInfo_24B33C8 *)Method_System_Action_bool___ctor__);
    this->fields.__9__4 = _9__4;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__4,
      (System_Int32_array **)_9__4,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( !v12 )
    sub_B170D4();
  WarBoardManager__ShowActionCountDecreaseNoticePopup(v12, _9__4, 0LL);
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
  __int64 v9; // x3
  __int64 v10; // x4
  System_Action_o *_9__5; // x22
  WarBoardManager_o *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_40F7865 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, ok);
    sub_B16FFC(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_B16FFC(&Method_WarBoardPieceData___c__DisplayClass312_0__UpdateFromServerData_b__5__, v5);
    byte_40F7865 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__5 = this->fields.__9__5;
  v12 = (WarBoardManager_o *)Instance;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v7, v8, v9, v10);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)this,
      Method_WarBoardPieceData___c__DisplayClass312_0__UpdateFromServerData_b__5__,
      0LL);
    this->fields.__9__5 = _9__5;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__5,
      (System_Int32_array **)_9__5,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  if ( !v12 )
    sub_B170D4();
  WarBoardManager__HideActionCountDecreaseNoticePopup(v12, _9__5, 0LL);
}


void __fastcall WarBoardPieceData___c__DisplayClass312_0___UpdateFromServerData_b__5(
        WarBoardPieceData___c__DisplayClass312_0_o *this,
        const MethodInfo *method)
{
  this->fields.popupClose = 1;
}