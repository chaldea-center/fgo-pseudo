void __fastcall WarBoardPieceData___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4A6DC6E & 1) == 0 )
  {
    sub_1B90010(&WarBoardPieceData_TypeInfo, v1);
    byte_4A6DC6E = 1;
  }
  *WarBoardPieceData_TypeInfo->static_fields = (struct WarBoardPieceData_StaticFields)xmmword_BB6AF0;
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
  Il2CppObject *v27; // x27
  int32_t v28; // w2
  int32_t v29; // w3
  int64_t Master_object; // x0
  const MethodInfo *v31; // x1
  int32_t pieceIndex; // w27
  int32_t forceId; // w21
  int32_t groupId; // w28
  int32_t squareIndex; // w8
  struct System_Int32_array *Individuality; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t breakPoint; // w8
  int32_t restrictionId; // w8
  struct BattleServantData_o **p_battleServant_k__BackingField; // x25
  int32_t v42; // w2
  int32_t v43; // w3
  int32_t v44; // w2
  int32_t v45; // w3
  int32_t TurnCount; // w0
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x8
  WarBoardStagePieceDetailEntity_o *v48; // x8
  int32_t type_k__BackingField; // w8
  struct WarBoardUserMasterData_o **p_serverMasterData_k__BackingField; // x27
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  Il2CppObject *v52; // x26
  const MethodInfo *v53; // x1
  WarBoardActionPointClassEntity_o *MasterEntityFromStageId; // x0
  struct WarBoardCost_o *v55; // x0
  struct WarBoardCost_o **p_Cost_k__BackingField; // x26
  int32_t v57; // w2
  int32_t v58; // w3
  struct WarBoardUserMasterData_o *v59; // x8
  struct WarBoardUserMasterData_o *v60; // x8
  int32_t defeatPoint; // w8
  Il2CppObject *Instance; // x0
  __int128 v63; // q1
  WarBoardManager_o *v64; // x26
  struct BattleServantData_o *BattleServant; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  int32_t v68; // w2
  int32_t v69; // w3
  Il2CppObject *v70; // x26
  const MethodInfo *v71; // x1
  WarBoardActionPointEntity_o *v72; // x27
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  struct WarBoardCost_o *v74; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  int32_t v77; // w8
  int32_t forceId_k__BackingField; // w9
  int64_t userEquipId; // x8
  __int64 v80; // x0
  __int64 v81; // x0
  __int64 v82; // x20
  __int64 v83; // x21
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t npcId; // x8
  __int64 v86; // x8
  int64_t npcSvtEquipId; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v89; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v91; // 0:x0.16

  if ( (byte_4A6DC52 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_UserEquipMaster___, layout);
    sub_1B90010(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___, v16);
    sub_1B90010(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___, v17);
    sub_1B90010(&DataManager_TypeInfo, v18);
    sub_1B90010(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v19);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__, v20);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v22);
    sub_1B90010(&WarBoardPieceData_PieceStatusCache_TypeInfo, v23);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v24);
    sub_1B90010(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v25);
    sub_1B90010(&WarBoardPieceData_TypeInfo, v26);
    byte_4A6DC52 = 1;
  }
  v27 = (Il2CppObject *)sub_1B9025C(WarBoardPieceData_PieceStatusCache_TypeInfo);
  System_Object___ctor(v27, 0LL);
  this->fields.statusCache = (struct WarBoardPieceData_PieceStatusCache_o *)v27;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.statusCache, (int32_t)v27, v28, v29);
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
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields._individuality_k__BackingField,
    (int32_t)Individuality,
    v37,
    v38);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields._battleServant_k__BackingField, 0, v42, v43);
  this->fields._isDead_k__BackingField = 0;
  this->fields._isEditing_k__BackingField = 0;
  this->fields._isNotIncludeWin_k__BackingField = 0;
  this->fields._roleType_k__BackingField = 0;
  this->fields._IsDispConsumedPieceActionPoint_k__BackingField = 0;
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_85;
  if ( *(_QWORD *)(Master_object + 440) )
  {
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    v48 = this->fields.stagePieceDetailEntity;
    this->fields._roleType_k__BackingField = Master_object;
    if ( !v48 )
      goto LABEL_85;
    this->fields._isNotIncludeWin_k__BackingField = WarBoardStagePieceDetailEntity__IsNotIncludeWin(v48, 0LL);
  }
  type_k__BackingField = this->fields._type_k__BackingField;
  if ( masterData && type_k__BackingField == 1 )
  {
    this->fields._serverMasterData_k__BackingField = masterData;
    p_serverMasterData_k__BackingField = &this->fields._serverMasterData_k__BackingField;
    sub_1B8FFB4(
      (ServantStatusBattleListViewItem_o *)&this->fields._serverMasterData_k__BackingField,
      (int32_t)masterData,
      v44,
      v45);
    serverMasterData_k__BackingField = this->fields._serverMasterData_k__BackingField;
    if ( !serverMasterData_k__BackingField )
      goto LABEL_85;
    this->fields._nowSquareIndex_k__BackingField = serverMasterData_k__BackingField->fields.squareIndex;
    *(int32x2_t *)&this->fields._limitActionCount_k__BackingField = vrev64_s32(*(int32x2_t *)&serverMasterData_k__BackingField->fields.currentLimitActionPoint);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v52 = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    Master_object = (int64_t)WarBoardPieceData__get_ActionPointEntity(this, v53);
    if ( !v52 )
      goto LABEL_85;
    MasterEntityFromStageId = WarBoardActionPointClassMaster__GetMasterEntityFromStageId(
                                (WarBoardActionPointClassMaster_o *)v52,
                                (WarBoardActionPointEntity_o *)Master_object,
                                0LL);
    v55 = WarBoardCost__Create(MasterEntityFromStageId, this->fields.stagePieceDetailEntity, 0LL, 0LL);
    this->fields._Cost_k__BackingField = v55;
    p_Cost_k__BackingField = &this->fields._Cost_k__BackingField;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields._Cost_k__BackingField, (int32_t)v55, v57, v58);
    v59 = this->fields._serverMasterData_k__BackingField;
    if ( !v59 )
      goto LABEL_85;
    Master_object = (int64_t)*p_Cost_k__BackingField;
    if ( !*p_Cost_k__BackingField )
      goto LABEL_85;
    WarBoardCost__UpdateCurrentPointByServerData(
      (WarBoardCost_o *)Master_object,
      v59->fields.currentPieceActionPoint,
      0LL);
    v60 = *p_serverMasterData_k__BackingField;
    if ( !*p_serverMasterData_k__BackingField )
      goto LABEL_85;
    this->fields._attackCount_k__BackingField = v60->fields.attackCount;
    defeatPoint = v60->fields.defeatPoint;
    this->fields._breakPoint_k__BackingField = defeatPoint;
    if ( defeatPoint <= 0 )
LABEL_40:
      this->fields._isDead_k__BackingField = 1;
  }
  else if ( servantData && !type_k__BackingField )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v63 = *(_OWORD *)&servantData->fields.id.fields.fakeValue;
    v64 = (WarBoardManager_o *)Instance;
    *(_OWORD *)&v90.fields.currentCryptoKey = *(_OWORD *)&servantData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v90.fields.fakeValue = v63;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v89 = v90;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(&v89, 0LL);
    if ( !v64 )
      goto LABEL_85;
    BattleServant = WarBoardManager__GetBattleServant(v64, Master_object, 0LL);
    this->fields._battleServant_k__BackingField = BattleServant;
    sub_1B8FFB4(
      (ServantStatusBattleListViewItem_o *)&this->fields._battleServant_k__BackingField,
      (int32_t)BattleServant,
      v66,
      v67);
    this->fields.serverServantData = servantData;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.serverServantData, (int32_t)servantData, v68, v69);
    this->fields._nowSquareIndex_k__BackingField = servantData->fields.squareIndex;
    *(int32x2_t *)&this->fields._limitActionCount_k__BackingField = vrev64_s32(*(int32x2_t *)&servantData->fields.currentActionPoint);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v70 = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    Master_object = (int64_t)WarBoardPieceData__get_ActionPointEntity(this, v71);
    if ( !this->fields._battleServant_k__BackingField )
      goto LABEL_85;
    v72 = (WarBoardActionPointEntity_o *)Master_object;
    Master_object = BattleServantData__getClassId(this->fields._battleServant_k__BackingField, 0LL);
    if ( !v70 )
      goto LABEL_85;
    EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                    (WarBoardActionPointClassMaster_o *)v70,
                                    v72,
                                    Master_object,
                                    0LL);
    v74 = WarBoardCost__Create(EntityFromActionPointEntity, this->fields.stagePieceDetailEntity, 0LL, 0LL);
    this->fields._Cost_k__BackingField = v74;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields._Cost_k__BackingField, (int32_t)v74, v75, v76);
    Master_object = (int64_t)this->fields._Cost_k__BackingField;
    if ( !Master_object )
      goto LABEL_85;
    WarBoardCost__UpdateCurrentPointByServerData(
      (WarBoardCost_o *)Master_object,
      servantData->fields.currentPieceActionPoint,
      0LL);
    this->fields._attackCount_k__BackingField = servantData->fields.attackCount;
    v77 = servantData->fields.defeatPoint;
    this->fields._breakPoint_k__BackingField = v77;
    if ( (v77 & 0x80000000) != 0 )
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
                                 (const MethodInfo_321197C *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    }
    else
    {
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
      sub_1B9026C(Master_object, v31);
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
    v80 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v80 + 309) & 1) == 0 )
      v80 = sub_1BE1EEC(v80);
    v81 = *(_QWORD *)(*(_QWORD *)(v80 + 192) + 16LL);
    if ( (*(_BYTE *)(v81 + 309) & 1) == 0 )
      v81 = sub_1BE1EEC(v81);
    Master_object = **(_QWORD **)(v81 + 184);
    if ( !Master_object )
      goto LABEL_85;
    Master_object = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_UserEquipMaster___);
    if ( !Master_object )
      goto LABEL_85;
    Master_object = (int64_t)DataMasterBase_object__object__long___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                               this->fields._CurrentUserEquipId_k__BackingField,
                               (const MethodInfo_312C754 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    if ( !Master_object )
      goto LABEL_85;
    v83 = *(_QWORD *)(Master_object + 32);
    v82 = *(_QWORD *)(Master_object + 40);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v91.fields.currentCryptoKey = v83;
    *(_QWORD *)&v91.fields.fakeValue = v82;
    this->fields._iconId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v91, 0LL);
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
                                     (const MethodInfo_321197C *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
        }
        else
        {
          Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
          v86 = *(_QWORD *)(Master_object + 48);
          if ( !v86 )
            goto LABEL_85;
          if ( *(_DWORD *)(v86 + 24) <= (unsigned int)npcIdx )
            sub_1B90274(Master_object, v31);
          npcId = *(_QWORD *)(v86 + 8LL * (unsigned int)npcIdx + 32);
        }
        this->fields._npcId_k__BackingField = npcId;
        npcSvtEquipId = servantData->fields.npcSvtEquipId;
        this->fields._isEditing_k__BackingField = 1;
        this->fields._npcEquipId_k__BackingField = npcSvtEquipId;
      }
LABEL_83:
      WarBoardPieceData__SetServantIconData(this, v31);
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


void __fastcall WarBoardPieceData___ctor_35608436(
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
  Il2CppObject *v24; // x27
  int32_t v25; // w2
  int32_t v26; // w3
  int64_t Instance; // x0
  const MethodInfo *v28; // x1
  int32_t id; // w8
  int32_t v30; // w8
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
  Il2CppObject *v42; // x0
  __int128 v43; // q0
  WarBoardManager_o *v44; // x24
  struct BattleServantData_o *BattleServant; // x0
  struct BattleServantData_o **p_battleServant_k__BackingField; // x24
  int32_t v47; // w2
  int32_t v48; // w3
  int32_t v49; // w2
  int32_t v50; // w3
  int32_t v51; // w8
  Il2CppObject *Master_object; // x25
  const MethodInfo *v53; // x1
  WarBoardActionPointEntity_o *v54; // x26
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  struct WarBoardCost_o *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  int32_t forceId_k__BackingField; // w9
  int defeatPoint; // w8
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t npcId; // x8
  __int64 v63; // x8
  int64_t npcSvtEquipId; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v65; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v66; // [xsp+20h] [xbp-90h]
  int32_t value; // [xsp+4Ch] [xbp-64h] BYREF

  if ( (byte_4A6DC53 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___, stageReinforcementsEntity);
    sub_1B90010(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___, v17);
    sub_1B90010(&DataManager_TypeInfo, v18);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__, v19);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v20);
    sub_1B90010(&WarBoardPieceData_PieceStatusCache_TypeInfo, v21);
    sub_1B90010(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v22);
    sub_1B90010(&WarBoardPieceData_TypeInfo, v23);
    byte_4A6DC53 = 1;
  }
  value = 0;
  v24 = (Il2CppObject *)sub_1B9025C(WarBoardPieceData_PieceStatusCache_TypeInfo);
  System_Object___ctor(v24, 0LL);
  this->fields.statusCache = (struct WarBoardPieceData_PieceStatusCache_o *)v24;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.statusCache, (int32_t)v24, v25, v26);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !stageReinforcementsEntity )
    goto LABEL_53;
  this->fields.stageId = stageReinforcementsEntity->fields.warBoardStageId;
  id = stageReinforcementsEntity->fields.id;
  this->fields._ReinfoIndex_k__BackingField = reinfoIndex;
  this->fields._StageReinfoId_k__BackingField = id;
  if ( !reinfoEntity )
    goto LABEL_53;
  v30 = reinfoEntity->fields.id;
  this->fields._type_k__BackingField = 0;
  this->fields._ReinfoId_k__BackingField = v30;
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
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  if ( *(_QWORD *)(Instance + 440) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
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
  v42 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v43 = *(_OWORD *)&servantData->fields.id.fields.fakeValue;
  v44 = (WarBoardManager_o *)v42;
  *(_OWORD *)&v66.fields.currentCryptoKey = *(_OWORD *)&servantData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v66.fields.fakeValue = v43;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v65 = v66;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(&v65, 0LL);
  if ( !v44 )
    goto LABEL_53;
  BattleServant = WarBoardManager__GetBattleServant(v44, Instance, 0LL);
  this->fields._battleServant_k__BackingField = BattleServant;
  p_battleServant_k__BackingField = &this->fields._battleServant_k__BackingField;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields._battleServant_k__BackingField,
    (int32_t)BattleServant,
    v47,
    v48);
  this->fields.serverServantData = servantData;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.serverServantData, (int32_t)servantData, v49, v50);
  v51 = servantData->fields.squareIndex;
  this->fields._nowSquareIndex_k__BackingField = v51;
  this->fields._PutSquareIndex_k__BackingField = v51;
  *(int32x2_t *)&this->fields._limitActionCount_k__BackingField = vrev64_s32(*(int32x2_t *)&servantData->fields.currentActionPoint);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
  Instance = (int64_t)WarBoardPieceData__get_ActionPointEntity(this, v53);
  if ( !this->fields._battleServant_k__BackingField
    || (v54 = (WarBoardActionPointEntity_o *)Instance,
        Instance = BattleServantData__getClassId(this->fields._battleServant_k__BackingField, 0LL),
        !Master_object)
    || (EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                        (WarBoardActionPointClassMaster_o *)Master_object,
                                        v54,
                                        Instance,
                                        0LL),
        v56 = WarBoardCost__Create(EntityFromActionPointEntity, this->fields.stagePieceDetailEntity, reinfoEntity, 0LL),
        this->fields._Cost_k__BackingField = v56,
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields._Cost_k__BackingField, (int32_t)v56, v57, v58),
        (Instance = (int64_t)this->fields._Cost_k__BackingField) == 0) )
  {
LABEL_53:
    sub_1B9026C(Instance, v28);
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
                            (const MethodInfo_321197C *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    }
    else
    {
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    v63 = *(_QWORD *)(Instance + 48);
    if ( !v63 )
      goto LABEL_53;
    if ( *(_DWORD *)(v63 + 24) > (unsigned int)npcIdx )
    {
      npcId = *(_QWORD *)(v63 + 8LL * (unsigned int)npcIdx + 32);
      goto LABEL_51;
    }
LABEL_54:
    sub_1B90274(Instance, v28);
  }
LABEL_52:
  WarBoardPieceData__SetServantIconData(this, v28);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceData___ctor_35609644(
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
  Il2CppObject *v22; // x25
  int32_t v23; // w2
  int32_t v24; // w3
  int64_t Master_object; // x0
  const MethodInfo *v26; // x1
  struct System_Int32_array *reinforcementsIds; // x8
  __int64 ReinfoIndex_k__BackingField; // x9
  WarBoardReinforcementsEntity_o *v29; // x8
  int32_t id; // w9
  int32_t forceId; // w26
  int32_t groupId; // w27
  int32_t pieceIndex; // w28
  int32_t squareIndex; // w9
  struct WarBoardStagePieceDetailEntity_o **p_stagePieceDetailEntity; // x24
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x8
  bool IsNotIncludeWin; // w8
  int32_t actionType; // w8
  __int128 v39; // q1
  WarBoardManager_o *v40; // x23
  struct BattleServantData_o *BattleServant; // x0
  struct BattleServantData_o **p_battleServant_k__BackingField; // x23
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t v45; // w2
  int32_t v46; // w3
  int32_t v47; // w8
  Il2CppObject *v48; // x24
  const MethodInfo *v49; // x1
  WarBoardActionPointEntity_o *v50; // x25
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  struct WarBoardCost_o *v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  int32_t forceId_k__BackingField; // w9
  int defeatPoint; // w8
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t npcId; // x8
  __int64 v59; // x8
  int64_t npcSvtEquipId; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v61; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v62; // [xsp+20h] [xbp-90h]
  int32_t value; // [xsp+44h] [xbp-6Ch] BYREF
  WarBoardReinforcementsEntity_o *reinforcementsEntity; // [xsp+48h] [xbp-68h] BYREF
  WarBoardStageReinforcementsEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_4A6DC54 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___, *(_QWORD *)&stageId);
    sub_1B90010(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, v13);
    sub_1B90010(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___, v14);
    sub_1B90010(&Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___, v15);
    sub_1B90010(&DataManager_TypeInfo, v16);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__, v17);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v18);
    sub_1B90010(&WarBoardPieceData_PieceStatusCache_TypeInfo, v19);
    sub_1B90010(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v20);
    sub_1B90010(&WarBoardPieceData_TypeInfo, v21);
    byte_4A6DC54 = 1;
  }
  entity = 0LL;
  reinforcementsEntity = 0LL;
  value = 0;
  v22 = (Il2CppObject *)sub_1B9025C(WarBoardPieceData_PieceStatusCache_TypeInfo);
  System_Object___ctor(v22, 0LL);
  this->fields.statusCache = (struct WarBoardPieceData_PieceStatusCache_o *)v22;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.statusCache, (int32_t)v22, v23, v24);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.stageId = stageId;
  if ( !saveData )
    goto LABEL_54;
  *(_QWORD *)&this->fields._StageReinfoId_k__BackingField = *(_QWORD *)&saveData->fields.stageReinforcementId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
  if ( !Master_object )
    goto LABEL_54;
  WarBoardStageReinforcementsMaster__TryGetEntity(
    (WarBoardStageReinforcementsMaster_o *)Master_object,
    &entity,
    stageId,
    this->fields._StageReinfoId_k__BackingField,
    0LL);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
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
  v29 = reinforcementsEntity;
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
    v29 = reinforcementsEntity;
  }
  this->fields._uniqueIndex_k__BackingField = (forceId << 24) | ((unsigned __int8)groupId << 16) | (unsigned __int16)pieceIndex;
  squareIndex = saveData->fields.squareIndex;
  this->fields._nowSquareIndex_k__BackingField = squareIndex;
  this->fields._PutSquareIndex_k__BackingField = squareIndex;
  *(_QWORD *)&this->fields._overwriteActionType_k__BackingField = *(_QWORD *)&saveData->fields.overwriteActionType;
  this->fields._entryTurn_k__BackingField = saveData->fields.entryTurn;
  if ( !v29 )
    goto LABEL_54;
  this->fields._breakPointMax_k__BackingField = v29->fields.breakPoint;
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
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
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !servantData )
    goto LABEL_54;
  v39 = *(_OWORD *)&servantData->fields.id.fields.fakeValue;
  v40 = (WarBoardManager_o *)Master_object;
  *(_OWORD *)&v62.fields.currentCryptoKey = *(_OWORD *)&servantData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v62.fields.fakeValue = v39;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v61 = v62;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(&v61, 0LL);
  if ( !v40 )
    goto LABEL_54;
  BattleServant = WarBoardManager__GetBattleServant(v40, Master_object, 0LL);
  this->fields._battleServant_k__BackingField = BattleServant;
  p_battleServant_k__BackingField = &this->fields._battleServant_k__BackingField;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields._battleServant_k__BackingField,
    (int32_t)BattleServant,
    v43,
    v44);
  this->fields.serverServantData = servantData;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.serverServantData, (int32_t)servantData, v45, v46);
  v47 = servantData->fields.squareIndex;
  this->fields._nowSquareIndex_k__BackingField = v47;
  this->fields._PutSquareIndex_k__BackingField = v47;
  *(int32x2_t *)&this->fields._limitActionCount_k__BackingField = vrev64_s32(*(int32x2_t *)&servantData->fields.currentActionPoint);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v48 = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
  Master_object = (int64_t)WarBoardPieceData__get_ActionPointEntity(this, v49);
  if ( !this->fields._battleServant_k__BackingField
    || (v50 = (WarBoardActionPointEntity_o *)Master_object,
        Master_object = BattleServantData__getClassId(this->fields._battleServant_k__BackingField, 0LL),
        !v48)
    || (EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                        (WarBoardActionPointClassMaster_o *)v48,
                                        v50,
                                        Master_object,
                                        0LL),
        v52 = WarBoardCost__Create(
                EntityFromActionPointEntity,
                this->fields.stagePieceDetailEntity,
                reinforcementsEntity,
                0LL),
        this->fields._Cost_k__BackingField = v52,
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields._Cost_k__BackingField, (int32_t)v52, v53, v54),
        (Master_object = (int64_t)this->fields._Cost_k__BackingField) == 0) )
  {
LABEL_54:
    sub_1B9026C(Master_object, v26);
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
                                 (const MethodInfo_321197C *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    }
    else
    {
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    v59 = *(_QWORD *)(Master_object + 48);
    if ( !v59 )
      goto LABEL_54;
    if ( *(_DWORD *)(v59 + 24) > (unsigned int)npcIdx )
    {
      npcId = *(_QWORD *)(v59 + 8LL * (unsigned int)npcIdx + 32);
      goto LABEL_52;
    }
LABEL_55:
    sub_1B90274(Master_object, v26);
  }
LABEL_53:
  WarBoardPieceData__SetServantIconData(this, v26);
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
    sub_1B9026C(Cost_k__BackingField, method);
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
    sub_1B9026C(this, flg);
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
      sub_1B9026C(0LL, count);
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
    sub_1B9026C(0LL, squareIndex);
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
    sub_1B9026C(0LL, squareIndex);
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
          sub_1B9026C(this, enemyIcon);
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
    sub_1B9026C(0LL, squareIndex);
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
      sub_1B9026C(Cost_k__BackingField, method);
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
    sub_1B9026C(0LL, squareIndex);
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
    sub_1B9026C(pieceComponent, method);
  }
}


bool __fastcall WarBoardPieceData__CheckWallAttackCond(
        WarBoardPieceData_o *this,
        WarBoardWallData_o *targetWall,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct WarBoardStageWallEntity_o *wallEntity; // x8
  int32_t attackForceId; // w8
  _QWORD *v8; // x21
  __int64 v9; // x8
  __int64 v10; // x0
  System_Int32_array *CondAttackIndividuality; // x0
  System_Int32_array *v12; // x20
  System_Int32_array *Individuality; // x0
  __int64 v14; // x1
  __int64 v15; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x19
  unsigned __int64 v17; // x21

  if ( (byte_4A6DC5B & 1) == 0 )
  {
    sub_1B90010(&Method_System_Array_Empty_int___, targetWall);
    sub_1B90010(&Method_System_Linq_Enumerable_Contains_int___, v5);
    byte_4A6DC5B = 1;
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
  v8 = Method_System_Array_Empty_int___;
  v9 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
  if ( !v9 )
  {
    sub_1BE1F48(Method_System_Array_Empty_int___);
    v9 = v8[7];
  }
  v10 = *(_QWORD *)(v9 + 16);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BE1EEC(v10);
  if ( !*(_DWORD *)(v10 + 224) )
    j_il2cpp_runtime_class_init_0(v10);
  CondAttackIndividuality = *(System_Int32_array **)(v8[7] + 16LL);
  if ( (CondAttackIndividuality->m_Items[70] & 0x100) == 0 )
    CondAttackIndividuality = (System_Int32_array *)sub_1BE1EEC(CondAttackIndividuality);
  if ( targetWall->fields.wallEntity )
  {
    CondAttackIndividuality = WarBoardStageWallEntity__GetCondAttackIndividuality(targetWall->fields.wallEntity, 0LL);
    v12 = CondAttackIndividuality;
    if ( CondAttackIndividuality )
      goto LABEL_17;
LABEL_27:
    sub_1B9026C(CondAttackIndividuality, targetWall);
  }
  v12 = **(System_Int32_array ***)&CondAttackIndividuality->m_Items[39];
  if ( !v12 )
    goto LABEL_27;
LABEL_17:
  if ( !*(_QWORD *)&v12->max_length )
  {
    LOBYTE(Individuality) = 1;
    return (unsigned __int8)Individuality & 1;
  }
  Individuality = WarBoardPieceData__GetIndividuality(this, 0LL, method);
  v15 = *(_QWORD *)&v12->max_length;
  if ( (int)v15 < 1 )
    goto LABEL_24;
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)Individuality;
  v17 = 0LL;
  do
  {
    if ( v17 >= (unsigned int)v15 )
      sub_1B90274(Individuality, v14);
    Individuality = (System_Int32_array *)System_Linq_Enumerable__Contains_int_(
                                            v16,
                                            v12->m_Items[v17 + 1],
                                            (const MethodInfo_2EA8328 *)Method_System_Linq_Enumerable_Contains_int___);
    if ( ((unsigned __int8)Individuality & 1) != 0 )
      break;
    LODWORD(v15) = v12->max_length;
    ++v17;
  }
  while ( (__int64)v17 < (int)v15 );
  return (unsigned __int8)Individuality & 1;
}


void __fastcall WarBoardPieceData__ClearPartyBuff(WarBoardPieceData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x9
  __int64 methodPtr_low; // x12
  UnityEngine_Object_o *v6; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_4A6DC63 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, method);
    sub_1B90010(&WarBoardServantPieceComponent_TypeInfo, v3);
    byte_4A6DC63 = 1;
  }
  pieceComponent = this->fields.pieceComponent;
  if ( pieceComponent
    && (methodPtr_low = LOBYTE(WarBoardServantPieceComponent_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(pieceComponent->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (WarBoardServantPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[methodPtr_low - 1] == WarBoardServantPieceComponent_TypeInfo )
      v6 = (UnityEngine_Object_o *)this->fields.pieceComponent;
    else
      v6 = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__op_Equality(v6, 0LL, 0LL);
  if ( !v7 )
  {
    if ( !v6 )
      sub_1B9026C(v7, v8);
    WarBoardServantPieceComponent__ClearPartyBuff((WarBoardServantPieceComponent_o *)v6, 0LL);
  }
}


void __fastcall WarBoardPieceData__ClearPrevAiRoute(WarBoardPieceData_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3

  this->fields._PrevAiRoute_k__BackingField = 0LL;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields._PrevAiRoute_k__BackingField, 0, v2, v3);
}


System_Int32_array *__fastcall WarBoardPieceData__CreatePieceEventVals(
        WarBoardPieceData_o *this,
        const MethodInfo *method)
{
  System_Int32_array *result; // x0
  __int64 v4; // x1
  il2cpp_array_size_t max_length; // w8

  if ( (byte_4A6DC6D & 1) == 0 )
  {
    sub_1B90010(&int___TypeInfo, method);
    byte_4A6DC6D = 1;
  }
  result = (System_Int32_array *)sub_1B900B8(int___TypeInfo, 3LL);
  if ( !result )
    sub_1B9026C(0LL, v4);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = this->fields._forceId_k__BackingField, max_length == 1)
    || (result->m_Items[2] = this->fields._groupId_k__BackingField, max_length <= 2) )
  {
    sub_1B90274(result, v4);
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
    sub_1B9026C(0LL, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  WarBoardManager_TaskList_o *v5; // x19
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  unsigned int breakPoint_k__BackingField; // w22
  unsigned int v9; // w21
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  if ( (byte_4A6DC5E & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_WarBoardMessageMaster___, method);
    sub_1B90010(&DataManager_TypeInfo, v3);
    sub_1B90010(&WarBoardManager_TaskList_TypeInfo, v4);
    byte_4A6DC5E = 1;
  }
  v5 = (WarBoardManager_TaskList_o *)sub_1B9025C(WarBoardManager_TaskList_TypeInfo);
  WarBoardManager_TaskList___ctor(v5, v6);
  breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
  v9 = breakPoint_k__BackingField - 1;
  if ( (int)(breakPoint_k__BackingField - 1) < 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
    pieceComponent = this->fields.pieceComponent;
    if ( pieceComponent )
    {
      ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, _QWORD, _QWORD, __int64, Il2CppMethodPointer))pieceComponent->klass->vtable._31_OnBreak.method)(
        pieceComponent,
        breakPoint_k__BackingField,
        0LL,
        v5,
        v9,
        0LL,
        1LL,
        pieceComponent->klass->vtable._32_OnDead.methodPtr);
      pieceComponent = this->fields.pieceComponent;
      if ( pieceComponent )
      {
        ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, WarBoardManager_TaskList_o *, __int64, Il2CppMethodPointer))pieceComponent->klass->vtable._32_OnDead.method)(
          pieceComponent,
          0LL,
          v5,
          1LL,
          pieceComponent->klass->vtable._33_OnRevive.methodPtr);
        return v5;
      }
    }
LABEL_12:
    sub_1B9026C(pieceComponent, v7);
  }
  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    goto LABEL_12;
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, _QWORD, _QWORD, __int64, Il2CppMethodPointer))pieceComponent->klass->vtable._31_OnBreak.method)(
    pieceComponent,
    breakPoint_k__BackingField,
    0LL,
    v5,
    v9,
    0LL,
    1LL,
    pieceComponent->klass->vtable._32_OnDead.methodPtr);
  return v5;
}


void __fastcall WarBoardPieceData__Deselect(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardData_o *pieceComponent; // x0
  WarBoardSquareData_o *Square; // x0

  if ( (byte_4A6DC5D & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4A6DC5D = 1;
  }
  pieceComponent = (WarBoardData_o *)this->fields.pieceComponent;
  if ( !pieceComponent )
    goto LABEL_10;
  ((void (__fastcall *)(WarBoardData_o *, Il2CppMethodPointer))pieceComponent->klass[1].vtable._0_Equals.method)(
    pieceComponent,
    pieceComponent->klass[1].vtable._1_Finalize.methodPtr);
  pieceComponent = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1B9026C(pieceComponent, method);
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
      sub_1B9026C(0LL, *(_QWORD *)&substructPoint);
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
      sub_1B9026C(0LL, *(_QWORD *)&substructPoint);
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
      sub_1B9026C(0LL, *(_QWORD *)&substructPoint);
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
      sub_1B9026C(0LL, *(_QWORD *)&substructPoint);
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
    sub_1B9026C(Cost_k__BackingField, method);
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
  System_Int32_array *ValueAsIntArray; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x19
  WarBoardPieceData___c_c *v10; // x0
  System_Func_T__TResult__o *_9__340_0; // x20
  Il2CppObject *v12; // x21
  struct WarBoardPieceData___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  BuffList_TYPE_array *result; // x0
  _QWORD *v18; // x19
  __int64 v19; // x8
  __int64 v20; // x0
  __int64 v21; // x0

  if ( (byte_4A6DC6B & 1) == 0 )
  {
    sub_1B90010(&Method_System_Array_Empty_BuffList_TYPE___, method);
    sub_1B90010(&Method_System_Linq_Enumerable_Select_int__BuffList_TYPE___, v3);
    sub_1B90010(&Method_System_Linq_Enumerable_ToArray_BuffList_TYPE___, v4);
    sub_1B90010(&System_Func_int__BuffList_TYPE__TypeInfo, v5);
    sub_1B90010(&Method_WarBoardPieceData___c__GetBuffTypesFromConstantStr_b__340_0__, v6);
    sub_1B90010(&WarBoardPieceData___c_TypeInfo, v7);
    byte_4A6DC6B = 1;
  }
  ValueAsIntArray = ConstantStrMaster__GetValueAsIntArray(key, 0LL);
  if ( !ValueAsIntArray )
    goto LABEL_11;
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)ValueAsIntArray;
  v10 = WarBoardPieceData___c_TypeInfo;
  if ( !WarBoardPieceData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceData___c_TypeInfo);
    v10 = WarBoardPieceData___c_TypeInfo;
  }
  _9__340_0 = (System_Func_T__TResult__o *)v10->static_fields->__9__340_0;
  if ( !_9__340_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = WarBoardPieceData___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__340_0 = (System_Func_T__TResult__o *)sub_1B9025C(System_Func_int__BuffList_TYPE__TypeInfo);
    System_Func_int__Int32Enum____ctor(
      _9__340_0,
      v12,
      Method_WarBoardPieceData___c__GetBuffTypesFromConstantStr_b__340_0__,
      0LL);
    static_fields = WarBoardPieceData___c_TypeInfo->static_fields;
    static_fields->__9__340_0 = (struct System_Func_int__BuffList_TYPE__o *)_9__340_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__340_0, (int32_t)_9__340_0, v14, v15);
  }
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__Int32Enum_(
                                                               v9,
                                                               (System_Func_TSource__TResult__o *)_9__340_0,
                                                               (const MethodInfo_2EBC354 *)Method_System_Linq_Enumerable_Select_int__BuffList_TYPE___);
  result = (BuffList_TYPE_array *)System_Linq_Enumerable__ToArray_Int32Enum_(
                                    v16,
                                    (const MethodInfo_2EC6E84 *)Method_System_Linq_Enumerable_ToArray_BuffList_TYPE___);
  if ( !result )
  {
LABEL_11:
    v18 = Method_System_Array_Empty_BuffList_TYPE___;
    v19 = *((_QWORD *)Method_System_Array_Empty_BuffList_TYPE___ + 7);
    if ( !v19 )
    {
      sub_1BE1F48(Method_System_Array_Empty_BuffList_TYPE___);
      v19 = v18[7];
    }
    v20 = *(_QWORD *)(v19 + 16);
    if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
      v20 = sub_1BE1EEC(v20);
    if ( !*(_DWORD *)(v20 + 224) )
      j_il2cpp_runtime_class_init_0(v20);
    v21 = *(_QWORD *)(v18[7] + 16LL);
    if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
      v21 = sub_1BE1EEC(v21);
    return **(BuffList_TYPE_array ***)(v21 + 184);
  }
  return result;
}


int32_t __fastcall WarBoardPieceData__GetDeadEffectType(WarBoardPieceData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WarBoardReinforcementsMaster_o *Master_object; // x0
  __int64 v5; // x1
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x0
  int32_t value; // [xsp+4h] [xbp-2Ch] BYREF
  WarBoardReinforcementsEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A6DC66 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, method);
    sub_1B90010(&DataManager_TypeInfo, v3);
    byte_4A6DC66 = 1;
  }
  entity = 0LL;
  value = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  if ( !Master_object )
    goto LABEL_13;
  if ( !WarBoardReinforcementsMaster__TryGetEntity(Master_object, &entity, this->fields._ReinfoId_k__BackingField, 0LL) )
    goto LABEL_10;
  Master_object = (WarBoardReinforcementsMaster_o *)entity;
  if ( !entity )
LABEL_13:
    sub_1B9026C(Master_object, v5);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_int__o *v8; // x20
  BattleServantData_o *battleServant_k__BackingField; // x0
  bool IsIncludeIgnoreIndividuality; // w2
  bool IsIgnoreIndivUnreleasable; // w3
  bool v12; // w4
  System_Int32_array *ConcatServantAndBuffIndividualityies; // x0
  __int64 v14; // x1

  if ( (byte_4A6DC4D & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_int__AddRange__, args);
    sub_1B90010(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1B90010(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1B90010(&System_Collections_Generic_List_int__TypeInfo, v7);
    byte_4A6DC4D = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_1B9025C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_34F3148 *)Method_System_Collections_Generic_List_int___ctor__);
  battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
  if ( battleServant_k__BackingField )
  {
    if ( args )
    {
      IsIncludeIgnoreIndividuality = args->fields.IsIncludeIgnoreIndividuality;
      IsIgnoreIndivUnreleasable = args->fields.IsIgnoreIndivUnreleasable;
      v12 = !args->fields.IsIncludePassiveIndividuality;
    }
    else
    {
      IsIncludeIgnoreIndividuality = 0;
      IsIgnoreIndivUnreleasable = 0;
      v12 = 0;
    }
    ConcatServantAndBuffIndividualityies = BattleServantData__getConcatServantAndBuffIndividualityies(
                                             battleServant_k__BackingField,
                                             0LL,
                                             IsIncludeIgnoreIndividuality,
                                             IsIgnoreIndivUnreleasable,
                                             v12,
                                             0LL);
    if ( !v8 )
LABEL_15:
      sub_1B9026C(ConcatServantAndBuffIndividualityies, v14);
    System_Collections_Generic_List_int___AddRange(
      v8,
      (System_Collections_Generic_IEnumerable_T__o *)ConcatServantAndBuffIndividualityies,
      (const MethodInfo_34F3BA8 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  ConcatServantAndBuffIndividualityies = (System_Int32_array *)BasicHelper__IsNullOrEmpty(
                                                                 (System_Collections_ICollection_o *)this->fields._individuality_k__BackingField,
                                                                 0LL);
  if ( ((unsigned __int8)ConcatServantAndBuffIndividualityies & 1) != 0 )
  {
    if ( !v8 )
      goto LABEL_15;
  }
  else
  {
    if ( !v8 )
      goto LABEL_15;
    System_Collections_Generic_List_int___AddRange(
      v8,
      (System_Collections_Generic_IEnumerable_T__o *)this->fields._individuality_k__BackingField,
      (const MethodInfo_34F3BA8 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  return System_Collections_Generic_List_int___ToArray(
           v8,
           (const MethodInfo_34F5454 *)Method_System_Collections_Generic_List_int__ToArray__);
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
      sub_1B9026C(Cost_k__BackingField, method);
    }
    return this->fields._limitActionCount_k__BackingField;
  }
  return result;
}


int32_t __fastcall WarBoardPieceData__GetMoveAfterAttack(WarBoardPieceData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  WarBoardReinforcementsMaster_o *Master_object; // x0
  __int64 v5; // x1
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x0
  int32_t type; // [xsp+4h] [xbp-2Ch] BYREF
  WarBoardReinforcementsEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A6DC67 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, method);
    sub_1B90010(&DataManager_TypeInfo, v3);
    byte_4A6DC67 = 1;
  }
  entity = 0LL;
  type = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  if ( !Master_object )
    goto LABEL_13;
  if ( !WarBoardReinforcementsMaster__TryGetEntity(Master_object, &entity, this->fields._ReinfoId_k__BackingField, 0LL) )
    goto LABEL_10;
  Master_object = (WarBoardReinforcementsMaster_o *)entity;
  if ( !entity )
LABEL_13:
    sub_1B9026C(Master_object, v5);
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
  __int64 v3; // x1
  WarBoardReinforcementsMaster_o *Master_object; // x0
  __int64 v5; // x1
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x0
  int32_t type; // [xsp+4h] [xbp-2Ch] BYREF
  WarBoardReinforcementsEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A6DC68 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, method);
    sub_1B90010(&DataManager_TypeInfo, v3);
    byte_4A6DC68 = 1;
  }
  entity = 0LL;
  type = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  if ( !Master_object )
    goto LABEL_13;
  if ( !WarBoardReinforcementsMaster__TryGetEntity(Master_object, &entity, this->fields._ReinfoId_k__BackingField, 0LL) )
    goto LABEL_10;
  Master_object = (WarBoardReinforcementsMaster_o *)entity;
  if ( !entity )
LABEL_13:
    sub_1B9026C(Master_object, v5);
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
  __int64 v3; // x1
  __int64 v4; // x1
  BattleServantData_o *battleServant_k__BackingField; // x0
  struct WarBoardPieceData_PieceStatusCache_o *statusCache; // x20
  bool v7; // zf
  bool HasAvailablePermanentSleepBuff; // w1
  __int16 *v9; // x0
  __int16 *p_HasAvailablePermanentSleepBuff_k__BackingField; // x0
  struct System_Nullable_bool__o v12; // [xsp+8h] [xbp-18h] BYREF
  struct System_Nullable_bool__o HasAvailablePermanentSleepBuff_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4A6DC59 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Nullable_bool___ctor__, method);
    sub_1B90010(&Method_System_Nullable_bool__get_HasValue__, v3);
    sub_1B90010(&Method_System_Nullable_bool__get_Value__, v4);
    byte_4A6DC59 = 1;
  }
  HasAvailablePermanentSleepBuff_k__BackingField = 0;
  battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
  if ( battleServant_k__BackingField )
  {
    statusCache = this->fields.statusCache;
    if ( !statusCache )
      goto LABEL_11;
    if ( !statusCache->fields._IsEnabled_k__BackingField
      || (v7 = (unsigned __int8)*(_WORD *)&statusCache->fields._HasAvailablePermanentSleepBuff_k__BackingField == 0,
          HasAvailablePermanentSleepBuff_k__BackingField = statusCache->fields._HasAvailablePermanentSleepBuff_k__BackingField,
          v7) )
    {
      HasAvailablePermanentSleepBuff = BattleServantData__HasAvailablePermanentSleepBuff(
                                         battleServant_k__BackingField,
                                         0LL);
      v9 = (__int16 *)&v12;
      v12 = 0;
      System_Nullable_bool____ctor(
        (System_Nullable_bool__o)v9,
        HasAvailablePermanentSleepBuff,
        (const MethodInfo_36298D8 *)Method_System_Nullable_bool___ctor__);
      statusCache->fields._HasAvailablePermanentSleepBuff_k__BackingField = v12;
      statusCache = this->fields.statusCache;
      if ( !statusCache )
LABEL_11:
        sub_1B9026C(battleServant_k__BackingField, method);
    }
    p_HasAvailablePermanentSleepBuff_k__BackingField = (__int16 *)&HasAvailablePermanentSleepBuff_k__BackingField;
    HasAvailablePermanentSleepBuff_k__BackingField = statusCache->fields._HasAvailablePermanentSleepBuff_k__BackingField;
    LOBYTE(battleServant_k__BackingField) = System_Nullable_bool___get_Value(
                                              (System_Nullable_bool__o)p_HasAvailablePermanentSleepBuff_k__BackingField,
                                              (const MethodInfo_36298F4 *)Method_System_Nullable_bool__get_Value__);
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
  bool v8; // zf
  struct WarBoardPieceData_PieceStatusCache_o *v9; // x20
  bool HasAnyBuffByBuffTypes; // w1
  __int16 *v11; // x0
  __int16 *p_HasCompletelyActionDisabledBuff_k__BackingField; // x0
  struct System_Nullable_bool__o v15; // [xsp+8h] [xbp-18h] BYREF
  struct System_Nullable_bool__o HasCompletelyActionDisabledBuff_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_4A6DC5A & 1) == 0 )
  {
    sub_1B90010(&Method_System_Nullable_bool___ctor__, method);
    sub_1B90010(&Method_System_Nullable_bool__get_HasValue__, v3);
    sub_1B90010(&Method_System_Nullable_bool__get_Value__, v4);
    sub_1B90010(&WarBoardPieceData_TypeInfo, v5);
    this = (WarBoardPieceData_o *)sub_1B90010(&StringLiteral_15504/*"WAR_BOARD_ACTION_DISABLED_BUFF_TYPES"*/, v6);
    byte_4A6DC5A = 1;
  }
  HasCompletelyActionDisabledBuff_k__BackingField = 0;
  if ( v2->fields._battleServant_k__BackingField )
  {
    statusCache = v2->fields.statusCache;
    if ( !statusCache )
      goto LABEL_16;
    if ( !statusCache->fields._IsEnabled_k__BackingField
      || (v8 = (unsigned __int8)*(_WORD *)&statusCache->fields._HasCompletelyActionDisabledBuff_k__BackingField == 0,
          HasCompletelyActionDisabledBuff_k__BackingField = statusCache->fields._HasCompletelyActionDisabledBuff_k__BackingField,
          v8) )
    {
      if ( !WarBoardPieceData_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo);
      this = (WarBoardPieceData_o *)WarBoardPieceData__GetBuffTypesFromConstantStr(
                                      (System_String_o *)StringLiteral_15504/*"WAR_BOARD_ACTION_DISABLED_BUFF_TYPES"*/,
                                      method);
      if ( !v2->fields._battleServant_k__BackingField
        || (v9 = v2->fields.statusCache,
            HasAnyBuffByBuffTypes = BattleServantData__HasAnyBuffByBuffTypes(
                                      v2->fields._battleServant_k__BackingField,
                                      (BuffList_TYPE_array *)this,
                                      0LL),
            v11 = (__int16 *)&v15,
            v15 = 0,
            System_Nullable_bool____ctor(
              (System_Nullable_bool__o)v11,
              HasAnyBuffByBuffTypes,
              (const MethodInfo_36298D8 *)Method_System_Nullable_bool___ctor__),
            !v9)
        || (v9->fields._HasCompletelyActionDisabledBuff_k__BackingField = v15,
            (statusCache = v2->fields.statusCache) == 0LL) )
      {
LABEL_16:
        sub_1B9026C(this, method);
      }
    }
    p_HasCompletelyActionDisabledBuff_k__BackingField = (__int16 *)&HasCompletelyActionDisabledBuff_k__BackingField;
    HasCompletelyActionDisabledBuff_k__BackingField = statusCache->fields._HasCompletelyActionDisabledBuff_k__BackingField;
    return System_Nullable_bool___get_Value(
             (System_Nullable_bool__o)p_HasCompletelyActionDisabledBuff_k__BackingField,
             (const MethodInfo_36298F4 *)Method_System_Nullable_bool__get_Value__);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  WarBoardData_o *Instance; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x1
  WarBoardSquareData_o *Square; // x0
  System_Collections_Generic_IEnumerable_TSource__o *linkedSquares; // x21
  System_Func_T__TResult__o *v20; // x22
  System_Collections_Generic_IEnumerable_T__o *v21; // x0
  System_Collections_Generic_IEnumerable_T__o *v22; // x0
  System_Object_array *v23; // x20
  System_Func_object__bool__o *v24; // x21
  WarBoardCost_o *Cost_k__BackingField; // x0
  bool CanAction; // w8
  bool result; // w0

  if ( (byte_4A6DC4F & 1) == 0 )
  {
    sub_1B90010(&Method_BasicHelper_Any_WarBoardWallData___, method);
    sub_1B90010(&Method_BasicHelper_ExcludeNull_WarBoardWallData___, v3);
    sub_1B90010(&Method_System_Linq_Enumerable_Select_int__WarBoardWallData___, v4);
    sub_1B90010(&Method_System_Linq_Enumerable_ToArray_WarBoardWallData___, v5);
    sub_1B90010(&System_Func_WarBoardWallData__bool__TypeInfo, v6);
    sub_1B90010(&System_Func_int__WarBoardWallData__TypeInfo, v7);
    sub_1B90010(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8);
    sub_1B90010(&Method_WarBoardPieceData___c__DisplayClass223_0__HasVitalityToDoAnyActions_b__0__, v9);
    sub_1B90010(&WarBoardPieceData___c__DisplayClass223_0_TypeInfo, v10);
    sub_1B90010(&Method_WarBoardPieceData_CheckWallAttackCond__, v11);
    byte_4A6DC4F = 1;
  }
  v12 = sub_1B9025C(WarBoardPieceData___c__DisplayClass223_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  if ( !v12 )
    goto LABEL_19;
  playedStageReinforcementsList = Instance[1].fields.playedStageReinforcementsList;
  *(_QWORD *)(v12 + 16) = playedStageReinforcementsList;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v12 + 16), (int32_t)playedStageReinforcementsList, v15, v16);
  Instance = *(WarBoardData_o **)(v12 + 16);
  if ( !Instance )
    goto LABEL_19;
  Square = WarBoardData__GetSquare(Instance, this->fields._nowSquareIndex_k__BackingField, 0LL);
  if ( Square
    && (linkedSquares = (System_Collections_Generic_IEnumerable_TSource__o *)Square->fields.linkedSquares) != 0LL )
  {
    v20 = (System_Func_T__TResult__o *)sub_1B9025C(System_Func_int__WarBoardWallData__TypeInfo);
    System_Func_int__object____ctor(
      v20,
      (Il2CppObject *)v12,
      Method_WarBoardPieceData___c__DisplayClass223_0__HasVitalityToDoAnyActions_b__0__,
      0LL);
    v21 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                           linkedSquares,
                                                           (System_Func_TSource__TResult__o *)v20,
                                                           (const MethodInfo_2EBC6B8 *)Method_System_Linq_Enumerable_Select_int__WarBoardWallData___);
    v22 = BasicHelper__ExcludeNull_object_(
            v21,
            (const MethodInfo_2E79F38 *)Method_BasicHelper_ExcludeNull_WarBoardWallData___);
    v23 = System_Linq_Enumerable__ToArray_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v22,
            (const MethodInfo_2EC6F94 *)Method_System_Linq_Enumerable_ToArray_WarBoardWallData___);
    if ( v23 )
    {
      v24 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_WarBoardWallData__bool__TypeInfo);
      System_Func_object__bool____ctor(v24, (Il2CppObject *)this, Method_WarBoardPieceData_CheckWallAttackCond__, 0LL);
      LOBYTE(v23) = BasicHelper__Any_object__48731792(
                      v23,
                      (System_Func_T__bool__o *)v24,
                      (const MethodInfo_2E79690 *)Method_BasicHelper_Any_WarBoardWallData___);
    }
  }
  else
  {
    LOBYTE(v23) = 0;
  }
  Cost_k__BackingField = this->fields._Cost_k__BackingField;
  if ( Cost_k__BackingField && WarBoardCost__get_HasCost(Cost_k__BackingField, 0LL) )
  {
    Instance = (WarBoardData_o *)this->fields._Cost_k__BackingField;
    if ( Instance )
    {
      CanAction = WarBoardCost__CanAction((WarBoardCost_o *)Instance, 0, (unsigned __int8)v23 & 1, 0LL);
      result = 0;
      if ( !CanAction )
        return result;
      return this->fields._limitActionCount_k__BackingField < 1 || this->fields._currentActionCount_k__BackingField > 0;
    }
LABEL_19:
    sub_1B9026C(Instance, v14);
  }
  return this->fields._limitActionCount_k__BackingField < 1 || this->fields._currentActionCount_k__BackingField > 0;
}


void __fastcall WarBoardPieceData__HideActionTarget(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_1B9026C(0LL, method);
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
    sub_1B9026C(0LL, squareIndex);
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
      sub_1B9026C(pieceComponent, method);
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
  const MethodInfo *v11; // x1
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x23
  struct WarBoardPieceBaseComponent_o *v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  struct WarBoardManager_TaskList_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  const MethodInfo *v21; // x2
  int32_t v22; // w2
  int32_t v23; // w3
  struct WarBoardManager_TaskList_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  Il2CppClass **v27; // x0
  struct BattleServantData_o *battleServant_k__BackingField; // x20
  unsigned int MaxHp; // w0
  unsigned int v30; // w20
  int32_t type_k__BackingField; // w8
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  struct WarBoardUserServantData_o *serverServantData; // x8
  __int64 v34; // [xsp+8h] [xbp-58h] BYREF
  System_Nullable_float__o v35; // 0:x0.8
  System_Nullable_float__o v36; // 0:x0.8

  if ( (byte_4A6DC6A & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__, taskListBreak);
    sub_1B90010(&Method_System_Nullable_float___ctor__, v7);
    sub_1B90010(&WarBoardManager_TaskList_TypeInfo, v8);
    byte_4A6DC6A = 1;
  }
  breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
  this->fields._breakPoint_k__BackingField = breakPoint_k__BackingField - 1;
  v10 = (WarBoardManager_TaskList_o *)sub_1B9025C(WarBoardManager_TaskList_TypeInfo);
  WarBoardManager_TaskList___ctor(v10, v11);
  pieceComponent = this->fields.pieceComponent;
  if ( ((breakPoint_k__BackingField - 1) & 0x80000000) == 0 )
  {
    v35 = (System_Nullable_float__o)&v34;
    v34 = 0LL;
    System_Nullable_float____ctor(v35, 1.0, (const MethodInfo_362FB34 *)Method_System_Nullable_float___ctor__);
    if ( pieceComponent )
    {
      v13 = (struct WarBoardPieceBaseComponent_o *)((__int64 (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, __int64, WarBoardManager_TaskList_o *, __int64, _QWORD, __int64, Il2CppMethodPointer))pieceComponent->klass->vtable._31_OnBreak.method)(
                                                     pieceComponent,
                                                     breakPoint_k__BackingField,
                                                     v34,
                                                     v10,
                                                     0xFFFFFFFFLL,
                                                     0LL,
                                                     1LL,
                                                     pieceComponent->klass->vtable._32_OnDead.methodPtr);
      if ( taskListBreak )
      {
        items = taskListBreak->fields._items;
        v18 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
        ++taskListBreak->fields._version;
        if ( items )
        {
          size = taskListBreak->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)taskListBreak,
              (Il2CppObject *)v10,
              *(const MethodInfo_35109C0 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            taskListBreak->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v10;
            sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v10, v15, v16);
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
          v30 = 1;
          goto LABEL_25;
        }
      }
    }
LABEL_28:
    sub_1B9026C(v13, v14);
  }
  v36 = (System_Nullable_float__o)&v34;
  v34 = 0LL;
  System_Nullable_float____ctor(v36, 1.0, (const MethodInfo_362FB34 *)Method_System_Nullable_float___ctor__);
  if ( !pieceComponent )
    goto LABEL_28;
  v13 = (struct WarBoardPieceBaseComponent_o *)((__int64 (__fastcall *)(struct WarBoardPieceBaseComponent_o *, __int64, WarBoardManager_TaskList_o *, __int64, Il2CppMethodPointer))pieceComponent->klass->vtable._32_OnDead.method)(
                                                 pieceComponent,
                                                 v34,
                                                 v10,
                                                 1LL,
                                                 pieceComponent->klass->vtable._33_OnRevive.methodPtr);
  if ( !taskListDead )
    goto LABEL_28;
  v24 = taskListDead->fields._items;
  v25 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
  ++taskListDead->fields._version;
  if ( !v24 )
    goto LABEL_28;
  v26 = taskListDead->fields._size;
  if ( (unsigned int)v26 >= v24->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)taskListDead,
      (Il2CppObject *)v10,
      *(const MethodInfo_35109C0 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &v24->obj.klass + v26;
    taskListDead->fields._size = v26 + 1;
    v27[4] = (Il2CppClass *)v10;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v10, v22, v23);
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
  v30 = 0;
LABEL_25:
  WarBoardPieceData__SetBreakPoint(this, this->fields._breakPoint_k__BackingField, v21);
  v13 = this->fields.pieceComponent;
  if ( !v13 )
    goto LABEL_28;
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, Il2CppMethodPointer))v13->klass->vtable._15_ChangeStatus.method)(
    v13,
    v30,
    v13->klass->vtable._16_IsModifyStatus.methodPtr);
  v13 = this->fields.pieceComponent;
  if ( !v13 )
    goto LABEL_28;
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))v13->klass->vtable._10_UpdateDisplayActionCount.method)(
    v13,
    v13->klass->vtable._11_UpdateUiBrightnessByPieceStatus.methodPtr);
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

  if ( (byte_4A6DC65 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Nullable_float___ctor__, cameraMove);
    byte_4A6DC65 = 1;
  }
  this->fields._isDead_k__BackingField = 1;
  breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
  pieceComponent = this->fields.pieceComponent;
  v18 = (System_Nullable_float__o)&v17;
  v17 = 0LL;
  System_Nullable_float____ctor(v18, 1.0, (const MethodInfo_362FB34 *)Method_System_Nullable_float___ctor__);
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
        System_Nullable_float____ctor(v19, 1.0, (const MethodInfo_362FB34 *)Method_System_Nullable_float___ctor__),
        !v12) )
  {
    sub_1B9026C(v9, v10);
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
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_Component_o *pieceComponent; // x0
  int32_t limitActionCount_k__BackingField; // w9
  WarBoardCost_o *Cost_k__BackingField; // x0
  WarBoardData_o *monitor; // x20
  int32_t PutSquareIndex_k__BackingField; // w21
  int32_t nowSquareIndex_k__BackingField; // w22
  System_Func_object__bool__o *v11; // x23
  int32_t v12; // w0
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  struct WarBoardUserServantData_o *serverServantData; // x8
  const MethodInfo *v15; // x2

  if ( (byte_4A6DC69 & 1) == 0 )
  {
    sub_1B90010(&System_Func_WarBoardPieceData__bool__TypeInfo, method);
    sub_1B90010(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v3);
    sub_1B90010(&Method_WarBoardPieceData__ProcContinue_b__337_0__, v4);
    byte_4A6DC69 = 1;
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
  pieceComponent = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceComponent )
    goto LABEL_18;
  monitor = (WarBoardData_o *)pieceComponent[18].monitor;
  PutSquareIndex_k__BackingField = this->fields._PutSquareIndex_k__BackingField;
  nowSquareIndex_k__BackingField = this->fields._nowSquareIndex_k__BackingField;
  v11 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(v11, (Il2CppObject *)this, Method_WarBoardPieceData__ProcContinue_b__337_0__, 0LL);
  if ( !monitor )
    goto LABEL_18;
  v12 = WarBoardData__SearchNearestEmptySquare(
          monitor,
          PutSquareIndex_k__BackingField,
          nowSquareIndex_k__BackingField,
          (System_Func_WarBoardPieceData__bool__o *)v11,
          0LL);
  serverMasterData_k__BackingField = this->fields._serverMasterData_k__BackingField;
  this->fields._nowSquareIndex_k__BackingField = v12;
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
      v15);
  }
  pieceComponent = (UnityEngine_Component_o *)this->fields.pieceComponent;
  if ( !pieceComponent )
LABEL_18:
    sub_1B9026C(pieceComponent, method);
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
    sub_1B9026C(battleServant_k__BackingField, method);
  (*(void (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)battleServant_k__BackingField + 840LL))(
    battleServant_k__BackingField,
    0LL,
    *(_QWORD *)(*(_QWORD *)battleServant_k__BackingField + 848LL));
}


void __fastcall WarBoardPieceData__Select(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardData_o *pieceComponent; // x0
  WarBoardSquareData_o *Square; // x0

  if ( (byte_4A6DC5C & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4A6DC5C = 1;
  }
  pieceComponent = (WarBoardData_o *)this->fields.pieceComponent;
  if ( !pieceComponent )
    goto LABEL_10;
  (*(void (__fastcall **)(WarBoardData_o *, Il2CppMethodPointer))&pieceComponent->klass[1]._2.naturalAligment)(
    pieceComponent,
    pieceComponent->klass[1].vtable._0_Equals.methodPtr);
  pieceComponent = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1B9026C(pieceComponent, method);
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
      sub_1B9026C(Cost_k__BackingField, *(_QWORD *)&ap);
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
    sub_1B9026C(this, bp);
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
  sub_1B8FFB4(
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
  System_Collections_Generic_IEnumerable_TSource__o *masterInfo; // x20
  System_Func_object__bool__o *v16; // x21
  Il2CppObject *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  Il2CppObject *Master_object; // x20
  const MethodInfo *v22; // x1
  WarBoardActionPointClassEntity_o *MasterEntityFromStageId; // x0
  WarBoardCost_o *v24; // x0
  ServantStatusBattleListViewItem_o *p_Cost_k__BackingField; // x19
  int32_t v26; // w2
  int32_t v27; // w3
  int64_t sortValue1; // x8
  int32_t v29; // w1
  System_Collections_Generic_IEnumerable_TSource__o *svtInfo; // x20
  System_Func_object__bool__o *v31; // x21
  Il2CppObject *v32; // x0
  struct WarBoardUserServantData_o **p_serverServantData; // x20
  int32_t v34; // w2
  int32_t v35; // w3
  struct WarBoardUserServantData_o *serverServantData; // x8
  __int128 v37; // q1
  WarBoardPieceData_o *v38; // x21
  BattleServantData_o *BattleServant; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  const MethodInfo *v42; // x2
  struct WarBoardUserServantData_o *v43; // x8
  Il2CppObject *v44; // x20
  const MethodInfo *v45; // x1
  WarBoardActionPointEntity_o *v46; // x21
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x20
  WarBoardCost_o *v48; // x0
  ServantStatusBattleListViewItem_o *v49; // x19
  int32_t v50; // w2
  int32_t v51; // w3
  int64_t sortValue0; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v53; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+20h] [xbp-50h]
  WarBoardReinforcementsEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4A6DC5F & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___, warBoardDataEntity);
    sub_1B90010(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, v5);
    sub_1B90010(&DataManager_TypeInfo, v6);
    sub_1B90010(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___, v7);
    sub_1B90010(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___, v8);
    sub_1B90010(&System_Func_WarBoardUserMasterData__bool__TypeInfo, v9);
    sub_1B90010(&System_Func_WarBoardUserServantData__bool__TypeInfo, v10);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v11);
    sub_1B90010(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v12);
    sub_1B90010(&Method_WarBoardPieceData__SetInitinalData_b__315_0__, v13);
    this = (WarBoardPieceData_o *)sub_1B90010(&Method_WarBoardPieceData__SetInitinalData_b__315_1__, v14);
    byte_4A6DC5F = 1;
  }
  entity = 0LL;
  if ( !v4->fields._isDead_k__BackingField )
  {
    if ( warBoardDataEntity )
    {
      if ( v4->fields._type_k__BackingField == 1 )
      {
        masterInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.masterInfo;
        v16 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_WarBoardUserMasterData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v16,
          (Il2CppObject *)v4,
          Method_WarBoardPieceData__SetInitinalData_b__315_0__,
          0LL);
        v17 = System_Linq_Enumerable__FirstOrDefault_object__48967524(
                masterInfo,
                (System_Func_TSource__bool__o *)v16,
                (const MethodInfo_2EB2F64 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
        v4->fields._serverMasterData_k__BackingField = (struct WarBoardUserMasterData_o *)v17;
        sub_1B8FFB4(
          (ServantStatusBattleListViewItem_o *)&v4->fields._serverMasterData_k__BackingField,
          (int32_t)v17,
          v18,
          v19);
        serverMasterData_k__BackingField = v4->fields._serverMasterData_k__BackingField;
        if ( serverMasterData_k__BackingField )
        {
          *(int32x2_t *)&v4->fields._limitActionCount_k__BackingField = vrev64_s32(*(int32x2_t *)&serverMasterData_k__BackingField->fields.currentLimitActionPoint);
          v4->fields._attackCount_k__BackingField = serverMasterData_k__BackingField->fields.attackCount;
          v4->fields._nowSquareIndex_k__BackingField = serverMasterData_k__BackingField->fields.squareIndex;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
          this = (WarBoardPieceData_o *)WarBoardPieceData__get_ActionPointEntity(v4, v22);
          if ( Master_object )
          {
            MasterEntityFromStageId = WarBoardActionPointClassMaster__GetMasterEntityFromStageId(
                                        (WarBoardActionPointClassMaster_o *)Master_object,
                                        (WarBoardActionPointEntity_o *)this,
                                        0LL);
            v24 = WarBoardCost__Create(MasterEntityFromStageId, v4->fields.stagePieceDetailEntity, 0LL, 0LL);
            v4->fields._Cost_k__BackingField = v24;
            p_Cost_k__BackingField = (ServantStatusBattleListViewItem_o *)&v4->fields._Cost_k__BackingField;
            sub_1B8FFB4(p_Cost_k__BackingField, (int32_t)v24, v26, v27);
            sortValue1 = p_Cost_k__BackingField->fields.sortValue1;
            if ( sortValue1 )
            {
              this = (WarBoardPieceData_o *)p_Cost_k__BackingField->klass;
              if ( p_Cost_k__BackingField->klass )
              {
                v29 = *(_DWORD *)(sortValue1 + 72);
LABEL_27:
                WarBoardCost__UpdateCurrentPointByServerData((WarBoardCost_o *)this, v29, 0LL);
                return;
              }
            }
          }
        }
      }
      else
      {
        svtInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.svtInfo;
        v31 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_WarBoardUserServantData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v31,
          (Il2CppObject *)v4,
          Method_WarBoardPieceData__SetInitinalData_b__315_1__,
          0LL);
        v32 = System_Linq_Enumerable__FirstOrDefault_object__48967524(
                svtInfo,
                (System_Func_TSource__bool__o *)v31,
                (const MethodInfo_2EB2F64 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
        v4->fields.serverServantData = (struct WarBoardUserServantData_o *)v32;
        p_serverServantData = &v4->fields.serverServantData;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v4->fields.serverServantData, (int32_t)v32, v34, v35);
        this = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        serverServantData = v4->fields.serverServantData;
        if ( serverServantData )
        {
          v37 = *(_OWORD *)&serverServantData->fields.id.fields.fakeValue;
          v38 = this;
          *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)&serverServantData->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v54.fields.fakeValue = v37;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v53 = v54;
          this = (WarBoardPieceData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(&v53, 0LL);
          if ( v38 )
          {
            BattleServant = WarBoardManager__GetBattleServant((WarBoardManager_o *)v38, (int64_t)this, 0LL);
            v4->fields._battleServant_k__BackingField = BattleServant;
            sub_1B8FFB4(
              (ServantStatusBattleListViewItem_o *)&v4->fields._battleServant_k__BackingField,
              (int32_t)BattleServant,
              v40,
              v41);
            this = (WarBoardPieceData_o *)v4->fields.serverServantData;
            if ( this )
            {
              WarBoardUserServantData__FromBattleServantData(
                (WarBoardUserServantData_o *)this,
                v4->fields._battleServant_k__BackingField,
                v42);
              v43 = *p_serverServantData;
              if ( *p_serverServantData )
              {
                *(int32x2_t *)&v4->fields._limitActionCount_k__BackingField = vrev64_s32(*(int32x2_t *)&v43->fields.currentActionPoint);
                v4->fields._attackCount_k__BackingField = v43->fields.attackCount;
                v4->fields._nowSquareIndex_k__BackingField = v43->fields.squareIndex;
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                v44 = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
                this = (WarBoardPieceData_o *)WarBoardPieceData__get_ActionPointEntity(v4, v45);
                if ( v4->fields._battleServant_k__BackingField )
                {
                  v46 = (WarBoardActionPointEntity_o *)this;
                  this = (WarBoardPieceData_o *)BattleServantData__getClassId(
                                                  v4->fields._battleServant_k__BackingField,
                                                  0LL);
                  if ( v44 )
                  {
                    EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                                    (WarBoardActionPointClassMaster_o *)v44,
                                                    v46,
                                                    (int32_t)this,
                                                    0LL);
                    this = (WarBoardPieceData_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
                    if ( this )
                    {
                      WarBoardReinforcementsMaster__TryGetEntity(
                        (WarBoardReinforcementsMaster_o *)this,
                        &entity,
                        v4->fields._ReinfoId_k__BackingField,
                        0LL);
                      v48 = WarBoardCost__Create(
                              EntityFromActionPointEntity,
                              v4->fields.stagePieceDetailEntity,
                              entity,
                              0LL);
                      v4->fields._Cost_k__BackingField = v48;
                      v49 = (ServantStatusBattleListViewItem_o *)&v4->fields._Cost_k__BackingField;
                      sub_1B8FFB4(v49, (int32_t)v48, v50, v51);
                      sortValue0 = v49->fields.sortValue0;
                      if ( sortValue0 )
                      {
                        this = (WarBoardPieceData_o *)v49->klass;
                        if ( v49->klass )
                        {
                          v29 = *(_DWORD *)(sortValue0 + 664);
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
    sub_1B9026C(this, warBoardDataEntity);
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
  __int64 v10; // x0
  __int64 v11; // x0
  Il2CppObject *MasterData_object; // x0
  void *monitor; // x20
  Il2CppClass *klass; // x21
  int32_t v15; // w0
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Object_o *v18; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_4A6DC56 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_UserEquipMaster___, userEquipId);
    sub_1B90010(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v5);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v6);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v8);
    sub_1B90010(&WarBoardMasterPieceComponent_TypeInfo, v9);
    byte_4A6DC56 = 1;
  }
  this->fields._CurrentUserEquipId_k__BackingField = userEquipId;
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BE1EEC(v10);
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1BE1EEC(v11);
  MasterData_object = **(Il2CppObject ***)(v11 + 184);
  if ( !MasterData_object )
    goto LABEL_24;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_UserEquipMaster___);
  if ( !MasterData_object )
    goto LABEL_24;
  MasterData_object = DataMasterBase_object__object__long___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                        this->fields._CurrentUserEquipId_k__BackingField,
                        (const MethodInfo_312C754 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  if ( !MasterData_object )
    goto LABEL_24;
  klass = MasterData_object[2].klass;
  monitor = MasterData_object[2].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v19.fields.currentCryptoKey = klass;
  *(_QWORD *)&v19.fields.fakeValue = monitor;
  v15 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v19, 0LL);
  pieceComponent = this->fields.pieceComponent;
  this->fields._iconId_k__BackingField = v15;
  if ( pieceComponent
    && (methodPtr_low = LOBYTE(WarBoardMasterPieceComponent_TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(pieceComponent->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
  {
    if ( (WarBoardMasterPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[methodPtr_low - 1] == WarBoardMasterPieceComponent_TypeInfo )
      v18 = (UnityEngine_Object_o *)pieceComponent;
    else
      v18 = 0LL;
  }
  else
  {
    v18 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  MasterData_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
  if ( ((unsigned __int8)MasterData_object & 1) != 0 )
  {
    if ( v18 )
    {
      WarBoardMasterPieceComponent__SetMasterIcon((WarBoardMasterPieceComponent_o *)v18, 0LL);
      return;
    }
LABEL_24:
    sub_1B9026C(MasterData_object, userEquipId);
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
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x22
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF
  System_RuntimeTypeHandle_o v15; // 0:w0.4

  if ( (byte_4A6DC6C & 1) == 0 )
  {
    sub_1B90010(&WarBoardStageLayoutEntity_ActionType_var, *(_QWORD *)&actionType);
    sub_1B90010(&System_Enum_TypeInfo, v5);
    sub_1B90010(&int_TypeInfo, v6);
    sub_1B90010(&System_Type_TypeInfo, v7);
    byte_4A6DC6C = 1;
  }
  v8 = (int)WarBoardStageLayoutEntity_ActionType_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v15.fields.value = v8;
  TypeFromHandle = System_Type__GetTypeFromHandle(v15, 0LL);
  v14 = actionType;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v10, v11, v12);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  if ( System_Enum__IsDefined(TypeFromHandle, v13, 0LL) )
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
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x9
  __int64 methodPtr_low; // x12
  UnityEngine_Object_o *v8; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1

  if ( (byte_4A6DC62 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, *(_QWORD *)&level);
    sub_1B90010(&WarBoardServantPieceComponent_TypeInfo, v5);
    byte_4A6DC62 = 1;
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Equality(v8, 0LL, 0LL);
  if ( !v9 )
  {
    if ( !v8 )
      sub_1B9026C(v9, v10);
    WarBoardServantPieceComponent__SetPartyBuffLevel((WarBoardServantPieceComponent_o *)v8, level, 0LL);
  }
}


void __fastcall WarBoardPieceData__SetPieceEnable(WarBoardPieceData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_1B9026C(0LL, enable);
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
  if ( (byte_4A6DC64 & 1) == 0 )
  {
    this = (WarBoardPieceData_o *)sub_1B90010(&WarBoardPieceData_RouteSaveData_TypeInfo, prev);
    byte_4A6DC64 = 1;
  }
  if ( !prev )
    sub_1B9026C(this, prev);
  v5 = *(Il2CppClass **)&prev->fields.baseIndex;
  flagNow = prev->fields.flagNow;
  v7 = (Il2CppObject *)sub_1B9025C(WarBoardPieceData_RouteSaveData_TypeInfo);
  System_Object___ctor(v7, 0LL);
  v7[1].klass = v5;
  v7[1].monitor = (void *)flagNow;
  v4->fields._PrevAiRoute_k__BackingField = (struct WarBoardPieceData_RouteSaveData_o *)v7;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v4->fields._PrevAiRoute_k__BackingField, (int32_t)v7, v8, v9);
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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  void *monitor; // x22
  Il2CppClass *klass; // x23
  int32_t *p_iconClassId_k__BackingField; // x21
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x9
  __int64 methodPtr_low; // x12
  UnityEngine_Object_o *v22; // x20
  Il2CppObject *v23; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4A6DC57 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_UserServantMaster___, userServantId);
    sub_1B90010(&Method_DataManager_GetMaster_ServantClassMaster___, v7);
    sub_1B90010(&DataManager_TypeInfo, v8);
    sub_1B90010(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v9);
    sub_1B90010(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v10);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v11);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_1B90010(&WarBoardServantPieceComponent_TypeInfo, v14);
    byte_4A6DC57 = 1;
  }
  v23 = 0LL;
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_35;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userServantId,
                               (const MethodInfo_312C7A8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    this->fields._UserServantId_k__BackingField = userServantId;
    if ( !entity )
      goto LABEL_35;
    klass = entity[5].klass;
    monitor = entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v25.fields.currentCryptoKey = klass;
    *(_QWORD *)&v25.fields.fakeValue = monitor;
    this->fields._iconId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v25, 0LL);
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
    Instance = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_ServantClassMaster___);
    if ( !Instance )
LABEL_35:
      sub_1B9026C(Instance, v16);
    Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                 &v23,
                                 *p_iconClassId_k__BackingField,
                                 (const MethodInfo_312C5FC *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v23 )
        goto LABEL_35;
      p_iconClassId_k__BackingField = (int32_t *)&v23[2].monitor + 1;
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
      v22 = (UnityEngine_Object_o *)this->fields.pieceComponent;
    else
      v22 = 0LL;
  }
  else
  {
    v22 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (Il2CppObject *)UnityEngine_Object__op_Inequality(v22, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( v22 )
    {
      WarBoardServantPieceComponent__SetServant((WarBoardServantPieceComponent_o *)v22, userServantId, 0LL);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  void *monitor; // x21
  Il2CppClass *klass; // x22
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x9
  __int64 methodPtr_low; // x12
  UnityEngine_Object_o *v16; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v18; // 0:x0.16

  if ( (byte_4A6DC58 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMasterData_UserServantMaster___, userServantEquipId);
    sub_1B90010(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v5);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v6);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B90010(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_1B90010(&WarBoardServantPieceComponent_TypeInfo, v9);
    byte_4A6DC58 = 1;
  }
  entity = 0LL;
  this->fields._UserServantEquipId_k__BackingField = userServantEquipId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E8E21C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_24;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               this->fields._UserServantEquipId_k__BackingField,
                               (const MethodInfo_312C7A8 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_24;
    klass = entity[5].klass;
    monitor = entity[5].monitor;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v18.fields.currentCryptoKey = klass;
    *(_QWORD *)&v18.fields.fakeValue = monitor;
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v18, 0LL);
    this->fields._iconEquipId_k__BackingField = (int)Instance;
    if ( !entity )
      goto LABEL_24;
    this->fields._equipLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
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
      v16 = (UnityEngine_Object_o *)this->fields.pieceComponent;
    else
      v16 = 0LL;
  }
  else
  {
    v16 = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (Il2CppObject *)UnityEngine_Object__op_Inequality(v16, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( v16 )
    {
      WarBoardServantPieceComponent__SetServantEquip((WarBoardServantPieceComponent_o *)v16, userServantEquipId, 0LL);
      return;
    }
LABEL_24:
    sub_1B9026C(Instance, v11);
  }
}


void __fastcall WarBoardPieceData__SetServantIconData(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardPieceData_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  __int64 v7; // x20
  __int64 v8; // x21
  int32_t v9; // w0
  struct WarBoardUserServantData_o *serverServantData; // x8
  BattleServantData_o *v11; // x8
  int32_t *p_iconClassId_k__BackingField; // x20
  struct BattleServantData_o *v13; // x8
  int32_t v14; // w9
  struct BattleServantData_o *v15; // x8
  struct BattleUserServantData_array *equipList; // x23
  __int64 v17; // x9
  BattleUserServantData_o *v18; // x9
  __int64 v19; // x20
  __int64 v20; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v21; // x8
  BattleDeckServantData_o *deckSvt; // x20
  int32_t DispLimitCnt; // w0
  struct WarBoardUserServantData_o *v24; // x8
  bool v25; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v28; // 0:x0.16

  v2 = this;
  if ( (byte_4A6DC55 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_ServantClassMaster___, method);
    sub_1B90010(&DataManager_TypeInfo, v3);
    sub_1B90010(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v4);
    this = (WarBoardPieceData_o *)sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v5);
    byte_4A6DC55 = 1;
  }
  entity = 0LL;
  battleServant_k__BackingField = v2->fields._battleServant_k__BackingField;
  if ( !battleServant_k__BackingField )
    goto LABEL_40;
  v8 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v7 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v8;
  *(_QWORD *)&v27.fields.fakeValue = v7;
  v9 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v27, 0LL);
  serverServantData = v2->fields.serverServantData;
  v2->fields._iconId_k__BackingField = v9;
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
  v11 = v2->fields._battleServant_k__BackingField;
  v2->fields._iconLimitCount_k__BackingField = (int)this;
  if ( !v11 )
    goto LABEL_40;
  this = (WarBoardPieceData_o *)BattleServantData__getClassId(v11, 0LL);
  v2->fields._iconClassId_k__BackingField = (int)this;
  p_iconClassId_k__BackingField = &v2->fields._iconClassId_k__BackingField;
  v13 = v2->fields._battleServant_k__BackingField;
  if ( !v13 )
    goto LABEL_40;
  v2->fields._iconFrameType_k__BackingField = v13->fields._frameType_k__BackingField;
  v2->fields._iconLevel_k__BackingField = v13->fields.level;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (WarBoardPieceData_o *)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( !this )
    goto LABEL_40;
  this = (WarBoardPieceData_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  &entity,
                                  *p_iconClassId_k__BackingField,
                                  (const MethodInfo_312C5FC *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_40;
    p_iconClassId_k__BackingField = (int32_t *)&entity[2].monitor + 1;
  }
  v14 = *p_iconClassId_k__BackingField;
  v15 = v2->fields._battleServant_k__BackingField;
  v2->fields._iconEquipId_k__BackingField = 0;
  v2->fields._equipLimitCount_k__BackingField = 0;
  v2->fields._IconClassImageId_k__BackingField = v14;
  if ( !v15 )
    goto LABEL_40;
  equipList = v15->fields.equipList;
  if ( equipList )
  {
    v17 = *(_QWORD *)&equipList->max_length;
    if ( v17 )
    {
      if ( !(_DWORD)v17 )
        goto LABEL_41;
      v18 = equipList->m_Items[0];
      if ( !v18 )
        goto LABEL_30;
      v20 = *(_QWORD *)&v18->fields.svtId.fields.currentCryptoKey;
      v19 = *(_QWORD *)&v18->fields.svtId.fields.fakeValue;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v28.fields.currentCryptoKey = v20;
      *(_QWORD *)&v28.fields.fakeValue = v19;
      this = (WarBoardPieceData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v28, 0LL);
      v2->fields._iconEquipId_k__BackingField = (int)this;
      if ( !equipList->max_length )
LABEL_41:
        sub_1B90274(this, method);
      v21 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)equipList->m_Items[0];
      if ( !v21
        || (this = (WarBoardPieceData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(
                                            v21[6],
                                            0LL),
            v15 = v2->fields._battleServant_k__BackingField,
            v2->fields._equipLimitCount_k__BackingField = (int)this,
            !v15) )
      {
LABEL_40:
        sub_1B9026C(this, method);
      }
    }
  }
LABEL_30:
  deckSvt = v15->fields.deckSvt;
  if ( deckSvt && deckSvt->fields.enemyScript )
  {
    v2->fields._npcImageSvtId_k__BackingField = BattleDeckServantData__GetImageSvtId(deckSvt, 0LL);
    DispLimitCnt = BattleDeckServantData__GetDispLimitCnt(deckSvt, 0LL);
    v24 = v2->fields.serverServantData;
    v2->fields._npcDispLimitCount_k__BackingField = DispLimitCnt;
    v25 = v24
       && v24->fields.displayType == 2
       && (v2->fields._npcImageSvtId_k__BackingField < 1 || BattleDeckServantData__IsShadow(deckSvt, 0LL));
    v2->fields._IsShadow_k__BackingField = v25;
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
          sub_1B9026C(HasCost, v7);
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
    sub_1B9026C(0LL, enable);
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
      sub_1B9026C(0LL, v3);
    ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))pieceComponent->klass->vtable._20_ShowActionTarget.method)(
      pieceComponent,
      pieceComponent->klass->vtable._21_HideActionTarget.methodPtr);
  }
}


System_String_o *__fastcall WarBoardPieceData__ToJson(WarBoardPieceData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x1
  Il2CppObject *serverMasterData_k__BackingField; // x19
  WarBoardUserServantData_o *serverServantData; // x0

  if ( (byte_4A6DC61 & 1) == 0 )
  {
    sub_1B90010(&JsonManager_TypeInfo, method);
    sub_1B90010(&string_TypeInfo, v3);
    byte_4A6DC61 = 1;
  }
  WarBoardPieceData__SetServarData(this, method);
  if ( this->fields._type_k__BackingField != 1 )
  {
    serverServantData = this->fields.serverServantData;
    if ( serverServantData )
      return WarBoardUserServantData__ToJson(serverServantData, v4);
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
    sub_1B9026C(0LL, method);
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))pieceComponent->klass->vtable._9_HideActionCount.method)(
    pieceComponent,
    pieceComponent->klass->vtable._10_UpdateDisplayActionCount.methodPtr);
}


void __fastcall WarBoardPieceData__TurnStart(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_1B9026C(0LL, method);
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
  System_Collections_Generic_IEnumerable_TSource__o *masterInfo; // x21
  System_Func_object__bool__o *v36; // x22
  struct WarBoardUserMasterData_o *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  int32_t defeatPoint; // w8
  struct WarBoardUserMasterData_o *v41; // x22
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  struct WarBoardUserMasterData_o **p_serverMasterData_k__BackingField; // x21
  _BOOL4 v44; // w24
  System_Collections_Generic_IEnumerable_TSource__o *svtInfo; // x22
  System_Func_object__bool__o *v46; // x24
  Il2CppObject *v47; // x0
  __int64 v48; // x1
  int32_t breakPoint_k__BackingField; // w26
  int32_t klass_high; // w25
  struct WarBoardUserServantData_o *v51; // x22
  __int64 v52; // x24
  __int64 pieceComponent; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  struct WarBoardPieceBaseComponent_o *v56; // x1
  int32_t v57; // w2
  int32_t v58; // w3
  struct WarBoardData_WarBoardDeadBreakList_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  _BOOL4 v62; // w21
  Il2CppClass **v63; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  struct WarBoardCost_o *v66; // x8
  _BOOL4 v67; // w22
  struct WarBoardUserServantData_o *serverServantData; // x8
  struct WarBoardUserServantData_o **p_serverServantData; // x23
  _BOOL4 v70; // w26
  int32_t currentActionCount_k__BackingField; // w27
  int32_t currentActionPoint; // w29
  struct WarBoardPieceData_SaveData_o *localSaveData; // x9
  int v74; // w28
  _BOOL4 v75; // w24
  _BOOL4 v76; // w25
  struct WarBoardUserMasterData_o *v77; // x8
  int v78; // w23
  _BOOL4 v79; // w8
  struct WarBoardPieceBaseComponent_o *v80; // x8
  __int64 v81; // x11
  UnityEngine_Object_o *v82; // x20
  bool v83; // w8
  WarBoardCost_o *Cost_k__BackingField; // x0
  struct WarBoardCost_o *v85; // x8
  const MethodInfo *v86; // x2
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  const MethodInfo *v88; // x2
  struct WarBoardUserServantData_o *v89; // x8
  int32_t squareIndex; // w8
  Il2CppObject *Master_object; // x22
  const MethodInfo *v92; // x1
  WarBoardActionPointEntity_o *v93; // x23
  struct WarBoardUserServantData_o *v94; // x8
  WarBoardActionPointClassEntity_o *v95; // x22
  WarBoardCost_o *v96; // x23
  int v97; // w22
  int v98; // w23
  struct WarBoardPieceBaseComponent_o *v99; // x8
  __int64 methodPtr_low; // x11
  UnityEngine_Object_o *v101; // x20
  struct BattleServantData_o *v102; // x8
  __int64 v103; // x21
  __int64 v104; // x22
  int32_t v105; // w0
  struct WarBoardUserServantData_o *v106; // x8
  BattleServantData_o *v107; // x8
  int32_t *p_iconClassId_k__BackingField; // x21
  struct BattleServantData_o *v109; // x8
  __int64 v110; // x20
  System_Func_bool__o *v111; // x19
  UnityEngine_WaitUntil_o *v112; // x21
  __int64 v113; // x19
  System_Delegate_o **v114; // x21
  System_Delegate_o *v115; // x22
  WarBoardTaskBase_TaskCallback_o *v116; // x23
  System_Delegate_o *v117; // x0
  int32_t v118; // w2
  int32_t v119; // w3
  System_Delegate_o *v120; // x8
  WarBoardTaskBase_TaskCallback_c *v121; // x1
  Il2CppObject *Instance; // x20
  __int64 v123; // x21
  __int64 v124; // x0
  __int64 v125; // x1
  int32_t v126; // w2
  int32_t v127; // w3
  __int64 v128; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v130; // 0:x0.16

  v6 = forceUpdate;
  if ( (byte_4A6DC60 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_ServantClassMaster___, warBoardDataEntity);
    sub_1B90010(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___, v11);
    sub_1B90010(&DataManager_TypeInfo, v12);
    sub_1B90010(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__, v13);
    sub_1B90010(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___, v14);
    sub_1B90010(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___, v15);
    sub_1B90010(&System_Func_bool__TypeInfo, v16);
    sub_1B90010(&System_Func_WarBoardUserMasterData__bool__TypeInfo, v17);
    sub_1B90010(&System_Func_WarBoardUserServantData__bool__TypeInfo, v18);
    sub_1B90010(&Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__Add__, v19);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v20);
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v21);
    sub_1B90010(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v22);
    sub_1B90010(&WarBoardTaskBase_TaskCallback_TypeInfo, v23);
    sub_1B90010(&Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__2__, v24);
    sub_1B90010(&Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__3__, v25);
    sub_1B90010(&WarBoardPieceData___c__DisplayClass316_0_TypeInfo, v26);
    sub_1B90010(&UnityEngine_WaitUntil_TypeInfo, v27);
    sub_1B90010(&WarBoardCallbackTask_TypeInfo, v28);
    sub_1B90010(&WarBoardData_WarBoardDeadBreakList_TypeInfo, v29);
    sub_1B90010(&WarBoardMasterPieceComponent_TypeInfo, v30);
    sub_1B90010(&Method_WarBoardPieceData__UpdateFromServerData_b__316_0__, v31);
    sub_1B90010(&Method_WarBoardPieceData__UpdateFromServerData_b__316_1__, v32);
    sub_1B90010(&WarBoardServantPieceComponent_TypeInfo, v33);
    sub_1B90010(&WarBoardTaskBase___TypeInfo, v34);
    byte_4A6DC60 = 1;
  }
  entity = 0LL;
  if ( !warBoardDataEntity )
    return;
  if ( this->fields._type_k__BackingField != 1 )
  {
    svtInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.svtInfo;
    v46 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_WarBoardUserServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v46,
      (Il2CppObject *)this,
      Method_WarBoardPieceData__UpdateFromServerData_b__316_1__,
      0LL);
    v47 = System_Linq_Enumerable__FirstOrDefault_object__48967524(
            svtInfo,
            (System_Func_TSource__bool__o *)v46,
            (const MethodInfo_2EB2F64 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
    if ( !v47 )
      return;
    breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
    klass_high = HIDWORD(v47[35].klass);
    v51 = (struct WarBoardUserServantData_o *)v47;
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
      v62 = 0;
    }
    else
    {
      this->fields._breakPoint_k__BackingField = klass_high;
      if ( (klass_high & 0x80000000) != 0 )
        this->fields._isDead_k__BackingField = 1;
      v52 = sub_1B9025C(WarBoardData_WarBoardDeadBreakList_TypeInfo);
      System_Object___ctor((Il2CppObject *)v52, 0LL);
      if ( !v52 )
        goto LABEL_153;
      v56 = this->fields.pieceComponent;
      *(_QWORD *)(v52 + 16) = v56;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v52 + 16), (int32_t)v56, v54, v55);
      *(_DWORD *)(v52 + 24) = v51->fields.defeatPoint;
      *(_DWORD *)(v52 + 28) = breakPoint_k__BackingField;
      if ( !deadBreakList )
        goto LABEL_153;
      items = deadBreakList->fields._items;
      v60 = Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__Add__;
      ++deadBreakList->fields._version;
      if ( !items )
        goto LABEL_153;
      size = deadBreakList->fields._size;
      v62 = klass_high >= 0;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)deadBreakList,
          (Il2CppObject *)v52,
          *(const MethodInfo_35109C0 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
      }
      else
      {
        v63 = &items->obj.klass + size;
        deadBreakList->fields._size = size + 1;
        v63[4] = (Il2CppClass *)v52;
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v63 + 4), v52, v57, v58);
      }
    }
    p_serverServantData = &this->fields.serverServantData;
    serverServantData = this->fields.serverServantData;
    if ( serverServantData )
      v70 = serverServantData->fields.transformIndex != v51->fields.transformIndex;
    else
      v70 = 0;
    currentActionCount_k__BackingField = this->fields._currentActionCount_k__BackingField;
    currentActionPoint = v51->fields.currentActionPoint;
    localSaveData = this->fields.localSaveData;
    v74 = currentActionCount_k__BackingField != currentActionPoint;
    if ( !localSaveData )
      goto LABEL_153;
    if ( v51->fields.consumedActionPointDateTime <= localSaveData->fields.consumedActionPointDateTime
      || this->fields._forceId_k__BackingField
      || this->fields._groupId_k__BackingField )
    {
      v75 = 0;
      if ( serverServantData )
      {
LABEL_37:
        v76 = serverServantData->fields.criticalStars != v51->fields.criticalStars;
        goto LABEL_64;
      }
    }
    else
    {
      v75 = !this->fields._isDead_k__BackingField;
      if ( serverServantData )
        goto LABEL_37;
    }
    v76 = 0;
LABEL_64:
    v83 = v51->fields.consumedRecoverDonotActCostDateTime > localSaveData->fields.consumedRecoverDonotActCostDateTime
       && !this->fields._forceId_k__BackingField
       && !this->fields._groupId_k__BackingField
       && !this->fields._isDead_k__BackingField;
    this->fields._IsDispConsumedPieceActionPoint_k__BackingField = v83;
    Cost_k__BackingField = this->fields._Cost_k__BackingField;
    this->fields._ConsumedRecoverDonotActCost_k__BackingField = v51->fields.consumedRecoverDonotActCost;
    if ( Cost_k__BackingField )
    {
      pieceComponent = WarBoardCost__get_HasCost(Cost_k__BackingField, 0LL);
      v74 = pieceComponent | (currentActionCount_k__BackingField != currentActionPoint);
      if ( currentActionCount_k__BackingField == currentActionPoint && (pieceComponent & 1) != 0 )
      {
        v85 = this->fields._Cost_k__BackingField;
        if ( !v85 )
          goto LABEL_153;
        v74 = v85->fields._CurrentActionPoint_k__BackingField != v51->fields.currentPieceActionPoint;
      }
    }
    this->fields.serverServantData = v51;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.serverServantData, (int32_t)v51, v64, v65);
    pieceComponent = (__int64)this->fields.serverServantData;
    if ( !pieceComponent )
      goto LABEL_153;
    WarBoardUserServantData__SetBattleServantData(
      (WarBoardUserServantData_o *)pieceComponent,
      this->fields._battleServant_k__BackingField,
      v86);
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
      v88);
    v89 = this->fields.serverServantData;
    if ( !v89 )
      goto LABEL_153;
    *(int32x2_t *)&this->fields._limitActionCount_k__BackingField = vrev64_s32(*(int32x2_t *)&v89->fields.currentActionPoint);
    this->fields._attackCount_k__BackingField = v89->fields.attackCount;
    squareIndex = v89->fields.squareIndex;
    if ( squareIndex == -1 )
      this->fields._lastSquareIndex_k__BackingField = this->fields._nowSquareIndex_k__BackingField;
    this->fields._nowSquareIndex_k__BackingField = squareIndex;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    pieceComponent = (__int64)WarBoardPieceData__get_ActionPointEntity(this, v92);
    if ( !this->fields._battleServant_k__BackingField )
      goto LABEL_153;
    v93 = (WarBoardActionPointEntity_o *)pieceComponent;
    pieceComponent = BattleServantData__getClassId(this->fields._battleServant_k__BackingField, 0LL);
    if ( !Master_object )
      goto LABEL_153;
    pieceComponent = (__int64)WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                (WarBoardActionPointClassMaster_o *)Master_object,
                                v93,
                                pieceComponent,
                                0LL);
    v94 = this->fields.serverServantData;
    if ( !v94 )
      goto LABEL_153;
    v95 = (WarBoardActionPointClassEntity_o *)pieceComponent;
    pieceComponent = (__int64)this->fields._Cost_k__BackingField;
    if ( !pieceComponent )
      goto LABEL_153;
    WarBoardCost__UpdateCurrentPointByServerData(
      (WarBoardCost_o *)pieceComponent,
      v94->fields.currentPieceActionPoint,
      0LL);
    pieceComponent = (__int64)this->fields._battleServant_k__BackingField;
    if ( !pieceComponent )
      goto LABEL_153;
    v96 = this->fields._Cost_k__BackingField;
    pieceComponent = BattleServantData__getClassId((BattleServantData_o *)pieceComponent, 0LL);
    if ( !v96 )
      goto LABEL_153;
    if ( WarBoardCost__IsSameClass(v96, pieceComponent, 0LL) )
    {
      v97 = 0;
    }
    else
    {
      pieceComponent = (__int64)WarBoardCost__Create(v95, 0LL, 0LL, 0LL);
      if ( !this->fields._Cost_k__BackingField )
        goto LABEL_153;
      WarBoardCost__UpdateClassCost(this->fields._Cost_k__BackingField, (WarBoardCost_o *)pieceComponent, 0LL);
      v97 = 1;
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
        v62,
        *(_QWORD *)(*(_QWORD *)pieceComponent + 560LL));
    }
    if ( v97 | (v74 | v6) & 1 && !this->fields._isDead_k__BackingField )
    {
      pieceComponent = (__int64)this->fields.pieceComponent;
      if ( !pieceComponent )
        goto LABEL_153;
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)pieceComponent + 472LL))(
        pieceComponent,
        *(_QWORD *)(*(_QWORD *)pieceComponent + 480LL));
    }
    v98 = v6;
    if ( v70 | v98 && !this->fields._isDead_k__BackingField )
    {
      v99 = this->fields.pieceComponent;
      if ( v99
        && (methodPtr_low = LOBYTE(WarBoardServantPieceComponent_TypeInfo->vtable._0_Equals.methodPtr),
            LOBYTE(v99->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
      {
        if ( (WarBoardServantPieceComponent_c *)v99->klass->_2.typeHierarchy[methodPtr_low - 1] == WarBoardServantPieceComponent_TypeInfo )
          v101 = (UnityEngine_Object_o *)this->fields.pieceComponent;
        else
          v101 = 0LL;
      }
      else
      {
        v101 = 0LL;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      pieceComponent = UnityEngine_Object__op_Inequality(v101, 0LL, 0LL);
      if ( (pieceComponent & 1) != 0 )
      {
        v102 = this->fields._battleServant_k__BackingField;
        if ( !v102 )
          goto LABEL_153;
        v104 = *(_QWORD *)&v102->fields.svtId.fields.currentCryptoKey;
        v103 = *(_QWORD *)&v102->fields.svtId.fields.fakeValue;
        if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
        *(_QWORD *)&v130.fields.currentCryptoKey = v104;
        *(_QWORD *)&v130.fields.fakeValue = v103;
        v105 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46506376(v130, 0LL);
        v106 = this->fields.serverServantData;
        this->fields._iconId_k__BackingField = v105;
        if ( v106 && NpcSvtType__IsEnemy(v106->fields.npcSvtType, 0LL) )
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
        v107 = this->fields._battleServant_k__BackingField;
        this->fields._iconLimitCount_k__BackingField = pieceComponent;
        if ( !v107 )
          goto LABEL_153;
        pieceComponent = BattleServantData__getClassId(v107, 0LL);
        this->fields._iconClassId_k__BackingField = pieceComponent;
        p_iconClassId_k__BackingField = &this->fields._iconClassId_k__BackingField;
        v109 = this->fields._battleServant_k__BackingField;
        if ( !v109 )
          goto LABEL_153;
        this->fields._iconFrameType_k__BackingField = v109->fields._frameType_k__BackingField;
        this->fields._iconLevel_k__BackingField = v109->fields.level;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        pieceComponent = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_ServantClassMaster___);
        if ( !pieceComponent )
          goto LABEL_153;
        pieceComponent = DataMasterBase_object__object__int___TryGetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)pieceComponent,
                           &entity,
                           *p_iconClassId_k__BackingField,
                           (const MethodInfo_312C5FC *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
        if ( (pieceComponent & 1) != 0 )
        {
          if ( !entity )
            goto LABEL_153;
          p_iconClassId_k__BackingField = (int32_t *)&entity[2].monitor + 1;
        }
        this->fields._IconClassImageId_k__BackingField = *p_iconClassId_k__BackingField;
        if ( !v101 )
          goto LABEL_153;
        WarBoardServantPieceComponent__SetServantIcon((WarBoardServantPieceComponent_o *)v101, 0LL);
        ((void (__fastcall *)(UnityEngine_Object_o *, void *))v101->klass[1]._1.parent)(
          v101,
          v101->klass[1]._1.generic_class);
        ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *))v101->klass[1]._1.castClass)(
          v101,
          v101->klass[1]._1.declaringType);
      }
    }
    if ( v76 | v98 && !this->fields._isDead_k__BackingField )
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
      sub_1B9026C(pieceComponent, v48);
    WarBoardPieceBaseComponent__UpdateUiByBuffChanged((WarBoardPieceBaseComponent_o *)pieceComponent, 0LL);
    if ( !v75 )
      return;
    v110 = sub_1B9025C(WarBoardPieceData___c__DisplayClass316_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v110, 0LL);
    if ( !v110 )
      goto LABEL_153;
    *(_BYTE *)(v110 + 16) = 0;
    v111 = (System_Func_bool__o *)sub_1B9025C(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v111,
      (Il2CppObject *)v110,
      Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__2__,
      0LL);
    v112 = (UnityEngine_WaitUntil_o *)sub_1B9025C(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v112, v111, 0LL);
    v113 = sub_1B9025C(WarBoardCallbackTask_TypeInfo);
    WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v113, (UnityEngine_CustomYieldInstruction_o *)v112, 0LL);
    if ( !v113 )
      goto LABEL_153;
    v114 = (System_Delegate_o **)(v113 + 32);
    v115 = *(System_Delegate_o **)(v113 + 32);
    v116 = (WarBoardTaskBase_TaskCallback_o *)sub_1B9025C(WarBoardTaskBase_TaskCallback_TypeInfo);
    WarBoardTaskBase_TaskCallback___ctor(
      v116,
      (Il2CppObject *)v110,
      Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__3__,
      0LL);
    v117 = System_Delegate__Combine(v115, (System_Delegate_o *)v116, 0LL);
    v120 = v117;
    if ( v117 )
    {
      v121 = WarBoardTaskBase_TaskCallback_TypeInfo;
      if ( (WarBoardTaskBase_TaskCallback_c *)v117->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
      {
        *v114 = v117;
        if ( (WarBoardTaskBase_TaskCallback_c *)v117->klass == v121 )
        {
LABEL_146:
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v113 + 32), (int32_t)v120, v118, v119);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          pieceComponent = sub_1B900B8(WarBoardTaskBase___TypeInfo, 1LL);
          if ( !pieceComponent )
            goto LABEL_153;
          v123 = pieceComponent;
          v124 = sub_1B9014C(v113, *(_QWORD *)(*(_QWORD *)pieceComponent + 64LL));
          if ( !v124 )
          {
            v128 = sub_1B90290(0LL);
            sub_1B90138(v128, 0LL);
          }
          if ( !*(_DWORD *)(v123 + 24) )
            sub_1B90274(v124, v125);
          *(_QWORD *)(v123 + 32) = v113;
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v123 + 32), v113, v126, v127);
          if ( !Instance )
            goto LABEL_153;
          WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 1, (WarBoardTaskBase_array *)v123, 0LL);
          return;
        }
      }
      sub_1B9052C(v117);
    }
    *v114 = v120;
    goto LABEL_146;
  }
  masterInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.masterInfo;
  v36 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_WarBoardUserMasterData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v36,
    (Il2CppObject *)this,
    Method_WarBoardPieceData__UpdateFromServerData_b__316_0__,
    0LL);
  v37 = (struct WarBoardUserMasterData_o *)System_Linq_Enumerable__FirstOrDefault_object__48967524(
                                             masterInfo,
                                             (System_Func_TSource__bool__o *)v36,
                                             (const MethodInfo_2EB2F64 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
  if ( !v37 )
    return;
  defeatPoint = v37->fields.defeatPoint;
  v41 = v37;
  if ( this->fields._breakPoint_k__BackingField > defeatPoint )
  {
    this->fields._breakPoint_k__BackingField = defeatPoint;
    if ( defeatPoint <= 0 )
      this->fields._isDead_k__BackingField = 1;
  }
  p_serverMasterData_k__BackingField = &this->fields._serverMasterData_k__BackingField;
  serverMasterData_k__BackingField = this->fields._serverMasterData_k__BackingField;
  if ( serverMasterData_k__BackingField )
    v44 = serverMasterData_k__BackingField->fields.commandSpellNum != v37->fields.commandSpellNum;
  else
    v44 = 1;
  this->fields._serverMasterData_k__BackingField = v37;
  sub_1B8FFB4(
    (ServantStatusBattleListViewItem_o *)&this->fields._serverMasterData_k__BackingField,
    (int32_t)v37,
    v38,
    v39);
  if ( this->fields._currentActionCount_k__BackingField == v41->fields.currentLimitActionPoint )
  {
    v66 = this->fields._Cost_k__BackingField;
    if ( v66 )
    {
      if ( !*p_serverMasterData_k__BackingField )
        goto LABEL_153;
      v67 = v66->fields._CurrentActionPoint_k__BackingField != (*p_serverMasterData_k__BackingField)->fields.currentPieceActionPoint;
    }
    else
    {
      v67 = 0;
    }
  }
  else
  {
    v67 = 1;
  }
  v77 = *p_serverMasterData_k__BackingField;
  if ( !*p_serverMasterData_k__BackingField )
    goto LABEL_153;
  pieceComponent = (__int64)this->fields._Cost_k__BackingField;
  *(int32x2_t *)&this->fields._limitActionCount_k__BackingField = vrev64_s32(*(int32x2_t *)&v77->fields.currentLimitActionPoint);
  this->fields._attackCount_k__BackingField = v77->fields.attackCount;
  this->fields._nowSquareIndex_k__BackingField = v77->fields.squareIndex;
  if ( !pieceComponent )
    goto LABEL_153;
  v78 = v6;
  WarBoardCost__UpdateCurrentPointByServerData(
    (WarBoardCost_o *)pieceComponent,
    v77->fields.currentPieceActionPoint,
    0LL);
  v79 = !this->fields._forceId_k__BackingField
     && !this->fields._groupId_k__BackingField
     && this->fields._type_k__BackingField == 1;
  if ( (v79 & (v44 | v78)) != 0 )
  {
    v80 = this->fields.pieceComponent;
    if ( v80
      && (v81 = LOBYTE(WarBoardMasterPieceComponent_TypeInfo->vtable._0_Equals.methodPtr),
          LOBYTE(v80->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v81) )
    {
      v82 = (WarBoardMasterPieceComponent_c *)v80->klass->_2.typeHierarchy[v81 - 1] == WarBoardMasterPieceComponent_TypeInfo
          ? (UnityEngine_Object_o *)this->fields.pieceComponent
          : 0LL;
    }
    else
    {
      v82 = 0LL;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    pieceComponent = UnityEngine_Object__op_Inequality(v82, 0LL, 0LL);
    if ( (pieceComponent & 1) != 0 )
    {
      if ( !*p_serverMasterData_k__BackingField || !v82 )
        goto LABEL_153;
      WarBoardMasterPieceComponent__SetCommandSpellRemain(
        (WarBoardMasterPieceComponent_o *)v82,
        (*p_serverMasterData_k__BackingField)->fields.commandSpellNum,
        0LL);
    }
  }
  if ( v67 | v78 && !this->fields._isDead_k__BackingField )
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
    sub_1B9026C(0LL, method);
  WarBoardPieceBaseComponent__UpdateWidgetDepth(pieceComponent, 0LL);
}


void __fastcall WarBoardPieceData__WallAttack(WarBoardPieceData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_1B9026C(0LL, squareIndex);
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
    sub_1B9026C(this, 0LL);
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
    sub_1B9026C(this, 0LL);
  return x->fields.forceId == this->fields._forceId_k__BackingField
      && x->fields.groupId == this->fields._groupId_k__BackingField;
}


bool __fastcall WarBoardPieceData___SetInitinalData_b__315_1(
        WarBoardPieceData_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B9026C(this, 0LL);
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
    sub_1B9026C(this, 0LL);
  return x->fields.forceId == this->fields._forceId_k__BackingField
      && x->fields.groupId == this->fields._groupId_k__BackingField;
}


bool __fastcall WarBoardPieceData___UpdateFromServerData_b__316_1(
        WarBoardPieceData_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B9026C(this, 0LL);
  return x->fields.forceId == this->fields._forceId_k__BackingField
      && x->fields.groupId == this->fields._groupId_k__BackingField
      && x->fields.pieceIndex == this->fields._index_k__BackingField;
}


WarBoardActionPointEntity_o *__fastcall WarBoardPieceData__get_ActionPointEntity(
        WarBoardPieceData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_4A6DC51 & 1) == 0 )
  {
    sub_1B90010(&Method_DataManager_GetMaster_WarBoardActionPointMaster___, method);
    sub_1B90010(&DataManager_TypeInfo, v3);
    byte_4A6DC51 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E8E1C8 *)Method_DataManager_GetMaster_WarBoardActionPointMaster___);
  if ( !Master_object )
    sub_1B9026C(0LL, v5);
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
    sub_1B9026C(this, method);
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
  if ( (byte_4A6DC50 & 1) == 0 )
  {
    this = (WarBoardPieceData_o *)sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    byte_4A6DC50 = 1;
  }
  serverServantData = v2->fields.serverServantData;
  if ( !serverServantData )
    sub_1B9026C(this, method);
  v4 = *(_OWORD *)&serverServantData->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&serverServantData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(&v6, 0LL);
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
    sub_1B9026C(0LL, method);
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

  if ( (byte_4A6DC4E & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, method);
    byte_4A6DC4E = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0LL )
    sub_1B9026C(Instance, v4);
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
  sub_1B8FFB4(
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
  sub_1B8FFB4(
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
  sub_1B8FFB4(
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
  sub_1B8FFB4(
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
  sub_1B8FFB4(
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


void __fastcall WarBoardPieceData_RouteSaveData___ctor_35621452(
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
  *(_OWORD *)&this->fields.forceId = xmmword_BB7A70;
}


void __fastcall WarBoardPieceData_SaveData___ctor_35589928(
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.owner, (int32_t)owner, v5, v6);
  WarBoardPieceData_SaveData__Save(this, v7);
  v11 = this->fields.owner;
  if ( !v11 )
    sub_1B9026C(0LL, v8);
  v11->fields.localSaveData = this;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v11->fields.localSaveData, (int32_t)this, v9, v10);
}


void __fastcall WarBoardPieceData_SaveData__Load(WarBoardPieceData_SaveData_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  struct WarBoardPieceData_o *owner; // x0
  struct WarBoardPieceData_RouteSaveData_o *prevAiRoute; // x1
  int64_t Cost_k__BackingField; // x0
  BattleServantData_o *v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  struct WarBoardPieceData_o *v12; // x8
  struct WarBoardPieceData_o *v13; // x8
  struct WarBoardPieceData_o *v14; // x8
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  struct WarBoardUserServantData_o *serverServantData; // x8
  struct BattleBuffData_SaveData_o *buffSave; // x1
  struct WarBoardPieceData_o *v18; // x8
  struct WarBoardUserServantData_o *v19; // x8
  struct WarBoardPieceData_o *v20; // x8
  struct WarBoardUserServantData_o *v21; // x8
  __int128 v22; // q1
  WarBoardManager_o *v23; // x20
  const MethodInfo *v24; // x2
  struct WarBoardPieceData_o *v25; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v27; // [xsp+20h] [xbp-40h]

  if ( (byte_4A6DC6F & 1) == 0 )
  {
    sub_1B90010(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method);
    sub_1B90010(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5);
    byte_4A6DC6F = 1;
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
    sub_1B8FFB4(
      (ServantStatusBattleListViewItem_o *)&owner->fields._PrevAiRoute_k__BackingField,
      (int32_t)prevAiRoute,
      v2,
      v3);
    v12 = this->fields.owner;
    if ( !v12 )
      goto LABEL_26;
    v12->fields._entryTurn_k__BackingField = this->fields.entryTurn;
    *(_QWORD *)&v12->fields._StageReinfoId_k__BackingField = *(_QWORD *)&this->fields.stageReinforcementId;
    *(_QWORD *)&v12->fields._overwriteActionType_k__BackingField = *(_QWORD *)&this->fields.overwriteActionType;
    Cost_k__BackingField = (int64_t)v12->fields._Cost_k__BackingField;
    if ( Cost_k__BackingField )
    {
      Cost_k__BackingField = WarBoardCost__get_HasCost((WarBoardCost_o *)Cost_k__BackingField, 0LL);
      if ( (Cost_k__BackingField & 1) != 0 )
      {
        v13 = this->fields.owner;
        if ( !v13 )
          goto LABEL_26;
        Cost_k__BackingField = (int64_t)v13->fields._Cost_k__BackingField;
        if ( !Cost_k__BackingField )
          goto LABEL_26;
        WarBoardCost__UpdateCurrentPointBySaveData(
          (WarBoardCost_o *)Cost_k__BackingField,
          this->fields.currentActionPoint,
          0LL);
      }
    }
    v14 = this->fields.owner;
    if ( v14 )
    {
      if ( v14->fields._type_k__BackingField == 1 )
      {
        serverMasterData_k__BackingField = v14->fields._serverMasterData_k__BackingField;
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
      serverServantData = v14->fields.serverServantData;
      if ( !serverServantData )
        return;
      *(_QWORD *)&serverServantData->fields.squareIndex = *(_QWORD *)&this->fields.squareIndex;
      buffSave = this->fields.buffSave;
      serverServantData->fields.buffDataSave = buffSave;
      sub_1B8FFB4(
        (ServantStatusBattleListViewItem_o *)&serverServantData->fields.buffDataSave,
        (int32_t)buffSave,
        v10,
        v11);
      v18 = this->fields.owner;
      if ( v18 )
      {
        v19 = v18->fields.serverServantData;
        if ( v19 )
        {
          v19->fields.attackCount = this->fields.attackCount;
          *(_QWORD *)&v19->fields.currentHp = *(_QWORD *)&this->fields.hp;
          v19->fields.nextNpTurn = this->fields.tdTurn;
          v19->fields.criticalStars = this->fields.criticalStars;
          v19->fields.currentPieceActionPoint = this->fields.currentActionPoint;
          v19->fields.defeatPoint = this->fields.breakPoint;
          Cost_k__BackingField = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          v20 = this->fields.owner;
          if ( v20 )
          {
            v21 = v20->fields.serverServantData;
            if ( v21 )
            {
              v22 = *(_OWORD *)&v21->fields.id.fields.fakeValue;
              v23 = (WarBoardManager_o *)Cost_k__BackingField;
              *(_OWORD *)&v27.fields.currentCryptoKey = *(_OWORD *)&v21->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v27.fields.fakeValue = v22;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v26 = v27;
              Cost_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_46509900(&v26, 0LL);
              if ( v23 )
              {
                Cost_k__BackingField = (int64_t)WarBoardManager__GetBattleServant(v23, Cost_k__BackingField, 0LL);
                v25 = this->fields.owner;
                if ( v25 )
                {
                  v9 = (BattleServantData_o *)Cost_k__BackingField;
                  Cost_k__BackingField = (int64_t)v25->fields.serverServantData;
                  if ( Cost_k__BackingField )
                  {
                    WarBoardUserServantData__SetBattleServantData(
                      (WarBoardUserServantData_o *)Cost_k__BackingField,
                      v9,
                      v24);
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
    sub_1B9026C(Cost_k__BackingField, v9);
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v5->fields.buffSave, 0, v2, v3);
  v12 = v5->fields.owner;
  v5->fields.currentForceActionPoint = 0;
  if ( !v12 )
    goto LABEL_24;
  PrevAiRoute_k__BackingField = v12->fields._PrevAiRoute_k__BackingField;
  v5->fields.prevAiRoute = PrevAiRoute_k__BackingField;
  sub_1B8FFB4(
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
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v5->fields.buffSave, (int32_t)SaveData, v19, v20);
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
      sub_1B9026C(this, method);
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
    sub_1B9026C(this, 0LL);
  Piece = WarBoardData__GetPiece(data, this->fields.forceId, this->fields.groupId, this->fields.pieceIndex, 0, 0LL);
  this->fields.owner = Piece;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.owner, (int32_t)Piece, v5, v6);
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields.localSaveData = this;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&owner->fields.localSaveData, (int32_t)this, v7, v8);
  }
}


void __fastcall WarBoardPieceData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A6DC70 & 1) == 0 )
  {
    sub_1B90010(&WarBoardPieceData___c_TypeInfo, v1);
    byte_4A6DC70 = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(WarBoardPieceData___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardPieceData___c_TypeInfo->static_fields->__9 = (struct WarBoardPieceData___c_o *)v2;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)WarBoardPieceData___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B9026C(0LL, x);
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
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  System_Action_bool__o *_9__4; // x22
  WarBoardManager_o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A6DC71 & 1) == 0 )
  {
    sub_1B90010(&System_Action_bool__TypeInfo, method);
    sub_1B90010(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v3);
    sub_1B90010(&Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__4__, v4);
    byte_4A6DC71 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__4 = this->fields.__9__4;
  v8 = (WarBoardManager_o *)Instance;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_bool__o *)sub_1B9025C(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__4__,
      0LL);
    this->fields.__9__4 = _9__4;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.__9__4, (int32_t)_9__4, v9, v10);
  }
  if ( !v8 )
    sub_1B9026C(Instance, v6);
  WarBoardManager__ShowActionCountDecreaseNoticePopup(v8, _9__4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardPieceData___c__DisplayClass316_0___UpdateFromServerData_b__4(
        WarBoardPieceData___c__DisplayClass316_0_o *this,
        bool ok,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  System_Action_o *_9__5; // x22
  WarBoardManager_o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A6DC72 & 1) == 0 )
  {
    sub_1B90010(&System_Action_TypeInfo, ok);
    sub_1B90010(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v4);
    sub_1B90010(&Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__5__, v5);
    byte_4A6DC72 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_374C890 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__5 = this->fields.__9__5;
  v9 = (WarBoardManager_o *)Instance;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1B9025C(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)this,
      Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__5__,
      0LL);
    this->fields.__9__5 = _9__5;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.__9__5, (int32_t)_9__5, v10, v11);
  }
  if ( !v9 )
    sub_1B9026C(Instance, v7);
  WarBoardManager__HideActionCountDecreaseNoticePopup(v9, _9__5, 0LL);
}


void __fastcall WarBoardPieceData___c__DisplayClass316_0___UpdateFromServerData_b__5(
        WarBoardPieceData___c__DisplayClass316_0_o *this,
        const MethodInfo *method)
{
  this->fields.popupClose = 1;
}