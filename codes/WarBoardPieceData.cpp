void WarBoardPieceData___cctor(const MethodInfo *method)
{
  if ( (byte_4D2A316 & 1) == 0 )
  {
    sub_1C94098(&WarBoardPieceData_TypeInfo);
    byte_4D2A316 = 1;
  }
  *WarBoardPieceData_TypeInfo->static_fields = (struct WarBoardPieceData_StaticFields)xmmword_CFE140;
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
  Il2CppObject *v16; // x27
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int64_t Master_object; // x0
  const MethodInfo *v24; // x1
  int32_t pieceIndex; // w27
  int32_t forceId; // w21
  int32_t groupId; // w28
  int32_t squareIndex; // w8
  struct System_Int32_array *Individuality; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  int32_t breakPoint; // w8
  int32_t restrictionId; // w8
  struct BattleServantData_o **p_battleServant_k__BackingField; // x25
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  int32_t TurnCount; // w0
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x8
  WarBoardStagePieceDetailEntity_o *v53; // x8
  int32_t type_k__BackingField; // w8
  struct WarBoardUserMasterData_o **p_serverMasterData_k__BackingField; // x27
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  Il2CppObject *v57; // x26
  const MethodInfo *v58; // x1
  WarBoardActionPointClassEntity_o *MasterEntityFromStageId; // x0
  struct WarBoardCost_o *v60; // x0
  struct WarBoardCost_o **p_Cost_k__BackingField; // x26
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  struct WarBoardUserMasterData_o *v68; // x8
  struct WarBoardUserMasterData_o *v69; // x8
  int32_t defeatPoint; // w8
  Il2CppObject *Instance; // x0
  __int128 v72; // q1
  WarBoardManager_o *v73; // x26
  struct BattleServantData_o *BattleServant; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  System_String_o *v77; // x4
  int32_t v78; // w5
  int64_t v79; // x6
  System_String_o *v80; // x7
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  Il2CppObject *v87; // x26
  const MethodInfo *v88; // x1
  WarBoardActionPointEntity_o *v89; // x27
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  struct WarBoardCost_o *v91; // x0
  int32_t v92; // w2
  int32_t v93; // w3
  System_String_o *v94; // x4
  int32_t v95; // w5
  int64_t v96; // x6
  System_String_o *v97; // x7
  int32_t v98; // w8
  int32_t forceId_k__BackingField; // w9
  long double v100; // q0
  int64_t userEquipId; // x8
  __int64 v102; // x0
  __int64 v103; // x0
  __int64 v104; // x20
  __int64 v105; // x21
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t dropInfos_low; // x8
  __int64 v108; // x8
  int64_t npcSvtEquipId; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v111; // [xsp+10h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v112; // [xsp+30h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v113; // 0:x0.16

  if ( (byte_4D2A2FA & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&WarBoardPieceData_PieceStatusCache_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C94098(&WarBoardPieceData_TypeInfo);
    byte_4D2A2FA = 1;
  }
  v16 = (Il2CppObject *)sub_1C942E4(WarBoardPieceData_PieceStatusCache_TypeInfo);
  System_Object___ctor(v16, 0);
  this->fields.statusCache = (struct WarBoardPieceData_PieceStatusCache_o *)v16;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.statusCache, (int32_t)v16, v17, v18, v19, v20, v21, v22);
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !layout )
    goto LABEL_85;
  this->fields.stageId = layout->fields.stageId;
  pieceIndex = layout->fields.pieceIndex;
  this->fields._ReinfoId_k__BackingField = -1;
  *(_QWORD *)&this->fields._StageReinfoId_k__BackingField = -1;
  this->fields._type_k__BackingField = pieceIndex == 0;
  forceId = layout->fields.forceId;
  this->fields._forceId_k__BackingField = forceId;
  groupId = layout->fields.groupId;
  this->fields._groupId_k__BackingField = groupId;
  this->fields._index_k__BackingField = pieceIndex;
  if ( !WarBoardPieceData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo);
  this->fields._uniqueIndex_k__BackingField = (unsigned __int16)pieceIndex
                                            | ((unsigned __int8)forceId << 24)
                                            | ((unsigned __int8)groupId << 16);
  squareIndex = layout->fields.squareIndex;
  this->fields._nowSquareIndex_k__BackingField = squareIndex;
  this->fields._PutSquareIndex_k__BackingField = squareIndex;
  Individuality = WarBoardStageLayoutEntity__GetIndividuality(layout, 0);
  this->fields._individuality_k__BackingField = Individuality;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._individuality_k__BackingField,
    (int32_t)Individuality,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
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
  *(_QWORD *)&this->fields._overwriteActionType_k__BackingField = -1;
  breakPoint = layout->fields.breakPoint;
  this->fields._breakPoint_k__BackingField = breakPoint;
  this->fields._breakPointMax_k__BackingField = breakPoint;
  this->fields._actionType_k__BackingField = layout->fields.actionType;
  restrictionId = layout->fields.restrictionId;
  this->fields._battleServant_k__BackingField = 0;
  p_battleServant_k__BackingField = &this->fields._battleServant_k__BackingField;
  this->fields._restrictionId_k__BackingField = restrictionId;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._battleServant_k__BackingField,
    0,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  this->fields._isDead_k__BackingField = 0;
  this->fields._isEditing_k__BackingField = 0;
  this->fields._isNotIncludeWin_k__BackingField = 0;
  this->fields._roleType_k__BackingField = 0;
  this->fields._IsDispConsumedPieceActionPoint_k__BackingField = 0;
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_85;
  if ( *(_QWORD *)(Master_object + 440) )
  {
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    v53 = this->fields.stagePieceDetailEntity;
    this->fields._roleType_k__BackingField = Master_object;
    if ( !v53 )
      goto LABEL_85;
    this->fields._isNotIncludeWin_k__BackingField = WarBoardStagePieceDetailEntity__IsNotIncludeWin(v53, 0);
  }
  type_k__BackingField = this->fields._type_k__BackingField;
  if ( masterData && type_k__BackingField == 1 )
  {
    this->fields._serverMasterData_k__BackingField = masterData;
    p_serverMasterData_k__BackingField = &this->fields._serverMasterData_k__BackingField;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields._serverMasterData_k__BackingField,
      (int32_t)masterData,
      v45,
      v46,
      v47,
      v48,
      v49,
      v50);
    serverMasterData_k__BackingField = this->fields._serverMasterData_k__BackingField;
    if ( !serverMasterData_k__BackingField )
      goto LABEL_85;
    this->fields._nowSquareIndex_k__BackingField = serverMasterData_k__BackingField->fields.squareIndex;
    *(int32x2_t *)&this->fields._limitActionCount_k__BackingField = vrev64_s32(*(int32x2_t *)&serverMasterData_k__BackingField->fields.currentLimitActionPoint);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v57 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    Master_object = (int64_t)WarBoardPieceData__get_ActionPointEntity(this, v58);
    if ( !v57 )
      goto LABEL_85;
    MasterEntityFromStageId = WarBoardActionPointClassMaster__GetMasterEntityFromStageId(
                                (WarBoardActionPointClassMaster_o *)v57,
                                (WarBoardActionPointEntity_o *)Master_object,
                                0);
    v60 = WarBoardCost__Create(MasterEntityFromStageId, this->fields.stagePieceDetailEntity, 0, 0);
    this->fields._Cost_k__BackingField = v60;
    p_Cost_k__BackingField = &this->fields._Cost_k__BackingField;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields._Cost_k__BackingField,
      (int32_t)v60,
      v62,
      v63,
      v64,
      v65,
      v66,
      v67);
    v68 = this->fields._serverMasterData_k__BackingField;
    if ( !v68 )
      goto LABEL_85;
    Master_object = (int64_t)*p_Cost_k__BackingField;
    if ( !*p_Cost_k__BackingField )
      goto LABEL_85;
    WarBoardCost__UpdateCurrentPointByServerData(
      (WarBoardCost_o *)Master_object,
      v68->fields.currentPieceActionPoint,
      0);
    v69 = *p_serverMasterData_k__BackingField;
    if ( !*p_serverMasterData_k__BackingField )
      goto LABEL_85;
    this->fields._attackCount_k__BackingField = v69->fields.attackCount;
    defeatPoint = v69->fields.defeatPoint;
    this->fields._breakPoint_k__BackingField = defeatPoint;
    if ( defeatPoint <= 0 )
LABEL_40:
      this->fields._isDead_k__BackingField = 1;
  }
  else if ( servantData && !type_k__BackingField )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v72 = *(_OWORD *)&servantData->fields.id.fields.fakeValue;
    v73 = (WarBoardManager_o *)Instance;
    *(_OWORD *)&v112.fields.currentCryptoKey = *(_OWORD *)&servantData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v112.fields.fakeValue = v72;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    v111 = v112;
    Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v111, 0);
    if ( !v73 )
      goto LABEL_85;
    BattleServant = WarBoardManager__GetBattleServant(v73, Master_object, 0);
    this->fields._battleServant_k__BackingField = BattleServant;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields._battleServant_k__BackingField,
      (int32_t)BattleServant,
      v75,
      v76,
      v77,
      v78,
      v79,
      v80);
    this->fields.serverServantData = servantData;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.serverServantData,
      (int32_t)servantData,
      v81,
      v82,
      v83,
      v84,
      v85,
      v86);
    this->fields._nowSquareIndex_k__BackingField = servantData->fields.squareIndex;
    *(int32x2_t *)&this->fields._limitActionCount_k__BackingField = vrev64_s32(*(int32x2_t *)&servantData->fields.currentActionPoint);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v87 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    Master_object = (int64_t)WarBoardPieceData__get_ActionPointEntity(this, v88);
    if ( !this->fields._battleServant_k__BackingField )
      goto LABEL_85;
    v89 = (WarBoardActionPointEntity_o *)Master_object;
    Master_object = BattleServantData__getClassId(this->fields._battleServant_k__BackingField, 0, 0);
    if ( !v87 )
      goto LABEL_85;
    EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                    (WarBoardActionPointClassMaster_o *)v87,
                                    v89,
                                    Master_object,
                                    0);
    v91 = WarBoardCost__Create(EntityFromActionPointEntity, this->fields.stagePieceDetailEntity, 0, 0);
    this->fields._Cost_k__BackingField = v91;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields._Cost_k__BackingField,
      (int32_t)v91,
      v92,
      v93,
      v94,
      v95,
      v96,
      v97);
    Master_object = (int64_t)this->fields._Cost_k__BackingField;
    if ( !Master_object )
      goto LABEL_85;
    WarBoardCost__UpdateCurrentPointByServerData(
      (WarBoardCost_o *)Master_object,
      servantData->fields.currentPieceActionPoint,
      0);
    this->fields._attackCount_k__BackingField = servantData->fields.attackCount;
    v98 = servantData->fields.defeatPoint;
    this->fields._breakPoint_k__BackingField = v98;
    if ( v98 < 0 )
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
                                 (const MethodInfo_35597F4 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    }
    else
    {
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
      sub_1C942F0(Master_object, v24);
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
    v102 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v102 + 309) & 1) == 0 )
      v102 = sub_1C6A12C(v100);
    v103 = *(_QWORD *)(*(_QWORD *)(v102 + 192) + 16LL);
    if ( (*(_BYTE *)(v103 + 309) & 1) == 0 )
      v103 = sub_1C6A12C(v100);
    Master_object = **(_QWORD **)(v103 + 184);
    if ( !Master_object )
      goto LABEL_85;
    Master_object = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserEquipMaster___);
    if ( !Master_object )
      goto LABEL_85;
    Master_object = (int64_t)DataMasterBase_object__object__long___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                               this->fields._CurrentUserEquipId_k__BackingField,
                               (const MethodInfo_345DA1C *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    if ( !Master_object )
      goto LABEL_85;
    v105 = *(_QWORD *)(Master_object + 32);
    v104 = *(_QWORD *)(Master_object + 40);
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v113.fields.currentCryptoKey = v105;
    *(_QWORD *)&v113.fields.fakeValue = v104;
    this->fields._iconId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v113, 0);
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
                                     (const MethodInfo_35597F4 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
        }
        else
        {
          Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
          v108 = *(_QWORD *)(Master_object + 48);
          if ( !v108 )
            goto LABEL_85;
          if ( *(_DWORD *)(v108 + 24) <= (unsigned int)npcIdx )
            sub_1C942F8(Master_object);
          dropInfos_low = *(_QWORD *)(v108 + 8LL * (unsigned int)npcIdx + 32);
        }
        this->fields._npcId_k__BackingField = dropInfos_low;
        npcSvtEquipId = servantData->fields.npcSvtEquipId;
        this->fields._isEditing_k__BackingField = 1;
        this->fields._npcEquipId_k__BackingField = npcSvtEquipId;
      }
LABEL_83:
      WarBoardPieceData__SetServantIconData(this, v24);
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


void WarBoardPieceData___ctor_38793060(
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
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int64_t Instance; // x0
  const MethodInfo *v25; // x1
  int32_t id; // w8
  int32_t v27; // w8
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
  Il2CppObject *v39; // x0
  __int128 v40; // q0
  WarBoardManager_o *v41; // x24
  struct BattleServantData_o *BattleServant; // x0
  struct BattleServantData_o **p_battleServant_k__BackingField; // x24
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  int32_t v56; // w8
  Il2CppObject *Master_object; // x25
  const MethodInfo *v58; // x1
  WarBoardActionPointEntity_o *v59; // x26
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  struct WarBoardCost_o *v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  int32_t forceId_k__BackingField; // w9
  int defeatPoint; // w8
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t dropInfos_low; // x8
  __int64 v72; // x8
  int64_t npcSvtEquipId; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v74; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v75; // [xsp+20h] [xbp-90h]
  int32_t value; // [xsp+4Ch] [xbp-64h] BYREF

  if ( (byte_4D2A2FB & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&WarBoardPieceData_PieceStatusCache_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C94098(&WarBoardPieceData_TypeInfo);
    byte_4D2A2FB = 1;
  }
  value = 0;
  v17 = (Il2CppObject *)sub_1C942E4(WarBoardPieceData_PieceStatusCache_TypeInfo);
  System_Object___ctor(v17, 0);
  this->fields.statusCache = (struct WarBoardPieceData_PieceStatusCache_o *)v17;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.statusCache, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !stageReinforcementsEntity )
    goto LABEL_53;
  this->fields.stageId = stageReinforcementsEntity->fields.warBoardStageId;
  id = stageReinforcementsEntity->fields.id;
  this->fields._ReinfoIndex_k__BackingField = reinfoIndex;
  this->fields._StageReinfoId_k__BackingField = id;
  if ( !reinfoEntity )
    goto LABEL_53;
  v27 = reinfoEntity->fields.id;
  this->fields._type_k__BackingField = 0;
  this->fields._ReinfoId_k__BackingField = v27;
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
  this->fields._uniqueIndex_k__BackingField = (forceId << 24)
                                            | ((unsigned __int8)groupId << 16)
                                            | (unsigned __int16)pieceIndex;
  *(_QWORD *)&this->fields._overwriteActionType_k__BackingField = -1;
  Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_53;
  if ( *(_QWORD *)(Instance + 440) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  this->fields._breakPoint_k__BackingField = breakPoint;
  this->fields._breakPointMax_k__BackingField = breakPoint;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Instance = (int64_t)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
  specifyPieceIndexes = stageReinforcementsEntity->fields.specifyPieceIndexes;
  if ( !specifyPieceIndexes )
    goto LABEL_53;
  ReinfoIndex_k__BackingField = this->fields._ReinfoIndex_k__BackingField;
  if ( (unsigned int)ReinfoIndex_k__BackingField >= LODWORD(specifyPieceIndexes->max_length) )
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
         specifyPieceIndexes->m_Items[ReinfoIndex_k__BackingField],
         0) )
  {
    Instance = (int64_t)*p_stagePieceDetailEntity;
    if ( !*p_stagePieceDetailEntity )
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
  this->fields._isEditing_k__BackingField = 0;
  this->fields._IsDispConsumedPieceActionPoint_k__BackingField = 0;
  this->fields._actionType_k__BackingField = actionType;
  v39 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v40 = *(_OWORD *)&servantData->fields.id.fields.fakeValue;
  v41 = (WarBoardManager_o *)v39;
  *(_OWORD *)&v75.fields.currentCryptoKey = *(_OWORD *)&servantData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v75.fields.fakeValue = v40;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v74 = v75;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v74, 0);
  if ( !v41 )
    goto LABEL_53;
  BattleServant = WarBoardManager__GetBattleServant(v41, Instance, 0);
  this->fields._battleServant_k__BackingField = BattleServant;
  p_battleServant_k__BackingField = &this->fields._battleServant_k__BackingField;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._battleServant_k__BackingField,
    (int32_t)BattleServant,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  this->fields.serverServantData = servantData;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.serverServantData,
    (int32_t)servantData,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
  v56 = servantData->fields.squareIndex;
  this->fields._nowSquareIndex_k__BackingField = v56;
  this->fields._PutSquareIndex_k__BackingField = v56;
  *(int32x2_t *)&this->fields._limitActionCount_k__BackingField = vrev64_s32(*(int32x2_t *)&servantData->fields.currentActionPoint);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
  Instance = (int64_t)WarBoardPieceData__get_ActionPointEntity(this, v58);
  if ( !this->fields._battleServant_k__BackingField
    || (v59 = (WarBoardActionPointEntity_o *)Instance,
        Instance = BattleServantData__getClassId(this->fields._battleServant_k__BackingField, 0, 0),
        !Master_object)
    || (EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                        (WarBoardActionPointClassMaster_o *)Master_object,
                                        v59,
                                        Instance,
                                        0),
        v61 = WarBoardCost__Create(EntityFromActionPointEntity, this->fields.stagePieceDetailEntity, reinfoEntity, 0),
        this->fields._Cost_k__BackingField = v61,
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&this->fields._Cost_k__BackingField,
          (int32_t)v61,
          v62,
          v63,
          v64,
          v65,
          v66,
          v67),
        (Instance = (int64_t)this->fields._Cost_k__BackingField) == 0) )
  {
LABEL_53:
    sub_1C942F0(Instance, v25);
  }
  WarBoardCost__UpdateCurrentPointByServerData(
    (WarBoardCost_o *)Instance,
    servantData->fields.currentPieceActionPoint,
    0);
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
                            (const MethodInfo_35597F4 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    }
    else
    {
      Instance = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        this->fields._npcId_k__BackingField = dropInfos_low;
        npcSvtEquipId = servantData->fields.npcSvtEquipId;
        this->fields._isEditing_k__BackingField = 1;
        this->fields._npcEquipId_k__BackingField = npcSvtEquipId;
        goto LABEL_52;
      }
      goto LABEL_53;
    }
    if ( !Instance )
      goto LABEL_53;
    v72 = *(_QWORD *)(Instance + 48);
    if ( !v72 )
      goto LABEL_53;
    if ( *(_DWORD *)(v72 + 24) > (unsigned int)npcIdx )
    {
      dropInfos_low = *(_QWORD *)(v72 + 8LL * (unsigned int)npcIdx + 32);
      goto LABEL_51;
    }
LABEL_54:
    sub_1C942F8(Instance);
  }
LABEL_52:
  WarBoardPieceData__SetServantIconData(this, v25);
}


void WarBoardPieceData___ctor_38794272(
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
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int64_t Master_object; // x0
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
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  int32_t v50; // w8
  Il2CppObject *v51; // x24
  const MethodInfo *v52; // x1
  WarBoardActionPointEntity_o *v53; // x25
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  struct WarBoardCost_o *v55; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  int32_t forceId_k__BackingField; // w9
  int defeatPoint; // w8
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t dropInfos_low; // x8
  __int64 v66; // x8
  int64_t npcSvtEquipId; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v68; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v69; // [xsp+20h] [xbp-90h]
  int32_t value; // [xsp+44h] [xbp-6Ch] BYREF
  WarBoardReinforcementsEntity_o *reinforcementsEntity; // [xsp+48h] [xbp-68h] BYREF
  WarBoardStageReinforcementsEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_4D2A2FC & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&WarBoardPieceData_PieceStatusCache_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C94098(&WarBoardPieceData_TypeInfo);
    byte_4D2A2FC = 1;
  }
  entity = 0;
  reinforcementsEntity = 0;
  value = 0;
  v13 = (Il2CppObject *)sub_1C942E4(WarBoardPieceData_PieceStatusCache_TypeInfo);
  System_Object___ctor(v13, 0);
  this->fields.statusCache = (struct WarBoardPieceData_PieceStatusCache_o *)v13;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.statusCache, (int32_t)v13, v14, v15, v16, v17, v18, v19);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.stageId = stageId;
  if ( !saveData )
    goto LABEL_54;
  *(_QWORD *)&this->fields._StageReinfoId_k__BackingField = *(_QWORD *)&saveData->fields.stageReinforcementId;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
  if ( !Master_object )
    goto LABEL_54;
  WarBoardStageReinforcementsMaster__TryGetEntity(
    (WarBoardStageReinforcementsMaster_o *)Master_object,
    &entity,
    stageId,
    this->fields._StageReinfoId_k__BackingField,
    0);
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
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
  v24 = reinforcementsEntity;
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
    v24 = reinforcementsEntity;
  }
  this->fields._uniqueIndex_k__BackingField = (forceId << 24)
                                            | ((unsigned __int8)groupId << 16)
                                            | (unsigned __int16)pieceIndex;
  squareIndex = saveData->fields.squareIndex;
  this->fields._nowSquareIndex_k__BackingField = squareIndex;
  this->fields._PutSquareIndex_k__BackingField = squareIndex;
  *(_QWORD *)&this->fields._overwriteActionType_k__BackingField = *(_QWORD *)&saveData->fields.overwriteActionType;
  this->fields._entryTurn_k__BackingField = saveData->fields.entryTurn;
  if ( !v24 )
    goto LABEL_54;
  this->fields._breakPointMax_k__BackingField = v24->fields.breakPoint;
  Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
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
         0) )
  {
    Master_object = (int64_t)*p_stagePieceDetailEntity;
    if ( !*p_stagePieceDetailEntity )
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
  this->fields._isNotIncludeWin_k__BackingField = IsNotIncludeWin;
  Master_object = (int64_t)reinforcementsEntity;
  if ( !reinforcementsEntity )
    goto LABEL_54;
  if ( WarBoardReinforcementsEntity__TryGetRoleType(reinforcementsEntity, &value, 0) )
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
  this->fields._IsDispConsumedPieceActionPoint_k__BackingField = 0;
  Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !servantData )
    goto LABEL_54;
  v34 = *(_OWORD *)&servantData->fields.id.fields.fakeValue;
  v35 = (WarBoardManager_o *)Master_object;
  *(_OWORD *)&v69.fields.currentCryptoKey = *(_OWORD *)&servantData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v69.fields.fakeValue = v34;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v68 = v69;
  Master_object = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v68, 0);
  if ( !v35 )
    goto LABEL_54;
  BattleServant = WarBoardManager__GetBattleServant(v35, Master_object, 0);
  this->fields._battleServant_k__BackingField = BattleServant;
  p_battleServant_k__BackingField = &this->fields._battleServant_k__BackingField;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._battleServant_k__BackingField,
    (int32_t)BattleServant,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  this->fields.serverServantData = servantData;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.serverServantData,
    (int32_t)servantData,
    v44,
    v45,
    v46,
    v47,
    v48,
    v49);
  v50 = servantData->fields.squareIndex;
  this->fields._nowSquareIndex_k__BackingField = v50;
  this->fields._PutSquareIndex_k__BackingField = v50;
  *(int32x2_t *)&this->fields._limitActionCount_k__BackingField = vrev64_s32(*(int32x2_t *)&servantData->fields.currentActionPoint);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v51 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
  Master_object = (int64_t)WarBoardPieceData__get_ActionPointEntity(this, v52);
  if ( !this->fields._battleServant_k__BackingField
    || (v53 = (WarBoardActionPointEntity_o *)Master_object,
        Master_object = BattleServantData__getClassId(this->fields._battleServant_k__BackingField, 0, 0),
        !v51)
    || (EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                        (WarBoardActionPointClassMaster_o *)v51,
                                        v53,
                                        Master_object,
                                        0),
        v55 = WarBoardCost__Create(
                EntityFromActionPointEntity,
                this->fields.stagePieceDetailEntity,
                reinforcementsEntity,
                0),
        this->fields._Cost_k__BackingField = v55,
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&this->fields._Cost_k__BackingField,
          (int32_t)v55,
          v56,
          v57,
          v58,
          v59,
          v60,
          v61),
        (Master_object = (int64_t)this->fields._Cost_k__BackingField) == 0) )
  {
LABEL_54:
    sub_1C942F0(Master_object, v21);
  }
  WarBoardCost__UpdateCurrentPointByServerData(
    (WarBoardCost_o *)Master_object,
    servantData->fields.currentPieceActionPoint,
    0);
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
                                 (const MethodInfo_35597F4 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    }
    else
    {
      Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        this->fields._npcId_k__BackingField = dropInfos_low;
        npcSvtEquipId = servantData->fields.npcSvtEquipId;
        this->fields._isEditing_k__BackingField = 1;
        this->fields._npcEquipId_k__BackingField = npcSvtEquipId;
        goto LABEL_53;
      }
      goto LABEL_54;
    }
    if ( !Master_object )
      goto LABEL_54;
    v66 = *(_QWORD *)(Master_object + 48);
    if ( !v66 )
      goto LABEL_54;
    if ( *(_DWORD *)(v66 + 24) > (unsigned int)npcIdx )
    {
      dropInfos_low = *(_QWORD *)(v66 + 8LL * (unsigned int)npcIdx + 32);
      goto LABEL_52;
    }
LABEL_55:
    sub_1C942F8(Master_object);
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
    sub_1C942F0(Cost_k__BackingField, method);
  }
  ((void (__fastcall *)(WarBoardCost_o *, void *))Cost_k__BackingField->klass[1]._1.generic_class)(
    Cost_k__BackingField,
    Cost_k__BackingField->klass[1]._1.typeMetadataHandle);
}


void WarBoardPieceData__ActivateCacheMode(WarBoardPieceData_o *this, bool flg, const MethodInfo *method)
{
  struct WarBoardPieceData_PieceStatusCache_o *statusCache; // x8

  statusCache = this->fields.statusCache;
  if ( !statusCache )
    sub_1C942F0(this, flg);
  *(_DWORD *)&statusCache->fields._HasAvailablePermanentSleepBuff_k__BackingField.fields.hasValue = 0;
  statusCache->fields._IsEnabled_k__BackingField = flg;
}


void WarBoardPieceData__AddCriticalStar(WarBoardPieceData_o *this, int32_t count, const MethodInfo *method)
{
  struct WarBoardUserServantData_o *serverServantData; // x8
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  serverServantData = this->fields.serverServantData;
  if ( serverServantData )
  {
    serverServantData->fields.criticalStars += count;
    pieceComponent = this->fields.pieceComponent;
    if ( !pieceComponent )
      sub_1C942F0(0, count);
    ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, const MethodInfo *))pieceComponent->klass->vtable._17_ChangeCriticalStars.methodPtr)(
      pieceComponent,
      pieceComponent->klass->vtable._17_ChangeCriticalStars.method);
  }
}


void WarBoardPieceData__AfterAttack(WarBoardPieceData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_1C942F0(0, squareIndex);
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, int32_t, const MethodInfo *))pieceComponent->klass->vtable._27_OnAfterAttack.methodPtr)(
    pieceComponent,
    squareIndex,
    pieceComponent->klass->vtable._27_OnAfterAttack.method);
}


void WarBoardPieceData__AfterWallAttack(WarBoardPieceData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_1C942F0(0, squareIndex);
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, int32_t, const MethodInfo *))pieceComponent->klass->vtable._29_OnAfterWallAttack.methodPtr)(
    pieceComponent,
    squareIndex,
    pieceComponent->klass->vtable._29_OnAfterWallAttack.method);
}


// local variable allocation has failed, the output may be wrong!
void WarBoardPieceData__ApplyDisplayType(
        WarBoardPieceData_o *this,
        UISpriteAltMat_o *enemyIcon,
        const MethodInfo *method)
{
  struct WarBoardUserServantData_o *serverServantData; // x8
  int32_t displayType; // w8
  float v6; // s0 OVERLAPPED
  float v7; // s1
  float v8; // s2
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
            UIWidget__set_color((UIWidget_o *)enemyIcon, v11, 0);
            v9 = 1.0;
            v10 = (UIWidget_o *)enemyIcon;
            v6 = 0.05;
            v7 = 0.05;
            v8 = 0.05;
            goto LABEL_10;
          }
LABEL_12:
          sub_1C942F0(this, enemyIcon);
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
          UIWidget__set_color(v10, *(UnityEngine_Color_o *)&v6, 0);
          return;
        }
        goto LABEL_12;
    }
  }
}


void WarBoardPieceData__Attack(WarBoardPieceData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_1C942F0(0, squareIndex);
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
      sub_1C942F0(Cost_k__BackingField, method);
    }
  }
  --this->fields._currentActionCount_k__BackingField;
}


void WarBoardPieceData__AttackResume(WarBoardPieceData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_1C942F0(0, squareIndex);
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
    sub_1C942F0(pieceComponent, method);
  }
}


bool WarBoardPieceData__CheckWallAttackCond(
        WarBoardPieceData_o *this,
        WarBoardWallData_o *targetWall,
        const MethodInfo *method)
{
  long double inited; // q0
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

  if ( (byte_4D2A303 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_Empty_int___);
    sub_1C94098(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4D2A303 = 1;
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
    sub_1C6A188(Method_System_Array_Empty_int___);
    v9 = v8[7];
  }
  v10 = *(_QWORD *)(v9 + 16);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C6A12C(inited);
  if ( !*(_DWORD *)(v10 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v10);
  CondAttackIndividuality = *(System_Int32_array **)(v8[7] + 16LL);
  if ( (CondAttackIndividuality->m_Items[69] & 0x100) == 0 )
    CondAttackIndividuality = (System_Int32_array *)sub_1C6A12C(inited);
  if ( targetWall->fields.wallEntity )
  {
    CondAttackIndividuality = WarBoardStageWallEntity__GetCondAttackIndividuality(targetWall->fields.wallEntity, 0);
    v12 = CondAttackIndividuality;
    if ( CondAttackIndividuality )
      goto LABEL_17;
LABEL_27:
    sub_1C942F0(CondAttackIndividuality, targetWall);
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
      sub_1C942F8(Individuality);
    Individuality = (System_Int32_array *)System_Linq_Enumerable__Contains_int_(
                                            v15,
                                            v12->m_Items[v16],
                                            (const MethodInfo_31B9458 *)Method_System_Linq_Enumerable_Contains_int___);
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
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x9
  __int64 naturalAligment; // x12
  UnityEngine_Object_o *v5; // x19
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_4D2A30B & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&WarBoardServantPieceComponent_TypeInfo);
    byte_4D2A30B = 1;
  }
  pieceComponent = this->fields.pieceComponent;
  if ( pieceComponent
    && (naturalAligment = WarBoardServantPieceComponent_TypeInfo->_2.naturalAligment,
        pieceComponent->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (WarBoardServantPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[naturalAligment - 1] == WarBoardServantPieceComponent_TypeInfo )
      v5 = (UnityEngine_Object_o *)this->fields.pieceComponent;
    else
      v5 = 0;
  }
  else
  {
    v5 = 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(v5, 0, 0);
  if ( !v6 )
  {
    if ( !v5 )
      sub_1C942F0(v6, v7);
    WarBoardServantPieceComponent__ClearPartyBuff((WarBoardServantPieceComponent_o *)v5, 0);
  }
}


void WarBoardPieceData__ClearPrevAiRoute(WarBoardPieceData_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._PrevAiRoute_k__BackingField = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields._PrevAiRoute_k__BackingField, 0, v2, v3, v4, v5, v6, v7);
}


System_Int32_array *WarBoardPieceData__CreatePieceEventVals(WarBoardPieceData_o *this, const MethodInfo *method)
{
  System_Int32_array *result; // x0
  __int64 v4; // x1
  unsigned int max_length; // w8

  if ( (byte_4D2A315 & 1) == 0 )
  {
    sub_1C94098(&int___TypeInfo);
    byte_4D2A315 = 1;
  }
  result = (System_Int32_array *)sub_1C94140(int___TypeInfo, 3);
  if ( !result )
    sub_1C942F0(0, v4);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[0] = this->fields._forceId_k__BackingField, max_length == 1)
    || (result->m_Items[1] = this->fields._groupId_k__BackingField, max_length <= 2) )
  {
    sub_1C942F8(result);
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
    sub_1C942F0(0, method);
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
  unsigned int breakPoint_k__BackingField; // w22
  unsigned int v7; // w21
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  if ( (byte_4D2A306 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_WarBoardMessageMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&WarBoardManager_TaskList_TypeInfo);
    byte_4D2A306 = 1;
  }
  v3 = (WarBoardManager_TaskList_o *)sub_1C942E4(WarBoardManager_TaskList_TypeInfo);
  WarBoardManager_TaskList___ctor(v3, v4);
  breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
  v7 = breakPoint_k__BackingField - 1;
  if ( (int)(breakPoint_k__BackingField - 1) < 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
    pieceComponent = this->fields.pieceComponent;
    if ( pieceComponent )
    {
      ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, _QWORD, _QWORD, __int64, const MethodInfo *))pieceComponent->klass->vtable._31_OnBreak.methodPtr)(
        pieceComponent,
        breakPoint_k__BackingField,
        0,
        v3,
        v7,
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
    sub_1C942F0(pieceComponent, v5);
  }
  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    goto LABEL_12;
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, _QWORD, _QWORD, __int64, const MethodInfo *))pieceComponent->klass->vtable._31_OnBreak.methodPtr)(
    pieceComponent,
    breakPoint_k__BackingField,
    0,
    v3,
    v7,
    0,
    1,
    pieceComponent->klass->vtable._31_OnBreak.method);
  return v3;
}


void WarBoardPieceData__Deselect(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardData_o *pieceComponent; // x0
  WarBoardSquareData_o *Square; // x0

  if ( (byte_4D2A305 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2A305 = 1;
  }
  pieceComponent = (WarBoardData_o *)this->fields.pieceComponent;
  if ( !pieceComponent )
    goto LABEL_10;
  (*(void (__fastcall **)(WarBoardData_o *, Il2CppMethodPointer))&pieceComponent->klass[1]._2.naturalAligment)(
    pieceComponent,
    pieceComponent->klass[1].vtable._0_Equals.methodPtr);
  pieceComponent = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1C942F0(pieceComponent, method);
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
      sub_1C942F0(0, *(_QWORD *)&substructPoint);
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
      sub_1C942F0(0, *(_QWORD *)&substructPoint);
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
      sub_1C942F0(0, *(_QWORD *)&substructPoint);
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
      sub_1C942F0(0, *(_QWORD *)&substructPoint);
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
    sub_1C942F0(Cost_k__BackingField, method);
  p_currentActionCount_k__BackingField = &v4->fields._CurrentActionPoint_k__BackingField;
  return *p_currentActionCount_k__BackingField;
}


BuffList_TYPE_array *WarBoardPieceData__GetBuffTypesFromConstantStr(System_String_o *key, const MethodInfo *method)
{
  System_Int32_array *ValueAsIntArray; // x0
  long double inited; // q0
  System_Collections_Generic_IEnumerable_TSource__o *v5; // x19
  WarBoardPieceData___c_c *v6; // x0
  System_Func_T__TResult__o *_9__340_0; // x20
  Il2CppObject *v8; // x21
  struct WarBoardPieceData___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  BuffList_TYPE_array *result; // x0
  _QWORD *v18; // x19
  __int64 v19; // x8
  __int64 v20; // x0
  __int64 v21; // x0

  if ( (byte_4D2A313 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Array_Empty_BuffList_TYPE___);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_int__BuffList_TYPE___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_BuffList_TYPE___);
    sub_1C94098(&System_Func_int__BuffList_TYPE__TypeInfo);
    sub_1C94098(&Method_WarBoardPieceData___c__GetBuffTypesFromConstantStr_b__340_0__);
    sub_1C94098(&WarBoardPieceData___c_TypeInfo);
    byte_4D2A313 = 1;
  }
  ValueAsIntArray = ConstantStrMaster__GetValueAsIntArray(key, 0);
  if ( !ValueAsIntArray )
    goto LABEL_11;
  v5 = (System_Collections_Generic_IEnumerable_TSource__o *)ValueAsIntArray;
  v6 = WarBoardPieceData___c_TypeInfo;
  if ( !WarBoardPieceData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceData___c_TypeInfo);
    v6 = WarBoardPieceData___c_TypeInfo;
  }
  _9__340_0 = (System_Func_T__TResult__o *)v6->static_fields->__9__340_0;
  if ( !_9__340_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = WarBoardPieceData___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v6->static_fields->__9;
    _9__340_0 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_int__BuffList_TYPE__TypeInfo);
    System_Func_int__Int32Enum____ctor(
      _9__340_0,
      v8,
      Method_WarBoardPieceData___c__GetBuffTypesFromConstantStr_b__340_0__,
      0);
    static_fields = WarBoardPieceData___c_TypeInfo->static_fields;
    static_fields->__9__340_0 = (struct System_Func_int__BuffList_TYPE__o *)_9__340_0;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__340_0,
      (int32_t)_9__340_0,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__Int32Enum_(
                                                               v5,
                                                               (System_Func_TSource__TResult__o *)_9__340_0,
                                                               (const MethodInfo_31D005C *)Method_System_Linq_Enumerable_Select_int__BuffList_TYPE___);
  result = (BuffList_TYPE_array *)System_Linq_Enumerable__ToArray_Int32Enum_(
                                    v16,
                                    (const MethodInfo_31DC79C *)Method_System_Linq_Enumerable_ToArray_BuffList_TYPE___);
  if ( !result )
  {
LABEL_11:
    v18 = Method_System_Array_Empty_BuffList_TYPE___;
    v19 = *((_QWORD *)Method_System_Array_Empty_BuffList_TYPE___ + 7);
    if ( !v19 )
    {
      sub_1C6A188(Method_System_Array_Empty_BuffList_TYPE___);
      v19 = v18[7];
    }
    v20 = *(_QWORD *)(v19 + 16);
    if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
      v20 = sub_1C6A12C(inited);
    if ( !*(_DWORD *)(v20 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v20);
    v21 = *(_QWORD *)(v18[7] + 16LL);
    if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
      v21 = sub_1C6A12C(inited);
    return **(BuffList_TYPE_array ***)(v21 + 184);
  }
  return result;
}


int32_t WarBoardPieceData__GetDeadEffectType(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardReinforcementsMaster_o *Master_object; // x0
  __int64 v4; // x1
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x0
  int32_t value; // [xsp+4h] [xbp-2Ch] BYREF
  WarBoardReinforcementsEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2A30E & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D2A30E = 1;
  }
  entity = 0;
  value = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  if ( !Master_object )
    goto LABEL_13;
  if ( !WarBoardReinforcementsMaster__TryGetEntity(Master_object, &entity, this->fields._ReinfoId_k__BackingField, 0) )
    goto LABEL_10;
  Master_object = (WarBoardReinforcementsMaster_o *)entity;
  if ( !entity )
LABEL_13:
    sub_1C942F0(Master_object, v4);
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

  if ( (byte_4D2A2F5 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C94098(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D2A2F5 = 1;
  }
  v5 = (System_Collections_Generic_List_int__o *)sub_1C942E4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_384D5BC *)Method_System_Collections_Generic_List_int___ctor__);
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
      sub_1C942F0(ConcatServantAndBuffIndividualityies, v11);
    System_Collections_Generic_List_int___AddRange(
      v5,
      (System_Collections_Generic_IEnumerable_T__o *)ConcatServantAndBuffIndividualityies,
      (const MethodInfo_384E01C *)Method_System_Collections_Generic_List_int__AddRange__);
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
      (const MethodInfo_384E01C *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  return System_Collections_Generic_List_int___ToArray(
           v5,
           (const MethodInfo_384F8C8 *)Method_System_Collections_Generic_List_int__ToArray__);
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
      sub_1C942F0(Cost_k__BackingField, method);
    }
    return this->fields._limitActionCount_k__BackingField;
  }
  return result;
}


int32_t WarBoardPieceData__GetMoveAfterAttack(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardReinforcementsMaster_o *Master_object; // x0
  __int64 v4; // x1
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x0
  int32_t type; // [xsp+4h] [xbp-2Ch] BYREF
  WarBoardReinforcementsEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2A30F & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D2A30F = 1;
  }
  entity = 0;
  type = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  if ( !Master_object )
    goto LABEL_13;
  if ( !WarBoardReinforcementsMaster__TryGetEntity(Master_object, &entity, this->fields._ReinfoId_k__BackingField, 0) )
    goto LABEL_10;
  Master_object = (WarBoardReinforcementsMaster_o *)entity;
  if ( !entity )
LABEL_13:
    sub_1C942F0(Master_object, v4);
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
  WarBoardReinforcementsMaster_o *Master_object; // x0
  __int64 v4; // x1
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x0
  int32_t type; // [xsp+4h] [xbp-2Ch] BYREF
  WarBoardReinforcementsEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2A310 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D2A310 = 1;
  }
  entity = 0;
  type = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
  if ( !Master_object )
    goto LABEL_13;
  if ( !WarBoardReinforcementsMaster__TryGetEntity(Master_object, &entity, this->fields._ReinfoId_k__BackingField, 0) )
    goto LABEL_10;
  Master_object = (WarBoardReinforcementsMaster_o *)entity;
  if ( !entity )
LABEL_13:
    sub_1C942F0(Master_object, v4);
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
  bool HasAvailablePermanentSleepBuff; // w1
  struct System_Nullable_bool__o *v7; // x0
  struct System_Nullable_bool__o *p_HasAvailablePermanentSleepBuff_k__BackingField; // x0
  struct System_Nullable_bool__o v10; // [xsp+8h] [xbp-18h] BYREF
  struct System_Nullable_bool__o HasAvailablePermanentSleepBuff_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4D2A301 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Nullable_bool___ctor__);
    sub_1C94098(&Method_System_Nullable_bool__get_HasValue__);
    sub_1C94098(&Method_System_Nullable_bool__get_Value__);
    byte_4D2A301 = 1;
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
                                         0);
      v7 = &v10;
      v10 = 0;
      System_Nullable_bool____ctor(
        (System_Nullable_bool__o)v7,
        HasAvailablePermanentSleepBuff,
        (const MethodInfo_398FC8C *)Method_System_Nullable_bool___ctor__);
      statusCache->fields._HasAvailablePermanentSleepBuff_k__BackingField = v10;
      statusCache = this->fields.statusCache;
      if ( !statusCache )
LABEL_11:
        sub_1C942F0(battleServant_k__BackingField, method);
    }
    p_HasAvailablePermanentSleepBuff_k__BackingField = &HasAvailablePermanentSleepBuff_k__BackingField;
    HasAvailablePermanentSleepBuff_k__BackingField = statusCache->fields._HasAvailablePermanentSleepBuff_k__BackingField;
    LOBYTE(battleServant_k__BackingField) = System_Nullable_bool___get_Value(
                                              (System_Nullable_bool__o)p_HasAvailablePermanentSleepBuff_k__BackingField,
                                              (const MethodInfo_398FCA8 *)Method_System_Nullable_bool__get_Value__);
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
  WarBoardPieceData_o *v2; // x19
  struct WarBoardPieceData_PieceStatusCache_o *statusCache; // x8
  bool v4; // zf
  struct WarBoardPieceData_PieceStatusCache_o *v5; // x20
  bool HasAnyBuffByBuffTypes; // w1
  struct System_Nullable_bool__o *v7; // x0
  struct System_Nullable_bool__o *p_HasCompletelyActionDisabledBuff_k__BackingField; // x0
  struct System_Nullable_bool__o v11; // [xsp+8h] [xbp-18h] BYREF
  struct System_Nullable_bool__o HasCompletelyActionDisabledBuff_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  v2 = this;
  if ( (byte_4D2A302 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Nullable_bool___ctor__);
    sub_1C94098(&Method_System_Nullable_bool__get_HasValue__);
    sub_1C94098(&Method_System_Nullable_bool__get_Value__);
    sub_1C94098(&WarBoardPieceData_TypeInfo);
    this = (WarBoardPieceData_o *)sub_1C94098(&StringLiteral_15523/*"WAR_BOARD_ACTION_DISABLED_BUFF_TYPES"*/);
    byte_4D2A302 = 1;
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
                                      (System_String_o *)StringLiteral_15523/*"WAR_BOARD_ACTION_DISABLED_BUFF_TYPES"*/,
                                      method);
      if ( !v2->fields._battleServant_k__BackingField
        || (v5 = v2->fields.statusCache,
            HasAnyBuffByBuffTypes = BattleServantData__HasAnyBuffByBuffTypes(
                                      v2->fields._battleServant_k__BackingField,
                                      (BuffList_TYPE_array *)this,
                                      0),
            v7 = &v11,
            v11 = 0,
            System_Nullable_bool____ctor(
              (System_Nullable_bool__o)v7,
              HasAnyBuffByBuffTypes,
              (const MethodInfo_398FC8C *)Method_System_Nullable_bool___ctor__),
            !v5)
        || (v5->fields._HasCompletelyActionDisabledBuff_k__BackingField = v11,
            (statusCache = v2->fields.statusCache) == 0) )
      {
LABEL_16:
        sub_1C942F0(this, method);
      }
    }
    p_HasCompletelyActionDisabledBuff_k__BackingField = &HasCompletelyActionDisabledBuff_k__BackingField;
    HasCompletelyActionDisabledBuff_k__BackingField = statusCache->fields._HasCompletelyActionDisabledBuff_k__BackingField;
    return System_Nullable_bool___get_Value(
             (System_Nullable_bool__o)p_HasCompletelyActionDisabledBuff_k__BackingField,
             (const MethodInfo_398FCA8 *)Method_System_Nullable_bool__get_Value__);
  }
  else
  {
    return 0;
  }
}


bool WarBoardPieceData__HasSelfMoveDisabledBuff(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct BattleServantData_o *battleServant_k__BackingField; // x20
  const MethodInfo *v4; // x1

  battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
  if ( battleServant_k__BackingField && !WarBoardPieceData__HasAvailablePermanentSleepBuff(this, method) )
    return WarBoardPieceData__HasCompletelyActionDisabledBuff(this, v4);
  else
    return battleServant_k__BackingField != 0;
}


bool WarBoardPieceData__HasVitalityToDoAnyActions(WarBoardPieceData_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  WarBoardData_o *Instance; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
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

  if ( (byte_4D2A2F7 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Any_WarBoardWallData___);
    sub_1C94098(&Method_BasicHelper_ExcludeNull_WarBoardWallData___);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_int__WarBoardWallData___);
    sub_1C94098(&Method_System_Linq_Enumerable_ToArray_WarBoardWallData___);
    sub_1C94098(&System_Func_WarBoardWallData__bool__TypeInfo);
    sub_1C94098(&System_Func_int__WarBoardWallData__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C94098(&Method_WarBoardPieceData___c__DisplayClass223_0__HasVitalityToDoAnyActions_b__0__);
    sub_1C94098(&WarBoardPieceData___c__DisplayClass223_0_TypeInfo);
    sub_1C94098(&Method_WarBoardPieceData_CheckWallAttackCond__);
    byte_4D2A2F7 = 1;
  }
  v3 = sub_1C942E4(WarBoardPieceData___c__DisplayClass223_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  if ( !v3 )
    goto LABEL_19;
  playedStageReinforcementsList = Instance[1].fields.playedStageReinforcementsList;
  *(_QWORD *)(v3 + 16) = playedStageReinforcementsList;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)(v3 + 16),
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
    v15 = (System_Func_T__TResult__o *)sub_1C942E4(System_Func_int__WarBoardWallData__TypeInfo);
    System_Func_int__object____ctor(
      v15,
      (Il2CppObject *)v3,
      Method_WarBoardPieceData___c__DisplayClass223_0__HasVitalityToDoAnyActions_b__0__,
      0);
    v16 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__object_(
                                                           linkedSquares,
                                                           (System_Func_TSource__TResult__o *)v15,
                                                           (const MethodInfo_31D03C0 *)Method_System_Linq_Enumerable_Select_int__WarBoardWallData___);
    v17 = BasicHelper__ExcludeNull_object_(
            v16,
            (const MethodInfo_3185DBC *)Method_BasicHelper_ExcludeNull_WarBoardWallData___);
    v18 = System_Linq_Enumerable__ToArray_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v17,
            (const MethodInfo_31DC8AC *)Method_System_Linq_Enumerable_ToArray_WarBoardWallData___);
    if ( v18 )
    {
      v19 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_WarBoardWallData__bool__TypeInfo);
      System_Func_object__bool____ctor(v19, (Il2CppObject *)this, Method_WarBoardPieceData_CheckWallAttackCond__, 0);
      LOBYTE(v18) = BasicHelper__Any_object__51926292(
                      v18,
                      (System_Func_T__bool__o *)v19,
                      (const MethodInfo_3185514 *)Method_BasicHelper_Any_WarBoardWallData___);
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
    sub_1C942F0(Instance, v5);
  }
  return this->fields._limitActionCount_k__BackingField < 1 || this->fields._currentActionCount_k__BackingField > 0;
}


void WarBoardPieceData__HideActionTarget(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_1C942F0(0, method);
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


void WarBoardPieceData__Move(WarBoardPieceData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_1C942F0(0, squareIndex);
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
      sub_1C942F0(pieceComponent, method);
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
  WarBoardManager_TaskList_o *v8; // x20
  const MethodInfo *v9; // x1
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x23
  System_Nullable_float__o v11; // x0
  struct WarBoardPieceBaseComponent_o *v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct WarBoardManager_TaskList_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  const MethodInfo *v24; // x2
  System_Nullable_float__o v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  struct WarBoardManager_TaskList_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x0
  struct BattleServantData_o *battleServant_k__BackingField; // x20
  unsigned int MaxHp; // w0
  unsigned int v38; // w20
  int32_t type_k__BackingField; // w8
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  struct WarBoardUserServantData_o *serverServantData; // x8
  __int64 v42; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4D2A312 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__);
    sub_1C94098(&Method_System_Nullable_float___ctor__);
    sub_1C94098(&WarBoardManager_TaskList_TypeInfo);
    byte_4D2A312 = 1;
  }
  breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
  this->fields._breakPoint_k__BackingField = breakPoint_k__BackingField - 1;
  v8 = (WarBoardManager_TaskList_o *)sub_1C942E4(WarBoardManager_TaskList_TypeInfo);
  WarBoardManager_TaskList___ctor(v8, v9);
  pieceComponent = this->fields.pieceComponent;
  if ( ((breakPoint_k__BackingField - 1) & 0x80000000) == 0 )
  {
    v11 = (System_Nullable_float__o)&v42;
    v42 = 0;
    System_Nullable_float____ctor(v11, 1.0, (const MethodInfo_3995AEC *)Method_System_Nullable_float___ctor__);
    if ( pieceComponent )
    {
      v12 = (struct WarBoardPieceBaseComponent_o *)((__int64 (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, __int64, WarBoardManager_TaskList_o *, __int64, _QWORD, __int64, const MethodInfo *))pieceComponent->klass->vtable._31_OnBreak.methodPtr)(
                                                     pieceComponent,
                                                     breakPoint_k__BackingField,
                                                     v42,
                                                     v8,
                                                     0xFFFFFFFFLL,
                                                     0,
                                                     1,
                                                     pieceComponent->klass->vtable._31_OnBreak.method);
      if ( taskListBreak )
      {
        items = taskListBreak->fields._items;
        v21 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
        ++taskListBreak->fields._version;
        if ( items )
        {
          size = taskListBreak->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)taskListBreak,
              (Il2CppObject *)v8,
              *(const MethodInfo_386AE34 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &items->obj.klass + size;
            taskListBreak->fields._size = size + 1;
            v23[4] = (Il2CppClass *)v8;
            sub_1C9403C((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)v8, v14, v15, v16, v17, v18, v19);
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
          v38 = 1;
          goto LABEL_25;
        }
      }
    }
LABEL_28:
    sub_1C942F0(v12, v13);
  }
  v25 = (System_Nullable_float__o)&v42;
  v42 = 0;
  System_Nullable_float____ctor(v25, 1.0, (const MethodInfo_3995AEC *)Method_System_Nullable_float___ctor__);
  if ( !pieceComponent )
    goto LABEL_28;
  v12 = (struct WarBoardPieceBaseComponent_o *)((__int64 (__fastcall *)(struct WarBoardPieceBaseComponent_o *, __int64, WarBoardManager_TaskList_o *, __int64, const MethodInfo *))pieceComponent->klass->vtable._32_OnDead.methodPtr)(
                                                 pieceComponent,
                                                 v42,
                                                 v8,
                                                 1,
                                                 pieceComponent->klass->vtable._32_OnDead.method);
  if ( !taskListDead )
    goto LABEL_28;
  v32 = taskListDead->fields._items;
  v33 = Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__;
  ++taskListDead->fields._version;
  if ( !v32 )
    goto LABEL_28;
  v34 = taskListDead->fields._size;
  if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)taskListDead,
      (Il2CppObject *)v8,
      *(const MethodInfo_386AE34 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v35 = &v32->obj.klass + v34;
    taskListDead->fields._size = v34 + 1;
    v35[4] = (Il2CppClass *)v8;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)(v35 + 4), (int32_t)v8, v26, v27, v28, v29, v30, v31);
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
  v38 = 0;
LABEL_25:
  WarBoardPieceData__SetBreakPoint(this, this->fields._breakPoint_k__BackingField, v24);
  v12 = this->fields.pieceComponent;
  if ( !v12 )
    goto LABEL_28;
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, const MethodInfo *))v12->klass->vtable._15_ChangeStatus.methodPtr)(
    v12,
    v38,
    v12->klass->vtable._15_ChangeStatus.method);
  v12 = this->fields.pieceComponent;
  if ( !v12 )
    goto LABEL_28;
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, const MethodInfo *))v12->klass->vtable._10_UpdateDisplayActionCount.methodPtr)(
    v12,
    v12->klass->vtable._10_UpdateDisplayActionCount.method);
}


void WarBoardPieceData__OnDeadOnMap(
        WarBoardPieceData_o *this,
        bool cameraMove,
        WarBoardManager_TaskList_o *taskList,
        const MethodInfo *method)
{
  unsigned int breakPoint_k__BackingField; // w22
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x23
  System_Nullable_float__o v9; // x0
  __int64 v10; // x0
  __int64 v11; // x1
  _BOOL4 v12; // w21
  struct WarBoardPieceBaseComponent_o *v13; // x22
  System_Nullable_float__o v14; // x0
  int32_t type_k__BackingField; // w8
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  struct WarBoardUserServantData_o *serverServantData; // x8
  __int64 v18; // [xsp+8h] [xbp-48h] BYREF
  __int64 v19; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4D2A30D & 1) == 0 )
  {
    sub_1C94098(&Method_System_Nullable_float___ctor__);
    byte_4D2A30D = 1;
  }
  this->fields._isDead_k__BackingField = 1;
  breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
  pieceComponent = this->fields.pieceComponent;
  v9 = (System_Nullable_float__o)&v19;
  v19 = 0;
  System_Nullable_float____ctor(v9, 1.0, (const MethodInfo_3995AEC *)Method_System_Nullable_float___ctor__);
  if ( !pieceComponent
    || (v12 = cameraMove,
        ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, __int64, WarBoardManager_TaskList_o *, _QWORD, _QWORD, _BOOL4, const MethodInfo *))pieceComponent->klass->vtable._31_OnBreak.methodPtr)(
          pieceComponent,
          breakPoint_k__BackingField,
          v19,
          taskList,
          breakPoint_k__BackingField - 1,
          0,
          v12,
          pieceComponent->klass->vtable._31_OnBreak.method),
        v13 = this->fields.pieceComponent,
        v14 = (System_Nullable_float__o)&v18,
        v18 = 0,
        System_Nullable_float____ctor(v14, 1.0, (const MethodInfo_3995AEC *)Method_System_Nullable_float___ctor__),
        !v13) )
  {
    sub_1C942F0(v10, v11);
  }
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, __int64, WarBoardManager_TaskList_o *, _BOOL4, const MethodInfo *))v13->klass->vtable._32_OnDead.methodPtr)(
    v13,
    v18,
    taskList,
    v12,
    v13->klass->vtable._32_OnDead.method);
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

  if ( (byte_4D2A311 & 1) == 0 )
  {
    sub_1C94098(&System_Func_WarBoardPieceData__bool__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C94098(&Method_WarBoardPieceData__ProcContinue_b__337_0__);
    byte_4D2A311 = 1;
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
  pieceComponent = (UnityEngine_Component_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceComponent )
    goto LABEL_18;
  monitor = (WarBoardData_o *)pieceComponent[18].monitor;
  PutSquareIndex_k__BackingField = this->fields._PutSquareIndex_k__BackingField;
  nowSquareIndex_k__BackingField = this->fields._nowSquareIndex_k__BackingField;
  v9 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_WarBoardPieceData__bool__TypeInfo);
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
    sub_1C942F0(pieceComponent, method);
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
    sub_1C942F0(battleServant_k__BackingField, method);
  (*(void (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)battleServant_k__BackingField + 840LL))(
    battleServant_k__BackingField,
    0,
    *(_QWORD *)(*(_QWORD *)battleServant_k__BackingField + 848LL));
}


void WarBoardPieceData__Select(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardData_o *pieceComponent; // x0
  WarBoardSquareData_o *Square; // x0

  if ( (byte_4D2A304 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2A304 = 1;
  }
  pieceComponent = (WarBoardData_o *)this->fields.pieceComponent;
  if ( !pieceComponent )
    goto LABEL_10;
  (*(void (__fastcall **)(WarBoardData_o *, _QWORD))&pieceComponent->klass[1]._2.field_count)(
    pieceComponent,
    *(_QWORD *)&pieceComponent->klass[1]._2.interfaces_count);
  pieceComponent = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    sub_1C942F0(pieceComponent, method);
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
      sub_1C942F0(Cost_k__BackingField, *(_QWORD *)&ap);
    }
  }
  this->fields._currentActionCount_k__BackingField = ap;
}


void WarBoardPieceData__SetBreakPoint(WarBoardPieceData_o *this, int32_t bp, const MethodInfo *method)
{
  struct WarBoardPieceData_SaveData_o *localSaveData; // x8
  struct WarBoardUserServantData_o *serverServantData; // x8
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8

  localSaveData = this->fields.localSaveData;
  this->fields._breakPoint_k__BackingField = bp;
  if ( !localSaveData )
    sub_1C942F0(this, bp);
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


void WarBoardPieceData__SetComponent(
        WarBoardPieceData_o *this,
        WarBoardPieceBaseComponent_o *component,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.pieceComponent = component;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.pieceComponent,
    (int32_t)component,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void WarBoardPieceData__SetDeadSquareIndex(WarBoardPieceData_o *this, const MethodInfo *method)
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


void WarBoardPieceData__SetInitinalData(
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
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  Il2CppObject *Master_object; // x20
  const MethodInfo *v16; // x1
  WarBoardActionPointClassEntity_o *MasterEntityFromStageId; // x0
  WarBoardCost_o *v18; // x0
  GrandQuestFolderBoardItem_o *p_Cost_k__BackingField; // x19
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int64_t sortValue1; // x8
  int32_t v27; // w1
  System_Collections_Generic_IEnumerable_TSource__o *svtInfo; // x20
  System_Func_object__bool__o *v29; // x21
  Il2CppObject *v30; // x0
  struct WarBoardUserServantData_o **p_serverServantData; // x20
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  struct WarBoardUserServantData_o *serverServantData; // x8
  __int128 v39; // q1
  WarBoardPieceData_o *v40; // x21
  BattleServantData_o *BattleServant; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  const MethodInfo *v48; // x2
  struct WarBoardUserServantData_o *v49; // x8
  Il2CppObject *v50; // x20
  const MethodInfo *v51; // x1
  WarBoardActionPointEntity_o *v52; // x21
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x20
  WarBoardCost_o *v54; // x0
  GrandQuestFolderBoardItem_o *v55; // x19
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  int64_t sortValue0; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v63; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v64; // [xsp+20h] [xbp-50h]
  WarBoardReinforcementsEntity_o *entity; // [xsp+48h] [xbp-28h] BYREF

  v4 = this;
  if ( (byte_4D2A307 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
    sub_1C94098(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
    sub_1C94098(&System_Func_WarBoardUserMasterData__bool__TypeInfo);
    sub_1C94098(&System_Func_WarBoardUserServantData__bool__TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C94098(&Method_WarBoardPieceData__SetInitinalData_b__315_0__);
    this = (WarBoardPieceData_o *)sub_1C94098(&Method_WarBoardPieceData__SetInitinalData_b__315_1__);
    byte_4D2A307 = 1;
  }
  entity = 0;
  if ( !v4->fields._isDead_k__BackingField )
  {
    if ( warBoardDataEntity )
    {
      if ( v4->fields._type_k__BackingField == 1 )
      {
        masterInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.masterInfo;
        v6 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_WarBoardUserMasterData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v6,
          (Il2CppObject *)v4,
          Method_WarBoardPieceData__SetInitinalData_b__315_0__,
          0);
        v7 = System_Linq_Enumerable__FirstOrDefault_object__52191056(
               masterInfo,
               (System_Func_TSource__bool__o *)v6,
               (const MethodInfo_31C5F50 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
        v4->fields._serverMasterData_k__BackingField = (struct WarBoardUserMasterData_o *)v7;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&v4->fields._serverMasterData_k__BackingField,
          (int32_t)v7,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13);
        serverMasterData_k__BackingField = v4->fields._serverMasterData_k__BackingField;
        if ( serverMasterData_k__BackingField )
        {
          *(int32x2_t *)&v4->fields._limitActionCount_k__BackingField = vrev64_s32(*(int32x2_t *)&serverMasterData_k__BackingField->fields.currentLimitActionPoint);
          v4->fields._attackCount_k__BackingField = serverMasterData_k__BackingField->fields.attackCount;
          v4->fields._nowSquareIndex_k__BackingField = serverMasterData_k__BackingField->fields.squareIndex;
          if ( !DataManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
          this = (WarBoardPieceData_o *)WarBoardPieceData__get_ActionPointEntity(v4, v16);
          if ( Master_object )
          {
            MasterEntityFromStageId = WarBoardActionPointClassMaster__GetMasterEntityFromStageId(
                                        (WarBoardActionPointClassMaster_o *)Master_object,
                                        (WarBoardActionPointEntity_o *)this,
                                        0);
            v18 = WarBoardCost__Create(MasterEntityFromStageId, v4->fields.stagePieceDetailEntity, 0, 0);
            v4->fields._Cost_k__BackingField = v18;
            p_Cost_k__BackingField = (GrandQuestFolderBoardItem_o *)&v4->fields._Cost_k__BackingField;
            sub_1C9403C(p_Cost_k__BackingField, (int32_t)v18, v20, v21, v22, v23, v24, v25);
            sortValue1 = p_Cost_k__BackingField->fields.sortValue1;
            if ( sortValue1 )
            {
              this = (WarBoardPieceData_o *)p_Cost_k__BackingField->klass;
              if ( p_Cost_k__BackingField->klass )
              {
                v27 = *(_DWORD *)(sortValue1 + 72);
LABEL_27:
                WarBoardCost__UpdateCurrentPointByServerData((WarBoardCost_o *)this, v27, 0);
                return;
              }
            }
          }
        }
      }
      else
      {
        svtInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.svtInfo;
        v29 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_WarBoardUserServantData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v29,
          (Il2CppObject *)v4,
          Method_WarBoardPieceData__SetInitinalData_b__315_1__,
          0);
        v30 = System_Linq_Enumerable__FirstOrDefault_object__52191056(
                svtInfo,
                (System_Func_TSource__bool__o *)v29,
                (const MethodInfo_31C5F50 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
        v4->fields.serverServantData = (struct WarBoardUserServantData_o *)v30;
        p_serverServantData = &v4->fields.serverServantData;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&v4->fields.serverServantData,
          (int32_t)v30,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37);
        this = (WarBoardPieceData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        serverServantData = v4->fields.serverServantData;
        if ( serverServantData )
        {
          v39 = *(_OWORD *)&serverServantData->fields.id.fields.fakeValue;
          v40 = this;
          *(_OWORD *)&v64.fields.currentCryptoKey = *(_OWORD *)&serverServantData->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v64.fields.fakeValue = v39;
          if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          v63 = v64;
          this = (WarBoardPieceData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v63, 0);
          if ( v40 )
          {
            BattleServant = WarBoardManager__GetBattleServant((WarBoardManager_o *)v40, (int64_t)this, 0);
            v4->fields._battleServant_k__BackingField = BattleServant;
            sub_1C9403C(
              (GrandQuestFolderBoardItem_o *)&v4->fields._battleServant_k__BackingField,
              (int32_t)BattleServant,
              v42,
              v43,
              v44,
              v45,
              v46,
              v47);
            this = (WarBoardPieceData_o *)v4->fields.serverServantData;
            if ( this )
            {
              WarBoardUserServantData__FromBattleServantData(
                (WarBoardUserServantData_o *)this,
                v4->fields._battleServant_k__BackingField,
                v48);
              v49 = *p_serverServantData;
              if ( *p_serverServantData )
              {
                *(int32x2_t *)&v4->fields._limitActionCount_k__BackingField = vrev64_s32(*(int32x2_t *)&v49->fields.currentActionPoint);
                v4->fields._attackCount_k__BackingField = v49->fields.attackCount;
                v4->fields._nowSquareIndex_k__BackingField = v49->fields.squareIndex;
                if ( !DataManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                v50 = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
                this = (WarBoardPieceData_o *)WarBoardPieceData__get_ActionPointEntity(v4, v51);
                if ( v4->fields._battleServant_k__BackingField )
                {
                  v52 = (WarBoardActionPointEntity_o *)this;
                  this = (WarBoardPieceData_o *)BattleServantData__getClassId(
                                                  v4->fields._battleServant_k__BackingField,
                                                  0,
                                                  0);
                  if ( v50 )
                  {
                    EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                                    (WarBoardActionPointClassMaster_o *)v50,
                                                    v52,
                                                    (int32_t)this,
                                                    0);
                    this = (WarBoardPieceData_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
                    if ( this )
                    {
                      WarBoardReinforcementsMaster__TryGetEntity(
                        (WarBoardReinforcementsMaster_o *)this,
                        &entity,
                        v4->fields._ReinfoId_k__BackingField,
                        0);
                      v54 = WarBoardCost__Create(
                              EntityFromActionPointEntity,
                              v4->fields.stagePieceDetailEntity,
                              entity,
                              0);
                      v4->fields._Cost_k__BackingField = v54;
                      v55 = (GrandQuestFolderBoardItem_o *)&v4->fields._Cost_k__BackingField;
                      sub_1C9403C(v55, (int32_t)v54, v56, v57, v58, v59, v60, v61);
                      sortValue0 = v55->fields.sortValue0;
                      if ( sortValue0 )
                      {
                        this = (WarBoardPieceData_o *)v55->klass;
                        if ( v55->klass )
                        {
                          v27 = *(_DWORD *)(sortValue0 + 728);
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
    sub_1C942F0(this, warBoardDataEntity);
  }
}


void WarBoardPieceData__SetMasterEquip(WarBoardPieceData_o *this, int64_t userEquipId, const MethodInfo *method)
{
  long double v3; // q0
  __int64 v6; // x0
  __int64 v7; // x0
  Il2CppObject *MasterData_object; // x0
  void *monitor; // x20
  Il2CppClass *klass; // x21
  int32_t v11; // w0
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Object_o *v14; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v15; // 0:x0.16

  if ( (byte_4D2A2FE & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserEquipMaster___);
    sub_1C94098(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C94098(&WarBoardMasterPieceComponent_TypeInfo);
    byte_4D2A2FE = 1;
  }
  this->fields._CurrentUserEquipId_k__BackingField = userEquipId;
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C6A12C(v3);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C6A12C(v3);
  MasterData_object = **(Il2CppObject ***)(v7 + 184);
  if ( !MasterData_object )
    goto LABEL_24;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserEquipMaster___);
  if ( !MasterData_object )
    goto LABEL_24;
  MasterData_object = DataMasterBase_object__object__long___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                        this->fields._CurrentUserEquipId_k__BackingField,
                        (const MethodInfo_345DA1C *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  if ( !MasterData_object )
    goto LABEL_24;
  klass = MasterData_object[2].klass;
  monitor = MasterData_object[2].monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v15.fields.currentCryptoKey = klass;
  *(_QWORD *)&v15.fields.fakeValue = monitor;
  v11 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v15, 0);
  pieceComponent = this->fields.pieceComponent;
  this->fields._iconId_k__BackingField = v11;
  if ( pieceComponent
    && (naturalAligment = WarBoardMasterPieceComponent_TypeInfo->_2.naturalAligment,
        pieceComponent->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
  {
    if ( (WarBoardMasterPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[naturalAligment - 1] == WarBoardMasterPieceComponent_TypeInfo )
      v14 = (UnityEngine_Object_o *)pieceComponent;
    else
      v14 = 0;
  }
  else
  {
    v14 = 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  MasterData_object = (Il2CppObject *)UnityEngine_Object__op_Inequality(v14, 0, 0);
  if ( ((unsigned __int8)MasterData_object & 1) != 0 )
  {
    if ( v14 )
    {
      WarBoardMasterPieceComponent__SetMasterIcon((WarBoardMasterPieceComponent_o *)v14, 0);
      return;
    }
LABEL_24:
    sub_1C942F0(MasterData_object, userEquipId);
  }
}


void WarBoardPieceData__SetOverwriteActionType(WarBoardPieceData_o *this, int32_t actionType, const MethodInfo *method)
{
  Il2CppType *v5; // x21
  System_RuntimeTypeHandle_o v6; // x0
  System_Type_o *TypeFromHandle; // x21
  Il2CppObject *v8; // x22
  int32_t v9; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2A314 & 1) == 0 )
  {
    sub_1C94098(&WarBoardStageLayoutEntity_ActionType_var);
    sub_1C94098(&System_Enum_TypeInfo);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&System_Type_TypeInfo);
    byte_4D2A314 = 1;
  }
  v5 = WarBoardStageLayoutEntity_ActionType_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v6.fields.value = (intptr_t)v5;
  TypeFromHandle = System_Type__GetTypeFromHandle(v6, 0);
  v9 = actionType;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v9);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  if ( System_Enum__IsDefined(TypeFromHandle, v8, 0) )
    this->fields._overwriteActionType_k__BackingField = actionType;
}


void WarBoardPieceData__SetOverwriteAiId(WarBoardPieceData_o *this, int32_t aiId, const MethodInfo *method)
{
  this->fields._overwriteAiId_k__BackingField = aiId;
}


void WarBoardPieceData__SetPartyBuffLevel(WarBoardPieceData_o *this, int32_t level, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x9
  __int64 naturalAligment; // x12
  UnityEngine_Object_o *v7; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1

  if ( (byte_4D2A30A & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&WarBoardServantPieceComponent_TypeInfo);
    byte_4D2A30A = 1;
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v8 = UnityEngine_Object__op_Equality(v7, 0, 0);
  if ( !v8 )
  {
    if ( !v7 )
      sub_1C942F0(v8, v9);
    WarBoardServantPieceComponent__SetPartyBuffLevel((WarBoardServantPieceComponent_o *)v7, level, 0);
  }
}


void WarBoardPieceData__SetPieceEnable(WarBoardPieceData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_1C942F0(0, enable);
  WarBoardPieceBaseComponent__SetColliderEnable(pieceComponent, enable, 0);
}


void WarBoardPieceData__SetPrevAiRoute(
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
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  v4 = this;
  if ( (byte_4D2A30C & 1) == 0 )
  {
    this = (WarBoardPieceData_o *)sub_1C94098(&WarBoardPieceData_RouteSaveData_TypeInfo);
    byte_4D2A30C = 1;
  }
  if ( !prev )
    sub_1C942F0(this, prev);
  v5 = *(Il2CppClass **)&prev->fields.baseIndex;
  flagNow = prev->fields.flagNow;
  v7 = (Il2CppObject *)sub_1C942E4(WarBoardPieceData_RouteSaveData_TypeInfo);
  System_Object___ctor(v7, 0);
  v7[1].klass = v5;
  v7[1].monitor = (void *)flagNow;
  v4->fields._PrevAiRoute_k__BackingField = (struct WarBoardPieceData_RouteSaveData_o *)v7;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v4->fields._PrevAiRoute_k__BackingField,
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
  void *monitor; // x22
  Il2CppClass *klass; // x23
  int32_t *p_iconClassId_k__BackingField; // x21
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x9
  __int64 naturalAligment; // x12
  UnityEngine_Object_o *v14; // x20
  Il2CppObject *v15; // [xsp+0h] [xbp-40h] BYREF
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  if ( (byte_4D2A2FF & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C94098(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&WarBoardServantPieceComponent_TypeInfo);
    byte_4D2A2FF = 1;
  }
  v15 = 0;
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_35;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               userServantId,
                               (const MethodInfo_345DA68 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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
    this->fields._iconId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v17, 0);
    if ( overwriteLimitCount < 0 )
    {
      Instance = entity;
      if ( !entity )
        goto LABEL_35;
      overwriteLimitCount = UserServantEntity__getIconLimitCount((UserServantEntity_o *)entity, 0, 0);
    }
    this->fields._iconLimitCount_k__BackingField = overwriteLimitCount;
    Instance = entity;
    if ( !entity )
      goto LABEL_35;
    this->fields._iconClassId_k__BackingField = UserServantEntity__getSvtClassId((UserServantEntity_o *)entity, 0, 0, 0);
    p_iconClassId_k__BackingField = &this->fields._iconClassId_k__BackingField;
    Instance = entity;
    if ( !entity )
      goto LABEL_35;
    Instance = (Il2CppObject *)UserServantEntity__getFrameType((UserServantEntity_o *)entity, 0);
    this->fields._iconFrameType_k__BackingField = (int)Instance;
    if ( !entity )
      goto LABEL_35;
    this->fields._iconLevel_k__BackingField = (int32_t)entity[16].klass;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantClassMaster___);
    if ( !Instance )
LABEL_35:
      sub_1C942F0(Instance, v8);
    Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                 &v15,
                                 *p_iconClassId_k__BackingField,
                                 (const MethodInfo_345B50C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
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
    this->fields._UserServantId_k__BackingField = 0;
    this->fields._iconId_k__BackingField = 0;
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (Il2CppObject *)UnityEngine_Object__op_Inequality(v14, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( v14 )
    {
      WarBoardServantPieceComponent__SetServant((WarBoardServantPieceComponent_o *)v14, userServantId, 0);
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
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  void *monitor; // x21
  Il2CppClass *klass; // x22
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x9
  __int64 naturalAligment; // x12
  UnityEngine_Object_o *v11; // x20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v13; // 0:x0.16

  if ( (byte_4D2A300 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C94098(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C94098(&WarBoardServantPieceComponent_TypeInfo);
    byte_4D2A300 = 1;
  }
  entity = 0;
  this->fields._UserServantEquipId_k__BackingField = userServantEquipId;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_319C134 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_24;
  Instance = (Il2CppObject *)DataMasterBase_object__object__long___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               this->fields._UserServantEquipId_k__BackingField,
                               (const MethodInfo_345DA68 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
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
    Instance = (Il2CppObject *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v13, 0);
    this->fields._iconEquipId_k__BackingField = (int)Instance;
    if ( !entity )
      goto LABEL_24;
    this->fields._equipLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(
                                                      (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o)entity[6],
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
      v11 = (UnityEngine_Object_o *)this->fields.pieceComponent;
    else
      v11 = 0;
  }
  else
  {
    v11 = 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (Il2CppObject *)UnityEngine_Object__op_Inequality(v11, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( v11 )
    {
      WarBoardServantPieceComponent__SetServantEquip((WarBoardServantPieceComponent_o *)v11, userServantEquipId, 0);
      return;
    }
LABEL_24:
    sub_1C942F0(Instance, v6);
  }
}


void WarBoardPieceData__SetServantIconData(WarBoardPieceData_o *this, const MethodInfo *method)
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
  il2cpp_array_size_t max_length; // x9
  BattleUserServantData_o *v15; // x9
  __int64 v16; // x20
  __int64 v17; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v18; // x8
  struct BattleDeckServantData_o *deckSvt; // x20
  int32_t DispLimitCnt; // w0
  struct WarBoardUserServantData_o *v21; // x8
  bool v22; // w0
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  v2 = this;
  if ( (byte_4D2A2FD & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    this = (WarBoardPieceData_o *)sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4D2A2FD = 1;
  }
  entity = 0;
  battleServant_k__BackingField = v2->fields._battleServant_k__BackingField;
  if ( !battleServant_k__BackingField )
    goto LABEL_40;
  v5 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v4 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v24.fields.currentCryptoKey = v5;
  *(_QWORD *)&v24.fields.fakeValue = v4;
  v6 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v24, 0);
  serverServantData = v2->fields.serverServantData;
  v2->fields._iconId_k__BackingField = v6;
  if ( serverServantData && NpcSvtType__IsEnemy(serverServantData->fields.npcSvtType, 0) )
  {
    this = (WarBoardPieceData_o *)v2->fields._battleServant_k__BackingField;
    if ( !this )
      goto LABEL_40;
    this = (WarBoardPieceData_o *)BattleServantData__getLimitCount((BattleServantData_o *)this, 0);
  }
  else
  {
    this = (WarBoardPieceData_o *)v2->fields._battleServant_k__BackingField;
    if ( !this )
      goto LABEL_40;
    this = (WarBoardPieceData_o *)BattleServantData__GetIconImageLimitCount((BattleServantData_o *)this, 0);
  }
  v8 = v2->fields._battleServant_k__BackingField;
  v2->fields._iconLimitCount_k__BackingField = (int)this;
  if ( !v8 )
    goto LABEL_40;
  this = (WarBoardPieceData_o *)BattleServantData__getClassId(v8, 0, 0);
  v2->fields._iconClassId_k__BackingField = (int)this;
  p_iconClassId_k__BackingField = &v2->fields._iconClassId_k__BackingField;
  v10 = v2->fields._battleServant_k__BackingField;
  if ( !v10 )
    goto LABEL_40;
  v2->fields._iconFrameType_k__BackingField = v10->fields._frameType_k__BackingField;
  v2->fields._iconLevel_k__BackingField = v10->fields.level;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (WarBoardPieceData_o *)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantClassMaster___);
  if ( !this )
    goto LABEL_40;
  this = (WarBoardPieceData_o *)DataMasterBase_object__object__int___TryGetEntity(
                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                  &entity,
                                  *p_iconClassId_k__BackingField,
                                  (const MethodInfo_345B50C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
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
    max_length = equipList->max_length;
    if ( max_length )
    {
      if ( !(_DWORD)max_length )
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
      this = (WarBoardPieceData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v25, 0);
      v2->fields._iconEquipId_k__BackingField = (int)this;
      if ( !LODWORD(equipList->max_length) )
LABEL_41:
        sub_1C942F8(this);
      v18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)equipList->m_Items[0];
      if ( !v18
        || (this = (WarBoardPieceData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v18[6], 0),
            v12 = v2->fields._battleServant_k__BackingField,
            v2->fields._equipLimitCount_k__BackingField = (int)this,
            !v12) )
      {
LABEL_40:
        sub_1C942F0(this, method);
      }
    }
  }
LABEL_30:
  deckSvt = v12->fields.deckSvt;
  if ( deckSvt && *(_QWORD *)&deckSvt->fields.npcId )
  {
    v2->fields._npcImageSvtId_k__BackingField = BattleDeckServantData__GetImageSvtId(deckSvt, 0);
    DispLimitCnt = BattleDeckServantData__GetDispLimitCnt(deckSvt, 0);
    v21 = v2->fields.serverServantData;
    v2->fields._npcDispLimitCount_k__BackingField = DispLimitCnt;
    v22 = v21
       && v21->fields.displayType == 2
       && (v2->fields._npcImageSvtId_k__BackingField < 1 || BattleDeckServantData__IsShadow(deckSvt, 0));
    v2->fields._IsShadow_k__BackingField = v22;
  }
}


void WarBoardPieceData__SetServarData(WarBoardPieceData_o *this, const MethodInfo *method)
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
        HasCost = WarBoardCost__get_HasCost(Cost_k__BackingField, 0);
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
          sub_1C942F0(HasCost, v7);
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
        HasCost = WarBoardCost__get_HasCost(v11, 0);
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


void WarBoardPieceData__SetSquareIndex(WarBoardPieceData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  this->fields._nowSquareIndex_k__BackingField = squareIndex;
}


void WarBoardPieceData__SetTouchEnable(WarBoardPieceData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_1C942F0(0, enable);
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
      sub_1C942F0(0, v3);
    ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, const MethodInfo *))pieceComponent->klass->vtable._20_ShowActionTarget.methodPtr)(
      pieceComponent,
      pieceComponent->klass->vtable._20_ShowActionTarget.method);
  }
}


System_String_o *WarBoardPieceData__ToJson(WarBoardPieceData_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  Il2CppObject *serverMasterData_k__BackingField; // x19
  WarBoardUserServantData_o *serverServantData; // x0

  if ( (byte_4D2A309 & 1) == 0 )
  {
    sub_1C94098(&JsonManager_TypeInfo);
    sub_1C94098(&string_TypeInfo);
    byte_4D2A309 = 1;
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
  return JsonManager__toJson(serverMasterData_k__BackingField, 0, 0, 0);
}


void WarBoardPieceData__TurnEnd(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_1C942F0(0, method);
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, const MethodInfo *))pieceComponent->klass->vtable._9_HideActionCount.methodPtr)(
    pieceComponent,
    pieceComponent->klass->vtable._9_HideActionCount.method);
}


void WarBoardPieceData__TurnStart(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_1C942F0(0, method);
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
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
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
  int32_t monitor_high; // w25
  struct WarBoardUserServantData_o *v31; // x22
  __int64 v32; // x24
  __int64 pieceComponent; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  struct WarBoardPieceBaseComponent_o *v40; // x1
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  struct WarBoardData_WarBoardDeadBreakList_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  _BOOL4 v50; // w21
  Il2CppClass **v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  struct WarBoardCost_o *v58; // x8
  _BOOL4 v59; // w22
  struct WarBoardUserServantData_o *serverServantData; // x8
  struct WarBoardUserServantData_o **p_serverServantData; // x23
  _BOOL4 v62; // w26
  int32_t currentActionCount_k__BackingField; // w27
  int32_t currentActionPoint; // w29
  struct WarBoardPieceData_SaveData_o *localSaveData; // x9
  unsigned __int8 v66; // w28
  _BOOL4 v67; // w24
  _BOOL4 v68; // w25
  struct WarBoardUserMasterData_o *v69; // x8
  _BOOL4 v70; // w23
  _BOOL4 v71; // w8
  struct WarBoardPieceBaseComponent_o *v72; // x8
  __int64 v73; // x11
  UnityEngine_Object_o *v74; // x20
  bool v75; // w8
  WarBoardCost_o *Cost_k__BackingField; // x0
  struct WarBoardCost_o *v77; // x8
  const MethodInfo *v78; // x2
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  const MethodInfo *v80; // x2
  struct WarBoardUserServantData_o *v81; // x8
  int32_t squareIndex; // w8
  Il2CppObject *Master_object; // x22
  const MethodInfo *v84; // x1
  WarBoardActionPointEntity_o *v85; // x23
  struct WarBoardUserServantData_o *v86; // x8
  WarBoardActionPointClassEntity_o *v87; // x22
  WarBoardCost_o *v88; // x23
  int v89; // w22
  int32_t *p_iconClassId_k__BackingField; // x28
  int32_t iconClassId_k__BackingField; // w21
  _BOOL4 v92; // w23
  struct WarBoardPieceBaseComponent_o *v93; // x8
  __int64 naturalAligment; // x11
  UnityEngine_Object_o *v95; // x20
  struct BattleServantData_o *v96; // x8
  __int64 v97; // x21
  __int64 v98; // x22
  int32_t v99; // w0
  struct WarBoardUserServantData_o *v100; // x8
  BattleServantData_o *v101; // x8
  struct BattleServantData_o *v102; // x8
  __int64 v103; // x20
  System_Func_bool__o *v104; // x19
  UnityEngine_WaitUntil_o *v105; // x21
  __int64 v106; // x19
  System_Delegate_o **v107; // x21
  System_Delegate_o *v108; // x22
  WarBoardTaskBase_TaskCallback_o *v109; // x23
  System_Delegate_o *v110; // x0
  int32_t v111; // w2
  int32_t v112; // w3
  System_String_o *v113; // x4
  int32_t v114; // w5
  int64_t v115; // x6
  System_String_o *v116; // x7
  System_Delegate_o *v117; // x8
  WarBoardTaskBase_TaskCallback_c *v118; // x1
  Il2CppObject *Instance; // x20
  __int64 v120; // x21
  __int64 v121; // x0
  int32_t v122; // w2
  int32_t v123; // w3
  System_String_o *v124; // x4
  int32_t v125; // w5
  int64_t v126; // x6
  System_String_o *v127; // x7
  __int64 v128; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v130; // 0:x0.16

  if ( (byte_4D2A308 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_ServantClassMaster___);
    sub_1C94098(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    sub_1C94098(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
    sub_1C94098(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
    sub_1C94098(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
    sub_1C94098(&System_Func_bool__TypeInfo);
    sub_1C94098(&System_Func_WarBoardUserMasterData__bool__TypeInfo);
    sub_1C94098(&System_Func_WarBoardUserServantData__bool__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__Add__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C94098(&WarBoardTaskBase_TaskCallback_TypeInfo);
    sub_1C94098(&Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__2__);
    sub_1C94098(&Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__3__);
    sub_1C94098(&WarBoardPieceData___c__DisplayClass316_0_TypeInfo);
    sub_1C94098(&UnityEngine_WaitUntil_TypeInfo);
    sub_1C94098(&WarBoardCallbackTask_TypeInfo);
    sub_1C94098(&WarBoardData_WarBoardDeadBreakList_TypeInfo);
    sub_1C94098(&WarBoardMasterPieceComponent_TypeInfo);
    sub_1C94098(&Method_WarBoardPieceData__UpdateFromServerData_b__316_0__);
    sub_1C94098(&Method_WarBoardPieceData__UpdateFromServerData_b__316_1__);
    sub_1C94098(&WarBoardServantPieceComponent_TypeInfo);
    sub_1C94098(&WarBoardTaskBase___TypeInfo);
    byte_4D2A308 = 1;
  }
  entity = 0;
  if ( !warBoardDataEntity )
    return;
  if ( this->fields._type_k__BackingField != 1 )
  {
    svtInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.svtInfo;
    v26 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_WarBoardUserServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v26,
      (Il2CppObject *)this,
      Method_WarBoardPieceData__UpdateFromServerData_b__316_1__,
      0);
    v27 = System_Linq_Enumerable__FirstOrDefault_object__52191056(
            svtInfo,
            (System_Func_TSource__bool__o *)v26,
            (const MethodInfo_31C5F50 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
    if ( !v27 )
      return;
    breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
    monitor_high = HIDWORD(v27[38].monitor);
    v31 = (struct WarBoardUserServantData_o *)v27;
    if ( breakPoint_k__BackingField <= monitor_high )
    {
      pieceComponent = (__int64)this->fields.pieceComponent;
      if ( !pieceComponent )
        goto LABEL_154;
      pieceComponent = (*(__int64 (__fastcall **)(__int64, WarBoardManager_TaskList_o *, _QWORD))(*(_QWORD *)pieceComponent
                                                                                                + 792LL))(
                         pieceComponent,
                         taskList,
                         *(_QWORD *)(*(_QWORD *)pieceComponent + 800LL));
      v50 = 0;
    }
    else
    {
      this->fields._breakPoint_k__BackingField = monitor_high;
      if ( monitor_high < 0 )
        this->fields._isDead_k__BackingField = 1;
      v32 = sub_1C942E4(WarBoardData_WarBoardDeadBreakList_TypeInfo);
      System_Object___ctor((Il2CppObject *)v32, 0);
      if ( !v32 )
        goto LABEL_154;
      v40 = this->fields.pieceComponent;
      *(_QWORD *)(v32 + 16) = v40;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v32 + 16), (int32_t)v40, v34, v35, v36, v37, v38, v39);
      *(_DWORD *)(v32 + 24) = v31->fields.defeatPoint;
      *(_DWORD *)(v32 + 28) = breakPoint_k__BackingField;
      if ( !deadBreakList )
        goto LABEL_154;
      items = deadBreakList->fields._items;
      v48 = Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__Add__;
      ++deadBreakList->fields._version;
      if ( !items )
        goto LABEL_154;
      size = deadBreakList->fields._size;
      v50 = monitor_high >= 0;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)deadBreakList,
          (Il2CppObject *)v32,
          *(const MethodInfo_386AE34 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
      }
      else
      {
        v51 = &items->obj.klass + size;
        deadBreakList->fields._size = size + 1;
        v51[4] = (Il2CppClass *)v32;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)(v51 + 4), v32, v41, v42, v43, v44, v45, v46);
      }
    }
    p_serverServantData = &this->fields.serverServantData;
    serverServantData = this->fields.serverServantData;
    if ( serverServantData )
      v62 = serverServantData->fields.transformIndex != v31->fields.transformIndex;
    else
      v62 = 0;
    currentActionCount_k__BackingField = this->fields._currentActionCount_k__BackingField;
    currentActionPoint = v31->fields.currentActionPoint;
    localSaveData = this->fields.localSaveData;
    v66 = currentActionCount_k__BackingField != currentActionPoint;
    if ( !localSaveData )
      goto LABEL_154;
    if ( v31->fields.consumedActionPointDateTime <= localSaveData->fields.consumedActionPointDateTime
      || this->fields._forceId_k__BackingField
      || this->fields._groupId_k__BackingField )
    {
      v67 = 0;
      if ( serverServantData )
      {
LABEL_37:
        v68 = serverServantData->fields.criticalStars != v31->fields.criticalStars;
LABEL_64:
        v75 = v31->fields.consumedRecoverDonotActCostDateTime > localSaveData->fields.consumedRecoverDonotActCostDateTime
           && !this->fields._forceId_k__BackingField
           && !this->fields._groupId_k__BackingField
           && !this->fields._isDead_k__BackingField;
        this->fields._IsDispConsumedPieceActionPoint_k__BackingField = v75;
        Cost_k__BackingField = this->fields._Cost_k__BackingField;
        this->fields._ConsumedRecoverDonotActCost_k__BackingField = v31->fields.consumedRecoverDonotActCost;
        if ( Cost_k__BackingField )
        {
          pieceComponent = WarBoardCost__get_HasCost(Cost_k__BackingField, 0);
          v66 = pieceComponent | (currentActionCount_k__BackingField != currentActionPoint);
          if ( currentActionCount_k__BackingField == currentActionPoint && (pieceComponent & 1) != 0 )
          {
            v77 = this->fields._Cost_k__BackingField;
            if ( !v77 )
              goto LABEL_154;
            v66 = v77->fields._CurrentActionPoint_k__BackingField != v31->fields.currentPieceActionPoint;
          }
        }
        this->fields.serverServantData = v31;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&this->fields.serverServantData,
          (int32_t)v31,
          v52,
          v53,
          v54,
          v55,
          v56,
          v57);
        pieceComponent = (__int64)this->fields.serverServantData;
        if ( !pieceComponent )
          goto LABEL_154;
        WarBoardUserServantData__SetBattleServantData(
          (WarBoardUserServantData_o *)pieceComponent,
          this->fields._battleServant_k__BackingField,
          v78);
        battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
        if ( !battleServant_k__BackingField )
          goto LABEL_154;
        pieceComponent = (__int64)battleServant_k__BackingField->fields.buffData;
        if ( !pieceComponent )
          goto LABEL_154;
        BattleBuffData__UpdateForceNoField((BattleBuffData_o *)pieceComponent, 0);
        pieceComponent = (__int64)this->fields._battleServant_k__BackingField;
        if ( !pieceComponent )
          goto LABEL_154;
        BattleServantData__updateHp((BattleServantData_o *)pieceComponent, 0, 0);
        pieceComponent = (__int64)*p_serverServantData;
        if ( !*p_serverServantData )
          goto LABEL_154;
        WarBoardUserServantData__FromBattleServantData(
          (WarBoardUserServantData_o *)pieceComponent,
          this->fields._battleServant_k__BackingField,
          v80);
        v81 = this->fields.serverServantData;
        if ( !v81 )
          goto LABEL_154;
        *(int32x2_t *)&this->fields._limitActionCount_k__BackingField = vrev64_s32(*(int32x2_t *)&v81->fields.currentActionPoint);
        this->fields._attackCount_k__BackingField = v81->fields.attackCount;
        squareIndex = v81->fields.squareIndex;
        if ( squareIndex == -1 )
          this->fields._lastSquareIndex_k__BackingField = this->fields._nowSquareIndex_k__BackingField;
        this->fields._nowSquareIndex_k__BackingField = squareIndex;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
        pieceComponent = (__int64)WarBoardPieceData__get_ActionPointEntity(this, v84);
        if ( !this->fields._battleServant_k__BackingField )
          goto LABEL_154;
        v85 = (WarBoardActionPointEntity_o *)pieceComponent;
        pieceComponent = BattleServantData__getClassId(this->fields._battleServant_k__BackingField, 0, 0);
        if ( !Master_object )
          goto LABEL_154;
        pieceComponent = (__int64)WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                    (WarBoardActionPointClassMaster_o *)Master_object,
                                    v85,
                                    pieceComponent,
                                    0);
        v86 = this->fields.serverServantData;
        if ( !v86 )
          goto LABEL_154;
        v87 = (WarBoardActionPointClassEntity_o *)pieceComponent;
        pieceComponent = (__int64)this->fields._Cost_k__BackingField;
        if ( !pieceComponent )
          goto LABEL_154;
        WarBoardCost__UpdateCurrentPointByServerData(
          (WarBoardCost_o *)pieceComponent,
          v86->fields.currentPieceActionPoint,
          0);
        pieceComponent = (__int64)this->fields._battleServant_k__BackingField;
        if ( !pieceComponent )
          goto LABEL_154;
        v88 = this->fields._Cost_k__BackingField;
        pieceComponent = BattleServantData__getClassId((BattleServantData_o *)pieceComponent, 0, 0);
        if ( !v88 )
          goto LABEL_154;
        if ( WarBoardCost__IsSameClass(v88, pieceComponent, 0) )
        {
          v89 = 0;
        }
        else
        {
          pieceComponent = (__int64)WarBoardCost__Create(v87, 0, 0, 0);
          if ( !this->fields._Cost_k__BackingField )
            goto LABEL_154;
          WarBoardCost__UpdateClassCost(this->fields._Cost_k__BackingField, (WarBoardCost_o *)pieceComponent, 0);
          v89 = 1;
        }
        pieceComponent = (__int64)this->fields.pieceComponent;
        if ( !pieceComponent )
          goto LABEL_154;
        if ( (((*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)pieceComponent + 568LL))(
                 pieceComponent,
                 *(_QWORD *)(*(_QWORD *)pieceComponent + 576LL))
             & 1) != 0
           || forceUpdate)
          && !this->fields._isDead_k__BackingField )
        {
          pieceComponent = (__int64)this->fields.pieceComponent;
          if ( !pieceComponent )
            goto LABEL_154;
          (*(void (__fastcall **)(__int64, _BOOL4, _QWORD))(*(_QWORD *)pieceComponent + 552LL))(
            pieceComponent,
            v50,
            *(_QWORD *)(*(_QWORD *)pieceComponent + 560LL));
        }
        if ( v89 | (v66 | forceUpdate) & 1 && !this->fields._isDead_k__BackingField )
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
        v92 = forceUpdate;
        if ( (v62 || v92)
           | (iconClassId_k__BackingField != BattleServantData__getClassId((BattleServantData_o *)pieceComponent, 0, 0))
          && !this->fields._isDead_k__BackingField )
        {
          v93 = this->fields.pieceComponent;
          if ( v93
            && (naturalAligment = WarBoardServantPieceComponent_TypeInfo->_2.naturalAligment,
                v93->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
          {
            if ( (WarBoardServantPieceComponent_c *)v93->klass->_2.typeHierarchy[naturalAligment - 1] == WarBoardServantPieceComponent_TypeInfo )
              v95 = (UnityEngine_Object_o *)this->fields.pieceComponent;
            else
              v95 = 0;
          }
          else
          {
            v95 = 0;
          }
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          pieceComponent = UnityEngine_Object__op_Inequality(v95, 0, 0);
          if ( (pieceComponent & 1) != 0 )
          {
            v96 = this->fields._battleServant_k__BackingField;
            if ( !v96 )
              goto LABEL_154;
            v98 = *(_QWORD *)&v96->fields.svtId.fields.currentCryptoKey;
            v97 = *(_QWORD *)&v96->fields.svtId.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v130.fields.currentCryptoKey = v98;
            *(_QWORD *)&v130.fields.fakeValue = v97;
            v99 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49621544(v130, 0);
            v100 = this->fields.serverServantData;
            this->fields._iconId_k__BackingField = v99;
            if ( v100 && NpcSvtType__IsEnemy(v100->fields.npcSvtType, 0) )
            {
              pieceComponent = (__int64)this->fields._battleServant_k__BackingField;
              if ( !pieceComponent )
                goto LABEL_154;
              pieceComponent = BattleServantData__getLimitCount((BattleServantData_o *)pieceComponent, 0);
            }
            else
            {
              pieceComponent = (__int64)this->fields._battleServant_k__BackingField;
              if ( !pieceComponent )
                goto LABEL_154;
              pieceComponent = BattleServantData__GetIconImageLimitCount((BattleServantData_o *)pieceComponent, 0);
            }
            v101 = this->fields._battleServant_k__BackingField;
            this->fields._iconLimitCount_k__BackingField = pieceComponent;
            if ( !v101 )
              goto LABEL_154;
            pieceComponent = BattleServantData__getClassId(v101, 0, 0);
            v102 = this->fields._battleServant_k__BackingField;
            this->fields._iconClassId_k__BackingField = pieceComponent;
            if ( !v102 )
              goto LABEL_154;
            this->fields._iconFrameType_k__BackingField = v102->fields._frameType_k__BackingField;
            this->fields._iconLevel_k__BackingField = v102->fields.level;
            if ( !DataManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            pieceComponent = (__int64)DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_ServantClassMaster___);
            if ( !pieceComponent )
              goto LABEL_154;
            pieceComponent = DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)pieceComponent,
                               &entity,
                               *p_iconClassId_k__BackingField,
                               (const MethodInfo_345B50C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__TryGetEntity__);
            if ( (pieceComponent & 1) != 0 )
            {
              if ( !entity )
                goto LABEL_154;
              p_iconClassId_k__BackingField = (int32_t *)&entity[2].monitor + 1;
            }
            this->fields._IconClassImageId_k__BackingField = *p_iconClassId_k__BackingField;
            if ( !v95 )
              goto LABEL_154;
            WarBoardServantPieceComponent__SetServantIcon((WarBoardServantPieceComponent_o *)v95, 0);
            ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *))v95->klass[1]._1.declaringType)(
              v95,
              v95->klass[1]._1.parent);
            ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *))v95->klass[1]._1.element_class)(
              v95,
              v95->klass[1]._1.castClass);
          }
        }
        if ( (v68 || v92) && !this->fields._isDead_k__BackingField )
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
          sub_1C942F0(pieceComponent, v28);
        WarBoardPieceBaseComponent__UpdateUiByBuffChanged((WarBoardPieceBaseComponent_o *)pieceComponent, 0);
        if ( !v67 )
          return;
        v103 = sub_1C942E4(WarBoardPieceData___c__DisplayClass316_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v103, 0);
        if ( !v103 )
          goto LABEL_154;
        *(_BYTE *)(v103 + 16) = 0;
        v104 = (System_Func_bool__o *)sub_1C942E4(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(
          v104,
          (Il2CppObject *)v103,
          Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__2__,
          0);
        v105 = (UnityEngine_WaitUntil_o *)sub_1C942E4(UnityEngine_WaitUntil_TypeInfo);
        UnityEngine_WaitUntil___ctor(v105, v104, 0);
        v106 = sub_1C942E4(WarBoardCallbackTask_TypeInfo);
        WarBoardCallbackTask___ctor((WarBoardCallbackTask_o *)v106, (UnityEngine_CustomYieldInstruction_o *)v105, 0);
        if ( !v106 )
          goto LABEL_154;
        v107 = (System_Delegate_o **)(v106 + 32);
        v108 = *(System_Delegate_o **)(v106 + 32);
        v109 = (WarBoardTaskBase_TaskCallback_o *)sub_1C942E4(WarBoardTaskBase_TaskCallback_TypeInfo);
        WarBoardTaskBase_TaskCallback___ctor(
          v109,
          (Il2CppObject *)v103,
          Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__3__,
          0);
        v110 = System_Delegate__Combine(v108, (System_Delegate_o *)v109, 0);
        v117 = v110;
        if ( v110 )
        {
          v118 = WarBoardTaskBase_TaskCallback_TypeInfo;
          if ( (WarBoardTaskBase_TaskCallback_c *)v110->klass == WarBoardTaskBase_TaskCallback_TypeInfo )
          {
            *v107 = v110;
            if ( (WarBoardTaskBase_TaskCallback_c *)v110->klass == v118 )
            {
LABEL_147:
              sub_1C9403C((GrandQuestFolderBoardItem_o *)(v106 + 32), (int32_t)v117, v111, v112, v113, v114, v115, v116);
              Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              pieceComponent = sub_1C94140(WarBoardTaskBase___TypeInfo, 1);
              if ( !pieceComponent )
                goto LABEL_154;
              v120 = pieceComponent;
              v121 = sub_1C941D4(v106, *(_QWORD *)(*(_QWORD *)pieceComponent + 64LL));
              if ( !v121 )
              {
                v128 = sub_1C94314();
                sub_1C941C0(v128, 0);
              }
              if ( !*(_DWORD *)(v120 + 24) )
                sub_1C942F8(v121);
              *(_QWORD *)(v120 + 32) = v106;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)(v120 + 32), v106, v122, v123, v124, v125, v126, v127);
              if ( !Instance )
                goto LABEL_154;
              WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 1, (WarBoardTaskBase_array *)v120, 0);
              return;
            }
          }
          sub_1C9468C(v110);
        }
        *v107 = v117;
        goto LABEL_147;
      }
    }
    else
    {
      v67 = !this->fields._isDead_k__BackingField;
      if ( serverServantData )
        goto LABEL_37;
    }
    v68 = 0;
    goto LABEL_64;
  }
  masterInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.masterInfo;
  v12 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_WarBoardUserMasterData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)this,
    Method_WarBoardPieceData__UpdateFromServerData_b__316_0__,
    0);
  v13 = (struct WarBoardUserMasterData_o *)System_Linq_Enumerable__FirstOrDefault_object__52191056(
                                             masterInfo,
                                             (System_Func_TSource__bool__o *)v12,
                                             (const MethodInfo_31C5F50 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
  if ( !v13 )
    return;
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
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._serverMasterData_k__BackingField,
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
    if ( v58 )
    {
      if ( !*p_serverMasterData_k__BackingField )
        goto LABEL_154;
      v59 = v58->fields._CurrentActionPoint_k__BackingField != (*p_serverMasterData_k__BackingField)->fields.currentPieceActionPoint;
    }
    else
    {
      v59 = 0;
    }
  }
  else
  {
    v59 = 1;
  }
  v69 = *p_serverMasterData_k__BackingField;
  if ( !*p_serverMasterData_k__BackingField )
    goto LABEL_154;
  pieceComponent = (__int64)this->fields._Cost_k__BackingField;
  *(int32x2_t *)&this->fields._limitActionCount_k__BackingField = vrev64_s32(*(int32x2_t *)&v69->fields.currentLimitActionPoint);
  this->fields._attackCount_k__BackingField = v69->fields.attackCount;
  this->fields._nowSquareIndex_k__BackingField = v69->fields.squareIndex;
  if ( !pieceComponent )
    goto LABEL_154;
  v70 = forceUpdate;
  WarBoardCost__UpdateCurrentPointByServerData((WarBoardCost_o *)pieceComponent, v69->fields.currentPieceActionPoint, 0);
  v71 = !this->fields._forceId_k__BackingField
     && !this->fields._groupId_k__BackingField
     && this->fields._type_k__BackingField == 1;
  if ( v71 && (v24 || v70) )
  {
    v72 = this->fields.pieceComponent;
    if ( v72
      && (v73 = WarBoardMasterPieceComponent_TypeInfo->_2.naturalAligment,
          v72->klass->_2.naturalAligment >= (unsigned int)v73) )
    {
      v74 = (WarBoardMasterPieceComponent_c *)v72->klass->_2.typeHierarchy[v73 - 1] == WarBoardMasterPieceComponent_TypeInfo
          ? (UnityEngine_Object_o *)this->fields.pieceComponent
          : 0LL;
    }
    else
    {
      v74 = 0;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    pieceComponent = UnityEngine_Object__op_Inequality(v74, 0, 0);
    if ( (pieceComponent & 1) != 0 )
    {
      if ( !*p_serverMasterData_k__BackingField || !v74 )
        goto LABEL_154;
      WarBoardMasterPieceComponent__SetCommandSpellRemain(
        (WarBoardMasterPieceComponent_o *)v74,
        (*p_serverMasterData_k__BackingField)->fields.commandSpellNum,
        0);
    }
  }
  if ( (v59 || v70) && !this->fields._isDead_k__BackingField )
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


void WarBoardPieceData__UpdateWidgetDepth(WarBoardPieceData_o *this, const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_1C942F0(0, method);
  WarBoardPieceBaseComponent__UpdateWidgetDepth(pieceComponent, 0);
}


void WarBoardPieceData__WallAttack(WarBoardPieceData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_1C942F0(0, squareIndex);
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
    sub_1C942F0(this, 0);
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
    sub_1C942F0(this, 0);
  return x->fields.forceId == this->fields._forceId_k__BackingField
      && x->fields.groupId == this->fields._groupId_k__BackingField;
}


bool WarBoardPieceData___SetInitinalData_b__315_1(
        WarBoardPieceData_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
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
    sub_1C942F0(this, 0);
  return x->fields.forceId == this->fields._forceId_k__BackingField
      && x->fields.groupId == this->fields._groupId_k__BackingField;
}


bool WarBoardPieceData___UpdateFromServerData_b__316_1(
        WarBoardPieceData_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.forceId == this->fields._forceId_k__BackingField
      && x->fields.groupId == this->fields._groupId_k__BackingField
      && x->fields.pieceIndex == this->fields._index_k__BackingField;
}


WarBoardActionPointEntity_o *WarBoardPieceData__get_ActionPointEntity(
        WarBoardPieceData_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1

  if ( (byte_4D2A2F9 & 1) == 0 )
  {
    sub_1C94098(&Method_DataManager_GetMaster_WarBoardActionPointMaster___);
    sub_1C94098(&DataManager_TypeInfo);
    byte_4D2A2F9 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_319C0E0 *)Method_DataManager_GetMaster_WarBoardActionPointMaster___);
  if ( !Master_object )
    sub_1C942F0(0, v4);
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
  struct BattleServantData_o *battleServant_k__BackingField; // x0
  float MaxHp; // s8
  int v5; // w0
  BattleServantData_o *v6; // x8
  int v7; // w19

  battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
  MaxHp = 1.0;
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
    sub_1C942F0(this, method);
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
  WarBoardPieceData_o *v2; // x19
  struct WarBoardUserServantData_o *serverServantData; // x8
  __int128 v4; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v6; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v7; // [xsp+20h] [xbp-40h]

  v2 = this;
  if ( (byte_4D2A2F8 & 1) == 0 )
  {
    this = (WarBoardPieceData_o *)sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_4D2A2F8 = 1;
  }
  serverServantData = v2->fields.serverServantData;
  if ( !serverServantData )
    sub_1C942F0(this, method);
  v4 = *(_OWORD *)&serverServantData->fields.id.fields.fakeValue;
  *(_OWORD *)&v7.fields.currentCryptoKey = *(_OWORD *)&serverServantData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v7.fields.fakeValue = v4;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v6 = v7;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v6, 0);
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
    sub_1C942F0(0, method);
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

  if ( (byte_4D2A2F6 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2A2F6 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.playedStageReinforcementsList) == 0 )
    sub_1C942F0(Instance, v4);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._Cost_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._Cost_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._PrevAiRoute_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._PrevAiRoute_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._battleServant_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._battleServant_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._individuality_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._individuality_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._serverMasterData_k__BackingField = value;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields._serverMasterData_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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


void WarBoardPieceData_RouteSaveData___ctor_38806260(
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
  *(_OWORD *)&this->fields.forceId = xmmword_CFF1C0;
}


void WarBoardPieceData_SaveData___ctor_38774536(
        WarBoardPieceData_SaveData_o *this,
        WarBoardPieceData_o *owner,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  const MethodInfo *v11; // x1
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct WarBoardPieceData_o *v19; // x0

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.owner = owner;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.owner, (int32_t)owner, v5, v6, v7, v8, v9, v10);
  WarBoardPieceData_SaveData__Save(this, v11);
  v19 = this->fields.owner;
  if ( !v19 )
    sub_1C942F0(0, v12);
  v19->fields.localSaveData = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v19->fields.localSaveData, (int32_t)this, v13, v14, v15, v16, v17, v18);
}


void WarBoardPieceData_SaveData__Load(WarBoardPieceData_SaveData_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct WarBoardPieceData_o *owner; // x0
  struct WarBoardPieceData_RouteSaveData_o *prevAiRoute; // x1
  int64_t Cost_k__BackingField; // x0
  BattleServantData_o *v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct WarBoardPieceData_o *v19; // x8
  struct WarBoardPieceData_o *v20; // x8
  struct WarBoardPieceData_o *v21; // x8
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  struct WarBoardUserServantData_o *serverServantData; // x8
  struct BattleBuffData_SaveData_o *buffSave; // x1
  struct WarBoardPieceData_o *v25; // x8
  struct WarBoardUserServantData_o *v26; // x8
  struct WarBoardPieceData_o *v27; // x8
  struct WarBoardUserServantData_o *v28; // x8
  __int128 v29; // q1
  WarBoardManager_o *v30; // x20
  const MethodInfo *v31; // x2
  struct WarBoardPieceData_o *v32; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v33; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v34; // [xsp+20h] [xbp-40h]

  if ( (byte_4D2A317 & 1) == 0 )
  {
    sub_1C94098(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    byte_4D2A317 = 1;
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
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&owner->fields._PrevAiRoute_k__BackingField,
      (int32_t)prevAiRoute,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7);
    v19 = this->fields.owner;
    if ( !v19 )
      goto LABEL_26;
    v19->fields._entryTurn_k__BackingField = this->fields.entryTurn;
    *(_QWORD *)&v19->fields._StageReinfoId_k__BackingField = *(_QWORD *)&this->fields.stageReinforcementId;
    *(_QWORD *)&v19->fields._overwriteActionType_k__BackingField = *(_QWORD *)&this->fields.overwriteActionType;
    Cost_k__BackingField = (int64_t)v19->fields._Cost_k__BackingField;
    if ( Cost_k__BackingField )
    {
      Cost_k__BackingField = WarBoardCost__get_HasCost((WarBoardCost_o *)Cost_k__BackingField, 0);
      if ( (Cost_k__BackingField & 1) != 0 )
      {
        v20 = this->fields.owner;
        if ( !v20 )
          goto LABEL_26;
        Cost_k__BackingField = (int64_t)v20->fields._Cost_k__BackingField;
        if ( !Cost_k__BackingField )
          goto LABEL_26;
        WarBoardCost__UpdateCurrentPointBySaveData(
          (WarBoardCost_o *)Cost_k__BackingField,
          this->fields.currentActionPoint,
          0);
      }
    }
    v21 = this->fields.owner;
    if ( v21 )
    {
      if ( v21->fields._type_k__BackingField == 1 )
      {
        serverMasterData_k__BackingField = v21->fields._serverMasterData_k__BackingField;
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
      serverServantData = v21->fields.serverServantData;
      if ( !serverServantData )
        return;
      *(_QWORD *)&serverServantData->fields.squareIndex = *(_QWORD *)&this->fields.squareIndex;
      buffSave = this->fields.buffSave;
      serverServantData->fields.buffDataSave = buffSave;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&serverServantData->fields.buffDataSave,
        (int32_t)buffSave,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
      v25 = this->fields.owner;
      if ( v25 )
      {
        v26 = v25->fields.serverServantData;
        if ( v26 )
        {
          v26->fields.attackCount = this->fields.attackCount;
          *(_QWORD *)&v26->fields.currentHp = *(_QWORD *)&this->fields.hp;
          v26->fields.nextNpTurn = this->fields.tdTurn;
          v26->fields.criticalStars = this->fields.criticalStars;
          v26->fields.currentPieceActionPoint = this->fields.currentActionPoint;
          v26->fields.defeatPoint = this->fields.breakPoint;
          Cost_k__BackingField = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
          v27 = this->fields.owner;
          if ( v27 )
          {
            v28 = v27->fields.serverServantData;
            if ( v28 )
            {
              v29 = *(_OWORD *)&v28->fields.id.fields.fakeValue;
              v30 = (WarBoardManager_o *)Cost_k__BackingField;
              *(_OWORD *)&v34.fields.currentCryptoKey = *(_OWORD *)&v28->fields.id.fields.currentCryptoKey;
              *(_OWORD *)&v34.fields.fakeValue = v29;
              if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
              v33 = v34;
              Cost_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_49625068(&v33, 0);
              if ( v30 )
              {
                Cost_k__BackingField = (int64_t)WarBoardManager__GetBattleServant(v30, Cost_k__BackingField, 0);
                v32 = this->fields.owner;
                if ( v32 )
                {
                  v12 = (BattleServantData_o *)Cost_k__BackingField;
                  Cost_k__BackingField = (int64_t)v32->fields.serverServantData;
                  if ( Cost_k__BackingField )
                  {
                    WarBoardUserServantData__SetBattleServantData(
                      (WarBoardUserServantData_o *)Cost_k__BackingField,
                      v12,
                      v31);
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
    sub_1C942F0(Cost_k__BackingField, v12);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct WarBoardPieceData_o *owner; // x8
  WarBoardPieceData_SaveData_o *v9; // x19
  WarBoardCost_o *Cost_k__BackingField; // x0
  struct WarBoardPieceData_o *v11; // x8
  struct WarBoardCost_o *v12; // x8
  int32_t CurrentActionPoint_k__BackingField; // w8
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct WarBoardPieceData_o *v20; // x8
  struct WarBoardPieceData_RouteSaveData_o *PrevAiRoute_k__BackingField; // x1
  struct WarBoardPieceData_o *v22; // x8
  int32_t type_k__BackingField; // w9
  struct WarBoardUserServantData_o *serverServantData; // x9
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  BattleBuffData_SaveData_o *SaveData; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
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
    && (this = (WarBoardPieceData_SaveData_o *)WarBoardCost__get_HasCost(Cost_k__BackingField, 0),
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
  v9->fields.buffSave = 0;
  v9->fields.consumedActionPointDateTime = 0;
  v9->fields.currentActionPoint = CurrentActionPoint_k__BackingField;
  v9->fields.consumedRecoverDonotActCostDateTime = 0;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v9->fields.buffSave, 0, v2, v3, v4, v5, v6, v7);
  v20 = v9->fields.owner;
  v9->fields.currentForceActionPoint = 0;
  if ( !v20 )
    goto LABEL_24;
  PrevAiRoute_k__BackingField = v20->fields._PrevAiRoute_k__BackingField;
  v9->fields.prevAiRoute = PrevAiRoute_k__BackingField;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&v9->fields.prevAiRoute,
    (int32_t)PrevAiRoute_k__BackingField,
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
        SaveData = BattleBuffData__getSaveData((BattleBuffData_o *)this, 0);
        v9->fields.buffSave = SaveData;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&v9->fields.buffSave,
          (int32_t)SaveData,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
        v33 = v9->fields.owner;
        if ( v33 )
        {
          this = (WarBoardPieceData_SaveData_o *)v33->fields._battleServant_k__BackingField;
          if ( this )
          {
            this = (WarBoardPieceData_SaveData_o *)((__int64 (__fastcall *)(WarBoardPieceData_SaveData_o *, Il2CppClass *))this->klass[1]._1.declaringType)(
                                                     this,
                                                     this->klass[1]._1.parent);
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
      sub_1C942F0(this, method);
    }
  }
}


void WarBoardPieceData_SaveData__SetOwner(
        WarBoardPieceData_SaveData_o *this,
        WarBoardData_o *data,
        const MethodInfo *method)
{
  struct WarBoardPieceData_o *Piece; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct WarBoardPieceData_o *owner; // x0

  if ( !data )
    sub_1C942F0(this, 0);
  Piece = WarBoardData__GetPiece(data, this->fields.forceId, this->fields.groupId, this->fields.pieceIndex, 0, 0);
  this->fields.owner = Piece;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.owner, (int32_t)Piece, v5, v6, v7, v8, v9, v10);
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields.localSaveData = this;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&owner->fields.localSaveData,
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2A318 & 1) == 0 )
  {
    sub_1C94098(&WarBoardPieceData___c_TypeInfo);
    byte_4D2A318 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(WarBoardPieceData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardPieceData___c_TypeInfo->static_fields->__9 = (struct WarBoardPieceData___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)WarBoardPieceData___c_TypeInfo->static_fields,
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


WarBoardWallData_o *WarBoardPieceData___c__DisplayClass223_0___HasVitalityToDoAnyActions_b__0(
        WarBoardPieceData___c__DisplayClass223_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  WarBoardData_o *warBoardData; // x0

  warBoardData = this->fields.warBoardData;
  if ( !warBoardData )
    sub_1C942F0(0, x);
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
  System_Action_bool__o *_9__4; // x22
  WarBoardManager_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  if ( (byte_4D2A319 & 1) == 0 )
  {
    sub_1C94098(&System_Action_bool__TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C94098(&Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__4__);
    byte_4D2A319 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__4 = this->fields.__9__4;
  v6 = (WarBoardManager_o *)Instance;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_bool__o *)sub_1C942E4(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__4__,
      0);
    this->fields.__9__4 = _9__4;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.__9__4, (int32_t)_9__4, v7, v8, v9, v10, v11, v12);
  }
  if ( !v6 )
    sub_1C942F0(Instance, v4);
  WarBoardManager__ShowActionCountDecreaseNoticePopup(v6, _9__4, 0);
}


void WarBoardPieceData___c__DisplayClass316_0___UpdateFromServerData_b__4(
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
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D2A31A & 1) == 0 )
  {
    sub_1C94098(&System_Action_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    sub_1C94098(&Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__5__);
    byte_4D2A31A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3ABA574 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__5 = this->fields.__9__5;
  v7 = (WarBoardManager_o *)Instance;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_1C942E4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)this,
      Method_WarBoardPieceData___c__DisplayClass316_0__UpdateFromServerData_b__5__,
      0);
    this->fields.__9__5 = _9__5;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.__9__5, (int32_t)_9__5, v8, v9, v10, v11, v12, v13);
  }
  if ( !v7 )
    sub_1C942F0(Instance, v5);
  WarBoardManager__HideActionCountDecreaseNoticePopup(v7, _9__5, 0);
}


void WarBoardPieceData___c__DisplayClass316_0___UpdateFromServerData_b__5(
        WarBoardPieceData___c__DisplayClass316_0_o *this,
        const MethodInfo *method)
{
  this->fields.popupClose = 1;
}