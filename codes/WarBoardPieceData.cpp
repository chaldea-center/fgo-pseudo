void WarBoardPieceData___cctor(const MethodInfo *method)
{
  if ( (byte_593616D & 1) == 0 )
  {
    sub_21FFC50(&WarBoardPieceData_TypeInfo);
    byte_593616D = 1;
  }
  *WarBoardPieceData_TypeInfo->static_fields = (struct WarBoardPieceData_StaticFields)xmmword_E93FE0;
}


void WarBoardPieceData___ctor(
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
  Il2CppObject *v16; // x25
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  int64_t Master_object; // x0
  const MethodInfo *v24; // x1
  __int64 v25; // x2
  int32_t stageId; // w8
  int32_t pieceIndex; // w25
  WarBoardPieceData_c *v28; // x0
  int32_t forceId; // w21
  int32_t groupId; // w28
  int v31; // w8
  int32_t squareIndex; // w9
  struct System_Int32_array *Individuality; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  __int64 v40; // x1
  __int64 v41; // x2
  struct BattleServantData_o **p_battleServant_k__BackingField; // x25
  int32_t breakPoint; // w8
  int32_t actionType; // w9
  int32_t restrictionId; // w10
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  const MethodInfo_476E8C0 *v52; // x0
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  int32_t TurnCount; // w0
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x8
  WarBoardStagePieceDetailEntity_o *v61; // x8
  int32_t type_k__BackingField; // w8
  struct WarBoardUserMasterData_o **p_serverMasterData_k__BackingField; // x27
  __int64 v64; // x2
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  DataManager_c *v66; // x0
  Il2CppObject *v67; // x26
  const MethodInfo *v68; // x1
  WarBoardActionPointClassEntity_o *MasterEntityFromStageId; // x0
  struct WarBoardCost_o *v70; // x0
  struct WarBoardCost_o **p_Cost_k__BackingField; // x26
  System_String_o *v72; // x2
  System_String_o *v73; // x3
  int32_t v74; // w4
  int32_t v75; // w5
  bool v76; // w6
  bool v77; // w7
  struct WarBoardUserMasterData_o *v78; // x8
  struct WarBoardUserMasterData_o *v79; // x8
  int32_t attackCount; // w9
  int32_t defeatPoint; // w8
  __int64 v82; // x1
  __int64 v83; // x2
  Il2CppObject *Instance; // x26
  __int128 v85; // q1
  struct BattleServantData_o *BattleServant; // x0
  System_String_o *v87; // x2
  System_String_o *v88; // x3
  int32_t v89; // w4
  int32_t v90; // w5
  bool v91; // w6
  bool v92; // w7
  System_String_o *v93; // x2
  System_String_o *v94; // x3
  int32_t v95; // w4
  int32_t v96; // w5
  bool v97; // w6
  bool v98; // w7
  __int64 v99; // x1
  __int64 v100; // x2
  DataManager_c *v101; // x0
  int32_t limitActionPoint; // w9
  int32_t currentActionPoint; // w8
  int v104; // w10
  Il2CppObject *v105; // x26
  const MethodInfo *v106; // x1
  WarBoardActionPointEntity_o *v107; // x27
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  struct WarBoardCost_o *v109; // x0
  System_String_o *v110; // x2
  System_String_o *v111; // x3
  int32_t v112; // w4
  int32_t v113; // w5
  bool v114; // w6
  bool v115; // w7
  int32_t v116; // w9
  int32_t forceId_k__BackingField; // w9
  long double v118; // q0
  int64_t userEquipId; // x8
  __int64 v120; // x0
  __int64 v121; // x0
  __int64 v122; // x2
  __int64 v123; // x20
  __int64 v124; // x21
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t dropInfos_low; // x8
  __int64 v127; // x8
  int64_t npcSvtEquipId; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v130; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v131; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v132; // 0:x0.16

  if ( (byte_5936151 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&WarBoardPieceData_PieceStatusCache_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&WarBoardPieceData_TypeInfo);
    byte_5936151 = 1;
  }
  v16 = (Il2CppObject *)sub_21FFEBC(WarBoardPieceData_PieceStatusCache_TypeInfo);
  System_Object___ctor(v16, 0);
  this->fields.statusCache = (struct WarBoardPieceData_PieceStatusCache_o *)v16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.statusCache, (int32_t)v16, v17, v18, v19, v20, v21, v22);
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !layout )
    goto LABEL_85;
  stageId = layout->fields.stageId;
  this->fields._ReinfoId_k__BackingField = -1;
  pieceIndex = layout->fields.pieceIndex;
  this->fields.stageId = stageId;
  *(_QWORD *)&this->fields._StageReinfoId_k__BackingField = -1;
  v28 = WarBoardPieceData_TypeInfo;
  forceId = layout->fields.forceId;
  groupId = layout->fields.groupId;
  this->fields._type_k__BackingField = pieceIndex == 0;
  v31 = *(&v28->_2.cctor_finished + 1);
  this->fields._forceId_k__BackingField = forceId;
  this->fields._groupId_k__BackingField = groupId;
  this->fields._index_k__BackingField = pieceIndex;
  if ( !v31 )
    j_il2cpp_runtime_class_init_0(v28, v24, v25);
  squareIndex = layout->fields.squareIndex;
  this->fields._nowSquareIndex_k__BackingField = squareIndex;
  this->fields._PutSquareIndex_k__BackingField = squareIndex;
  this->fields._uniqueIndex_k__BackingField = (forceId << 24)
                                            | ((unsigned __int8)groupId << 16)
                                            | (unsigned __int16)pieceIndex;
  Individuality = WarBoardStageLayoutEntity__GetIndividuality(layout, 0);
  this->fields._individuality_k__BackingField = Individuality;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._individuality_k__BackingField,
    (int32_t)Individuality,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v40, v41);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
  if ( !Master_object )
    goto LABEL_85;
  WarBoardStagePieceDetailMaster__TryGetEntity(
    (WarBoardStagePieceDetailMaster_o *)Master_object,
    &this->fields.stagePieceDetailEntity,
    this->fields.stageId,
    this->fields._forceId_k__BackingField,
    this->fields._groupId_k__BackingField,
    this->fields._index_k__BackingField,
    0);
  this->fields._battleServant_k__BackingField = 0;
  p_battleServant_k__BackingField = &this->fields._battleServant_k__BackingField;
  *(_QWORD *)&this->fields._overwriteActionType_k__BackingField = -1;
  breakPoint = layout->fields.breakPoint;
  actionType = layout->fields.actionType;
  restrictionId = layout->fields.restrictionId;
  this->fields._breakPointMax_k__BackingField = breakPoint;
  this->fields._actionType_k__BackingField = actionType;
  this->fields._restrictionId_k__BackingField = restrictionId;
  this->fields._breakPoint_k__BackingField = breakPoint;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._battleServant_k__BackingField,
    0,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v52 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__;
  this->fields._isDead_k__BackingField = 0;
  this->fields._isEditing_k__BackingField = 0;
  this->fields._isNotIncludeWin_k__BackingField = 0;
  this->fields._roleType_k__BackingField = 0;
  this->fields._IsDispConsumedPieceActionPoint_k__BackingField = 0;
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance(v52);
  if ( !Master_object )
    goto LABEL_85;
  if ( *(_QWORD *)(Master_object + 440) )
  {
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_85;
    Master_object = *(_QWORD *)(Master_object + 440);
    if ( !Master_object )
      goto LABEL_85;
    TurnCount = WarBoardData__get_TurnCount((WarBoardData_o *)Master_object, 0);
  }
  else
  {
    TurnCount = 0;
  }
  stagePieceDetailEntity = this->fields.stagePieceDetailEntity;
  this->fields._entryTurn_k__BackingField = TurnCount;
  if ( stagePieceDetailEntity )
  {
    Master_object = WarBoardStagePieceDetailEntity__getRoleType(stagePieceDetailEntity, 0);
    v61 = this->fields.stagePieceDetailEntity;
    this->fields._roleType_k__BackingField = Master_object;
    if ( !v61 )
      goto LABEL_85;
    this->fields._isNotIncludeWin_k__BackingField = WarBoardStagePieceDetailEntity__IsNotIncludeWin(v61, 0);
  }
  type_k__BackingField = this->fields._type_k__BackingField;
  if ( masterData && type_k__BackingField == 1 )
  {
    this->fields._serverMasterData_k__BackingField = masterData;
    p_serverMasterData_k__BackingField = &this->fields._serverMasterData_k__BackingField;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields._serverMasterData_k__BackingField,
      (int32_t)masterData,
      v53,
      v54,
      v55,
      v56,
      v57,
      v58);
    serverMasterData_k__BackingField = this->fields._serverMasterData_k__BackingField;
    if ( !serverMasterData_k__BackingField )
      goto LABEL_85;
    v66 = DataManager_TypeInfo;
    this->fields._nowSquareIndex_k__BackingField = serverMasterData_k__BackingField->fields.squareIndex;
    *(int32x2_t *)&this->fields._limitActionCount_k__BackingField = vrev64_s32(*(int32x2_t *)&serverMasterData_k__BackingField->fields.currentLimitActionPoint);
    if ( !*(&v66->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v66, v24, v64);
    v67 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    Master_object = (int64_t)WarBoardPieceData__get_ActionPointEntity(this, v68);
    if ( !v67 )
      goto LABEL_85;
    MasterEntityFromStageId = WarBoardActionPointClassMaster__GetMasterEntityFromStageId(
                                (WarBoardActionPointClassMaster_o *)v67,
                                (WarBoardActionPointEntity_o *)Master_object,
                                0);
    v70 = WarBoardCost__Create(MasterEntityFromStageId, this->fields.stagePieceDetailEntity, 0, 0);
    this->fields._Cost_k__BackingField = v70;
    p_Cost_k__BackingField = &this->fields._Cost_k__BackingField;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields._Cost_k__BackingField,
      (int32_t)v70,
      v72,
      v73,
      v74,
      v75,
      v76,
      v77);
    v78 = this->fields._serverMasterData_k__BackingField;
    if ( !v78 )
      goto LABEL_85;
    Master_object = (int64_t)*p_Cost_k__BackingField;
    if ( !*p_Cost_k__BackingField )
      goto LABEL_85;
    WarBoardCost__UpdateCurrentPointByServerData(
      (WarBoardCost_o *)Master_object,
      v78->fields.currentPieceActionPoint,
      0);
    v79 = *p_serverMasterData_k__BackingField;
    if ( !*p_serverMasterData_k__BackingField )
      goto LABEL_85;
    attackCount = v79->fields.attackCount;
    defeatPoint = v79->fields.defeatPoint;
    this->fields._attackCount_k__BackingField = attackCount;
    this->fields._breakPoint_k__BackingField = defeatPoint;
    if ( defeatPoint <= 0 )
LABEL_40:
      this->fields._isDead_k__BackingField = 1;
  }
  else if ( servantData && !type_k__BackingField )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v85 = *(_OWORD *)&servantData->fields.id.fields.fakeValue;
    *(_OWORD *)&v131.fields.currentCryptoKey = *(_OWORD *)&servantData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v131.fields.fakeValue = v85;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v82, v83);
    v130 = v131;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v130, 0);
    if ( !Instance )
      goto LABEL_85;
    BattleServant = WarBoardManager__GetBattleServant((WarBoardManager_o *)Instance, Master_object, 0);
    this->fields._battleServant_k__BackingField = BattleServant;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields._battleServant_k__BackingField,
      (int32_t)BattleServant,
      v87,
      v88,
      v89,
      v90,
      v91,
      v92);
    this->fields.serverServantData = servantData;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.serverServantData,
      (int32_t)servantData,
      v93,
      v94,
      v95,
      v96,
      v97,
      v98);
    v101 = DataManager_TypeInfo;
    limitActionPoint = servantData->fields.limitActionPoint;
    this->fields._nowSquareIndex_k__BackingField = servantData->fields.squareIndex;
    currentActionPoint = servantData->fields.currentActionPoint;
    v104 = *(&v101->_2.cctor_finished + 1);
    this->fields._limitActionCount_k__BackingField = limitActionPoint;
    this->fields._currentActionCount_k__BackingField = currentActionPoint;
    if ( !v104 )
      j_il2cpp_runtime_class_init_0(v101, v99, v100);
    v105 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    Master_object = (int64_t)WarBoardPieceData__get_ActionPointEntity(this, v106);
    if ( !this->fields._battleServant_k__BackingField )
      goto LABEL_85;
    v107 = (WarBoardActionPointEntity_o *)Master_object;
    Master_object = BattleServantData__getClassId(this->fields._battleServant_k__BackingField, 0, 0);
    if ( !v105 )
      goto LABEL_85;
    EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                    (WarBoardActionPointClassMaster_o *)v105,
                                    v107,
                                    Master_object,
                                    0);
    v109 = WarBoardCost__Create(EntityFromActionPointEntity, this->fields.stagePieceDetailEntity, 0, 0);
    this->fields._Cost_k__BackingField = v109;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields._Cost_k__BackingField,
      (int32_t)v109,
      v110,
      v111,
      v112,
      v113,
      v114,
      v115);
    Master_object = (int64_t)this->fields._Cost_k__BackingField;
    if ( !Master_object )
      goto LABEL_85;
    WarBoardCost__UpdateCurrentPointByServerData(
      (WarBoardCost_o *)Master_object,
      servantData->fields.currentPieceActionPoint,
      0);
    v116 = servantData->fields.defeatPoint;
    this->fields._attackCount_k__BackingField = servantData->fields.attackCount;
    this->fields._breakPoint_k__BackingField = v116;
    if ( v116 < 0 )
      goto LABEL_40;
  }
  forceId_k__BackingField = this->fields._forceId_k__BackingField;
  if ( forceId_k__BackingField || this->fields._groupId_k__BackingField )
  {
    if ( npcDict )
    {
      Master_object = (int64_t)System_Collections_Generic_Dictionary_uint__object___get_Item(
                                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)npcDict,
                                 (forceId_k__BackingField << 24)
                               | ((unsigned __int8)this->fields._groupId_k__BackingField << 16),
                                 (const MethodInfo_4022318 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    }
    else
    {
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_85;
      Master_object = *(_QWORD *)(Master_object + 440);
      if ( !Master_object )
        goto LABEL_85;
      Master_object = (int64_t)WarBoardData__GetNpcEntity(
                                 (WarBoardData_o *)Master_object,
                                 this->fields._forceId_k__BackingField,
                                 this->fields._groupId_k__BackingField,
                                 0);
    }
    if ( this->fields._type_k__BackingField == 1 )
    {
      if ( Master_object )
      {
        this->fields._iconId_k__BackingField = *(_DWORD *)(Master_object + 40);
        return;
      }
LABEL_85:
      sub_21FFECC(Master_object, v24);
    }
    goto LABEL_83;
  }
  if ( this->fields._type_k__BackingField == 1 )
  {
    Master_object = (int64_t)UserGameMaster__getSelfUserGame(0);
    if ( !Master_object )
      goto LABEL_85;
    this->fields._CurrentUserEquipId_k__BackingField = UserGameEntity__getActiveUserEquipId(
                                                         (UserGameEntity_o *)Master_object,
                                                         0);
    if ( deckData )
    {
      userEquipId = (unsigned int)deckData->fields.userEquipId;
      if ( (int)userEquipId >= 1 )
        this->fields._CurrentUserEquipId_k__BackingField = userEquipId;
    }
    v120 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_WORD *)(v120 + 309) & 1) == 0 )
      v120 = sub_2237AF8(v118);
    v121 = *(_QWORD *)(*(_QWORD *)(v120 + 192) + 16LL);
    if ( (*(_WORD *)(v121 + 309) & 1) == 0 )
      v121 = sub_2237AF8(v118);
    Master_object = **(_QWORD **)(v121 + 184);
    if ( !Master_object )
      goto LABEL_85;
    Master_object = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserEquipMaster___);
    if ( !Master_object )
      goto LABEL_85;
    Master_object = (int64_t)DataMasterBase_object__object__long___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                               this->fields._CurrentUserEquipId_k__BackingField,
                               (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    if ( !Master_object )
      goto LABEL_85;
    v123 = *(_QWORD *)(Master_object + 32);
    v124 = *(_QWORD *)(Master_object + 40);
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v24, v122);
    *(_QWORD *)&v132.fields.currentCryptoKey = v123;
    *(_QWORD *)&v132.fields.fakeValue = v124;
    this->fields._iconId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v132, 0);
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
                                     (const MethodInfo_4022318 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
        }
        else
        {
          Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          if ( !Master_object )
            goto LABEL_85;
          Master_object = *(_QWORD *)(Master_object + 440);
          if ( !Master_object )
            goto LABEL_85;
          Master_object = (int64_t)WarBoardData__GetNpcEntity(
                                     (WarBoardData_o *)Master_object,
                                     this->fields._forceId_k__BackingField,
                                     this->fields._groupId_k__BackingField,
                                     0);
        }
        if ( *p_battleServant_k__BackingField )
        {
          deckSvt = (*p_battleServant_k__BackingField)->fields.deckSvt;
          if ( !deckSvt )
            goto LABEL_85;
          dropInfos_low = SLODWORD(deckSvt->fields.dropInfos);
        }
        else
        {
          if ( !Master_object )
            goto LABEL_85;
          v127 = *(_QWORD *)(Master_object + 48);
          if ( !v127 )
            goto LABEL_85;
          if ( *(_DWORD *)(v127 + 24) <= (unsigned int)npcIdx )
            sub_21FFED4(Master_object);
          dropInfos_low = *(_QWORD *)(v127 + 8LL * (unsigned int)npcIdx + 32);
        }
        npcSvtEquipId = servantData->fields.npcSvtEquipId;
        this->fields._npcId_k__BackingField = dropInfos_low;
        this->fields._npcEquipId_k__BackingField = npcSvtEquipId;
        this->fields._isEditing_k__BackingField = 1;
      }
LABEL_83:
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


void WarBoardPieceData___ctor_45018756(
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
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int64_t Instance; // x0
  const MethodInfo *v25; // x1
  __int64 v26; // x2
  int32_t warBoardStageId; // w8
  int32_t id; // w9
  int32_t v29; // w8
  int32_t forceId; // w26
  int32_t groupId; // w29
  int32_t pieceIndex; // w28
  WarBoardPieceData_c *v33; // x0
  int v34; // w8
  const MethodInfo_476E8C0 *v35; // x0
  __int64 v36; // x2
  int32_t TurnCount; // w0
  int32_t breakPoint; // w9
  DataManager_c *v39; // x8
  int v40; // w10
  struct System_Int32_array *specifyPieceIndexes; // x8
  __int64 ReinfoIndex_k__BackingField; // x9
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x8
  bool IsNotIncludeWin; // w8
  int32_t actionType; // w8
  const MethodInfo_476E8C0 *v46; // x0
  __int64 v47; // x1
  __int64 v48; // x2
  Il2CppObject *v49; // x24
  __int128 v50; // q1
  int v51; // w8
  struct BattleServantData_o *BattleServant; // x0
  struct BattleServantData_o **p_battleServant_k__BackingField; // x24
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  __int64 v66; // x1
  __int64 v67; // x2
  int32_t v68; // w8
  DataManager_c *v69; // x0
  int32_t limitActionPoint; // w9
  int v71; // w10
  int32_t currentActionPoint; // w8
  Il2CppObject *Master_object; // x25
  const MethodInfo *v74; // x1
  WarBoardActionPointEntity_o *v75; // x26
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  struct WarBoardCost_o *v77; // x0
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  int defeatPoint; // w9
  int32_t forceId_k__BackingField; // w10
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t dropInfos_low; // x8
  __int64 v88; // x8
  int64_t npcSvtEquipId; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v90; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v91; // [xsp+20h] [xbp-90h]
  int32_t value; // [xsp+4Ch] [xbp-64h] BYREF

  if ( (byte_5936152 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&WarBoardPieceData_PieceStatusCache_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&WarBoardPieceData_TypeInfo);
    byte_5936152 = 1;
  }
  value = 0;
  v17 = (Il2CppObject *)sub_21FFEBC(WarBoardPieceData_PieceStatusCache_TypeInfo);
  System_Object___ctor(v17, 0);
  this->fields.statusCache = (struct WarBoardPieceData_PieceStatusCache_o *)v17;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.statusCache, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !stageReinforcementsEntity )
    goto LABEL_53;
  warBoardStageId = stageReinforcementsEntity->fields.warBoardStageId;
  id = stageReinforcementsEntity->fields.id;
  this->fields._ReinfoIndex_k__BackingField = reinfoIndex;
  this->fields.stageId = warBoardStageId;
  this->fields._StageReinfoId_k__BackingField = id;
  if ( !reinfoEntity )
    goto LABEL_53;
  v29 = reinfoEntity->fields.id;
  this->fields._type_k__BackingField = 0;
  this->fields._ReinfoId_k__BackingField = v29;
  if ( !servantData )
    goto LABEL_53;
  forceId = servantData->fields.forceId;
  groupId = servantData->fields.groupId;
  pieceIndex = servantData->fields.pieceIndex;
  v33 = WarBoardPieceData_TypeInfo;
  this->fields._forceId_k__BackingField = forceId;
  v34 = *(&v33->_2.cctor_finished + 1);
  this->fields._groupId_k__BackingField = groupId;
  this->fields._index_k__BackingField = pieceIndex;
  if ( !v34 )
    j_il2cpp_runtime_class_init_0(v33, v25, v26);
  v35 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__;
  this->fields._nowSquareIndex_k__BackingField = squareIndex;
  this->fields._PutSquareIndex_k__BackingField = squareIndex;
  *(_QWORD *)&this->fields._overwriteActionType_k__BackingField = -1;
  this->fields._uniqueIndex_k__BackingField = (forceId << 24)
                                            | ((unsigned __int8)groupId << 16)
                                            | (unsigned __int16)pieceIndex;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance(v35);
  if ( !Instance )
    goto LABEL_53;
  if ( *(_QWORD *)(Instance + 440) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    if ( !Instance )
      goto LABEL_53;
    Instance = *(_QWORD *)(Instance + 440);
    if ( !Instance )
      goto LABEL_53;
    TurnCount = WarBoardData__get_TurnCount((WarBoardData_o *)Instance, 0);
  }
  else
  {
    TurnCount = 0;
  }
  this->fields._entryTurn_k__BackingField = TurnCount;
  breakPoint = reinfoEntity->fields.breakPoint;
  v39 = DataManager_TypeInfo;
  v40 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  this->fields._breakPoint_k__BackingField = breakPoint;
  this->fields._breakPointMax_k__BackingField = breakPoint;
  if ( !v40 )
    j_il2cpp_runtime_class_init_0(v39, v25, v36);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
  specifyPieceIndexes = stageReinforcementsEntity->fields.specifyPieceIndexes;
  if ( !specifyPieceIndexes )
    goto LABEL_53;
  ReinfoIndex_k__BackingField = this->fields._ReinfoIndex_k__BackingField;
  if ( (unsigned int)ReinfoIndex_k__BackingField >= LODWORD(specifyPieceIndexes->max_length) )
    goto LABEL_54;
  if ( !Instance )
    goto LABEL_53;
  if ( WarBoardStagePieceDetailMaster__TryGetEntity(
         (WarBoardStagePieceDetailMaster_o *)Instance,
         &this->fields.stagePieceDetailEntity,
         this->fields.stageId,
         this->fields._forceId_k__BackingField,
         this->fields._groupId_k__BackingField,
         specifyPieceIndexes->m_Items[ReinfoIndex_k__BackingField],
         0) )
  {
    Instance = (int64_t)this->fields.stagePieceDetailEntity;
    if ( !Instance )
      goto LABEL_53;
    Instance = WarBoardStagePieceDetailEntity__getRoleType((WarBoardStagePieceDetailEntity_o *)Instance, 0);
    stagePieceDetailEntity = this->fields.stagePieceDetailEntity;
    this->fields._roleType_k__BackingField = Instance;
    if ( !stagePieceDetailEntity )
      goto LABEL_53;
    IsNotIncludeWin = WarBoardStagePieceDetailEntity__IsNotIncludeWin(stagePieceDetailEntity, 0);
  }
  else
  {
    IsNotIncludeWin = 0;
    this->fields._roleType_k__BackingField = 0;
  }
  this->fields._isNotIncludeWin_k__BackingField = IsNotIncludeWin;
  if ( WarBoardReinforcementsEntity__TryGetRoleType(reinfoEntity, &value, 0) )
    this->fields._roleType_k__BackingField = value;
  if ( WarBoardReinforcementsEntity__IsNotIncludeWin(reinfoEntity, 0) )
    this->fields._isNotIncludeWin_k__BackingField = 1;
  actionType = reinfoEntity->fields.actionType;
  v46 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__;
  this->fields._isEditing_k__BackingField = 0;
  this->fields._IsDispConsumedPieceActionPoint_k__BackingField = 0;
  this->fields._actionType_k__BackingField = actionType;
  v49 = SingletonMonoBehaviour_object___get_Instance(v46);
  v50 = *(_OWORD *)&servantData->fields.id.fields.fakeValue;
  v51 = *(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1);
  *(_OWORD *)&v91.fields.currentCryptoKey = *(_OWORD *)&servantData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v91.fields.fakeValue = v50;
  if ( !v51 )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v47, v48);
  v90 = v91;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v90, 0);
  if ( !v49 )
    goto LABEL_53;
  BattleServant = WarBoardManager__GetBattleServant((WarBoardManager_o *)v49, Instance, 0);
  this->fields._battleServant_k__BackingField = BattleServant;
  p_battleServant_k__BackingField = &this->fields._battleServant_k__BackingField;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._battleServant_k__BackingField,
    (int32_t)BattleServant,
    v54,
    v55,
    v56,
    v57,
    v58,
    v59);
  this->fields.serverServantData = servantData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.serverServantData,
    (int32_t)servantData,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  v68 = servantData->fields.squareIndex;
  v69 = DataManager_TypeInfo;
  limitActionPoint = servantData->fields.limitActionPoint;
  this->fields._nowSquareIndex_k__BackingField = v68;
  v71 = *(&v69->_2.cctor_finished + 1);
  this->fields._PutSquareIndex_k__BackingField = v68;
  currentActionPoint = servantData->fields.currentActionPoint;
  this->fields._limitActionCount_k__BackingField = limitActionPoint;
  this->fields._currentActionCount_k__BackingField = currentActionPoint;
  if ( !v71 )
    j_il2cpp_runtime_class_init_0(v69, v66, v67);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
  Instance = (int64_t)WarBoardPieceData__get_ActionPointEntity(this, v74);
  if ( !this->fields._battleServant_k__BackingField
    || (v75 = (WarBoardActionPointEntity_o *)Instance,
        Instance = BattleServantData__getClassId(this->fields._battleServant_k__BackingField, 0, 0),
        !Master_object)
    || (EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                        (WarBoardActionPointClassMaster_o *)Master_object,
                                        v75,
                                        Instance,
                                        0),
        v77 = WarBoardCost__Create(EntityFromActionPointEntity, this->fields.stagePieceDetailEntity, reinfoEntity, 0),
        this->fields._Cost_k__BackingField = v77,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields._Cost_k__BackingField,
          (int32_t)v77,
          v78,
          v79,
          v80,
          v81,
          v82,
          v83),
        (Instance = (int64_t)this->fields._Cost_k__BackingField) == 0) )
  {
LABEL_53:
    sub_21FFECC(Instance, v25);
  }
  WarBoardCost__UpdateCurrentPointByServerData(
    (WarBoardCost_o *)Instance,
    servantData->fields.currentPieceActionPoint,
    0);
  defeatPoint = servantData->fields.defeatPoint;
  forceId_k__BackingField = this->fields._forceId_k__BackingField;
  this->fields._attackCount_k__BackingField = servantData->fields.attackCount;
  this->fields._breakPoint_k__BackingField = defeatPoint;
  this->fields._isDead_k__BackingField = defeatPoint < 0;
  if ( !forceId_k__BackingField && (npcIdx & 0x80000000) == 0 && !this->fields._groupId_k__BackingField )
  {
    if ( npcDict )
    {
      Instance = (int64_t)System_Collections_Generic_Dictionary_uint__object___get_Item(
                            (System_Collections_Generic_Dictionary_TKey__TValue__o *)npcDict,
                            0,
                            (const MethodInfo_4022318 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    }
    else
    {
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Instance )
        goto LABEL_53;
      Instance = *(_QWORD *)(Instance + 440);
      if ( !Instance )
        goto LABEL_53;
      Instance = (int64_t)WarBoardData__GetNpcEntity(
                            (WarBoardData_o *)Instance,
                            this->fields._forceId_k__BackingField,
                            this->fields._groupId_k__BackingField,
                            0);
    }
    if ( *p_battleServant_k__BackingField )
    {
      deckSvt = (*p_battleServant_k__BackingField)->fields.deckSvt;
      if ( deckSvt )
      {
        dropInfos_low = SLODWORD(deckSvt->fields.dropInfos);
LABEL_51:
        npcSvtEquipId = servantData->fields.npcSvtEquipId;
        this->fields._npcId_k__BackingField = dropInfos_low;
        this->fields._npcEquipId_k__BackingField = npcSvtEquipId;
        this->fields._isEditing_k__BackingField = 1;
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
      dropInfos_low = *(_QWORD *)(v88 + 8LL * (unsigned int)npcIdx + 32);
      goto LABEL_51;
    }
LABEL_54:
    sub_21FFED4(Instance);
  }
LABEL_52:
  WarBoardPieceData__SetServantIconData(this, v25);
}


void WarBoardPieceData___ctor_45019948(
        WarBoardPieceData_o *this,
        int32_t stageId,
        WarBoardUserServantData_o *servantData,
        WarBoardPieceData_SaveData_o *saveData,
        System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *npcDict,
        int32_t npcIdx,
        const MethodInfo *method)
{
  Il2CppObject *v13; // x25
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  int64_t Master_object; // x0
  const MethodInfo *v21; // x1
  __int64 v22; // x2
  DataManager_c *v23; // x0
  struct System_Int32_array *reinforcementsIds; // x8
  __int64 ReinfoIndex_k__BackingField; // x9
  __int64 v26; // x2
  WarBoardReinforcementsEntity_o *v27; // x8
  int32_t pieceIndex; // w26
  int32_t groupId; // w27
  int32_t forceId; // w28
  int v31; // w9
  int32_t squareIndex; // w10
  const MethodInfo_3822E50 *v33; // x0
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x8
  bool IsNotIncludeWin; // w8
  int32_t actionType; // w8
  const MethodInfo_476E8C0 *v37; // x0
  __int64 v38; // x2
  WarBoardManager_o *v39; // x23
  __int128 v40; // q1
  struct BattleServantData_o *BattleServant; // x0
  struct BattleServantData_o **p_battleServant_k__BackingField; // x23
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  __int64 v55; // x1
  __int64 v56; // x2
  int32_t v57; // w8
  DataManager_c *v58; // x0
  int32_t limitActionPoint; // w9
  int v60; // w10
  int32_t currentActionPoint; // w8
  Il2CppObject *v62; // x24
  const MethodInfo *v63; // x1
  WarBoardActionPointEntity_o *v64; // x25
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  struct WarBoardCost_o *v66; // x0
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  int defeatPoint; // w9
  int32_t forceId_k__BackingField; // w10
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t dropInfos_low; // x8
  __int64 v77; // x8
  int64_t npcSvtEquipId; // x9
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v79; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v80; // [xsp+20h] [xbp-90h]
  int32_t value; // [xsp+44h] [xbp-6Ch] BYREF
  WarBoardReinforcementsEntity_o *reinforcementsEntity; // [xsp+48h] [xbp-68h] BYREF
  WarBoardStageReinforcementsEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_5936153 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&WarBoardPieceData_PieceStatusCache_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&WarBoardPieceData_TypeInfo);
    byte_5936153 = 1;
  }
  entity = 0;
  reinforcementsEntity = 0;
  value = 0;
  v13 = (Il2CppObject *)sub_21FFEBC(WarBoardPieceData_PieceStatusCache_TypeInfo);
  System_Object___ctor(v13, 0);
  this->fields.statusCache = (struct WarBoardPieceData_PieceStatusCache_o *)v13;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.statusCache, (int32_t)v13, v14, v15, v16, v17, v18, v19);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.stageId = stageId;
  if ( !saveData )
    goto LABEL_54;
  v23 = DataManager_TypeInfo;
  *(_QWORD *)&this->fields._StageReinfoId_k__BackingField = *(_QWORD *)&saveData->fields.stageReinforcementId;
  if ( !*(&v23->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v23, v21, v22);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
  if ( !Master_object )
    goto LABEL_54;
  WarBoardStageReinforcementsMaster__TryGetEntity(
    (WarBoardStageReinforcementsMaster_o *)Master_object,
    &entity,
    stageId,
    this->fields._StageReinfoId_k__BackingField,
    0);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  if ( !entity )
    goto LABEL_54;
  reinforcementsIds = entity->fields.reinforcementsIds;
  if ( !reinforcementsIds )
    goto LABEL_54;
  ReinfoIndex_k__BackingField = this->fields._ReinfoIndex_k__BackingField;
  if ( (unsigned int)ReinfoIndex_k__BackingField >= LODWORD(reinforcementsIds->max_length) )
    goto LABEL_55;
  if ( !Master_object )
    goto LABEL_54;
  Master_object = WarBoardReinforcementsMaster__TryGetEntity(
                    (WarBoardReinforcementsMaster_o *)Master_object,
                    &reinforcementsEntity,
                    reinforcementsIds->m_Items[ReinfoIndex_k__BackingField],
                    0);
  v27 = reinforcementsEntity;
  if ( !reinforcementsEntity )
    goto LABEL_54;
  pieceIndex = saveData->fields.pieceIndex;
  forceId = saveData->fields.forceId;
  groupId = saveData->fields.groupId;
  Master_object = (int64_t)WarBoardPieceData_TypeInfo;
  this->fields._ReinfoId_k__BackingField = reinforcementsEntity->fields.id;
  v31 = *(_DWORD *)(Master_object + 228);
  this->fields._type_k__BackingField = 0;
  this->fields._forceId_k__BackingField = forceId;
  this->fields._groupId_k__BackingField = groupId;
  this->fields._index_k__BackingField = pieceIndex;
  if ( !v31 )
  {
    j_il2cpp_runtime_class_init_0(Master_object, v21, v26);
    v27 = reinforcementsEntity;
  }
  squareIndex = saveData->fields.squareIndex;
  this->fields._nowSquareIndex_k__BackingField = squareIndex;
  this->fields._PutSquareIndex_k__BackingField = squareIndex;
  this->fields._uniqueIndex_k__BackingField = (forceId << 24)
                                            | ((unsigned __int8)groupId << 16)
                                            | (unsigned __int16)pieceIndex;
  *(_QWORD *)&this->fields._overwriteActionType_k__BackingField = *(_QWORD *)&saveData->fields.overwriteActionType;
  this->fields._entryTurn_k__BackingField = saveData->fields.entryTurn;
  if ( !v27 )
    goto LABEL_54;
  v33 = (const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___;
  this->fields._breakPointMax_k__BackingField = v27->fields.breakPoint;
  Master_object = (int64_t)DataManager__GetMaster_object_(v33);
  if ( !Master_object )
    goto LABEL_54;
  if ( WarBoardStagePieceDetailMaster__TryGetEntity(
         (WarBoardStagePieceDetailMaster_o *)Master_object,
         &this->fields.stagePieceDetailEntity,
         stageId,
         this->fields._forceId_k__BackingField,
         this->fields._groupId_k__BackingField,
         this->fields._index_k__BackingField,
         0) )
  {
    Master_object = (int64_t)this->fields.stagePieceDetailEntity;
    if ( !Master_object )
      goto LABEL_54;
    Master_object = WarBoardStagePieceDetailEntity__getRoleType((WarBoardStagePieceDetailEntity_o *)Master_object, 0);
    stagePieceDetailEntity = this->fields.stagePieceDetailEntity;
    this->fields._roleType_k__BackingField = Master_object;
    if ( !stagePieceDetailEntity )
      goto LABEL_54;
    IsNotIncludeWin = WarBoardStagePieceDetailEntity__IsNotIncludeWin(stagePieceDetailEntity, 0);
  }
  else
  {
    IsNotIncludeWin = 0;
    this->fields._roleType_k__BackingField = 0;
  }
  Master_object = (int64_t)reinforcementsEntity;
  this->fields._isNotIncludeWin_k__BackingField = IsNotIncludeWin;
  if ( !Master_object )
    goto LABEL_54;
  if ( WarBoardReinforcementsEntity__TryGetRoleType((WarBoardReinforcementsEntity_o *)Master_object, &value, 0) )
    this->fields._roleType_k__BackingField = value;
  Master_object = (int64_t)reinforcementsEntity;
  if ( !reinforcementsEntity )
    goto LABEL_54;
  Master_object = WarBoardReinforcementsEntity__IsNotIncludeWin(reinforcementsEntity, 0);
  if ( (Master_object & 1) != 0 )
    this->fields._isNotIncludeWin_k__BackingField = 1;
  if ( !reinforcementsEntity )
    goto LABEL_54;
  actionType = reinforcementsEntity->fields.actionType;
  this->fields._isEditing_k__BackingField = 0;
  this->fields._actionType_k__BackingField = actionType;
  v37 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__;
  this->fields._IsDispConsumedPieceActionPoint_k__BackingField = 0;
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance(v37);
  if ( !servantData )
    goto LABEL_54;
  v39 = (WarBoardManager_o *)Master_object;
  v40 = *(_OWORD *)&servantData->fields.id.fields.fakeValue;
  *(_OWORD *)&v80.fields.currentCryptoKey = *(_OWORD *)&servantData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v80.fields.fakeValue = v40;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v21, v38);
  v79 = v80;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v79, 0);
  if ( !v39 )
    goto LABEL_54;
  BattleServant = WarBoardManager__GetBattleServant(v39, Master_object, 0);
  this->fields._battleServant_k__BackingField = BattleServant;
  p_battleServant_k__BackingField = &this->fields._battleServant_k__BackingField;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._battleServant_k__BackingField,
    (int32_t)BattleServant,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48);
  this->fields.serverServantData = servantData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.serverServantData,
    (int32_t)servantData,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  v57 = servantData->fields.squareIndex;
  v58 = DataManager_TypeInfo;
  limitActionPoint = servantData->fields.limitActionPoint;
  this->fields._nowSquareIndex_k__BackingField = v57;
  v60 = *(&v58->_2.cctor_finished + 1);
  this->fields._PutSquareIndex_k__BackingField = v57;
  currentActionPoint = servantData->fields.currentActionPoint;
  this->fields._limitActionCount_k__BackingField = limitActionPoint;
  this->fields._currentActionCount_k__BackingField = currentActionPoint;
  if ( !v60 )
    j_il2cpp_runtime_class_init_0(v58, v55, v56);
  v62 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
  Master_object = (int64_t)WarBoardPieceData__get_ActionPointEntity(this, v63);
  if ( !this->fields._battleServant_k__BackingField
    || (v64 = (WarBoardActionPointEntity_o *)Master_object,
        Master_object = BattleServantData__getClassId(this->fields._battleServant_k__BackingField, 0, 0),
        !v62)
    || (EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                        (WarBoardActionPointClassMaster_o *)v62,
                                        v64,
                                        Master_object,
                                        0),
        v66 = WarBoardCost__Create(
                EntityFromActionPointEntity,
                this->fields.stagePieceDetailEntity,
                reinforcementsEntity,
                0),
        this->fields._Cost_k__BackingField = v66,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields._Cost_k__BackingField,
          (int32_t)v66,
          v67,
          v68,
          v69,
          v70,
          v71,
          v72),
        (Master_object = (int64_t)this->fields._Cost_k__BackingField) == 0) )
  {
LABEL_54:
    sub_21FFECC(Master_object, v21);
  }
  WarBoardCost__UpdateCurrentPointByServerData(
    (WarBoardCost_o *)Master_object,
    servantData->fields.currentPieceActionPoint,
    0);
  defeatPoint = servantData->fields.defeatPoint;
  forceId_k__BackingField = this->fields._forceId_k__BackingField;
  this->fields._attackCount_k__BackingField = servantData->fields.attackCount;
  this->fields._breakPoint_k__BackingField = defeatPoint;
  this->fields._isDead_k__BackingField = defeatPoint < 0;
  if ( !forceId_k__BackingField && (npcIdx & 0x80000000) == 0 && !this->fields._groupId_k__BackingField )
  {
    if ( npcDict )
    {
      Master_object = (int64_t)System_Collections_Generic_Dictionary_uint__object___get_Item(
                                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)npcDict,
                                 0,
                                 (const MethodInfo_4022318 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    }
    else
    {
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
      if ( !Master_object )
        goto LABEL_54;
      Master_object = *(_QWORD *)(Master_object + 440);
      if ( !Master_object )
        goto LABEL_54;
      Master_object = (int64_t)WarBoardData__GetNpcEntity(
                                 (WarBoardData_o *)Master_object,
                                 this->fields._forceId_k__BackingField,
                                 this->fields._groupId_k__BackingField,
                                 0);
    }
    if ( *p_battleServant_k__BackingField )
    {
      deckSvt = (*p_battleServant_k__BackingField)->fields.deckSvt;
      if ( deckSvt )
      {
        dropInfos_low = SLODWORD(deckSvt->fields.dropInfos);
LABEL_52:
        npcSvtEquipId = servantData->fields.npcSvtEquipId;
        this->fields._npcId_k__BackingField = dropInfos_low;
        this->fields._npcEquipId_k__BackingField = npcSvtEquipId;
        this->fields._isEditing_k__BackingField = 1;
        goto LABEL_53;
      }
      goto LABEL_54;
    }
    if ( !Master_object )
      goto LABEL_54;
    v77 = *(_QWORD *)(Master_object + 48);
    if ( !v77 )
      goto LABEL_54;
    if ( *(_DWORD *)(v77 + 24) > (unsigned int)npcIdx )
    {
      dropInfos_low = *(_QWORD *)(v77 + 8LL * (unsigned int)npcIdx + 32);
      goto LABEL_52;
    }
LABEL_55:
    sub_21FFED4(Master_object);
  }
LABEL_53:
  WarBoardPieceData__SetServantIconData(this, v21);
}


void WarBoardPieceData__ActionMove(WarBoardPieceData_o *this, const MethodInfo *method)
{
  int32_t currentActionCount_k__BackingField; // w8
  WarBoardCost_o *Cost_k__BackingField; // x0

  currentActionCount_k__BackingField = this->fields._currentActionCount_k__BackingField;
  Cost_k__BackingField = this->fields._Cost_k__BackingField;
  this->fields._currentActionCount_k__BackingField = currentActionCount_k__BackingField - 1;
  if ( !Cost_k__BackingField
    || (WarBoardCost__ActionMove(Cost_k__BackingField, 0),
        (Cost_k__BackingField = (WarBoardCost_o *)this->fields.pieceComponent) == 0) )
  {
    sub_21FFECC(Cost_k__BackingField, method);
  }
  ((void (__fastcall *)(WarBoardCost_o *, void *))Cost_k__BackingField->klass[1]._1.generic_class)(
    Cost_k__BackingField,
    Cost_k__BackingField->klass[1]._1.typeMetadataHandle);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPieceData__ActivateCacheMode(WarBoardPieceData_o *this, bool flg, const MethodInfo *method)
{
  struct WarBoardPieceData_PieceStatusCache_o *statusCache; // x8

  statusCache = this->fields.statusCache;
  if ( !statusCache )
    sub_21FFECC(this, flg);
  *(_DWORD *)&statusCache->fields._HasAvailablePermanentSleepBuff_k__BackingField.fields.hasValue = 0;
  statusCache->fields._IsEnabled_k__BackingField = flg;
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPieceData__AddCriticalStar(WarBoardPieceData_o *this, int32_t count, const MethodInfo *method)
{
  struct WarBoardUserServantData_o *serverServantData; // x8
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  serverServantData = this->fields.serverServantData;
  if ( serverServantData )
  {
    pieceComponent = this->fields.pieceComponent;
    serverServantData->fields.criticalStars += count;
    if ( !pieceComponent )
      sub_21FFECC(0, *(_QWORD *)&count);
    ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, const MethodInfo *))pieceComponent->klass->vtable._17_ChangeCriticalStars.methodPtr)(
      pieceComponent,
      pieceComponent->klass->vtable._17_ChangeCriticalStars.method);
  }
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPieceData__AfterAttack(WarBoardPieceData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_21FFECC(0, *(_QWORD *)&squareIndex);
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, int32_t, const MethodInfo *))pieceComponent->klass->vtable._27_OnAfterAttack.methodPtr)(
    pieceComponent,
    squareIndex,
    pieceComponent->klass->vtable._27_OnAfterAttack.method);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPieceData__AfterWallAttack(WarBoardPieceData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_21FFECC(0, *(_QWORD *)&squareIndex);
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, int32_t, const MethodInfo *))pieceComponent->klass->vtable._29_OnAfterWallAttack.methodPtr)(
    pieceComponent,
    squareIndex,
    pieceComponent->klass->vtable._29_OnAfterWallAttack.method);
}


void WarBoardPieceData__ApplyDisplayType(
        WarBoardPieceData_o *this,
        UISpriteAltMat_o *enemyIcon,
        const MethodInfo *method)
{
  struct WarBoardUserServantData_o *serverServantData; // x8
  int32_t displayType; // w8
  float v6; // s8
  float v7; // s9
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

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
            v8.fields.a = 1.0;
            v6 = 0.05;
            v7 = 1.0;
            v8.fields.r = 0.05;
            v8.fields.g = 0.05;
            v8.fields.b = 0.05;
            UIWidget__set_color((UIWidget_o *)enemyIcon, v8, 0);
            goto LABEL_10;
          }
LABEL_12:
          sub_21FFECC(this, enemyIcon);
        }
        break;
      case 1:
LABEL_5:
        if ( enemyIcon )
        {
          v6 = 1.0;
          v7 = 1.0;
LABEL_10:
          v9.fields.r = v6;
          v9.fields.g = v6;
          v9.fields.b = v6;
          v9.fields.a = v7;
          UIWidget__set_color((UIWidget_o *)enemyIcon, v9, 0);
          return;
        }
        goto LABEL_12;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPieceData__Attack(WarBoardPieceData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_21FFECC(0, *(_QWORD *)&squareIndex);
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, int32_t, const MethodInfo *))pieceComponent->klass->vtable._25_OnAttack.methodPtr)(
    pieceComponent,
    squareIndex,
    pieceComponent->klass->vtable._25_OnAttack.method);
}


void WarBoardPieceData__AttackAction(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardCost_o *Cost_k__BackingField; // x0

  if ( this->fields._limitActionCount_k__BackingField <= 0 )
  {
    Cost_k__BackingField = this->fields._Cost_k__BackingField;
    if ( !Cost_k__BackingField )
      goto LABEL_7;
    if ( WarBoardCost__get_HasCost(Cost_k__BackingField, 0) )
    {
      Cost_k__BackingField = this->fields._Cost_k__BackingField;
      if ( Cost_k__BackingField )
      {
        WarBoardCost__ActionAttack(Cost_k__BackingField, 0);
        return;
      }
LABEL_7:
      sub_21FFECC(Cost_k__BackingField, method);
    }
  }
  --this->fields._currentActionCount_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPieceData__AttackResume(WarBoardPieceData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_21FFECC(0, *(_QWORD *)&squareIndex);
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, int32_t, const MethodInfo *))pieceComponent->klass->vtable._26_OnAttackResume.methodPtr)(
    pieceComponent,
    squareIndex,
    pieceComponent->klass->vtable._26_OnAttackResume.method);
}


void WarBoardPieceData__ChangeStatus(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    goto LABEL_8;
  WarBoardPieceBaseComponent__UpdateUiByBuffChanged(pieceComponent, 0);
  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    goto LABEL_8;
  if ( (((__int64 (__fastcall *)(WarBoardPieceBaseComponent_o *, const MethodInfo *))pieceComponent->klass->vtable._16_IsModifyStatus.methodPtr)(
          pieceComponent,
          pieceComponent->klass->vtable._16_IsModifyStatus.method)
      & 1) != 0
    && !this->fields._isDead_k__BackingField )
  {
    pieceComponent = this->fields.pieceComponent;
    if ( pieceComponent )
    {
      ((void (__fastcall *)(WarBoardPieceBaseComponent_o *, _QWORD, const MethodInfo *))pieceComponent->klass->vtable._15_ChangeStatus.methodPtr)(
        pieceComponent,
        0,
        pieceComponent->klass->vtable._15_ChangeStatus.method);
      return;
    }
LABEL_8:
    sub_21FFECC(pieceComponent, method);
  }
}


bool WarBoardPieceData__CheckWallAttackCond(
        WarBoardPieceData_o *this,
        WarBoardWallData_o *targetWall,
        const MethodInfo *method)
{
  long double v3; // q0
  struct WarBoardStageWallEntity_o *wallEntity; // x8
  int32_t attackForceId; // w8
  _QWORD *v8; // x21
  __int64 v9; // x8
  __int64 v10; // x0
  System_Int32_array *CondAttackIndividuality; // x0
  System_Int32_array *v12; // x20
  System_Int32_array *Individuality; // x0
  il2cpp_array_size_t max_length; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x19
  unsigned __int64 v16; // x21

  if ( (byte_593615A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Contains_int___);
    byte_593615A = 1;
  }
  if ( !targetWall
    || (wallEntity = targetWall->fields.wallEntity) != 0
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
    sub_2237B54(Method_System_Array_Empty_int___);
    v9 = v8[7];
  }
  v10 = *(_QWORD *)(v9 + 16);
  if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
    v10 = sub_2237AF8(v3);
  if ( !*(_DWORD *)(v10 + 228) )
    *(__n128 *)&v3 = j_il2cpp_runtime_class_init_0(v10, targetWall, method);
  CondAttackIndividuality = *(System_Int32_array **)(v8[7] + 16LL);
  if ( (*(_WORD *)((_BYTE *)&CondAttackIndividuality->m_Items[69] + 1) & 1) == 0 )
    CondAttackIndividuality = (System_Int32_array *)sub_2237AF8(v3);
  if ( targetWall->fields.wallEntity )
  {
    CondAttackIndividuality = WarBoardStageWallEntity__GetCondAttackIndividuality(targetWall->fields.wallEntity, 0);
    v12 = CondAttackIndividuality;
    if ( CondAttackIndividuality )
      goto LABEL_17;
LABEL_27:
    sub_21FFECC(CondAttackIndividuality, targetWall);
  }
  v12 = **(System_Int32_array ***)&CondAttackIndividuality->m_Items[38];
  if ( !v12 )
    goto LABEL_27;
LABEL_17:
  if ( !v12->max_length )
  {
    LOBYTE(Individuality) = 1;
    return (unsigned __int8)Individuality & 1;
  }
  Individuality = WarBoardPieceData__GetIndividuality(this, 0, method);
  max_length = v12->max_length;
  if ( (int)max_length < 1 )
    goto LABEL_24;
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)Individuality;
  v16 = 0;
  do
  {
    if ( v16 >= (unsigned int)max_length )
      sub_21FFED4(Individuality);
    Individuality = (System_Int32_array *)System_Linq_Enumerable__Contains_int_(
                                            v15,
                                            v12->m_Items[v16],
                                            (const MethodInfo_3843178 *)Method_System_Linq_Enumerable_Contains_int___);
    if ( ((unsigned __int8)Individuality & 1) != 0 )
      break;
    LODWORD(max_length) = v12->max_length;
    ++v16;
  }
  while ( (__int64)v16 < (int)max_length );
  return (unsigned __int8)Individuality & 1;
}


void WarBoardPieceData__ClearPartyBuff(WarBoardPieceData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x9
  __int64 naturalAligment; // x12
  UnityEngine_Object_o *v6; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1

  if ( (byte_5936162 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&WarBoardServantPieceComponent_TypeInfo);
    byte_5936162 = 1;
  }
  pieceComponent = this->fields.pieceComponent;
  if ( pieceComponent
    && (naturalAligment = WarBoardServantPieceComponent_TypeInfo->_2.naturalAligment,
        pieceComponent->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (WarBoardServantPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[naturalAligment - 1] == WarBoardServantPieceComponent_TypeInfo )
      v6 = (UnityEngine_Object_o *)this->fields.pieceComponent;
    else
      v6 = 0;
  }
  else
  {
    v6 = 0;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v7 = UnityEngine_Object__op_Equality(v6, 0, 0);
  if ( !v7 )
  {
    if ( !v6 )
      sub_21FFECC(v7, v8);
    WarBoardServantPieceComponent__ClearPartyBuff((WarBoardServantPieceComponent_o *)v6, 0);
  }
}


void WarBoardPieceData__ClearPrevAiRoute(WarBoardPieceData_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._PrevAiRoute_k__BackingField = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields._PrevAiRoute_k__BackingField, 0, v2, v3, v4, v5, v6, v7);
}


System_Int32_array *WarBoardPieceData__CreatePieceEventVals(WarBoardPieceData_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0
  __int64 v4; // x1
  unsigned int max_length; // w8

  if ( (byte_593616C & 1) == 0 )
  {
    sub_21FFC50(&int___TypeInfo);
    byte_593616C = 1;
  }
  result = (System_Int32_array *)sub_21FFD10(int___TypeInfo, 3);
  if ( !result )
    sub_21FFECC(0, v4);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[0] = this->fields._forceId_k__BackingField, max_length == 1)
    || (result->m_Items[1] = this->fields._groupId_k__BackingField, max_length <= 2) )
  {
    sub_21FFED4(result);
  }
  result->m_Items[2] = this->fields._index_k__BackingField;
  return result;
}


void WarBoardPieceData__DeadNow(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  this->fields._isDead_k__BackingField = 1;
  if ( !pieceComponent )
    sub_21FFECC(0, method);
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, _QWORD, __int64, const MethodInfo *))pieceComponent->klass->vtable._32_OnDead.methodPtr)(
    pieceComponent,
    0,
    0,
    1,
    pieceComponent->klass->vtable._32_OnDead.method);
}


WarBoardManager_TaskList_o *WarBoardPieceData__DecrementBreakPointPerformance(
        WarBoardPieceData_o *this,
        const MethodInfo *method)
{
  WarBoardManager_TaskList_o *v3; // x19
  const MethodInfo *v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  unsigned int breakPoint_k__BackingField; // w22
  unsigned int v8; // w21
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  if ( (byte_593615D & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardMessageMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&WarBoardManager_TaskList_TypeInfo);
    byte_593615D = 1;
  }
  v3 = (WarBoardManager_TaskList_o *)sub_21FFEBC(WarBoardManager_TaskList_TypeInfo);
  WarBoardManager_TaskList___ctor(v3, v4);
  breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
  v8 = breakPoint_k__BackingField - 1;
  if ( (int)(breakPoint_k__BackingField - 1) < 1 )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5, v6);
    DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
    pieceComponent = this->fields.pieceComponent;
    if ( pieceComponent )
    {
      ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, _QWORD, _QWORD, __int64, const MethodInfo *))pieceComponent->klass->vtable._31_OnBreak.methodPtr)(
        pieceComponent,
        breakPoint_k__BackingField,
        0,
        v3,
        v8,
        0,
        1,
        pieceComponent->klass->vtable._31_OnBreak.method);
      pieceComponent = this->fields.pieceComponent;
      if ( pieceComponent )
      {
        ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, WarBoardManager_TaskList_o *, __int64, const MethodInfo *))pieceComponent->klass->vtable._32_OnDead.methodPtr)(
          pieceComponent,
          0,
          v3,
          1,
          pieceComponent->klass->vtable._32_OnDead.method);
        return v3;
      }
    }
LABEL_12:
    sub_21FFECC(pieceComponent, v5);
  }
  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    goto LABEL_12;
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, _QWORD, _QWORD, __int64, const MethodInfo *))pieceComponent->klass->vtable._31_OnBreak.methodPtr)(
    pieceComponent,
    breakPoint_k__BackingField,
    0,
    v3,
    v8,
    0,
    1,
    pieceComponent->klass->vtable._31_OnBreak.method);
  return v3;
}


void WarBoardPieceData__Deselect(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardData_o *pieceComponent; // x0
  WarBoardSquareData_o *Square; // x0

  if ( (byte_593615C & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_593615C = 1;
  }
  pieceComponent = (WarBoardData_o *)this->fields.pieceComponent;
  if ( !pieceComponent )
    goto LABEL_10;
  (*(void (__fastcall **)(WarBoardData_o *, Il2CppMethodPointer))&pieceComponent->klass[1]._2.naturalAligment)(
    pieceComponent,
    pieceComponent->klass[1].vtable._0_Equals.methodPtr);
  pieceComponent = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceComponent )
    goto LABEL_10;
  pieceComponent = (WarBoardData_o *)pieceComponent[1].fields.playedStageReinforcementsList;
  if ( !pieceComponent )
    goto LABEL_10;
  Square = WarBoardData__GetSquare(pieceComponent, this->fields._nowSquareIndex_k__BackingField, 0);
  if ( Square )
  {
    pieceComponent = (WarBoardData_o *)Square->fields.squareComponent;
    if ( pieceComponent )
    {
      WarBoardSquareComponent__OnDeselect((WarBoardSquareComponent_o *)pieceComponent, 0);
      return;
    }
LABEL_10:
    sub_21FFECC(pieceComponent, method);
  }
}


// local variable allocation has failed, the output may be wrong!
bool WarBoardPieceData__EnableAttack(WarBoardPieceData_o *this, int32_t substructPoint, const MethodInfo *method)
{
  WarBoardCost_o *Cost_k__BackingField; // x0
  WarBoardCost_o *v6; // x0

  Cost_k__BackingField = this->fields._Cost_k__BackingField;
  if ( Cost_k__BackingField && WarBoardCost__get_HasCost(Cost_k__BackingField, 0) )
  {
    v6 = this->fields._Cost_k__BackingField;
    if ( !v6 )
      sub_21FFECC(0, *(_QWORD *)&substructPoint);
    if ( !WarBoardCost__IsAttack(v6, substructPoint, 0) )
      return 0;
  }
  if ( WarBoardPieceData__HasSelfMoveDisabledBuff(this, *(const MethodInfo **)&substructPoint) )
    return 0;
  if ( this->fields._limitActionCount_k__BackingField < 1 )
    return 1;
  return this->fields._currentActionCount_k__BackingField > 0;
}


// local variable allocation has failed, the output may be wrong!
bool WarBoardPieceData__EnableMoveBySelf(WarBoardPieceData_o *this, int32_t substructPoint, const MethodInfo *method)
{
  WarBoardCost_o *Cost_k__BackingField; // x0
  WarBoardCost_o *v6; // x0

  Cost_k__BackingField = this->fields._Cost_k__BackingField;
  if ( Cost_k__BackingField && WarBoardCost__get_HasCost(Cost_k__BackingField, 0) )
  {
    v6 = this->fields._Cost_k__BackingField;
    if ( !v6 )
      sub_21FFECC(0, *(_QWORD *)&substructPoint);
    if ( !WarBoardCost__IsMove(v6, substructPoint, 0) )
      return 0;
  }
  if ( WarBoardPieceData__HasSelfMoveDisabledBuff(this, *(const MethodInfo **)&substructPoint) )
    return 0;
  if ( this->fields._limitActionCount_k__BackingField < 1 )
    return 1;
  return this->fields._currentActionCount_k__BackingField > 0;
}


// local variable allocation has failed, the output may be wrong!
bool WarBoardPieceData__EnableSwapByOther(WarBoardPieceData_o *this, int32_t substructPoint, const MethodInfo *method)
{
  WarBoardCost_o *Cost_k__BackingField; // x0
  WarBoardCost_o *v6; // x0

  Cost_k__BackingField = this->fields._Cost_k__BackingField;
  if ( Cost_k__BackingField && WarBoardCost__get_HasCost(Cost_k__BackingField, 0) )
  {
    v6 = this->fields._Cost_k__BackingField;
    if ( !v6 )
      sub_21FFECC(0, *(_QWORD *)&substructPoint);
    if ( !WarBoardCost__IsMove(v6, substructPoint, 0) )
      return 0;
  }
  if ( WarBoardPieceData__HasCompletelyActionDisabledBuff(this, *(const MethodInfo **)&substructPoint) )
    return 0;
  if ( this->fields._limitActionCount_k__BackingField < 1 )
    return 1;
  return this->fields._currentActionCount_k__BackingField > 0;
}


// local variable allocation has failed, the output may be wrong!
bool WarBoardPieceData__EnableWallAttack(WarBoardPieceData_o *this, int32_t substructPoint, const MethodInfo *method)
{
  WarBoardCost_o *Cost_k__BackingField; // x0
  WarBoardCost_o *v6; // x0

  Cost_k__BackingField = this->fields._Cost_k__BackingField;
  if ( Cost_k__BackingField && WarBoardCost__get_HasCost(Cost_k__BackingField, 0) )
  {
    v6 = this->fields._Cost_k__BackingField;
    if ( !v6 )
      sub_21FFECC(0, *(_QWORD *)&substructPoint);
    if ( !WarBoardCost__IsWallAttack(v6, substructPoint, 0) )
      return 0;
  }
  if ( WarBoardPieceData__HasSelfMoveDisabledBuff(this, *(const MethodInfo **)&substructPoint) )
    return 0;
  if ( this->fields._limitActionCount_k__BackingField < 1 )
    return 1;
  return this->fields._currentActionCount_k__BackingField > 0;
}


int32_t WarBoardPieceData__GetActionPoint(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardCost_o *Cost_k__BackingField; // x0
  struct WarBoardCost_o *v4; // x8
  int32_t *p_currentActionCount_k__BackingField; // x8

  if ( this->fields._limitActionCount_k__BackingField > 0 )
    goto LABEL_6;
  Cost_k__BackingField = this->fields._Cost_k__BackingField;
  if ( !Cost_k__BackingField )
    goto LABEL_8;
  Cost_k__BackingField = (WarBoardCost_o *)WarBoardCost__get_HasCost(Cost_k__BackingField, 0);
  if ( ((unsigned __int8)Cost_k__BackingField & 1) == 0 )
  {
LABEL_6:
    p_currentActionCount_k__BackingField = &this->fields._currentActionCount_k__BackingField;
    return *p_currentActionCount_k__BackingField;
  }
  v4 = this->fields._Cost_k__BackingField;
  if ( !v4 )
LABEL_8:
    sub_21FFECC(Cost_k__BackingField, method);
  p_currentActionCount_k__BackingField = &v4->fields._CurrentActionPoint_k__BackingField;
  return *p_currentActionCount_k__BackingField;
}


BuffList_TYPE_array *WarBoardPieceData__GetBuffTypesFromConstantStr(System_String_o *key, const MethodInfo *method)
{
  System_Int32_array *ValueAsIntArray; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  long double v6; // q0
  System_Collections_Generic_IEnumerable_TSource__o *v7; // x19
  WarBoardPieceData___c_c *v8; // x0
  struct WarBoardPieceData___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__340_0; // x20
  Il2CppObject *v11; // x21
  struct WarBoardPieceData___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0
  BuffList_TYPE_array *result; // x0
  _QWORD *v21; // x19
  __int64 v22; // x8
  __int64 v23; // x0
  __int64 v24; // x0

  if ( (byte_593616A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_BuffList_TYPE___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_int__BuffList_TYPE___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_BuffList_TYPE___);
    sub_21FFC50(&System_Func_int__BuffList_TYPE__TypeInfo);
    sub_21FFC50(&Method_WarBoardPieceData___c__GetBuffTypesFromConstantStr_b__340_0__);
    sub_21FFC50(&WarBoardPieceData___c_TypeInfo);
    byte_593616A = 1;
  }
  ValueAsIntArray = ConstantStrMaster__GetValueAsIntArray(key, 0);
  if ( !ValueAsIntArray )
    goto LABEL_11;
  v7 = (System_Collections_Generic_IEnumerable_TSource__o *)ValueAsIntArray;
  v8 = WarBoardPieceData___c_TypeInfo;
  if ( !*(&WarBoardPieceData___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceData___c_TypeInfo, v4, v5);
    v8 = WarBoardPieceData___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__340_0 = (System_Func_T__TResult__o *)static_fields->__9__340_0;
  if ( !_9__340_0 )
  {
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, v4, v5);
      static_fields = WarBoardPieceData___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__340_0 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_int__BuffList_TYPE__TypeInfo);
    System_Func_int__Int32Enum____ctor(
      _9__340_0,
      v11,
      Method_WarBoardPieceData___c__GetBuffTypesFromConstantStr_b__340_0__,
      0);
    v12 = WarBoardPieceData___c_TypeInfo->static_fields;
    v12->__9__340_0 = (struct System_Func_int__BuffList_TYPE__o *)_9__340_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v12->__9__340_0, (int32_t)_9__340_0, v13, v14, v15, v16, v17, v18);
  }
  v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__Int32Enum_(
                                                               v7,
                                                               (System_Func_TSource__TResult__o *)_9__340_0,
                                                               (const MethodInfo_385A64C *)Method_System_Linq_Enumerable_Select_int__BuffList_TYPE___);
  result = (BuffList_TYPE_array *)System_Linq_Enumerable__ToArray_Int32Enum_(
                                    v19,
                                    (const MethodInfo_3868554 *)Method_System_Linq_Enumerable_ToArray_BuffList_TYPE___);
  if ( !result )
  {
LABEL_11:
    v21 = Method_System_Array_Empty_BuffList_TYPE___;
    v22 = *((_QWORD *)Method_System_Array_Empty_BuffList_TYPE___ + 7);
    if ( !v22 )
    {
      sub_2237B54(Method_System_Array_Empty_BuffList_TYPE___);
      v22 = v21[7];
    }
    v23 = *(_QWORD *)(v22 + 16);
    if ( (*(_WORD *)(v23 + 309) & 1) == 0 )
      v23 = sub_2237AF8(v6);
    if ( !*(_DWORD *)(v23 + 228) )
      *(__n128 *)&v6 = j_il2cpp_runtime_class_init_0(v23, v4, v5);
    v24 = *(_QWORD *)(v21[7] + 16LL);
    if ( (*(_WORD *)(v24 + 309) & 1) == 0 )
      v24 = sub_2237AF8(v6);
    return **(BuffList_TYPE_array ***)(v24 + 184);
  }
  return result;
}


int32_t WarBoardPieceData__GetDeadEffectType(WarBoardPieceData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int v4; // w8
  WarBoardReinforcementsMaster_o *Master_object; // x0
  __int64 v6; // x1
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x0
  int32_t value; // [xsp+4h] [xbp-2Ch] BYREF
  WarBoardReinforcementsEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5936165 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5936165 = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  value = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  if ( !Master_object )
    goto LABEL_13;
  if ( !WarBoardReinforcementsMaster__TryGetEntity(Master_object, &entity, this->fields._ReinfoId_k__BackingField, 0) )
    goto LABEL_10;
  Master_object = (WarBoardReinforcementsMaster_o *)entity;
  if ( !entity )
LABEL_13:
    sub_21FFECC(Master_object, v6);
  if ( WarBoardReinforcementsEntity__TryGetDeadEffectType(entity, &value, 0) )
  {
    LODWORD(stagePieceDetailEntity) = value;
    return (int)stagePieceDetailEntity;
  }
LABEL_10:
  stagePieceDetailEntity = this->fields.stagePieceDetailEntity;
  if ( stagePieceDetailEntity )
    LODWORD(stagePieceDetailEntity) = WarBoardStagePieceDetailEntity__GetDeadEffectType(stagePieceDetailEntity, 0);
  return (int)stagePieceDetailEntity;
}


System_Int32_array *WarBoardPieceData__GetIndividuality(
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

  if ( (byte_593614C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    byte_593614C = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
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
                                             0,
                                             IsIncludeIgnoreIndividuality,
                                             IsIgnoreIndivUnreleasable,
                                             v9,
                                             0,
                                             0);
    if ( !v5 )
LABEL_15:
      sub_21FFECC(ConcatServantAndBuffIndividualityies, v11);
    System_Collections_Generic_List_int___AddRange(
      v5,
      (System_Collections_Generic_IEnumerable_T__o *)ConcatServantAndBuffIndividualityies,
      (const MethodInfo_4433344 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  ConcatServantAndBuffIndividualityies = (System_Int32_array *)BasicHelper__IsNullOrEmpty(
                                                                 (System_Collections_ICollection_o *)this->fields._individuality_k__BackingField,
                                                                 0);
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
      (const MethodInfo_4433344 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t WarBoardPieceData__GetMaxActionPoint(WarBoardPieceData_o *this, const MethodInfo *method)
{
  int32_t result; // w0
  WarBoardCost_o *Cost_k__BackingField; // x0

  result = this->fields._limitActionCount_k__BackingField;
  if ( result <= 0 )
  {
    Cost_k__BackingField = this->fields._Cost_k__BackingField;
    if ( !Cost_k__BackingField )
      goto LABEL_8;
    if ( WarBoardCost__get_HasCost(Cost_k__BackingField, 0) )
    {
      Cost_k__BackingField = this->fields._Cost_k__BackingField;
      if ( Cost_k__BackingField )
        return WarBoardCost__get_BaseActionPoint(Cost_k__BackingField, 0);
LABEL_8:
      sub_21FFECC(Cost_k__BackingField, method);
    }
    return this->fields._limitActionCount_k__BackingField;
  }
  return result;
}


int32_t WarBoardPieceData__GetMoveAfterAttack(WarBoardPieceData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int v4; // w8
  WarBoardReinforcementsMaster_o *Master_object; // x0
  __int64 v6; // x1
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x0
  int32_t type; // [xsp+4h] [xbp-2Ch] BYREF
  WarBoardReinforcementsEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5936166 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5936166 = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  type = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  if ( !Master_object )
    goto LABEL_13;
  if ( !WarBoardReinforcementsMaster__TryGetEntity(Master_object, &entity, this->fields._ReinfoId_k__BackingField, 0) )
    goto LABEL_10;
  Master_object = (WarBoardReinforcementsMaster_o *)entity;
  if ( !entity )
LABEL_13:
    sub_21FFECC(Master_object, v6);
  if ( WarBoardReinforcementsEntity__TryGetMoveAfterAttackType(entity, &type, 0) )
  {
    LODWORD(stagePieceDetailEntity) = type;
    return (int)stagePieceDetailEntity;
  }
LABEL_10:
  stagePieceDetailEntity = this->fields.stagePieceDetailEntity;
  if ( stagePieceDetailEntity )
    LODWORD(stagePieceDetailEntity) = WarBoardStagePieceDetailEntity__GetMoveAfterAttackType(stagePieceDetailEntity, 0);
  return (int)stagePieceDetailEntity;
}


int32_t WarBoardPieceData__GetMovedAferDefend(WarBoardPieceData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int v4; // w8
  WarBoardReinforcementsMaster_o *Master_object; // x0
  __int64 v6; // x1
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x0
  int32_t type; // [xsp+4h] [xbp-2Ch] BYREF
  WarBoardReinforcementsEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5936167 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5936167 = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  type = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  if ( !Master_object )
    goto LABEL_13;
  if ( !WarBoardReinforcementsMaster__TryGetEntity(Master_object, &entity, this->fields._ReinfoId_k__BackingField, 0) )
    goto LABEL_10;
  Master_object = (WarBoardReinforcementsMaster_o *)entity;
  if ( !entity )
LABEL_13:
    sub_21FFECC(Master_object, v6);
  if ( WarBoardReinforcementsEntity__GetMovedAfterDefendType(entity, &type, 0) )
  {
    LODWORD(stagePieceDetailEntity) = type;
    return (int)stagePieceDetailEntity;
  }
LABEL_10:
  stagePieceDetailEntity = this->fields.stagePieceDetailEntity;
  if ( stagePieceDetailEntity )
    LODWORD(stagePieceDetailEntity) = WarBoardStagePieceDetailEntity__GetMovedAfterDefendType(stagePieceDetailEntity, 0);
  return (int)stagePieceDetailEntity;
}


uint32_t WarBoardPieceData__GetUniqueIndex(int32_t forceId, int32_t groupId, int32_t index, const MethodInfo *method)
{
  return (forceId << 24) | ((unsigned __int8)groupId << 16) | (unsigned __int16)index;
}


bool WarBoardPieceData__HasActionCount(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._limitActionCount_k__BackingField < 1 || this->fields._currentActionCount_k__BackingField > 0;
}


bool WarBoardPieceData__HasAvailablePermanentSleepBuff(WarBoardPieceData_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleServant_k__BackingField; // x0
  struct WarBoardPieceData_PieceStatusCache_o *statusCache; // x20
  bool v5; // zf
  bool HasAvailablePermanentSleepBuff; // w8
  struct System_Nullable_bool__o *v7; // x0
  struct System_Nullable_bool__o *p_HasAvailablePermanentSleepBuff_k__BackingField; // x0
  struct System_Nullable_bool__o v10; // [xsp+8h] [xbp-18h] BYREF
  struct System_Nullable_bool__o HasAvailablePermanentSleepBuff_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_5936158 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Nullable_bool___ctor__);
    sub_21FFC50(&Method_System_Nullable_bool__get_HasValue__);
    sub_21FFC50(&Method_System_Nullable_bool__get_Value__);
    byte_5936158 = 1;
  }
  battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
  HasAvailablePermanentSleepBuff_k__BackingField = 0;
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
                                         0);
      v7 = &v10;
      v10 = 0;
      System_Nullable_bool____ctor(
        (System_Nullable_bool__o)v7,
        HasAvailablePermanentSleepBuff,
        (const MethodInfo_45AC808 *)Method_System_Nullable_bool___ctor__);
      statusCache->fields._HasAvailablePermanentSleepBuff_k__BackingField = v10;
      statusCache = this->fields.statusCache;
      if ( !statusCache )
LABEL_11:
        sub_21FFECC(battleServant_k__BackingField, method);
    }
    p_HasAvailablePermanentSleepBuff_k__BackingField = &HasAvailablePermanentSleepBuff_k__BackingField;
    HasAvailablePermanentSleepBuff_k__BackingField = statusCache->fields._HasAvailablePermanentSleepBuff_k__BackingField;
    LOBYTE(battleServant_k__BackingField) = System_Nullable_bool___get_Value(
                                              (System_Nullable_bool__o)p_HasAvailablePermanentSleepBuff_k__BackingField,
                                              (const MethodInfo_45AC820 *)Method_System_Nullable_bool__get_Value__);
  }
  return (unsigned __int8)battleServant_k__BackingField & 1;
}


bool WarBoardPieceData__HasAvailableWarBoardNotAttackedBuff(WarBoardPieceData_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleServant_k__BackingField; // x0

  battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
  if ( battleServant_k__BackingField )
    LOBYTE(battleServant_k__BackingField) = BattleServantData__HasAvailableWarBoardNotAttackedBuff(
                                              battleServant_k__BackingField,
                                              0);
  return (char)battleServant_k__BackingField;
}


bool WarBoardPieceData__HasCompletelyActionDisabledBuff(WarBoardPieceData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardPieceData_o *v3; // x19
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  struct WarBoardPieceData_PieceStatusCache_o *statusCache; // x8
  bool v6; // zf
  struct WarBoardPieceData_PieceStatusCache_o *v7; // x20
  bool HasAnyBuffByBuffTypes; // w8
  struct System_Nullable_bool__o *v9; // x0
  struct System_Nullable_bool__o *p_HasCompletelyActionDisabledBuff_k__BackingField; // x0
  struct System_Nullable_bool__o v13; // [xsp+8h] [xbp-18h] BYREF
  struct System_Nullable_bool__o HasCompletelyActionDisabledBuff_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  v3 = this;
  if ( (byte_5936159 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Nullable_bool___ctor__);
    sub_21FFC50(&Method_System_Nullable_bool__get_HasValue__);
    sub_21FFC50(&Method_System_Nullable_bool__get_Value__);
    sub_21FFC50(&WarBoardPieceData_TypeInfo);
    this = (WarBoardPieceData_o *)sub_21FFC50(&StringLiteral_16047/*"WAR_BOARD_ACTION_DISABLED_BUFF_TYPES"*/);
    byte_5936159 = 1;
  }
  battleServant_k__BackingField = v3->fields._battleServant_k__BackingField;
  HasCompletelyActionDisabledBuff_k__BackingField = 0;
  if ( battleServant_k__BackingField )
  {
    statusCache = v3->fields.statusCache;
    if ( !statusCache )
      goto LABEL_16;
    if ( !statusCache->fields._IsEnabled_k__BackingField
      || (v6 = (unsigned __int8)*(_WORD *)&statusCache->fields._HasCompletelyActionDisabledBuff_k__BackingField == 0,
          HasCompletelyActionDisabledBuff_k__BackingField = statusCache->fields._HasCompletelyActionDisabledBuff_k__BackingField,
          v6) )
    {
      if ( !*(&WarBoardPieceData_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo, method, v2);
      this = (WarBoardPieceData_o *)WarBoardPieceData__GetBuffTypesFromConstantStr(
                                      (System_String_o *)StringLiteral_16047/*"WAR_BOARD_ACTION_DISABLED_BUFF_TYPES"*/,
                                      method);
      if ( !v3->fields._battleServant_k__BackingField
        || (v7 = v3->fields.statusCache,
            HasAnyBuffByBuffTypes = BattleServantData__HasAnyBuffByBuffTypes(
                                      v3->fields._battleServant_k__BackingField,
                                      (BuffList_TYPE_array *)this,
                                      0),
            v9 = &v13,
            v13 = 0,
            System_Nullable_bool____ctor(
              (System_Nullable_bool__o)v9,
              HasAnyBuffByBuffTypes,
              (const MethodInfo_45AC808 *)Method_System_Nullable_bool___ctor__),
            !v7)
        || (v7->fields._HasCompletelyActionDisabledBuff_k__BackingField = v13,
            (statusCache = v3->fields.statusCache) == 0) )
      {
LABEL_16:
        sub_21FFECC(this, method);
      }
    }
    p_HasCompletelyActionDisabledBuff_k__BackingField = &HasCompletelyActionDisabledBuff_k__BackingField;
    HasCompletelyActionDisabledBuff_k__BackingField = statusCache->fields._HasCompletelyActionDisabledBuff_k__BackingField;
    return System_Nullable_bool___get_Value(
             (System_Nullable_bool__o)p_HasCompletelyActionDisabledBuff_k__BackingField,
             (const MethodInfo_45AC820 *)Method_System_Nullable_bool__get_Value__);
  }
  else
  {
    return 0;
  }
}


bool WarBoardPieceData__HasSelfMoveDisabledBuff(WarBoardPieceData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( !this->fields._battleServant_k__BackingField )
    return 0;
  if ( WarBoardPieceData__HasAvailablePermanentSleepBuff(this, method) )
    return 1;
  return WarBoardPieceData__HasCompletelyActionDisabledBuff(this, v3);
}


bool WarBoardPieceData__HasVitalityToDoAnyActions(WarBoardPieceData_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  WarBoardData_o *Instance; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct System_Collections_Generic_List_int__o *playedStageReinforcementsList; // x1
  WarBoardSquareData_o *Square; // x0
  System_Collections_Generic_IEnumerable_TSource__o *linkedSquares; // x21
  System_Func_T__TResult__o *v15; // x22
  System_Collections_Generic_IEnumerable_T__o *v16; // x0
  System_Collections_Generic_IEnumerable_T__o *v17; // x0
  System_Object_array *v18; // x20
  System_Func_object__bool__o *v19; // x21
  WarBoardCost_o *Cost_k__BackingField; // x0
  bool CanAction; // w8
  bool result; // w0

  if ( (byte_593614E & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_WarBoardWallData___);
    sub_21FFC50(&Method_BasicHelper_ExcludeNull_WarBoardWallData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_int__WarBoardWallData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_WarBoardWallData___);
    sub_21FFC50(&System_Func_WarBoardWallData__bool__TypeInfo);
    sub_21FFC50(&System_Func_int__WarBoardWallData__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&Method_WarBoardPieceData___c__DisplayClass223_0__HasVitalityToDoAnyActions_b__0__);
    sub_21FFC50(&WarBoardPieceData___c__DisplayClass223_0_TypeInfo);
    sub_21FFC50(&Method_WarBoardPieceData_CheckWallAttackCond__);
    byte_593614E = 1;
  }
  v3 = sub_21FFEBC(WarBoardPieceData___c__DisplayClass223_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  if ( !v3 )
    goto LABEL_19;
  playedStageReinforcementsList = Instance[1].fields.playedStageReinforcementsList;
  *(_QWORD *)(v3 + 16) = playedStageReinforcementsList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)(v3 + 16),
    (int32_t)playedStageReinforcementsList,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  Instance = *(WarBoardData_o **)(v3 + 16);
  if ( !Instance )
    goto LABEL_19;
  Square = WarBoardData__GetSquare(Instance, this->fields._nowSquareIndex_k__BackingField, 0);
  if ( Square
    && (linkedSquares = (System_Collections_Generic_IEnumerable_TSource__o *)Square->fields.linkedSquares) != 0 )
  {
    v15 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_int__WarBoardWallData__TypeInfo);
    System_Func_int__object____ctor(
      v15,
      (Il2CppObject *)v3,
      Method_WarBoardPieceData___c__DisplayClass223_0__HasVitalityToDoAnyActions_b__0__,
      0);
    v16 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                           linkedSquares,
                                                           (System_Func_TSource__TResult__o *)v15,
                                                           (const MethodInfo_385A9E0 *)Method_System_Linq_Enumerable_Select_int__WarBoardWallData___);
    v17 = BasicHelper__ExcludeNull_object_(
            v16,
            (const MethodInfo_37DD3BC *)Method_BasicHelper_ExcludeNull_WarBoardWallData___);
    v18 = System_Linq_Enumerable__ToArray_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v17,
            (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_WarBoardWallData___);
    if ( v18 )
    {
      v19 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardWallData__bool__TypeInfo);
      System_Func_object__bool____ctor(v19, (Il2CppObject *)this, Method_WarBoardPieceData_CheckWallAttackCond__, 0);
      LOBYTE(v18) = BasicHelper__Any_object__58575580(
                      v18,
                      (System_Func_T__bool__o *)v19,
                      (const MethodInfo_37DCADC *)Method_BasicHelper_Any_WarBoardWallData___);
    }
  }
  else
  {
    LOBYTE(v18) = 0;
  }
  Cost_k__BackingField = this->fields._Cost_k__BackingField;
  if ( Cost_k__BackingField && WarBoardCost__get_HasCost(Cost_k__BackingField, 0) )
  {
    Instance = (WarBoardData_o *)this->fields._Cost_k__BackingField;
    if ( Instance )
    {
      CanAction = WarBoardCost__CanAction((WarBoardCost_o *)Instance, 0, (unsigned __int8)v18 & 1, 0);
      result = 0;
      if ( !CanAction )
        return result;
      return this->fields._limitActionCount_k__BackingField < 1 || this->fields._currentActionCount_k__BackingField > 0;
    }
LABEL_19:
    sub_21FFECC(Instance, v5);
  }
  return this->fields._limitActionCount_k__BackingField < 1 || this->fields._currentActionCount_k__BackingField > 0;
}


void WarBoardPieceData__HideActionTarget(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_21FFECC(0, method);
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, const MethodInfo *))pieceComponent->klass->vtable._21_HideActionTarget.methodPtr)(
    pieceComponent,
    pieceComponent->klass->vtable._21_HideActionTarget.method);
}


bool WarBoardPieceData__IsEnabledMoveAfterAttack(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return WarBoardPieceData__GetMoveAfterAttack(this, method) == 0;
}


bool WarBoardPieceData__IsEnabledMovedAfterDefend(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return WarBoardPieceData__GetMovedAferDefend(this, method) == 0;
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPieceData__Move(WarBoardPieceData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_21FFECC(0, *(_QWORD *)&squareIndex);
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, int32_t, const MethodInfo *))pieceComponent->klass->vtable._24_OnMove.methodPtr)(
    pieceComponent,
    squareIndex,
    pieceComponent->klass->vtable._24_OnMove.method);
}


void WarBoardPieceData__NondisplacedDeactive(WarBoardPieceData_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *pieceComponent; // x0

  if ( this->fields._isEditing_k__BackingField && !this->fields._iconId_k__BackingField )
  {
    pieceComponent = (UnityEngine_Component_o *)this->fields.pieceComponent;
    this->fields._isDead_k__BackingField = 1;
    if ( !pieceComponent
      || (pieceComponent = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(pieceComponent, 0)) == 0 )
    {
      sub_21FFECC(pieceComponent, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pieceComponent, 0, 0);
    this->fields._breakPoint_k__BackingField = -1;
  }
  this->fields._isEditing_k__BackingField = 0;
}


void WarBoardPieceData__OnBpDamageFromMap(
        WarBoardPieceData_o *this,
        WarBoardManager_TaskMultiList_o *taskListBreak,
        WarBoardManager_TaskMultiList_o *taskListDead,
        const MethodInfo *method)
{
  unsigned int breakPoint_k__BackingField; // w24
  WarBoardManager_TaskList_c *v8; // x0
  WarBoardManager_TaskList_o *v9; // x20
  const MethodInfo *v10; // x1
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x23
  System_Nullable_float__o v12; // x0
  struct WarBoardPieceBaseComponent_o *v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct WarBoardManager_TaskList_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  Il2CppClass **v24; // x0
  const MethodInfo *v25; // x2
  System_Nullable_float__o v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct WarBoardManager_TaskList_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  struct BattleServantData_o *battleServant_k__BackingField; // x20
  unsigned int MaxHp; // w0
  int32_t type_k__BackingField; // w8
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  int32_t *p_squareIndex; // x8
  struct WarBoardUserServantData_o *serverServantData; // x8
  __int64 v43; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_5936169 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__);
    sub_21FFC50(&Method_System_Nullable_float___ctor__);
    sub_21FFC50(&WarBoardManager_TaskList_TypeInfo);
    byte_5936169 = 1;
  }
  breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
  v8 = WarBoardManager_TaskList_TypeInfo;
  this->fields._breakPoint_k__BackingField = breakPoint_k__BackingField - 1;
  v9 = (WarBoardManager_TaskList_o *)sub_21FFEBC(v8);
  WarBoardManager_TaskList___ctor(v9, v10);
  pieceComponent = this->fields.pieceComponent;
  if ( ((breakPoint_k__BackingField - 1) & 0x80000000) != 0 )
  {
    v26 = (System_Nullable_float__o)&v43;
    v43 = 0;
    System_Nullable_float____ctor(v26, 1.0, (const MethodInfo_45B27E0 *)Method_System_Nullable_float___ctor__);
    if ( pieceComponent )
    {
      v13 = (struct WarBoardPieceBaseComponent_o *)((__int64 (__fastcall *)(struct WarBoardPieceBaseComponent_o *, __int64, WarBoardManager_TaskList_o *, __int64, const MethodInfo *))pieceComponent->klass->vtable._32_OnDead.methodPtr)(
                                                     pieceComponent,
                                                     v43,
                                                     v9,
                                                     1,
                                                     pieceComponent->klass->vtable._32_OnDead.method);
      if ( taskListDead )
      {
        items = taskListDead->fields._items;
        v34 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
        ++taskListDead->fields._version;
        if ( items )
        {
          size = taskListDead->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)taskListDead,
              (Il2CppObject *)v9,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v36 = &items->obj.klass + size;
            taskListDead->fields._size = size + 1;
            v36[4] = (Il2CppClass *)v9;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v36 + 4), (int32_t)v9, v27, v28, v29, v30, v31, v32);
          }
          type_k__BackingField = this->fields._type_k__BackingField;
          this->fields._nowSquareIndex_k__BackingField = -1;
          if ( type_k__BackingField == 1 )
          {
            serverMasterData_k__BackingField = this->fields._serverMasterData_k__BackingField;
            if ( !serverMasterData_k__BackingField )
              goto LABEL_24;
            p_squareIndex = &serverMasterData_k__BackingField->fields.squareIndex;
          }
          else
          {
            serverServantData = this->fields.serverServantData;
            if ( !serverServantData )
              goto LABEL_24;
            p_squareIndex = &serverServantData->fields.squareIndex;
          }
          *p_squareIndex = -1;
          goto LABEL_24;
        }
      }
    }
LABEL_27:
    sub_21FFECC(v13, v14);
  }
  v12 = (System_Nullable_float__o)&v43;
  v43 = 0;
  System_Nullable_float____ctor(v12, 1.0, (const MethodInfo_45B27E0 *)Method_System_Nullable_float___ctor__);
  if ( !pieceComponent )
    goto LABEL_27;
  v13 = (struct WarBoardPieceBaseComponent_o *)((__int64 (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, __int64, WarBoardManager_TaskList_o *, __int64, _QWORD, __int64, const MethodInfo *))pieceComponent->klass->vtable._31_OnBreak.methodPtr)(
                                                 pieceComponent,
                                                 breakPoint_k__BackingField,
                                                 v43,
                                                 v9,
                                                 0xFFFFFFFFLL,
                                                 0,
                                                 1,
                                                 pieceComponent->klass->vtable._31_OnBreak.method);
  if ( !taskListBreak )
    goto LABEL_27;
  v21 = taskListBreak->fields._items;
  v22 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
  ++taskListBreak->fields._version;
  if ( !v21 )
    goto LABEL_27;
  v23 = taskListBreak->fields._size;
  if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)taskListBreak,
      (Il2CppObject *)v9,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v24 = &v21->obj.klass + v23;
    taskListBreak->fields._size = v23 + 1;
    v24[4] = (Il2CppClass *)v9;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v24 + 4), (int32_t)v9, v15, v16, v17, v18, v19, v20);
  }
  battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
  if ( battleServant_k__BackingField )
  {
    MaxHp = BattleServantData__getMaxHp(this->fields._battleServant_k__BackingField, 0);
    ((void (__fastcall *)(struct BattleServantData_o *, _QWORD, const MethodInfo *))battleServant_k__BackingField->klass->vtable._10_set_hp.methodPtr)(
      battleServant_k__BackingField,
      MaxHp,
      battleServant_k__BackingField->klass->vtable._10_set_hp.method);
  }
LABEL_24:
  WarBoardPieceData__SetBreakPoint(this, this->fields._breakPoint_k__BackingField, v25);
  v13 = this->fields.pieceComponent;
  if ( !v13 )
    goto LABEL_27;
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, bool, const MethodInfo *))v13->klass->vtable._15_ChangeStatus.methodPtr)(
    v13,
    (int)(breakPoint_k__BackingField - 1) >= 0,
    v13->klass->vtable._15_ChangeStatus.method);
  v13 = this->fields.pieceComponent;
  if ( !v13 )
    goto LABEL_27;
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, const MethodInfo *))v13->klass->vtable._10_UpdateDisplayActionCount.methodPtr)(
    v13,
    v13->klass->vtable._10_UpdateDisplayActionCount.method);
}


void WarBoardPieceData__OnDeadOnMap(
        WarBoardPieceData_o *this,
        bool cameraMove,
        WarBoardManager_TaskList_o *taskList,
        const MethodInfo *method)
{
  const MethodInfo_45B27E0 *v7; // x1
  unsigned int breakPoint_k__BackingField; // w22
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x23
  System_Nullable_float__o v10; // x0
  __int64 v11; // x0
  __int64 v12; // x1
  struct WarBoardPieceBaseComponent_o *v13; // x22
  System_Nullable_float__o v14; // x0
  int32_t type_k__BackingField; // w8
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  int32_t *p_squareIndex; // x8
  struct WarBoardUserServantData_o *serverServantData; // x8
  __int64 v19; // [xsp+8h] [xbp-48h] BYREF
  __int64 v20; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5936164 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Nullable_float___ctor__);
    byte_5936164 = 1;
  }
  v7 = (const MethodInfo_45B27E0 *)Method_System_Nullable_float___ctor__;
  breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
  pieceComponent = this->fields.pieceComponent;
  v10 = (System_Nullable_float__o)&v20;
  this->fields._isDead_k__BackingField = 1;
  v20 = 0;
  System_Nullable_float____ctor(v10, 1.0, v7);
  if ( !pieceComponent
    || (((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, __int64, WarBoardManager_TaskList_o *, _QWORD, _QWORD, bool, const MethodInfo *))pieceComponent->klass->vtable._31_OnBreak.methodPtr)(
          pieceComponent,
          breakPoint_k__BackingField,
          v20,
          taskList,
          breakPoint_k__BackingField - 1,
          0,
          cameraMove,
          pieceComponent->klass->vtable._31_OnBreak.method),
        v13 = this->fields.pieceComponent,
        v14 = (System_Nullable_float__o)&v19,
        v19 = 0,
        System_Nullable_float____ctor(v14, 1.0, (const MethodInfo_45B27E0 *)Method_System_Nullable_float___ctor__),
        !v13) )
  {
    sub_21FFECC(v11, v12);
  }
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, __int64, WarBoardManager_TaskList_o *, bool, const MethodInfo *))v13->klass->vtable._32_OnDead.methodPtr)(
    v13,
    v19,
    taskList,
    cameraMove,
    v13->klass->vtable._32_OnDead.method);
  type_k__BackingField = this->fields._type_k__BackingField;
  this->fields._nowSquareIndex_k__BackingField = -1;
  if ( type_k__BackingField == 1 )
  {
    serverMasterData_k__BackingField = this->fields._serverMasterData_k__BackingField;
    if ( !serverMasterData_k__BackingField )
      return;
    p_squareIndex = &serverMasterData_k__BackingField->fields.squareIndex;
  }
  else
  {
    serverServantData = this->fields.serverServantData;
    if ( !serverServantData )
      return;
    p_squareIndex = &serverServantData->fields.squareIndex;
  }
  *p_squareIndex = -1;
}


void WarBoardPieceData__PreOnBpDamageFromMap(WarBoardPieceData_o *this, const MethodInfo *method)
{
  if ( this->fields._breakPoint_k__BackingField - 1 < 0 )
    this->fields._isDead_k__BackingField = 1;
}


void WarBoardPieceData__ProcContinue(WarBoardPieceData_o *this, const MethodInfo *method)
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

  if ( (byte_5936168 & 1) == 0 )
  {
    sub_21FFC50(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&Method_WarBoardPieceData__ProcContinue_b__337_0__);
    byte_5936168 = 1;
  }
  pieceComponent = (UnityEngine_Component_o *)this->fields.pieceComponent;
  if ( !pieceComponent )
    goto LABEL_18;
  pieceComponent = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(pieceComponent, 0);
  if ( !pieceComponent )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pieceComponent, 0, 0);
  limitActionCount_k__BackingField = this->fields._limitActionCount_k__BackingField;
  Cost_k__BackingField = this->fields._Cost_k__BackingField;
  this->fields._breakPoint_k__BackingField = this->fields._breakPointMax_k__BackingField;
  this->fields._currentActionCount_k__BackingField = limitActionCount_k__BackingField;
  if ( Cost_k__BackingField && WarBoardCost__get_HasCost(Cost_k__BackingField, 0) )
  {
    pieceComponent = (UnityEngine_Component_o *)this->fields._Cost_k__BackingField;
    if ( !pieceComponent )
      goto LABEL_18;
    WarBoardCost__Reset((WarBoardCost_o *)pieceComponent, 0);
  }
  pieceComponent = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceComponent )
    goto LABEL_18;
  monitor = (WarBoardData_o *)pieceComponent[18].monitor;
  PutSquareIndex_k__BackingField = this->fields._PutSquareIndex_k__BackingField;
  nowSquareIndex_k__BackingField = this->fields._nowSquareIndex_k__BackingField;
  v9 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_object__bool____ctor(v9, (Il2CppObject *)this, Method_WarBoardPieceData__ProcContinue_b__337_0__, 0);
  if ( !monitor )
    goto LABEL_18;
  v10 = WarBoardData__SearchNearestEmptySquare(
          monitor,
          PutSquareIndex_k__BackingField,
          nowSquareIndex_k__BackingField,
          (System_Func_WarBoardPieceData__bool__o *)v9,
          0);
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
    sub_21FFECC(pieceComponent, method);
  ((void (__fastcall *)(UnityEngine_Component_o *, void *))pieceComponent->klass[1]._1.generic_class)(
    pieceComponent,
    pieceComponent->klass[1]._1.typeMetadataHandle);
  this->fields._isDead_k__BackingField = 0;
}


void WarBoardPieceData__ReviveNow(WarBoardPieceData_o *this, const MethodInfo *method)
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
    MaxHp = BattleServantData__getMaxHp(this->fields._battleServant_k__BackingField, 0);
    ((void (__fastcall *)(struct BattleServantData_o *, _QWORD, const MethodInfo *))v4->klass->vtable._10_set_hp.methodPtr)(
      v4,
      MaxHp,
      v4->klass->vtable._10_set_hp.method);
  }
  battleServant_k__BackingField = this->fields.pieceComponent;
  if ( !battleServant_k__BackingField )
LABEL_7:
    sub_21FFECC(battleServant_k__BackingField, method);
  (*(void (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)battleServant_k__BackingField + 840LL))(
    battleServant_k__BackingField,
    0,
    *(_QWORD *)(*(_QWORD *)battleServant_k__BackingField + 848LL));
}


void WarBoardPieceData__Select(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardData_o *pieceComponent; // x0
  WarBoardSquareData_o *Square; // x0

  if ( (byte_593615B & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_593615B = 1;
  }
  pieceComponent = (WarBoardData_o *)this->fields.pieceComponent;
  if ( !pieceComponent )
    goto LABEL_10;
  (*(void (__fastcall **)(WarBoardData_o *, _QWORD))&pieceComponent->klass[1]._2.field_count)(
    pieceComponent,
    *(_QWORD *)&pieceComponent->klass[1]._2.interfaces_count);
  pieceComponent = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceComponent )
    goto LABEL_10;
  pieceComponent = (WarBoardData_o *)pieceComponent[1].fields.playedStageReinforcementsList;
  if ( !pieceComponent )
    goto LABEL_10;
  Square = WarBoardData__GetSquare(pieceComponent, this->fields._nowSquareIndex_k__BackingField, 0);
  if ( Square )
  {
    pieceComponent = (WarBoardData_o *)Square->fields.squareComponent;
    if ( pieceComponent )
    {
      WarBoardSquareComponent__OnSelect((WarBoardSquareComponent_o *)pieceComponent, 0);
      return;
    }
LABEL_10:
    sub_21FFECC(pieceComponent, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPieceData__SetActionPoint(WarBoardPieceData_o *this, int32_t ap, const MethodInfo *method)
{
  WarBoardCost_o *Cost_k__BackingField; // x0

  if ( this->fields._limitActionCount_k__BackingField <= 0 )
  {
    Cost_k__BackingField = this->fields._Cost_k__BackingField;
    if ( !Cost_k__BackingField )
      goto LABEL_7;
    if ( WarBoardCost__get_HasCost(Cost_k__BackingField, 0) )
    {
      Cost_k__BackingField = this->fields._Cost_k__BackingField;
      if ( Cost_k__BackingField )
      {
        WarBoardCost__UpdateCurrentPointBySaveData(Cost_k__BackingField, ap, 0);
        return;
      }
LABEL_7:
      sub_21FFECC(Cost_k__BackingField, *(_QWORD *)&ap);
    }
  }
  this->fields._currentActionCount_k__BackingField = ap;
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPieceData__SetBreakPoint(WarBoardPieceData_o *this, int32_t bp, const MethodInfo *method)
{
  struct WarBoardPieceData_SaveData_o *localSaveData; // x8
  struct WarBoardUserServantData_o *serverServantData; // x9
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8

  localSaveData = this->fields.localSaveData;
  this->fields._breakPoint_k__BackingField = bp;
  if ( !localSaveData )
    sub_21FFECC(this, *(_QWORD *)&bp);
  serverServantData = this->fields.serverServantData;
  localSaveData->fields.breakPoint = bp;
  if ( serverServantData )
    serverServantData->fields.defeatPoint = bp;
  battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
  if ( battleServant_k__BackingField )
    battleServant_k__BackingField->fields.defeatPoint = bp;
  serverMasterData_k__BackingField = this->fields._serverMasterData_k__BackingField;
  if ( serverMasterData_k__BackingField )
    serverMasterData_k__BackingField->fields.defeatPoint = bp;
}


void WarBoardPieceData__SetComponent(
        WarBoardPieceData_o *this,
        WarBoardPieceBaseComponent_o *component,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.pieceComponent = component;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.pieceComponent,
    (int32_t)component,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardPieceData__SetDeadSquareIndex(WarBoardPieceData_o *this, const MethodInfo *method)
{
  int32_t type_k__BackingField; // w9
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  int32_t *p_squareIndex; // x8
  struct WarBoardUserServantData_o *serverServantData; // x8

  type_k__BackingField = this->fields._type_k__BackingField;
  this->fields._nowSquareIndex_k__BackingField = -1;
  if ( type_k__BackingField == 1 )
  {
    serverMasterData_k__BackingField = this->fields._serverMasterData_k__BackingField;
    if ( !serverMasterData_k__BackingField )
      return;
    p_squareIndex = &serverMasterData_k__BackingField->fields.squareIndex;
  }
  else
  {
    serverServantData = this->fields.serverServantData;
    if ( !serverServantData )
      return;
    p_squareIndex = &serverServantData->fields.squareIndex;
  }
  *p_squareIndex = -1;
}


void WarBoardPieceData__SetInitinalData(
        WarBoardPieceData_o *this,
        WarBoardDataEntity_o *warBoardDataEntity,
        const MethodInfo *method)
{
  WarBoardPieceData_o *v4; // x19
  _BOOL4 isDead_k__BackingField; // w8
  System_Collections_Generic_IEnumerable_TSource__o *masterInfo; // x20
  System_Func_object__bool__o *v7; // x21
  Il2CppObject *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x2
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  DataManager_c *v17; // x0
  int32_t squareIndex; // w8
  int32_t attackCount; // w9
  int v20; // w10
  Il2CppObject *Master_object; // x20
  const MethodInfo *v22; // x1
  WarBoardActionPointClassEntity_o *MasterEntityFromStageId; // x0
  WarBoardCost_o *v24; // x0
  MissionNaviTransitionBoardItem_o *p_Cost_k__BackingField; // x19
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int64_t sortValue1; // x8
  System_Collections_Generic_IEnumerable_TSource__o *svtInfo; // x20
  System_Func_object__bool__o *v34; // x21
  Il2CppObject *v35; // x0
  struct WarBoardUserServantData_o **p_serverServantData; // x20
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  __int64 v43; // x2
  struct WarBoardUserServantData_o *serverServantData; // x8
  WarBoardPieceData_o *v45; // x21
  __int128 v46; // q1
  BattleServantData_o *BattleServant; // x0
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  const MethodInfo *v54; // x2
  __int64 v55; // x2
  struct WarBoardUserServantData_o *v56; // x8
  int32_t currentActionPoint; // w11
  DataManager_c *v58; // x0
  int32_t v59; // w9
  int32_t v60; // w8
  int v61; // w10
  Il2CppObject *v62; // x20
  const MethodInfo *v63; // x1
  WarBoardActionPointEntity_o *v64; // x21
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x20
  WarBoardCost_o *v66; // x0
  MissionNaviTransitionBoardItem_o *v67; // x19
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  int64_t sortValue0; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v76; // [xsp+20h] [xbp-50h]
  WarBoardReinforcementsEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_593615E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
    sub_21FFC50(&System_Func_WarBoardUserMasterData__bool__TypeInfo);
    sub_21FFC50(&System_Func_WarBoardUserServantData__bool__TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&Method_WarBoardPieceData__SetInitinalData_b__315_0__);
    this = (WarBoardPieceData_o *)sub_21FFC50(&Method_WarBoardPieceData__SetInitinalData_b__315_1__);
    byte_593615E = 1;
  }
  isDead_k__BackingField = v4->fields._isDead_k__BackingField;
  entity = 0;
  if ( !isDead_k__BackingField )
  {
    if ( v4->fields._type_k__BackingField == 1 )
    {
      if ( warBoardDataEntity )
      {
        masterInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.masterInfo;
        v7 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardUserMasterData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v7,
          (Il2CppObject *)v4,
          Method_WarBoardPieceData__SetInitinalData_b__315_0__,
          0);
        v8 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
               masterInfo,
               (System_Func_TSource__bool__o *)v7,
               (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
        v4->fields._serverMasterData_k__BackingField = (struct WarBoardUserMasterData_o *)v8;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v4->fields._serverMasterData_k__BackingField,
          (int32_t)v8,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14);
        serverMasterData_k__BackingField = v4->fields._serverMasterData_k__BackingField;
        if ( serverMasterData_k__BackingField )
        {
          v17 = DataManager_TypeInfo;
          *(int32x2_t *)&v4->fields._limitActionCount_k__BackingField = vrev64_s32(*(int32x2_t *)&serverMasterData_k__BackingField->fields.currentLimitActionPoint);
          attackCount = serverMasterData_k__BackingField->fields.attackCount;
          squareIndex = serverMasterData_k__BackingField->fields.squareIndex;
          v20 = *(&v17->_2.cctor_finished + 1);
          v4->fields._attackCount_k__BackingField = attackCount;
          v4->fields._nowSquareIndex_k__BackingField = squareIndex;
          if ( !v20 )
            j_il2cpp_runtime_class_init_0(v17, warBoardDataEntity, v15);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
          this = (WarBoardPieceData_o *)WarBoardPieceData__get_ActionPointEntity(v4, v22);
          if ( Master_object )
          {
            MasterEntityFromStageId = WarBoardActionPointClassMaster__GetMasterEntityFromStageId(
                                        (WarBoardActionPointClassMaster_o *)Master_object,
                                        (WarBoardActionPointEntity_o *)this,
                                        0);
            v24 = WarBoardCost__Create(MasterEntityFromStageId, v4->fields.stagePieceDetailEntity, 0, 0);
            v4->fields._Cost_k__BackingField = v24;
            p_Cost_k__BackingField = (MissionNaviTransitionBoardItem_o *)&v4->fields._Cost_k__BackingField;
            sub_21FFBF4(p_Cost_k__BackingField, (int32_t)v24, v26, v27, v28, v29, v30, v31);
            sortValue1 = p_Cost_k__BackingField->fields.sortValue1;
            if ( sortValue1 )
            {
              this = (WarBoardPieceData_o *)p_Cost_k__BackingField->klass;
              if ( p_Cost_k__BackingField->klass )
              {
                WarBoardCost__UpdateCurrentPointByServerData((WarBoardCost_o *)this, *(_DWORD *)(sortValue1 + 72), 0);
                return;
              }
            }
          }
        }
      }
LABEL_29:
      sub_21FFECC(this, warBoardDataEntity);
    }
    if ( !warBoardDataEntity )
      goto LABEL_29;
    svtInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.svtInfo;
    v34 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardUserServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(v34, (Il2CppObject *)v4, Method_WarBoardPieceData__SetInitinalData_b__315_1__, 0);
    v35 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
            svtInfo,
            (System_Func_TSource__bool__o *)v34,
            (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
    v4->fields.serverServantData = (struct WarBoardUserServantData_o *)v35;
    p_serverServantData = &v4->fields.serverServantData;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v4->fields.serverServantData,
      (int32_t)v35,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42);
    this = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    serverServantData = v4->fields.serverServantData;
    if ( !serverServantData )
      goto LABEL_29;
    v45 = this;
    v46 = *(_OWORD *)&serverServantData->fields.id.fields.fakeValue;
    *(_OWORD *)&v76.fields.currentCryptoKey = *(_OWORD *)&serverServantData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v76.fields.fakeValue = v46;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, warBoardDataEntity, v43);
    v75 = v76;
    this = (WarBoardPieceData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v75, 0);
    if ( !v45 )
      goto LABEL_29;
    BattleServant = WarBoardManager__GetBattleServant((WarBoardManager_o *)v45, (int64_t)this, 0);
    v4->fields._battleServant_k__BackingField = BattleServant;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v4->fields._battleServant_k__BackingField,
      (int32_t)BattleServant,
      v48,
      v49,
      v50,
      v51,
      v52,
      v53);
    this = (WarBoardPieceData_o *)v4->fields.serverServantData;
    if ( !this )
      goto LABEL_29;
    WarBoardUserServantData__FromBattleServantData(
      (WarBoardUserServantData_o *)this,
      v4->fields._battleServant_k__BackingField,
      v54);
    v56 = *p_serverServantData;
    if ( !*p_serverServantData )
      goto LABEL_29;
    currentActionPoint = v56->fields.currentActionPoint;
    v58 = DataManager_TypeInfo;
    v59 = v56->fields.attackCount;
    v4->fields._limitActionCount_k__BackingField = v56->fields.limitActionPoint;
    v4->fields._currentActionCount_k__BackingField = currentActionPoint;
    v60 = v56->fields.squareIndex;
    v61 = *(&v58->_2.cctor_finished + 1);
    v4->fields._attackCount_k__BackingField = v59;
    v4->fields._nowSquareIndex_k__BackingField = v60;
    if ( !v61 )
      j_il2cpp_runtime_class_init_0(v58, warBoardDataEntity, v55);
    v62 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    this = (WarBoardPieceData_o *)WarBoardPieceData__get_ActionPointEntity(v4, v63);
    if ( !v4->fields._battleServant_k__BackingField )
      goto LABEL_29;
    v64 = (WarBoardActionPointEntity_o *)this;
    this = (WarBoardPieceData_o *)BattleServantData__getClassId(v4->fields._battleServant_k__BackingField, 0, 0);
    if ( !v62 )
      goto LABEL_29;
    EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                    (WarBoardActionPointClassMaster_o *)v62,
                                    v64,
                                    (int32_t)this,
                                    0);
    this = (WarBoardPieceData_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
    if ( !this )
      goto LABEL_29;
    WarBoardReinforcementsMaster__TryGetEntity(
      (WarBoardReinforcementsMaster_o *)this,
      &entity,
      v4->fields._ReinfoId_k__BackingField,
      0);
    v66 = WarBoardCost__Create(EntityFromActionPointEntity, v4->fields.stagePieceDetailEntity, entity, 0);
    v4->fields._Cost_k__BackingField = v66;
    v67 = (MissionNaviTransitionBoardItem_o *)&v4->fields._Cost_k__BackingField;
    sub_21FFBF4(v67, (int32_t)v66, v68, v69, v70, v71, v72, v73);
    sortValue0 = v67->fields.sortValue0;
    if ( !sortValue0 )
      goto LABEL_29;
    this = (WarBoardPieceData_o *)v67->klass;
    if ( !v67->klass )
      goto LABEL_29;
    WarBoardCost__UpdateCurrentPointByServerData((WarBoardCost_o *)this, *(_DWORD *)(sortValue0 + 896), 0);
  }
}


void WarBoardPieceData__SetMasterEquip(WarBoardPieceData_o *this, int64_t userEquipId, const MethodInfo *method)
{
  long double v3; // q0
  _QWORD *v6; // x8
  __int64 v7; // x0
  __int64 v8; // x0
  Il2CppObject *MasterData_object; // x0
  __int64 v10; // x2
  Il2CppClass *klass; // x20
  void *monitor; // x21
  int32_t v13; // w0
  __int64 v14; // x1
  __int64 v15; // x2
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Object_o *v18; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v19; // 0:x0.16

  if ( (byte_5936155 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_21FFC50(&WarBoardMasterPieceComponent_TypeInfo);
    byte_5936155 = 1;
  }
  v6 = Method_SingletonMonoBehaviour_DataManager__getInstance__;
  this->fields._CurrentUserEquipId_k__BackingField = userEquipId;
  v7 = v6[4];
  if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
    v7 = sub_2237AF8(v3);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
    v8 = sub_2237AF8(v3);
  MasterData_object = **(Il2CppObject ***)(v8 + 184);
  if ( !MasterData_object )
    goto LABEL_24;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  if ( !MasterData_object )
    goto LABEL_24;
  MasterData_object = DataMasterBase_object__object__long___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                        this->fields._CurrentUserEquipId_k__BackingField,
                        (const MethodInfo_3EDF9E8 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  if ( !MasterData_object )
    goto LABEL_24;
  klass = MasterData_object[2].klass;
  monitor = MasterData_object[2].monitor;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, userEquipId, v10);
  *(_QWORD *)&v19.fields.currentCryptoKey = klass;
  *(_QWORD *)&v19.fields.fakeValue = monitor;
  v13 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v19, 0);
  pieceComponent = this->fields.pieceComponent;
  this->fields._iconId_k__BackingField = v13;
  if ( pieceComponent
    && (naturalAligment = WarBoardMasterPieceComponent_TypeInfo->_2.naturalAligment,
        pieceComponent->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (WarBoardMasterPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[naturalAligment - 1] == WarBoardMasterPieceComponent_TypeInfo )
      v18 = (UnityEngine_Object_o *)pieceComponent;
    else
      v18 = 0;
  }
  else
  {
    v18 = 0;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
  MasterData_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(v18, 0, 0);
  if ( ((unsigned __int8)MasterData_object & 1) != 0 )
  {
    if ( v18 )
    {
      WarBoardMasterPieceComponent__SetMasterIcon((WarBoardMasterPieceComponent_o *)v18, 0);
      return;
    }
LABEL_24:
    sub_21FFECC(MasterData_object, userEquipId);
  }
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPieceData__SetOverwriteActionType(WarBoardPieceData_o *this, int32_t actionType, const MethodInfo *method)
{
  Il2CppType *v5; // x21
  System_RuntimeTypeHandle_o v6; // x0
  System_Type_o *TypeFromHandle; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *v10; // x22
  int32_t v11; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_593616B & 1) == 0 )
  {
    sub_21FFC50(&WarBoardStageLayoutEntity_ActionType_var);
    byte_593616B = 1;
  }
  v5 = WarBoardStageLayoutEntity_ActionType_var;
  if ( !*(_DWORD *)(qword_594C108 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C108, *(_QWORD *)&actionType, method);
  v6.fields.value = (intptr_t)v5;
  TypeFromHandle = System_Type__GetTypeFromHandle(v6, 0);
  v11 = actionType;
  v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v11);
  if ( !*(_DWORD *)(qword_594C0C0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C0C0, v8, v9);
  if ( System_Enum__IsDefined(TypeFromHandle, v10, 0) )
    this->fields._overwriteActionType_k__BackingField = actionType;
}


void WarBoardPieceData__SetOverwriteAiId(WarBoardPieceData_o *this, int32_t aiId, const MethodInfo *method)
{
  this->fields._overwriteAiId_k__BackingField = aiId;
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPieceData__SetPartyBuffLevel(WarBoardPieceData_o *this, int32_t level, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x9
  __int64 naturalAligment; // x12
  UnityEngine_Object_o *v7; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1

  if ( (byte_5936161 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&WarBoardServantPieceComponent_TypeInfo);
    byte_5936161 = 1;
  }
  pieceComponent = this->fields.pieceComponent;
  if ( pieceComponent
    && (naturalAligment = WarBoardServantPieceComponent_TypeInfo->_2.naturalAligment,
        pieceComponent->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (WarBoardServantPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[naturalAligment - 1] == WarBoardServantPieceComponent_TypeInfo )
      v7 = (UnityEngine_Object_o *)this->fields.pieceComponent;
    else
      v7 = 0;
  }
  else
  {
    v7 = 0;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&level, method);
  v8 = UnityEngine_Object__op_Equality(v7, 0, 0);
  if ( !v8 )
  {
    if ( !v7 )
      sub_21FFECC(v8, v9);
    WarBoardServantPieceComponent__SetPartyBuffLevel((WarBoardServantPieceComponent_o *)v7, level, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPieceData__SetPieceEnable(WarBoardPieceData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_21FFECC(0, enable);
  WarBoardPieceBaseComponent__SetColliderEnable(pieceComponent, enable, 0);
}


void WarBoardPieceData__SetPrevAiRoute(
        WarBoardPieceData_o *this,
        WarBoardAIRoute_RouteData_o *prev,
        const MethodInfo *method)
{
  WarBoardPieceData_o *v4; // x19
  int64_t flagNow; // x21
  Il2CppClass *v6; // d8
  Il2CppObject *v7; // x20
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  v4 = this;
  if ( (byte_5936163 & 1) == 0 )
  {
    this = (WarBoardPieceData_o *)sub_21FFC50(&WarBoardPieceData_RouteSaveData_TypeInfo);
    byte_5936163 = 1;
  }
  if ( !prev )
    sub_21FFECC(this, prev);
  flagNow = prev->fields.flagNow;
  v6 = *(Il2CppClass **)&prev->fields.baseIndex;
  v7 = (Il2CppObject *)sub_21FFEBC(WarBoardPieceData_RouteSaveData_TypeInfo);
  System_Object___ctor(v7, 0);
  v4->fields._PrevAiRoute_k__BackingField = (struct WarBoardPieceData_RouteSaveData_o *)v7;
  v7[1].klass = v6;
  v7[1].monitor = (void *)flagNow;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v4->fields._PrevAiRoute_k__BackingField,
    (int32_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


void WarBoardPieceData__SetServant(
        WarBoardPieceData_o *this,
        int64_t userServantId,
        int32_t overwriteLimitCount,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *v10; // x8
  Il2CppClass *klass; // x22
  void *monitor; // x23
  int32_t SvtClassId; // w8
  int32_t *p_iconClassId_k__BackingField; // x21
  __int64 v15; // x2
  Il2CppObject *v16; // x8
  DataManager_c *v17; // x0
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x9
  __int64 naturalAligment; // x12
  UnityEngine_Object_o *v20; // x20
  Il2CppObject *v21; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16

  if ( (byte_5936156 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_21FFC50(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&WarBoardServantPieceComponent_TypeInfo);
    byte_5936156 = 1;
  }
  v21 = 0;
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_35;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userServantId,
                               (const MethodInfo_3EDFA34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v10 = entity;
    this->fields._UserServantId_k__BackingField = userServantId;
    if ( !v10 )
      goto LABEL_35;
    klass = v10[5].klass;
    monitor = v10[5].monitor;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v8, v9);
    *(_QWORD *)&v23.fields.currentCryptoKey = klass;
    *(_QWORD *)&v23.fields.fakeValue = monitor;
    this->fields._iconId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v23, 0);
    if ( overwriteLimitCount < 0 )
    {
      Instance = entity;
      if ( !entity )
        goto LABEL_35;
      overwriteLimitCount = UserServantEntity__getIconLimitCount((UserServantEntity_o *)entity, 0, 0);
    }
    Instance = entity;
    this->fields._iconLimitCount_k__BackingField = overwriteLimitCount;
    if ( !Instance )
      goto LABEL_35;
    SvtClassId = UserServantEntity__getSvtClassId((UserServantEntity_o *)Instance, 0, 0, 0);
    Instance = entity;
    this->fields._iconClassId_k__BackingField = SvtClassId;
    p_iconClassId_k__BackingField = &this->fields._iconClassId_k__BackingField;
    if ( !Instance )
      goto LABEL_35;
    Instance = (Il2CppObject *)UserServantEntity__getFrameType((UserServantEntity_o *)Instance, 0);
    v16 = entity;
    this->fields._iconFrameType_k__BackingField = (int)Instance;
    if ( !v16 )
      goto LABEL_35;
    v17 = DataManager_TypeInfo;
    this->fields._iconLevel_k__BackingField = (int32_t)v16[25].klass;
    if ( !*(&v17->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v17, v8, v15);
    Instance = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantClassMaster___);
    if ( !Instance )
LABEL_35:
      sub_21FFECC(Instance, v8);
    Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                 &v21,
                                 *p_iconClassId_k__BackingField,
                                 (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v21 )
        goto LABEL_35;
      p_iconClassId_k__BackingField = (int32_t *)&v21[2].monitor + 1;
    }
    this->fields._IconClassImageId_k__BackingField = *p_iconClassId_k__BackingField;
  }
  else
  {
    this->fields._UserServantId_k__BackingField = 0;
    this->fields._iconId_k__BackingField = 0;
  }
  pieceComponent = this->fields.pieceComponent;
  if ( pieceComponent
    && (naturalAligment = WarBoardServantPieceComponent_TypeInfo->_2.naturalAligment,
        pieceComponent->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (WarBoardServantPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[naturalAligment - 1] == WarBoardServantPieceComponent_TypeInfo )
      v20 = (UnityEngine_Object_o *)this->fields.pieceComponent;
    else
      v20 = 0;
  }
  else
  {
    v20 = 0;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  Instance = (Il2CppObject *)UnityEngine_Object__op_Inequality(v20, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( v20 )
    {
      WarBoardServantPieceComponent__SetServant((WarBoardServantPieceComponent_o *)v20, userServantId, 0);
      return;
    }
    goto LABEL_35;
  }
}


void WarBoardPieceData__SetServantEquip(
        WarBoardPieceData_o *this,
        int64_t userServantEquipId,
        const MethodInfo *method)
{
  const MethodInfo_476E8C0 *v5; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppClass *klass; // x21
  void *monitor; // x22
  Il2CppObject *v11; // x8
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x9
  __int64 naturalAligment; // x12
  UnityEngine_Object_o *v14; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v16; // 0:x0.16

  if ( (byte_5936157 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&WarBoardServantPieceComponent_TypeInfo);
    byte_5936157 = 1;
  }
  v5 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  entity = 0;
  this->fields._UserServantEquipId_k__BackingField = userServantEquipId;
  Instance = SingletonMonoBehaviour_object___get_Instance(v5);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_24;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               this->fields._UserServantEquipId_k__BackingField,
                               (const MethodInfo_3EDFA34 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_24;
    klass = entity[5].klass;
    monitor = entity[5].monitor;
    if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7, v8);
    *(_QWORD *)&v16.fields.currentCryptoKey = klass;
    *(_QWORD *)&v16.fields.fakeValue = monitor;
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v16, 0);
    v11 = entity;
    this->fields._iconEquipId_k__BackingField = (int)Instance;
    if ( !v11 )
      goto LABEL_24;
    this->fields._equipLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(
                                                      (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)v11[6],
                                                      0);
  }
  else
  {
    this->fields._UserServantEquipId_k__BackingField = 0;
    this->fields._iconEquipId_k__BackingField = 0;
    this->fields._equipLimitCount_k__BackingField = 0;
  }
  pieceComponent = this->fields.pieceComponent;
  if ( pieceComponent
    && (naturalAligment = WarBoardServantPieceComponent_TypeInfo->_2.naturalAligment,
        pieceComponent->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (WarBoardServantPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[naturalAligment - 1] == WarBoardServantPieceComponent_TypeInfo )
      v14 = (UnityEngine_Object_o *)this->fields.pieceComponent;
    else
      v14 = 0;
  }
  else
  {
    v14 = 0;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
  Instance = (Il2CppObject *)UnityEngine_Object__op_Inequality(v14, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( v14 )
    {
      WarBoardServantPieceComponent__SetServantEquip((WarBoardServantPieceComponent_o *)v14, userServantEquipId, 0);
      return;
    }
LABEL_24:
    sub_21FFECC(Instance, v7);
  }
}


void WarBoardPieceData__SetServantIconData(WarBoardPieceData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardPieceData_o *v3; // x19
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  __int64 v5; // x20
  __int64 v6; // x21
  int32_t v7; // w0
  struct WarBoardUserServantData_o *serverServantData; // x8
  BattleServantData_o *v9; // x8
  __int64 v10; // x2
  int32_t *p_iconClassId_k__BackingField; // x20
  struct BattleServantData_o *v12; // x8
  DataManager_c *v13; // x0
  int32_t frameType_k__BackingField; // w9
  int32_t level; // w8
  int v16; // w10
  __int64 v17; // x2
  int32_t v18; // w9
  struct BattleServantData_o *v19; // x8
  struct BattleUserServantData_array *equipList; // x23
  il2cpp_array_size_t max_length; // x9
  BattleUserServantData_o *v22; // x9
  __int64 v23; // x20
  __int64 v24; // x21
  int v25; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v26; // x8
  struct BattleDeckServantData_o *deckSvt; // x20
  int32_t DispLimitCnt; // w0
  struct WarBoardUserServantData_o *v29; // x8
  bool v30; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v33; // 0:x0.16

  v3 = this;
  if ( (byte_5936154 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    this = (WarBoardPieceData_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_5936154 = 1;
  }
  battleServant_k__BackingField = v3->fields._battleServant_k__BackingField;
  entity = 0;
  if ( !battleServant_k__BackingField )
    goto LABEL_40;
  v5 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.fakeValue;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v2);
  *(_QWORD *)&v32.fields.currentCryptoKey = v5;
  *(_QWORD *)&v32.fields.fakeValue = v6;
  v7 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v32, 0);
  serverServantData = v3->fields.serverServantData;
  v3->fields._iconId_k__BackingField = v7;
  if ( serverServantData && NpcSvtType__IsEnemy(serverServantData->fields.npcSvtType, 0) )
  {
    this = (WarBoardPieceData_o *)v3->fields._battleServant_k__BackingField;
    if ( !this )
      goto LABEL_40;
    this = (WarBoardPieceData_o *)BattleServantData__getLimitCount((BattleServantData_o *)this, 0);
  }
  else
  {
    this = (WarBoardPieceData_o *)v3->fields._battleServant_k__BackingField;
    if ( !this )
      goto LABEL_40;
    this = (WarBoardPieceData_o *)BattleServantData__GetIconImageLimitCount((BattleServantData_o *)this, 0);
  }
  v9 = v3->fields._battleServant_k__BackingField;
  v3->fields._iconLimitCount_k__BackingField = (int)this;
  if ( !v9 )
    goto LABEL_40;
  this = (WarBoardPieceData_o *)BattleServantData__getClassId(v9, 0, 0);
  v3->fields._iconClassId_k__BackingField = (int)this;
  p_iconClassId_k__BackingField = &v3->fields._iconClassId_k__BackingField;
  v12 = v3->fields._battleServant_k__BackingField;
  if ( !v12 )
    goto LABEL_40;
  v13 = DataManager_TypeInfo;
  frameType_k__BackingField = v12->fields._frameType_k__BackingField;
  level = v12->fields.level;
  v16 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v3->fields._iconFrameType_k__BackingField = frameType_k__BackingField;
  v3->fields._iconLevel_k__BackingField = level;
  if ( !v16 )
    j_il2cpp_runtime_class_init_0(v13, method, v10);
  this = (WarBoardPieceData_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( !this )
    goto LABEL_40;
  this = (WarBoardPieceData_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  &entity,
                                  *p_iconClassId_k__BackingField,
                                  (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
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
    max_length = equipList->max_length;
    if ( max_length )
    {
      if ( !(_DWORD)max_length )
        goto LABEL_41;
      v22 = equipList->m_Items[0];
      if ( !v22 )
        goto LABEL_30;
      v23 = *(_QWORD *)&v22->fields.svtId.fields.currentCryptoKey;
      v24 = *(_QWORD *)&v22->fields.svtId.fields.fakeValue;
      if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method, v17);
      *(_QWORD *)&v33.fields.currentCryptoKey = v23;
      *(_QWORD *)&v33.fields.fakeValue = v24;
      this = (WarBoardPieceData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v33, 0);
      v25 = equipList->max_length;
      v3->fields._iconEquipId_k__BackingField = (int)this;
      if ( !v25 )
LABEL_41:
        sub_21FFED4(this);
      v26 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)equipList->m_Items[0];
      if ( !v26
        || (this = (WarBoardPieceData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v26[6], 0),
            v19 = v3->fields._battleServant_k__BackingField,
            v3->fields._equipLimitCount_k__BackingField = (int)this,
            !v19) )
      {
LABEL_40:
        sub_21FFECC(this, method);
      }
    }
  }
LABEL_30:
  deckSvt = v19->fields.deckSvt;
  if ( deckSvt && *(_QWORD *)&deckSvt->fields.npcId )
  {
    v3->fields._npcImageSvtId_k__BackingField = BattleDeckServantData__GetImageSvtId(deckSvt, 0);
    DispLimitCnt = BattleDeckServantData__GetDispLimitCnt(deckSvt, 0);
    v29 = v3->fields.serverServantData;
    v3->fields._npcDispLimitCount_k__BackingField = DispLimitCnt;
    v30 = v29
       && v29->fields.displayType == 2
       && (v3->fields._npcImageSvtId_k__BackingField < 1 || BattleDeckServantData__IsShadow(deckSvt, 0));
    v3->fields._IsShadow_k__BackingField = v30;
  }
}


void WarBoardPieceData__SetServarData(WarBoardPieceData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  int32_t currentActionCount_k__BackingField; // w9
  int32_t attackCount_k__BackingField; // w10
  int32_t nowSquareIndex_k__BackingField; // w11
  WarBoardCost_o *Cost_k__BackingField; // x0
  _BOOL8 HasCost; // x0
  __int64 v10; // x1
  struct WarBoardCost_o *v11; // x8
  struct WarBoardUserMasterData_o *v12; // x9
  struct WarBoardUserServantData_o *serverServantData; // x0
  int32_t v14; // w9
  int32_t v15; // w10
  BattleServantData_o *battleServant_k__BackingField; // x1
  WarBoardCost_o *v17; // x0
  struct WarBoardCost_o *v18; // x8
  struct WarBoardUserServantData_o *v19; // x9

  if ( this->fields._type_k__BackingField == 1 )
  {
    serverMasterData_k__BackingField = this->fields._serverMasterData_k__BackingField;
    if ( serverMasterData_k__BackingField )
    {
      currentActionCount_k__BackingField = this->fields._currentActionCount_k__BackingField;
      attackCount_k__BackingField = this->fields._attackCount_k__BackingField;
      nowSquareIndex_k__BackingField = this->fields._nowSquareIndex_k__BackingField;
      Cost_k__BackingField = this->fields._Cost_k__BackingField;
      serverMasterData_k__BackingField->fields.currentLimitActionPoint = currentActionCount_k__BackingField;
      serverMasterData_k__BackingField->fields.attackCount = attackCount_k__BackingField;
      serverMasterData_k__BackingField->fields.squareIndex = nowSquareIndex_k__BackingField;
      if ( Cost_k__BackingField )
      {
        HasCost = WarBoardCost__get_HasCost(Cost_k__BackingField, 0);
        if ( HasCost )
        {
          v11 = this->fields._Cost_k__BackingField;
          if ( v11 )
          {
            v12 = this->fields._serverMasterData_k__BackingField;
            if ( v12 )
            {
              v12->fields.currentPieceActionPoint = v11->fields._CurrentActionPoint_k__BackingField;
              return;
            }
          }
LABEL_15:
          sub_21FFECC(HasCost, v10);
        }
      }
    }
  }
  else
  {
    serverServantData = this->fields.serverServantData;
    if ( serverServantData )
    {
      v14 = this->fields._attackCount_k__BackingField;
      v15 = this->fields._nowSquareIndex_k__BackingField;
      battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
      serverServantData->fields.currentActionPoint = this->fields._currentActionCount_k__BackingField;
      serverServantData->fields.attackCount = v14;
      serverServantData->fields.squareIndex = v15;
      WarBoardUserServantData__FromBattleServantData(serverServantData, battleServant_k__BackingField, v2);
      v17 = this->fields._Cost_k__BackingField;
      if ( v17 )
      {
        HasCost = WarBoardCost__get_HasCost(v17, 0);
        if ( HasCost )
        {
          v18 = this->fields._Cost_k__BackingField;
          if ( !v18 )
            goto LABEL_15;
          v19 = this->fields.serverServantData;
          if ( !v19 )
            goto LABEL_15;
          v19->fields.currentPieceActionPoint = v18->fields._CurrentActionPoint_k__BackingField;
        }
      }
    }
  }
}


void WarBoardPieceData__SetSquareIndex(WarBoardPieceData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  this->fields._nowSquareIndex_k__BackingField = squareIndex;
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPieceData__SetTouchEnable(WarBoardPieceData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_21FFECC(0, enable);
  WarBoardPieceBaseComponent__SetTouchEnable(pieceComponent, enable, 0);
}


void WarBoardPieceData__ShowActionTarget(WarBoardPieceData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  if ( !this->fields._isDead_k__BackingField && WarBoardPieceData__get_enableAction(this, method) )
  {
    pieceComponent = this->fields.pieceComponent;
    if ( !pieceComponent )
      sub_21FFECC(0, v3);
    ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, const MethodInfo *))pieceComponent->klass->vtable._20_ShowActionTarget.methodPtr)(
      pieceComponent,
      pieceComponent->klass->vtable._20_ShowActionTarget.method);
  }
}


System_String_o *WarBoardPieceData__ToJson(WarBoardPieceData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x2
  Il2CppObject *serverMasterData_k__BackingField; // x19
  WarBoardUserServantData_o *serverServantData; // x0

  if ( (byte_5936160 & 1) == 0 )
  {
    sub_21FFC50(&JsonManager_TypeInfo);
    byte_5936160 = 1;
  }
  WarBoardPieceData__SetServarData(this, method);
  if ( this->fields._type_k__BackingField != 1 )
  {
    serverServantData = this->fields.serverServantData;
    if ( serverServantData )
      return WarBoardUserServantData__ToJson(serverServantData, v3);
    return **(System_String_o ***)(qword_594C0B8 + 184);
  }
  serverMasterData_k__BackingField = (Il2CppObject *)this->fields._serverMasterData_k__BackingField;
  if ( !serverMasterData_k__BackingField )
    return **(System_String_o ***)(qword_594C0B8 + 184);
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v3, v4);
  return JsonManager__toJson(serverMasterData_k__BackingField, 0, 0, 0);
}


void WarBoardPieceData__TurnEnd(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_21FFECC(0, method);
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, const MethodInfo *))pieceComponent->klass->vtable._9_HideActionCount.methodPtr)(
    pieceComponent,
    pieceComponent->klass->vtable._9_HideActionCount.method);
}


void WarBoardPieceData__TurnStart(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_21FFECC(0, method);
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, const MethodInfo *))pieceComponent->klass->vtable._8_ShowActionCount.methodPtr)(
    pieceComponent,
    pieceComponent->klass->vtable._8_ShowActionCount.method);
}


void WarBoardPieceData__UpdateFromServerData(
        WarBoardPieceData_o *this,
        WarBoardDataEntity_o *warBoardDataEntity,
        System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__o *deadBreakList,
        WarBoardManager_TaskList_o *taskList,
        bool forceUpdate,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_TSource__o *masterInfo; // x21
  System_Func_object__bool__o *v12; // x22
  struct WarBoardUserMasterData_o *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  int32_t defeatPoint; // w8
  struct WarBoardUserMasterData_o *v21; // x22
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  struct WarBoardUserMasterData_o **p_serverMasterData_k__BackingField; // x21
  _BOOL4 v24; // w24
  System_Collections_Generic_IEnumerable_TSource__o *svtInfo; // x22
  System_Func_object__bool__o *v26; // x24
  Il2CppObject *v27; // x0
  __int64 v28; // x1
  int32_t breakPoint_k__BackingField; // w26
  int32_t klass_high; // w25
  struct WarBoardUserServantData_o *v31; // x22
  __int64 v32; // x24
  __int64 pieceComponent; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  struct WarBoardPieceBaseComponent_o *v40; // x1
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  struct WarBoardData_WarBoardDeadBreakList_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  _BOOL4 v50; // w21
  Il2CppClass **v51; // x0
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  struct WarBoardCost_o *v58; // x9
  struct WarBoardUserMasterData_o *v59; // x8
  _BOOL4 v60; // w22
  struct WarBoardUserServantData_o *serverServantData; // x8
  struct WarBoardUserServantData_o **p_serverServantData; // x23
  _BOOL4 v63; // w26
  int32_t currentActionCount_k__BackingField; // w27
  int32_t currentActionPoint; // w29
  struct WarBoardPieceData_SaveData_o *localSaveData; // x9
  unsigned __int8 v67; // w28
  bool isDead_k__BackingField; // w24
  _BOOL4 v69; // w25
  int32_t v70; // w10
  _BOOL4 v71; // w23
  __int64 v72; // x2
  struct WarBoardPieceBaseComponent_o *v73; // x8
  __int64 v74; // x11
  UnityEngine_Object_o *v75; // x20
  bool v76; // w8
  int32_t consumedRecoverDonotActCost; // w9
  WarBoardCost_o *Cost_k__BackingField; // x0
  struct WarBoardCost_o *v79; // x8
  const MethodInfo *v80; // x2
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  const MethodInfo *v82; // x2
  __int64 v83; // x2
  struct WarBoardUserServantData_o *v84; // x9
  int32_t squareIndex; // w8
  int32_t limitActionPoint; // w10
  int32_t v87; // w11
  int32_t attackCount; // w9
  Il2CppObject *Master_object; // x22
  const MethodInfo *v90; // x1
  WarBoardActionPointEntity_o *v91; // x23
  struct WarBoardUserServantData_o *v92; // x8
  WarBoardActionPointClassEntity_o *v93; // x22
  WarBoardCost_o *v94; // x23
  int v95; // w22
  int32_t *p_iconClassId_k__BackingField; // x28
  int32_t iconClassId_k__BackingField; // w21
  _BOOL4 v98; // w23
  __int64 v99; // x2
  int v100; // w8
  struct WarBoardPieceBaseComponent_o *v101; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Object_o *v103; // x20
  __int64 v104; // x2
  struct BattleServantData_o *v105; // x8
  __int64 v106; // x21
  __int64 v107; // x22
  int32_t v108; // w0
  struct WarBoardUserServantData_o *v109; // x8
  BattleServantData_o *v110; // x8
  __int64 v111; // x2
  struct BattleServantData_o *v112; // x8
  DataManager_c *v113; // x0
  int32_t frameType_k__BackingField; // w9
  int32_t level; // w8
  int v116; // w10
  __int64 v117; // x20
  System_Func_bool__o *v118; // x19
  UnityEngine_WaitUntil_o *v119; // x21
  __int64 v120; // x19
  System_Delegate_o **v121; // x21
  System_Delegate_o *v122; // x22
  WarBoardTaskBase_TaskCallback_o *v123; // x23
  System_Delegate_o *v124; // x0
  System_String_o *v125; // x2
  System_String_o *v126; // x3
  int32_t v127; // w4
  int32_t v128; // w5
  bool v129; // w6
  bool v130; // w7
  int32_t v131; // w8
  WarBoardTaskBase_TaskCallback_c *v132; // x1
  Il2CppObject *Instance; // x20
  __int64 v134; // x21
  __int64 v135; // x0
  __int64 v136; // x1
  System_String_o *v137; // x2
  System_String_o *v138; // x3
  int32_t v139; // w4
  int32_t v140; // w5
  bool v141; // w6
  bool v142; // w7
  __int64 v143; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v145; // 0:x0.16

  if ( (byte_593615F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&System_Func_WarBoardUserMasterData__bool__TypeInfo);
    sub_21FFC50(&System_Func_WarBoardUserServantData__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__Add__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_21FFC50(&Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__2__);
    sub_21FFC50(&Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__3__);
    sub_21FFC50(&WarBoardPieceData___c__DisplayClass316_0_TypeInfo);
    sub_21FFC50(&UnityEngine_WaitUntil_TypeInfo);
    sub_21FFC50(&WarBoardCallbackTask_TypeInfo);
    sub_21FFC50(&WarBoardData_WarBoardDeadBreakList_TypeInfo);
    sub_21FFC50(&WarBoardMasterPieceComponent_TypeInfo);
    sub_21FFC50(&Method_WarBoardPieceData__UpdateFromServerData_b__316_0__);
    sub_21FFC50(&Method_WarBoardPieceData__UpdateFromServerData_b__316_1__);
    sub_21FFC50(&WarBoardServantPieceComponent_TypeInfo);
    sub_21FFC50(&WarBoardTaskBase___TypeInfo);
    byte_593615F = 1;
  }
  entity = 0;
  if ( !warBoardDataEntity )
    return;
  if ( this->fields._type_k__BackingField != 1 )
  {
    svtInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.svtInfo;
    v26 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardUserServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v26,
      (Il2CppObject *)this,
      Method_WarBoardPieceData__UpdateFromServerData_b__316_1__,
      0);
    v27 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
            svtInfo,
            (System_Func_TSource__bool__o *)v26,
            (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
    if ( !v27 )
      return;
    breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
    klass_high = HIDWORD(v27[49].klass);
    v31 = (struct WarBoardUserServantData_o *)v27;
    if ( breakPoint_k__BackingField <= klass_high )
    {
      pieceComponent = (__int64)this->fields.pieceComponent;
      if ( !pieceComponent )
        goto LABEL_156;
      pieceComponent = (*(__int64 (__fastcall **)(__int64, WarBoardManager_TaskList_o *, _QWORD))(*(_QWORD *)pieceComponent
                                                                                                + 792LL))(
                         pieceComponent,
                         taskList,
                         *(_QWORD *)(*(_QWORD *)pieceComponent + 800LL));
      v50 = 0;
    }
    else
    {
      this->fields._breakPoint_k__BackingField = klass_high;
      if ( klass_high < 0 )
        this->fields._isDead_k__BackingField = 1;
      v32 = sub_21FFEBC(WarBoardData_WarBoardDeadBreakList_TypeInfo);
      System_Object___ctor((Il2CppObject *)v32, 0);
      if ( !v32 )
        goto LABEL_156;
      v40 = this->fields.pieceComponent;
      *(_QWORD *)(v32 + 16) = v40;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v32 + 16), (int32_t)v40, v34, v35, v36, v37, v38, v39);
      *(_DWORD *)(v32 + 24) = v31->fields.defeatPoint;
      *(_DWORD *)(v32 + 28) = breakPoint_k__BackingField;
      if ( !deadBreakList )
        goto LABEL_156;
      items = deadBreakList->fields._items;
      v48 = Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__Add__;
      ++deadBreakList->fields._version;
      if ( !items )
        goto LABEL_156;
      size = deadBreakList->fields._size;
      v50 = klass_high >= 0;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)deadBreakList,
          (Il2CppObject *)v32,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        v51 = &items->obj.klass + size;
        deadBreakList->fields._size = size + 1;
        v51[4] = (Il2CppClass *)v32;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v51 + 4), v32, v41, v42, v43, v44, v45, v46);
      }
    }
    p_serverServantData = &this->fields.serverServantData;
    serverServantData = this->fields.serverServantData;
    if ( serverServantData )
      v63 = serverServantData->fields.transformIndex != v31->fields.transformIndex;
    else
      v63 = 0;
    currentActionCount_k__BackingField = this->fields._currentActionCount_k__BackingField;
    currentActionPoint = v31->fields.currentActionPoint;
    localSaveData = this->fields.localSaveData;
    v67 = currentActionCount_k__BackingField != currentActionPoint;
    if ( !localSaveData )
      goto LABEL_156;
    if ( v31->fields.consumedActionPointDateTime <= localSaveData->fields.consumedActionPointDateTime
      || this->fields._forceId_k__BackingField
      || this->fields._groupId_k__BackingField )
    {
      isDead_k__BackingField = 1;
      if ( serverServantData )
      {
LABEL_38:
        v69 = serverServantData->fields.criticalStars != v31->fields.criticalStars;
LABEL_54:
        v76 = v31->fields.consumedRecoverDonotActCostDateTime > localSaveData->fields.consumedRecoverDonotActCostDateTime
           && !this->fields._forceId_k__BackingField
           && !this->fields._groupId_k__BackingField
           && !this->fields._isDead_k__BackingField;
        consumedRecoverDonotActCost = v31->fields.consumedRecoverDonotActCost;
        Cost_k__BackingField = this->fields._Cost_k__BackingField;
        this->fields._IsDispConsumedPieceActionPoint_k__BackingField = v76;
        this->fields._ConsumedRecoverDonotActCost_k__BackingField = consumedRecoverDonotActCost;
        if ( Cost_k__BackingField )
        {
          pieceComponent = WarBoardCost__get_HasCost(Cost_k__BackingField, 0);
          v67 = pieceComponent | (currentActionCount_k__BackingField != currentActionPoint);
          if ( (pieceComponent & 1) != 0 && currentActionCount_k__BackingField == currentActionPoint )
          {
            v79 = this->fields._Cost_k__BackingField;
            if ( !v79 )
              goto LABEL_156;
            v67 = v79->fields._CurrentActionPoint_k__BackingField != v31->fields.currentPieceActionPoint;
          }
        }
        this->fields.serverServantData = v31;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.serverServantData,
          (int32_t)v31,
          v52,
          v53,
          v54,
          v55,
          v56,
          v57);
        pieceComponent = (__int64)this->fields.serverServantData;
        if ( !pieceComponent )
          goto LABEL_156;
        WarBoardUserServantData__SetBattleServantData(
          (WarBoardUserServantData_o *)pieceComponent,
          this->fields._battleServant_k__BackingField,
          v80);
        battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
        if ( !battleServant_k__BackingField )
          goto LABEL_156;
        pieceComponent = (__int64)battleServant_k__BackingField->fields.buffData;
        if ( !pieceComponent )
          goto LABEL_156;
        BattleBuffData__UpdateForceNoField((BattleBuffData_o *)pieceComponent, 0);
        pieceComponent = (__int64)this->fields._battleServant_k__BackingField;
        if ( !pieceComponent )
          goto LABEL_156;
        BattleServantData__updateHp((BattleServantData_o *)pieceComponent, 0, 0);
        pieceComponent = (__int64)*p_serverServantData;
        if ( !*p_serverServantData )
          goto LABEL_156;
        WarBoardUserServantData__FromBattleServantData(
          (WarBoardUserServantData_o *)pieceComponent,
          this->fields._battleServant_k__BackingField,
          v82);
        v84 = this->fields.serverServantData;
        if ( !v84 )
          goto LABEL_156;
        squareIndex = v84->fields.squareIndex;
        limitActionPoint = v84->fields.limitActionPoint;
        v87 = v84->fields.currentActionPoint;
        attackCount = v84->fields.attackCount;
        this->fields._limitActionCount_k__BackingField = limitActionPoint;
        this->fields._currentActionCount_k__BackingField = v87;
        this->fields._attackCount_k__BackingField = attackCount;
        if ( squareIndex == -1 )
          this->fields._lastSquareIndex_k__BackingField = this->fields._nowSquareIndex_k__BackingField;
        this->fields._nowSquareIndex_k__BackingField = squareIndex;
        if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v28, v83);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
        pieceComponent = (__int64)WarBoardPieceData__get_ActionPointEntity(this, v90);
        if ( !this->fields._battleServant_k__BackingField )
          goto LABEL_156;
        v91 = (WarBoardActionPointEntity_o *)pieceComponent;
        pieceComponent = BattleServantData__getClassId(this->fields._battleServant_k__BackingField, 0, 0);
        if ( !Master_object )
          goto LABEL_156;
        pieceComponent = (__int64)WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                    (WarBoardActionPointClassMaster_o *)Master_object,
                                    v91,
                                    pieceComponent,
                                    0);
        v92 = this->fields.serverServantData;
        if ( !v92 )
          goto LABEL_156;
        v93 = (WarBoardActionPointClassEntity_o *)pieceComponent;
        pieceComponent = (__int64)this->fields._Cost_k__BackingField;
        if ( !pieceComponent )
          goto LABEL_156;
        WarBoardCost__UpdateCurrentPointByServerData(
          (WarBoardCost_o *)pieceComponent,
          v92->fields.currentPieceActionPoint,
          0);
        pieceComponent = (__int64)this->fields._battleServant_k__BackingField;
        if ( !pieceComponent )
          goto LABEL_156;
        v94 = this->fields._Cost_k__BackingField;
        pieceComponent = BattleServantData__getClassId((BattleServantData_o *)pieceComponent, 0, 0);
        if ( !v94 )
          goto LABEL_156;
        if ( WarBoardCost__IsSameClass(v94, pieceComponent, 0) )
        {
          v95 = 0;
        }
        else
        {
          pieceComponent = (__int64)WarBoardCost__Create(v93, 0, 0, 0);
          if ( !this->fields._Cost_k__BackingField )
            goto LABEL_156;
          WarBoardCost__UpdateClassCost(this->fields._Cost_k__BackingField, (WarBoardCost_o *)pieceComponent, 0);
          v95 = 1;
        }
        pieceComponent = (__int64)this->fields.pieceComponent;
        if ( !pieceComponent )
          goto LABEL_156;
        if ( (((*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)pieceComponent + 568LL))(
                 pieceComponent,
                 *(_QWORD *)(*(_QWORD *)pieceComponent + 576LL))
             & 1) != 0
           || forceUpdate)
          && !this->fields._isDead_k__BackingField )
        {
          pieceComponent = (__int64)this->fields.pieceComponent;
          if ( !pieceComponent )
            goto LABEL_156;
          (*(void (__fastcall **)(__int64, _BOOL4, _QWORD))(*(_QWORD *)pieceComponent + 552LL))(
            pieceComponent,
            v50,
            *(_QWORD *)(*(_QWORD *)pieceComponent + 560LL));
        }
        if ( v95 | (v67 | forceUpdate) & 1 && !this->fields._isDead_k__BackingField )
        {
          pieceComponent = (__int64)this->fields.pieceComponent;
          if ( !pieceComponent )
            goto LABEL_156;
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)pieceComponent + 472LL))(
            pieceComponent,
            *(_QWORD *)(*(_QWORD *)pieceComponent + 480LL));
        }
        pieceComponent = (__int64)this->fields._battleServant_k__BackingField;
        if ( !pieceComponent )
          goto LABEL_156;
        p_iconClassId_k__BackingField = &this->fields._iconClassId_k__BackingField;
        iconClassId_k__BackingField = this->fields._iconClassId_k__BackingField;
        v98 = forceUpdate;
        v100 = iconClassId_k__BackingField != BattleServantData__getClassId((BattleServantData_o *)pieceComponent, 0, 0)
            || v63;
        if ( v100 | v98 && !this->fields._isDead_k__BackingField )
        {
          v101 = this->fields.pieceComponent;
          if ( v101
            && (naturalAligment = WarBoardServantPieceComponent_TypeInfo->_2.naturalAligment,
                v101->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
          {
            if ( (WarBoardServantPieceComponent_c *)v101->klass->_2.typeHierarchy[naturalAligment - 1] == WarBoardServantPieceComponent_TypeInfo )
              v103 = (UnityEngine_Object_o *)this->fields.pieceComponent;
            else
              v103 = 0;
          }
          else
          {
            v103 = 0;
          }
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28, v99);
          pieceComponent = UnityEngine_Object__op_Inequality(v103, 0, 0);
          if ( (pieceComponent & 1) != 0 )
          {
            v105 = this->fields._battleServant_k__BackingField;
            if ( !v105 )
              goto LABEL_156;
            v106 = *(_QWORD *)&v105->fields.svtId.fields.currentCryptoKey;
            v107 = *(_QWORD *)&v105->fields.svtId.fields.fakeValue;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v28, v104);
            *(_QWORD *)&v145.fields.currentCryptoKey = v106;
            *(_QWORD *)&v145.fields.fakeValue = v107;
            v108 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55792412(v145, 0);
            v109 = this->fields.serverServantData;
            this->fields._iconId_k__BackingField = v108;
            if ( v109 && NpcSvtType__IsEnemy(v109->fields.npcSvtType, 0) )
            {
              pieceComponent = (__int64)this->fields._battleServant_k__BackingField;
              if ( !pieceComponent )
                goto LABEL_156;
              pieceComponent = BattleServantData__getLimitCount((BattleServantData_o *)pieceComponent, 0);
            }
            else
            {
              pieceComponent = (__int64)this->fields._battleServant_k__BackingField;
              if ( !pieceComponent )
                goto LABEL_156;
              pieceComponent = BattleServantData__GetIconImageLimitCount((BattleServantData_o *)pieceComponent, 0);
            }
            v110 = this->fields._battleServant_k__BackingField;
            this->fields._iconLimitCount_k__BackingField = pieceComponent;
            if ( !v110 )
              goto LABEL_156;
            pieceComponent = BattleServantData__getClassId(v110, 0, 0);
            v112 = this->fields._battleServant_k__BackingField;
            this->fields._iconClassId_k__BackingField = pieceComponent;
            if ( !v112 )
              goto LABEL_156;
            v113 = DataManager_TypeInfo;
            frameType_k__BackingField = v112->fields._frameType_k__BackingField;
            level = v112->fields.level;
            v116 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
            this->fields._iconFrameType_k__BackingField = frameType_k__BackingField;
            this->fields._iconLevel_k__BackingField = level;
            if ( !v116 )
              j_il2cpp_runtime_class_init_0(v113, v28, v111);
            pieceComponent = (__int64)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ServantClassMaster___);
            if ( !pieceComponent )
              goto LABEL_156;
            pieceComponent = DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)pieceComponent,
                               &entity,
                               *p_iconClassId_k__BackingField,
                               (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
            if ( (pieceComponent & 1) != 0 )
            {
              if ( !entity )
                goto LABEL_156;
              p_iconClassId_k__BackingField = (int32_t *)&entity[2].monitor + 1;
            }
            this->fields._IconClassImageId_k__BackingField = *p_iconClassId_k__BackingField;
            if ( !v103 )
              goto LABEL_156;
            WarBoardServantPieceComponent__SetServantIcon((WarBoardServantPieceComponent_o *)v103, 0);
            ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *))v103->klass[1]._1.declaringType)(
              v103,
              v103->klass[1]._1.parent);
            ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *))v103->klass[1]._1.element_class)(
              v103,
              v103->klass[1]._1.castClass);
          }
        }
        if ( (v69 || v98) && !this->fields._isDead_k__BackingField )
        {
          pieceComponent = (__int64)this->fields.pieceComponent;
          if ( !pieceComponent )
            goto LABEL_156;
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)pieceComponent + 584LL))(
            pieceComponent,
            *(_QWORD *)(*(_QWORD *)pieceComponent + 592LL));
        }
        pieceComponent = (__int64)this->fields.pieceComponent;
        if ( pieceComponent )
        {
          WarBoardPieceBaseComponent__UpdateUiByBuffChanged((WarBoardPieceBaseComponent_o *)pieceComponent, 0);
          if ( isDead_k__BackingField )
            return;
          v117 = sub_21FFEBC(WarBoardPieceData___c__DisplayClass316_0_TypeInfo);
          System_Object___ctor((Il2CppObject *)v117, 0);
          if ( !v117 )
            goto LABEL_156;
          *(_BYTE *)(v117 + 16) = 0;
          v118 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
          System_Func_bool____ctor(
            v118,
            (Il2CppObject *)v117,
            Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__2__,
            0);
          v119 = (UnityEngine_WaitUntil_o *)sub_21FFEBC(UnityEngine_WaitUntil_TypeInfo);
          UnityEngine_WaitUntil___ctor(v119, v118, 0);
          v120 = sub_21FFEBC(WarBoardCallbackTask_TypeInfo);
          WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v120, (UnityEngine_CustomYieldInstruction_o *)v119, 0);
          if ( !v120 )
            goto LABEL_156;
          v121 = (System_Delegate_o **)(v120 + 32);
          v122 = *(System_Delegate_o **)(v120 + 32);
          v123 = (WarBoardTaskBase_TaskCallback_o *)sub_21FFEBC(WarBoardTaskBase_TaskCallback_TypeInfo);
          WarBoardTaskBase_TaskCallback___ctor(
            v123,
            (Il2CppObject *)v117,
            Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__3__,
            0);
          v124 = System_Delegate__Combine(v122, (System_Delegate_o *)v123, 0);
          v131 = (int)v124;
          if ( v124 )
          {
            v132 = WarBoardTaskBase_TaskCallback_TypeInfo;
            if ( (WarBoardTaskBase_TaskCallback_c *)v124->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
            {
              *v121 = v124;
              if ( (WarBoardTaskBase_TaskCallback_c *)v124->klass == v132 )
              {
LABEL_140:
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v120 + 32), v131, v125, v126, v127, v128, v129, v130);
                Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
                pieceComponent = sub_21FFD10(WarBoardTaskBase___TypeInfo, 1);
                if ( !pieceComponent )
                  goto LABEL_156;
                v134 = pieceComponent;
                v135 = sub_21FFDA4(v120, *(_QWORD *)(*(_QWORD *)pieceComponent + 64LL));
                if ( !v135 )
                {
                  v143 = sub_21FFEF0(0, v136);
                  sub_21FFD90(v143, 0);
                }
                if ( !*(_DWORD *)(v134 + 24) )
                  sub_21FFED4(v135);
                *(_QWORD *)(v134 + 32) = v120;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v134 + 32), v120, v137, v138, v139, v140, v141, v142);
                if ( !Instance )
                  goto LABEL_156;
                WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 1, (WarBoardTaskBase_array *)v134, 0);
                return;
              }
            }
            sub_220024C(v124, v132, v125, v126);
          }
          *v121 = 0;
          goto LABEL_140;
        }
LABEL_156:
        sub_21FFECC(pieceComponent, v28);
      }
    }
    else
    {
      isDead_k__BackingField = this->fields._isDead_k__BackingField;
      if ( serverServantData )
        goto LABEL_38;
    }
    v69 = 0;
    goto LABEL_54;
  }
  masterInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.masterInfo;
  v12 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_WarBoardUserMasterData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)this,
    Method_WarBoardPieceData__UpdateFromServerData_b__316_0__,
    0);
  v13 = (struct WarBoardUserMasterData_o *)System_Linq_Enumerable__FirstOrDefault_object__59044732(
                                             masterInfo,
                                             (System_Func_TSource__bool__o *)v12,
                                             (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
  if ( v13 )
  {
    defeatPoint = v13->fields.defeatPoint;
    v21 = v13;
    if ( this->fields._breakPoint_k__BackingField > defeatPoint )
    {
      this->fields._breakPoint_k__BackingField = defeatPoint;
      if ( defeatPoint <= 0 )
        this->fields._isDead_k__BackingField = 1;
    }
    p_serverMasterData_k__BackingField = &this->fields._serverMasterData_k__BackingField;
    serverMasterData_k__BackingField = this->fields._serverMasterData_k__BackingField;
    if ( serverMasterData_k__BackingField )
      v24 = serverMasterData_k__BackingField->fields.commandSpellNum != v13->fields.commandSpellNum;
    else
      v24 = 1;
    this->fields._serverMasterData_k__BackingField = v13;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields._serverMasterData_k__BackingField,
      (int32_t)v13,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    if ( this->fields._currentActionCount_k__BackingField == v21->fields.currentLimitActionPoint )
    {
      v58 = this->fields._Cost_k__BackingField;
      v59 = this->fields._serverMasterData_k__BackingField;
      if ( v58 )
      {
        if ( !v59 )
          goto LABEL_156;
        v60 = v58->fields._CurrentActionPoint_k__BackingField != v59->fields.currentPieceActionPoint;
      }
      else
      {
        v60 = 0;
        if ( !v59 )
          goto LABEL_156;
      }
    }
    else
    {
      v59 = *p_serverMasterData_k__BackingField;
      v60 = 1;
      if ( !*p_serverMasterData_k__BackingField )
        goto LABEL_156;
    }
    pieceComponent = (__int64)this->fields._Cost_k__BackingField;
    *(int32x2_t *)&this->fields._limitActionCount_k__BackingField = vrev64_s32(*(int32x2_t *)&v59->fields.currentLimitActionPoint);
    v70 = v59->fields.squareIndex;
    this->fields._attackCount_k__BackingField = v59->fields.attackCount;
    this->fields._nowSquareIndex_k__BackingField = v70;
    if ( !pieceComponent )
      goto LABEL_156;
    v71 = forceUpdate;
    WarBoardCost__UpdateCurrentPointByServerData(
      (WarBoardCost_o *)pieceComponent,
      v59->fields.currentPieceActionPoint,
      0);
    if ( !this->fields._forceId_k__BackingField
      && !this->fields._groupId_k__BackingField
      && this->fields._type_k__BackingField == 1
      && (v24 || v71) )
    {
      v73 = this->fields.pieceComponent;
      if ( v73
        && (v74 = WarBoardMasterPieceComponent_TypeInfo->_2.naturalAligment,
            v73->klass->_2.naturalAligment >= (unsigned int)v74) )
      {
        v75 = (WarBoardMasterPieceComponent_c *)v73->klass->_2.typeHierarchy[v74 - 1] == WarBoardMasterPieceComponent_TypeInfo
            ? (UnityEngine_Object_o *)this->fields.pieceComponent
            : 0LL;
      }
      else
      {
        v75 = 0;
      }
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28, v72);
      pieceComponent = UnityEngine_Object__op_Inequality(v75, 0, 0);
      if ( (pieceComponent & 1) != 0 )
      {
        if ( !*p_serverMasterData_k__BackingField || !v75 )
          goto LABEL_156;
        WarBoardMasterPieceComponent__SetCommandSpellRemain(
          (WarBoardMasterPieceComponent_o *)v75,
          (*p_serverMasterData_k__BackingField)->fields.commandSpellNum,
          0);
      }
    }
    if ( (v60 || v71) && !this->fields._isDead_k__BackingField )
    {
      pieceComponent = (__int64)this->fields.pieceComponent;
      if ( pieceComponent )
      {
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)pieceComponent + 472LL))(
          pieceComponent,
          *(_QWORD *)(*(_QWORD *)pieceComponent + 480LL));
        return;
      }
      goto LABEL_156;
    }
  }
}


void WarBoardPieceData__UpdateWidgetDepth(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_21FFECC(0, method);
  WarBoardPieceBaseComponent__UpdateWidgetDepth(pieceComponent, 0);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPieceData__WallAttack(WarBoardPieceData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_21FFECC(0, *(_QWORD *)&squareIndex);
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, int32_t, const MethodInfo *))pieceComponent->klass->vtable._28_OnWallAttack.methodPtr)(
    pieceComponent,
    squareIndex,
    pieceComponent->klass->vtable._28_OnWallAttack.method);
}


bool WarBoardPieceData___ProcContinue_b__337_0(
        WarBoardPieceData_o *this,
        WarBoardPieceData_o *otherPiece,
        const MethodInfo *method)
{
  if ( !otherPiece )
    sub_21FFECC(this, 0);
  return !otherPiece->fields._forceId_k__BackingField
      && !otherPiece->fields._groupId_k__BackingField
      && otherPiece->fields._nowSquareIndex_k__BackingField != otherPiece->fields._PutSquareIndex_k__BackingField
      && otherPiece->fields._index_k__BackingField >= this->fields._index_k__BackingField;
}


bool WarBoardPieceData___SetInitinalData_b__315_0(
        WarBoardPieceData_o *this,
        WarBoardUserMasterData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.forceId == this->fields._forceId_k__BackingField
      && x->fields.groupId == this->fields._groupId_k__BackingField;
}


bool WarBoardPieceData___SetInitinalData_b__315_1(
        WarBoardPieceData_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.forceId == this->fields._forceId_k__BackingField
      && x->fields.groupId == this->fields._groupId_k__BackingField
      && x->fields.pieceIndex == this->fields._index_k__BackingField;
}


bool WarBoardPieceData___UpdateFromServerData_b__316_0(
        WarBoardPieceData_o *this,
        WarBoardUserMasterData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.forceId == this->fields._forceId_k__BackingField
      && x->fields.groupId == this->fields._groupId_k__BackingField;
}


bool WarBoardPieceData___UpdateFromServerData_b__316_1(
        WarBoardPieceData_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.forceId == this->fields._forceId_k__BackingField
      && x->fields.groupId == this->fields._groupId_k__BackingField
      && x->fields.pieceIndex == this->fields._index_k__BackingField;
}


WarBoardActionPointEntity_o *WarBoardPieceData__get_ActionPointEntity(
        WarBoardPieceData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_5936150 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_WarBoardActionPointMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5936150 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_WarBoardActionPointMaster___);
  if ( !Master_object )
    sub_21FFECC(0, v5);
  return WarBoardActionPointMaster__GetEntity(
           (WarBoardActionPointMaster_o *)Master_object,
           this->fields.stageId,
           this->fields._forceId_k__BackingField,
           this->fields._groupId_k__BackingField,
           0);
}


int32_t WarBoardPieceData__get_ActionType(WarBoardPieceData_o *this, const MethodInfo *method)
{
  int32_t result; // w0

  result = this->fields._overwriteActionType_k__BackingField;
  if ( result <= 0 )
    return this->fields._actionType_k__BackingField;
  return result;
}


int32_t WarBoardPieceData__get_AiTargetSortPrimeIndex(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return 3;
}


int32_t WarBoardPieceData__get_AiTargetSortSecondIndex(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._index_k__BackingField;
}


int32_t WarBoardPieceData__get_AttackValue(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleServant_k__BackingField; // x8

  battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
  if ( battleServant_k__BackingField )
    return battleServant_k__BackingField->fields.atk;
  else
    return 0;
}


BattleBuffData_o *WarBoardPieceData__get_BuffData(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleServant_k__BackingField; // x8

  battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
  if ( battleServant_k__BackingField )
    return battleServant_k__BackingField->fields.buffData;
  else
    return 0;
}


WarBoardPieceBaseComponent_o *WarBoardPieceData__get_Component(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields.pieceComponent;
}


int32_t WarBoardPieceData__get_ConsumedRecoverDonotActCost(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._ConsumedRecoverDonotActCost_k__BackingField;
}


WarBoardCost_o *WarBoardPieceData__get_Cost(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._Cost_k__BackingField;
}


int32_t WarBoardPieceData__get_CriticalStars(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardUserServantData_o *serverServantData; // x8

  serverServantData = this->fields.serverServantData;
  if ( serverServantData )
    return serverServantData->fields.criticalStars;
  else
    return 0;
}


int32_t WarBoardPieceData__get_CurrentHp(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleServant_k__BackingField; // x0

  battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
  if ( battleServant_k__BackingField )
    LODWORD(battleServant_k__BackingField) = ((__int64 (__fastcall *)(struct BattleServantData_o *, const MethodInfo *))battleServant_k__BackingField->klass->vtable._9_get_hp.methodPtr)(
                                               battleServant_k__BackingField,
                                               battleServant_k__BackingField->klass->vtable._9_get_hp.method);
  return (int)battleServant_k__BackingField;
}


float WarBoardPieceData__get_CurrentHpProgress(WarBoardPieceData_o *this, const MethodInfo *method)
{
  float MaxHp; // s8
  struct BattleServantData_o *battleServant_k__BackingField; // x0
  int v5; // w0
  BattleServantData_o *v6; // x8
  int v7; // w19

  MaxHp = 1.0;
  battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
  if ( battleServant_k__BackingField )
  {
    v5 = ((__int64 (__fastcall *)(struct BattleServantData_o *, const MethodInfo *))battleServant_k__BackingField->klass->vtable._9_get_hp.methodPtr)(
           battleServant_k__BackingField,
           battleServant_k__BackingField->klass->vtable._9_get_hp.method);
    v6 = this->fields._battleServant_k__BackingField;
    v7 = v5;
    if ( v6 )
      MaxHp = (float)BattleServantData__getMaxHp(v6, 0);
  }
  else
  {
    v7 = 0;
  }
  return (float)v7 / MaxHp;
}


float WarBoardPieceData__get_CurrentNpProgress(WarBoardPieceData_o *this, const MethodInfo *method)
{
  float result; // s0
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  int maxtpturn; // w9
  float lineMaxNp; // s1
  float np; // s0

  result = 0.0;
  battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
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


int64_t WarBoardPieceData__get_CurrentUserEquipId(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._CurrentUserEquipId_k__BackingField;
}


bool WarBoardPieceData__get_HasCost(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardCost_o *Cost_k__BackingField; // x0

  Cost_k__BackingField = this->fields._Cost_k__BackingField;
  if ( Cost_k__BackingField )
    LOBYTE(Cost_k__BackingField) = WarBoardCost__get_HasCost(Cost_k__BackingField, 0);
  return (char)Cost_k__BackingField;
}


int32_t WarBoardPieceData__get_IconClassImageId(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._IconClassImageId_k__BackingField;
}


bool WarBoardPieceData__get_IsAiTargetable(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return !this->fields._isDead_k__BackingField;
}


bool WarBoardPieceData__get_IsDispConsumedPieceActionPoint(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._IsDispConsumedPieceActionPoint_k__BackingField;
}


bool WarBoardPieceData__get_IsEnemyMonster(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardUserServantData_o *serverServantData; // x8

  serverServantData = this->fields.serverServantData;
  return serverServantData && NpcSvtType__IsEnemy(serverServantData->fields.npcSvtType, 0);
}


bool WarBoardPieceData__get_IsNpc(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._npcId_k__BackingField > 0;
}


bool WarBoardPieceData__get_IsPutInit(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return (unsigned int)this->fields._ReinfoId_k__BackingField >> 31;
}


bool WarBoardPieceData__get_IsReinforcement(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._ReinfoId_k__BackingField >= 0;
}


bool WarBoardPieceData__get_IsShadow(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._IsShadow_k__BackingField;
}


bool WarBoardPieceData__get_IsStageBoss(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardUserServantData_o *serverServantData; // x8

  serverServantData = this->fields.serverServantData;
  return serverServantData && serverServantData->fields.stageBossIdx > 0;
}


int32_t WarBoardPieceData__get_MaxHp(WarBoardPieceData_o *this, const MethodInfo *method)
{
  BattleServantData_o *battleServant_k__BackingField; // x0

  battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
  if ( battleServant_k__BackingField )
    return BattleServantData__getMaxHp(battleServant_k__BackingField, 0);
  else
    return 1;
}


int32_t WarBoardPieceData__get_NowSquareIndex(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._nowSquareIndex_k__BackingField;
}


int32_t WarBoardPieceData__get_NpcDisplayType(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardUserServantData_o *serverServantData; // x8

  serverServantData = this->fields.serverServantData;
  if ( serverServantData )
    return serverServantData->fields.displayType;
  else
    return 0;
}


WarBoardPieceData_RouteSaveData_o *WarBoardPieceData__get_PrevAiRoute(
        WarBoardPieceData_o *this,
        const MethodInfo *method)
{
  return this->fields._PrevAiRoute_k__BackingField;
}


int32_t WarBoardPieceData__get_PutSquareIndex(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._PutSquareIndex_k__BackingField;
}


int32_t WarBoardPieceData__get_ReinfoId(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._ReinfoId_k__BackingField;
}


int32_t WarBoardPieceData__get_ReinfoIndex(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._ReinfoIndex_k__BackingField;
}


int32_t WarBoardPieceData__get_StageBossIdx(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardUserServantData_o *serverServantData; // x8

  serverServantData = this->fields.serverServantData;
  if ( !serverServantData )
    sub_21FFECC(this, method);
  return serverServantData->fields.stageBossIdx;
}


int32_t WarBoardPieceData__get_StageReinfoId(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._StageReinfoId_k__BackingField;
}


int64_t WarBoardPieceData__get_UserServantEquipId(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._UserServantEquipId_k__BackingField;
}


int64_t WarBoardPieceData__get_UserServantId(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._UserServantId_k__BackingField;
}


int64_t WarBoardPieceData__get_WarBoardUserServantDataId(WarBoardPieceData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  WarBoardPieceData_o *v3; // x19
  struct WarBoardUserServantData_o *serverServantData; // x8
  __int128 v5; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+20h] [xbp-40h]

  v3 = this;
  if ( (byte_593614F & 1) == 0 )
  {
    this = (WarBoardPieceData_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_593614F = 1;
  }
  serverServantData = v3->fields.serverServantData;
  if ( !serverServantData )
    sub_21FFECC(this, method);
  v5 = *(_OWORD *)&serverServantData->fields.id.fields.fakeValue;
  *(_OWORD *)&v8.fields.currentCryptoKey = *(_OWORD *)&serverServantData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v8.fields.fakeValue = v5;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, method, v2);
  v7 = v8;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v7, 0);
}


int32_t WarBoardPieceData__get_actionType(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._actionType_k__BackingField;
}


int32_t WarBoardPieceData__get_attackCount(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._attackCount_k__BackingField;
}


BattleServantData_o *WarBoardPieceData__get_battleServant(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._battleServant_k__BackingField;
}


int32_t WarBoardPieceData__get_breakPoint(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._breakPoint_k__BackingField;
}


int32_t WarBoardPieceData__get_breakPointMax(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._breakPointMax_k__BackingField;
}


int32_t WarBoardPieceData__get_currentActionCount(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._currentActionCount_k__BackingField;
}


bool WarBoardPieceData__get_enableAction(WarBoardPieceData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  return WarBoardPieceData__HasVitalityToDoAnyActions(this, method)
      && !WarBoardPieceData__HasSelfMoveDisabledBuff(this, v3);
}


int32_t WarBoardPieceData__get_entryTurn(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._entryTurn_k__BackingField;
}


int32_t WarBoardPieceData__get_equipLimitCount(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._equipLimitCount_k__BackingField;
}


int32_t WarBoardPieceData__get_forceId(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._forceId_k__BackingField;
}


UnityEngine_GameObject_o *WarBoardPieceData__get_gameObject(WarBoardPieceData_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *pieceComponent; // x0

  pieceComponent = (UnityEngine_Component_o *)this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_21FFECC(0, method);
  return UnityEngine_Component__get_gameObject(pieceComponent, 0);
}


int32_t WarBoardPieceData__get_groupId(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._groupId_k__BackingField;
}


int32_t WarBoardPieceData__get_iconClassId(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._iconClassId_k__BackingField;
}


int32_t WarBoardPieceData__get_iconEquipId(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._iconEquipId_k__BackingField;
}


int32_t WarBoardPieceData__get_iconFrameType(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._iconFrameType_k__BackingField;
}


int32_t WarBoardPieceData__get_iconId(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._iconId_k__BackingField;
}


int32_t WarBoardPieceData__get_iconLevel(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._iconLevel_k__BackingField;
}


int32_t WarBoardPieceData__get_iconLimitCount(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._iconLimitCount_k__BackingField;
}


int32_t WarBoardPieceData__get_index(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._index_k__BackingField;
}


System_Int32_array *WarBoardPieceData__get_individuality(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._individuality_k__BackingField;
}


bool WarBoardPieceData__get_isDead(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._isDead_k__BackingField;
}


bool WarBoardPieceData__get_isEditing(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._isEditing_k__BackingField;
}


bool WarBoardPieceData__get_isEnemyServant(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._forceId_k__BackingField && this->fields._type_k__BackingField == 0;
}


bool WarBoardPieceData__get_isInfinitelyActable(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._limitActionCount_k__BackingField < 1;
}


bool WarBoardPieceData__get_isMaster(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._type_k__BackingField == 1;
}


bool WarBoardPieceData__get_isNotIncludeWin(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._isNotIncludeWin_k__BackingField;
}


bool WarBoardPieceData__get_isPlayerGroup(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return !this->fields._forceId_k__BackingField && this->fields._groupId_k__BackingField == 0;
}


bool WarBoardPieceData__get_isPlayerMaster(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return !this->fields._forceId_k__BackingField
      && !this->fields._groupId_k__BackingField
      && this->fields._type_k__BackingField == 1;
}


bool WarBoardPieceData__get_isPlayerServant(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return !this->fields._forceId_k__BackingField
      && !this->fields._groupId_k__BackingField
      && this->fields._type_k__BackingField == 0;
}


bool WarBoardPieceData__get_isServant(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._type_k__BackingField == 0;
}


int32_t WarBoardPieceData__get_lastSquareIndex(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._lastSquareIndex_k__BackingField;
}


int32_t WarBoardPieceData__get_limitActionCount(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._limitActionCount_k__BackingField;
}


int32_t WarBoardPieceData__get_nowSquareIndex(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._nowSquareIndex_k__BackingField;
}


int32_t WarBoardPieceData__get_npcDispLimitCount(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._npcDispLimitCount_k__BackingField;
}


int64_t WarBoardPieceData__get_npcEquipId(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._npcEquipId_k__BackingField;
}


int64_t WarBoardPieceData__get_npcId(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._npcId_k__BackingField;
}


int32_t WarBoardPieceData__get_npcImageSvtId(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._npcImageSvtId_k__BackingField;
}


int32_t WarBoardPieceData__get_overwriteActionType(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._overwriteActionType_k__BackingField;
}


int32_t WarBoardPieceData__get_overwriteAiId(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._overwriteAiId_k__BackingField;
}


int32_t WarBoardPieceData__get_restrictionId(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._restrictionId_k__BackingField;
}


int32_t WarBoardPieceData__get_roleType(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._roleType_k__BackingField;
}


WarBoardUserMasterData_o *WarBoardPieceData__get_serverMasterData(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._serverMasterData_k__BackingField;
}


int32_t WarBoardPieceData__get_survivalTurn(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardData_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_593614D & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_593614D = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0 )
    sub_21FFECC(Instance, v4);
  return WarBoardData__get_TurnCount(Instance, 0) - this->fields._entryTurn_k__BackingField;
}


int32_t WarBoardPieceData__get_type(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._type_k__BackingField;
}


uint32_t WarBoardPieceData__get_uniqueIndex(WarBoardPieceData_o *this, const MethodInfo *method)
{
  return this->fields._uniqueIndex_k__BackingField;
}


void WarBoardPieceData__set_ConsumedRecoverDonotActCost(
        WarBoardPieceData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._ConsumedRecoverDonotActCost_k__BackingField = value;
}


void WarBoardPieceData__set_Cost(WarBoardPieceData_o *this, WarBoardCost_o *value, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._Cost_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._Cost_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardPieceData__set_CurrentUserEquipId(WarBoardPieceData_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._CurrentUserEquipId_k__BackingField = value;
}


void WarBoardPieceData__set_IconClassImageId(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._IconClassImageId_k__BackingField = value;
}


void WarBoardPieceData__set_IsDispConsumedPieceActionPoint(
        WarBoardPieceData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsDispConsumedPieceActionPoint_k__BackingField = value;
}


void WarBoardPieceData__set_IsShadow(WarBoardPieceData_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsShadow_k__BackingField = value;
}


void WarBoardPieceData__set_PrevAiRoute(
        WarBoardPieceData_o *this,
        WarBoardPieceData_RouteSaveData_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._PrevAiRoute_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._PrevAiRoute_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardPieceData__set_PutSquareIndex(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._PutSquareIndex_k__BackingField = value;
}


void WarBoardPieceData__set_ReinfoId(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._ReinfoId_k__BackingField = value;
}


void WarBoardPieceData__set_ReinfoIndex(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._ReinfoIndex_k__BackingField = value;
}


void WarBoardPieceData__set_StageReinfoId(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._StageReinfoId_k__BackingField = value;
}


void WarBoardPieceData__set_UserServantEquipId(WarBoardPieceData_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._UserServantEquipId_k__BackingField = value;
}


void WarBoardPieceData__set_UserServantId(WarBoardPieceData_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._UserServantId_k__BackingField = value;
}


void WarBoardPieceData__set_actionType(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._actionType_k__BackingField = value;
}


void WarBoardPieceData__set_attackCount(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._attackCount_k__BackingField = value;
}


void WarBoardPieceData__set_battleServant(
        WarBoardPieceData_o *this,
        BattleServantData_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._battleServant_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._battleServant_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardPieceData__set_breakPoint(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._breakPoint_k__BackingField = value;
}


void WarBoardPieceData__set_breakPointMax(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._breakPointMax_k__BackingField = value;
}


void WarBoardPieceData__set_currentActionCount(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._currentActionCount_k__BackingField = value;
}


void WarBoardPieceData__set_entryTurn(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._entryTurn_k__BackingField = value;
}


void WarBoardPieceData__set_equipLimitCount(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._equipLimitCount_k__BackingField = value;
}


void WarBoardPieceData__set_forceId(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._forceId_k__BackingField = value;
}


void WarBoardPieceData__set_groupId(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._groupId_k__BackingField = value;
}


void WarBoardPieceData__set_iconClassId(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._iconClassId_k__BackingField = value;
}


void WarBoardPieceData__set_iconEquipId(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._iconEquipId_k__BackingField = value;
}


void WarBoardPieceData__set_iconFrameType(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._iconFrameType_k__BackingField = value;
}


void WarBoardPieceData__set_iconId(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._iconId_k__BackingField = value;
}


void WarBoardPieceData__set_iconLevel(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._iconLevel_k__BackingField = value;
}


void WarBoardPieceData__set_iconLimitCount(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._iconLimitCount_k__BackingField = value;
}


void WarBoardPieceData__set_index(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._index_k__BackingField = value;
}


void WarBoardPieceData__set_individuality(
        WarBoardPieceData_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._individuality_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._individuality_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardPieceData__set_isDead(WarBoardPieceData_o *this, bool value, const MethodInfo *method)
{
  this->fields._isDead_k__BackingField = value;
}


void WarBoardPieceData__set_isEditing(WarBoardPieceData_o *this, bool value, const MethodInfo *method)
{
  this->fields._isEditing_k__BackingField = value;
}


void WarBoardPieceData__set_isNotIncludeWin(WarBoardPieceData_o *this, bool value, const MethodInfo *method)
{
  this->fields._isNotIncludeWin_k__BackingField = value;
}


void WarBoardPieceData__set_lastSquareIndex(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._lastSquareIndex_k__BackingField = value;
}


void WarBoardPieceData__set_limitActionCount(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._limitActionCount_k__BackingField = value;
}


void WarBoardPieceData__set_nowSquareIndex(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._nowSquareIndex_k__BackingField = value;
}


void WarBoardPieceData__set_npcDispLimitCount(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._npcDispLimitCount_k__BackingField = value;
}


void WarBoardPieceData__set_npcEquipId(WarBoardPieceData_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._npcEquipId_k__BackingField = value;
}


void WarBoardPieceData__set_npcId(WarBoardPieceData_o *this, int64_t value, const MethodInfo *method)
{
  this->fields._npcId_k__BackingField = value;
}


void WarBoardPieceData__set_npcImageSvtId(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._npcImageSvtId_k__BackingField = value;
}


void WarBoardPieceData__set_overwriteActionType(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._overwriteActionType_k__BackingField = value;
}


void WarBoardPieceData__set_overwriteAiId(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._overwriteAiId_k__BackingField = value;
}


void WarBoardPieceData__set_restrictionId(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._restrictionId_k__BackingField = value;
}


void WarBoardPieceData__set_roleType(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._roleType_k__BackingField = value;
}


void WarBoardPieceData__set_serverMasterData(
        WarBoardPieceData_o *this,
        WarBoardUserMasterData_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._serverMasterData_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields._serverMasterData_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardPieceData__set_type(WarBoardPieceData_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._type_k__BackingField = value;
}


void WarBoardPieceData__set_uniqueIndex(WarBoardPieceData_o *this, uint32_t value, const MethodInfo *method)
{
  this->fields._uniqueIndex_k__BackingField = value;
}


void WarBoardPieceData_PieceStatusCache___ctor(WarBoardPieceData_PieceStatusCache_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardPieceData_PieceStatusCache__ClearCache(
        WarBoardPieceData_PieceStatusCache_o *this,
        const MethodInfo *method)
{
  *(_DWORD *)&this->fields._HasAvailablePermanentSleepBuff_k__BackingField.fields.hasValue = 0;
}


void WarBoardPieceData_PieceStatusCache__SetEnable(
        WarBoardPieceData_PieceStatusCache_o *this,
        bool flg,
        const MethodInfo *method)
{
  *(_DWORD *)&this->fields._HasAvailablePermanentSleepBuff_k__BackingField.fields.hasValue = 0;
  this->fields._IsEnabled_k__BackingField = flg;
}


System_Nullable_bool__o WarBoardPieceData_PieceStatusCache__get_HasAvailablePermanentSleepBuff(
        WarBoardPieceData_PieceStatusCache_o *this,
        const MethodInfo *method)
{
  return this->fields._HasAvailablePermanentSleepBuff_k__BackingField;
}


System_Nullable_bool__o WarBoardPieceData_PieceStatusCache__get_HasCompletelyActionDisabledBuff(
        WarBoardPieceData_PieceStatusCache_o *this,
        const MethodInfo *method)
{
  return this->fields._HasCompletelyActionDisabledBuff_k__BackingField;
}


bool WarBoardPieceData_PieceStatusCache__get_IsEnabled(
        WarBoardPieceData_PieceStatusCache_o *this,
        const MethodInfo *method)
{
  return this->fields._IsEnabled_k__BackingField;
}


void WarBoardPieceData_PieceStatusCache__set_HasAvailablePermanentSleepBuff(
        WarBoardPieceData_PieceStatusCache_o *this,
        System_Nullable_bool__o value,
        const MethodInfo *method)
{
  this->fields._HasAvailablePermanentSleepBuff_k__BackingField = value;
}


void WarBoardPieceData_PieceStatusCache__set_HasCompletelyActionDisabledBuff(
        WarBoardPieceData_PieceStatusCache_o *this,
        System_Nullable_bool__o value,
        const MethodInfo *method)
{
  this->fields._HasCompletelyActionDisabledBuff_k__BackingField = value;
}


void WarBoardPieceData_PieceStatusCache__set_IsEnabled(
        WarBoardPieceData_PieceStatusCache_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsEnabled_k__BackingField = value;
}


void WarBoardPieceData_RouteSaveData___ctor(WarBoardPieceData_RouteSaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void WarBoardPieceData_RouteSaveData___ctor_45031892(
        WarBoardPieceData_RouteSaveData_o *this,
        int32_t inBaseIndex,
        int32_t inActionIndex,
        int64_t inFlagNow,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.baseIndex = inBaseIndex;
  this->fields.actionIndex = inActionIndex;
  this->fields.flagNow = inFlagNow;
}


int32_t WarBoardPieceData_RouteSaveData__get_ActionIndex(
        WarBoardPieceData_RouteSaveData_o *this,
        const MethodInfo *method)
{
  return this->fields.actionIndex;
}


int32_t WarBoardPieceData_RouteSaveData__get_BaseIndex(
        WarBoardPieceData_RouteSaveData_o *this,
        const MethodInfo *method)
{
  return this->fields.baseIndex;
}


int64_t WarBoardPieceData_RouteSaveData__get_FlagNow(WarBoardPieceData_RouteSaveData_o *this, const MethodInfo *method)
{
  return this->fields.flagNow;
}


bool WarBoardPieceData_RouteSaveData__get_notAction(WarBoardPieceData_RouteSaveData_o *this, const MethodInfo *method)
{
  return this->fields.baseIndex == this->fields.actionIndex;
}


void WarBoardPieceData_SaveData___ctor(WarBoardPieceData_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.consumedActionPointDateTime = 0;
  this->fields.consumedRecoverDonotActCostDateTime = 0;
  *(_OWORD *)&this->fields.forceId = xmmword_E93330;
}


void WarBoardPieceData_SaveData___ctor_45000728(
        WarBoardPieceData_SaveData_o *this,
        WarBoardPieceData_o *owner,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  const MethodInfo *v11; // x1
  __int64 v12; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct WarBoardPieceData_o *v19; // x0

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.owner = owner;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.owner, (int32_t)owner, v5, v6, v7, v8, v9, v10);
  WarBoardPieceData_SaveData__Save(this, v11);
  v19 = this->fields.owner;
  if ( !v19 )
    sub_21FFECC(0, v12);
  v19->fields.localSaveData = this;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v19->fields.localSaveData,
    (int32_t)this,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void WarBoardPieceData_SaveData__Load(WarBoardPieceData_SaveData_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct WarBoardPieceData_o *owner; // x0
  struct WarBoardPieceData_RouteSaveData_o *prevAiRoute; // x1
  int32_t breakPoint; // w8
  int32_t squareIndex; // w9
  int32_t actionCount; // w10
  MissionNaviTransitionBoardItem_o *p_PrevAiRoute_k__BackingField; // x0
  int32_t attackCount; // w8
  int64_t HasCost; // x0
  BattleServantData_o *v17; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct WarBoardPieceData_o *v24; // x8
  WarBoardCost_o *Cost_k__BackingField; // x0
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  int32_t currentForceActionPoint; // w10
  int32_t v28; // w11
  int32_t v29; // w9
  int32_t currentActionPoint; // w10
  struct WarBoardUserServantData_o *serverServantData; // x8
  struct BattleBuffData_SaveData_o *buffSave; // x1
  struct WarBoardPieceData_o *v33; // x8
  struct WarBoardUserServantData_o *v34; // x8
  int32_t criticalStars; // w11
  int32_t v36; // w12
  int32_t v37; // w9
  const MethodInfo_476E8C0 *v38; // x0
  __int64 v39; // x2
  struct WarBoardPieceData_o *v40; // x8
  struct WarBoardUserServantData_o *v41; // x8
  WarBoardManager_o *v42; // x20
  __int128 v43; // q1
  const MethodInfo *v44; // x2
  struct WarBoardPieceData_o *v45; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v46; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v47; // [xsp+20h] [xbp-40h]

  if ( (byte_593616E & 1) == 0 )
  {
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_593616E = 1;
  }
  owner = this->fields.owner;
  if ( owner )
  {
    prevAiRoute = this->fields.prevAiRoute;
    breakPoint = this->fields.breakPoint;
    squareIndex = this->fields.squareIndex;
    actionCount = this->fields.actionCount;
    owner->fields._PrevAiRoute_k__BackingField = prevAiRoute;
    p_PrevAiRoute_k__BackingField = (MissionNaviTransitionBoardItem_o *)&owner->fields._PrevAiRoute_k__BackingField;
    HIDWORD(p_PrevAiRoute_k__BackingField[-1].fields.sortValue1B) = breakPoint;
    attackCount = this->fields.attackCount;
    LODWORD(p_PrevAiRoute_k__BackingField[-1].fields.sortValue2B) = squareIndex;
    HIDWORD(p_PrevAiRoute_k__BackingField[-1].fields.sortValue1) = actionCount;
    LODWORD(p_PrevAiRoute_k__BackingField[-1].fields.sortStr1) = attackCount;
    sub_21FFBF4(p_PrevAiRoute_k__BackingField, (int32_t)prevAiRoute, v2, v3, v4, v5, v6, v7);
    v24 = this->fields.owner;
    if ( !v24 )
      goto LABEL_26;
    Cost_k__BackingField = v24->fields._Cost_k__BackingField;
    v24->fields._entryTurn_k__BackingField = this->fields.entryTurn;
    *(_QWORD *)&v24->fields._StageReinfoId_k__BackingField = *(_QWORD *)&this->fields.stageReinforcementId;
    *(_QWORD *)&v24->fields._overwriteActionType_k__BackingField = *(_QWORD *)&this->fields.overwriteActionType;
    if ( Cost_k__BackingField )
    {
      HasCost = WarBoardCost__get_HasCost(Cost_k__BackingField, 0);
      v24 = this->fields.owner;
      if ( (HasCost & 1) != 0 )
      {
        if ( !v24 )
          goto LABEL_26;
        HasCost = (int64_t)v24->fields._Cost_k__BackingField;
        if ( !HasCost )
          goto LABEL_26;
        WarBoardCost__UpdateCurrentPointBySaveData((WarBoardCost_o *)HasCost, this->fields.currentActionPoint, 0);
        v24 = this->fields.owner;
      }
      if ( !v24 )
        goto LABEL_26;
    }
    if ( v24->fields._type_k__BackingField == 1 )
    {
      serverMasterData_k__BackingField = v24->fields._serverMasterData_k__BackingField;
      if ( serverMasterData_k__BackingField )
      {
        currentForceActionPoint = this->fields.currentForceActionPoint;
        v28 = this->fields.squareIndex;
        serverMasterData_k__BackingField->fields.currentLimitActionPoint = this->fields.actionCount;
        v29 = this->fields.attackCount;
        serverMasterData_k__BackingField->fields.currentForceActionPoint = currentForceActionPoint;
        currentActionPoint = this->fields.currentActionPoint;
        serverMasterData_k__BackingField->fields.attackCount = v29;
        serverMasterData_k__BackingField->fields.squareIndex = v28;
        serverMasterData_k__BackingField->fields.defeatPoint = this->fields.breakPoint;
        serverMasterData_k__BackingField->fields.currentPieceActionPoint = currentActionPoint;
      }
      return;
    }
    serverServantData = v24->fields.serverServantData;
    if ( !serverServantData )
      return;
    buffSave = this->fields.buffSave;
    *(_QWORD *)&serverServantData->fields.squareIndex = *(_QWORD *)&this->fields.squareIndex;
    serverServantData->fields.buffDataSave = buffSave;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&serverServantData->fields.buffDataSave,
      (int32_t)buffSave,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
    v33 = this->fields.owner;
    if ( v33 )
    {
      v34 = v33->fields.serverServantData;
      if ( v34 )
      {
        v34->fields.attackCount = this->fields.attackCount;
        *(_QWORD *)&v34->fields.currentHp = *(_QWORD *)&this->fields.hp;
        criticalStars = this->fields.criticalStars;
        v36 = this->fields.currentActionPoint;
        v34->fields.nextNpTurn = this->fields.tdTurn;
        v37 = this->fields.breakPoint;
        v38 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__;
        v34->fields.criticalStars = criticalStars;
        v34->fields.currentPieceActionPoint = v36;
        v34->fields.defeatPoint = v37;
        HasCost = (int64_t)SingletonMonoBehaviour_object___get_Instance(v38);
        v40 = this->fields.owner;
        if ( v40 )
        {
          v41 = v40->fields.serverServantData;
          if ( v41 )
          {
            v42 = (WarBoardManager_o *)HasCost;
            v43 = *(_OWORD *)&v41->fields.id.fields.fakeValue;
            *(_OWORD *)&v47.fields.currentCryptoKey = *(_OWORD *)&v41->fields.id.fields.currentCryptoKey;
            *(_OWORD *)&v47.fields.fakeValue = v43;
            if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v17, v39);
            v46 = v47;
            HasCost = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v46, 0);
            if ( v42 )
            {
              HasCost = (int64_t)WarBoardManager__GetBattleServant(v42, HasCost, 0);
              v45 = this->fields.owner;
              if ( v45 )
              {
                v17 = (BattleServantData_o *)HasCost;
                HasCost = (int64_t)v45->fields.serverServantData;
                if ( HasCost )
                {
                  WarBoardUserServantData__SetBattleServantData((WarBoardUserServantData_o *)HasCost, v17, v44);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_26:
    sub_21FFECC(HasCost, v17);
  }
}


void WarBoardPieceData_SaveData__LoadOverwriteData(WarBoardPieceData_SaveData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceData_o *owner; // x8

  owner = this->fields.owner;
  if ( owner )
    *(_QWORD *)&owner->fields._overwriteActionType_k__BackingField = *(_QWORD *)&this->fields.overwriteActionType;
}


void WarBoardPieceData_SaveData__Save(WarBoardPieceData_SaveData_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct WarBoardPieceData_o *owner; // x8
  WarBoardPieceData_SaveData_o *v9; // x19
  int32_t breakPoint_k__BackingField; // w10
  int32_t nowSquareIndex_k__BackingField; // w11
  WarBoardCost_o *Cost_k__BackingField; // x0
  int32_t attackCount_k__BackingField; // w8
  int32_t currentActionCount_k__BackingField; // w9
  struct WarBoardPieceData_o *v15; // x8
  struct WarBoardCost_o *v16; // x8
  int32_t CurrentActionPoint_k__BackingField; // w8
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct WarBoardPieceData_o *v24; // x8
  struct WarBoardPieceData_RouteSaveData_o *PrevAiRoute_k__BackingField; // x1
  struct WarBoardPieceData_o *v26; // x8
  __int128 v27; // q0
  int32_t type_k__BackingField; // w9
  struct WarBoardUserServantData_o *serverServantData; // x9
  uint32_t consumedActionPointDateTime; // w10
  int32_t criticalStars; // w11
  uint32_t consumedRecoverDonotActCostDateTime; // w9
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  BattleBuffData_SaveData_o *SaveData; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  struct WarBoardPieceData_o *v41; // x8
  struct WarBoardPieceData_o *v42; // x8
  struct BattleServantData_o *v43; // x8
  int32_t np; // w9
  int32_t nexttpturn; // w8
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8

  owner = this->fields.owner;
  if ( !owner )
    goto LABEL_24;
  v9 = this;
  *(_QWORD *)&this->fields.forceId = *(_QWORD *)&owner->fields._forceId_k__BackingField;
  breakPoint_k__BackingField = owner->fields._breakPoint_k__BackingField;
  nowSquareIndex_k__BackingField = owner->fields._nowSquareIndex_k__BackingField;
  this->fields.pieceIndex = owner->fields._index_k__BackingField;
  this->fields.breakPoint = breakPoint_k__BackingField;
  Cost_k__BackingField = owner->fields._Cost_k__BackingField;
  currentActionCount_k__BackingField = owner->fields._currentActionCount_k__BackingField;
  attackCount_k__BackingField = owner->fields._attackCount_k__BackingField;
  v9->fields.squareIndex = nowSquareIndex_k__BackingField;
  v9->fields.actionCount = currentActionCount_k__BackingField;
  v9->fields.attackCount = attackCount_k__BackingField;
  if ( Cost_k__BackingField
    && (this = (WarBoardPieceData_SaveData_o *)WarBoardCost__get_HasCost(Cost_k__BackingField, 0),
        ((unsigned __int8)this & 1) != 0) )
  {
    v15 = v9->fields.owner;
    if ( !v15 )
      goto LABEL_24;
    v16 = v15->fields._Cost_k__BackingField;
    if ( !v16 )
      goto LABEL_24;
    CurrentActionPoint_k__BackingField = v16->fields._CurrentActionPoint_k__BackingField;
  }
  else
  {
    CurrentActionPoint_k__BackingField = 0;
  }
  v9->fields.buffSave = 0;
  v9->fields.consumedActionPointDateTime = 0;
  v9->fields.currentActionPoint = CurrentActionPoint_k__BackingField;
  v9->fields.consumedRecoverDonotActCostDateTime = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->fields.buffSave, 0, v2, v3, v4, v5, v6, v7);
  v24 = v9->fields.owner;
  v9->fields.currentForceActionPoint = 0;
  if ( !v24 )
    goto LABEL_24;
  PrevAiRoute_k__BackingField = v24->fields._PrevAiRoute_k__BackingField;
  v9->fields.prevAiRoute = PrevAiRoute_k__BackingField;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v9->fields.prevAiRoute,
    (int32_t)PrevAiRoute_k__BackingField,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v26 = v9->fields.owner;
  if ( !v26 )
    goto LABEL_24;
  v9->fields.entryTurn = v26->fields._entryTurn_k__BackingField;
  *(_QWORD *)&v27 = *(_QWORD *)&v26->fields._StageReinfoId_k__BackingField;
  *((_QWORD *)&v27 + 1) = *(_QWORD *)&v26->fields._overwriteActionType_k__BackingField;
  *(_OWORD *)&v9->fields.stageReinforcementId = v27;
  type_k__BackingField = v26->fields._type_k__BackingField;
  if ( type_k__BackingField == 1 )
  {
    serverMasterData_k__BackingField = v26->fields._serverMasterData_k__BackingField;
    if ( serverMasterData_k__BackingField )
      v9->fields.currentForceActionPoint = serverMasterData_k__BackingField->fields.currentForceActionPoint;
  }
  else if ( !type_k__BackingField )
  {
    serverServantData = v26->fields.serverServantData;
    if ( serverServantData )
    {
      consumedActionPointDateTime = serverServantData->fields.consumedActionPointDateTime;
      criticalStars = serverServantData->fields.criticalStars;
      consumedRecoverDonotActCostDateTime = serverServantData->fields.consumedRecoverDonotActCostDateTime;
      v9->fields.consumedActionPointDateTime = consumedActionPointDateTime;
      v9->fields.criticalStars = criticalStars;
      v9->fields.consumedRecoverDonotActCostDateTime = consumedRecoverDonotActCostDateTime;
    }
    battleServant_k__BackingField = v26->fields._battleServant_k__BackingField;
    if ( battleServant_k__BackingField )
    {
      this = (WarBoardPieceData_SaveData_o *)battleServant_k__BackingField->fields.buffData;
      if ( this )
      {
        SaveData = BattleBuffData__getSaveData((BattleBuffData_o *)this, 0);
        v9->fields.buffSave = SaveData;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v9->fields.buffSave,
          (int32_t)SaveData,
          v35,
          v36,
          v37,
          v38,
          v39,
          v40);
        v41 = v9->fields.owner;
        if ( v41 )
        {
          this = (WarBoardPieceData_SaveData_o *)v41->fields._battleServant_k__BackingField;
          if ( this )
          {
            this = (WarBoardPieceData_SaveData_o *)((__int64 (__fastcall *)(WarBoardPieceData_SaveData_o *, Il2CppClass *))this->klass[1]._1.declaringType)(
                                                     this,
                                                     this->klass[1]._1.parent);
            v42 = v9->fields.owner;
            v9->fields.hp = (int)this;
            if ( v42 )
            {
              v43 = v42->fields._battleServant_k__BackingField;
              if ( v43 )
              {
                np = v43->fields.np;
                nexttpturn = v43->fields.nexttpturn;
                v9->fields.np = np;
                v9->fields.tdTurn = nexttpturn;
                return;
              }
            }
          }
        }
      }
LABEL_24:
      sub_21FFECC(this, method);
    }
  }
}


void WarBoardPieceData_SaveData__SetOwner(
        WarBoardPieceData_SaveData_o *this,
        WarBoardData_o *data,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *Piece; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct WarBoardPieceData_o *owner; // x0

  if ( !data )
    sub_21FFECC(this, 0);
  Piece = WarBoardData__GetPiece(data, this->fields.forceId, this->fields.groupId, this->fields.pieceIndex, 0, 0);
  this->fields.owner = Piece;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.owner, (int32_t)Piece, v5, v6, v7, v8, v9, v10);
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields.localSaveData = this;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&owner->fields.localSaveData,
      (int32_t)this,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
}


void WarBoardPieceData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593616F & 1) == 0 )
  {
    sub_21FFC50(&WarBoardPieceData___c_TypeInfo);
    byte_593616F = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(WarBoardPieceData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardPieceData___c_TypeInfo->static_fields->__9 = (struct WarBoardPieceData___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)WarBoardPieceData___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardPieceData___c___ctor(WarBoardPieceData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t WarBoardPieceData___c___GetBuffTypesFromConstantStr_b__340_0(
        WarBoardPieceData___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x;
}


void WarBoardPieceData___c__DisplayClass223_0___ctor(
        WarBoardPieceData___c__DisplayClass223_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
WarBoardWallData_o *WarBoardPieceData___c__DisplayClass223_0___HasVitalityToDoAnyActions_b__0(
        WarBoardPieceData___c__DisplayClass223_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  WarBoardData_o *warBoardData; // x0

  warBoardData = this->fields.warBoardData;
  if ( !warBoardData )
    sub_21FFECC(0, *(_QWORD *)&x);
  return WarBoardData__GetWall(warBoardData, x, 0, 0);
}


void WarBoardPieceData___c__DisplayClass316_0___ctor(
        WarBoardPieceData___c__DisplayClass316_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardPieceData___c__DisplayClass316_0___UpdateFromServerData_b__2(
        WarBoardPieceData___c__DisplayClass316_0_o *this,
        const MethodInfo *method)
{
  return this->fields.popupClose;
}


void WarBoardPieceData___c__DisplayClass316_0___UpdateFromServerData_b__3(
        WarBoardPieceData___c__DisplayClass316_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  WarBoardManager_o *v5; // x20
  System_Action_bool__o *_9__4; // x22
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7

  if ( (byte_5936170 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_bool__TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__4__);
    byte_5936170 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v5 = (WarBoardManager_o *)Instance;
  _9__4 = this->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_bool__o *)sub_21FFEBC(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__4__,
      0);
    this->fields.__9__4 = _9__4;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__9__4, (int32_t)_9__4, v7, v8, v9, v10, v11, v12);
  }
  if ( !v5 )
    sub_21FFECC(Instance, v4);
  WarBoardManager__ShowActionCountDecreaseNoticePopup(v5, _9__4, 0);
}


void WarBoardPieceData___c__DisplayClass316_0___UpdateFromServerData_b__4(
        WarBoardPieceData___c__DisplayClass316_0_o *this,
        bool ok,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  WarBoardManager_o *v6; // x20
  System_Action_o *_9__5; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_5936171 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_21FFC50(&Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__5__);
    byte_5936171 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v6 = (WarBoardManager_o *)Instance;
  _9__5 = this->fields.__9__5;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)this,
      Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__5__,
      0);
    this->fields.__9__5 = _9__5;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__9__5, (int32_t)_9__5, v8, v9, v10, v11, v12, v13);
  }
  if ( !v6 )
    sub_21FFECC(Instance, v5);
  WarBoardManager__HideActionCountDecreaseNoticePopup(v6, _9__5, 0);
}


void WarBoardPieceData___c__DisplayClass316_0___UpdateFromServerData_b__5(
        WarBoardPieceData___c__DisplayClass316_0_o *this,
        const MethodInfo *method)
{
  this->fields.popupClose = 1;
}