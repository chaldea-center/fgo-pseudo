void __fastcall WarBoardPieceData___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B13F9B & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardPieceData_TypeInfo, v1, v2);
    byte_4B13F9B = 1;
  }
  *WarBoardPieceData_TypeInfo->static_fields = (struct WarBoardPieceData_StaticFields)xmmword_BD1E40;
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
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  Il2CppObject *v38; // x27
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t Master_object; // x0
  const MethodInfo *v46; // x1
  int32_t pieceIndex; // w27
  int32_t forceId; // w21
  int32_t groupId; // w28
  int32_t squareIndex; // w8
  struct System_Int32_array *Individuality; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  __int64 v58; // x1
  int32_t breakPoint; // w8
  int32_t restrictionId; // w8
  struct BattleServantData_o **p_battleServant_k__BackingField; // x25
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  int32_t TurnCount; // w0
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x8
  WarBoardStagePieceDetailEntity_o *v76; // x8
  int32_t type_k__BackingField; // w8
  struct WarBoardUserMasterData_o **p_serverMasterData_k__BackingField; // x27
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  Il2CppObject *v80; // x26
  const MethodInfo *v81; // x1
  WarBoardActionPointClassEntity_o *MasterEntityFromStageId; // x0
  struct WarBoardCost_o *v83; // x0
  struct WarBoardCost_o **p_Cost_k__BackingField; // x26
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  struct WarBoardUserMasterData_o *v91; // x8
  struct WarBoardUserMasterData_o *v92; // x8
  int32_t defeatPoint; // w8
  Il2CppObject *Instance; // x0
  __int64 v95; // x1
  __int128 v96; // q1
  WarBoardManager_o *v97; // x26
  struct BattleServantData_o *BattleServant; // x0
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  __int64 v111; // x1
  Il2CppObject *v112; // x26
  const MethodInfo *v113; // x1
  WarBoardActionPointEntity_o *v114; // x27
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  struct WarBoardCost_o *v116; // x0
  int64_t v117; // x2
  int32_t v118; // w3
  System_String_o *v119; // x4
  BattleSetupInfo_o *v120; // x5
  FollowerInfo_o *v121; // x6
  PartyListViewItem_o *v122; // x7
  int32_t v123; // w8
  int32_t forceId_k__BackingField; // w9
  long double v125; // q0
  int64_t userEquipId; // x8
  __int64 v127; // x0
  __int64 v128; // x0
  __int64 v129; // x20
  __int64 v130; // x21
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t npcId; // x8
  __int64 v133; // x8
  int64_t npcSvtEquipId; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v136; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v137; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v138; // 0:x0.16

  if ( (byte_4B13F7F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEquipMaster___, layout, servantData);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___, v16, v17);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___, v18, v19);
    sub_1BCA7E0(&DataManager_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v22, v23);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__, v24, v25);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v26, v27);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28, v29);
    sub_1BCA7E0(&WarBoardPieceData_PieceStatusCache_TypeInfo, v30, v31);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v32, v33);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v34, v35);
    sub_1BCA7E0(&WarBoardPieceData_TypeInfo, v36, v37);
    byte_4B13F7F = 1;
  }
  v38 = (Il2CppObject *)sub_1BCAA2C(WarBoardPieceData_PieceStatusCache_TypeInfo, layout, servantData, masterData);
  System_Object___ctor(v38, 0LL);
  this->fields.statusCache = (struct WarBoardPieceData_PieceStatusCache_o *)v38;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.statusCache, (int64_t)v38, v39, v40, v41, v42, v43, v44);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !layout )
    goto LABEL_85;
  this->fields.stageId = layout->fields.stageId;
  pieceIndex = layout->fields.pieceIndex;
  this->fields._ReinfoId_k__BackingField = -1;
  *(_QWORD *)&this->fields._StageReinfoId_k__BackingField = -1LL;
  this->fields._type_k__BackingField = pieceIndex == 0;
  forceId = layout->fields.forceId;
  this->fields._forceId_k__BackingField = forceId;
  groupId = layout->fields.groupId;
  this->fields._groupId_k__BackingField = groupId;
  this->fields._index_k__BackingField = pieceIndex;
  if ( !WarBoardPieceData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo, v46);
  this->fields._uniqueIndex_k__BackingField = (unsigned __int16)pieceIndex | ((unsigned __int8)forceId << 24) | ((unsigned __int8)groupId << 16);
  squareIndex = layout->fields.squareIndex;
  this->fields._nowSquareIndex_k__BackingField = squareIndex;
  this->fields._PutSquareIndex_k__BackingField = squareIndex;
  Individuality = WarBoardStageLayoutEntity__GetIndividuality(layout, 0LL);
  this->fields._individuality_k__BackingField = Individuality;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._individuality_k__BackingField,
    (int64_t)Individuality,
    v52,
    v53,
    v54,
    v55,
    v56,
    v57);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v58);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
  if ( !Master_object )
    goto LABEL_85;
  WarBoardStagePieceDetailMaster__TryGetEntity(
    (WarBoardStagePieceDetailMaster_o *)Master_object,
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
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._battleServant_k__BackingField,
    0LL,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  this->fields._isDead_k__BackingField = 0;
  this->fields._isEditing_k__BackingField = 0;
  this->fields._isNotIncludeWin_k__BackingField = 0;
  this->fields._roleType_k__BackingField = 0;
  this->fields._IsDispConsumedPieceActionPoint_k__BackingField = 0;
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_85;
  if ( *(_QWORD *)(Master_object + 440) )
  {
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_85;
    Master_object = *(_QWORD *)(Master_object + 440);
    if ( !Master_object )
      goto LABEL_85;
    TurnCount = WarBoardData__get_TurnCount((WarBoardData_o *)Master_object, 0LL);
  }
  else
  {
    TurnCount = 0;
  }
  stagePieceDetailEntity = this->fields.stagePieceDetailEntity;
  this->fields._entryTurn_k__BackingField = TurnCount;
  if ( stagePieceDetailEntity )
  {
    Master_object = WarBoardStagePieceDetailEntity__getRoleType(stagePieceDetailEntity, 0LL);
    v76 = this->fields.stagePieceDetailEntity;
    this->fields._roleType_k__BackingField = Master_object;
    if ( !v76 )
      goto LABEL_85;
    this->fields._isNotIncludeWin_k__BackingField = WarBoardStagePieceDetailEntity__IsNotIncludeWin(v76, 0LL);
  }
  type_k__BackingField = this->fields._type_k__BackingField;
  if ( masterData && type_k__BackingField == 1 )
  {
    this->fields._serverMasterData_k__BackingField = masterData;
    p_serverMasterData_k__BackingField = &this->fields._serverMasterData_k__BackingField;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields._serverMasterData_k__BackingField,
      (int64_t)masterData,
      v68,
      v69,
      v70,
      v71,
      v72,
      v73);
    serverMasterData_k__BackingField = this->fields._serverMasterData_k__BackingField;
    if ( !serverMasterData_k__BackingField )
      goto LABEL_85;
    this->fields._nowSquareIndex_k__BackingField = serverMasterData_k__BackingField->fields.squareIndex;
    *(int32x2_t *)&this->fields._limitActionCount_k__BackingField = vrev64_s32(*(int32x2_t *)&serverMasterData_k__BackingField->fields.currentLimitActionPoint);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v46);
    v80 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    Master_object = (int64_t)WarBoardPieceData__get_ActionPointEntity(this, v81);
    if ( !v80 )
      goto LABEL_85;
    MasterEntityFromStageId = WarBoardActionPointClassMaster__GetMasterEntityFromStageId(
                                (WarBoardActionPointClassMaster_o *)v80,
                                (WarBoardActionPointEntity_o *)Master_object,
                                0LL);
    v83 = WarBoardCost__Create(MasterEntityFromStageId, this->fields.stagePieceDetailEntity, 0LL, 0LL);
    this->fields._Cost_k__BackingField = v83;
    p_Cost_k__BackingField = &this->fields._Cost_k__BackingField;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields._Cost_k__BackingField,
      (int64_t)v83,
      v85,
      v86,
      v87,
      v88,
      v89,
      v90);
    v91 = this->fields._serverMasterData_k__BackingField;
    if ( !v91 )
      goto LABEL_85;
    Master_object = (int64_t)*p_Cost_k__BackingField;
    if ( !*p_Cost_k__BackingField )
      goto LABEL_85;
    WarBoardCost__UpdateCurrentPointByServerData(
      (WarBoardCost_o *)Master_object,
      v91->fields.currentPieceActionPoint,
      0LL);
    v92 = *p_serverMasterData_k__BackingField;
    if ( !*p_serverMasterData_k__BackingField )
      goto LABEL_85;
    this->fields._attackCount_k__BackingField = v92->fields.attackCount;
    defeatPoint = v92->fields.defeatPoint;
    this->fields._breakPoint_k__BackingField = defeatPoint;
    if ( defeatPoint <= 0 )
LABEL_40:
      this->fields._isDead_k__BackingField = 1;
  }
  else if ( servantData && !type_k__BackingField )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v96 = *(_OWORD *)&servantData->fields.id.fields.fakeValue;
    v97 = (WarBoardManager_o *)Instance;
    *(_OWORD *)&v137.fields.currentCryptoKey = *(_OWORD *)&servantData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v137.fields.fakeValue = v96;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v95);
    v136 = v137;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v136, 0LL);
    if ( !v97 )
      goto LABEL_85;
    BattleServant = WarBoardManager__GetBattleServant(v97, Master_object, 0LL);
    this->fields._battleServant_k__BackingField = BattleServant;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields._battleServant_k__BackingField,
      (int64_t)BattleServant,
      v99,
      v100,
      v101,
      v102,
      v103,
      v104);
    this->fields.serverServantData = servantData;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.serverServantData,
      (int64_t)servantData,
      v105,
      v106,
      v107,
      v108,
      v109,
      v110);
    this->fields._nowSquareIndex_k__BackingField = servantData->fields.squareIndex;
    *(int32x2_t *)&this->fields._limitActionCount_k__BackingField = vrev64_s32(*(int32x2_t *)&servantData->fields.currentActionPoint);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v111);
    v112 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    Master_object = (int64_t)WarBoardPieceData__get_ActionPointEntity(this, v113);
    if ( !this->fields._battleServant_k__BackingField )
      goto LABEL_85;
    v114 = (WarBoardActionPointEntity_o *)Master_object;
    Master_object = BattleServantData__getClassId(this->fields._battleServant_k__BackingField, 0LL);
    if ( !v112 )
      goto LABEL_85;
    EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                    (WarBoardActionPointClassMaster_o *)v112,
                                    v114,
                                    Master_object,
                                    0LL);
    v116 = WarBoardCost__Create(EntityFromActionPointEntity, this->fields.stagePieceDetailEntity, 0LL, 0LL);
    this->fields._Cost_k__BackingField = v116;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields._Cost_k__BackingField,
      (int64_t)v116,
      v117,
      v118,
      v119,
      v120,
      v121,
      v122);
    Master_object = (int64_t)this->fields._Cost_k__BackingField;
    if ( !Master_object )
      goto LABEL_85;
    WarBoardCost__UpdateCurrentPointByServerData(
      (WarBoardCost_o *)Master_object,
      servantData->fields.currentPieceActionPoint,
      0LL);
    this->fields._attackCount_k__BackingField = servantData->fields.attackCount;
    v123 = servantData->fields.defeatPoint;
    this->fields._breakPoint_k__BackingField = v123;
    if ( (v123 & 0x80000000) != 0 )
      goto LABEL_40;
  }
  forceId_k__BackingField = this->fields._forceId_k__BackingField;
  if ( forceId_k__BackingField || this->fields._groupId_k__BackingField )
  {
    if ( npcDict )
    {
      Master_object = (int64_t)System_Collections_Generic_Dictionary_uint__object___get_Item(
                                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)npcDict,
                                 (forceId_k__BackingField << 24) | ((unsigned __int8)this->fields._groupId_k__BackingField << 16),
                                 (const MethodInfo_329DE28 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    }
    else
    {
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_85;
      Master_object = *(_QWORD *)(Master_object + 440);
      if ( !Master_object )
        goto LABEL_85;
      Master_object = (int64_t)WarBoardData__GetNpcEntity(
                                 (WarBoardData_o *)Master_object,
                                 this->fields._forceId_k__BackingField,
                                 this->fields._groupId_k__BackingField,
                                 0LL);
    }
    if ( this->fields._type_k__BackingField == 1 )
    {
      if ( Master_object )
      {
        this->fields._iconId_k__BackingField = *(_DWORD *)(Master_object + 40);
        return;
      }
LABEL_85:
      sub_1BCAA3C(Master_object, v46);
    }
    goto LABEL_83;
  }
  if ( this->fields._type_k__BackingField == 1 )
  {
    Master_object = (int64_t)UserGameMaster__getSelfUserGame(0LL);
    if ( !Master_object )
      goto LABEL_85;
    this->fields._CurrentUserEquipId_k__BackingField = UserGameEntity__getActiveUserEquipId(
                                                         (UserGameEntity_o *)Master_object,
                                                         0LL);
    if ( deckData )
    {
      userEquipId = (unsigned int)deckData->fields.userEquipId;
      if ( (int)userEquipId >= 1 )
        this->fields._CurrentUserEquipId_k__BackingField = userEquipId;
    }
    v127 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v127 + 309) & 1) == 0 )
      v127 = sub_1C1C6BC(v125);
    v128 = *(_QWORD *)(*(_QWORD *)(v127 + 192) + 16LL);
    if ( (*(_BYTE *)(v128 + 309) & 1) == 0 )
      v128 = sub_1C1C6BC(v125);
    Master_object = **(_QWORD **)(v128 + 184);
    if ( !Master_object )
      goto LABEL_85;
    Master_object = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEquipMaster___);
    if ( !Master_object )
      goto LABEL_85;
    Master_object = (int64_t)DataMasterBase_object__object__long___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                               this->fields._CurrentUserEquipId_k__BackingField,
                               (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    if ( !Master_object )
      goto LABEL_85;
    v130 = *(_QWORD *)(Master_object + 32);
    v129 = *(_QWORD *)(Master_object + 40);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v46);
    *(_QWORD *)&v138.fields.currentCryptoKey = v130;
    *(_QWORD *)&v138.fields.fakeValue = v129;
    this->fields._iconId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                             v138,
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
          Master_object = (int64_t)System_Collections_Generic_Dictionary_uint__object___get_Item(
                                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)npcDict,
                                     0,
                                     (const MethodInfo_329DE28 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
        }
        else
        {
          Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !Master_object )
            goto LABEL_85;
          Master_object = *(_QWORD *)(Master_object + 440);
          if ( !Master_object )
            goto LABEL_85;
          Master_object = (int64_t)WarBoardData__GetNpcEntity(
                                     (WarBoardData_o *)Master_object,
                                     this->fields._forceId_k__BackingField,
                                     this->fields._groupId_k__BackingField,
                                     0LL);
        }
        if ( *p_battleServant_k__BackingField )
        {
          deckSvt = (*p_battleServant_k__BackingField)->fields.deckSvt;
          if ( !deckSvt )
            goto LABEL_85;
          npcId = deckSvt->fields.npcId;
        }
        else
        {
          if ( !Master_object )
            goto LABEL_85;
          v133 = *(_QWORD *)(Master_object + 48);
          if ( !v133 )
            goto LABEL_85;
          if ( *(_DWORD *)(v133 + 24) <= (unsigned int)npcIdx )
            sub_1BCAA44(Master_object, v46);
          npcId = *(_QWORD *)(v133 + 8LL * (unsigned int)npcIdx + 32);
        }
        this->fields._npcId_k__BackingField = npcId;
        npcSvtEquipId = servantData->fields.npcSvtEquipId;
        this->fields._isEditing_k__BackingField = 1;
        this->fields._npcEquipId_k__BackingField = npcSvtEquipId;
      }
LABEL_83:
      WarBoardPieceData__SetServantIconData(this, v46);
      return;
    }
    this->fields._isEditing_k__BackingField = 1;
    this->fields._iconId_k__BackingField = 0;
    this->fields._iconLimitCount_k__BackingField = 0;
    if ( !isPrepare )
    {
      this->fields._isDead_k__BackingField = 1;
      this->fields._isEditing_k__BackingField = 0;
      this->fields._breakPoint_k__BackingField = -1;
    }
  }
}


void __fastcall WarBoardPieceData___ctor_36253196(
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
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  Il2CppObject *v31; // x27
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t Instance; // x0
  const MethodInfo *v39; // x1
  int32_t id; // w8
  int32_t v41; // w8
  int32_t forceId; // w29
  int32_t groupId; // w26
  int32_t pieceIndex; // w28
  int32_t TurnCount; // w0
  int32_t breakPoint; // w8
  struct System_Int32_array *specifyPieceIndexes; // x8
  __int64 ReinfoIndex_k__BackingField; // x9
  struct WarBoardStagePieceDetailEntity_o **p_stagePieceDetailEntity; // x24
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x8
  bool IsNotIncludeWin; // w8
  int32_t actionType; // w8
  Il2CppObject *v53; // x0
  __int64 v54; // x1
  __int128 v55; // q0
  WarBoardManager_o *v56; // x24
  struct BattleServantData_o *BattleServant; // x0
  struct BattleServantData_o **p_battleServant_k__BackingField; // x24
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  __int64 v71; // x1
  int32_t v72; // w8
  Il2CppObject *Master_object; // x25
  const MethodInfo *v74; // x1
  WarBoardActionPointEntity_o *v75; // x26
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  struct WarBoardCost_o *v77; // x0
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  int32_t forceId_k__BackingField; // w9
  int defeatPoint; // w8
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t npcId; // x8
  __int64 v88; // x8
  int64_t npcSvtEquipId; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v91; // [xsp+20h] [xbp-90h]
  int32_t value; // [xsp+4Ch] [xbp-64h] BYREF

  if ( (byte_4B13F80 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataManager_GetMaster_WarBoardActionPointClassMaster___,
      stageReinforcementsEntity,
      reinfoEntity);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___, v17, v18);
    sub_1BCA7E0(&DataManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__, v21, v22);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v23, v24);
    sub_1BCA7E0(&WarBoardPieceData_PieceStatusCache_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v27, v28);
    sub_1BCA7E0(&WarBoardPieceData_TypeInfo, v29, v30);
    byte_4B13F80 = 1;
  }
  value = 0;
  v31 = (Il2CppObject *)sub_1BCAA2C(
                          WarBoardPieceData_PieceStatusCache_TypeInfo,
                          stageReinforcementsEntity,
                          reinfoEntity,
                          servantData);
  System_Object___ctor(v31, 0LL);
  this->fields.statusCache = (struct WarBoardPieceData_PieceStatusCache_o *)v31;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.statusCache, (int64_t)v31, v32, v33, v34, v35, v36, v37);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !stageReinforcementsEntity )
    goto LABEL_53;
  this->fields.stageId = stageReinforcementsEntity->fields.warBoardStageId;
  id = stageReinforcementsEntity->fields.id;
  this->fields._ReinfoIndex_k__BackingField = reinfoIndex;
  this->fields._StageReinfoId_k__BackingField = id;
  if ( !reinfoEntity )
    goto LABEL_53;
  v41 = reinfoEntity->fields.id;
  this->fields._type_k__BackingField = 0;
  this->fields._ReinfoId_k__BackingField = v41;
  if ( !servantData )
    goto LABEL_53;
  forceId = servantData->fields.forceId;
  this->fields._forceId_k__BackingField = forceId;
  groupId = servantData->fields.groupId;
  this->fields._groupId_k__BackingField = groupId;
  pieceIndex = servantData->fields.pieceIndex;
  this->fields._index_k__BackingField = pieceIndex;
  if ( !WarBoardPieceData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo, v39);
  this->fields._nowSquareIndex_k__BackingField = squareIndex;
  this->fields._PutSquareIndex_k__BackingField = squareIndex;
  this->fields._uniqueIndex_k__BackingField = (forceId << 24) | ((unsigned __int8)groupId << 16) | (unsigned __int16)pieceIndex;
  *(_QWORD *)&this->fields._overwriteActionType_k__BackingField = -1LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  if ( *(_QWORD *)(Instance + 440) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_53;
    Instance = *(_QWORD *)(Instance + 440);
    if ( !Instance )
      goto LABEL_53;
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
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v39);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
  specifyPieceIndexes = stageReinforcementsEntity->fields.specifyPieceIndexes;
  if ( !specifyPieceIndexes )
    goto LABEL_53;
  ReinfoIndex_k__BackingField = this->fields._ReinfoIndex_k__BackingField;
  if ( (unsigned int)ReinfoIndex_k__BackingField >= specifyPieceIndexes->max_length )
    goto LABEL_54;
  if ( !Instance )
    goto LABEL_53;
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
      goto LABEL_53;
    Instance = WarBoardStagePieceDetailEntity__getRoleType((WarBoardStagePieceDetailEntity_o *)Instance, 0LL);
    stagePieceDetailEntity = this->fields.stagePieceDetailEntity;
    this->fields._roleType_k__BackingField = Instance;
    if ( !stagePieceDetailEntity )
      goto LABEL_53;
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
  v53 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v55 = *(_OWORD *)&servantData->fields.id.fields.fakeValue;
  v56 = (WarBoardManager_o *)v53;
  *(_OWORD *)&v91.fields.currentCryptoKey = *(_OWORD *)&servantData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v91.fields.fakeValue = v55;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v54);
  v90 = v91;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v90, 0LL);
  if ( !v56 )
    goto LABEL_53;
  BattleServant = WarBoardManager__GetBattleServant(v56, Instance, 0LL);
  this->fields._battleServant_k__BackingField = BattleServant;
  p_battleServant_k__BackingField = &this->fields._battleServant_k__BackingField;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._battleServant_k__BackingField,
    (int64_t)BattleServant,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64);
  this->fields.serverServantData = servantData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.serverServantData,
    (int64_t)servantData,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  v72 = servantData->fields.squareIndex;
  this->fields._nowSquareIndex_k__BackingField = v72;
  this->fields._PutSquareIndex_k__BackingField = v72;
  *(int32x2_t *)&this->fields._limitActionCount_k__BackingField = vrev64_s32(*(int32x2_t *)&servantData->fields.currentActionPoint);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v71);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
  Instance = (int64_t)WarBoardPieceData__get_ActionPointEntity(this, v74);
  if ( !this->fields._battleServant_k__BackingField
    || (v75 = (WarBoardActionPointEntity_o *)Instance,
        Instance = BattleServantData__getClassId(this->fields._battleServant_k__BackingField, 0LL),
        !Master_object)
    || (EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                        (WarBoardActionPointClassMaster_o *)Master_object,
                                        v75,
                                        Instance,
                                        0LL),
        v77 = WarBoardCost__Create(EntityFromActionPointEntity, this->fields.stagePieceDetailEntity, reinfoEntity, 0LL),
        this->fields._Cost_k__BackingField = v77,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields._Cost_k__BackingField,
          (int64_t)v77,
          v78,
          v79,
          v80,
          v81,
          v82,
          v83),
        (Instance = (int64_t)this->fields._Cost_k__BackingField) == 0) )
  {
LABEL_53:
    sub_1BCAA3C(Instance, v39);
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
      Instance = (int64_t)System_Collections_Generic_Dictionary_uint__object___get_Item(
                            (System_Collections_Generic_Dictionary_TKey__TValue__o *)npcDict,
                            0,
                            (const MethodInfo_329DE28 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    }
    else
    {
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Instance )
        goto LABEL_53;
      Instance = *(_QWORD *)(Instance + 440);
      if ( !Instance )
        goto LABEL_53;
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
LABEL_51:
        this->fields._npcId_k__BackingField = npcId;
        npcSvtEquipId = servantData->fields.npcSvtEquipId;
        this->fields._isEditing_k__BackingField = 1;
        this->fields._npcEquipId_k__BackingField = npcSvtEquipId;
        goto LABEL_52;
      }
      goto LABEL_53;
    }
    if ( !Instance )
      goto LABEL_53;
    v88 = *(_QWORD *)(Instance + 48);
    if ( !v88 )
      goto LABEL_53;
    if ( *(_DWORD *)(v88 + 24) > (unsigned int)npcIdx )
    {
      npcId = *(_QWORD *)(v88 + 8LL * (unsigned int)npcIdx + 32);
      goto LABEL_51;
    }
LABEL_54:
    sub_1BCAA44(Instance, v39);
  }
LABEL_52:
  WarBoardPieceData__SetServantIconData(this, v39);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceData___ctor_36254404(
        WarBoardPieceData_o *this,
        int32_t stageId,
        WarBoardUserServantData_o *servantData,
        WarBoardPieceData_SaveData_o *saveData,
        System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *npcDict,
        int32_t npcIdx,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  Il2CppObject *v31; // x25
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t Master_object; // x0
  const MethodInfo *v39; // x1
  struct System_Int32_array *reinforcementsIds; // x8
  __int64 ReinfoIndex_k__BackingField; // x9
  WarBoardReinforcementsEntity_o *v42; // x8
  int32_t id; // w9
  int32_t forceId; // w26
  int32_t groupId; // w27
  int32_t pieceIndex; // w28
  int32_t squareIndex; // w9
  struct WarBoardStagePieceDetailEntity_o **p_stagePieceDetailEntity; // x24
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x8
  bool IsNotIncludeWin; // w8
  int32_t actionType; // w8
  __int128 v52; // q1
  WarBoardManager_o *v53; // x23
  struct BattleServantData_o *BattleServant; // x0
  struct BattleServantData_o **p_battleServant_k__BackingField; // x23
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  __int64 v68; // x1
  int32_t v69; // w8
  Il2CppObject *v70; // x24
  const MethodInfo *v71; // x1
  WarBoardActionPointEntity_o *v72; // x25
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  struct WarBoardCost_o *v74; // x0
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  int32_t forceId_k__BackingField; // w9
  int defeatPoint; // w8
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t npcId; // x8
  __int64 v85; // x8
  int64_t npcSvtEquipId; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v87; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v88; // [xsp+20h] [xbp-90h]
  int32_t value; // [xsp+44h] [xbp-6Ch] BYREF
  WarBoardReinforcementsEntity_o *reinforcementsEntity; // [xsp+48h] [xbp-68h] BYREF
  WarBoardStageReinforcementsEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_4B13F81 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___, *(_QWORD *)&stageId, servantData);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, v13, v14);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___, v15, v16);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___, v17, v18);
    sub_1BCA7E0(&DataManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__, v21, v22);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v23, v24);
    sub_1BCA7E0(&WarBoardPieceData_PieceStatusCache_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v27, v28);
    sub_1BCA7E0(&WarBoardPieceData_TypeInfo, v29, v30);
    byte_4B13F81 = 1;
  }
  entity = 0LL;
  reinforcementsEntity = 0LL;
  value = 0;
  v31 = (Il2CppObject *)sub_1BCAA2C(
                          WarBoardPieceData_PieceStatusCache_TypeInfo,
                          *(_QWORD *)&stageId,
                          servantData,
                          saveData);
  System_Object___ctor(v31, 0LL);
  this->fields.statusCache = (struct WarBoardPieceData_PieceStatusCache_o *)v31;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.statusCache, (int64_t)v31, v32, v33, v34, v35, v36, v37);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.stageId = stageId;
  if ( !saveData )
    goto LABEL_54;
  *(_QWORD *)&this->fields._StageReinfoId_k__BackingField = *(_QWORD *)&saveData->fields.stageReinforcementId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v39);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
  if ( !Master_object )
    goto LABEL_54;
  WarBoardStageReinforcementsMaster__TryGetEntity(
    (WarBoardStageReinforcementsMaster_o *)Master_object,
    &entity,
    stageId,
    this->fields._StageReinfoId_k__BackingField,
    0LL);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  if ( !entity )
    goto LABEL_54;
  reinforcementsIds = entity->fields.reinforcementsIds;
  if ( !reinforcementsIds )
    goto LABEL_54;
  ReinfoIndex_k__BackingField = this->fields._ReinfoIndex_k__BackingField;
  if ( (unsigned int)ReinfoIndex_k__BackingField >= reinforcementsIds->max_length )
    goto LABEL_55;
  if ( !Master_object )
    goto LABEL_54;
  Master_object = WarBoardReinforcementsMaster__TryGetEntity(
                    (WarBoardReinforcementsMaster_o *)Master_object,
                    &reinforcementsEntity,
                    reinforcementsIds->m_Items[ReinfoIndex_k__BackingField + 1],
                    0LL);
  v42 = reinforcementsEntity;
  if ( !reinforcementsEntity )
    goto LABEL_54;
  id = reinforcementsEntity->fields.id;
  this->fields._type_k__BackingField = 0;
  this->fields._ReinfoId_k__BackingField = id;
  forceId = saveData->fields.forceId;
  this->fields._forceId_k__BackingField = forceId;
  groupId = saveData->fields.groupId;
  this->fields._groupId_k__BackingField = groupId;
  pieceIndex = saveData->fields.pieceIndex;
  this->fields._index_k__BackingField = pieceIndex;
  Master_object = (int64_t)WarBoardPieceData_TypeInfo;
  if ( !WarBoardPieceData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo, v39);
    v42 = reinforcementsEntity;
  }
  this->fields._uniqueIndex_k__BackingField = (forceId << 24) | ((unsigned __int8)groupId << 16) | (unsigned __int16)pieceIndex;
  squareIndex = saveData->fields.squareIndex;
  this->fields._nowSquareIndex_k__BackingField = squareIndex;
  this->fields._PutSquareIndex_k__BackingField = squareIndex;
  *(_QWORD *)&this->fields._overwriteActionType_k__BackingField = *(_QWORD *)&saveData->fields.overwriteActionType;
  this->fields._entryTurn_k__BackingField = saveData->fields.entryTurn;
  if ( !v42 )
    goto LABEL_54;
  this->fields._breakPointMax_k__BackingField = v42->fields.breakPoint;
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
  if ( !Master_object )
    goto LABEL_54;
  p_stagePieceDetailEntity = &this->fields.stagePieceDetailEntity;
  if ( WarBoardStagePieceDetailMaster__TryGetEntity(
         (WarBoardStagePieceDetailMaster_o *)Master_object,
         &this->fields.stagePieceDetailEntity,
         stageId,
         this->fields._forceId_k__BackingField,
         this->fields._groupId_k__BackingField,
         this->fields._index_k__BackingField,
         0LL) )
  {
    Master_object = (int64_t)*p_stagePieceDetailEntity;
    if ( !*p_stagePieceDetailEntity )
      goto LABEL_54;
    Master_object = WarBoardStagePieceDetailEntity__getRoleType((WarBoardStagePieceDetailEntity_o *)Master_object, 0LL);
    stagePieceDetailEntity = this->fields.stagePieceDetailEntity;
    this->fields._roleType_k__BackingField = Master_object;
    if ( !stagePieceDetailEntity )
      goto LABEL_54;
    IsNotIncludeWin = WarBoardStagePieceDetailEntity__IsNotIncludeWin(stagePieceDetailEntity, 0LL);
  }
  else
  {
    IsNotIncludeWin = 0;
    this->fields._roleType_k__BackingField = 0;
  }
  this->fields._isNotIncludeWin_k__BackingField = IsNotIncludeWin;
  Master_object = (int64_t)reinforcementsEntity;
  if ( !reinforcementsEntity )
    goto LABEL_54;
  if ( WarBoardReinforcementsEntity__TryGetRoleType(reinforcementsEntity, &value, 0LL) )
    this->fields._roleType_k__BackingField = value;
  Master_object = (int64_t)reinforcementsEntity;
  if ( !reinforcementsEntity )
    goto LABEL_54;
  Master_object = WarBoardReinforcementsEntity__IsNotIncludeWin(reinforcementsEntity, 0LL);
  if ( (Master_object & 1) != 0 )
    this->fields._isNotIncludeWin_k__BackingField = 1;
  if ( !reinforcementsEntity )
    goto LABEL_54;
  actionType = reinforcementsEntity->fields.actionType;
  this->fields._isEditing_k__BackingField = 0;
  this->fields._actionType_k__BackingField = actionType;
  this->fields._IsDispConsumedPieceActionPoint_k__BackingField = 0;
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !servantData )
    goto LABEL_54;
  v52 = *(_OWORD *)&servantData->fields.id.fields.fakeValue;
  v53 = (WarBoardManager_o *)Master_object;
  *(_OWORD *)&v88.fields.currentCryptoKey = *(_OWORD *)&servantData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v88.fields.fakeValue = v52;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v39);
  v87 = v88;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v87, 0LL);
  if ( !v53 )
    goto LABEL_54;
  BattleServant = WarBoardManager__GetBattleServant(v53, Master_object, 0LL);
  this->fields._battleServant_k__BackingField = BattleServant;
  p_battleServant_k__BackingField = &this->fields._battleServant_k__BackingField;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._battleServant_k__BackingField,
    (int64_t)BattleServant,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61);
  this->fields.serverServantData = servantData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.serverServantData,
    (int64_t)servantData,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  v69 = servantData->fields.squareIndex;
  this->fields._nowSquareIndex_k__BackingField = v69;
  this->fields._PutSquareIndex_k__BackingField = v69;
  *(int32x2_t *)&this->fields._limitActionCount_k__BackingField = vrev64_s32(*(int32x2_t *)&servantData->fields.currentActionPoint);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v68);
  v70 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
  Master_object = (int64_t)WarBoardPieceData__get_ActionPointEntity(this, v71);
  if ( !this->fields._battleServant_k__BackingField
    || (v72 = (WarBoardActionPointEntity_o *)Master_object,
        Master_object = BattleServantData__getClassId(this->fields._battleServant_k__BackingField, 0LL),
        !v70)
    || (EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                        (WarBoardActionPointClassMaster_o *)v70,
                                        v72,
                                        Master_object,
                                        0LL),
        v74 = WarBoardCost__Create(
                EntityFromActionPointEntity,
                this->fields.stagePieceDetailEntity,
                reinforcementsEntity,
                0LL),
        this->fields._Cost_k__BackingField = v74,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields._Cost_k__BackingField,
          (int64_t)v74,
          v75,
          v76,
          v77,
          v78,
          v79,
          v80),
        (Master_object = (int64_t)this->fields._Cost_k__BackingField) == 0) )
  {
LABEL_54:
    sub_1BCAA3C(Master_object, v39);
  }
  WarBoardCost__UpdateCurrentPointByServerData(
    (WarBoardCost_o *)Master_object,
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
      Master_object = (int64_t)System_Collections_Generic_Dictionary_uint__object___get_Item(
                                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)npcDict,
                                 0,
                                 (const MethodInfo_329DE28 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    }
    else
    {
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_54;
      Master_object = *(_QWORD *)(Master_object + 440);
      if ( !Master_object )
        goto LABEL_54;
      Master_object = (int64_t)WarBoardData__GetNpcEntity(
                                 (WarBoardData_o *)Master_object,
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
LABEL_52:
        this->fields._npcId_k__BackingField = npcId;
        npcSvtEquipId = servantData->fields.npcSvtEquipId;
        this->fields._isEditing_k__BackingField = 1;
        this->fields._npcEquipId_k__BackingField = npcSvtEquipId;
        goto LABEL_53;
      }
      goto LABEL_54;
    }
    if ( !Master_object )
      goto LABEL_54;
    v85 = *(_QWORD *)(Master_object + 48);
    if ( !v85 )
      goto LABEL_54;
    if ( *(_DWORD *)(v85 + 24) > (unsigned int)npcIdx )
    {
      npcId = *(_QWORD *)(v85 + 8LL * (unsigned int)npcIdx + 32);
      goto LABEL_52;
    }
LABEL_55:
    sub_1BCAA44(Master_object, v39);
  }
LABEL_53:
  WarBoardPieceData__SetServantIconData(this, v39);
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
    sub_1BCAA3C(Cost_k__BackingField, method);
  }
  ((void (__fastcall *)(WarBoardCost_o *, void *))Cost_k__BackingField->klass[1]._1.typeMetadataHandle)(
    Cost_k__BackingField,
    Cost_k__BackingField->klass[1]._1.interopData);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceData__ActivateCacheMode(WarBoardPieceData_o *this, bool flg, const MethodInfo *method)
{
  struct WarBoardPieceData_PieceStatusCache_o *statusCache; // x8

  statusCache = this->fields.statusCache;
  if ( !statusCache )
    sub_1BCAA3C(this, flg);
  *(_DWORD *)&statusCache->fields._HasAvailablePermanentSleepBuff_k__BackingField.fields.hasValue = 0;
  statusCache->fields._IsEnabled_k__BackingField = flg;
}


// local variable allocation has failed, the output may be wrong!
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
      sub_1BCAA3C(0LL, *(_QWORD *)&count);
    ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))pieceComponent->klass->vtable._17_ChangeCriticalStars.method)(
      pieceComponent,
      pieceComponent->klass->vtable._18_Selectable.methodPtr);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceData__AfterAttack(
        WarBoardPieceData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_1BCAA3C(0LL, *(_QWORD *)&squareIndex);
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, int32_t, Il2CppMethodPointer))pieceComponent->klass->vtable._27_OnAfterAttack.method)(
    pieceComponent,
    squareIndex,
    pieceComponent->klass->vtable._28_OnWallAttack.methodPtr);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceData__AfterWallAttack(
        WarBoardPieceData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_1BCAA3C(0LL, *(_QWORD *)&squareIndex);
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
  struct WarBoardUserServantData_o *serverServantData; // x8
  int32_t displayType; // w8
  int v6; // s0
  int v7; // s1
  int v8; // s2
  float v9; // s3
  UIWidget_o *v10; // x0
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  serverServantData = this->fields.serverServantData;
  if ( serverServantData )
  {
    displayType = serverServantData->fields.displayType;
    switch ( displayType )
    {
      case 3:
        goto LABEL_5;
      case 2:
        if ( this->fields._IsShadow_k__BackingField )
        {
          if ( enemyIcon )
          {
            v11.fields.a = 1.0;
            v11.fields.r = 0.05;
            v11.fields.g = 0.05;
            v11.fields.b = 0.05;
            UIWidget__set_color((UIWidget_o *)enemyIcon, v11, 0LL);
            v9 = 1.0;
            v10 = (UIWidget_o *)enemyIcon;
            v6 = 1028443341;
            v7 = 1028443341;
            v8 = 1028443341;
            goto LABEL_10;
          }
LABEL_12:
          sub_1BCAA3C(this, enemyIcon);
        }
        break;
      case 1:
LABEL_5:
        if ( enemyIcon )
        {
          v6 = 1.0;
          v7 = 1.0;
          v8 = 1.0;
          v9 = 1.0;
          v10 = (UIWidget_o *)enemyIcon;
LABEL_10:
          UIWidget__set_color(v10, *(UnityEngine_Color_o *)&v6, 0LL);
          return;
        }
        goto LABEL_12;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceData__Attack(WarBoardPieceData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_1BCAA3C(0LL, *(_QWORD *)&squareIndex);
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
      sub_1BCAA3C(Cost_k__BackingField, method);
    }
  }
  --this->fields._currentActionCount_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceData__AttackResume(
        WarBoardPieceData_o *this,
        int32_t squareIndex,
        const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_1BCAA3C(0LL, *(_QWORD *)&squareIndex);
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
  WarBoardPieceBaseComponent__UpdateUiByBuffChanged(pieceComponent, 0LL);
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
    sub_1BCAA3C(pieceComponent, method);
  }
}


bool __fastcall WarBoardPieceData__CheckWallAttackCond(
        WarBoardPieceData_o *this,
        WarBoardWallData_o *targetWall,
        const MethodInfo *method)
{
  long double inited; // q0
  __int64 v6; // x1
  __int64 v7; // x2
  struct WarBoardStageWallEntity_o *wallEntity; // x8
  int32_t attackForceId; // w8
  _QWORD *v10; // x21
  __int64 v11; // x8
  __int64 v12; // x0
  System_Int32_array *CondAttackIndividuality; // x0
  System_Int32_array *v14; // x20
  System_Int32_array *Individuality; // x0
  __int64 v16; // x1
  __int64 v17; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  unsigned __int64 v19; // x21

  if ( (byte_4B13F88 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_int___, targetWall, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Contains_int___, v6, v7);
    byte_4B13F88 = 1;
  }
  if ( !targetWall
    || (wallEntity = targetWall->fields.wallEntity) != 0LL
    && (attackForceId = wallEntity->fields.attackForceId, attackForceId != this->fields._forceId_k__BackingField)
    && (attackForceId & 0x80000000) == 0 )
  {
LABEL_24:
    LOBYTE(Individuality) = 0;
    return (unsigned __int8)Individuality & 1;
  }
  v10 = Method_System_Array_Empty_int___;
  v11 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v11 )
  {
    sub_1C1C718(Method_System_Array_Empty_int___, targetWall);
    v11 = v10[7];
  }
  v12 = *(_QWORD *)(v11 + 16);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C1C6BC(inited);
  if ( !*(_DWORD *)(v12 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v12, targetWall);
  CondAttackIndividuality = *(System_Int32_array **)(v10[7] + 16LL);
  if ( (CondAttackIndividuality->m_Items[70] & 0x100) == 0 )
    CondAttackIndividuality = (System_Int32_array *)sub_1C1C6BC(inited);
  if ( targetWall->fields.wallEntity )
  {
    CondAttackIndividuality = WarBoardStageWallEntity__GetCondAttackIndividuality(targetWall->fields.wallEntity, 0LL);
    v14 = CondAttackIndividuality;
    if ( CondAttackIndividuality )
      goto LABEL_17;
LABEL_27:
    sub_1BCAA3C(CondAttackIndividuality, targetWall);
  }
  v14 = **(System_Int32_array ***)&CondAttackIndividuality->m_Items[39];
  if ( !v14 )
    goto LABEL_27;
LABEL_17:
  if ( !*(_QWORD *)&v14->max_length )
  {
    LOBYTE(Individuality) = 1;
    return (unsigned __int8)Individuality & 1;
  }
  Individuality = WarBoardPieceData__GetIndividuality(this, 0LL, method);
  v17 = *(_QWORD *)&v14->max_length;
  if ( (int)v17 < 1 )
    goto LABEL_24;
  v18 = (System_Collections_Generic_IEnumerable_TSource__o *)Individuality;
  v19 = 0LL;
  do
  {
    if ( v19 >= (unsigned int)v17 )
      sub_1BCAA44(Individuality, v16);
    Individuality = (System_Int32_array *)System_Linq_Enumerable__Contains_int_(
                                            v18,
                                            v14->m_Items[v19 + 1],
                                            (const MethodInfo_2F2AF7C *)Method_System_Linq_Enumerable_Contains_int___);
    if ( ((unsigned __int8)Individuality & 1) != 0 )
      break;
    LODWORD(v17) = v14->max_length;
    ++v19;
  }
  while ( (__int64)v19 < (int)v17 );
  return (unsigned __int8)Individuality & 1;
}


void __fastcall WarBoardPieceData__ClearPartyBuff(WarBoardPieceData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x9
  __int64 methodPtr_low; // x12
  UnityEngine_Object_o *v8; // x19
  _BOOL8 v9; // x0
  __int64 v10; // x1

  if ( (byte_4B13F90 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    sub_1BCA7E0(&WarBoardServantPieceComponent_TypeInfo, v4, v5);
    byte_4B13F90 = 1;
  }
  pieceComponent = this->fields.pieceComponent;
  if ( pieceComponent
    && (methodPtr_low = LOBYTE(WarBoardServantPieceComponent_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(pieceComponent->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (WarBoardServantPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[methodPtr_low - 1] == WarBoardServantPieceComponent_TypeInfo )
      v8 = (UnityEngine_Object_o *)this->fields.pieceComponent;
    else
      v8 = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  v9 = UnityEngine_Object__op_Equality(v8, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !v8 )
      sub_1BCAA3C(v9, v10);
    WarBoardServantPieceComponent__ClearPartyBuff((WarBoardServantPieceComponent_o *)v8, 0LL);
  }
}


void __fastcall WarBoardPieceData__ClearPrevAiRoute(WarBoardPieceData_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._PrevAiRoute_k__BackingField = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields._PrevAiRoute_k__BackingField, 0LL, v2, v3, v4, v5, v6, v7);
}


System_Int32_array *__fastcall WarBoardPieceData__CreatePieceEventVals(
        WarBoardPieceData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  System_Int32_array *result; // x0
  __int64 v5; // x1
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4B13F9A & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, method, v2);
    byte_4B13F9A = 1;
  }
  result = (System_Int32_array *)sub_1BCA888(int___TypeInfo, 3LL);
  if ( !result )
    sub_1BCAA3C(0LL, v5);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = this->fields._forceId_k__BackingField, max_length == 1)
    || (result->m_Items[2] = this->fields._groupId_k__BackingField, max_length <= 2) )
  {
    sub_1BCAA44(result, v5);
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
    sub_1BCAA3C(0LL, method);
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  WarBoardManager_TaskList_o *v9; // x19
  const MethodInfo *v10; // x1
  __int64 v11; // x1
  unsigned int breakPoint_k__BackingField; // w22
  unsigned int v13; // w21
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  if ( (byte_4B13F8B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardMessageMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&WarBoardManager_TaskList_TypeInfo, v7, v8);
    byte_4B13F8B = 1;
  }
  v9 = (WarBoardManager_TaskList_o *)sub_1BCAA2C(WarBoardManager_TaskList_TypeInfo, method, v2, v3);
  WarBoardManager_TaskList___ctor(v9, v10);
  breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
  v13 = breakPoint_k__BackingField - 1;
  if ( (int)(breakPoint_k__BackingField - 1) < 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v11);
    DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
    pieceComponent = this->fields.pieceComponent;
    if ( pieceComponent )
    {
      ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, _QWORD, _QWORD, __int64, Il2CppMethodPointer))pieceComponent->klass->vtable._31_OnBreak.method)(
        pieceComponent,
        breakPoint_k__BackingField,
        0LL,
        v9,
        v13,
        0LL,
        1LL,
        pieceComponent->klass->vtable._32_OnDead.methodPtr);
      pieceComponent = this->fields.pieceComponent;
      if ( pieceComponent )
      {
        ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, WarBoardManager_TaskList_o *, __int64, Il2CppMethodPointer))pieceComponent->klass->vtable._32_OnDead.method)(
          pieceComponent,
          0LL,
          v9,
          1LL,
          pieceComponent->klass->vtable._33_OnRevive.methodPtr);
        return v9;
      }
    }
LABEL_12:
    sub_1BCAA3C(pieceComponent, v11);
  }
  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    goto LABEL_12;
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, _QWORD, _QWORD, __int64, Il2CppMethodPointer))pieceComponent->klass->vtable._31_OnBreak.method)(
    pieceComponent,
    breakPoint_k__BackingField,
    0LL,
    v9,
    v13,
    0LL,
    1LL,
    pieceComponent->klass->vtable._32_OnDead.methodPtr);
  return v9;
}


void __fastcall WarBoardPieceData__Deselect(WarBoardPieceData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardData_o *pieceComponent; // x0
  WarBoardSquareData_o *Square; // x0

  if ( (byte_4B13F8A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    byte_4B13F8A = 1;
  }
  pieceComponent = (WarBoardData_o *)this->fields.pieceComponent;
  if ( !pieceComponent )
    goto LABEL_10;
  ((void (__fastcall *)(WarBoardData_o *, Il2CppMethodPointer))pieceComponent->klass[1].vtable._0_Equals.method)(
    pieceComponent,
    pieceComponent->klass[1].vtable._1_Finalize.methodPtr);
  pieceComponent = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceComponent )
    goto LABEL_10;
  pieceComponent = (WarBoardData_o *)pieceComponent[1].fields.playedStageReinforcementsList;
  if ( !pieceComponent )
    goto LABEL_10;
  Square = WarBoardData__GetSquare(pieceComponent, this->fields._nowSquareIndex_k__BackingField, 0LL);
  if ( Square )
  {
    pieceComponent = (WarBoardData_o *)Square->fields.squareComponent;
    if ( pieceComponent )
    {
      WarBoardSquareComponent__OnDeselect((WarBoardSquareComponent_o *)pieceComponent, 0LL);
      return;
    }
LABEL_10:
    sub_1BCAA3C(pieceComponent, method);
  }
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
      sub_1BCAA3C(0LL, *(_QWORD *)&substructPoint);
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
      sub_1BCAA3C(0LL, *(_QWORD *)&substructPoint);
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
      sub_1BCAA3C(0LL, *(_QWORD *)&substructPoint);
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
      sub_1BCAA3C(0LL, *(_QWORD *)&substructPoint);
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
    sub_1BCAA3C(Cost_k__BackingField, method);
  p_currentActionCount_k__BackingField = &v4->fields._CurrentActionPoint_k__BackingField;
  return *p_currentActionCount_k__BackingField;
}


BuffList_TYPE_array *__fastcall WarBoardPieceData__GetBuffTypesFromConstantStr(
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Int32_array *ValueAsIntArray; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  long double inited; // q0
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  WarBoardPieceData___c_c *v20; // x0
  System_Func_T__TResult__o *_9__340_0; // x20
  Il2CppObject *v22; // x21
  struct WarBoardPieceData___c_StaticFields *static_fields; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  BuffList_TYPE_array *result; // x0
  _QWORD *v32; // x19
  __int64 v33; // x8
  __int64 v34; // x0
  __int64 v35; // x0

  if ( (byte_4B13F98 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_BuffList_TYPE___, method, v2);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_int__BuffList_TYPE___, v4, v5);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_BuffList_TYPE___, v6, v7);
    sub_1BCA7E0(&System_Func_int__BuffList_TYPE__TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_WarBoardPieceData___c__GetBuffTypesFromConstantStr_b__340_0__, v10, v11);
    sub_1BCA7E0(&WarBoardPieceData___c_TypeInfo, v12, v13);
    byte_4B13F98 = 1;
  }
  ValueAsIntArray = ConstantStrMaster__GetValueAsIntArray(key, 0LL);
  if ( !ValueAsIntArray )
    goto LABEL_11;
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)ValueAsIntArray;
  v20 = WarBoardPieceData___c_TypeInfo;
  if ( !WarBoardPieceData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceData___c_TypeInfo, v15);
    v20 = WarBoardPieceData___c_TypeInfo;
  }
  _9__340_0 = (System_Func_T__TResult__o *)v20->static_fields->__9__340_0;
  if ( !_9__340_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20, v15);
      v20 = WarBoardPieceData___c_TypeInfo;
    }
    v22 = (Il2CppObject *)v20->static_fields->__9;
    _9__340_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_int__BuffList_TYPE__TypeInfo, v15, v16, v17);
    System_Func_int__Int32Enum____ctor(
      _9__340_0,
      v22,
      Method_WarBoardPieceData___c__GetBuffTypesFromConstantStr_b__340_0__,
      0LL);
    static_fields = WarBoardPieceData___c_TypeInfo->static_fields;
    static_fields->__9__340_0 = (struct System_Func_int__BuffList_TYPE__o *)_9__340_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__340_0,
      (int64_t)_9__340_0,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
  }
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__Int32Enum_(
                                                               v19,
                                                               (System_Func_TSource__TResult__o *)_9__340_0,
                                                               (const MethodInfo_2F3EFA8 *)Method_System_Linq_Enumerable_Select_int__BuffList_TYPE___);
  result = (BuffList_TYPE_array *)System_Linq_Enumerable__ToArray_Int32Enum_(
                                    v30,
                                    (const MethodInfo_2F4B8F8 *)Method_System_Linq_Enumerable_ToArray_BuffList_TYPE___);
  if ( !result )
  {
LABEL_11:
    v32 = Method_System_Array_Empty_BuffList_TYPE___;
    v33 = *((_QWORD *)Method_System_Array_Empty_BuffList_TYPE___ + 7);
    if ( !v33 )
    {
      sub_1C1C718(Method_System_Array_Empty_BuffList_TYPE___, v15);
      v33 = v32[7];
    }
    v34 = *(_QWORD *)(v33 + 16);
    if ( (*(_BYTE *)(v34 + 309) & 1) == 0 )
      v34 = sub_1C1C6BC(inited);
    if ( !*(_DWORD *)(v34 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v34, v15);
    v35 = *(_QWORD *)(v32[7] + 16LL);
    if ( (*(_BYTE *)(v35 + 309) & 1) == 0 )
      v35 = sub_1C1C6BC(inited);
    return **(BuffList_TYPE_array ***)(v35 + 184);
  }
  return result;
}


int32_t __fastcall WarBoardPieceData__GetDeadEffectType(WarBoardPieceData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  WarBoardReinforcementsMaster_o *Master_object; // x0
  __int64 v7; // x1
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x0
  int32_t value; // [xsp+4h] [xbp-2Ch] BYREF
  WarBoardReinforcementsEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B13F93 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B13F93 = 1;
  }
  entity = 0LL;
  value = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  if ( !Master_object )
    goto LABEL_13;
  if ( !WarBoardReinforcementsMaster__TryGetEntity(Master_object, &entity, this->fields._ReinfoId_k__BackingField, 0LL) )
    goto LABEL_10;
  Master_object = (WarBoardReinforcementsMaster_o *)entity;
  if ( !entity )
LABEL_13:
    sub_1BCAA3C(Master_object, v7);
  if ( WarBoardReinforcementsEntity__TryGetDeadEffectType(entity, &value, 0LL) )
  {
    LODWORD(stagePieceDetailEntity) = value;
    return (int)stagePieceDetailEntity;
  }
LABEL_10:
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_int__o *v12; // x20
  BattleServantData_o *battleServant_k__BackingField; // x0
  bool IsIncludeIgnoreIndividuality; // w2
  bool IsIgnoreIndivUnreleasable; // w3
  bool v16; // w4
  System_Int32_array *ConcatServantAndBuffIndividualityies; // x0
  __int64 v18; // x1

  if ( (byte_4B13F7A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__AddRange__, args, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__ToArray__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v10, v11);
    byte_4B13F7A = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    args,
                                                    method,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
  if ( battleServant_k__BackingField )
  {
    if ( args )
    {
      IsIncludeIgnoreIndividuality = args->fields.IsIncludeIgnoreIndividuality;
      IsIgnoreIndivUnreleasable = args->fields.IsIgnoreIndivUnreleasable;
      v16 = !args->fields.IsIncludePassiveIndividuality;
    }
    else
    {
      IsIncludeIgnoreIndividuality = 0;
      IsIgnoreIndivUnreleasable = 0;
      v16 = 0;
    }
    ConcatServantAndBuffIndividualityies = BattleServantData__getConcatServantAndBuffIndividualityies(
                                             battleServant_k__BackingField,
                                             0LL,
                                             IsIncludeIgnoreIndividuality,
                                             IsIgnoreIndivUnreleasable,
                                             v16,
                                             0LL);
    if ( !v12 )
LABEL_15:
      sub_1BCAA3C(ConcatServantAndBuffIndividualityies, v18);
    System_Collections_Generic_List_int___AddRange(
      v12,
      (System_Collections_Generic_IEnumerable_T__o *)ConcatServantAndBuffIndividualityies,
      (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  ConcatServantAndBuffIndividualityies = (System_Int32_array *)BasicHelper__IsNullOrEmpty(
                                                                 (System_Collections_ICollection_o *)this->fields._individuality_k__BackingField,
                                                                 0LL);
  if ( ((unsigned __int8)ConcatServantAndBuffIndividualityies & 1) != 0 )
  {
    if ( !v12 )
      goto LABEL_15;
  }
  else
  {
    if ( !v12 )
      goto LABEL_15;
    System_Collections_Generic_List_int___AddRange(
      v12,
      (System_Collections_Generic_IEnumerable_T__o *)this->fields._individuality_k__BackingField,
      (const MethodInfo_3584E44 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  return System_Collections_Generic_List_int___ToArray(
           v12,
           (const MethodInfo_35866F0 *)Method_System_Collections_Generic_List_int__ToArray__);
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
      sub_1BCAA3C(Cost_k__BackingField, method);
    }
    return this->fields._limitActionCount_k__BackingField;
  }
  return result;
}


int32_t __fastcall WarBoardPieceData__GetMoveAfterAttack(WarBoardPieceData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  WarBoardReinforcementsMaster_o *Master_object; // x0
  __int64 v7; // x1
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x0
  int32_t type; // [xsp+4h] [xbp-2Ch] BYREF
  WarBoardReinforcementsEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B13F94 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B13F94 = 1;
  }
  entity = 0LL;
  type = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  if ( !Master_object )
    goto LABEL_13;
  if ( !WarBoardReinforcementsMaster__TryGetEntity(Master_object, &entity, this->fields._ReinfoId_k__BackingField, 0LL) )
    goto LABEL_10;
  Master_object = (WarBoardReinforcementsMaster_o *)entity;
  if ( !entity )
LABEL_13:
    sub_1BCAA3C(Master_object, v7);
  if ( WarBoardReinforcementsEntity__TryGetMoveAfterAttackType(entity, &type, 0LL) )
  {
    LODWORD(stagePieceDetailEntity) = type;
    return (int)stagePieceDetailEntity;
  }
LABEL_10:
  stagePieceDetailEntity = this->fields.stagePieceDetailEntity;
  if ( stagePieceDetailEntity )
    LODWORD(stagePieceDetailEntity) = WarBoardStagePieceDetailEntity__GetMoveAfterAttackType(
                                        stagePieceDetailEntity,
                                        0LL);
  return (int)stagePieceDetailEntity;
}


int32_t __fastcall WarBoardPieceData__GetMovedAferDefend(WarBoardPieceData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  WarBoardReinforcementsMaster_o *Master_object; // x0
  __int64 v7; // x1
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x0
  int32_t type; // [xsp+4h] [xbp-2Ch] BYREF
  WarBoardReinforcementsEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B13F95 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B13F95 = 1;
  }
  entity = 0LL;
  type = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  if ( !Master_object )
    goto LABEL_13;
  if ( !WarBoardReinforcementsMaster__TryGetEntity(Master_object, &entity, this->fields._ReinfoId_k__BackingField, 0LL) )
    goto LABEL_10;
  Master_object = (WarBoardReinforcementsMaster_o *)entity;
  if ( !entity )
LABEL_13:
    sub_1BCAA3C(Master_object, v7);
  if ( WarBoardReinforcementsEntity__GetMovedAfterDefendType(entity, &type, 0LL) )
  {
    LODWORD(stagePieceDetailEntity) = type;
    return (int)stagePieceDetailEntity;
  }
LABEL_10:
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  BattleServantData_o *battleServant_k__BackingField; // x0
  struct WarBoardPieceData_PieceStatusCache_o *statusCache; // x20
  bool v10; // zf
  bool HasAvailablePermanentSleepBuff; // w1
  __int16 *v12; // x0
  __int16 *p_HasAvailablePermanentSleepBuff_k__BackingField; // x0
  struct System_Nullable_bool__o v15; // [xsp+8h] [xbp-18h] BYREF
  struct System_Nullable_bool__o HasAvailablePermanentSleepBuff_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4B13F86 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Nullable_bool___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Nullable_bool__get_HasValue__, v4, v5);
    sub_1BCA7E0(&Method_System_Nullable_bool__get_Value__, v6, v7);
    byte_4B13F86 = 1;
  }
  HasAvailablePermanentSleepBuff_k__BackingField = 0;
  battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
  if ( battleServant_k__BackingField )
  {
    statusCache = this->fields.statusCache;
    if ( !statusCache )
      goto LABEL_11;
    if ( !statusCache->fields._IsEnabled_k__BackingField
      || (v10 = (unsigned __int8)*(_WORD *)&statusCache->fields._HasAvailablePermanentSleepBuff_k__BackingField == 0,
          HasAvailablePermanentSleepBuff_k__BackingField = statusCache->fields._HasAvailablePermanentSleepBuff_k__BackingField,
          v10) )
    {
      HasAvailablePermanentSleepBuff = BattleServantData__HasAvailablePermanentSleepBuff(
                                         battleServant_k__BackingField,
                                         0LL);
      v12 = (__int16 *)&v15;
      v15 = 0;
      System_Nullable_bool____ctor(
        (System_Nullable_bool__o)v12,
        HasAvailablePermanentSleepBuff,
        (const MethodInfo_36BAF44 *)Method_System_Nullable_bool___ctor__);
      statusCache->fields._HasAvailablePermanentSleepBuff_k__BackingField = v15;
      statusCache = this->fields.statusCache;
      if ( !statusCache )
LABEL_11:
        sub_1BCAA3C(battleServant_k__BackingField, method);
    }
    p_HasAvailablePermanentSleepBuff_k__BackingField = (__int16 *)&HasAvailablePermanentSleepBuff_k__BackingField;
    HasAvailablePermanentSleepBuff_k__BackingField = statusCache->fields._HasAvailablePermanentSleepBuff_k__BackingField;
    LOBYTE(battleServant_k__BackingField) = System_Nullable_bool___get_Value(
                                              (System_Nullable_bool__o)p_HasAvailablePermanentSleepBuff_k__BackingField,
                                              (const MethodInfo_36BAF60 *)Method_System_Nullable_bool__get_Value__);
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
  __int64 v2; // x2
  WarBoardPieceData_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct WarBoardPieceData_PieceStatusCache_o *statusCache; // x8
  bool v13; // zf
  struct WarBoardPieceData_PieceStatusCache_o *v14; // x20
  bool HasAnyBuffByBuffTypes; // w1
  __int16 *v16; // x0
  __int16 *p_HasCompletelyActionDisabledBuff_k__BackingField; // x0
  struct System_Nullable_bool__o v20; // [xsp+8h] [xbp-18h] BYREF
  struct System_Nullable_bool__o HasCompletelyActionDisabledBuff_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  v3 = this;
  if ( (byte_4B13F87 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Nullable_bool___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Nullable_bool__get_HasValue__, v4, v5);
    sub_1BCA7E0(&Method_System_Nullable_bool__get_Value__, v6, v7);
    sub_1BCA7E0(&WarBoardPieceData_TypeInfo, v8, v9);
    this = (WarBoardPieceData_o *)sub_1BCA7E0(&StringLiteral_15646/*"WAR_BOARD_ACTION_DISABLED_BUFF_TYPES"*/, v10, v11);
    byte_4B13F87 = 1;
  }
  HasCompletelyActionDisabledBuff_k__BackingField = 0;
  if ( v3->fields._battleServant_k__BackingField )
  {
    statusCache = v3->fields.statusCache;
    if ( !statusCache )
      goto LABEL_16;
    if ( !statusCache->fields._IsEnabled_k__BackingField
      || (v13 = (unsigned __int8)*(_WORD *)&statusCache->fields._HasCompletelyActionDisabledBuff_k__BackingField == 0,
          HasCompletelyActionDisabledBuff_k__BackingField = statusCache->fields._HasCompletelyActionDisabledBuff_k__BackingField,
          v13) )
    {
      if ( !WarBoardPieceData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo, method);
      this = (WarBoardPieceData_o *)WarBoardPieceData__GetBuffTypesFromConstantStr(
                                      (System_String_o *)StringLiteral_15646/*"WAR_BOARD_ACTION_DISABLED_BUFF_TYPES"*/,
                                      method);
      if ( !v3->fields._battleServant_k__BackingField
        || (v14 = v3->fields.statusCache,
            HasAnyBuffByBuffTypes = BattleServantData__HasAnyBuffByBuffTypes(
                                      v3->fields._battleServant_k__BackingField,
                                      (BuffList_TYPE_array *)this,
                                      0LL),
            v16 = (__int16 *)&v20,
            v20 = 0,
            System_Nullable_bool____ctor(
              (System_Nullable_bool__o)v16,
              HasAnyBuffByBuffTypes,
              (const MethodInfo_36BAF44 *)Method_System_Nullable_bool___ctor__),
            !v14)
        || (v14->fields._HasCompletelyActionDisabledBuff_k__BackingField = v20,
            (statusCache = v3->fields.statusCache) == 0LL) )
      {
LABEL_16:
        sub_1BCAA3C(this, method);
      }
    }
    p_HasCompletelyActionDisabledBuff_k__BackingField = (__int16 *)&HasCompletelyActionDisabledBuff_k__BackingField;
    HasCompletelyActionDisabledBuff_k__BackingField = statusCache->fields._HasCompletelyActionDisabledBuff_k__BackingField;
    return System_Nullable_bool___get_Value(
             (System_Nullable_bool__o)p_HasCompletelyActionDisabledBuff_k__BackingField,
             (const MethodInfo_36BAF60 *)Method_System_Nullable_bool__get_Value__);
  }
  else
  {
    return 0;
  }
}


bool __fastcall WarBoardPieceData__HasSelfMoveDisabledBuff(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleServant_k__BackingField; // x20
  const MethodInfo *v4; // x1

  battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
  if ( battleServant_k__BackingField && !WarBoardPieceData__HasAvailablePermanentSleepBuff(this, method) )
    return WarBoardPieceData__HasCompletelyActionDisabledBuff(this, v4);
  else
    return battleServant_k__BackingField != 0LL;
}


bool __fastcall WarBoardPieceData__HasVitalityToDoAnyActions(WarBoardPieceData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x20
  WarBoardData_o *Instance; // x0
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int64_t playedStageReinforcementsList; // x1
  WarBoardSquareData_o *Square; // x0
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Collections_Generic_IEnumerable_TSource__o *linkedSquares; // x21
  System_Func_T__TResult__o *v38; // x22
  System_Collections_Generic_IEnumerable_T__o *v39; // x0
  System_Collections_Generic_IEnumerable_T__o *v40; // x0
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  System_Object_array *v44; // x20
  System_Func_object__bool__o *v45; // x21
  WarBoardCost_o *Cost_k__BackingField; // x0
  bool CanAction; // w8
  bool result; // w0

  if ( (byte_4B13F7C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_WarBoardWallData___, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_ExcludeNull_WarBoardWallData___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_int__WarBoardWallData___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_WarBoardWallData___, v9, v10);
    sub_1BCA7E0(&System_Func_WarBoardWallData__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Func_int__WarBoardWallData__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v15, v16);
    sub_1BCA7E0(&Method_WarBoardPieceData___c__DisplayClass223_0__HasVitalityToDoAnyActions_b__0__, v17, v18);
    sub_1BCA7E0(&WarBoardPieceData___c__DisplayClass223_0_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_WarBoardPieceData_CheckWallAttackCond__, v21, v22);
    byte_4B13F7C = 1;
  }
  v23 = sub_1BCAA2C(WarBoardPieceData___c__DisplayClass223_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  if ( !v23 )
    goto LABEL_19;
  playedStageReinforcementsList = (int64_t)Instance[1].fields.playedStageReinforcementsList;
  *(_QWORD *)(v23 + 16) = playedStageReinforcementsList;
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 16), playedStageReinforcementsList, v26, v27, v28, v29, v30, v31);
  Instance = *(WarBoardData_o **)(v23 + 16);
  if ( !Instance )
    goto LABEL_19;
  Square = WarBoardData__GetSquare(Instance, this->fields._nowSquareIndex_k__BackingField, 0LL);
  if ( Square
    && (linkedSquares = (System_Collections_Generic_IEnumerable_TSource__o *)Square->fields.linkedSquares) != 0LL )
  {
    v38 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_int__WarBoardWallData__TypeInfo, v34, v35, v36);
    System_Func_int__object____ctor(
      v38,
      (Il2CppObject *)v23,
      Method_WarBoardPieceData___c__DisplayClass223_0__HasVitalityToDoAnyActions_b__0__,
      0LL);
    v39 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                           linkedSquares,
                                                           (System_Func_TSource__TResult__o *)v38,
                                                           (const MethodInfo_2F3F30C *)Method_System_Linq_Enumerable_Select_int__WarBoardWallData___);
    v40 = BasicHelper__ExcludeNull_object_(
            v39,
            (const MethodInfo_2EFE5E8 *)Method_BasicHelper_ExcludeNull_WarBoardWallData___);
    v44 = System_Linq_Enumerable__ToArray_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v40,
            (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_WarBoardWallData___);
    if ( v44 )
    {
      v45 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardWallData__bool__TypeInfo, v41, v42, v43);
      System_Func_object__bool____ctor(v45, (Il2CppObject *)this, Method_WarBoardPieceData_CheckWallAttackCond__, 0LL);
      LOBYTE(v44) = BasicHelper__Any_object__49274176(
                      v44,
                      (System_Func_T__bool__o *)v45,
                      (const MethodInfo_2EFDD40 *)Method_BasicHelper_Any_WarBoardWallData___);
    }
  }
  else
  {
    LOBYTE(v44) = 0;
  }
  Cost_k__BackingField = this->fields._Cost_k__BackingField;
  if ( Cost_k__BackingField && WarBoardCost__get_HasCost(Cost_k__BackingField, 0LL) )
  {
    Instance = (WarBoardData_o *)this->fields._Cost_k__BackingField;
    if ( Instance )
    {
      CanAction = WarBoardCost__CanAction((WarBoardCost_o *)Instance, 0, (unsigned __int8)v44 & 1, 0LL);
      result = 0;
      if ( !CanAction )
        return result;
      return this->fields._limitActionCount_k__BackingField < 1 || this->fields._currentActionCount_k__BackingField > 0;
    }
LABEL_19:
    sub_1BCAA3C(Instance, v25);
  }
  return this->fields._limitActionCount_k__BackingField < 1 || this->fields._currentActionCount_k__BackingField > 0;
}


void __fastcall WarBoardPieceData__HideActionTarget(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_1BCAA3C(0LL, method);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceData__Move(WarBoardPieceData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_1BCAA3C(0LL, *(_QWORD *)&squareIndex);
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
      sub_1BCAA3C(pieceComponent, method);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  unsigned int breakPoint_k__BackingField; // w24
  WarBoardManager_TaskList_o *v12; // x20
  const MethodInfo *v13; // x1
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x23
  struct WarBoardPieceBaseComponent_o *v15; // x0
  __int64 v16; // x1
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct WarBoardManager_TaskList_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  const MethodInfo *v27; // x2
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  struct WarBoardManager_TaskList_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  Il2CppClass **v37; // x0
  struct BattleServantData_o *battleServant_k__BackingField; // x20
  unsigned int MaxHp; // w0
  unsigned int v40; // w20
  int32_t type_k__BackingField; // w8
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  struct WarBoardUserServantData_o *serverServantData; // x8
  __int64 v44; // [xsp+8h] [xbp-58h] BYREF
  System_Nullable_float__o v45; // 0:x0.8
  System_Nullable_float__o v46; // 0:x0.8

  if ( (byte_4B13F97 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__, taskListBreak, taskListDead);
    sub_1BCA7E0(&Method_System_Nullable_float___ctor__, v7, v8);
    sub_1BCA7E0(&WarBoardManager_TaskList_TypeInfo, v9, v10);
    byte_4B13F97 = 1;
  }
  breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
  this->fields._breakPoint_k__BackingField = breakPoint_k__BackingField - 1;
  v12 = (WarBoardManager_TaskList_o *)sub_1BCAA2C(
                                        WarBoardManager_TaskList_TypeInfo,
                                        taskListBreak,
                                        taskListDead,
                                        method);
  WarBoardManager_TaskList___ctor(v12, v13);
  pieceComponent = this->fields.pieceComponent;
  if ( ((breakPoint_k__BackingField - 1) & 0x80000000) == 0 )
  {
    v45 = (System_Nullable_float__o)&v44;
    v44 = 0LL;
    System_Nullable_float____ctor(v45, 1.0, (const MethodInfo_36C0CC4 *)Method_System_Nullable_float___ctor__);
    if ( pieceComponent )
    {
      v15 = (struct WarBoardPieceBaseComponent_o *)((__int64 (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, __int64, WarBoardManager_TaskList_o *, __int64, _QWORD, __int64, Il2CppMethodPointer))pieceComponent->klass->vtable._31_OnBreak.method)(
                                                     pieceComponent,
                                                     breakPoint_k__BackingField,
                                                     v44,
                                                     v12,
                                                     0xFFFFFFFFLL,
                                                     0LL,
                                                     1LL,
                                                     pieceComponent->klass->vtable._32_OnDead.methodPtr);
      if ( taskListBreak )
      {
        items = taskListBreak->fields._items;
        v24 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
        ++taskListBreak->fields._version;
        if ( items )
        {
          size = taskListBreak->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)taskListBreak,
              (Il2CppObject *)v12,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v26 = &items->obj.klass + size;
            taskListBreak->fields._size = size + 1;
            v26[4] = (Il2CppClass *)v12;
            sub_1BCA784((PartyOrganizationUtility_o *)(v26 + 4), (int64_t)v12, v17, v18, v19, v20, v21, v22);
          }
          battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
          if ( battleServant_k__BackingField )
          {
            MaxHp = BattleServantData__getMaxHp(this->fields._battleServant_k__BackingField, 0LL);
            ((void (__fastcall *)(struct BattleServantData_o *, _QWORD, Il2CppMethodPointer))battleServant_k__BackingField->klass->vtable._10_set_hp.method)(
              battleServant_k__BackingField,
              MaxHp,
              battleServant_k__BackingField->klass->vtable._11_get_reducedhp.methodPtr);
          }
          v40 = 1;
          goto LABEL_25;
        }
      }
    }
LABEL_28:
    sub_1BCAA3C(v15, v16);
  }
  v46 = (System_Nullable_float__o)&v44;
  v44 = 0LL;
  System_Nullable_float____ctor(v46, 1.0, (const MethodInfo_36C0CC4 *)Method_System_Nullable_float___ctor__);
  if ( !pieceComponent )
    goto LABEL_28;
  v15 = (struct WarBoardPieceBaseComponent_o *)((__int64 (__fastcall *)(struct WarBoardPieceBaseComponent_o *, __int64, WarBoardManager_TaskList_o *, __int64, Il2CppMethodPointer))pieceComponent->klass->vtable._32_OnDead.method)(
                                                 pieceComponent,
                                                 v44,
                                                 v12,
                                                 1LL,
                                                 pieceComponent->klass->vtable._33_OnRevive.methodPtr);
  if ( !taskListDead )
    goto LABEL_28;
  v34 = taskListDead->fields._items;
  v35 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
  ++taskListDead->fields._version;
  if ( !v34 )
    goto LABEL_28;
  v36 = taskListDead->fields._size;
  if ( (unsigned int)v36 >= v34->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)taskListDead,
      (Il2CppObject *)v12,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
  }
  else
  {
    v37 = &v34->obj.klass + v36;
    taskListDead->fields._size = v36 + 1;
    v37[4] = (Il2CppClass *)v12;
    sub_1BCA784((PartyOrganizationUtility_o *)(v37 + 4), (int64_t)v12, v28, v29, v30, v31, v32, v33);
  }
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
  v40 = 0;
LABEL_25:
  WarBoardPieceData__SetBreakPoint(this, this->fields._breakPoint_k__BackingField, v27);
  v15 = this->fields.pieceComponent;
  if ( !v15 )
    goto LABEL_28;
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, Il2CppMethodPointer))v15->klass->vtable._15_ChangeStatus.method)(
    v15,
    v40,
    v15->klass->vtable._16_IsModifyStatus.methodPtr);
  v15 = this->fields.pieceComponent;
  if ( !v15 )
    goto LABEL_28;
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))v15->klass->vtable._10_UpdateDisplayActionCount.method)(
    v15,
    v15->klass->vtable._11_UpdateUiBrightnessByPieceStatus.methodPtr);
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
  __int64 v10; // x1
  _BOOL4 v11; // w21
  struct WarBoardPieceBaseComponent_o *v12; // x22
  int32_t type_k__BackingField; // w8
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  struct WarBoardUserServantData_o *serverServantData; // x8
  __int64 v16; // [xsp+8h] [xbp-48h] BYREF
  __int64 v17; // [xsp+18h] [xbp-38h] BYREF
  System_Nullable_float__o v18; // 0:x0.8
  System_Nullable_float__o v19; // 0:x0.8

  if ( (byte_4B13F92 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Nullable_float___ctor__, cameraMove, taskList);
    byte_4B13F92 = 1;
  }
  this->fields._isDead_k__BackingField = 1;
  breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
  pieceComponent = this->fields.pieceComponent;
  v18 = (System_Nullable_float__o)&v17;
  v17 = 0LL;
  System_Nullable_float____ctor(v18, 1.0, (const MethodInfo_36C0CC4 *)Method_System_Nullable_float___ctor__);
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
        System_Nullable_float____ctor(v19, 1.0, (const MethodInfo_36C0CC4 *)Method_System_Nullable_float___ctor__),
        !v12) )
  {
    sub_1BCAA3C(v9, v10);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Component_o *pieceComponent; // x0
  int32_t limitActionCount_k__BackingField; // w9
  WarBoardCost_o *Cost_k__BackingField; // x0
  __int64 v11; // x2
  __int64 v12; // x3
  WarBoardData_o *monitor; // x20
  int32_t PutSquareIndex_k__BackingField; // w21
  int32_t nowSquareIndex_k__BackingField; // w22
  System_Func_object__bool__o *v16; // x23
  int32_t v17; // w0
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  struct WarBoardUserServantData_o *serverServantData; // x8
  const MethodInfo *v20; // x2

  if ( (byte_4B13F96 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Func_WarBoardPieceData__bool__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_WarBoardPieceData__ProcContinue_b__337_0__, v6, v7);
    byte_4B13F96 = 1;
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
  pieceComponent = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceComponent )
    goto LABEL_18;
  monitor = (WarBoardData_o *)pieceComponent[18].monitor;
  PutSquareIndex_k__BackingField = this->fields._PutSquareIndex_k__BackingField;
  nowSquareIndex_k__BackingField = this->fields._nowSquareIndex_k__BackingField;
  v16 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardPieceData__bool__TypeInfo, method, v11, v12);
  System_Func_object__bool____ctor(v16, (Il2CppObject *)this, Method_WarBoardPieceData__ProcContinue_b__337_0__, 0LL);
  if ( !monitor )
    goto LABEL_18;
  v17 = WarBoardData__SearchNearestEmptySquare(
          monitor,
          PutSquareIndex_k__BackingField,
          nowSquareIndex_k__BackingField,
          (System_Func_WarBoardPieceData__bool__o *)v16,
          0LL);
  serverMasterData_k__BackingField = this->fields._serverMasterData_k__BackingField;
  this->fields._nowSquareIndex_k__BackingField = v17;
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
      v20);
  }
  pieceComponent = (UnityEngine_Component_o *)this->fields.pieceComponent;
  if ( !pieceComponent )
LABEL_18:
    sub_1BCAA3C(pieceComponent, method);
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
    sub_1BCAA3C(battleServant_k__BackingField, method);
  (*(void (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)battleServant_k__BackingField + 840LL))(
    battleServant_k__BackingField,
    0LL,
    *(_QWORD *)(*(_QWORD *)battleServant_k__BackingField + 848LL));
}


void __fastcall WarBoardPieceData__Select(WarBoardPieceData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardData_o *pieceComponent; // x0
  WarBoardSquareData_o *Square; // x0

  if ( (byte_4B13F89 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    byte_4B13F89 = 1;
  }
  pieceComponent = (WarBoardData_o *)this->fields.pieceComponent;
  if ( !pieceComponent )
    goto LABEL_10;
  (*(void (__fastcall **)(WarBoardData_o *, Il2CppMethodPointer))&pieceComponent->klass[1]._2.naturalAligment)(
    pieceComponent,
    pieceComponent->klass[1].vtable._0_Equals.methodPtr);
  pieceComponent = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceComponent )
    goto LABEL_10;
  pieceComponent = (WarBoardData_o *)pieceComponent[1].fields.playedStageReinforcementsList;
  if ( !pieceComponent )
    goto LABEL_10;
  Square = WarBoardData__GetSquare(pieceComponent, this->fields._nowSquareIndex_k__BackingField, 0LL);
  if ( Square )
  {
    pieceComponent = (WarBoardData_o *)Square->fields.squareComponent;
    if ( pieceComponent )
    {
      WarBoardSquareComponent__OnSelect((WarBoardSquareComponent_o *)pieceComponent, 0LL);
      return;
    }
LABEL_10:
    sub_1BCAA3C(pieceComponent, method);
  }
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
      sub_1BCAA3C(Cost_k__BackingField, *(_QWORD *)&ap);
    }
  }
  this->fields._currentActionCount_k__BackingField = ap;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceData__SetBreakPoint(WarBoardPieceData_o *this, int32_t bp, const MethodInfo *method)
{
  struct WarBoardPieceData_SaveData_o *localSaveData; // x8
  struct WarBoardUserServantData_o *serverServantData; // x8
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8

  localSaveData = this->fields.localSaveData;
  this->fields._breakPoint_k__BackingField = bp;
  if ( !localSaveData )
    sub_1BCAA3C(this, *(_QWORD *)&bp);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields.pieceComponent = component;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.pieceComponent,
    (int64_t)component,
    (int64_t)method,
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
  __int64 v3; // x3
  WarBoardPieceData_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  System_Collections_Generic_IEnumerable_TSource__o *masterInfo; // x20
  System_Func_object__bool__o *v27; // x21
  Il2CppObject *v28; // x0
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  Il2CppObject *Master_object; // x20
  const MethodInfo *v37; // x1
  WarBoardActionPointClassEntity_o *MasterEntityFromStageId; // x0
  WarBoardCost_o *v39; // x0
  struct WarBoardCost_o **p_Cost_k__BackingField; // x19
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  struct WarBoardCost_o *v47; // x8
  int32_t CurrentActionPoint_k__BackingField; // w1
  System_Collections_Generic_IEnumerable_TSource__o *svtInfo; // x20
  System_Func_object__bool__o *v50; // x21
  Il2CppObject *v51; // x0
  struct WarBoardUserServantData_o **p_serverServantData; // x20
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  struct WarBoardUserServantData_o *serverServantData; // x8
  __int128 v60; // q1
  WarBoardPieceData_o *v61; // x21
  BattleServantData_o *BattleServant; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  const MethodInfo *v69; // x2
  struct WarBoardUserServantData_o *v70; // x8
  Il2CppObject *v71; // x20
  const MethodInfo *v72; // x1
  WarBoardActionPointEntity_o *v73; // x21
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x20
  WarBoardCost_o *v75; // x0
  struct WarBoardCost_o **v76; // x19
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  struct WarBoardCost_o *v83; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v84; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v85; // [xsp+20h] [xbp-50h]
  WarBoardReinforcementsEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF

  v5 = this;
  if ( (byte_4B13F8C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___, warBoardDataEntity, method);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___, v10, v11);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___, v12, v13);
    sub_1BCA7E0(&System_Func_WarBoardUserMasterData__bool__TypeInfo, v14, v15);
    sub_1BCA7E0(&System_Func_WarBoardUserServantData__bool__TypeInfo, v16, v17);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18, v19);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v20, v21);
    sub_1BCA7E0(&Method_WarBoardPieceData__SetInitinalData_b__315_0__, v22, v23);
    this = (WarBoardPieceData_o *)sub_1BCA7E0(&Method_WarBoardPieceData__SetInitinalData_b__315_1__, v24, v25);
    byte_4B13F8C = 1;
  }
  entity = 0LL;
  if ( !v5->fields._isDead_k__BackingField )
  {
    if ( warBoardDataEntity )
    {
      if ( v5->fields._type_k__BackingField == 1 )
      {
        masterInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.masterInfo;
        v27 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                               System_Func_WarBoardUserMasterData__bool__TypeInfo,
                                               warBoardDataEntity,
                                               method,
                                               v3);
        System_Func_object__bool____ctor(
          v27,
          (Il2CppObject *)v5,
          Method_WarBoardPieceData__SetInitinalData_b__315_0__,
          0LL);
        v28 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
                masterInfo,
                (System_Func_TSource__bool__o *)v27,
                (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
        v5->fields._serverMasterData_k__BackingField = (struct WarBoardUserMasterData_o *)v28;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v5->fields._serverMasterData_k__BackingField,
          (int64_t)v28,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
        serverMasterData_k__BackingField = v5->fields._serverMasterData_k__BackingField;
        if ( serverMasterData_k__BackingField )
        {
          *(int32x2_t *)&v5->fields._limitActionCount_k__BackingField = vrev64_s32(*(int32x2_t *)&serverMasterData_k__BackingField->fields.currentLimitActionPoint);
          v5->fields._attackCount_k__BackingField = serverMasterData_k__BackingField->fields.attackCount;
          v5->fields._nowSquareIndex_k__BackingField = serverMasterData_k__BackingField->fields.squareIndex;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, warBoardDataEntity);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
          this = (WarBoardPieceData_o *)WarBoardPieceData__get_ActionPointEntity(v5, v37);
          if ( Master_object )
          {
            MasterEntityFromStageId = WarBoardActionPointClassMaster__GetMasterEntityFromStageId(
                                        (WarBoardActionPointClassMaster_o *)Master_object,
                                        (WarBoardActionPointEntity_o *)this,
                                        0LL);
            v39 = WarBoardCost__Create(MasterEntityFromStageId, v5->fields.stagePieceDetailEntity, 0LL, 0LL);
            v5->fields._Cost_k__BackingField = v39;
            p_Cost_k__BackingField = &v5->fields._Cost_k__BackingField;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)p_Cost_k__BackingField,
              (int64_t)v39,
              v41,
              v42,
              v43,
              v44,
              v45,
              v46);
            v47 = p_Cost_k__BackingField[6];
            if ( v47 )
            {
              this = (WarBoardPieceData_o *)*p_Cost_k__BackingField;
              if ( *p_Cost_k__BackingField )
              {
                CurrentActionPoint_k__BackingField = v47[1].fields._CurrentActionPoint_k__BackingField;
LABEL_27:
                WarBoardCost__UpdateCurrentPointByServerData(
                  (WarBoardCost_o *)this,
                  CurrentActionPoint_k__BackingField,
                  0LL);
                return;
              }
            }
          }
        }
      }
      else
      {
        svtInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.svtInfo;
        v50 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                               System_Func_WarBoardUserServantData__bool__TypeInfo,
                                               warBoardDataEntity,
                                               method,
                                               v3);
        System_Func_object__bool____ctor(
          v50,
          (Il2CppObject *)v5,
          Method_WarBoardPieceData__SetInitinalData_b__315_1__,
          0LL);
        v51 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
                svtInfo,
                (System_Func_TSource__bool__o *)v50,
                (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
        v5->fields.serverServantData = (struct WarBoardUserServantData_o *)v51;
        p_serverServantData = &v5->fields.serverServantData;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v5->fields.serverServantData,
          (int64_t)v51,
          v53,
          v54,
          v55,
          v56,
          v57,
          v58);
        this = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        serverServantData = v5->fields.serverServantData;
        if ( serverServantData )
        {
          v60 = *(_OWORD *)&serverServantData->fields.id.fields.fakeValue;
          v61 = this;
          *(_OWORD *)&v85.fields.currentCryptoKey = *(_OWORD *)&serverServantData->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v85.fields.fakeValue = v60;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, warBoardDataEntity);
          v84 = v85;
          this = (WarBoardPieceData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v84, 0LL);
          if ( v61 )
          {
            BattleServant = WarBoardManager__GetBattleServant((WarBoardManager_o *)v61, (int64_t)this, 0LL);
            v5->fields._battleServant_k__BackingField = BattleServant;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v5->fields._battleServant_k__BackingField,
              (int64_t)BattleServant,
              v63,
              v64,
              v65,
              v66,
              v67,
              v68);
            this = (WarBoardPieceData_o *)v5->fields.serverServantData;
            if ( this )
            {
              WarBoardUserServantData__FromBattleServantData(
                (WarBoardUserServantData_o *)this,
                v5->fields._battleServant_k__BackingField,
                v69);
              v70 = *p_serverServantData;
              if ( *p_serverServantData )
              {
                *(int32x2_t *)&v5->fields._limitActionCount_k__BackingField = vrev64_s32(*(int32x2_t *)&v70->fields.currentActionPoint);
                v5->fields._attackCount_k__BackingField = v70->fields.attackCount;
                v5->fields._nowSquareIndex_k__BackingField = v70->fields.squareIndex;
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, warBoardDataEntity);
                v71 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
                this = (WarBoardPieceData_o *)WarBoardPieceData__get_ActionPointEntity(v5, v72);
                if ( v5->fields._battleServant_k__BackingField )
                {
                  v73 = (WarBoardActionPointEntity_o *)this;
                  this = (WarBoardPieceData_o *)BattleServantData__getClassId(
                                                  v5->fields._battleServant_k__BackingField,
                                                  0LL);
                  if ( v71 )
                  {
                    EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                                    (WarBoardActionPointClassMaster_o *)v71,
                                                    v73,
                                                    (int32_t)this,
                                                    0LL);
                    this = (WarBoardPieceData_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
                    if ( this )
                    {
                      WarBoardReinforcementsMaster__TryGetEntity(
                        (WarBoardReinforcementsMaster_o *)this,
                        &entity,
                        v5->fields._ReinfoId_k__BackingField,
                        0LL);
                      v75 = WarBoardCost__Create(
                              EntityFromActionPointEntity,
                              v5->fields.stagePieceDetailEntity,
                              entity,
                              0LL);
                      v5->fields._Cost_k__BackingField = v75;
                      v76 = &v5->fields._Cost_k__BackingField;
                      sub_1BCA784((PartyOrganizationUtility_o *)v76, (int64_t)v75, v77, v78, v79, v80, v81, v82);
                      v83 = v76[4];
                      if ( v83 )
                      {
                        this = (WarBoardPieceData_o *)*v76;
                        if ( *v76 )
                        {
                          CurrentActionPoint_k__BackingField = v83[11].fields.overwirteAttack;
                          goto LABEL_27;
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
    sub_1BCAA3C(this, warBoardDataEntity);
  }
}


void __fastcall WarBoardPieceData__SetMasterEquip(
        WarBoardPieceData_o *this,
        int64_t userEquipId,
        const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x0
  __int64 v17; // x0
  Il2CppObject *MasterData_object; // x0
  void *monitor; // x20
  Il2CppClass *klass; // x21
  int32_t v21; // w0
  __int64 v22; // x1
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Object_o *v25; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16

  if ( (byte_4B13F83 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserEquipMaster___, userEquipId, method);
    sub_1BCA7E0(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v6, v7);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v8, v9);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v12, v13);
    sub_1BCA7E0(&WarBoardMasterPieceComponent_TypeInfo, v14, v15);
    byte_4B13F83 = 1;
  }
  this->fields._CurrentUserEquipId_k__BackingField = userEquipId;
  v16 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
    v16 = sub_1C1C6BC(v3);
  v17 = *(_QWORD *)(*(_QWORD *)(v16 + 192) + 16LL);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C1C6BC(v3);
  MasterData_object = **(Il2CppObject ***)(v17 + 184);
  if ( !MasterData_object )
    goto LABEL_24;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  if ( !MasterData_object )
    goto LABEL_24;
  MasterData_object = DataMasterBase_object__object__long___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                        this->fields._CurrentUserEquipId_k__BackingField,
                        (const MethodInfo_31B2FEC *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  if ( !MasterData_object )
    goto LABEL_24;
  klass = MasterData_object[2].klass;
  monitor = MasterData_object[2].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userEquipId);
  *(_QWORD *)&v26.fields.currentCryptoKey = klass;
  *(_QWORD *)&v26.fields.fakeValue = monitor;
  v21 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v26, 0LL);
  pieceComponent = this->fields.pieceComponent;
  this->fields._iconId_k__BackingField = v21;
  if ( pieceComponent
    && (methodPtr_low = LOBYTE(WarBoardMasterPieceComponent_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(pieceComponent->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (WarBoardMasterPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[methodPtr_low - 1] == WarBoardMasterPieceComponent_TypeInfo )
      v25 = (UnityEngine_Object_o *)pieceComponent;
    else
      v25 = 0LL;
  }
  else
  {
    v25 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
  MasterData_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(v25, 0LL, 0LL);
  if ( ((unsigned __int8)MasterData_object & 1) != 0 )
  {
    if ( v25 )
    {
      WarBoardMasterPieceComponent__SetMasterIcon((WarBoardMasterPieceComponent_o *)v25, 0LL);
      return;
    }
LABEL_24:
    sub_1BCAA3C(MasterData_object, userEquipId);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceData__SetOverwriteActionType(
        WarBoardPieceData_o *this,
        int32_t actionType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  intptr_t v11; // w21
  System_Type_o *TypeFromHandle; // x21
  __int64 v13; // x1
  Il2CppObject *v14; // x22
  int32_t v15; // [xsp+Ch] [xbp-34h] BYREF
  System_RuntimeTypeHandle_o v16; // 0:w0.4

  if ( (byte_4B13F99 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardStageLayoutEntity_ActionType_var, *(_QWORD *)&actionType, method);
    sub_1BCA7E0(&System_Enum_TypeInfo, v5, v6);
    sub_1BCA7E0(&int_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_Type_TypeInfo, v9, v10);
    byte_4B13F99 = 1;
  }
  v11 = (int)WarBoardStageLayoutEntity_ActionType_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo, *(_QWORD *)&actionType);
  v16.fields.value = v11;
  TypeFromHandle = System_Type__GetTypeFromHandle(v16, 0LL);
  v15 = actionType;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v15);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo, v13);
  if ( System_Enum__IsDefined(TypeFromHandle, v14, 0LL) )
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
  __int64 v6; // x2
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x9
  __int64 methodPtr_low; // x12
  UnityEngine_Object_o *v9; // x20
  _BOOL8 v10; // x0
  __int64 v11; // x1

  if ( (byte_4B13F8F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, *(_QWORD *)&level, method);
    sub_1BCA7E0(&WarBoardServantPieceComponent_TypeInfo, v5, v6);
    byte_4B13F8F = 1;
  }
  pieceComponent = this->fields.pieceComponent;
  if ( pieceComponent
    && (methodPtr_low = LOBYTE(WarBoardServantPieceComponent_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(pieceComponent->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (WarBoardServantPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[methodPtr_low - 1] == WarBoardServantPieceComponent_TypeInfo )
      v9 = (UnityEngine_Object_o *)this->fields.pieceComponent;
    else
      v9 = 0LL;
  }
  else
  {
    v9 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&level);
  v10 = UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
  if ( !v10 )
  {
    if ( !v9 )
      sub_1BCAA3C(v10, v11);
    WarBoardServantPieceComponent__SetPartyBuffLevel((WarBoardServantPieceComponent_o *)v9, level, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceData__SetPieceEnable(WarBoardPieceData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_1BCAA3C(0LL, enable);
  WarBoardPieceBaseComponent__SetColliderEnable(pieceComponent, enable, 0LL);
}


void __fastcall WarBoardPieceData__SetPrevAiRoute(
        WarBoardPieceData_o *this,
        WarBoardAIRoute_RouteData_o *prev,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WarBoardPieceData_o *v5; // x19
  Il2CppClass *v6; // d8
  int64_t flagNow; // x21
  Il2CppObject *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  v5 = this;
  if ( (byte_4B13F91 & 1) == 0 )
  {
    this = (WarBoardPieceData_o *)sub_1BCA7E0(&WarBoardPieceData_RouteSaveData_TypeInfo, prev, method);
    byte_4B13F91 = 1;
  }
  if ( !prev )
    sub_1BCAA3C(this, prev);
  v6 = *(Il2CppClass **)&prev->fields.baseIndex;
  flagNow = prev->fields.flagNow;
  v8 = (Il2CppObject *)sub_1BCAA2C(WarBoardPieceData_RouteSaveData_TypeInfo, prev, method, v3);
  System_Object___ctor(v8, 0LL);
  v8[1].klass = v6;
  v8[1].monitor = (void *)flagNow;
  v5->fields._PrevAiRoute_k__BackingField = (struct WarBoardPieceData_RouteSaveData_o *)v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v5->fields._PrevAiRoute_k__BackingField,
    (int64_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceData__SetServant(
        WarBoardPieceData_o *this,
        int64_t userServantId,
        int32_t overwriteLimitCount,
        const MethodInfo *method)
{
  int32_t IconLimitCount; // w21
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  Il2CppObject *Instance; // x0
  __int64 v24; // x1
  void *monitor; // x22
  Il2CppClass *klass; // x23
  int32_t *p_iconClassId_k__BackingField; // x21
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x9
  __int64 methodPtr_low; // x12
  UnityEngine_Object_o *v30; // x20
  Il2CppObject *v31; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  IconLimitCount = overwriteLimitCount;
  if ( (byte_4B13F84 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, userServantId, *(_QWORD *)&overwriteLimitCount);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantClassMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v11, v12);
    sub_1BCA7E0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v19, v20);
    sub_1BCA7E0(&WarBoardServantPieceComponent_TypeInfo, v21, v22);
    byte_4B13F84 = 1;
  }
  v31 = 0LL;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_35;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userServantId,
                               (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    this->fields._UserServantId_k__BackingField = userServantId;
    if ( !entity )
      goto LABEL_35;
    klass = entity[5].klass;
    monitor = entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24);
    *(_QWORD *)&v33.fields.currentCryptoKey = klass;
    *(_QWORD *)&v33.fields.fakeValue = monitor;
    this->fields._iconId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v33, 0LL);
    if ( (IconLimitCount & 0x80000000) != 0 )
    {
      Instance = entity;
      if ( !entity )
        goto LABEL_35;
      IconLimitCount = UserServantEntity__getIconLimitCount((UserServantEntity_o *)entity, 0, 0LL);
    }
    this->fields._iconLimitCount_k__BackingField = IconLimitCount;
    Instance = entity;
    if ( !entity )
      goto LABEL_35;
    this->fields._iconClassId_k__BackingField = UserServantEntity__getSvtClassId((UserServantEntity_o *)entity, 0, 0LL);
    p_iconClassId_k__BackingField = &this->fields._iconClassId_k__BackingField;
    Instance = entity;
    if ( !entity )
      goto LABEL_35;
    Instance = (Il2CppObject *)UserServantEntity__getFrameType((UserServantEntity_o *)entity, 0LL);
    this->fields._iconFrameType_k__BackingField = (int)Instance;
    if ( !entity )
      goto LABEL_35;
    this->fields._iconLevel_k__BackingField = (int32_t)entity[16].klass;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v24);
    Instance = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantClassMaster___);
    if ( !Instance )
LABEL_35:
      sub_1BCAA3C(Instance, v24);
    Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                 &v31,
                                 *p_iconClassId_k__BackingField,
                                 (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v31 )
        goto LABEL_35;
      p_iconClassId_k__BackingField = (int32_t *)&v31[2].monitor + 1;
    }
    this->fields._IconClassImageId_k__BackingField = *p_iconClassId_k__BackingField;
  }
  else
  {
    this->fields._UserServantId_k__BackingField = 0LL;
    this->fields._iconId_k__BackingField = 0;
  }
  pieceComponent = this->fields.pieceComponent;
  if ( pieceComponent
    && (methodPtr_low = LOBYTE(WarBoardServantPieceComponent_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(pieceComponent->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (WarBoardServantPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[methodPtr_low - 1] == WarBoardServantPieceComponent_TypeInfo )
      v30 = (UnityEngine_Object_o *)this->fields.pieceComponent;
    else
      v30 = 0LL;
  }
  else
  {
    v30 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
  Instance = (Il2CppObject *)UnityEngine_Object__op_Inequality(v30, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( v30 )
    {
      WarBoardServantPieceComponent__SetServant((WarBoardServantPieceComponent_o *)v30, userServantId, 0LL);
      return;
    }
    goto LABEL_35;
  }
}


void __fastcall WarBoardPieceData__SetServantEquip(
        WarBoardPieceData_o *this,
        int64_t userServantEquipId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  void *monitor; // x21
  Il2CppClass *klass; // x22
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x9
  __int64 methodPtr_low; // x12
  UnityEngine_Object_o *v21; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_4B13F85 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserServantMaster___, userServantEquipId, method);
    sub_1BCA7E0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11, v12);
    sub_1BCA7E0(&WarBoardServantPieceComponent_TypeInfo, v13, v14);
    byte_4B13F85 = 1;
  }
  entity = 0LL;
  this->fields._UserServantEquipId_k__BackingField = userServantEquipId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_24;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               this->fields._UserServantEquipId_k__BackingField,
                               (const MethodInfo_31B3040 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_24;
    klass = entity[5].klass;
    monitor = entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v16);
    *(_QWORD *)&v23.fields.currentCryptoKey = klass;
    *(_QWORD *)&v23.fields.fakeValue = monitor;
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v23, 0LL);
    this->fields._iconEquipId_k__BackingField = (int)Instance;
    if ( !entity )
      goto LABEL_24;
    this->fields._equipLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                                      (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)entity[6],
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
    && (methodPtr_low = LOBYTE(WarBoardServantPieceComponent_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(pieceComponent->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (WarBoardServantPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[methodPtr_low - 1] == WarBoardServantPieceComponent_TypeInfo )
      v21 = (UnityEngine_Object_o *)this->fields.pieceComponent;
    else
      v21 = 0LL;
  }
  else
  {
    v21 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  Instance = (Il2CppObject *)UnityEngine_Object__op_Inequality(v21, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( v21 )
    {
      WarBoardServantPieceComponent__SetServantEquip((WarBoardServantPieceComponent_o *)v21, userServantEquipId, 0LL);
      return;
    }
LABEL_24:
    sub_1BCAA3C(Instance, v16);
  }
}


void __fastcall WarBoardPieceData__SetServantIconData(WarBoardPieceData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardPieceData_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  __int64 v11; // x20
  __int64 v12; // x21
  int32_t v13; // w0
  struct WarBoardUserServantData_o *serverServantData; // x8
  BattleServantData_o *v15; // x8
  int32_t *p_iconClassId_k__BackingField; // x20
  struct BattleServantData_o *v17; // x8
  int32_t v18; // w9
  struct BattleServantData_o *v19; // x8
  struct BattleUserServantData_array *equipList; // x23
  __int64 v21; // x9
  BattleUserServantData_o *v22; // x9
  __int64 v23; // x20
  __int64 v24; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v25; // x8
  BattleDeckServantData_o *deckSvt; // x20
  int32_t DispLimitCnt; // w0
  struct WarBoardUserServantData_o *v28; // x8
  bool v29; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v31; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  v3 = this;
  if ( (byte_4B13F82 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantClassMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v6, v7);
    this = (WarBoardPieceData_o *)sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9);
    byte_4B13F82 = 1;
  }
  entity = 0LL;
  battleServant_k__BackingField = v3->fields._battleServant_k__BackingField;
  if ( !battleServant_k__BackingField )
    goto LABEL_40;
  v12 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v11 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
  *(_QWORD *)&v31.fields.currentCryptoKey = v12;
  *(_QWORD *)&v31.fields.fakeValue = v11;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v31, 0LL);
  serverServantData = v3->fields.serverServantData;
  v3->fields._iconId_k__BackingField = v13;
  if ( serverServantData && NpcSvtType__IsEnemy(serverServantData->fields.npcSvtType, 0LL) )
  {
    this = (WarBoardPieceData_o *)v3->fields._battleServant_k__BackingField;
    if ( !this )
      goto LABEL_40;
    this = (WarBoardPieceData_o *)BattleServantData__getLimitCount((BattleServantData_o *)this, 0LL);
  }
  else
  {
    this = (WarBoardPieceData_o *)v3->fields._battleServant_k__BackingField;
    if ( !this )
      goto LABEL_40;
    this = (WarBoardPieceData_o *)BattleServantData__GetIconImageLimitCount((BattleServantData_o *)this, 0LL);
  }
  v15 = v3->fields._battleServant_k__BackingField;
  v3->fields._iconLimitCount_k__BackingField = (int)this;
  if ( !v15 )
    goto LABEL_40;
  this = (WarBoardPieceData_o *)BattleServantData__getClassId(v15, 0LL);
  v3->fields._iconClassId_k__BackingField = (int)this;
  p_iconClassId_k__BackingField = &v3->fields._iconClassId_k__BackingField;
  v17 = v3->fields._battleServant_k__BackingField;
  if ( !v17 )
    goto LABEL_40;
  v3->fields._iconFrameType_k__BackingField = v17->fields._frameType_k__BackingField;
  v3->fields._iconLevel_k__BackingField = v17->fields.level;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  this = (WarBoardPieceData_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( !this )
    goto LABEL_40;
  this = (WarBoardPieceData_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  &entity,
                                  *p_iconClassId_k__BackingField,
                                  (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_40;
    p_iconClassId_k__BackingField = (int32_t *)&entity[2].monitor + 1;
  }
  v18 = *p_iconClassId_k__BackingField;
  v19 = v3->fields._battleServant_k__BackingField;
  v3->fields._iconEquipId_k__BackingField = 0;
  v3->fields._equipLimitCount_k__BackingField = 0;
  v3->fields._IconClassImageId_k__BackingField = v18;
  if ( !v19 )
    goto LABEL_40;
  equipList = v19->fields.equipList;
  if ( equipList )
  {
    v21 = *(_QWORD *)&equipList->max_length;
    if ( v21 )
    {
      if ( !(_DWORD)v21 )
        goto LABEL_41;
      v22 = equipList->m_Items[0];
      if ( !v22 )
        goto LABEL_30;
      v24 = *(_QWORD *)&v22->fields.svtId.fields.currentCryptoKey;
      v23 = *(_QWORD *)&v22->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
      *(_QWORD *)&v32.fields.currentCryptoKey = v24;
      *(_QWORD *)&v32.fields.fakeValue = v23;
      this = (WarBoardPieceData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v32, 0LL);
      v3->fields._iconEquipId_k__BackingField = (int)this;
      if ( !equipList->max_length )
LABEL_41:
        sub_1BCAA44(this, method);
      v25 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)equipList->m_Items[0];
      if ( !v25
        || (this = (WarBoardPieceData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(
                                            v25[6],
                                            0LL),
            v19 = v3->fields._battleServant_k__BackingField,
            v3->fields._equipLimitCount_k__BackingField = (int)this,
            !v19) )
      {
LABEL_40:
        sub_1BCAA3C(this, method);
      }
    }
  }
LABEL_30:
  deckSvt = v19->fields.deckSvt;
  if ( deckSvt && deckSvt->fields.enemyScript )
  {
    v3->fields._npcImageSvtId_k__BackingField = BattleDeckServantData__GetImageSvtId(deckSvt, 0LL);
    DispLimitCnt = BattleDeckServantData__GetDispLimitCnt(deckSvt, 0LL);
    v28 = v3->fields.serverServantData;
    v3->fields._npcDispLimitCount_k__BackingField = DispLimitCnt;
    v29 = v28
       && v28->fields.displayType == 2
       && (v3->fields._npcImageSvtId_k__BackingField < 1 || BattleDeckServantData__IsShadow(deckSvt, 0LL));
    v3->fields._IsShadow_k__BackingField = v29;
  }
}


void __fastcall WarBoardPieceData__SetServarData(WarBoardPieceData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  WarBoardCost_o *Cost_k__BackingField; // x0
  _BOOL8 HasCost; // x0
  __int64 v7; // x1
  struct WarBoardCost_o *v8; // x8
  struct WarBoardUserMasterData_o *v9; // x9
  struct WarBoardUserServantData_o *serverServantData; // x0
  WarBoardCost_o *v11; // x0
  struct WarBoardCost_o *v12; // x8
  struct WarBoardUserServantData_o *v13; // x9

  if ( this->fields._type_k__BackingField == 1 )
  {
    serverMasterData_k__BackingField = this->fields._serverMasterData_k__BackingField;
    if ( serverMasterData_k__BackingField )
    {
      serverMasterData_k__BackingField->fields.currentLimitActionPoint = this->fields._currentActionCount_k__BackingField;
      serverMasterData_k__BackingField->fields.attackCount = this->fields._attackCount_k__BackingField;
      serverMasterData_k__BackingField->fields.squareIndex = this->fields._nowSquareIndex_k__BackingField;
      Cost_k__BackingField = this->fields._Cost_k__BackingField;
      if ( Cost_k__BackingField )
      {
        HasCost = WarBoardCost__get_HasCost(Cost_k__BackingField, 0LL);
        if ( HasCost )
        {
          v8 = this->fields._Cost_k__BackingField;
          if ( v8 )
          {
            v9 = this->fields._serverMasterData_k__BackingField;
            if ( v9 )
            {
              v9->fields.currentPieceActionPoint = v8->fields._CurrentActionPoint_k__BackingField;
              return;
            }
          }
LABEL_15:
          sub_1BCAA3C(HasCost, v7);
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
      serverServantData->fields.attackCount = this->fields._attackCount_k__BackingField;
      serverServantData->fields.squareIndex = this->fields._nowSquareIndex_k__BackingField;
      WarBoardUserServantData__FromBattleServantData(serverServantData, this->fields._battleServant_k__BackingField, v2);
      v11 = this->fields._Cost_k__BackingField;
      if ( v11 )
      {
        HasCost = WarBoardCost__get_HasCost(v11, 0LL);
        if ( HasCost )
        {
          v12 = this->fields._Cost_k__BackingField;
          if ( !v12 )
            goto LABEL_15;
          v13 = this->fields.serverServantData;
          if ( !v13 )
            goto LABEL_15;
          v13->fields.currentPieceActionPoint = v12->fields._CurrentActionPoint_k__BackingField;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceData__SetTouchEnable(WarBoardPieceData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_1BCAA3C(0LL, enable);
  WarBoardPieceBaseComponent__SetTouchEnable(pieceComponent, enable, 0LL);
}


void __fastcall WarBoardPieceData__ShowActionTarget(WarBoardPieceData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  if ( !this->fields._isDead_k__BackingField && WarBoardPieceData__get_enableAction(this, method) )
  {
    pieceComponent = this->fields.pieceComponent;
    if ( !pieceComponent )
      sub_1BCAA3C(0LL, v3);
    ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))pieceComponent->klass->vtable._20_ShowActionTarget.method)(
      pieceComponent,
      pieceComponent->klass->vtable._21_HideActionTarget.methodPtr);
  }
}


System_String_o *__fastcall WarBoardPieceData__ToJson(WarBoardPieceData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  const MethodInfo *v6; // x1
  Il2CppObject *serverMasterData_k__BackingField; // x19
  WarBoardUserServantData_o *serverServantData; // x0

  if ( (byte_4B13F8E & 1) == 0 )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, method, v2);
    sub_1BCA7E0(&string_TypeInfo, v4, v5);
    byte_4B13F8E = 1;
  }
  WarBoardPieceData__SetServarData(this, method);
  if ( this->fields._type_k__BackingField != 1 )
  {
    serverServantData = this->fields.serverServantData;
    if ( serverServantData )
      return WarBoardUserServantData__ToJson(serverServantData, v6);
    return string_TypeInfo->static_fields->Empty;
  }
  serverMasterData_k__BackingField = (Il2CppObject *)this->fields._serverMasterData_k__BackingField;
  if ( !serverMasterData_k__BackingField )
    return string_TypeInfo->static_fields->Empty;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v6);
  return JsonManager__toJson(serverMasterData_k__BackingField, 0, 0, 0LL);
}


void __fastcall WarBoardPieceData__TurnEnd(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_1BCAA3C(0LL, method);
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))pieceComponent->klass->vtable._9_HideActionCount.method)(
    pieceComponent,
    pieceComponent->klass->vtable._10_UpdateDisplayActionCount.methodPtr);
}


void __fastcall WarBoardPieceData__TurnStart(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_1BCAA3C(0LL, method);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  System_Collections_Generic_IEnumerable_TSource__o *masterInfo; // x21
  System_Func_object__bool__o *v60; // x22
  struct WarBoardUserMasterData_o *v61; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int32_t defeatPoint; // w8
  struct WarBoardUserMasterData_o *v69; // x22
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  struct WarBoardUserMasterData_o **p_serverMasterData_k__BackingField; // x21
  _BOOL4 v72; // w24
  System_Collections_Generic_IEnumerable_TSource__o *svtInfo; // x22
  System_Func_object__bool__o *v74; // x24
  Il2CppObject *v75; // x0
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  int32_t breakPoint_k__BackingField; // w26
  int32_t klass_high; // w25
  struct WarBoardUserServantData_o *v81; // x22
  int64_t v82; // x24
  __int64 pieceComponent; // x0
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  struct WarBoardPieceBaseComponent_o *v90; // x1
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  struct WarBoardData_WarBoardDeadBreakList_array *items; // x8
  _QWORD *v98; // x9
  __int64 size; // x10
  _BOOL4 v100; // w21
  Il2CppClass **v101; // x0
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  struct WarBoardCost_o *v108; // x8
  _BOOL4 v109; // w22
  struct WarBoardUserServantData_o *serverServantData; // x8
  struct WarBoardUserServantData_o **p_serverServantData; // x23
  _BOOL4 v112; // w26
  int32_t currentActionCount_k__BackingField; // w27
  int32_t currentActionPoint; // w29
  struct WarBoardPieceData_SaveData_o *localSaveData; // x9
  int v116; // w28
  _BOOL4 v117; // w24
  _BOOL4 v118; // w25
  struct WarBoardUserMasterData_o *v119; // x8
  int v120; // w23
  _BOOL4 v121; // w8
  struct WarBoardPieceBaseComponent_o *v122; // x8
  __int64 v123; // x11
  UnityEngine_Object_o *v124; // x20
  bool v125; // w8
  WarBoardCost_o *Cost_k__BackingField; // x0
  struct WarBoardCost_o *v127; // x8
  const MethodInfo *v128; // x2
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  const MethodInfo *v130; // x2
  struct WarBoardUserServantData_o *v131; // x8
  int32_t squareIndex; // w8
  Il2CppObject *Master_object; // x22
  const MethodInfo *v134; // x1
  WarBoardActionPointEntity_o *v135; // x23
  struct WarBoardUserServantData_o *v136; // x8
  WarBoardActionPointClassEntity_o *v137; // x22
  WarBoardCost_o *v138; // x23
  int v139; // w22
  int32_t *p_iconClassId_k__BackingField; // x28
  int32_t iconClassId_k__BackingField; // w21
  int v142; // w23
  struct WarBoardPieceBaseComponent_o *v143; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Object_o *v145; // x20
  struct BattleServantData_o *v146; // x8
  __int64 v147; // x21
  __int64 v148; // x22
  int32_t v149; // w0
  struct WarBoardUserServantData_o *v150; // x8
  BattleServantData_o *v151; // x8
  struct BattleServantData_o *v152; // x8
  __int64 v153; // x1
  __int64 v154; // x2
  __int64 v155; // x3
  __int64 v156; // x20
  __int64 v157; // x2
  __int64 v158; // x3
  System_Func_bool__o *v159; // x19
  __int64 v160; // x1
  __int64 v161; // x2
  __int64 v162; // x3
  UnityEngine_WaitUntil_o *v163; // x21
  __int64 v164; // x1
  __int64 v165; // x2
  __int64 v166; // x3
  int64_t v167; // x19
  __int64 v168; // x2
  __int64 v169; // x3
  _QWORD *v170; // x21
  System_Delegate_o *v171; // x22
  WarBoardTaskBase_TaskCallback_o *v172; // x23
  System_Delegate_o *v173; // x0
  int64_t v174; // x2
  int32_t v175; // w3
  System_String_o *v176; // x4
  BattleSetupInfo_o *v177; // x5
  FollowerInfo_o *v178; // x6
  PartyListViewItem_o *v179; // x7
  int64_t v180; // x8
  WarBoardTaskBase_TaskCallback_c *v181; // x1
  Il2CppObject *Instance; // x20
  __int64 v183; // x21
  __int64 v184; // x0
  __int64 v185; // x1
  int64_t v186; // x2
  int32_t v187; // w3
  System_String_o *v188; // x4
  BattleSetupInfo_o *v189; // x5
  FollowerInfo_o *v190; // x6
  PartyListViewItem_o *v191; // x7
  __int64 v192; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v194; // 0:x0.16

  v6 = forceUpdate;
  if ( (byte_4B13F8D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantClassMaster___, warBoardDataEntity, deadBreakList);
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___, v11, v12);
    sub_1BCA7E0(&DataManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v15, v16);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___, v17, v18);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___, v19, v20);
    sub_1BCA7E0(&System_Func_bool__TypeInfo, v21, v22);
    sub_1BCA7E0(&System_Func_WarBoardUserMasterData__bool__TypeInfo, v23, v24);
    sub_1BCA7E0(&System_Func_WarBoardUserServantData__bool__TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__Add__, v27, v28);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v29, v30);
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v33, v34);
    sub_1BCA7E0(&WarBoardTaskBase_TaskCallback_TypeInfo, v35, v36);
    sub_1BCA7E0(&Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__2__, v37, v38);
    sub_1BCA7E0(&Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__3__, v39, v40);
    sub_1BCA7E0(&WarBoardPieceData___c__DisplayClass316_0_TypeInfo, v41, v42);
    sub_1BCA7E0(&UnityEngine_WaitUntil_TypeInfo, v43, v44);
    sub_1BCA7E0(&WarBoardCallbackTask_TypeInfo, v45, v46);
    sub_1BCA7E0(&WarBoardData_WarBoardDeadBreakList_TypeInfo, v47, v48);
    sub_1BCA7E0(&WarBoardMasterPieceComponent_TypeInfo, v49, v50);
    sub_1BCA7E0(&Method_WarBoardPieceData__UpdateFromServerData_b__316_0__, v51, v52);
    sub_1BCA7E0(&Method_WarBoardPieceData__UpdateFromServerData_b__316_1__, v53, v54);
    sub_1BCA7E0(&WarBoardServantPieceComponent_TypeInfo, v55, v56);
    sub_1BCA7E0(&WarBoardTaskBase___TypeInfo, v57, v58);
    byte_4B13F8D = 1;
  }
  entity = 0LL;
  if ( !warBoardDataEntity )
    return;
  if ( this->fields._type_k__BackingField != 1 )
  {
    svtInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.svtInfo;
    v74 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                           System_Func_WarBoardUserServantData__bool__TypeInfo,
                                           warBoardDataEntity,
                                           deadBreakList,
                                           taskList);
    System_Func_object__bool____ctor(
      v74,
      (Il2CppObject *)this,
      Method_WarBoardPieceData__UpdateFromServerData_b__316_1__,
      0LL);
    v75 = System_Linq_Enumerable__FirstOrDefault_object__49503160(
            svtInfo,
            (System_Func_TSource__bool__o *)v74,
            (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
    if ( !v75 )
      return;
    breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
    klass_high = HIDWORD(v75[35].klass);
    v81 = (struct WarBoardUserServantData_o *)v75;
    if ( breakPoint_k__BackingField <= klass_high )
    {
      pieceComponent = (__int64)this->fields.pieceComponent;
      if ( !pieceComponent )
        goto LABEL_154;
      pieceComponent = (*(__int64 (__fastcall **)(__int64, WarBoardManager_TaskList_o *, _QWORD))(*(_QWORD *)pieceComponent
                                                                                                + 792LL))(
                         pieceComponent,
                         taskList,
                         *(_QWORD *)(*(_QWORD *)pieceComponent + 800LL));
      v100 = 0;
    }
    else
    {
      this->fields._breakPoint_k__BackingField = klass_high;
      if ( (klass_high & 0x80000000) != 0 )
        this->fields._isDead_k__BackingField = 1;
      v82 = sub_1BCAA2C(WarBoardData_WarBoardDeadBreakList_TypeInfo, v76, v77, v78);
      System_Object___ctor((Il2CppObject *)v82, 0LL);
      if ( !v82 )
        goto LABEL_154;
      v90 = this->fields.pieceComponent;
      *(_QWORD *)(v82 + 16) = v90;
      sub_1BCA784((PartyOrganizationUtility_o *)(v82 + 16), (int64_t)v90, v84, v85, v86, v87, v88, v89);
      *(_DWORD *)(v82 + 24) = v81->fields.defeatPoint;
      *(_DWORD *)(v82 + 28) = breakPoint_k__BackingField;
      if ( !deadBreakList )
        goto LABEL_154;
      items = deadBreakList->fields._items;
      v98 = Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__Add__;
      ++deadBreakList->fields._version;
      if ( !items )
        goto LABEL_154;
      size = deadBreakList->fields._size;
      v100 = klass_high >= 0;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)deadBreakList,
          (Il2CppObject *)v82,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
      }
      else
      {
        v101 = &items->obj.klass + size;
        deadBreakList->fields._size = size + 1;
        v101[4] = (Il2CppClass *)v82;
        sub_1BCA784((PartyOrganizationUtility_o *)(v101 + 4), v82, v91, v92, v93, v94, v95, v96);
      }
    }
    p_serverServantData = &this->fields.serverServantData;
    serverServantData = this->fields.serverServantData;
    if ( serverServantData )
      v112 = serverServantData->fields.transformIndex != v81->fields.transformIndex;
    else
      v112 = 0;
    currentActionCount_k__BackingField = this->fields._currentActionCount_k__BackingField;
    currentActionPoint = v81->fields.currentActionPoint;
    localSaveData = this->fields.localSaveData;
    v116 = currentActionCount_k__BackingField != currentActionPoint;
    if ( !localSaveData )
      goto LABEL_154;
    if ( v81->fields.consumedActionPointDateTime <= localSaveData->fields.consumedActionPointDateTime
      || this->fields._forceId_k__BackingField
      || this->fields._groupId_k__BackingField )
    {
      v117 = 0;
      if ( serverServantData )
      {
LABEL_37:
        v118 = serverServantData->fields.criticalStars != v81->fields.criticalStars;
LABEL_64:
        v125 = v81->fields.consumedRecoverDonotActCostDateTime > localSaveData->fields.consumedRecoverDonotActCostDateTime
            && !this->fields._forceId_k__BackingField
            && !this->fields._groupId_k__BackingField
            && !this->fields._isDead_k__BackingField;
        this->fields._IsDispConsumedPieceActionPoint_k__BackingField = v125;
        Cost_k__BackingField = this->fields._Cost_k__BackingField;
        this->fields._ConsumedRecoverDonotActCost_k__BackingField = v81->fields.consumedRecoverDonotActCost;
        if ( Cost_k__BackingField )
        {
          pieceComponent = WarBoardCost__get_HasCost(Cost_k__BackingField, 0LL);
          v116 = pieceComponent | (currentActionCount_k__BackingField != currentActionPoint);
          if ( currentActionCount_k__BackingField == currentActionPoint && (pieceComponent & 1) != 0 )
          {
            v127 = this->fields._Cost_k__BackingField;
            if ( !v127 )
              goto LABEL_154;
            v116 = v127->fields._CurrentActionPoint_k__BackingField != v81->fields.currentPieceActionPoint;
          }
        }
        this->fields.serverServantData = v81;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&this->fields.serverServantData,
          (int64_t)v81,
          v102,
          v103,
          v104,
          v105,
          v106,
          v107);
        pieceComponent = (__int64)this->fields.serverServantData;
        if ( !pieceComponent )
          goto LABEL_154;
        WarBoardUserServantData__SetBattleServantData(
          (WarBoardUserServantData_o *)pieceComponent,
          this->fields._battleServant_k__BackingField,
          v128);
        battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
        if ( !battleServant_k__BackingField )
          goto LABEL_154;
        pieceComponent = (__int64)battleServant_k__BackingField->fields.buffData;
        if ( !pieceComponent )
          goto LABEL_154;
        BattleBuffData__UpdateForceNoField((BattleBuffData_o *)pieceComponent, 0LL);
        pieceComponent = (__int64)this->fields._battleServant_k__BackingField;
        if ( !pieceComponent )
          goto LABEL_154;
        BattleServantData__updateHp((BattleServantData_o *)pieceComponent, 0LL);
        pieceComponent = (__int64)*p_serverServantData;
        if ( !*p_serverServantData )
          goto LABEL_154;
        WarBoardUserServantData__FromBattleServantData(
          (WarBoardUserServantData_o *)pieceComponent,
          this->fields._battleServant_k__BackingField,
          v130);
        v131 = this->fields.serverServantData;
        if ( !v131 )
          goto LABEL_154;
        *(int32x2_t *)&this->fields._limitActionCount_k__BackingField = vrev64_s32(*(int32x2_t *)&v131->fields.currentActionPoint);
        this->fields._attackCount_k__BackingField = v131->fields.attackCount;
        squareIndex = v131->fields.squareIndex;
        if ( squareIndex == -1 )
          this->fields._lastSquareIndex_k__BackingField = this->fields._nowSquareIndex_k__BackingField;
        this->fields._nowSquareIndex_k__BackingField = squareIndex;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v76);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
        pieceComponent = (__int64)WarBoardPieceData__get_ActionPointEntity(this, v134);
        if ( !this->fields._battleServant_k__BackingField )
          goto LABEL_154;
        v135 = (WarBoardActionPointEntity_o *)pieceComponent;
        pieceComponent = BattleServantData__getClassId(this->fields._battleServant_k__BackingField, 0LL);
        if ( !Master_object )
          goto LABEL_154;
        pieceComponent = (__int64)WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                    (WarBoardActionPointClassMaster_o *)Master_object,
                                    v135,
                                    pieceComponent,
                                    0LL);
        v136 = this->fields.serverServantData;
        if ( !v136 )
          goto LABEL_154;
        v137 = (WarBoardActionPointClassEntity_o *)pieceComponent;
        pieceComponent = (__int64)this->fields._Cost_k__BackingField;
        if ( !pieceComponent )
          goto LABEL_154;
        WarBoardCost__UpdateCurrentPointByServerData(
          (WarBoardCost_o *)pieceComponent,
          v136->fields.currentPieceActionPoint,
          0LL);
        pieceComponent = (__int64)this->fields._battleServant_k__BackingField;
        if ( !pieceComponent )
          goto LABEL_154;
        v138 = this->fields._Cost_k__BackingField;
        pieceComponent = BattleServantData__getClassId((BattleServantData_o *)pieceComponent, 0LL);
        if ( !v138 )
          goto LABEL_154;
        if ( WarBoardCost__IsSameClass(v138, pieceComponent, 0LL) )
        {
          v139 = 0;
        }
        else
        {
          pieceComponent = (__int64)WarBoardCost__Create(v137, 0LL, 0LL, 0LL);
          if ( !this->fields._Cost_k__BackingField )
            goto LABEL_154;
          WarBoardCost__UpdateClassCost(this->fields._Cost_k__BackingField, (WarBoardCost_o *)pieceComponent, 0LL);
          v139 = 1;
        }
        pieceComponent = (__int64)this->fields.pieceComponent;
        if ( !pieceComponent )
          goto LABEL_154;
        if ( (((*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)pieceComponent + 568LL))(
                 pieceComponent,
                 *(_QWORD *)(*(_QWORD *)pieceComponent + 576LL)) & 1) != 0
           || v6)
          && !this->fields._isDead_k__BackingField )
        {
          pieceComponent = (__int64)this->fields.pieceComponent;
          if ( !pieceComponent )
            goto LABEL_154;
          (*(void (__fastcall **)(__int64, _BOOL4, _QWORD))(*(_QWORD *)pieceComponent + 552LL))(
            pieceComponent,
            v100,
            *(_QWORD *)(*(_QWORD *)pieceComponent + 560LL));
        }
        if ( v139 | (v116 | v6) & 1 && !this->fields._isDead_k__BackingField )
        {
          pieceComponent = (__int64)this->fields.pieceComponent;
          if ( !pieceComponent )
            goto LABEL_154;
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)pieceComponent + 472LL))(
            pieceComponent,
            *(_QWORD *)(*(_QWORD *)pieceComponent + 480LL));
        }
        pieceComponent = (__int64)this->fields._battleServant_k__BackingField;
        if ( !pieceComponent )
          goto LABEL_154;
        p_iconClassId_k__BackingField = &this->fields._iconClassId_k__BackingField;
        iconClassId_k__BackingField = this->fields._iconClassId_k__BackingField;
        v142 = v6;
        if ( v112 | v142 | (iconClassId_k__BackingField != BattleServantData__getClassId(
                                                             (BattleServantData_o *)pieceComponent,
                                                             0LL))
          && !this->fields._isDead_k__BackingField )
        {
          v143 = this->fields.pieceComponent;
          if ( v143
            && (methodPtr_low = LOBYTE(WarBoardServantPieceComponent_TypeInfo->vtable._0_Equals.methodPtr),
                LOBYTE(v143->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
          {
            if ( (WarBoardServantPieceComponent_c *)v143->klass->_2.typeHierarchy[methodPtr_low - 1] == WarBoardServantPieceComponent_TypeInfo )
              v145 = (UnityEngine_Object_o *)this->fields.pieceComponent;
            else
              v145 = 0LL;
          }
          else
          {
            v145 = 0LL;
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v76);
          pieceComponent = UnityEngine_Object__op_Inequality(v145, 0LL, 0LL);
          if ( (pieceComponent & 1) != 0 )
          {
            v146 = this->fields._battleServant_k__BackingField;
            if ( !v146 )
              goto LABEL_154;
            v148 = *(_QWORD *)&v146->fields.svtId.fields.currentCryptoKey;
            v147 = *(_QWORD *)&v146->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v76);
            *(_QWORD *)&v194.fields.currentCryptoKey = v148;
            *(_QWORD *)&v194.fields.fakeValue = v147;
            v149 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47011428(v194, 0LL);
            v150 = this->fields.serverServantData;
            this->fields._iconId_k__BackingField = v149;
            if ( v150 && NpcSvtType__IsEnemy(v150->fields.npcSvtType, 0LL) )
            {
              pieceComponent = (__int64)this->fields._battleServant_k__BackingField;
              if ( !pieceComponent )
                goto LABEL_154;
              pieceComponent = BattleServantData__getLimitCount((BattleServantData_o *)pieceComponent, 0LL);
            }
            else
            {
              pieceComponent = (__int64)this->fields._battleServant_k__BackingField;
              if ( !pieceComponent )
                goto LABEL_154;
              pieceComponent = BattleServantData__GetIconImageLimitCount((BattleServantData_o *)pieceComponent, 0LL);
            }
            v151 = this->fields._battleServant_k__BackingField;
            this->fields._iconLimitCount_k__BackingField = pieceComponent;
            if ( !v151 )
              goto LABEL_154;
            pieceComponent = BattleServantData__getClassId(v151, 0LL);
            v152 = this->fields._battleServant_k__BackingField;
            this->fields._iconClassId_k__BackingField = pieceComponent;
            if ( !v152 )
              goto LABEL_154;
            this->fields._iconFrameType_k__BackingField = v152->fields._frameType_k__BackingField;
            this->fields._iconLevel_k__BackingField = v152->fields.level;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v76);
            pieceComponent = (__int64)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantClassMaster___);
            if ( !pieceComponent )
              goto LABEL_154;
            pieceComponent = DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)pieceComponent,
                               &entity,
                               *p_iconClassId_k__BackingField,
                               (const MethodInfo_31B2E94 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
            if ( (pieceComponent & 1) != 0 )
            {
              if ( !entity )
                goto LABEL_154;
              p_iconClassId_k__BackingField = (int32_t *)&entity[2].monitor + 1;
            }
            this->fields._IconClassImageId_k__BackingField = *p_iconClassId_k__BackingField;
            if ( !v145 )
              goto LABEL_154;
            WarBoardServantPieceComponent__SetServantIcon((WarBoardServantPieceComponent_o *)v145, 0LL);
            ((void (__fastcall *)(UnityEngine_Object_o *, void *))v145->klass[1]._1.parent)(
              v145,
              v145->klass[1]._1.generic_class);
            ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *))v145->klass[1]._1.castClass)(
              v145,
              v145->klass[1]._1.declaringType);
          }
        }
        if ( v118 | v142 && !this->fields._isDead_k__BackingField )
        {
          pieceComponent = (__int64)this->fields.pieceComponent;
          if ( !pieceComponent )
            goto LABEL_154;
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)pieceComponent + 584LL))(
            pieceComponent,
            *(_QWORD *)(*(_QWORD *)pieceComponent + 592LL));
        }
        pieceComponent = (__int64)this->fields.pieceComponent;
        if ( !pieceComponent )
LABEL_154:
          sub_1BCAA3C(pieceComponent, v76);
        WarBoardPieceBaseComponent__UpdateUiByBuffChanged((WarBoardPieceBaseComponent_o *)pieceComponent, 0LL);
        if ( !v117 )
          return;
        v156 = sub_1BCAA2C(WarBoardPieceData___c__DisplayClass316_0_TypeInfo, v153, v154, v155);
        System_Object___ctor((Il2CppObject *)v156, 0LL);
        if ( !v156 )
          goto LABEL_154;
        *(_BYTE *)(v156 + 16) = 0;
        v159 = (System_Func_bool__o *)sub_1BCAA2C(System_Func_bool__TypeInfo, v76, v157, v158);
        System_Func_bool____ctor(
          v159,
          (Il2CppObject *)v156,
          Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__2__,
          0LL);
        v163 = (UnityEngine_WaitUntil_o *)sub_1BCAA2C(UnityEngine_WaitUntil_TypeInfo, v160, v161, v162);
        UnityEngine_WaitUntil___ctor(v163, v159, 0LL);
        v167 = sub_1BCAA2C(WarBoardCallbackTask_TypeInfo, v164, v165, v166);
        WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v167, (UnityEngine_CustomYieldInstruction_o *)v163, 0LL);
        if ( !v167 )
          goto LABEL_154;
        v170 = (_QWORD *)(v167 + 32);
        v171 = *(System_Delegate_o **)(v167 + 32);
        v172 = (WarBoardTaskBase_TaskCallback_o *)sub_1BCAA2C(WarBoardTaskBase_TaskCallback_TypeInfo, v76, v168, v169);
        WarBoardTaskBase_TaskCallback___ctor(
          v172,
          (Il2CppObject *)v156,
          Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__3__,
          0LL);
        v173 = System_Delegate__Combine(v171, (System_Delegate_o *)v172, 0LL);
        v180 = (int64_t)v173;
        if ( v173 )
        {
          v181 = WarBoardTaskBase_TaskCallback_TypeInfo;
          if ( (WarBoardTaskBase_TaskCallback_c *)v173->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
          {
            *v170 = v173;
            if ( (WarBoardTaskBase_TaskCallback_c *)v173->klass == v181 )
            {
LABEL_147:
              sub_1BCA784((PartyOrganizationUtility_o *)(v167 + 32), v180, v174, v175, v176, v177, v178, v179);
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              pieceComponent = sub_1BCA888(WarBoardTaskBase___TypeInfo, 1LL);
              if ( !pieceComponent )
                goto LABEL_154;
              v183 = pieceComponent;
              v184 = sub_1BCA91C(v167, *(_QWORD *)(*(_QWORD *)pieceComponent + 64LL));
              if ( !v184 )
              {
                v192 = sub_1BCAA60(0LL);
                sub_1BCA908(v192, 0LL);
              }
              if ( !*(_DWORD *)(v183 + 24) )
                sub_1BCAA44(v184, v185);
              *(_QWORD *)(v183 + 32) = v167;
              sub_1BCA784((PartyOrganizationUtility_o *)(v183 + 32), v167, v186, v187, v188, v189, v190, v191);
              if ( !Instance )
                goto LABEL_154;
              WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 1, (WarBoardTaskBase_array *)v183, 0LL);
              return;
            }
          }
          sub_1BCACFC(v173);
        }
        *v170 = v180;
        goto LABEL_147;
      }
    }
    else
    {
      v117 = !this->fields._isDead_k__BackingField;
      if ( serverServantData )
        goto LABEL_37;
    }
    v118 = 0;
    goto LABEL_64;
  }
  masterInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.masterInfo;
  v60 = (System_Func_object__bool__o *)sub_1BCAA2C(
                                         System_Func_WarBoardUserMasterData__bool__TypeInfo,
                                         warBoardDataEntity,
                                         deadBreakList,
                                         taskList);
  System_Func_object__bool____ctor(
    v60,
    (Il2CppObject *)this,
    Method_WarBoardPieceData__UpdateFromServerData_b__316_0__,
    0LL);
  v61 = (struct WarBoardUserMasterData_o *)System_Linq_Enumerable__FirstOrDefault_object__49503160(
                                             masterInfo,
                                             (System_Func_TSource__bool__o *)v60,
                                             (const MethodInfo_2F35BB8 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
  if ( !v61 )
    return;
  defeatPoint = v61->fields.defeatPoint;
  v69 = v61;
  if ( this->fields._breakPoint_k__BackingField > defeatPoint )
  {
    this->fields._breakPoint_k__BackingField = defeatPoint;
    if ( defeatPoint <= 0 )
      this->fields._isDead_k__BackingField = 1;
  }
  p_serverMasterData_k__BackingField = &this->fields._serverMasterData_k__BackingField;
  serverMasterData_k__BackingField = this->fields._serverMasterData_k__BackingField;
  if ( serverMasterData_k__BackingField )
    v72 = serverMasterData_k__BackingField->fields.commandSpellNum != v61->fields.commandSpellNum;
  else
    v72 = 1;
  this->fields._serverMasterData_k__BackingField = v61;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._serverMasterData_k__BackingField,
    (int64_t)v61,
    v62,
    v63,
    v64,
    v65,
    v66,
    v67);
  if ( this->fields._currentActionCount_k__BackingField == v69->fields.currentLimitActionPoint )
  {
    v108 = this->fields._Cost_k__BackingField;
    if ( v108 )
    {
      if ( !*p_serverMasterData_k__BackingField )
        goto LABEL_154;
      v109 = v108->fields._CurrentActionPoint_k__BackingField != (*p_serverMasterData_k__BackingField)->fields.currentPieceActionPoint;
    }
    else
    {
      v109 = 0;
    }
  }
  else
  {
    v109 = 1;
  }
  v119 = *p_serverMasterData_k__BackingField;
  if ( !*p_serverMasterData_k__BackingField )
    goto LABEL_154;
  pieceComponent = (__int64)this->fields._Cost_k__BackingField;
  *(int32x2_t *)&this->fields._limitActionCount_k__BackingField = vrev64_s32(*(int32x2_t *)&v119->fields.currentLimitActionPoint);
  this->fields._attackCount_k__BackingField = v119->fields.attackCount;
  this->fields._nowSquareIndex_k__BackingField = v119->fields.squareIndex;
  if ( !pieceComponent )
    goto LABEL_154;
  v120 = v6;
  WarBoardCost__UpdateCurrentPointByServerData(
    (WarBoardCost_o *)pieceComponent,
    v119->fields.currentPieceActionPoint,
    0LL);
  v121 = !this->fields._forceId_k__BackingField
      && !this->fields._groupId_k__BackingField
      && this->fields._type_k__BackingField == 1;
  if ( (v121 & (v72 | v120)) != 0 )
  {
    v122 = this->fields.pieceComponent;
    if ( v122
      && (v123 = LOBYTE(WarBoardMasterPieceComponent_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v122->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v123) )
    {
      v124 = (WarBoardMasterPieceComponent_c *)v122->klass->_2.typeHierarchy[v123 - 1] == WarBoardMasterPieceComponent_TypeInfo
           ? (UnityEngine_Object_o *)this->fields.pieceComponent
           : 0LL;
    }
    else
    {
      v124 = 0LL;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v76);
    pieceComponent = UnityEngine_Object__op_Inequality(v124, 0LL, 0LL);
    if ( (pieceComponent & 1) != 0 )
    {
      if ( !*p_serverMasterData_k__BackingField || !v124 )
        goto LABEL_154;
      WarBoardMasterPieceComponent__SetCommandSpellRemain(
        (WarBoardMasterPieceComponent_o *)v124,
        (*p_serverMasterData_k__BackingField)->fields.commandSpellNum,
        0LL);
    }
  }
  if ( v109 | v120 && !this->fields._isDead_k__BackingField )
  {
    pieceComponent = (__int64)this->fields.pieceComponent;
    if ( pieceComponent )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)pieceComponent + 472LL))(
        pieceComponent,
        *(_QWORD *)(*(_QWORD *)pieceComponent + 480LL));
      return;
    }
    goto LABEL_154;
  }
}


void __fastcall WarBoardPieceData__UpdateWidgetDepth(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_1BCAA3C(0LL, method);
  WarBoardPieceBaseComponent__UpdateWidgetDepth(pieceComponent, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceData__WallAttack(WarBoardPieceData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_1BCAA3C(0LL, *(_QWORD *)&squareIndex);
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, int32_t, Il2CppMethodPointer))pieceComponent->klass->vtable._28_OnWallAttack.method)(
    pieceComponent,
    squareIndex,
    pieceComponent->klass->vtable._29_OnAfterWallAttack.methodPtr);
}


bool __fastcall WarBoardPieceData___ProcContinue_b__337_0(
        WarBoardPieceData_o *this,
        WarBoardPieceData_o *otherPiece,
        const MethodInfo *method)
{
  if ( !otherPiece )
    sub_1BCAA3C(this, 0LL);
  return !otherPiece->fields._forceId_k__BackingField
      && !otherPiece->fields._groupId_k__BackingField
      && otherPiece->fields._nowSquareIndex_k__BackingField != otherPiece->fields._PutSquareIndex_k__BackingField
      && otherPiece->fields._index_k__BackingField >= this->fields._index_k__BackingField;
}


bool __fastcall WarBoardPieceData___SetInitinalData_b__315_0(
        WarBoardPieceData_o *this,
        WarBoardUserMasterData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.forceId == this->fields._forceId_k__BackingField
      && x->fields.groupId == this->fields._groupId_k__BackingField;
}


bool __fastcall WarBoardPieceData___SetInitinalData_b__315_1(
        WarBoardPieceData_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.forceId == this->fields._forceId_k__BackingField
      && x->fields.groupId == this->fields._groupId_k__BackingField
      && x->fields.pieceIndex == this->fields._index_k__BackingField;
}


bool __fastcall WarBoardPieceData___UpdateFromServerData_b__316_0(
        WarBoardPieceData_o *this,
        WarBoardUserMasterData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.forceId == this->fields._forceId_k__BackingField
      && x->fields.groupId == this->fields._groupId_k__BackingField;
}


bool __fastcall WarBoardPieceData___UpdateFromServerData_b__316_1(
        WarBoardPieceData_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BCAA3C(this, 0LL);
  return x->fields.forceId == this->fields._forceId_k__BackingField
      && x->fields.groupId == this->fields._groupId_k__BackingField
      && x->fields.pieceIndex == this->fields._index_k__BackingField;
}


WarBoardActionPointEntity_o *__fastcall WarBoardPieceData__get_ActionPointEntity(
        WarBoardPieceData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1

  if ( (byte_4B13F7E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_WarBoardActionPointMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    byte_4B13F7E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_WarBoardActionPointMaster___);
  if ( !Master_object )
    sub_1BCAA3C(0LL, v7);
  return WarBoardActionPointMaster__GetEntity(
           (WarBoardActionPointMaster_o *)Master_object,
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


int32_t __fastcall WarBoardPieceData__get_IconClassImageId(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._IconClassImageId_k__BackingField;
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
  struct WarBoardUserServantData_o *serverServantData; // x8

  serverServantData = this->fields.serverServantData;
  return serverServantData && serverServantData->fields.stageBossIdx > 0;
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
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  WarBoardPieceData_o *v3; // x19
  struct WarBoardUserServantData_o *serverServantData; // x8
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  v3 = this;
  if ( (byte_4B13F7D & 1) == 0 )
  {
    this = (WarBoardPieceData_o *)sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
    byte_4B13F7D = 1;
  }
  serverServantData = v3->fields.serverServantData;
  if ( !serverServantData )
    sub_1BCAA3C(this, method);
  v5 = *(_OWORD *)&serverServantData->fields.id.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&serverServantData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v7, 0LL);
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
    sub_1BCAA3C(0LL, method);
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
  __int64 v2; // x2
  WarBoardData_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B13F7B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method, v2);
    byte_4B13F7B = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0LL )
    sub_1BCAA3C(Instance, v5);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._Cost_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._Cost_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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


void __fastcall WarBoardPieceData__set_IconClassImageId(
        WarBoardPieceData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._IconClassImageId_k__BackingField = value;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._PrevAiRoute_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._PrevAiRoute_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._battleServant_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._battleServant_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._individuality_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._individuality_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._serverMasterData_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._serverMasterData_k__BackingField,
    (int64_t)value,
    (int64_t)method,
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
  *(_DWORD *)&this->fields._HasAvailablePermanentSleepBuff_k__BackingField.fields.hasValue = 0;
}


void __fastcall WarBoardPieceData_PieceStatusCache__SetEnable(
        WarBoardPieceData_PieceStatusCache_o *this,
        bool flg,
        const MethodInfo *method)
{
  *(_DWORD *)&this->fields._HasAvailablePermanentSleepBuff_k__BackingField.fields.hasValue = 0;
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


void __fastcall WarBoardPieceData_RouteSaveData___ctor_36266244(
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
  *(_OWORD *)&this->fields.forceId = xmmword_BD2DB0;
}


void __fastcall WarBoardPieceData_SaveData___ctor_36234688(
        WarBoardPieceData_SaveData_o *this,
        WarBoardPieceData_o *owner,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  const MethodInfo *v11; // x1
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct WarBoardPieceData_o *v19; // x0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.owner = owner;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.owner, (int64_t)owner, v5, v6, v7, v8, v9, v10);
  WarBoardPieceData_SaveData__Save(this, v11);
  v19 = this->fields.owner;
  if ( !v19 )
    sub_1BCAA3C(0LL, v12);
  v19->fields.localSaveData = this;
  sub_1BCA784((PartyOrganizationUtility_o *)&v19->fields.localSaveData, (int64_t)this, v13, v14, v15, v16, v17, v18);
}


void __fastcall WarBoardPieceData_SaveData__Load(WarBoardPieceData_SaveData_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  struct WarBoardPieceData_o *owner; // x0
  struct WarBoardPieceData_RouteSaveData_o *prevAiRoute; // x1
  int64_t Cost_k__BackingField; // x0
  BattleServantData_o *v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct WarBoardPieceData_o *v21; // x8
  struct WarBoardPieceData_o *v22; // x8
  struct WarBoardPieceData_o *v23; // x8
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  struct WarBoardUserServantData_o *serverServantData; // x8
  struct BattleBuffData_SaveData_o *buffSave; // x1
  struct WarBoardPieceData_o *v27; // x8
  struct WarBoardUserServantData_o *v28; // x8
  struct WarBoardPieceData_o *v29; // x8
  struct WarBoardUserServantData_o *v30; // x8
  __int128 v31; // q1
  WarBoardManager_o *v32; // x20
  const MethodInfo *v33; // x2
  struct WarBoardPieceData_o *v34; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v35; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v36; // [xsp+20h] [xbp-40h]

  if ( (byte_4B13F9C & 1) == 0 )
  {
    sub_1BCA7E0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v9, v10);
    byte_4B13F9C = 1;
  }
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields._breakPoint_k__BackingField = this->fields.breakPoint;
    owner->fields._nowSquareIndex_k__BackingField = this->fields.squareIndex;
    owner->fields._currentActionCount_k__BackingField = this->fields.actionCount;
    owner->fields._attackCount_k__BackingField = this->fields.attackCount;
    prevAiRoute = this->fields.prevAiRoute;
    owner->fields._PrevAiRoute_k__BackingField = prevAiRoute;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&owner->fields._PrevAiRoute_k__BackingField,
      (int64_t)prevAiRoute,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7);
    v21 = this->fields.owner;
    if ( !v21 )
      goto LABEL_26;
    v21->fields._entryTurn_k__BackingField = this->fields.entryTurn;
    *(_QWORD *)&v21->fields._StageReinfoId_k__BackingField = *(_QWORD *)&this->fields.stageReinforcementId;
    *(_QWORD *)&v21->fields._overwriteActionType_k__BackingField = *(_QWORD *)&this->fields.overwriteActionType;
    Cost_k__BackingField = (int64_t)v21->fields._Cost_k__BackingField;
    if ( Cost_k__BackingField )
    {
      Cost_k__BackingField = WarBoardCost__get_HasCost((WarBoardCost_o *)Cost_k__BackingField, 0LL);
      if ( (Cost_k__BackingField & 1) != 0 )
      {
        v22 = this->fields.owner;
        if ( !v22 )
          goto LABEL_26;
        Cost_k__BackingField = (int64_t)v22->fields._Cost_k__BackingField;
        if ( !Cost_k__BackingField )
          goto LABEL_26;
        WarBoardCost__UpdateCurrentPointBySaveData(
          (WarBoardCost_o *)Cost_k__BackingField,
          this->fields.currentActionPoint,
          0LL);
      }
    }
    v23 = this->fields.owner;
    if ( v23 )
    {
      if ( v23->fields._type_k__BackingField == 1 )
      {
        serverMasterData_k__BackingField = v23->fields._serverMasterData_k__BackingField;
        if ( serverMasterData_k__BackingField )
        {
          serverMasterData_k__BackingField->fields.currentLimitActionPoint = this->fields.actionCount;
          serverMasterData_k__BackingField->fields.squareIndex = this->fields.squareIndex;
          serverMasterData_k__BackingField->fields.currentForceActionPoint = this->fields.currentForceActionPoint;
          serverMasterData_k__BackingField->fields.attackCount = this->fields.attackCount;
          serverMasterData_k__BackingField->fields.currentPieceActionPoint = this->fields.currentActionPoint;
          serverMasterData_k__BackingField->fields.defeatPoint = this->fields.breakPoint;
        }
        return;
      }
      serverServantData = v23->fields.serverServantData;
      if ( !serverServantData )
        return;
      *(_QWORD *)&serverServantData->fields.squareIndex = *(_QWORD *)&this->fields.squareIndex;
      buffSave = this->fields.buffSave;
      serverServantData->fields.buffDataSave = buffSave;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&serverServantData->fields.buffDataSave,
        (int64_t)buffSave,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      v27 = this->fields.owner;
      if ( v27 )
      {
        v28 = v27->fields.serverServantData;
        if ( v28 )
        {
          v28->fields.attackCount = this->fields.attackCount;
          *(_QWORD *)&v28->fields.currentHp = *(_QWORD *)&this->fields.hp;
          v28->fields.nextNpTurn = this->fields.tdTurn;
          v28->fields.criticalStars = this->fields.criticalStars;
          v28->fields.currentPieceActionPoint = this->fields.currentActionPoint;
          v28->fields.defeatPoint = this->fields.breakPoint;
          Cost_k__BackingField = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          v29 = this->fields.owner;
          if ( v29 )
          {
            v30 = v29->fields.serverServantData;
            if ( v30 )
            {
              v31 = *(_OWORD *)&v30->fields.id.fields.fakeValue;
              v32 = (WarBoardManager_o *)Cost_k__BackingField;
              *(_OWORD *)&v36.fields.currentCryptoKey = *(_OWORD *)&v30->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v36.fields.fakeValue = v31;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14);
              v35 = v36;
              Cost_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47014952(&v35, 0LL);
              if ( v32 )
              {
                Cost_k__BackingField = (int64_t)WarBoardManager__GetBattleServant(v32, Cost_k__BackingField, 0LL);
                v34 = this->fields.owner;
                if ( v34 )
                {
                  v14 = (BattleServantData_o *)Cost_k__BackingField;
                  Cost_k__BackingField = (int64_t)v34->fields.serverServantData;
                  if ( Cost_k__BackingField )
                  {
                    WarBoardUserServantData__SetBattleServantData(
                      (WarBoardUserServantData_o *)Cost_k__BackingField,
                      v14,
                      v33);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_26:
    sub_1BCAA3C(Cost_k__BackingField, v14);
  }
}


void __fastcall WarBoardPieceData_SaveData__LoadOverwriteData(
        WarBoardPieceData_SaveData_o *this,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *owner; // x8

  owner = this->fields.owner;
  if ( owner )
    *(_QWORD *)&owner->fields._overwriteActionType_k__BackingField = *(_QWORD *)&this->fields.overwriteActionType;
}


void __fastcall WarBoardPieceData_SaveData__Save(WarBoardPieceData_SaveData_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct WarBoardPieceData_o *owner; // x8
  WarBoardPieceData_SaveData_o *v9; // x19
  WarBoardCost_o *Cost_k__BackingField; // x0
  struct WarBoardPieceData_o *v11; // x8
  struct WarBoardCost_o *v12; // x8
  int32_t CurrentActionPoint_k__BackingField; // w8
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct WarBoardPieceData_o *v20; // x8
  int64_t PrevAiRoute_k__BackingField; // x1
  struct WarBoardPieceData_o *v22; // x8
  int32_t type_k__BackingField; // w9
  struct WarBoardUserServantData_o *serverServantData; // x9
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  BattleBuffData_SaveData_o *SaveData; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct WarBoardPieceData_o *v33; // x8
  struct WarBoardPieceData_o *v34; // x8
  struct BattleServantData_o *v35; // x8
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8

  owner = this->fields.owner;
  if ( !owner )
    goto LABEL_24;
  v9 = this;
  *(_QWORD *)&this->fields.forceId = *(_QWORD *)&owner->fields._forceId_k__BackingField;
  this->fields.pieceIndex = owner->fields._index_k__BackingField;
  this->fields.breakPoint = owner->fields._breakPoint_k__BackingField;
  this->fields.squareIndex = owner->fields._nowSquareIndex_k__BackingField;
  this->fields.actionCount = owner->fields._currentActionCount_k__BackingField;
  this->fields.attackCount = owner->fields._attackCount_k__BackingField;
  Cost_k__BackingField = owner->fields._Cost_k__BackingField;
  if ( Cost_k__BackingField
    && (this = (WarBoardPieceData_SaveData_o *)WarBoardCost__get_HasCost(Cost_k__BackingField, 0LL),
        ((unsigned __int8)this & 1) != 0) )
  {
    v11 = v9->fields.owner;
    if ( !v11 )
      goto LABEL_24;
    v12 = v11->fields._Cost_k__BackingField;
    if ( !v12 )
      goto LABEL_24;
    CurrentActionPoint_k__BackingField = v12->fields._CurrentActionPoint_k__BackingField;
  }
  else
  {
    CurrentActionPoint_k__BackingField = 0;
  }
  v9->fields.buffSave = 0LL;
  v9->fields.consumedActionPointDateTime = 0;
  v9->fields.currentActionPoint = CurrentActionPoint_k__BackingField;
  v9->fields.consumedRecoverDonotActCostDateTime = 0;
  sub_1BCA784((PartyOrganizationUtility_o *)&v9->fields.buffSave, 0LL, v2, v3, v4, v5, v6, v7);
  v20 = v9->fields.owner;
  v9->fields.currentForceActionPoint = 0;
  if ( !v20 )
    goto LABEL_24;
  PrevAiRoute_k__BackingField = (int64_t)v20->fields._PrevAiRoute_k__BackingField;
  v9->fields.prevAiRoute = (struct WarBoardPieceData_RouteSaveData_o *)PrevAiRoute_k__BackingField;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v9->fields.prevAiRoute,
    PrevAiRoute_k__BackingField,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v22 = v9->fields.owner;
  if ( !v22 )
    goto LABEL_24;
  v9->fields.entryTurn = v22->fields._entryTurn_k__BackingField;
  *(_QWORD *)&v9->fields.stageReinforcementId = *(_QWORD *)&v22->fields._StageReinfoId_k__BackingField;
  *(_QWORD *)&v9->fields.overwriteActionType = *(_QWORD *)&v22->fields._overwriteActionType_k__BackingField;
  type_k__BackingField = v22->fields._type_k__BackingField;
  if ( type_k__BackingField == 1 )
  {
    serverMasterData_k__BackingField = v22->fields._serverMasterData_k__BackingField;
    if ( serverMasterData_k__BackingField )
      v9->fields.currentForceActionPoint = serverMasterData_k__BackingField->fields.currentForceActionPoint;
  }
  else if ( !type_k__BackingField )
  {
    serverServantData = v22->fields.serverServantData;
    if ( serverServantData )
    {
      v9->fields.consumedActionPointDateTime = serverServantData->fields.consumedActionPointDateTime;
      v9->fields.criticalStars = serverServantData->fields.criticalStars;
      v9->fields.consumedRecoverDonotActCostDateTime = serverServantData->fields.consumedRecoverDonotActCostDateTime;
    }
    battleServant_k__BackingField = v22->fields._battleServant_k__BackingField;
    if ( battleServant_k__BackingField )
    {
      this = (WarBoardPieceData_SaveData_o *)battleServant_k__BackingField->fields.buffData;
      if ( this )
      {
        SaveData = BattleBuffData__getSaveData((BattleBuffData_o *)this, 0LL);
        v9->fields.buffSave = SaveData;
        sub_1BCA784((PartyOrganizationUtility_o *)&v9->fields.buffSave, (int64_t)SaveData, v27, v28, v29, v30, v31, v32);
        v33 = v9->fields.owner;
        if ( v33 )
        {
          this = (WarBoardPieceData_SaveData_o *)v33->fields._battleServant_k__BackingField;
          if ( this )
          {
            this = (WarBoardPieceData_SaveData_o *)((__int64 (__fastcall *)(WarBoardPieceData_SaveData_o *, void *))this->klass[1]._1.parent)(
                                                     this,
                                                     this->klass[1]._1.generic_class);
            v34 = v9->fields.owner;
            v9->fields.hp = (int)this;
            if ( v34 )
            {
              v35 = v34->fields._battleServant_k__BackingField;
              if ( v35 )
              {
                v9->fields.np = v35->fields.np;
                v9->fields.tdTurn = v35->fields.nexttpturn;
                return;
              }
            }
          }
        }
      }
LABEL_24:
      sub_1BCAA3C(this, method);
    }
  }
}


void __fastcall WarBoardPieceData_SaveData__SetOwner(
        WarBoardPieceData_SaveData_o *this,
        WarBoardData_o *data,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *Piece; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct WarBoardPieceData_o *owner; // x0

  if ( !data )
    sub_1BCAA3C(this, 0LL);
  Piece = WarBoardData__GetPiece(data, this->fields.forceId, this->fields.groupId, this->fields.pieceIndex, 0, 0LL);
  this->fields.owner = Piece;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.owner, (int64_t)Piece, v5, v6, v7, v8, v9, v10);
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields.localSaveData = this;
    sub_1BCA784((PartyOrganizationUtility_o *)&owner->fields.localSaveData, (int64_t)this, v11, v12, v13, v14, v15, v16);
  }
}


void __fastcall WarBoardPieceData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B13F9D & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardPieceData___c_TypeInfo, v1, v2);
    byte_4B13F9D = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(WarBoardPieceData___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  WarBoardPieceData___c_TypeInfo->static_fields->__9 = (struct WarBoardPieceData___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardPieceData___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall WarBoardPieceData___c___ctor(WarBoardPieceData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WarBoardPieceData___c___GetBuffTypesFromConstantStr_b__340_0(
        WarBoardPieceData___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x;
}


void __fastcall WarBoardPieceData___c__DisplayClass223_0___ctor(
        WarBoardPieceData___c__DisplayClass223_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
WarBoardWallData_o *__fastcall WarBoardPieceData___c__DisplayClass223_0___HasVitalityToDoAnyActions_b__0(
        WarBoardPieceData___c__DisplayClass223_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  WarBoardData_o *warBoardData; // x0

  warBoardData = this->fields.warBoardData;
  if ( !warBoardData )
    sub_1BCAA3C(0LL, *(_QWORD *)&x);
  return WarBoardData__GetWall(warBoardData, x, 0, 0LL);
}


void __fastcall WarBoardPieceData___c__DisplayClass316_0___ctor(
        WarBoardPieceData___c__DisplayClass316_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardPieceData___c__DisplayClass316_0___UpdateFromServerData_b__2(
        WarBoardPieceData___c__DisplayClass316_0_o *this,
        const MethodInfo *method)
{
  return this->fields.popupClose;
}


void __fastcall WarBoardPieceData___c__DisplayClass316_0___UpdateFromServerData_b__3(
        WarBoardPieceData___c__DisplayClass316_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_bool__o *_9__4; // x22
  WarBoardManager_o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B13F9E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_bool__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__4__, v6, v7);
    byte_4B13F9E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__4 = this->fields.__9__4;
  v13 = (WarBoardManager_o *)Instance;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_bool__o *)sub_1BCAA2C(System_Action_bool__TypeInfo, v9, v10, v11);
    System_Action_bool____ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__4__,
      0LL);
    this->fields.__9__4 = _9__4;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__4, (int64_t)_9__4, v14, v15, v16, v17, v18, v19);
  }
  if ( !v13 )
    sub_1BCAA3C(Instance, v9);
  WarBoardManager__ShowActionCountDecreaseNoticePopup(v13, _9__4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceData___c__DisplayClass316_0___UpdateFromServerData_b__4(
        WarBoardPieceData___c__DisplayClass316_0_o *this,
        bool ok,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *_9__5; // x22
  WarBoardManager_o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4B13F9F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, ok, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4, v5);
    sub_1BCA7E0(&Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__5__, v6, v7);
    byte_4B13F9F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__5 = this->fields.__9__5;
  v13 = (WarBoardManager_o *)Instance;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)this,
      Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__5__,
      0LL);
    this->fields.__9__5 = _9__5;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__5, (int64_t)_9__5, v14, v15, v16, v17, v18, v19);
  }
  if ( !v13 )
    sub_1BCAA3C(Instance, v9);
  WarBoardManager__HideActionCountDecreaseNoticePopup(v13, _9__5, 0LL);
}


void __fastcall WarBoardPieceData___c__DisplayClass316_0___UpdateFromServerData_b__5(
        WarBoardPieceData___c__DisplayClass316_0_o *this,
        const MethodInfo *method)
{
  this->fields.popupClose = 1;
}