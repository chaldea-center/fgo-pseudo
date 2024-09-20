void __fastcall WarBoardPieceData___cctor(const MethodInfo *method)
{
  if ( (byte_4A58F6A & 1) == 0 )
  {
    sub_1B885B0(&WarBoardPieceData_TypeInfo);
    byte_4A58F6A = 1;
  }
  *WarBoardPieceData_TypeInfo->static_fields = (struct WarBoardPieceData_StaticFields)xmmword_BB3C80;
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
  Il2CppObject *v16; // x27
  int32_t v17; // w2
  int32_t v18; // w3
  int64_t Master_object; // x0
  const MethodInfo *v20; // x1
  int32_t pieceIndex; // w27
  int32_t forceId; // w21
  int32_t groupId; // w28
  int32_t squareIndex; // w8
  struct System_Int32_array *Individuality; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t breakPoint; // w8
  int32_t restrictionId; // w8
  struct BattleServantData_o **p_battleServant_k__BackingField; // x25
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t TurnCount; // w0
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x8
  WarBoardStagePieceDetailEntity_o *v37; // x8
  int32_t type_k__BackingField; // w8
  struct WarBoardUserMasterData_o **p_serverMasterData_k__BackingField; // x27
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  Il2CppObject *v41; // x26
  const MethodInfo *v42; // x1
  WarBoardActionPointClassEntity_o *MasterEntityFromStageId; // x0
  struct WarBoardCost_o *v44; // x0
  struct WarBoardCost_o **p_Cost_k__BackingField; // x26
  int32_t v46; // w2
  int32_t v47; // w3
  struct WarBoardUserMasterData_o *v48; // x8
  struct WarBoardUserMasterData_o *v49; // x8
  int32_t defeatPoint; // w8
  Il2CppObject *Instance; // x0
  __int128 v52; // q1
  WarBoardManager_o *v53; // x26
  struct BattleServantData_o *BattleServant; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  int32_t v57; // w2
  int32_t v58; // w3
  Il2CppObject *v59; // x26
  const MethodInfo *v60; // x1
  WarBoardActionPointEntity_o *v61; // x27
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  struct WarBoardCost_o *v63; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  int32_t v66; // w8
  int32_t forceId_k__BackingField; // w9
  int64_t userEquipId; // x8
  __int64 v69; // x0
  __int64 v70; // x0
  __int64 v71; // x20
  __int64 v72; // x21
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t npcId; // x8
  __int64 v75; // x8
  int64_t npcSvtEquipId; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v78; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v80; // 0:x0.16

  if ( (byte_4A58F4E & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&WarBoardPieceData_PieceStatusCache_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&WarBoardPieceData_TypeInfo);
    byte_4A58F4E = 1;
  }
  v16 = (Il2CppObject *)sub_1B887FC(WarBoardPieceData_PieceStatusCache_TypeInfo);
  System_Object___ctor(v16, 0LL);
  this->fields.statusCache = (struct WarBoardPieceData_PieceStatusCache_o *)v16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.statusCache, (int32_t)v16, v17, v18);
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
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo);
  this->fields._uniqueIndex_k__BackingField = (unsigned __int16)pieceIndex | ((unsigned __int8)forceId << 24) | ((unsigned __int8)groupId << 16);
  squareIndex = layout->fields.squareIndex;
  this->fields._nowSquareIndex_k__BackingField = squareIndex;
  this->fields._PutSquareIndex_k__BackingField = squareIndex;
  Individuality = WarBoardStageLayoutEntity__GetIndividuality(layout, 0LL);
  this->fields._individuality_k__BackingField = Individuality;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._individuality_k__BackingField,
    (int32_t)Individuality,
    v26,
    v27);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._battleServant_k__BackingField, 0, v31, v32);
  this->fields._isDead_k__BackingField = 0;
  this->fields._isEditing_k__BackingField = 0;
  this->fields._isNotIncludeWin_k__BackingField = 0;
  this->fields._roleType_k__BackingField = 0;
  this->fields._IsDispConsumedPieceActionPoint_k__BackingField = 0;
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_85;
  if ( *(_QWORD *)(Master_object + 440) )
  {
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    v37 = this->fields.stagePieceDetailEntity;
    this->fields._roleType_k__BackingField = Master_object;
    if ( !v37 )
      goto LABEL_85;
    this->fields._isNotIncludeWin_k__BackingField = WarBoardStagePieceDetailEntity__IsNotIncludeWin(v37, 0LL);
  }
  type_k__BackingField = this->fields._type_k__BackingField;
  if ( masterData && type_k__BackingField == 1 )
  {
    this->fields._serverMasterData_k__BackingField = masterData;
    p_serverMasterData_k__BackingField = &this->fields._serverMasterData_k__BackingField;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields._serverMasterData_k__BackingField,
      (int32_t)masterData,
      v33,
      v34);
    serverMasterData_k__BackingField = this->fields._serverMasterData_k__BackingField;
    if ( !serverMasterData_k__BackingField )
      goto LABEL_85;
    this->fields._nowSquareIndex_k__BackingField = serverMasterData_k__BackingField->fields.squareIndex;
    *(int32x2_t *)&this->fields._limitActionCount_k__BackingField = vrev64_s32(*(int32x2_t *)&serverMasterData_k__BackingField->fields.currentLimitActionPoint);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v41 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    Master_object = (int64_t)WarBoardPieceData__get_ActionPointEntity(this, v42);
    if ( !v41 )
      goto LABEL_85;
    MasterEntityFromStageId = WarBoardActionPointClassMaster__GetMasterEntityFromStageId(
                                (WarBoardActionPointClassMaster_o *)v41,
                                (WarBoardActionPointEntity_o *)Master_object,
                                0LL);
    v44 = WarBoardCost__Create(MasterEntityFromStageId, this->fields.stagePieceDetailEntity, 0LL, 0LL);
    this->fields._Cost_k__BackingField = v44;
    p_Cost_k__BackingField = &this->fields._Cost_k__BackingField;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._Cost_k__BackingField, (int32_t)v44, v46, v47);
    v48 = this->fields._serverMasterData_k__BackingField;
    if ( !v48 )
      goto LABEL_85;
    Master_object = (int64_t)*p_Cost_k__BackingField;
    if ( !*p_Cost_k__BackingField )
      goto LABEL_85;
    WarBoardCost__UpdateCurrentPointByServerData(
      (WarBoardCost_o *)Master_object,
      v48->fields.currentPieceActionPoint,
      0LL);
    v49 = *p_serverMasterData_k__BackingField;
    if ( !*p_serverMasterData_k__BackingField )
      goto LABEL_85;
    this->fields._attackCount_k__BackingField = v49->fields.attackCount;
    defeatPoint = v49->fields.defeatPoint;
    this->fields._breakPoint_k__BackingField = defeatPoint;
    if ( defeatPoint <= 0 )
LABEL_40:
      this->fields._isDead_k__BackingField = 1;
  }
  else if ( servantData && !type_k__BackingField )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v52 = *(_OWORD *)&servantData->fields.id.fields.fakeValue;
    v53 = (WarBoardManager_o *)Instance;
    *(_OWORD *)&v79.fields.currentCryptoKey = *(_OWORD *)&servantData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v79.fields.fakeValue = v52;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v78 = v79;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v78, 0LL);
    if ( !v53 )
      goto LABEL_85;
    BattleServant = WarBoardManager__GetBattleServant(v53, Master_object, 0LL);
    this->fields._battleServant_k__BackingField = BattleServant;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields._battleServant_k__BackingField,
      (int32_t)BattleServant,
      v55,
      v56);
    this->fields.serverServantData = servantData;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.serverServantData, (int32_t)servantData, v57, v58);
    this->fields._nowSquareIndex_k__BackingField = servantData->fields.squareIndex;
    *(int32x2_t *)&this->fields._limitActionCount_k__BackingField = vrev64_s32(*(int32x2_t *)&servantData->fields.currentActionPoint);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v59 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    Master_object = (int64_t)WarBoardPieceData__get_ActionPointEntity(this, v60);
    if ( !this->fields._battleServant_k__BackingField )
      goto LABEL_85;
    v61 = (WarBoardActionPointEntity_o *)Master_object;
    Master_object = BattleServantData__getClassId(this->fields._battleServant_k__BackingField, 0LL);
    if ( !v59 )
      goto LABEL_85;
    EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                    (WarBoardActionPointClassMaster_o *)v59,
                                    v61,
                                    Master_object,
                                    0LL);
    v63 = WarBoardCost__Create(EntityFromActionPointEntity, this->fields.stagePieceDetailEntity, 0LL, 0LL);
    this->fields._Cost_k__BackingField = v63;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._Cost_k__BackingField, (int32_t)v63, v64, v65);
    Master_object = (int64_t)this->fields._Cost_k__BackingField;
    if ( !Master_object )
      goto LABEL_85;
    WarBoardCost__UpdateCurrentPointByServerData(
      (WarBoardCost_o *)Master_object,
      servantData->fields.currentPieceActionPoint,
      0LL);
    this->fields._attackCount_k__BackingField = servantData->fields.attackCount;
    v66 = servantData->fields.defeatPoint;
    this->fields._breakPoint_k__BackingField = v66;
    if ( (v66 & 0x80000000) != 0 )
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
                                 (const MethodInfo_31FFD90 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    }
    else
    {
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
      sub_1B8880C(Master_object, v20);
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
    v69 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v69 + 309) & 1) == 0 )
      v69 = sub_1BDA48C(v69);
    v70 = *(_QWORD *)(*(_QWORD *)(v69 + 192) + 16LL);
    if ( (*(_BYTE *)(v70 + 309) & 1) == 0 )
      v70 = sub_1BDA48C(v70);
    Master_object = **(_QWORD **)(v70 + 184);
    if ( !Master_object )
      goto LABEL_85;
    Master_object = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEquipMaster___);
    if ( !Master_object )
      goto LABEL_85;
    Master_object = (int64_t)DataMasterBase_object__object__long___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                               this->fields._CurrentUserEquipId_k__BackingField,
                               (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    if ( !Master_object )
      goto LABEL_85;
    v72 = *(_QWORD *)(Master_object + 32);
    v71 = *(_QWORD *)(Master_object + 40);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v80.fields.currentCryptoKey = v72;
    *(_QWORD *)&v80.fields.fakeValue = v71;
    this->fields._iconId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v80, 0LL);
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
                                     (const MethodInfo_31FFD90 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
        }
        else
        {
          Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
          v75 = *(_QWORD *)(Master_object + 48);
          if ( !v75 )
            goto LABEL_85;
          if ( *(_DWORD *)(v75 + 24) <= (unsigned int)npcIdx )
            sub_1B88814(Master_object, v20);
          npcId = *(_QWORD *)(v75 + 8LL * (unsigned int)npcIdx + 32);
        }
        this->fields._npcId_k__BackingField = npcId;
        npcSvtEquipId = servantData->fields.npcSvtEquipId;
        this->fields._isEditing_k__BackingField = 1;
        this->fields._npcEquipId_k__BackingField = npcSvtEquipId;
      }
LABEL_83:
      WarBoardPieceData__SetServantIconData(this, v20);
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


void __fastcall WarBoardPieceData___ctor_35558468(
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
  Il2CppObject *v17; // x27
  int32_t v18; // w2
  int32_t v19; // w3
  int64_t Instance; // x0
  const MethodInfo *v21; // x1
  int32_t id; // w8
  int32_t v23; // w8
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
  Il2CppObject *v35; // x0
  __int128 v36; // q0
  WarBoardManager_o *v37; // x24
  struct BattleServantData_o *BattleServant; // x0
  struct BattleServantData_o **p_battleServant_k__BackingField; // x24
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t v42; // w2
  int32_t v43; // w3
  int32_t v44; // w8
  Il2CppObject *Master_object; // x25
  const MethodInfo *v46; // x1
  WarBoardActionPointEntity_o *v47; // x26
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  struct WarBoardCost_o *v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  int32_t forceId_k__BackingField; // w9
  int defeatPoint; // w8
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t npcId; // x8
  __int64 v56; // x8
  int64_t npcSvtEquipId; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v58; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v59; // [xsp+20h] [xbp-90h]
  int32_t value; // [xsp+4Ch] [xbp-64h] BYREF

  if ( (byte_4A58F4F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&WarBoardPieceData_PieceStatusCache_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&WarBoardPieceData_TypeInfo);
    byte_4A58F4F = 1;
  }
  value = 0;
  v17 = (Il2CppObject *)sub_1B887FC(WarBoardPieceData_PieceStatusCache_TypeInfo);
  System_Object___ctor(v17, 0LL);
  this->fields.statusCache = (struct WarBoardPieceData_PieceStatusCache_o *)v17;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.statusCache, (int32_t)v17, v18, v19);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !stageReinforcementsEntity )
    goto LABEL_53;
  this->fields.stageId = stageReinforcementsEntity->fields.warBoardStageId;
  id = stageReinforcementsEntity->fields.id;
  this->fields._ReinfoIndex_k__BackingField = reinfoIndex;
  this->fields._StageReinfoId_k__BackingField = id;
  if ( !reinfoEntity )
    goto LABEL_53;
  v23 = reinfoEntity->fields.id;
  this->fields._type_k__BackingField = 0;
  this->fields._ReinfoId_k__BackingField = v23;
  if ( !servantData )
    goto LABEL_53;
  forceId = servantData->fields.forceId;
  this->fields._forceId_k__BackingField = forceId;
  groupId = servantData->fields.groupId;
  this->fields._groupId_k__BackingField = groupId;
  pieceIndex = servantData->fields.pieceIndex;
  this->fields._index_k__BackingField = pieceIndex;
  if ( !WarBoardPieceData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo);
  this->fields._nowSquareIndex_k__BackingField = squareIndex;
  this->fields._PutSquareIndex_k__BackingField = squareIndex;
  this->fields._uniqueIndex_k__BackingField = (forceId << 24) | ((unsigned __int8)groupId << 16) | (unsigned __int16)pieceIndex;
  *(_QWORD *)&this->fields._overwriteActionType_k__BackingField = -1LL;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  if ( *(_QWORD *)(Instance + 440) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
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
  v35 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v36 = *(_OWORD *)&servantData->fields.id.fields.fakeValue;
  v37 = (WarBoardManager_o *)v35;
  *(_OWORD *)&v59.fields.currentCryptoKey = *(_OWORD *)&servantData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v59.fields.fakeValue = v36;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v58 = v59;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v58, 0LL);
  if ( !v37 )
    goto LABEL_53;
  BattleServant = WarBoardManager__GetBattleServant(v37, Instance, 0LL);
  this->fields._battleServant_k__BackingField = BattleServant;
  p_battleServant_k__BackingField = &this->fields._battleServant_k__BackingField;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._battleServant_k__BackingField,
    (int32_t)BattleServant,
    v40,
    v41);
  this->fields.serverServantData = servantData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.serverServantData, (int32_t)servantData, v42, v43);
  v44 = servantData->fields.squareIndex;
  this->fields._nowSquareIndex_k__BackingField = v44;
  this->fields._PutSquareIndex_k__BackingField = v44;
  *(int32x2_t *)&this->fields._limitActionCount_k__BackingField = vrev64_s32(*(int32x2_t *)&servantData->fields.currentActionPoint);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
  Instance = (int64_t)WarBoardPieceData__get_ActionPointEntity(this, v46);
  if ( !this->fields._battleServant_k__BackingField
    || (v47 = (WarBoardActionPointEntity_o *)Instance,
        Instance = BattleServantData__getClassId(this->fields._battleServant_k__BackingField, 0LL),
        !Master_object)
    || (EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                        (WarBoardActionPointClassMaster_o *)Master_object,
                                        v47,
                                        Instance,
                                        0LL),
        v49 = WarBoardCost__Create(EntityFromActionPointEntity, this->fields.stagePieceDetailEntity, reinfoEntity, 0LL),
        this->fields._Cost_k__BackingField = v49,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._Cost_k__BackingField, (int32_t)v49, v50, v51),
        (Instance = (int64_t)this->fields._Cost_k__BackingField) == 0) )
  {
LABEL_53:
    sub_1B8880C(Instance, v21);
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
                            (const MethodInfo_31FFD90 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    }
    else
    {
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    v56 = *(_QWORD *)(Instance + 48);
    if ( !v56 )
      goto LABEL_53;
    if ( *(_DWORD *)(v56 + 24) > (unsigned int)npcIdx )
    {
      npcId = *(_QWORD *)(v56 + 8LL * (unsigned int)npcIdx + 32);
      goto LABEL_51;
    }
LABEL_54:
    sub_1B88814(Instance, v21);
  }
LABEL_52:
  WarBoardPieceData__SetServantIconData(this, v21);
}


void __fastcall WarBoardPieceData___ctor_35559676(
        WarBoardPieceData_o *this,
        int32_t stageId,
        WarBoardUserServantData_o *servantData,
        WarBoardPieceData_SaveData_o *saveData,
        System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *npcDict,
        int32_t npcIdx,
        const MethodInfo *method)
{
  Il2CppObject *v13; // x25
  int32_t v14; // w2
  int32_t v15; // w3
  int64_t Master_object; // x0
  const MethodInfo *v17; // x1
  struct System_Int32_array *reinforcementsIds; // x8
  __int64 ReinfoIndex_k__BackingField; // x9
  WarBoardReinforcementsEntity_o *v20; // x8
  int32_t id; // w9
  int32_t forceId; // w26
  int32_t groupId; // w27
  int32_t pieceIndex; // w28
  int32_t squareIndex; // w9
  struct WarBoardStagePieceDetailEntity_o **p_stagePieceDetailEntity; // x24
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x8
  bool IsNotIncludeWin; // w8
  int32_t actionType; // w8
  __int128 v30; // q1
  WarBoardManager_o *v31; // x23
  struct BattleServantData_o *BattleServant; // x0
  struct BattleServantData_o **p_battleServant_k__BackingField; // x23
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w2
  int32_t v37; // w3
  int32_t v38; // w8
  Il2CppObject *v39; // x24
  const MethodInfo *v40; // x1
  WarBoardActionPointEntity_o *v41; // x25
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  struct WarBoardCost_o *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  int32_t forceId_k__BackingField; // w9
  int defeatPoint; // w8
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t npcId; // x8
  __int64 v50; // x8
  int64_t npcSvtEquipId; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v52; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+20h] [xbp-90h]
  int32_t value; // [xsp+44h] [xbp-6Ch] BYREF
  WarBoardReinforcementsEntity_o *reinforcementsEntity; // [xsp+48h] [xbp-68h] BYREF
  WarBoardStageReinforcementsEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_4A58F50 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&WarBoardPieceData_PieceStatusCache_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&WarBoardPieceData_TypeInfo);
    byte_4A58F50 = 1;
  }
  entity = 0LL;
  reinforcementsEntity = 0LL;
  value = 0;
  v13 = (Il2CppObject *)sub_1B887FC(WarBoardPieceData_PieceStatusCache_TypeInfo);
  System_Object___ctor(v13, 0LL);
  this->fields.statusCache = (struct WarBoardPieceData_PieceStatusCache_o *)v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.statusCache, (int32_t)v13, v14, v15);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.stageId = stageId;
  if ( !saveData )
    goto LABEL_54;
  *(_QWORD *)&this->fields._StageReinfoId_k__BackingField = *(_QWORD *)&saveData->fields.stageReinforcementId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
  if ( !Master_object )
    goto LABEL_54;
  WarBoardStageReinforcementsMaster__TryGetEntity(
    (WarBoardStageReinforcementsMaster_o *)Master_object,
    &entity,
    stageId,
    this->fields._StageReinfoId_k__BackingField,
    0LL);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
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
  v20 = reinforcementsEntity;
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
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo);
    v20 = reinforcementsEntity;
  }
  this->fields._uniqueIndex_k__BackingField = (forceId << 24) | ((unsigned __int8)groupId << 16) | (unsigned __int16)pieceIndex;
  squareIndex = saveData->fields.squareIndex;
  this->fields._nowSquareIndex_k__BackingField = squareIndex;
  this->fields._PutSquareIndex_k__BackingField = squareIndex;
  *(_QWORD *)&this->fields._overwriteActionType_k__BackingField = *(_QWORD *)&saveData->fields.overwriteActionType;
  this->fields._entryTurn_k__BackingField = saveData->fields.entryTurn;
  if ( !v20 )
    goto LABEL_54;
  this->fields._breakPointMax_k__BackingField = v20->fields.breakPoint;
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
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
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !servantData )
    goto LABEL_54;
  v30 = *(_OWORD *)&servantData->fields.id.fields.fakeValue;
  v31 = (WarBoardManager_o *)Master_object;
  *(_OWORD *)&v53.fields.currentCryptoKey = *(_OWORD *)&servantData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v53.fields.fakeValue = v30;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v52 = v53;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v52, 0LL);
  if ( !v31 )
    goto LABEL_54;
  BattleServant = WarBoardManager__GetBattleServant(v31, Master_object, 0LL);
  this->fields._battleServant_k__BackingField = BattleServant;
  p_battleServant_k__BackingField = &this->fields._battleServant_k__BackingField;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._battleServant_k__BackingField,
    (int32_t)BattleServant,
    v34,
    v35);
  this->fields.serverServantData = servantData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.serverServantData, (int32_t)servantData, v36, v37);
  v38 = servantData->fields.squareIndex;
  this->fields._nowSquareIndex_k__BackingField = v38;
  this->fields._PutSquareIndex_k__BackingField = v38;
  *(int32x2_t *)&this->fields._limitActionCount_k__BackingField = vrev64_s32(*(int32x2_t *)&servantData->fields.currentActionPoint);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v39 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
  Master_object = (int64_t)WarBoardPieceData__get_ActionPointEntity(this, v40);
  if ( !this->fields._battleServant_k__BackingField
    || (v41 = (WarBoardActionPointEntity_o *)Master_object,
        Master_object = BattleServantData__getClassId(this->fields._battleServant_k__BackingField, 0LL),
        !v39)
    || (EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                        (WarBoardActionPointClassMaster_o *)v39,
                                        v41,
                                        Master_object,
                                        0LL),
        v43 = WarBoardCost__Create(
                EntityFromActionPointEntity,
                this->fields.stagePieceDetailEntity,
                reinforcementsEntity,
                0LL),
        this->fields._Cost_k__BackingField = v43,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._Cost_k__BackingField, (int32_t)v43, v44, v45),
        (Master_object = (int64_t)this->fields._Cost_k__BackingField) == 0) )
  {
LABEL_54:
    sub_1B8880C(Master_object, v17);
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
                                 (const MethodInfo_31FFD90 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    }
    else
    {
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    v50 = *(_QWORD *)(Master_object + 48);
    if ( !v50 )
      goto LABEL_54;
    if ( *(_DWORD *)(v50 + 24) > (unsigned int)npcIdx )
    {
      npcId = *(_QWORD *)(v50 + 8LL * (unsigned int)npcIdx + 32);
      goto LABEL_52;
    }
LABEL_55:
    sub_1B88814(Master_object, v17);
  }
LABEL_53:
  WarBoardPieceData__SetServantIconData(this, v17);
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
    sub_1B8880C(Cost_k__BackingField, method);
  }
  ((void (__fastcall *)(WarBoardCost_o *, void *))Cost_k__BackingField->klass[1]._1.typeMetadataHandle)(
    Cost_k__BackingField,
    Cost_k__BackingField->klass[1]._1.interopData);
}


void __fastcall WarBoardPieceData__ActivateCacheMode(WarBoardPieceData_o *this, bool flg, const MethodInfo *method)
{
  struct WarBoardPieceData_PieceStatusCache_o *statusCache; // x8

  statusCache = this->fields.statusCache;
  if ( !statusCache )
    sub_1B8880C(this, flg);
  *(_DWORD *)&statusCache->fields._HasAvailablePermanentSleepBuff_k__BackingField.fields.hasValue = 0;
  statusCache->fields._IsEnabled_k__BackingField = flg;
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
      sub_1B8880C(0LL, count);
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
    sub_1B8880C(0LL, squareIndex);
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
    sub_1B8880C(0LL, squareIndex);
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
          sub_1B8880C(this, enemyIcon);
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


void __fastcall WarBoardPieceData__Attack(WarBoardPieceData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_1B8880C(0LL, squareIndex);
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
      sub_1B8880C(Cost_k__BackingField, method);
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
    sub_1B8880C(0LL, squareIndex);
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
    sub_1B8880C(pieceComponent, method);
  }
}


bool __fastcall WarBoardPieceData__CheckWallAttackCond(
        WarBoardPieceData_o *this,
        WarBoardWallData_o *targetWall,
        const MethodInfo *method)
{
  struct WarBoardStageWallEntity_o *wallEntity; // x8
  int32_t attackForceId; // w8
  _QWORD *v7; // x21
  __int64 v8; // x8
  __int64 v9; // x0
  System_Int32_array *CondAttackIndividuality; // x0
  System_Int32_array *v11; // x20
  System_Int32_array *Individuality; // x0
  __int64 v13; // x1
  __int64 v14; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x19
  unsigned __int64 v16; // x21

  if ( (byte_4A58F57 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4A58F57 = 1;
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
  v7 = Method_System_Array_Empty_int___;
  v8 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v8 )
  {
    sub_1BDA4E8(Method_System_Array_Empty_int___);
    v8 = v7[7];
  }
  v9 = *(_QWORD *)(v8 + 16);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BDA48C(v9);
  if ( !*(_DWORD *)(v9 + 224) )
    j_il2cpp_runtime_class_init_0(v9);
  CondAttackIndividuality = *(System_Int32_array **)(v7[7] + 16LL);
  if ( (CondAttackIndividuality->m_Items[70] & 0x100) == 0 )
    CondAttackIndividuality = (System_Int32_array *)sub_1BDA48C(CondAttackIndividuality);
  if ( targetWall->fields.wallEntity )
  {
    CondAttackIndividuality = WarBoardStageWallEntity__GetCondAttackIndividuality(targetWall->fields.wallEntity, 0LL);
    v11 = CondAttackIndividuality;
    if ( CondAttackIndividuality )
      goto LABEL_17;
LABEL_27:
    sub_1B8880C(CondAttackIndividuality, targetWall);
  }
  v11 = **(System_Int32_array ***)&CondAttackIndividuality->m_Items[39];
  if ( !v11 )
    goto LABEL_27;
LABEL_17:
  if ( !*(_QWORD *)&v11->max_length )
  {
    LOBYTE(Individuality) = 1;
    return (unsigned __int8)Individuality & 1;
  }
  Individuality = WarBoardPieceData__GetIndividuality(this, 0LL, method);
  v14 = *(_QWORD *)&v11->max_length;
  if ( (int)v14 < 1 )
    goto LABEL_24;
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)Individuality;
  v16 = 0LL;
  do
  {
    if ( v16 >= (unsigned int)v14 )
      sub_1B88814(Individuality, v13);
    Individuality = (System_Int32_array *)System_Linq_Enumerable__Contains_int_(
                                            v15,
                                            v11->m_Items[v16 + 1],
                                            (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
    if ( ((unsigned __int8)Individuality & 1) != 0 )
      break;
    LODWORD(v14) = v11->max_length;
    ++v16;
  }
  while ( (__int64)v16 < (int)v14 );
  return (unsigned __int8)Individuality & 1;
}


void __fastcall WarBoardPieceData__ClearPartyBuff(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x9
  __int64 methodPtr_low; // x12
  UnityEngine_Object_o *v5; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A58F5F & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&WarBoardServantPieceComponent_TypeInfo);
    byte_4A58F5F = 1;
  }
  pieceComponent = this->fields.pieceComponent;
  if ( pieceComponent
    && (methodPtr_low = LOBYTE(WarBoardServantPieceComponent_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(pieceComponent->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (WarBoardServantPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[methodPtr_low - 1] == WarBoardServantPieceComponent_TypeInfo )
      v5 = (UnityEngine_Object_o *)this->fields.pieceComponent;
    else
      v5 = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(v5, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !v5 )
      sub_1B8880C(v6, v7);
    WarBoardServantPieceComponent__ClearPartyBuff((WarBoardServantPieceComponent_o *)v5, 0LL);
  }
}


void __fastcall WarBoardPieceData__ClearPrevAiRoute(WarBoardPieceData_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3

  this->fields._PrevAiRoute_k__BackingField = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields._PrevAiRoute_k__BackingField, 0, v2, v3);
}


System_Int32_array *__fastcall WarBoardPieceData__CreatePieceEventVals(
        WarBoardPieceData_o *this,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  __int64 v4; // x1
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4A58F69 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    byte_4A58F69 = 1;
  }
  result = (System_Int32_array *)sub_1B88658(int___TypeInfo, 3LL);
  if ( !result )
    sub_1B8880C(0LL, v4);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = this->fields._forceId_k__BackingField, max_length == 1)
    || (result->m_Items[2] = this->fields._groupId_k__BackingField, max_length <= 2) )
  {
    sub_1B88814(result, v4);
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
    sub_1B8880C(0LL, method);
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
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  unsigned int breakPoint_k__BackingField; // w22
  unsigned int v7; // w21
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  if ( (byte_4A58F5A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_WarBoardMessageMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&WarBoardManager_TaskList_TypeInfo);
    byte_4A58F5A = 1;
  }
  v3 = (WarBoardManager_TaskList_o *)sub_1B887FC(WarBoardManager_TaskList_TypeInfo);
  WarBoardManager_TaskList___ctor(v3, v4);
  breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
  v7 = breakPoint_k__BackingField - 1;
  if ( (int)(breakPoint_k__BackingField - 1) < 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
    pieceComponent = this->fields.pieceComponent;
    if ( pieceComponent )
    {
      ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, _QWORD, _QWORD, __int64, Il2CppMethodPointer))pieceComponent->klass->vtable._31_OnBreak.method)(
        pieceComponent,
        breakPoint_k__BackingField,
        0LL,
        v3,
        v7,
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
LABEL_12:
    sub_1B8880C(pieceComponent, v5);
  }
  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    goto LABEL_12;
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, _QWORD, _QWORD, __int64, Il2CppMethodPointer))pieceComponent->klass->vtable._31_OnBreak.method)(
    pieceComponent,
    breakPoint_k__BackingField,
    0LL,
    v3,
    v7,
    0LL,
    1LL,
    pieceComponent->klass->vtable._32_OnDead.methodPtr);
  return v3;
}


void __fastcall WarBoardPieceData__Deselect(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardData_o *pieceComponent; // x0
  WarBoardSquareData_o *Square; // x0

  if ( (byte_4A58F59 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4A58F59 = 1;
  }
  pieceComponent = (WarBoardData_o *)this->fields.pieceComponent;
  if ( !pieceComponent )
    goto LABEL_10;
  ((void (__fastcall *)(WarBoardData_o *, Il2CppMethodPointer))pieceComponent->klass[1].vtable._0_Equals.method)(
    pieceComponent,
    pieceComponent->klass[1].vtable._1_Finalize.methodPtr);
  pieceComponent = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1B8880C(pieceComponent, method);
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
      sub_1B8880C(0LL, *(_QWORD *)&substructPoint);
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
      sub_1B8880C(0LL, *(_QWORD *)&substructPoint);
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
      sub_1B8880C(0LL, *(_QWORD *)&substructPoint);
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
      sub_1B8880C(0LL, *(_QWORD *)&substructPoint);
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
    sub_1B8880C(Cost_k__BackingField, method);
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
  System_Func_T__TResult__o *_9__340_0; // x20
  Il2CppObject *v7; // x21
  struct WarBoardPieceData___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0
  BuffList_TYPE_array *result; // x0
  _QWORD *v13; // x19
  __int64 v14; // x8
  __int64 v15; // x0
  __int64 v16; // x0

  if ( (byte_4A58F67 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_BuffList_TYPE___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_int__BuffList_TYPE___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_BuffList_TYPE___);
    sub_1B885B0(&System_Func_int__BuffList_TYPE__TypeInfo);
    sub_1B885B0(&Method_WarBoardPieceData___c__GetBuffTypesFromConstantStr_b__340_0__);
    sub_1B885B0(&WarBoardPieceData___c_TypeInfo);
    byte_4A58F67 = 1;
  }
  ValueAsIntArray = ConstantStrMaster__GetValueAsIntArray(key, 0LL);
  if ( !ValueAsIntArray )
    goto LABEL_11;
  v4 = (System_Collections_Generic_IEnumerable_TSource__o *)ValueAsIntArray;
  v5 = WarBoardPieceData___c_TypeInfo;
  if ( !WarBoardPieceData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceData___c_TypeInfo);
    v5 = WarBoardPieceData___c_TypeInfo;
  }
  _9__340_0 = (System_Func_T__TResult__o *)v5->static_fields->__9__340_0;
  if ( !_9__340_0 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = WarBoardPieceData___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v5->static_fields->__9;
    _9__340_0 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_int__BuffList_TYPE__TypeInfo);
    System_Func_int__Int32Enum____ctor(
      _9__340_0,
      v7,
      Method_WarBoardPieceData___c__GetBuffTypesFromConstantStr_b__340_0__,
      0LL);
    static_fields = WarBoardPieceData___c_TypeInfo->static_fields;
    static_fields->__9__340_0 = (struct System_Func_int__BuffList_TYPE__o *)_9__340_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__340_0, (int32_t)_9__340_0, v9, v10);
  }
  v11 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__Int32Enum_(
                                                               v4,
                                                               (System_Func_TSource__TResult__o *)_9__340_0,
                                                               (const MethodInfo_2EAD9D4 *)Method_System_Linq_Enumerable_Select_int__BuffList_TYPE___);
  result = (BuffList_TYPE_array *)System_Linq_Enumerable__ToArray_Int32Enum_(
                                    v11,
                                    (const MethodInfo_2EB85D4 *)Method_System_Linq_Enumerable_ToArray_BuffList_TYPE___);
  if ( !result )
  {
LABEL_11:
    v13 = Method_System_Array_Empty_BuffList_TYPE___;
    v14 = *((_QWORD *)Method_System_Array_Empty_BuffList_TYPE___ + 7);
    if ( !v14 )
    {
      sub_1BDA4E8(Method_System_Array_Empty_BuffList_TYPE___);
      v14 = v13[7];
    }
    v15 = *(_QWORD *)(v14 + 16);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1BDA48C(v15);
    if ( !*(_DWORD *)(v15 + 224) )
      j_il2cpp_runtime_class_init_0(v15);
    v16 = *(_QWORD *)(v13[7] + 16LL);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1BDA48C(v16);
    return **(BuffList_TYPE_array ***)(v16 + 184);
  }
  return result;
}


int32_t __fastcall WarBoardPieceData__GetDeadEffectType(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardReinforcementsMaster_o *Master_object; // x0
  __int64 v4; // x1
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x0
  int32_t value; // [xsp+4h] [xbp-2Ch] BYREF
  WarBoardReinforcementsEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A58F62 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A58F62 = 1;
  }
  entity = 0LL;
  value = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  if ( !Master_object )
    goto LABEL_13;
  if ( !WarBoardReinforcementsMaster__TryGetEntity(Master_object, &entity, this->fields._ReinfoId_k__BackingField, 0LL) )
    goto LABEL_10;
  Master_object = (WarBoardReinforcementsMaster_o *)entity;
  if ( !entity )
LABEL_13:
    sub_1B8880C(Master_object, v4);
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
  System_Collections_Generic_List_int__o *v5; // x20
  BattleServantData_o *battleServant_k__BackingField; // x0
  bool IsIncludeIgnoreIndividuality; // w2
  bool IsIgnoreIndivUnreleasable; // w3
  bool v9; // w4
  System_Int32_array *ConcatServantAndBuffIndividualityies; // x0
  __int64 v11; // x1

  if ( (byte_4A58F49 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    byte_4A58F49 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
  if ( battleServant_k__BackingField )
  {
    if ( args )
    {
      IsIncludeIgnoreIndividuality = args->fields.IsIncludeIgnoreIndividuality;
      IsIgnoreIndivUnreleasable = args->fields.IsIgnoreIndivUnreleasable;
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
      sub_1B8880C(ConcatServantAndBuffIndividualityies, v11);
    System_Collections_Generic_List_int___AddRange(
      v5,
      (System_Collections_Generic_IEnumerable_T__o *)ConcatServantAndBuffIndividualityies,
      (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
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
      (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
      sub_1B8880C(Cost_k__BackingField, method);
    }
    return this->fields._limitActionCount_k__BackingField;
  }
  return result;
}


int32_t __fastcall WarBoardPieceData__GetMoveAfterAttack(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardReinforcementsMaster_o *Master_object; // x0
  __int64 v4; // x1
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x0
  int32_t type; // [xsp+4h] [xbp-2Ch] BYREF
  WarBoardReinforcementsEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A58F63 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A58F63 = 1;
  }
  entity = 0LL;
  type = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  if ( !Master_object )
    goto LABEL_13;
  if ( !WarBoardReinforcementsMaster__TryGetEntity(Master_object, &entity, this->fields._ReinfoId_k__BackingField, 0LL) )
    goto LABEL_10;
  Master_object = (WarBoardReinforcementsMaster_o *)entity;
  if ( !entity )
LABEL_13:
    sub_1B8880C(Master_object, v4);
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
  WarBoardReinforcementsMaster_o *Master_object; // x0
  __int64 v4; // x1
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x0
  int32_t type; // [xsp+4h] [xbp-2Ch] BYREF
  WarBoardReinforcementsEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A58F64 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A58F64 = 1;
  }
  entity = 0LL;
  type = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  if ( !Master_object )
    goto LABEL_13;
  if ( !WarBoardReinforcementsMaster__TryGetEntity(Master_object, &entity, this->fields._ReinfoId_k__BackingField, 0LL) )
    goto LABEL_10;
  Master_object = (WarBoardReinforcementsMaster_o *)entity;
  if ( !entity )
LABEL_13:
    sub_1B8880C(Master_object, v4);
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
  BattleServantData_o *battleServant_k__BackingField; // x0
  struct WarBoardPieceData_PieceStatusCache_o *statusCache; // x20
  bool v5; // zf
  bool HasAvailablePermanentSleepBuff; // w1
  __int16 *v7; // x0
  __int16 *p_HasAvailablePermanentSleepBuff_k__BackingField; // x0
  struct System_Nullable_bool__o v10; // [xsp+8h] [xbp-18h] BYREF
  struct System_Nullable_bool__o HasAvailablePermanentSleepBuff_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4A58F55 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Nullable_bool___ctor__);
    sub_1B885B0(&Method_System_Nullable_bool__get_HasValue__);
    sub_1B885B0(&Method_System_Nullable_bool__get_Value__);
    byte_4A58F55 = 1;
  }
  HasAvailablePermanentSleepBuff_k__BackingField = 0;
  battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
  if ( battleServant_k__BackingField )
  {
    statusCache = this->fields.statusCache;
    if ( !statusCache )
      goto LABEL_11;
    if ( !statusCache->fields._IsEnabled_k__BackingField
      || (v5 = (unsigned __int8)*(_WORD *)&statusCache->fields._HasAvailablePermanentSleepBuff_k__BackingField == 0,
          HasAvailablePermanentSleepBuff_k__BackingField = statusCache->fields._HasAvailablePermanentSleepBuff_k__BackingField,
          v5) )
    {
      HasAvailablePermanentSleepBuff = BattleServantData__HasAvailablePermanentSleepBuff(
                                         battleServant_k__BackingField,
                                         0LL);
      v7 = (__int16 *)&v10;
      v10 = 0;
      System_Nullable_bool____ctor(
        (System_Nullable_bool__o)v7,
        HasAvailablePermanentSleepBuff,
        (const MethodInfo_3616764 *)Method_System_Nullable_bool___ctor__);
      statusCache->fields._HasAvailablePermanentSleepBuff_k__BackingField = v10;
      statusCache = this->fields.statusCache;
      if ( !statusCache )
LABEL_11:
        sub_1B8880C(battleServant_k__BackingField, method);
    }
    p_HasAvailablePermanentSleepBuff_k__BackingField = (__int16 *)&HasAvailablePermanentSleepBuff_k__BackingField;
    HasAvailablePermanentSleepBuff_k__BackingField = statusCache->fields._HasAvailablePermanentSleepBuff_k__BackingField;
    LOBYTE(battleServant_k__BackingField) = System_Nullable_bool___get_Value(
                                              (System_Nullable_bool__o)p_HasAvailablePermanentSleepBuff_k__BackingField,
                                              (const MethodInfo_3616780 *)Method_System_Nullable_bool__get_Value__);
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
  bool v4; // zf
  struct WarBoardPieceData_PieceStatusCache_o *v5; // x20
  bool HasAnyBuffByBuffTypes; // w1
  __int16 *v7; // x0
  __int16 *p_HasCompletelyActionDisabledBuff_k__BackingField; // x0
  struct System_Nullable_bool__o v11; // [xsp+8h] [xbp-18h] BYREF
  struct System_Nullable_bool__o HasCompletelyActionDisabledBuff_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_4A58F56 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Nullable_bool___ctor__);
    sub_1B885B0(&Method_System_Nullable_bool__get_HasValue__);
    sub_1B885B0(&Method_System_Nullable_bool__get_Value__);
    sub_1B885B0(&WarBoardPieceData_TypeInfo);
    this = (WarBoardPieceData_o *)sub_1B885B0(&StringLiteral_15479/*"WAR_BOARD_ACTION_DISABLED_BUFF_TYPES"*/);
    byte_4A58F56 = 1;
  }
  HasCompletelyActionDisabledBuff_k__BackingField = 0;
  if ( v2->fields._battleServant_k__BackingField )
  {
    statusCache = v2->fields.statusCache;
    if ( !statusCache )
      goto LABEL_16;
    if ( !statusCache->fields._IsEnabled_k__BackingField
      || (v4 = (unsigned __int8)*(_WORD *)&statusCache->fields._HasCompletelyActionDisabledBuff_k__BackingField == 0,
          HasCompletelyActionDisabledBuff_k__BackingField = statusCache->fields._HasCompletelyActionDisabledBuff_k__BackingField,
          v4) )
    {
      if ( !WarBoardPieceData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo);
      this = (WarBoardPieceData_o *)WarBoardPieceData__GetBuffTypesFromConstantStr(
                                      (System_String_o *)StringLiteral_15479/*"WAR_BOARD_ACTION_DISABLED_BUFF_TYPES"*/,
                                      method);
      if ( !v2->fields._battleServant_k__BackingField
        || (v5 = v2->fields.statusCache,
            HasAnyBuffByBuffTypes = BattleServantData__HasAnyBuffByBuffTypes(
                                      v2->fields._battleServant_k__BackingField,
                                      (BuffList_TYPE_array *)this,
                                      0LL),
            v7 = (__int16 *)&v11,
            v11 = 0,
            System_Nullable_bool____ctor(
              (System_Nullable_bool__o)v7,
              HasAnyBuffByBuffTypes,
              (const MethodInfo_3616764 *)Method_System_Nullable_bool___ctor__),
            !v5)
        || (v5->fields._HasCompletelyActionDisabledBuff_k__BackingField = v11,
            (statusCache = v2->fields.statusCache) == 0LL) )
      {
LABEL_16:
        sub_1B8880C(this, method);
      }
    }
    p_HasCompletelyActionDisabledBuff_k__BackingField = (__int16 *)&HasCompletelyActionDisabledBuff_k__BackingField;
    HasCompletelyActionDisabledBuff_k__BackingField = statusCache->fields._HasCompletelyActionDisabledBuff_k__BackingField;
    return System_Nullable_bool___get_Value(
             (System_Nullable_bool__o)p_HasCompletelyActionDisabledBuff_k__BackingField,
             (const MethodInfo_3616780 *)Method_System_Nullable_bool__get_Value__);
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
  __int64 v3; // x20
  WarBoardData_o *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x1
  WarBoardSquareData_o *Square; // x0
  System_Collections_Generic_IEnumerable_TSource__o *linkedSquares; // x21
  System_Func_T__TResult__o *v11; // x22
  System_Collections_Generic_IEnumerable_T__o *v12; // x0
  System_Collections_Generic_IEnumerable_T__o *v13; // x0
  System_Object_array *v14; // x20
  System_Func_object__bool__o *v15; // x21
  WarBoardCost_o *Cost_k__BackingField; // x0
  bool CanAction; // w8
  bool result; // w0

  if ( (byte_4A58F4B & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_WarBoardWallData___);
    sub_1B885B0(&Method_BasicHelper_ExcludeNull_WarBoardWallData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_int__WarBoardWallData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_WarBoardWallData___);
    sub_1B885B0(&System_Func_WarBoardWallData__bool__TypeInfo);
    sub_1B885B0(&System_Func_int__WarBoardWallData__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&Method_WarBoardPieceData___c__DisplayClass223_0__HasVitalityToDoAnyActions_b__0__);
    sub_1B885B0(&WarBoardPieceData___c__DisplayClass223_0_TypeInfo);
    sub_1B885B0(&Method_WarBoardPieceData_CheckWallAttackCond__);
    byte_4A58F4B = 1;
  }
  v3 = sub_1B887FC(WarBoardPieceData___c__DisplayClass223_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  if ( !v3 )
    goto LABEL_19;
  playedStageReinforcementsList = Instance[1].fields.playedStageReinforcementsList;
  *(_QWORD *)(v3 + 16) = playedStageReinforcementsList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 16), (int32_t)playedStageReinforcementsList, v6, v7);
  Instance = *(WarBoardData_o **)(v3 + 16);
  if ( !Instance )
    goto LABEL_19;
  Square = WarBoardData__GetSquare(Instance, this->fields._nowSquareIndex_k__BackingField, 0LL);
  if ( Square
    && (linkedSquares = (System_Collections_Generic_IEnumerable_TSource__o *)Square->fields.linkedSquares) != 0LL )
  {
    v11 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_int__WarBoardWallData__TypeInfo);
    System_Func_int__object____ctor(
      v11,
      (Il2CppObject *)v3,
      Method_WarBoardPieceData___c__DisplayClass223_0__HasVitalityToDoAnyActions_b__0__,
      0LL);
    v12 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                           linkedSquares,
                                                           (System_Func_TSource__TResult__o *)v11,
                                                           (const MethodInfo_2EADD38 *)Method_System_Linq_Enumerable_Select_int__WarBoardWallData___);
    v13 = BasicHelper__ExcludeNull_object_(
            v12,
            (const MethodInfo_2E6B624 *)Method_BasicHelper_ExcludeNull_WarBoardWallData___);
    v14 = System_Linq_Enumerable__ToArray_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v13,
            (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_WarBoardWallData___);
    if ( v14 )
    {
      v15 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_WarBoardWallData__bool__TypeInfo);
      System_Func_object__bool____ctor(v15, (Il2CppObject *)this, Method_WarBoardPieceData_CheckWallAttackCond__, 0LL);
      LOBYTE(v14) = BasicHelper__Any_object__48672124(
                      v14,
                      (System_Func_T__bool__o *)v15,
                      (const MethodInfo_2E6AD7C *)Method_BasicHelper_Any_WarBoardWallData___);
    }
  }
  else
  {
    LOBYTE(v14) = 0;
  }
  Cost_k__BackingField = this->fields._Cost_k__BackingField;
  if ( Cost_k__BackingField && WarBoardCost__get_HasCost(Cost_k__BackingField, 0LL) )
  {
    Instance = (WarBoardData_o *)this->fields._Cost_k__BackingField;
    if ( Instance )
    {
      CanAction = WarBoardCost__CanAction((WarBoardCost_o *)Instance, 0, (unsigned __int8)v14 & 1, 0LL);
      result = 0;
      if ( !CanAction )
        return result;
      return this->fields._limitActionCount_k__BackingField < 1 || this->fields._currentActionCount_k__BackingField > 0;
    }
LABEL_19:
    sub_1B8880C(Instance, v5);
  }
  return this->fields._limitActionCount_k__BackingField < 1 || this->fields._currentActionCount_k__BackingField > 0;
}


void __fastcall WarBoardPieceData__HideActionTarget(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_1B8880C(0LL, method);
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
    sub_1B8880C(0LL, squareIndex);
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
      sub_1B8880C(pieceComponent, method);
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
  const MethodInfo *v9; // x1
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x23
  struct WarBoardPieceBaseComponent_o *v11; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  struct WarBoardManager_TaskList_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x0
  const MethodInfo *v19; // x2
  int32_t v20; // w2
  int32_t v21; // w3
  struct WarBoardManager_TaskList_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  Il2CppClass **v25; // x0
  struct BattleServantData_o *battleServant_k__BackingField; // x20
  unsigned int MaxHp; // w0
  unsigned int v28; // w20
  int32_t type_k__BackingField; // w8
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  struct WarBoardUserServantData_o *serverServantData; // x8
  __int64 v32; // [xsp+8h] [xbp-58h] BYREF
  System_Nullable_float__o v33; // 0:x0.8
  System_Nullable_float__o v34; // 0:x0.8

  if ( (byte_4A58F66 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__);
    sub_1B885B0(&Method_System_Nullable_float___ctor__);
    sub_1B885B0(&WarBoardManager_TaskList_TypeInfo);
    byte_4A58F66 = 1;
  }
  breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
  this->fields._breakPoint_k__BackingField = breakPoint_k__BackingField - 1;
  v8 = (WarBoardManager_TaskList_o *)sub_1B887FC(WarBoardManager_TaskList_TypeInfo);
  WarBoardManager_TaskList___ctor(v8, v9);
  pieceComponent = this->fields.pieceComponent;
  if ( ((breakPoint_k__BackingField - 1) & 0x80000000) == 0 )
  {
    v33 = (System_Nullable_float__o)&v32;
    v32 = 0LL;
    System_Nullable_float____ctor(v33, 1.0, (const MethodInfo_361C4E4 *)Method_System_Nullable_float___ctor__);
    if ( pieceComponent )
    {
      v11 = (struct WarBoardPieceBaseComponent_o *)((__int64 (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, __int64, WarBoardManager_TaskList_o *, __int64, _QWORD, __int64, Il2CppMethodPointer))pieceComponent->klass->vtable._31_OnBreak.method)(
                                                     pieceComponent,
                                                     breakPoint_k__BackingField,
                                                     v32,
                                                     v8,
                                                     0xFFFFFFFFLL,
                                                     0LL,
                                                     1LL,
                                                     pieceComponent->klass->vtable._32_OnDead.methodPtr);
      if ( taskListBreak )
      {
        items = taskListBreak->fields._items;
        v16 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
        ++taskListBreak->fields._version;
        if ( items )
        {
          size = taskListBreak->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)taskListBreak,
              (Il2CppObject *)v8,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
          }
          else
          {
            v18 = &items->obj.klass + size;
            taskListBreak->fields._size = size + 1;
            v18[4] = (Il2CppClass *)v8;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v8, v13, v14);
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
          v28 = 1;
          goto LABEL_25;
        }
      }
    }
LABEL_28:
    sub_1B8880C(v11, v12);
  }
  v34 = (System_Nullable_float__o)&v32;
  v32 = 0LL;
  System_Nullable_float____ctor(v34, 1.0, (const MethodInfo_361C4E4 *)Method_System_Nullable_float___ctor__);
  if ( !pieceComponent )
    goto LABEL_28;
  v11 = (struct WarBoardPieceBaseComponent_o *)((__int64 (__fastcall *)(struct WarBoardPieceBaseComponent_o *, __int64, WarBoardManager_TaskList_o *, __int64, Il2CppMethodPointer))pieceComponent->klass->vtable._32_OnDead.method)(
                                                 pieceComponent,
                                                 v32,
                                                 v8,
                                                 1LL,
                                                 pieceComponent->klass->vtable._33_OnRevive.methodPtr);
  if ( !taskListDead )
    goto LABEL_28;
  v22 = taskListDead->fields._items;
  v23 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
  ++taskListDead->fields._version;
  if ( !v22 )
    goto LABEL_28;
  v24 = taskListDead->fields._size;
  if ( (unsigned int)v24 >= v22->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)taskListDead,
      (Il2CppObject *)v8,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &v22->obj.klass + v24;
    taskListDead->fields._size = v24 + 1;
    v25[4] = (Il2CppClass *)v8;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v8, v20, v21);
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
  v28 = 0;
LABEL_25:
  WarBoardPieceData__SetBreakPoint(this, this->fields._breakPoint_k__BackingField, v19);
  v11 = this->fields.pieceComponent;
  if ( !v11 )
    goto LABEL_28;
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, Il2CppMethodPointer))v11->klass->vtable._15_ChangeStatus.method)(
    v11,
    v28,
    v11->klass->vtable._16_IsModifyStatus.methodPtr);
  v11 = this->fields.pieceComponent;
  if ( !v11 )
    goto LABEL_28;
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))v11->klass->vtable._10_UpdateDisplayActionCount.method)(
    v11,
    v11->klass->vtable._11_UpdateUiBrightnessByPieceStatus.methodPtr);
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
  __int64 v16; // [xsp+8h] [xbp-48h] BYREF
  __int64 v17; // [xsp+18h] [xbp-38h] BYREF
  System_Nullable_float__o v18; // 0:x0.8
  System_Nullable_float__o v19; // 0:x0.8

  if ( (byte_4A58F61 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Nullable_float___ctor__);
    byte_4A58F61 = 1;
  }
  this->fields._isDead_k__BackingField = 1;
  breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
  pieceComponent = this->fields.pieceComponent;
  v18 = (System_Nullable_float__o)&v17;
  v17 = 0LL;
  System_Nullable_float____ctor(v18, 1.0, (const MethodInfo_361C4E4 *)Method_System_Nullable_float___ctor__);
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
        System_Nullable_float____ctor(v19, 1.0, (const MethodInfo_361C4E4 *)Method_System_Nullable_float___ctor__),
        !v12) )
  {
    sub_1B8880C(v9, v10);
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
  WarBoardData_o *monitor; // x20
  int32_t PutSquareIndex_k__BackingField; // w21
  int32_t nowSquareIndex_k__BackingField; // w22
  System_Func_object__bool__o *v9; // x23
  int32_t v10; // w0
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  struct WarBoardUserServantData_o *serverServantData; // x8
  const MethodInfo *v13; // x2

  if ( (byte_4A58F65 & 1) == 0 )
  {
    sub_1B885B0(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&Method_WarBoardPieceData__ProcContinue_b__337_0__);
    byte_4A58F65 = 1;
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
  pieceComponent = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceComponent )
    goto LABEL_18;
  monitor = (WarBoardData_o *)pieceComponent[18].monitor;
  PutSquareIndex_k__BackingField = this->fields._PutSquareIndex_k__BackingField;
  nowSquareIndex_k__BackingField = this->fields._nowSquareIndex_k__BackingField;
  v9 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(v9, (Il2CppObject *)this, Method_WarBoardPieceData__ProcContinue_b__337_0__, 0LL);
  if ( !monitor )
    goto LABEL_18;
  v10 = WarBoardData__SearchNearestEmptySquare(
          monitor,
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
      v13);
  }
  pieceComponent = (UnityEngine_Component_o *)this->fields.pieceComponent;
  if ( !pieceComponent )
LABEL_18:
    sub_1B8880C(pieceComponent, method);
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
    sub_1B8880C(battleServant_k__BackingField, method);
  (*(void (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)battleServant_k__BackingField + 840LL))(
    battleServant_k__BackingField,
    0LL,
    *(_QWORD *)(*(_QWORD *)battleServant_k__BackingField + 848LL));
}


void __fastcall WarBoardPieceData__Select(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardData_o *pieceComponent; // x0
  WarBoardSquareData_o *Square; // x0

  if ( (byte_4A58F58 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4A58F58 = 1;
  }
  pieceComponent = (WarBoardData_o *)this->fields.pieceComponent;
  if ( !pieceComponent )
    goto LABEL_10;
  (*(void (__fastcall **)(WarBoardData_o *, Il2CppMethodPointer))&pieceComponent->klass[1]._2.naturalAligment)(
    pieceComponent,
    pieceComponent->klass[1].vtable._0_Equals.methodPtr);
  pieceComponent = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1B8880C(pieceComponent, method);
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
      sub_1B8880C(Cost_k__BackingField, *(_QWORD *)&ap);
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
    sub_1B8880C(this, bp);
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

  this->fields.pieceComponent = component;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields.pieceComponent,
    (int32_t)component,
    (int32_t)method,
    v3);
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
  System_Func_object__bool__o *v6; // x21
  Il2CppObject *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  Il2CppObject *Master_object; // x20
  const MethodInfo *v12; // x1
  WarBoardActionPointClassEntity_o *MasterEntityFromStageId; // x0
  WarBoardCost_o *v14; // x0
  ServantStatusBattleListViewItem_o *p_Cost_k__BackingField; // x19
  int32_t v16; // w2
  int32_t v17; // w3
  int64_t sortValue1; // x8
  int32_t v19; // w1
  System_Collections_Generic_IEnumerable_TSource__o *svtInfo; // x20
  System_Func_object__bool__o *v21; // x21
  Il2CppObject *v22; // x0
  struct WarBoardUserServantData_o **p_serverServantData; // x20
  int32_t v24; // w2
  int32_t v25; // w3
  struct WarBoardUserServantData_o *serverServantData; // x8
  __int128 v27; // q1
  WarBoardPieceData_o *v28; // x21
  BattleServantData_o *BattleServant; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  const MethodInfo *v32; // x2
  struct WarBoardUserServantData_o *v33; // x8
  Il2CppObject *v34; // x20
  const MethodInfo *v35; // x1
  WarBoardActionPointEntity_o *v36; // x21
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x20
  WarBoardCost_o *v38; // x0
  ServantStatusBattleListViewItem_o *v39; // x19
  int32_t v40; // w2
  int32_t v41; // w3
  int64_t sortValue0; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+20h] [xbp-50h]
  WarBoardReinforcementsEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4A58F5B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
    sub_1B885B0(&System_Func_WarBoardUserMasterData__bool__TypeInfo);
    sub_1B885B0(&System_Func_WarBoardUserServantData__bool__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&Method_WarBoardPieceData__SetInitinalData_b__315_0__);
    this = (WarBoardPieceData_o *)sub_1B885B0(&Method_WarBoardPieceData__SetInitinalData_b__315_1__);
    byte_4A58F5B = 1;
  }
  entity = 0LL;
  if ( !v4->fields._isDead_k__BackingField )
  {
    if ( warBoardDataEntity )
    {
      if ( v4->fields._type_k__BackingField == 1 )
      {
        masterInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.masterInfo;
        v6 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_WarBoardUserMasterData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v6,
          (Il2CppObject *)v4,
          Method_WarBoardPieceData__SetInitinalData_b__315_0__,
          0LL);
        v7 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
               masterInfo,
               (System_Func_TSource__bool__o *)v6,
               (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
        v4->fields._serverMasterData_k__BackingField = (struct WarBoardUserMasterData_o *)v7;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&v4->fields._serverMasterData_k__BackingField,
          (int32_t)v7,
          v8,
          v9);
        serverMasterData_k__BackingField = v4->fields._serverMasterData_k__BackingField;
        if ( serverMasterData_k__BackingField )
        {
          *(int32x2_t *)&v4->fields._limitActionCount_k__BackingField = vrev64_s32(*(int32x2_t *)&serverMasterData_k__BackingField->fields.currentLimitActionPoint);
          v4->fields._attackCount_k__BackingField = serverMasterData_k__BackingField->fields.attackCount;
          v4->fields._nowSquareIndex_k__BackingField = serverMasterData_k__BackingField->fields.squareIndex;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
          this = (WarBoardPieceData_o *)WarBoardPieceData__get_ActionPointEntity(v4, v12);
          if ( Master_object )
          {
            MasterEntityFromStageId = WarBoardActionPointClassMaster__GetMasterEntityFromStageId(
                                        (WarBoardActionPointClassMaster_o *)Master_object,
                                        (WarBoardActionPointEntity_o *)this,
                                        0LL);
            v14 = WarBoardCost__Create(MasterEntityFromStageId, v4->fields.stagePieceDetailEntity, 0LL, 0LL);
            v4->fields._Cost_k__BackingField = v14;
            p_Cost_k__BackingField = (ServantStatusBattleListViewItem_o *)&v4->fields._Cost_k__BackingField;
            sub_1B88554(p_Cost_k__BackingField, (int32_t)v14, v16, v17);
            sortValue1 = p_Cost_k__BackingField->fields.sortValue1;
            if ( sortValue1 )
            {
              this = (WarBoardPieceData_o *)p_Cost_k__BackingField->klass;
              if ( p_Cost_k__BackingField->klass )
              {
                v19 = *(_DWORD *)(sortValue1 + 72);
LABEL_27:
                WarBoardCost__UpdateCurrentPointByServerData((WarBoardCost_o *)this, v19, 0LL);
                return;
              }
            }
          }
        }
      }
      else
      {
        svtInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.svtInfo;
        v21 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_WarBoardUserServantData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v21,
          (Il2CppObject *)v4,
          Method_WarBoardPieceData__SetInitinalData_b__315_1__,
          0LL);
        v22 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
                svtInfo,
                (System_Func_TSource__bool__o *)v21,
                (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
        v4->fields.serverServantData = (struct WarBoardUserServantData_o *)v22;
        p_serverServantData = &v4->fields.serverServantData;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.serverServantData, (int32_t)v22, v24, v25);
        this = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        serverServantData = v4->fields.serverServantData;
        if ( serverServantData )
        {
          v27 = *(_OWORD *)&serverServantData->fields.id.fields.fakeValue;
          v28 = this;
          *(_OWORD *)&v44.fields.currentCryptoKey = *(_OWORD *)&serverServantData->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v44.fields.fakeValue = v27;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v43 = v44;
          this = (WarBoardPieceData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v43, 0LL);
          if ( v28 )
          {
            BattleServant = WarBoardManager__GetBattleServant((WarBoardManager_o *)v28, (int64_t)this, 0LL);
            v4->fields._battleServant_k__BackingField = BattleServant;
            sub_1B88554(
              (ServantStatusBattleListViewItem_o *)&v4->fields._battleServant_k__BackingField,
              (int32_t)BattleServant,
              v30,
              v31);
            this = (WarBoardPieceData_o *)v4->fields.serverServantData;
            if ( this )
            {
              WarBoardUserServantData__FromBattleServantData(
                (WarBoardUserServantData_o *)this,
                v4->fields._battleServant_k__BackingField,
                v32);
              v33 = *p_serverServantData;
              if ( *p_serverServantData )
              {
                *(int32x2_t *)&v4->fields._limitActionCount_k__BackingField = vrev64_s32(*(int32x2_t *)&v33->fields.currentActionPoint);
                v4->fields._attackCount_k__BackingField = v33->fields.attackCount;
                v4->fields._nowSquareIndex_k__BackingField = v33->fields.squareIndex;
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                v34 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
                this = (WarBoardPieceData_o *)WarBoardPieceData__get_ActionPointEntity(v4, v35);
                if ( v4->fields._battleServant_k__BackingField )
                {
                  v36 = (WarBoardActionPointEntity_o *)this;
                  this = (WarBoardPieceData_o *)BattleServantData__getClassId(
                                                  v4->fields._battleServant_k__BackingField,
                                                  0LL);
                  if ( v34 )
                  {
                    EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                                    (WarBoardActionPointClassMaster_o *)v34,
                                                    v36,
                                                    (int32_t)this,
                                                    0LL);
                    this = (WarBoardPieceData_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
                    if ( this )
                    {
                      WarBoardReinforcementsMaster__TryGetEntity(
                        (WarBoardReinforcementsMaster_o *)this,
                        &entity,
                        v4->fields._ReinfoId_k__BackingField,
                        0LL);
                      v38 = WarBoardCost__Create(
                              EntityFromActionPointEntity,
                              v4->fields.stagePieceDetailEntity,
                              entity,
                              0LL);
                      v4->fields._Cost_k__BackingField = v38;
                      v39 = (ServantStatusBattleListViewItem_o *)&v4->fields._Cost_k__BackingField;
                      sub_1B88554(v39, (int32_t)v38, v40, v41);
                      sortValue0 = v39->fields.sortValue0;
                      if ( sortValue0 )
                      {
                        this = (WarBoardPieceData_o *)v39->klass;
                        if ( v39->klass )
                        {
                          v19 = *(_DWORD *)(sortValue0 + 664);
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
    sub_1B8880C(this, warBoardDataEntity);
  }
}


void __fastcall WarBoardPieceData__SetMasterEquip(
        WarBoardPieceData_o *this,
        int64_t userEquipId,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x0
  Il2CppObject *MasterData_object; // x0
  void *monitor; // x20
  Il2CppClass *klass; // x21
  int32_t v10; // w0
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Object_o *v13; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v14; // 0:x0.16

  if ( (byte_4A58F52 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&WarBoardMasterPieceComponent_TypeInfo);
    byte_4A58F52 = 1;
  }
  this->fields._CurrentUserEquipId_k__BackingField = userEquipId;
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BDA48C(v5);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BDA48C(v6);
  MasterData_object = **(Il2CppObject ***)(v6 + 184);
  if ( !MasterData_object )
    goto LABEL_24;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  if ( !MasterData_object )
    goto LABEL_24;
  MasterData_object = DataMasterBase_object__object__long___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                        this->fields._CurrentUserEquipId_k__BackingField,
                        (const MethodInfo_311DAE0 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  if ( !MasterData_object )
    goto LABEL_24;
  klass = MasterData_object[2].klass;
  monitor = MasterData_object[2].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v14.fields.currentCryptoKey = klass;
  *(_QWORD *)&v14.fields.fakeValue = monitor;
  v10 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v14, 0LL);
  pieceComponent = this->fields.pieceComponent;
  this->fields._iconId_k__BackingField = v10;
  if ( pieceComponent
    && (methodPtr_low = LOBYTE(WarBoardMasterPieceComponent_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(pieceComponent->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (WarBoardMasterPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[methodPtr_low - 1] == WarBoardMasterPieceComponent_TypeInfo )
      v13 = (UnityEngine_Object_o *)pieceComponent;
    else
      v13 = 0LL;
  }
  else
  {
    v13 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  MasterData_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
  if ( ((unsigned __int8)MasterData_object & 1) != 0 )
  {
    if ( v13 )
    {
      WarBoardMasterPieceComponent__SetMasterIcon((WarBoardMasterPieceComponent_o *)v13, 0LL);
      return;
    }
LABEL_24:
    sub_1B8880C(MasterData_object, userEquipId);
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
  __int64 v8; // x3
  __int64 v9; // x4
  Il2CppObject *v10; // x22
  int32_t v11; // [xsp+Ch] [xbp-34h] BYREF
  System_RuntimeTypeHandle_o v12; // 0:w0.4

  if ( (byte_4A58F68 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardStageLayoutEntity_ActionType_var);
    sub_1B885B0(&System_Enum_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&System_Type_TypeInfo);
    byte_4A58F68 = 1;
  }
  v5 = (int)WarBoardStageLayoutEntity_ActionType_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v12.fields.value = v5;
  TypeFromHandle = System_Type__GetTypeFromHandle(v12, 0LL);
  v11 = actionType;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11, v7, v8, v9);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  if ( System_Enum__IsDefined(TypeFromHandle, v10, 0LL) )
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
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x9
  __int64 methodPtr_low; // x12
  UnityEngine_Object_o *v7; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1

  if ( (byte_4A58F5E & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&WarBoardServantPieceComponent_TypeInfo);
    byte_4A58F5E = 1;
  }
  pieceComponent = this->fields.pieceComponent;
  if ( pieceComponent
    && (methodPtr_low = LOBYTE(WarBoardServantPieceComponent_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(pieceComponent->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (WarBoardServantPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[methodPtr_low - 1] == WarBoardServantPieceComponent_TypeInfo )
      v7 = (UnityEngine_Object_o *)this->fields.pieceComponent;
    else
      v7 = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality(v7, 0LL, 0LL);
  if ( !v8 )
  {
    if ( !v7 )
      sub_1B8880C(v8, v9);
    WarBoardServantPieceComponent__SetPartyBuffLevel((WarBoardServantPieceComponent_o *)v7, level, 0LL);
  }
}


void __fastcall WarBoardPieceData__SetPieceEnable(WarBoardPieceData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_1B8880C(0LL, enable);
  WarBoardPieceBaseComponent__SetColliderEnable(pieceComponent, enable, 0LL);
}


void __fastcall WarBoardPieceData__SetPrevAiRoute(
        WarBoardPieceData_o *this,
        WarBoardAIRoute_RouteData_o *prev,
        const MethodInfo *method)
{
  WarBoardPieceData_o *v4; // x19
  Il2CppClass *v5; // d8
  int64_t flagNow; // x21
  Il2CppObject *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  v4 = this;
  if ( (byte_4A58F60 & 1) == 0 )
  {
    this = (WarBoardPieceData_o *)sub_1B885B0(&WarBoardPieceData_RouteSaveData_TypeInfo);
    byte_4A58F60 = 1;
  }
  if ( !prev )
    sub_1B8880C(this, prev);
  v5 = *(Il2CppClass **)&prev->fields.baseIndex;
  flagNow = prev->fields.flagNow;
  v7 = (Il2CppObject *)sub_1B887FC(WarBoardPieceData_RouteSaveData_TypeInfo);
  System_Object___ctor(v7, 0LL);
  v7[1].klass = v5;
  v7[1].monitor = (void *)flagNow;
  v4->fields._PrevAiRoute_k__BackingField = (struct WarBoardPieceData_RouteSaveData_o *)v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._PrevAiRoute_k__BackingField, (int32_t)v7, v8, v9);
}


void __fastcall WarBoardPieceData__SetServant(
        WarBoardPieceData_o *this,
        int64_t userServantId,
        int32_t overwriteLimitCount,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  void *monitor; // x22
  Il2CppClass *klass; // x23
  int32_t *p_iconClassId_k__BackingField; // x21
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x9
  __int64 methodPtr_low; // x12
  UnityEngine_Object_o *v14; // x20
  Il2CppObject *v15; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4A58F53 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&WarBoardServantPieceComponent_TypeInfo);
    byte_4A58F53 = 1;
  }
  v15 = 0LL;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_35;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userServantId,
                               (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    this->fields._UserServantId_k__BackingField = userServantId;
    if ( !entity )
      goto LABEL_35;
    klass = entity[5].klass;
    monitor = entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v17.fields.currentCryptoKey = klass;
    *(_QWORD *)&v17.fields.fakeValue = monitor;
    this->fields._iconId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v17, 0LL);
    if ( (overwriteLimitCount & 0x80000000) != 0 )
    {
      Instance = entity;
      if ( !entity )
        goto LABEL_35;
      overwriteLimitCount = UserServantEntity__getIconLimitCount((UserServantEntity_o *)entity, 0, 0LL);
    }
    this->fields._iconLimitCount_k__BackingField = overwriteLimitCount;
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
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantClassMaster___);
    if ( !Instance )
LABEL_35:
      sub_1B8880C(Instance, v8);
    Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                 &v15,
                                 *p_iconClassId_k__BackingField,
                                 (const MethodInfo_311D988 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v15 )
        goto LABEL_35;
      p_iconClassId_k__BackingField = (int32_t *)&v15[2].monitor + 1;
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
      v14 = (UnityEngine_Object_o *)this->fields.pieceComponent;
    else
      v14 = 0LL;
  }
  else
  {
    v14 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (Il2CppObject *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( v14 )
    {
      WarBoardServantPieceComponent__SetServant((WarBoardServantPieceComponent_o *)v14, userServantId, 0LL);
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
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  void *monitor; // x21
  Il2CppClass *klass; // x22
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x9
  __int64 methodPtr_low; // x12
  UnityEngine_Object_o *v11; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4A58F54 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&WarBoardServantPieceComponent_TypeInfo);
    byte_4A58F54 = 1;
  }
  entity = 0LL;
  this->fields._UserServantEquipId_k__BackingField = userServantEquipId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_24;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               this->fields._UserServantEquipId_k__BackingField,
                               (const MethodInfo_311DB34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_24;
    klass = entity[5].klass;
    monitor = entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v13.fields.currentCryptoKey = klass;
    *(_QWORD *)&v13.fields.fakeValue = monitor;
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v13, 0LL);
    this->fields._iconEquipId_k__BackingField = (int)Instance;
    if ( !entity )
      goto LABEL_24;
    this->fields._equipLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
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
      v11 = (UnityEngine_Object_o *)this->fields.pieceComponent;
    else
      v11 = 0LL;
  }
  else
  {
    v11 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (Il2CppObject *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( v11 )
    {
      WarBoardServantPieceComponent__SetServantEquip((WarBoardServantPieceComponent_o *)v11, userServantEquipId, 0LL);
      return;
    }
LABEL_24:
    sub_1B8880C(Instance, v6);
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
  BattleServantData_o *v8; // x8
  int32_t *p_iconClassId_k__BackingField; // x20
  struct BattleServantData_o *v10; // x8
  int32_t v11; // w9
  struct BattleServantData_o *v12; // x8
  struct BattleUserServantData_array *equipList; // x23
  __int64 v14; // x9
  BattleUserServantData_o *v15; // x9
  __int64 v16; // x20
  __int64 v17; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v18; // x8
  BattleDeckServantData_o *deckSvt; // x20
  int32_t DispLimitCnt; // w0
  struct WarBoardUserServantData_o *v21; // x8
  bool v22; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  v2 = this;
  if ( (byte_4A58F51 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    this = (WarBoardPieceData_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4A58F51 = 1;
  }
  entity = 0LL;
  battleServant_k__BackingField = v2->fields._battleServant_k__BackingField;
  if ( !battleServant_k__BackingField )
    goto LABEL_40;
  v5 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v5;
  *(_QWORD *)&v24.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v24, 0LL);
  serverServantData = v2->fields.serverServantData;
  v2->fields._iconId_k__BackingField = v6;
  if ( serverServantData && NpcSvtType__IsEnemy(serverServantData->fields.npcSvtType, 0LL) )
  {
    this = (WarBoardPieceData_o *)v2->fields._battleServant_k__BackingField;
    if ( !this )
      goto LABEL_40;
    this = (WarBoardPieceData_o *)BattleServantData__getLimitCount((BattleServantData_o *)this, 0LL);
  }
  else
  {
    this = (WarBoardPieceData_o *)v2->fields._battleServant_k__BackingField;
    if ( !this )
      goto LABEL_40;
    this = (WarBoardPieceData_o *)BattleServantData__GetIconImageLimitCount((BattleServantData_o *)this, 0LL);
  }
  v8 = v2->fields._battleServant_k__BackingField;
  v2->fields._iconLimitCount_k__BackingField = (int)this;
  if ( !v8 )
    goto LABEL_40;
  this = (WarBoardPieceData_o *)BattleServantData__getClassId(v8, 0LL);
  v2->fields._iconClassId_k__BackingField = (int)this;
  p_iconClassId_k__BackingField = &v2->fields._iconClassId_k__BackingField;
  v10 = v2->fields._battleServant_k__BackingField;
  if ( !v10 )
    goto LABEL_40;
  v2->fields._iconFrameType_k__BackingField = v10->fields._frameType_k__BackingField;
  v2->fields._iconLevel_k__BackingField = v10->fields.level;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (WarBoardPieceData_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( !this )
    goto LABEL_40;
  this = (WarBoardPieceData_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  &entity,
                                  *p_iconClassId_k__BackingField,
                                  (const MethodInfo_311D988 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_40;
    p_iconClassId_k__BackingField = (int32_t *)&entity[2].monitor + 1;
  }
  v11 = *p_iconClassId_k__BackingField;
  v12 = v2->fields._battleServant_k__BackingField;
  v2->fields._iconEquipId_k__BackingField = 0;
  v2->fields._equipLimitCount_k__BackingField = 0;
  v2->fields._IconClassImageId_k__BackingField = v11;
  if ( !v12 )
    goto LABEL_40;
  equipList = v12->fields.equipList;
  if ( equipList )
  {
    v14 = *(_QWORD *)&equipList->max_length;
    if ( v14 )
    {
      if ( !(_DWORD)v14 )
        goto LABEL_41;
      v15 = equipList->m_Items[0];
      if ( !v15 )
        goto LABEL_30;
      v17 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
      v16 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v25.fields.currentCryptoKey = v17;
      *(_QWORD *)&v25.fields.fakeValue = v16;
      this = (WarBoardPieceData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v25, 0LL);
      v2->fields._iconEquipId_k__BackingField = (int)this;
      if ( !equipList->max_length )
LABEL_41:
        sub_1B88814(this, method);
      v18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)equipList->m_Items[0];
      if ( !v18
        || (this = (WarBoardPieceData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(
                                            v18[6],
                                            0LL),
            v12 = v2->fields._battleServant_k__BackingField,
            v2->fields._equipLimitCount_k__BackingField = (int)this,
            !v12) )
      {
LABEL_40:
        sub_1B8880C(this, method);
      }
    }
  }
LABEL_30:
  deckSvt = v12->fields.deckSvt;
  if ( deckSvt && deckSvt->fields.enemyScript )
  {
    v2->fields._npcImageSvtId_k__BackingField = BattleDeckServantData__GetImageSvtId(deckSvt, 0LL);
    DispLimitCnt = BattleDeckServantData__GetDispLimitCnt(deckSvt, 0LL);
    v21 = v2->fields.serverServantData;
    v2->fields._npcDispLimitCount_k__BackingField = DispLimitCnt;
    v22 = v21
       && v21->fields.displayType == 2
       && (v2->fields._npcImageSvtId_k__BackingField < 1 || BattleDeckServantData__IsShadow(deckSvt, 0LL));
    v2->fields._IsShadow_k__BackingField = v22;
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
          sub_1B8880C(HasCost, v7);
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


void __fastcall WarBoardPieceData__SetTouchEnable(WarBoardPieceData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_1B8880C(0LL, enable);
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
      sub_1B8880C(0LL, v3);
    ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))pieceComponent->klass->vtable._20_ShowActionTarget.method)(
      pieceComponent,
      pieceComponent->klass->vtable._21_HideActionTarget.methodPtr);
  }
}


System_String_o *__fastcall WarBoardPieceData__ToJson(WarBoardPieceData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  Il2CppObject *serverMasterData_k__BackingField; // x19
  WarBoardUserServantData_o *serverServantData; // x0

  if ( (byte_4A58F5D & 1) == 0 )
  {
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&string_TypeInfo);
    byte_4A58F5D = 1;
  }
  WarBoardPieceData__SetServarData(this, method);
  if ( this->fields._type_k__BackingField != 1 )
  {
    serverServantData = this->fields.serverServantData;
    if ( serverServantData )
      return WarBoardUserServantData__ToJson(serverServantData, v3);
    return string_TypeInfo->static_fields->Empty;
  }
  serverMasterData_k__BackingField = (Il2CppObject *)this->fields._serverMasterData_k__BackingField;
  if ( !serverMasterData_k__BackingField )
    return string_TypeInfo->static_fields->Empty;
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  return JsonManager__toJson(serverMasterData_k__BackingField, 0, 0, 0LL);
}


void __fastcall WarBoardPieceData__TurnEnd(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_1B8880C(0LL, method);
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))pieceComponent->klass->vtable._9_HideActionCount.method)(
    pieceComponent,
    pieceComponent->klass->vtable._10_UpdateDisplayActionCount.methodPtr);
}


void __fastcall WarBoardPieceData__TurnStart(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_1B8880C(0LL, method);
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
  System_Func_object__bool__o *v12; // x22
  struct WarBoardUserMasterData_o *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t defeatPoint; // w8
  struct WarBoardUserMasterData_o *v17; // x22
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  struct WarBoardUserMasterData_o **p_serverMasterData_k__BackingField; // x21
  _BOOL4 v20; // w24
  System_Collections_Generic_IEnumerable_TSource__o *svtInfo; // x22
  System_Func_object__bool__o *v22; // x24
  Il2CppObject *v23; // x0
  __int64 v24; // x1
  int32_t breakPoint_k__BackingField; // w26
  int32_t klass_high; // w25
  struct WarBoardUserServantData_o *v27; // x22
  __int64 v28; // x24
  __int64 pieceComponent; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  struct WarBoardPieceBaseComponent_o *v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  struct WarBoardData_WarBoardDeadBreakList_array *items; // x8
  _QWORD *v36; // x9
  __int64 size; // x10
  _BOOL4 v38; // w21
  Il2CppClass **v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  struct WarBoardCost_o *v42; // x8
  _BOOL4 v43; // w22
  struct WarBoardUserServantData_o *serverServantData; // x8
  struct WarBoardUserServantData_o **p_serverServantData; // x23
  _BOOL4 v46; // w26
  int32_t currentActionCount_k__BackingField; // w27
  int32_t currentActionPoint; // w29
  struct WarBoardPieceData_SaveData_o *localSaveData; // x9
  int v50; // w28
  _BOOL4 v51; // w24
  _BOOL4 v52; // w25
  struct WarBoardUserMasterData_o *v53; // x8
  int v54; // w23
  _BOOL4 v55; // w8
  struct WarBoardPieceBaseComponent_o *v56; // x8
  __int64 v57; // x11
  UnityEngine_Object_o *v58; // x20
  bool v59; // w8
  WarBoardCost_o *Cost_k__BackingField; // x0
  struct WarBoardCost_o *v61; // x8
  const MethodInfo *v62; // x2
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  const MethodInfo *v64; // x2
  struct WarBoardUserServantData_o *v65; // x8
  int32_t squareIndex; // w8
  Il2CppObject *Master_object; // x22
  const MethodInfo *v68; // x1
  WarBoardActionPointEntity_o *v69; // x23
  struct WarBoardUserServantData_o *v70; // x8
  WarBoardActionPointClassEntity_o *v71; // x22
  WarBoardCost_o *v72; // x23
  int v73; // w22
  int v74; // w23
  struct WarBoardPieceBaseComponent_o *v75; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Object_o *v77; // x20
  struct BattleServantData_o *v78; // x8
  __int64 v79; // x21
  __int64 v80; // x22
  int32_t v81; // w0
  struct WarBoardUserServantData_o *v82; // x8
  BattleServantData_o *v83; // x8
  int32_t *p_iconClassId_k__BackingField; // x21
  struct BattleServantData_o *v85; // x8
  __int64 v86; // x20
  System_Func_bool__o *v87; // x19
  UnityEngine_WaitUntil_o *v88; // x21
  __int64 v89; // x19
  System_Delegate_o **v90; // x21
  System_Delegate_o *v91; // x22
  WarBoardTaskBase_TaskCallback_o *v92; // x23
  System_Delegate_o *v93; // x0
  int32_t v94; // w2
  int32_t v95; // w3
  System_Delegate_o *v96; // x8
  WarBoardTaskBase_TaskCallback_c *v97; // x1
  Il2CppObject *Instance; // x20
  __int64 v99; // x21
  __int64 v100; // x0
  __int64 v101; // x1
  int32_t v102; // w2
  int32_t v103; // w3
  __int64 v104; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v106; // 0:x0.16

  v6 = forceUpdate;
  if ( (byte_4A58F5C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
    sub_1B885B0(&System_Func_bool__TypeInfo);
    sub_1B885B0(&System_Func_WarBoardUserMasterData__bool__TypeInfo);
    sub_1B885B0(&System_Func_WarBoardUserServantData__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__Add__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1B885B0(&Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__2__);
    sub_1B885B0(&Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__3__);
    sub_1B885B0(&WarBoardPieceData___c__DisplayClass316_0_TypeInfo);
    sub_1B885B0(&UnityEngine_WaitUntil_TypeInfo);
    sub_1B885B0(&WarBoardCallbackTask_TypeInfo);
    sub_1B885B0(&WarBoardData_WarBoardDeadBreakList_TypeInfo);
    sub_1B885B0(&WarBoardMasterPieceComponent_TypeInfo);
    sub_1B885B0(&Method_WarBoardPieceData__UpdateFromServerData_b__316_0__);
    sub_1B885B0(&Method_WarBoardPieceData__UpdateFromServerData_b__316_1__);
    sub_1B885B0(&WarBoardServantPieceComponent_TypeInfo);
    sub_1B885B0(&WarBoardTaskBase___TypeInfo);
    byte_4A58F5C = 1;
  }
  entity = 0LL;
  if ( !warBoardDataEntity )
    return;
  if ( this->fields._type_k__BackingField != 1 )
  {
    svtInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.svtInfo;
    v22 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_WarBoardUserServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v22,
      (Il2CppObject *)this,
      Method_WarBoardPieceData__UpdateFromServerData_b__316_1__,
      0LL);
    v23 = System_Linq_Enumerable__FirstOrDefault_object__48907856(
            svtInfo,
            (System_Func_TSource__bool__o *)v22,
            (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
    if ( !v23 )
      return;
    breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
    klass_high = HIDWORD(v23[35].klass);
    v27 = (struct WarBoardUserServantData_o *)v23;
    if ( breakPoint_k__BackingField <= klass_high )
    {
      pieceComponent = (__int64)this->fields.pieceComponent;
      if ( !pieceComponent )
        goto LABEL_153;
      pieceComponent = (*(__int64 (__fastcall **)(__int64, WarBoardManager_TaskList_o *, _QWORD))(*(_QWORD *)pieceComponent
                                                                                                + 792LL))(
                         pieceComponent,
                         taskList,
                         *(_QWORD *)(*(_QWORD *)pieceComponent + 800LL));
      v38 = 0;
    }
    else
    {
      this->fields._breakPoint_k__BackingField = klass_high;
      if ( (klass_high & 0x80000000) != 0 )
        this->fields._isDead_k__BackingField = 1;
      v28 = sub_1B887FC(WarBoardData_WarBoardDeadBreakList_TypeInfo);
      System_Object___ctor((Il2CppObject *)v28, 0LL);
      if ( !v28 )
        goto LABEL_153;
      v32 = this->fields.pieceComponent;
      *(_QWORD *)(v28 + 16) = v32;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v28 + 16), (int32_t)v32, v30, v31);
      *(_DWORD *)(v28 + 24) = v27->fields.defeatPoint;
      *(_DWORD *)(v28 + 28) = breakPoint_k__BackingField;
      if ( !deadBreakList )
        goto LABEL_153;
      items = deadBreakList->fields._items;
      v36 = Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__Add__;
      ++deadBreakList->fields._version;
      if ( !items )
        goto LABEL_153;
      size = deadBreakList->fields._size;
      v38 = klass_high >= 0;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)deadBreakList,
          (Il2CppObject *)v28,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + size;
        deadBreakList->fields._size = size + 1;
        v39[4] = (Il2CppClass *)v28;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v39 + 4), v28, v33, v34);
      }
    }
    p_serverServantData = &this->fields.serverServantData;
    serverServantData = this->fields.serverServantData;
    if ( serverServantData )
      v46 = serverServantData->fields.transformIndex != v27->fields.transformIndex;
    else
      v46 = 0;
    currentActionCount_k__BackingField = this->fields._currentActionCount_k__BackingField;
    currentActionPoint = v27->fields.currentActionPoint;
    localSaveData = this->fields.localSaveData;
    v50 = currentActionCount_k__BackingField != currentActionPoint;
    if ( !localSaveData )
      goto LABEL_153;
    if ( v27->fields.consumedActionPointDateTime <= localSaveData->fields.consumedActionPointDateTime
      || this->fields._forceId_k__BackingField
      || this->fields._groupId_k__BackingField )
    {
      v51 = 0;
      if ( serverServantData )
      {
LABEL_37:
        v52 = serverServantData->fields.criticalStars != v27->fields.criticalStars;
        goto LABEL_64;
      }
    }
    else
    {
      v51 = !this->fields._isDead_k__BackingField;
      if ( serverServantData )
        goto LABEL_37;
    }
    v52 = 0;
LABEL_64:
    v59 = v27->fields.consumedRecoverDonotActCostDateTime > localSaveData->fields.consumedRecoverDonotActCostDateTime
       && !this->fields._forceId_k__BackingField
       && !this->fields._groupId_k__BackingField
       && !this->fields._isDead_k__BackingField;
    this->fields._IsDispConsumedPieceActionPoint_k__BackingField = v59;
    Cost_k__BackingField = this->fields._Cost_k__BackingField;
    this->fields._ConsumedRecoverDonotActCost_k__BackingField = v27->fields.consumedRecoverDonotActCost;
    if ( Cost_k__BackingField )
    {
      pieceComponent = WarBoardCost__get_HasCost(Cost_k__BackingField, 0LL);
      v50 = pieceComponent | (currentActionCount_k__BackingField != currentActionPoint);
      if ( currentActionCount_k__BackingField == currentActionPoint && (pieceComponent & 1) != 0 )
      {
        v61 = this->fields._Cost_k__BackingField;
        if ( !v61 )
          goto LABEL_153;
        v50 = v61->fields._CurrentActionPoint_k__BackingField != v27->fields.currentPieceActionPoint;
      }
    }
    this->fields.serverServantData = v27;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.serverServantData, (int32_t)v27, v40, v41);
    pieceComponent = (__int64)this->fields.serverServantData;
    if ( !pieceComponent )
      goto LABEL_153;
    WarBoardUserServantData__SetBattleServantData(
      (WarBoardUserServantData_o *)pieceComponent,
      this->fields._battleServant_k__BackingField,
      v62);
    battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
    if ( !battleServant_k__BackingField )
      goto LABEL_153;
    pieceComponent = (__int64)battleServant_k__BackingField->fields.buffData;
    if ( !pieceComponent )
      goto LABEL_153;
    BattleBuffData__UpdateForceNoField((BattleBuffData_o *)pieceComponent, 0LL);
    pieceComponent = (__int64)this->fields._battleServant_k__BackingField;
    if ( !pieceComponent )
      goto LABEL_153;
    BattleServantData__updateHp((BattleServantData_o *)pieceComponent, 0LL);
    pieceComponent = (__int64)*p_serverServantData;
    if ( !*p_serverServantData )
      goto LABEL_153;
    WarBoardUserServantData__FromBattleServantData(
      (WarBoardUserServantData_o *)pieceComponent,
      this->fields._battleServant_k__BackingField,
      v64);
    v65 = this->fields.serverServantData;
    if ( !v65 )
      goto LABEL_153;
    *(int32x2_t *)&this->fields._limitActionCount_k__BackingField = vrev64_s32(*(int32x2_t *)&v65->fields.currentActionPoint);
    this->fields._attackCount_k__BackingField = v65->fields.attackCount;
    squareIndex = v65->fields.squareIndex;
    if ( squareIndex == -1 )
      this->fields._lastSquareIndex_k__BackingField = this->fields._nowSquareIndex_k__BackingField;
    this->fields._nowSquareIndex_k__BackingField = squareIndex;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    pieceComponent = (__int64)WarBoardPieceData__get_ActionPointEntity(this, v68);
    if ( !this->fields._battleServant_k__BackingField )
      goto LABEL_153;
    v69 = (WarBoardActionPointEntity_o *)pieceComponent;
    pieceComponent = BattleServantData__getClassId(this->fields._battleServant_k__BackingField, 0LL);
    if ( !Master_object )
      goto LABEL_153;
    pieceComponent = (__int64)WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                (WarBoardActionPointClassMaster_o *)Master_object,
                                v69,
                                pieceComponent,
                                0LL);
    v70 = this->fields.serverServantData;
    if ( !v70 )
      goto LABEL_153;
    v71 = (WarBoardActionPointClassEntity_o *)pieceComponent;
    pieceComponent = (__int64)this->fields._Cost_k__BackingField;
    if ( !pieceComponent )
      goto LABEL_153;
    WarBoardCost__UpdateCurrentPointByServerData(
      (WarBoardCost_o *)pieceComponent,
      v70->fields.currentPieceActionPoint,
      0LL);
    pieceComponent = (__int64)this->fields._battleServant_k__BackingField;
    if ( !pieceComponent )
      goto LABEL_153;
    v72 = this->fields._Cost_k__BackingField;
    pieceComponent = BattleServantData__getClassId((BattleServantData_o *)pieceComponent, 0LL);
    if ( !v72 )
      goto LABEL_153;
    if ( WarBoardCost__IsSameClass(v72, pieceComponent, 0LL) )
    {
      v73 = 0;
    }
    else
    {
      pieceComponent = (__int64)WarBoardCost__Create(v71, 0LL, 0LL, 0LL);
      if ( !this->fields._Cost_k__BackingField )
        goto LABEL_153;
      WarBoardCost__UpdateClassCost(this->fields._Cost_k__BackingField, (WarBoardCost_o *)pieceComponent, 0LL);
      v73 = 1;
    }
    pieceComponent = (__int64)this->fields.pieceComponent;
    if ( !pieceComponent )
      goto LABEL_153;
    if ( (((*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)pieceComponent + 568LL))(
             pieceComponent,
             *(_QWORD *)(*(_QWORD *)pieceComponent + 576LL)) & 1) != 0
       || v6)
      && !this->fields._isDead_k__BackingField )
    {
      pieceComponent = (__int64)this->fields.pieceComponent;
      if ( !pieceComponent )
        goto LABEL_153;
      (*(void (__fastcall **)(__int64, _BOOL4, _QWORD))(*(_QWORD *)pieceComponent + 552LL))(
        pieceComponent,
        v38,
        *(_QWORD *)(*(_QWORD *)pieceComponent + 560LL));
    }
    if ( v73 | (v50 | v6) & 1 && !this->fields._isDead_k__BackingField )
    {
      pieceComponent = (__int64)this->fields.pieceComponent;
      if ( !pieceComponent )
        goto LABEL_153;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)pieceComponent + 472LL))(
        pieceComponent,
        *(_QWORD *)(*(_QWORD *)pieceComponent + 480LL));
    }
    v74 = v6;
    if ( v46 | v74 && !this->fields._isDead_k__BackingField )
    {
      v75 = this->fields.pieceComponent;
      if ( v75
        && (methodPtr_low = LOBYTE(WarBoardServantPieceComponent_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v75->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (WarBoardServantPieceComponent_c *)v75->klass->_2.typeHierarchy[methodPtr_low - 1] == WarBoardServantPieceComponent_TypeInfo )
          v77 = (UnityEngine_Object_o *)this->fields.pieceComponent;
        else
          v77 = 0LL;
      }
      else
      {
        v77 = 0LL;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      pieceComponent = UnityEngine_Object__op_Inequality(v77, 0LL, 0LL);
      if ( (pieceComponent & 1) != 0 )
      {
        v78 = this->fields._battleServant_k__BackingField;
        if ( !v78 )
          goto LABEL_153;
        v80 = *(_QWORD *)&v78->fields.svtId.fields.currentCryptoKey;
        v79 = *(_QWORD *)&v78->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v106.fields.currentCryptoKey = v80;
        *(_QWORD *)&v106.fields.fakeValue = v79;
        v81 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v106, 0LL);
        v82 = this->fields.serverServantData;
        this->fields._iconId_k__BackingField = v81;
        if ( v82 && NpcSvtType__IsEnemy(v82->fields.npcSvtType, 0LL) )
        {
          pieceComponent = (__int64)this->fields._battleServant_k__BackingField;
          if ( !pieceComponent )
            goto LABEL_153;
          pieceComponent = BattleServantData__getLimitCount((BattleServantData_o *)pieceComponent, 0LL);
        }
        else
        {
          pieceComponent = (__int64)this->fields._battleServant_k__BackingField;
          if ( !pieceComponent )
            goto LABEL_153;
          pieceComponent = BattleServantData__GetIconImageLimitCount((BattleServantData_o *)pieceComponent, 0LL);
        }
        v83 = this->fields._battleServant_k__BackingField;
        this->fields._iconLimitCount_k__BackingField = pieceComponent;
        if ( !v83 )
          goto LABEL_153;
        pieceComponent = BattleServantData__getClassId(v83, 0LL);
        this->fields._iconClassId_k__BackingField = pieceComponent;
        p_iconClassId_k__BackingField = &this->fields._iconClassId_k__BackingField;
        v85 = this->fields._battleServant_k__BackingField;
        if ( !v85 )
          goto LABEL_153;
        this->fields._iconFrameType_k__BackingField = v85->fields._frameType_k__BackingField;
        this->fields._iconLevel_k__BackingField = v85->fields.level;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        pieceComponent = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantClassMaster___);
        if ( !pieceComponent )
          goto LABEL_153;
        pieceComponent = DataMasterBase_object__object__int___TryGetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)pieceComponent,
                           &entity,
                           *p_iconClassId_k__BackingField,
                           (const MethodInfo_311D988 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
        if ( (pieceComponent & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_153;
          p_iconClassId_k__BackingField = (int32_t *)&entity[2].monitor + 1;
        }
        this->fields._IconClassImageId_k__BackingField = *p_iconClassId_k__BackingField;
        if ( !v77 )
          goto LABEL_153;
        WarBoardServantPieceComponent__SetServantIcon((WarBoardServantPieceComponent_o *)v77, 0LL);
        ((void (__fastcall *)(UnityEngine_Object_o *, void *))v77->klass[1]._1.parent)(
          v77,
          v77->klass[1]._1.generic_class);
        ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *))v77->klass[1]._1.castClass)(
          v77,
          v77->klass[1]._1.declaringType);
      }
    }
    if ( v52 | v74 && !this->fields._isDead_k__BackingField )
    {
      pieceComponent = (__int64)this->fields.pieceComponent;
      if ( !pieceComponent )
        goto LABEL_153;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)pieceComponent + 584LL))(
        pieceComponent,
        *(_QWORD *)(*(_QWORD *)pieceComponent + 592LL));
    }
    pieceComponent = (__int64)this->fields.pieceComponent;
    if ( !pieceComponent )
LABEL_153:
      sub_1B8880C(pieceComponent, v24);
    WarBoardPieceBaseComponent__UpdateUiByBuffChanged((WarBoardPieceBaseComponent_o *)pieceComponent, 0LL);
    if ( !v51 )
      return;
    v86 = sub_1B887FC(WarBoardPieceData___c__DisplayClass316_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v86, 0LL);
    if ( !v86 )
      goto LABEL_153;
    *(_BYTE *)(v86 + 16) = 0;
    v87 = (System_Func_bool__o *)sub_1B887FC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v87,
      (Il2CppObject *)v86,
      Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__2__,
      0LL);
    v88 = (UnityEngine_WaitUntil_o *)sub_1B887FC(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v88, v87, 0LL);
    v89 = sub_1B887FC(WarBoardCallbackTask_TypeInfo);
    WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v89, (UnityEngine_CustomYieldInstruction_o *)v88, 0LL);
    if ( !v89 )
      goto LABEL_153;
    v90 = (System_Delegate_o **)(v89 + 32);
    v91 = *(System_Delegate_o **)(v89 + 32);
    v92 = (WarBoardTaskBase_TaskCallback_o *)sub_1B887FC(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      v92,
      (Il2CppObject *)v86,
      Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__3__,
      0LL);
    v93 = System_Delegate__Combine(v91, (System_Delegate_o *)v92, 0LL);
    v96 = v93;
    if ( v93 )
    {
      v97 = WarBoardTaskBase_TaskCallback_TypeInfo;
      if ( (WarBoardTaskBase_TaskCallback_c *)v93->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
      {
        *v90 = v93;
        if ( (WarBoardTaskBase_TaskCallback_c *)v93->klass == v97 )
        {
LABEL_146:
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v89 + 32), (int32_t)v96, v94, v95);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          pieceComponent = sub_1B88658(WarBoardTaskBase___TypeInfo, 1LL);
          if ( !pieceComponent )
            goto LABEL_153;
          v99 = pieceComponent;
          v100 = sub_1B886EC(v89, *(_QWORD *)(*(_QWORD *)pieceComponent + 64LL));
          if ( !v100 )
          {
            v104 = sub_1B88830(0LL);
            sub_1B886D8(v104, 0LL);
          }
          if ( !*(_DWORD *)(v99 + 24) )
            sub_1B88814(v100, v101);
          *(_QWORD *)(v99 + 32) = v89;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v99 + 32), v89, v102, v103);
          if ( !Instance )
            goto LABEL_153;
          WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 1, (WarBoardTaskBase_array *)v99, 0LL);
          return;
        }
      }
      sub_1B88ACC(v93);
    }
    *v90 = v96;
    goto LABEL_146;
  }
  masterInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.masterInfo;
  v12 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_WarBoardUserMasterData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)this,
    Method_WarBoardPieceData__UpdateFromServerData_b__316_0__,
    0LL);
  v13 = (struct WarBoardUserMasterData_o *)System_Linq_Enumerable__FirstOrDefault_object__48907856(
                                             masterInfo,
                                             (System_Func_TSource__bool__o *)v12,
                                             (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
  if ( !v13 )
    return;
  defeatPoint = v13->fields.defeatPoint;
  v17 = v13;
  if ( this->fields._breakPoint_k__BackingField > defeatPoint )
  {
    this->fields._breakPoint_k__BackingField = defeatPoint;
    if ( defeatPoint <= 0 )
      this->fields._isDead_k__BackingField = 1;
  }
  p_serverMasterData_k__BackingField = &this->fields._serverMasterData_k__BackingField;
  serverMasterData_k__BackingField = this->fields._serverMasterData_k__BackingField;
  if ( serverMasterData_k__BackingField )
    v20 = serverMasterData_k__BackingField->fields.commandSpellNum != v13->fields.commandSpellNum;
  else
    v20 = 1;
  this->fields._serverMasterData_k__BackingField = v13;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._serverMasterData_k__BackingField,
    (int32_t)v13,
    v14,
    v15);
  if ( this->fields._currentActionCount_k__BackingField == v17->fields.currentLimitActionPoint )
  {
    v42 = this->fields._Cost_k__BackingField;
    if ( v42 )
    {
      if ( !*p_serverMasterData_k__BackingField )
        goto LABEL_153;
      v43 = v42->fields._CurrentActionPoint_k__BackingField != (*p_serverMasterData_k__BackingField)->fields.currentPieceActionPoint;
    }
    else
    {
      v43 = 0;
    }
  }
  else
  {
    v43 = 1;
  }
  v53 = *p_serverMasterData_k__BackingField;
  if ( !*p_serverMasterData_k__BackingField )
    goto LABEL_153;
  pieceComponent = (__int64)this->fields._Cost_k__BackingField;
  *(int32x2_t *)&this->fields._limitActionCount_k__BackingField = vrev64_s32(*(int32x2_t *)&v53->fields.currentLimitActionPoint);
  this->fields._attackCount_k__BackingField = v53->fields.attackCount;
  this->fields._nowSquareIndex_k__BackingField = v53->fields.squareIndex;
  if ( !pieceComponent )
    goto LABEL_153;
  v54 = v6;
  WarBoardCost__UpdateCurrentPointByServerData(
    (WarBoardCost_o *)pieceComponent,
    v53->fields.currentPieceActionPoint,
    0LL);
  v55 = !this->fields._forceId_k__BackingField
     && !this->fields._groupId_k__BackingField
     && this->fields._type_k__BackingField == 1;
  if ( (v55 & (v20 | v54)) != 0 )
  {
    v56 = this->fields.pieceComponent;
    if ( v56
      && (v57 = LOBYTE(WarBoardMasterPieceComponent_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v56->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v57) )
    {
      v58 = (WarBoardMasterPieceComponent_c *)v56->klass->_2.typeHierarchy[v57 - 1] == WarBoardMasterPieceComponent_TypeInfo
          ? (UnityEngine_Object_o *)this->fields.pieceComponent
          : 0LL;
    }
    else
    {
      v58 = 0LL;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    pieceComponent = UnityEngine_Object__op_Inequality(v58, 0LL, 0LL);
    if ( (pieceComponent & 1) != 0 )
    {
      if ( !*p_serverMasterData_k__BackingField || !v58 )
        goto LABEL_153;
      WarBoardMasterPieceComponent__SetCommandSpellRemain(
        (WarBoardMasterPieceComponent_o *)v58,
        (*p_serverMasterData_k__BackingField)->fields.commandSpellNum,
        0LL);
    }
  }
  if ( v43 | v54 && !this->fields._isDead_k__BackingField )
  {
    pieceComponent = (__int64)this->fields.pieceComponent;
    if ( pieceComponent )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)pieceComponent + 472LL))(
        pieceComponent,
        *(_QWORD *)(*(_QWORD *)pieceComponent + 480LL));
      return;
    }
    goto LABEL_153;
  }
}


void __fastcall WarBoardPieceData__UpdateWidgetDepth(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_1B8880C(0LL, method);
  WarBoardPieceBaseComponent__UpdateWidgetDepth(pieceComponent, 0LL);
}


void __fastcall WarBoardPieceData__WallAttack(WarBoardPieceData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_1B8880C(0LL, squareIndex);
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
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
  return x->fields.forceId == this->fields._forceId_k__BackingField
      && x->fields.groupId == this->fields._groupId_k__BackingField;
}


bool __fastcall WarBoardPieceData___SetInitinalData_b__315_1(
        WarBoardPieceData_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
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
    sub_1B8880C(this, 0LL);
  return x->fields.forceId == this->fields._forceId_k__BackingField
      && x->fields.groupId == this->fields._groupId_k__BackingField;
}


bool __fastcall WarBoardPieceData___UpdateFromServerData_b__316_1(
        WarBoardPieceData_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.forceId == this->fields._forceId_k__BackingField
      && x->fields.groupId == this->fields._groupId_k__BackingField
      && x->fields.pieceIndex == this->fields._index_k__BackingField;
}


WarBoardActionPointEntity_o *__fastcall WarBoardPieceData__get_ActionPointEntity(
        WarBoardPieceData_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1

  if ( (byte_4A58F4D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_WarBoardActionPointMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    byte_4A58F4D = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_WarBoardActionPointMaster___);
  if ( !Master_object )
    sub_1B8880C(0LL, v4);
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
    sub_1B8880C(this, method);
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
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4A58F4C & 1) == 0 )
  {
    this = (WarBoardPieceData_o *)sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4A58F4C = 1;
  }
  serverServantData = v2->fields.serverServantData;
  if ( !serverServantData )
    sub_1B8880C(this, method);
  v4 = *(_OWORD *)&serverServantData->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&serverServantData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v6, 0LL);
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
    sub_1B8880C(0LL, method);
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

  if ( (byte_4A58F4A & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4A58F4A = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0LL )
    sub_1B8880C(Instance, v4);
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

  this->fields._Cost_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._Cost_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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

  this->fields._PrevAiRoute_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._PrevAiRoute_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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

  this->fields._battleServant_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._battleServant_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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

  this->fields._individuality_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._individuality_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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

  this->fields._serverMasterData_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._serverMasterData_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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


void __fastcall WarBoardPieceData_RouteSaveData___ctor_35571484(
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
  *(_OWORD *)&this->fields.forceId = xmmword_BB4BF0;
}


void __fastcall WarBoardPieceData_SaveData___ctor_35539960(
        WarBoardPieceData_SaveData_o *this,
        WarBoardPieceData_o *owner,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  const MethodInfo *v7; // x1
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  struct WarBoardPieceData_o *v11; // x0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.owner = owner;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.owner, (int32_t)owner, v5, v6);
  WarBoardPieceData_SaveData__Save(this, v7);
  v11 = this->fields.owner;
  if ( !v11 )
    sub_1B8880C(0LL, v8);
  v11->fields.localSaveData = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->fields.localSaveData, (int32_t)this, v9, v10);
}


void __fastcall WarBoardPieceData_SaveData__Load(WarBoardPieceData_SaveData_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct WarBoardPieceData_o *owner; // x0
  struct WarBoardPieceData_RouteSaveData_o *prevAiRoute; // x1
  int64_t Cost_k__BackingField; // x0
  BattleServantData_o *v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  struct WarBoardPieceData_o *v11; // x8
  struct WarBoardPieceData_o *v12; // x8
  struct WarBoardPieceData_o *v13; // x8
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  struct WarBoardUserServantData_o *serverServantData; // x8
  struct BattleBuffData_SaveData_o *buffSave; // x1
  struct WarBoardPieceData_o *v17; // x8
  struct WarBoardUserServantData_o *v18; // x8
  struct WarBoardPieceData_o *v19; // x8
  struct WarBoardUserServantData_o *v20; // x8
  __int128 v21; // q1
  WarBoardManager_o *v22; // x20
  const MethodInfo *v23; // x2
  struct WarBoardPieceData_o *v24; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-40h]

  if ( (byte_4A58F6B & 1) == 0 )
  {
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4A58F6B = 1;
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
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&owner->fields._PrevAiRoute_k__BackingField,
      (int32_t)prevAiRoute,
      v2,
      v3);
    v11 = this->fields.owner;
    if ( !v11 )
      goto LABEL_26;
    v11->fields._entryTurn_k__BackingField = this->fields.entryTurn;
    *(_QWORD *)&v11->fields._StageReinfoId_k__BackingField = *(_QWORD *)&this->fields.stageReinforcementId;
    *(_QWORD *)&v11->fields._overwriteActionType_k__BackingField = *(_QWORD *)&this->fields.overwriteActionType;
    Cost_k__BackingField = (int64_t)v11->fields._Cost_k__BackingField;
    if ( Cost_k__BackingField )
    {
      Cost_k__BackingField = WarBoardCost__get_HasCost((WarBoardCost_o *)Cost_k__BackingField, 0LL);
      if ( (Cost_k__BackingField & 1) != 0 )
      {
        v12 = this->fields.owner;
        if ( !v12 )
          goto LABEL_26;
        Cost_k__BackingField = (int64_t)v12->fields._Cost_k__BackingField;
        if ( !Cost_k__BackingField )
          goto LABEL_26;
        WarBoardCost__UpdateCurrentPointBySaveData(
          (WarBoardCost_o *)Cost_k__BackingField,
          this->fields.currentActionPoint,
          0LL);
      }
    }
    v13 = this->fields.owner;
    if ( v13 )
    {
      if ( v13->fields._type_k__BackingField == 1 )
      {
        serverMasterData_k__BackingField = v13->fields._serverMasterData_k__BackingField;
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
      serverServantData = v13->fields.serverServantData;
      if ( !serverServantData )
        return;
      *(_QWORD *)&serverServantData->fields.squareIndex = *(_QWORD *)&this->fields.squareIndex;
      buffSave = this->fields.buffSave;
      serverServantData->fields.buffDataSave = buffSave;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&serverServantData->fields.buffDataSave,
        (int32_t)buffSave,
        v9,
        v10);
      v17 = this->fields.owner;
      if ( v17 )
      {
        v18 = v17->fields.serverServantData;
        if ( v18 )
        {
          v18->fields.attackCount = this->fields.attackCount;
          *(_QWORD *)&v18->fields.currentHp = *(_QWORD *)&this->fields.hp;
          v18->fields.nextNpTurn = this->fields.tdTurn;
          v18->fields.criticalStars = this->fields.criticalStars;
          v18->fields.currentPieceActionPoint = this->fields.currentActionPoint;
          v18->fields.defeatPoint = this->fields.breakPoint;
          Cost_k__BackingField = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          v19 = this->fields.owner;
          if ( v19 )
          {
            v20 = v19->fields.serverServantData;
            if ( v20 )
            {
              v21 = *(_OWORD *)&v20->fields.id.fields.fakeValue;
              v22 = (WarBoardManager_o *)Cost_k__BackingField;
              *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)&v20->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v26.fields.fakeValue = v21;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v25 = v26;
              Cost_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46453324(&v25, 0LL);
              if ( v22 )
              {
                Cost_k__BackingField = (int64_t)WarBoardManager__GetBattleServant(v22, Cost_k__BackingField, 0LL);
                v24 = this->fields.owner;
                if ( v24 )
                {
                  v8 = (BattleServantData_o *)Cost_k__BackingField;
                  Cost_k__BackingField = (int64_t)v24->fields.serverServantData;
                  if ( Cost_k__BackingField )
                  {
                    WarBoardUserServantData__SetBattleServantData(
                      (WarBoardUserServantData_o *)Cost_k__BackingField,
                      v8,
                      v23);
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
    sub_1B8880C(Cost_k__BackingField, v8);
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
  int32_t v2; // w2
  int32_t v3; // w3
  struct WarBoardPieceData_o *owner; // x8
  WarBoardPieceData_SaveData_o *v5; // x19
  WarBoardCost_o *Cost_k__BackingField; // x0
  struct WarBoardPieceData_o *v7; // x8
  struct WarBoardCost_o *v8; // x8
  int32_t CurrentActionPoint_k__BackingField; // w8
  int32_t v10; // w2
  int32_t v11; // w3
  struct WarBoardPieceData_o *v12; // x8
  struct WarBoardPieceData_RouteSaveData_o *PrevAiRoute_k__BackingField; // x1
  struct WarBoardPieceData_o *v14; // x8
  int32_t type_k__BackingField; // w9
  struct WarBoardUserServantData_o *serverServantData; // x9
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  BattleBuffData_SaveData_o *SaveData; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  struct WarBoardPieceData_o *v21; // x8
  struct WarBoardPieceData_o *v22; // x8
  struct BattleServantData_o *v23; // x8
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8

  owner = this->fields.owner;
  if ( !owner )
    goto LABEL_24;
  v5 = this;
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
    v7 = v5->fields.owner;
    if ( !v7 )
      goto LABEL_24;
    v8 = v7->fields._Cost_k__BackingField;
    if ( !v8 )
      goto LABEL_24;
    CurrentActionPoint_k__BackingField = v8->fields._CurrentActionPoint_k__BackingField;
  }
  else
  {
    CurrentActionPoint_k__BackingField = 0;
  }
  v5->fields.buffSave = 0LL;
  v5->fields.consumedActionPointDateTime = 0;
  v5->fields.currentActionPoint = CurrentActionPoint_k__BackingField;
  v5->fields.consumedRecoverDonotActCostDateTime = 0;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.buffSave, 0, v2, v3);
  v12 = v5->fields.owner;
  v5->fields.currentForceActionPoint = 0;
  if ( !v12 )
    goto LABEL_24;
  PrevAiRoute_k__BackingField = v12->fields._PrevAiRoute_k__BackingField;
  v5->fields.prevAiRoute = PrevAiRoute_k__BackingField;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v5->fields.prevAiRoute,
    (int32_t)PrevAiRoute_k__BackingField,
    v10,
    v11);
  v14 = v5->fields.owner;
  if ( !v14 )
    goto LABEL_24;
  v5->fields.entryTurn = v14->fields._entryTurn_k__BackingField;
  *(_QWORD *)&v5->fields.stageReinforcementId = *(_QWORD *)&v14->fields._StageReinfoId_k__BackingField;
  *(_QWORD *)&v5->fields.overwriteActionType = *(_QWORD *)&v14->fields._overwriteActionType_k__BackingField;
  type_k__BackingField = v14->fields._type_k__BackingField;
  if ( type_k__BackingField == 1 )
  {
    serverMasterData_k__BackingField = v14->fields._serverMasterData_k__BackingField;
    if ( serverMasterData_k__BackingField )
      v5->fields.currentForceActionPoint = serverMasterData_k__BackingField->fields.currentForceActionPoint;
  }
  else if ( !type_k__BackingField )
  {
    serverServantData = v14->fields.serverServantData;
    if ( serverServantData )
    {
      v5->fields.consumedActionPointDateTime = serverServantData->fields.consumedActionPointDateTime;
      v5->fields.criticalStars = serverServantData->fields.criticalStars;
      v5->fields.consumedRecoverDonotActCostDateTime = serverServantData->fields.consumedRecoverDonotActCostDateTime;
    }
    battleServant_k__BackingField = v14->fields._battleServant_k__BackingField;
    if ( battleServant_k__BackingField )
    {
      this = (WarBoardPieceData_SaveData_o *)battleServant_k__BackingField->fields.buffData;
      if ( this )
      {
        SaveData = BattleBuffData__getSaveData((BattleBuffData_o *)this, 0LL);
        v5->fields.buffSave = SaveData;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->fields.buffSave, (int32_t)SaveData, v19, v20);
        v21 = v5->fields.owner;
        if ( v21 )
        {
          this = (WarBoardPieceData_SaveData_o *)v21->fields._battleServant_k__BackingField;
          if ( this )
          {
            this = (WarBoardPieceData_SaveData_o *)((__int64 (__fastcall *)(WarBoardPieceData_SaveData_o *, void *))this->klass[1]._1.parent)(
                                                     this,
                                                     this->klass[1]._1.generic_class);
            v22 = v5->fields.owner;
            v5->fields.hp = (int)this;
            if ( v22 )
            {
              v23 = v22->fields._battleServant_k__BackingField;
              if ( v23 )
              {
                v5->fields.np = v23->fields.np;
                v5->fields.tdTurn = v23->fields.nexttpturn;
                return;
              }
            }
          }
        }
      }
LABEL_24:
      sub_1B8880C(this, method);
    }
  }
}


void __fastcall WarBoardPieceData_SaveData__SetOwner(
        WarBoardPieceData_SaveData_o *this,
        WarBoardData_o *data,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *Piece; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w2
  int32_t v8; // w3
  struct WarBoardPieceData_o *owner; // x0

  if ( !data )
    sub_1B8880C(this, 0LL);
  Piece = WarBoardData__GetPiece(data, this->fields.forceId, this->fields.groupId, this->fields.pieceIndex, 0, 0LL);
  this->fields.owner = Piece;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.owner, (int32_t)Piece, v5, v6);
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields.localSaveData = this;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&owner->fields.localSaveData, (int32_t)this, v7, v8);
  }
}


void __fastcall WarBoardPieceData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A58F6C & 1) == 0 )
  {
    sub_1B885B0(&WarBoardPieceData___c_TypeInfo);
    byte_4A58F6C = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(WarBoardPieceData___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  WarBoardPieceData___c_TypeInfo->static_fields->__9 = (struct WarBoardPieceData___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)WarBoardPieceData___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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


WarBoardWallData_o *__fastcall WarBoardPieceData___c__DisplayClass223_0___HasVitalityToDoAnyActions_b__0(
        WarBoardPieceData___c__DisplayClass223_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  WarBoardData_o *warBoardData; // x0

  warBoardData = this->fields.warBoardData;
  if ( !warBoardData )
    sub_1B8880C(0LL, x);
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
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  System_Action_bool__o *_9__4; // x22
  WarBoardManager_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A58F6D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_bool__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__4__);
    byte_4A58F6D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__4 = this->fields.__9__4;
  v6 = (WarBoardManager_o *)Instance;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_bool__o *)sub_1B887FC(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__4__,
      0LL);
    this->fields.__9__4 = _9__4;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__4, (int32_t)_9__4, v7, v8);
  }
  if ( !v6 )
    sub_1B8880C(Instance, v4);
  WarBoardManager__ShowActionCountDecreaseNoticePopup(v6, _9__4, 0LL);
}


void __fastcall WarBoardPieceData___c__DisplayClass316_0___UpdateFromServerData_b__4(
        WarBoardPieceData___c__DisplayClass316_0_o *this,
        bool ok,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  System_Action_o *_9__5; // x22
  WarBoardManager_o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A58F6E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1B885B0(&Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__5__);
    byte_4A58F6E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__5 = this->fields.__9__5;
  v7 = (WarBoardManager_o *)Instance;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)this,
      Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__5__,
      0LL);
    this->fields.__9__5 = _9__5;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.__9__5, (int32_t)_9__5, v8, v9);
  }
  if ( !v7 )
    sub_1B8880C(Instance, v5);
  WarBoardManager__HideActionCountDecreaseNoticePopup(v7, _9__5, 0LL);
}


void __fastcall WarBoardPieceData___c__DisplayClass316_0___UpdateFromServerData_b__5(
        WarBoardPieceData___c__DisplayClass316_0_o *this,
        const MethodInfo *method)
{
  this->fields.popupClose = 1;
}