void __fastcall WarBoardPieceData___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  float v4; // s4
  float v5; // s5
  float v6; // s6
  float v7; // s7
  struct WarBoardPieceData_StaticFields v8; // [xsp+0h] [xbp-20h] BYREF
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42E7650 & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardPieceData_TypeInfo, v1, v2, v3);
    byte_42E7650 = 1;
  }
  v9.fields.r = 0.05;
  v9.fields.a = 1.0;
  v9.fields.g = 0.05;
  v9.fields.b = 0.05;
  v8 = (struct WarBoardPieceData_StaticFields)0LL;
  UnityEngine_Color___ctor(v9, v4, v5, v6, v7, (const MethodInfo *)&v8);
  *WarBoardPieceData_TypeInfo->static_fields = v8;
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
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  WarBoardPieceData_PieceStatusCache_o *v49; // x27
  System_String_array **v50; // x2
  System_String_array **v51; // x3
  System_Boolean_array **v52; // x4
  System_Int32_array **v53; // x5
  System_Int32_array *v54; // x6
  System_Int32_array *v55; // x7
  int64_t Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v57; // x1
  int32_t pieceIndex; // w8
  int32_t forceId; // w28
  int32_t groupId; // w21
  int32_t v61; // w27
  int32_t squareIndex; // w8
  struct System_Int32_array *Individuality; // x0
  System_String_array **v64; // x2
  System_String_array **v65; // x3
  System_Boolean_array **v66; // x4
  System_Int32_array **v67; // x5
  System_Int32_array *v68; // x6
  System_Int32_array *v69; // x7
  int32_t breakPoint; // w8
  int32_t restrictionId; // w8
  struct BattleServantData_o **p_battleServant_k__BackingField; // x25
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  int32_t TurnCount; // w0
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x8
  WarBoardStagePieceDetailEntity_o *v87; // x8
  int32_t type_k__BackingField; // w8
  struct WarBoardUserMasterData_o **p_serverMasterData_k__BackingField; // x27
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  WarBoardActionPointClassMaster_o *v91; // x26
  const MethodInfo *v92; // x1
  WarBoardActionPointClassEntity_o *MasterEntityFromStageId; // x0
  struct WarBoardCost_o *v94; // x0
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  struct WarBoardUserMasterData_o *v101; // x8
  struct WarBoardUserMasterData_o *v102; // x8
  int32_t defeatPoint; // w8
  WebViewManager_o *Instance; // x0
  __int128 v105; // q1
  WarBoardManager_o *v106; // x26
  struct BattleServantData_o *BattleServant; // x0
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  WarBoardActionPointClassMaster_o *v120; // x26
  const MethodInfo *v121; // x1
  WarBoardActionPointEntity_o *v122; // x27
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  struct WarBoardCost_o *v124; // x0
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  int32_t v131; // w8
  int32_t forceId_k__BackingField; // w8
  int64_t userEquipId; // x8
  __int64 v134; // x20
  __int64 v135; // x20
  __int64 v136; // x20
  __int64 v137; // x21
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t npcId; // x8
  __int64 v140; // x8
  int64_t npcSvtEquipId; // x8
  __int64 v142; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v144; // [xsp+10h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v145; // [xsp+30h] [xbp-70h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v146; // 0:x0.16

  if ( (byte_42E7634 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEquipMaster___, (_DWORD)layout, (_DWORD)servantData, masterData);
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___, v19, v20, v21);
    sub_B5D5C4(&DataManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__, v28, v29, v30);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v34, v35, v36);
    sub_B5D5C4(&WarBoardPieceData_PieceStatusCache_TypeInfo, v37, v38, v39);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v40, v41, v42);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v43, v44, v45);
    sub_B5D5C4(&WarBoardPieceData_TypeInfo, v46, v47, v48);
    byte_42E7634 = 1;
  }
  v49 = (WarBoardPieceData_PieceStatusCache_o *)sub_B5D694(WarBoardPieceData_PieceStatusCache_TypeInfo);
  WarBoardPieceData_PieceStatusCache___ctor(v49, 0LL);
  this->fields.statusCache = v49;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.statusCache,
    (System_Int32_array **)v49,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55);
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
  v61 = layout->fields.pieceIndex;
  this->fields._index_k__BackingField = v61;
  if ( (BYTE3(WarBoardPieceData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPieceData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceData_TypeInfo);
  }
  this->fields._uniqueIndex_k__BackingField = (forceId << 24) | ((unsigned __int8)groupId << 16) | (unsigned __int16)v61;
  squareIndex = layout->fields.squareIndex;
  this->fields._nowSquareIndex_k__BackingField = squareIndex;
  this->fields._PutSquareIndex_k__BackingField = squareIndex;
  Individuality = WarBoardStageLayoutEntity__GetIndividuality(layout, 0LL);
  this->fields._individuality_k__BackingField = Individuality;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._individuality_k__BackingField,
    (System_Int32_array **)Individuality,
    v64,
    v65,
    v66,
    v67,
    v68,
    v69);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._battleServant_k__BackingField,
    0LL,
    v73,
    v74,
    v75,
    v76,
    v77,
    v78);
  this->fields._isDead_k__BackingField = 0;
  this->fields._isEditing_k__BackingField = 0;
  this->fields._isNotIncludeWin_k__BackingField = 0;
  this->fields._roleType_k__BackingField = 0;
  this->fields._IsDispConsumedPieceActionPoint_k__BackingField = 0;
  Master_WarQuestSelectionMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_91;
  if ( *(_QWORD *)(Master_WarQuestSelectionMaster + 432) )
  {
    Master_WarQuestSelectionMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    v87 = this->fields.stagePieceDetailEntity;
    this->fields._roleType_k__BackingField = Master_WarQuestSelectionMaster;
    if ( !v87 )
      goto LABEL_91;
    this->fields._isNotIncludeWin_k__BackingField = WarBoardStagePieceDetailEntity__IsNotIncludeWin(v87, 0LL);
  }
  type_k__BackingField = this->fields._type_k__BackingField;
  if ( masterData && type_k__BackingField == 1 )
  {
    this->fields._serverMasterData_k__BackingField = masterData;
    p_serverMasterData_k__BackingField = &this->fields._serverMasterData_k__BackingField;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields._serverMasterData_k__BackingField,
      (System_Int32_array **)masterData,
      v79,
      v80,
      v81,
      v82,
      v83,
      v84);
    serverMasterData_k__BackingField = this->fields._serverMasterData_k__BackingField;
    if ( !serverMasterData_k__BackingField )
      goto LABEL_91;
    this->fields._nowSquareIndex_k__BackingField = serverMasterData_k__BackingField->fields.squareIndex;
    this->fields._limitActionCount_k__BackingField = serverMasterData_k__BackingField->fields.limitActionPoint;
    this->fields._currentActionCount_k__BackingField = serverMasterData_k__BackingField->fields.currentLimitActionPoint;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v91 = (WarBoardActionPointClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    Master_WarQuestSelectionMaster = (int64_t)WarBoardPieceData__get_ActionPointEntity(this, v92);
    if ( !v91 )
      goto LABEL_91;
    MasterEntityFromStageId = WarBoardActionPointClassMaster__GetMasterEntityFromStageId(
                                v91,
                                (WarBoardActionPointEntity_o *)Master_WarQuestSelectionMaster,
                                0LL);
    v94 = WarBoardCost__Create(MasterEntityFromStageId, this->fields.stagePieceDetailEntity, 0LL, 0LL);
    this->fields._Cost_k__BackingField = v94;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields._Cost_k__BackingField,
      (System_Int32_array **)v94,
      v95,
      v96,
      v97,
      v98,
      v99,
      v100);
    v101 = this->fields._serverMasterData_k__BackingField;
    if ( !v101 )
      goto LABEL_91;
    Master_WarQuestSelectionMaster = (int64_t)this->fields._Cost_k__BackingField;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_91;
    WarBoardCost__UpdateCurrentPointByServerData(
      (WarBoardCost_o *)Master_WarQuestSelectionMaster,
      v101->fields.currentPieceActionPoint,
      0LL);
    v102 = *p_serverMasterData_k__BackingField;
    if ( !*p_serverMasterData_k__BackingField )
      goto LABEL_91;
    this->fields._attackCount_k__BackingField = v102->fields.attackCount;
    defeatPoint = v102->fields.defeatPoint;
    this->fields._breakPoint_k__BackingField = defeatPoint;
    if ( defeatPoint <= 0 )
LABEL_45:
      this->fields._isDead_k__BackingField = 1;
  }
  else if ( servantData && !type_k__BackingField )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
    v105 = *(_OWORD *)&servantData->fields.id.fields.fakeValue;
    v106 = (WarBoardManager_o *)Instance;
    *(_OWORD *)&v145.fields.currentCryptoKey = *(_OWORD *)&servantData->fields.id.fields.currentCryptoKey;
    *(_OWORD *)&v145.fields.fakeValue = v105;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    }
    v144 = v145;
    Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v144, 0LL);
    if ( !v106 )
      goto LABEL_91;
    BattleServant = WarBoardManager__GetBattleServant(v106, Master_WarQuestSelectionMaster, 0LL);
    this->fields._battleServant_k__BackingField = BattleServant;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields._battleServant_k__BackingField,
      (System_Int32_array **)BattleServant,
      v108,
      v109,
      v110,
      v111,
      v112,
      v113);
    this->fields.serverServantData = servantData;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.serverServantData,
      (System_Int32_array **)servantData,
      v114,
      v115,
      v116,
      v117,
      v118,
      v119);
    this->fields._nowSquareIndex_k__BackingField = servantData->fields.squareIndex;
    this->fields._limitActionCount_k__BackingField = servantData->fields.limitActionPoint;
    this->fields._currentActionCount_k__BackingField = servantData->fields.currentActionPoint;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v120 = (WarBoardActionPointClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
    Master_WarQuestSelectionMaster = (int64_t)WarBoardPieceData__get_ActionPointEntity(this, v121);
    if ( !this->fields._battleServant_k__BackingField )
      goto LABEL_91;
    v122 = (WarBoardActionPointEntity_o *)Master_WarQuestSelectionMaster;
    Master_WarQuestSelectionMaster = BattleServantData__getClassId(this->fields._battleServant_k__BackingField, 0LL);
    if ( !v120 )
      goto LABEL_91;
    EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                    v120,
                                    v122,
                                    Master_WarQuestSelectionMaster,
                                    0LL);
    v124 = WarBoardCost__Create(EntityFromActionPointEntity, this->fields.stagePieceDetailEntity, 0LL, 0LL);
    this->fields._Cost_k__BackingField = v124;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields._Cost_k__BackingField,
      (System_Int32_array **)v124,
      v125,
      v126,
      v127,
      v128,
      v129,
      v130);
    Master_WarQuestSelectionMaster = (int64_t)this->fields._Cost_k__BackingField;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_91;
    WarBoardCost__UpdateCurrentPointByServerData(
      (WarBoardCost_o *)Master_WarQuestSelectionMaster,
      servantData->fields.currentPieceActionPoint,
      0LL);
    this->fields._attackCount_k__BackingField = servantData->fields.attackCount;
    v131 = servantData->fields.defeatPoint;
    this->fields._breakPoint_k__BackingField = v131;
    if ( (v131 & 0x80000000) != 0 )
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
                                                  (const MethodInfo_2EE8918 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    }
    else
    {
      Master_WarQuestSelectionMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
      sub_B5D69C(Master_WarQuestSelectionMaster, v57);
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
    v134 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v134 + 306) & 1) == 0 )
      sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
    v135 = **(_QWORD **)(v134 + 192);
    if ( (*(_BYTE *)(v135 + 306) & 1) == 0 )
      sub_AF52C4(v135);
    Master_WarQuestSelectionMaster = **(_QWORD **)(v135 + 184);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_91;
    Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                (DataManager_o *)Master_WarQuestSelectionMaster,
                                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEquipMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_91;
    Master_WarQuestSelectionMaster = (int64_t)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Master_WarQuestSelectionMaster,
                                                this->fields._CurrentUserEquipId_k__BackingField,
                                                (const MethodInfo_23FB038 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_91;
    v137 = *(_QWORD *)(Master_WarQuestSelectionMaster + 32);
    v136 = *(_QWORD *)(Master_WarQuestSelectionMaster + 40);
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v146.fields.currentCryptoKey = v137;
    *(_QWORD *)&v146.fields.fakeValue = v136;
    this->fields._iconId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                             v146,
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
                                                      (const MethodInfo_2EE8918 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
        }
        else
        {
          Master_WarQuestSelectionMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
          v140 = *(_QWORD *)(Master_WarQuestSelectionMaster + 48);
          if ( !v140 )
            goto LABEL_91;
          if ( *(_DWORD *)(v140 + 24) <= (unsigned int)npcIdx )
          {
            v142 = sub_B5D6C8(Master_WarQuestSelectionMaster);
            sub_B5D668(v142, 0LL);
          }
          npcId = *(_QWORD *)(v140 + 8LL * npcIdx + 32);
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


void __fastcall WarBoardPieceData___ctor_23049788(
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
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  WarBoardPieceData_PieceStatusCache_o *v38; // x27
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  int64_t Instance; // x0
  const MethodInfo *v46; // x1
  int32_t id; // w8
  int32_t v48; // w8
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
  WebViewManager_o *v60; // x0
  __int128 v61; // q1
  WarBoardManager_o *v62; // x24
  struct BattleServantData_o *BattleServant; // x0
  struct BattleServantData_o **p_battleServant_k__BackingField; // x24
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  int32_t v77; // w8
  WarBoardActionPointClassMaster_o *Master_WarQuestSelectionMaster; // x25
  const MethodInfo *v79; // x1
  WarBoardActionPointEntity_o *v80; // x26
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  struct WarBoardCost_o *v82; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  int32_t forceId_k__BackingField; // w9
  int defeatPoint; // w8
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t npcId; // x8
  __int64 v93; // x8
  int64_t npcSvtEquipId; // x8
  __int64 v95; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v96; // [xsp+0h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+20h] [xbp-80h]
  int32_t value; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_42E7635 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_WarBoardActionPointClassMaster___,
      (_DWORD)stageReinforcementsEntity,
      (_DWORD)reinfoEntity,
      servantData);
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___, v17, v18, v19);
    sub_B5D5C4(&DataManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__, v23, v24, v25);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&WarBoardPieceData_PieceStatusCache_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v32, v33, v34);
    sub_B5D5C4(&WarBoardPieceData_TypeInfo, v35, v36, v37);
    byte_42E7635 = 1;
  }
  value = 0;
  v38 = (WarBoardPieceData_PieceStatusCache_o *)sub_B5D694(WarBoardPieceData_PieceStatusCache_TypeInfo);
  WarBoardPieceData_PieceStatusCache___ctor(v38, 0LL);
  this->fields.statusCache = v38;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.statusCache,
    (System_Int32_array **)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !stageReinforcementsEntity )
    goto LABEL_57;
  this->fields.stageId = stageReinforcementsEntity->fields.warBoardStageId;
  id = stageReinforcementsEntity->fields.id;
  this->fields._ReinfoIndex_k__BackingField = reinfoIndex;
  this->fields._StageReinfoId_k__BackingField = id;
  if ( !reinfoEntity )
    goto LABEL_57;
  v48 = reinfoEntity->fields.id;
  this->fields._type_k__BackingField = 0;
  this->fields._ReinfoId_k__BackingField = v48;
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
  Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_57;
  if ( *(_QWORD *)(Instance + 432) )
  {
    Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
  Instance = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
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
  v60 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  v61 = *(_OWORD *)&servantData->fields.id.fields.fakeValue;
  v62 = (WarBoardManager_o *)v60;
  *(_OWORD *)&v97.fields.currentCryptoKey = *(_OWORD *)&servantData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v97.fields.fakeValue = v61;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v96 = v97;
  Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v96, 0LL);
  if ( !v62 )
    goto LABEL_57;
  BattleServant = WarBoardManager__GetBattleServant(v62, Instance, 0LL);
  this->fields._battleServant_k__BackingField = BattleServant;
  p_battleServant_k__BackingField = &this->fields._battleServant_k__BackingField;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._battleServant_k__BackingField,
    (System_Int32_array **)BattleServant,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  this->fields.serverServantData = servantData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.serverServantData,
    (System_Int32_array **)servantData,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  v77 = servantData->fields.squareIndex;
  this->fields._nowSquareIndex_k__BackingField = v77;
  this->fields._PutSquareIndex_k__BackingField = v77;
  this->fields._limitActionCount_k__BackingField = servantData->fields.limitActionPoint;
  this->fields._currentActionCount_k__BackingField = servantData->fields.currentActionPoint;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardActionPointClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
  Instance = (int64_t)WarBoardPieceData__get_ActionPointEntity(this, v79);
  if ( !this->fields._battleServant_k__BackingField
    || (v80 = (WarBoardActionPointEntity_o *)Instance,
        Instance = BattleServantData__getClassId(this->fields._battleServant_k__BackingField, 0LL),
        !Master_WarQuestSelectionMaster)
    || (EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                        Master_WarQuestSelectionMaster,
                                        v80,
                                        Instance,
                                        0LL),
        v82 = WarBoardCost__Create(EntityFromActionPointEntity, this->fields.stagePieceDetailEntity, reinfoEntity, 0LL),
        this->fields._Cost_k__BackingField = v82,
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields._Cost_k__BackingField,
          (System_Int32_array **)v82,
          v83,
          v84,
          v85,
          v86,
          v87,
          v88),
        (Instance = (int64_t)this->fields._Cost_k__BackingField) == 0) )
  {
LABEL_57:
    sub_B5D69C(Instance, v46);
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
                            (const MethodInfo_2EE8918 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    }
    else
    {
      Instance = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    v93 = *(_QWORD *)(Instance + 48);
    if ( !v93 )
      goto LABEL_57;
    if ( *(_DWORD *)(v93 + 24) > (unsigned int)npcIdx )
    {
      npcId = *(_QWORD *)(v93 + 8LL * npcIdx + 32);
      goto LABEL_55;
    }
LABEL_58:
    v95 = sub_B5D6C8(Instance);
    sub_B5D668(v95, 0LL);
  }
LABEL_56:
  WarBoardPieceData__SetServantIconData(this, v46);
}


void __fastcall WarBoardPieceData___ctor_23051036(
        WarBoardPieceData_o *this,
        int32_t stageId,
        WarBoardUserServantData_o *servantData,
        WarBoardPieceData_SaveData_o *saveData,
        System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__o *npcDict,
        int32_t npcIdx,
        const MethodInfo *method)
{
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  WarBoardPieceData_PieceStatusCache_o *v40; // x25
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  int64_t Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v48; // x1
  struct System_Int32_array *reinforcementsIds; // x8
  __int64 ReinfoIndex_k__BackingField; // x9
  WarBoardReinforcementsEntity_o *v51; // x8
  int32_t id; // w9
  int32_t forceId; // w26
  int32_t groupId; // w27
  int32_t pieceIndex; // w28
  int32_t squareIndex; // w9
  struct WarBoardStagePieceDetailEntity_o **p_stagePieceDetailEntity; // x24
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x8
  bool IsNotIncludeWin; // w8
  int32_t actionType; // w8
  __int128 v61; // q1
  WarBoardManager_o *v62; // x23
  struct BattleServantData_o *BattleServant; // x0
  struct BattleServantData_o **p_battleServant_k__BackingField; // x23
  System_String_array **v65; // x2
  System_String_array **v66; // x3
  System_Boolean_array **v67; // x4
  System_Int32_array **v68; // x5
  System_Int32_array *v69; // x6
  System_Int32_array *v70; // x7
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  int32_t v77; // w8
  WarBoardActionPointClassMaster_o *v78; // x24
  const MethodInfo *v79; // x1
  WarBoardActionPointEntity_o *v80; // x25
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x0
  struct WarBoardCost_o *v82; // x0
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  int32_t forceId_k__BackingField; // w9
  int defeatPoint; // w8
  struct BattleDeckServantData_o *deckSvt; // x8
  int64_t npcId; // x8
  __int64 v93; // x8
  int64_t npcSvtEquipId; // x8
  __int64 v95; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v96; // [xsp+0h] [xbp-B0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+20h] [xbp-90h]
  int32_t value; // [xsp+4Ch] [xbp-64h] BYREF
  WarBoardReinforcementsEntity_o *reinforcementsEntity; // [xsp+50h] [xbp-60h] BYREF
  WarBoardStageReinforcementsEntity_o *entity; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_42E7636 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardActionPointClassMaster___, stageId, (_DWORD)servantData, saveData);
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___, v19, v20, v21);
    sub_B5D5C4(&DataManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__, v25, v26, v27);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v28, v29, v30);
    sub_B5D5C4(&WarBoardPieceData_PieceStatusCache_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v34, v35, v36);
    sub_B5D5C4(&WarBoardPieceData_TypeInfo, v37, v38, v39);
    byte_42E7636 = 1;
  }
  reinforcementsEntity = 0LL;
  entity = 0LL;
  value = 0;
  v40 = (WarBoardPieceData_PieceStatusCache_o *)sub_B5D694(WarBoardPieceData_PieceStatusCache_TypeInfo);
  WarBoardPieceData_PieceStatusCache___ctor(v40, 0LL);
  this->fields.statusCache = v40;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.statusCache,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.stageId = stageId;
  if ( !saveData )
    goto LABEL_58;
  this->fields._StageReinfoId_k__BackingField = saveData->fields.stageReinforcementId;
  this->fields._ReinfoIndex_k__BackingField = saveData->fields.reinforcementIndex;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardStageReinforcementsMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_58;
  WarBoardStageReinforcementsMaster__TryGetEntity(
    (WarBoardStageReinforcementsMaster_o *)Master_WarQuestSelectionMaster,
    &entity,
    stageId,
    this->fields._StageReinfoId_k__BackingField,
    0LL);
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
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
  v51 = reinforcementsEntity;
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
    v51 = reinforcementsEntity;
  }
  this->fields._uniqueIndex_k__BackingField = (forceId << 24) | ((unsigned __int8)groupId << 16) | (unsigned __int16)pieceIndex;
  squareIndex = saveData->fields.squareIndex;
  this->fields._nowSquareIndex_k__BackingField = squareIndex;
  this->fields._PutSquareIndex_k__BackingField = squareIndex;
  this->fields._overwriteActionType_k__BackingField = saveData->fields.overwriteActionType;
  this->fields._overwriteAiId_k__BackingField = saveData->fields.overwriteAiId;
  this->fields._entryTurn_k__BackingField = saveData->fields.entryTurn;
  if ( !v51 )
    goto LABEL_58;
  this->fields._breakPointMax_k__BackingField = v51->fields.breakPoint;
  Master_WarQuestSelectionMaster = (int64_t)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardStagePieceDetailMaster___);
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
  Master_WarQuestSelectionMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !servantData )
    goto LABEL_58;
  v61 = *(_OWORD *)&servantData->fields.id.fields.fakeValue;
  v62 = (WarBoardManager_o *)Master_WarQuestSelectionMaster;
  *(_OWORD *)&v97.fields.currentCryptoKey = *(_OWORD *)&servantData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v97.fields.fakeValue = v61;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v96 = v97;
  Master_WarQuestSelectionMaster = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v96, 0LL);
  if ( !v62 )
    goto LABEL_58;
  BattleServant = WarBoardManager__GetBattleServant(v62, Master_WarQuestSelectionMaster, 0LL);
  this->fields._battleServant_k__BackingField = BattleServant;
  p_battleServant_k__BackingField = &this->fields._battleServant_k__BackingField;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._battleServant_k__BackingField,
    (System_Int32_array **)BattleServant,
    v65,
    v66,
    v67,
    v68,
    v69,
    v70);
  this->fields.serverServantData = servantData;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.serverServantData,
    (System_Int32_array **)servantData,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
  v77 = servantData->fields.squareIndex;
  this->fields._nowSquareIndex_k__BackingField = v77;
  this->fields._PutSquareIndex_k__BackingField = v77;
  this->fields._limitActionCount_k__BackingField = servantData->fields.limitActionPoint;
  this->fields._currentActionCount_k__BackingField = servantData->fields.currentActionPoint;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v78 = (WarBoardActionPointClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
  Master_WarQuestSelectionMaster = (int64_t)WarBoardPieceData__get_ActionPointEntity(this, v79);
  if ( !this->fields._battleServant_k__BackingField
    || (v80 = (WarBoardActionPointEntity_o *)Master_WarQuestSelectionMaster,
        Master_WarQuestSelectionMaster = BattleServantData__getClassId(this->fields._battleServant_k__BackingField, 0LL),
        !v78)
    || (EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                        v78,
                                        v80,
                                        Master_WarQuestSelectionMaster,
                                        0LL),
        v82 = WarBoardCost__Create(
                EntityFromActionPointEntity,
                this->fields.stagePieceDetailEntity,
                reinforcementsEntity,
                0LL),
        this->fields._Cost_k__BackingField = v82,
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields._Cost_k__BackingField,
          (System_Int32_array **)v82,
          v83,
          v84,
          v85,
          v86,
          v87,
          v88),
        (Master_WarQuestSelectionMaster = (int64_t)this->fields._Cost_k__BackingField) == 0) )
  {
LABEL_58:
    sub_B5D69C(Master_WarQuestSelectionMaster, v48);
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
                                                  (const MethodInfo_2EE8918 *)Method_System_Collections_Generic_Dictionary_uint__WarBoardStageNpcEntity__get_Item__);
    }
    else
    {
      Master_WarQuestSelectionMaster = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
    v93 = *(_QWORD *)(Master_WarQuestSelectionMaster + 48);
    if ( !v93 )
      goto LABEL_58;
    if ( *(_DWORD *)(v93 + 24) > (unsigned int)npcIdx )
    {
      npcId = *(_QWORD *)(v93 + 8LL * npcIdx + 32);
      goto LABEL_56;
    }
LABEL_59:
    v95 = sub_B5D6C8(Master_WarQuestSelectionMaster);
    sub_B5D668(v95, 0LL);
  }
LABEL_57:
  WarBoardPieceData__SetServantIconData(this, v48);
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
    sub_B5D69C(Cost_k__BackingField, method);
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
    sub_B5D69C(0LL, flg);
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
      sub_B5D69C(0LL, count);
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
    sub_B5D69C(0LL, squareIndex);
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
    sub_B5D69C(0LL, squareIndex);
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
          sub_B5D69C(v10, v11);
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
    sub_B5D69C(0LL, squareIndex);
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
      sub_B5D69C(Cost_k__BackingField, method);
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
    sub_B5D69C(0LL, squareIndex);
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
    sub_B5D69C(pieceComponent, method);
  }
}


bool __fastcall WarBoardPieceData__CheckWallAttackCond(
        WarBoardPieceData_o *this,
        WarBoardWallData_o *targetWall,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  _QWORD **v11; // x22
  __int64 v12; // x21
  __int16 v13; // w8
  __int64 v14; // x21
  __int64 v15; // x21
  __int64 v16; // x21
  WarBoardStageWallEntity_o *wallEntity; // x0
  WarBoardStageWallEntity_o *v18; // x20
  System_Int32_array *Individuality; // x0
  struct System_String_o *name; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x19
  unsigned __int64 v22; // x21
  __int64 v24; // x0

  if ( (byte_42E763D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_int___, (_DWORD)targetWall, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Contains_int___, v6, v7, v8);
    byte_42E763D = 1;
  }
  if ( !targetWall
    || WarBoardWallData__get_wallAttackForceId(targetWall, 0LL) != this->fields._forceId_k__BackingField
    && (WarBoardWallData__get_wallAttackForceId(targetWall, 0LL) & 0x80000000) == 0 )
  {
    return 0;
  }
  v11 = (_QWORD **)Method_System_Array_Empty_int___;
  v12 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
  v13 = *(_WORD *)(v12 + 306);
  if ( (v13 & 1) == 0 )
  {
    sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
    v13 = *(_WORD *)(v12 + 306);
  }
  if ( (v13 & 0x400) != 0 )
  {
    v14 = *v11[6];
    if ( (*(_BYTE *)(v14 + 306) & 1) == 0 )
      sub_AF52C4(*v11[6]);
    if ( !*(_DWORD *)(v14 + 224) )
    {
      v15 = *v11[6];
      if ( (*(_BYTE *)(v15 + 306) & 1) == 0 )
        sub_AF52C4(*v11[6]);
      j_il2cpp_runtime_class_init_0(v15);
    }
  }
  v16 = *v11[6];
  if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
    sub_AF52C4(*v11[6]);
  wallEntity = targetWall->fields.wallEntity;
  if ( wallEntity )
  {
    wallEntity = (WarBoardStageWallEntity_o *)WarBoardStageWallEntity__GetCondAttackIndividuality(wallEntity, 0LL);
    v18 = wallEntity;
    if ( wallEntity )
      goto LABEL_19;
LABEL_28:
    sub_B5D69C(wallEntity, v9);
  }
  v18 = **(WarBoardStageWallEntity_o ***)(v16 + 184);
  if ( !v18 )
    goto LABEL_28;
LABEL_19:
  if ( v18->fields.name )
  {
    Individuality = WarBoardPieceData__GetIndividuality(this, 0LL, v10);
    name = v18->fields.name;
    if ( (int)name >= 1 )
    {
      v21 = (System_Collections_Generic_IEnumerable_TSource__o *)Individuality;
      v22 = 0LL;
      while ( 1 )
      {
        if ( v22 >= (unsigned int)name )
        {
          v24 = sub_B5D6C8(Individuality);
          sub_B5D668(v24, 0LL);
        }
        Individuality = (System_Int32_array *)System_Linq_Enumerable__Contains_int_(
                                                v21,
                                                *(&v18->fields.attackForceId + v22),
                                                (const MethodInfo_1CA4E8C *)Method_System_Linq_Enumerable_Contains_int___);
        if ( ((unsigned __int8)Individuality & 1) != 0 )
          break;
        LODWORD(name) = v18->fields.name;
        if ( (__int64)++v22 >= (int)name )
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x8
  __int64 v9; // x11
  UnityEngine_Object_o *v10; // x19
  _BOOL8 v11; // x0
  __int64 v12; // x1

  if ( (byte_42E7645 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&WarBoardServantPieceComponent_TypeInfo, v5, v6, v7);
    byte_42E7645 = 1;
  }
  pieceComponent = this->fields.pieceComponent;
  if ( pieceComponent
    && (v9 = *(&WarBoardServantPieceComponent_TypeInfo->_2.bitflags2 + 1),
        *(&pieceComponent->klass->_2.bitflags2 + 1) >= (unsigned int)v9) )
  {
    if ( (WarBoardServantPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[v9 - 1] == WarBoardServantPieceComponent_TypeInfo )
      v10 = (UnityEngine_Object_o *)this->fields.pieceComponent;
    else
      v10 = 0LL;
  }
  else
  {
    v10 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v11 = UnityEngine_Object__op_Equality(v10, 0LL, 0LL);
  if ( !v11 )
  {
    if ( !v10 )
      sub_B5D69C(v11, v12);
    WarBoardServantPieceComponent__ClearPartyBuff((WarBoardServantPieceComponent_o *)v10, 0LL);
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields._PrevAiRoute_k__BackingField, 0LL, v2, v3, v4, v5, v6, v7);
}


System_Int32_array *__fastcall WarBoardPieceData__CreatePieceEventVals(
        WarBoardPieceData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Int32_array *result; // x0
  __int64 v6; // x1
  il2cpp_array_size_t max_length; // w8
  __int64 v8; // x0

  if ( (byte_42E764F & 1) == 0 )
  {
    sub_B5D5C4(&int___TypeInfo, (_DWORD)method, v2, v3);
    byte_42E764F = 1;
  }
  result = (System_Int32_array *)sub_B5D5DC(int___TypeInfo, 3LL);
  if ( !result )
    sub_B5D69C(0LL, v6);
  max_length = result->max_length;
  if ( !max_length
    || (result->m_Items[1] = this->fields._forceId_k__BackingField, max_length == 1)
    || (result->m_Items[2] = this->fields._groupId_k__BackingField, max_length <= 2) )
  {
    v8 = sub_B5D6C8(result);
    sub_B5D668(v8, 0LL);
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
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WarBoardManager_TaskList_o *v11; // x19
  __int64 v12; // x1
  unsigned int breakPoint_k__BackingField; // w22
  unsigned int v14; // w21
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  if ( (byte_42E7640 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardMessageMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&WarBoardManager_TaskList_TypeInfo, v8, v9, v10);
    byte_42E7640 = 1;
  }
  v11 = (WarBoardManager_TaskList_o *)sub_B5D694(WarBoardManager_TaskList_TypeInfo);
  WarBoardManager_TaskList___ctor(v11, 0LL);
  breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
  v14 = breakPoint_k__BackingField - 1;
  if ( (int)(breakPoint_k__BackingField - 1) < 1 )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardMessageMaster___);
    pieceComponent = this->fields.pieceComponent;
    if ( pieceComponent )
    {
      ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, _QWORD, _QWORD, __int64, Il2CppMethodPointer))pieceComponent->klass->vtable._31_OnBreak.method)(
        pieceComponent,
        breakPoint_k__BackingField,
        0LL,
        v11,
        v14,
        0LL,
        1LL,
        pieceComponent->klass->vtable._32_OnDead.methodPtr);
      pieceComponent = this->fields.pieceComponent;
      if ( pieceComponent )
      {
        ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, WarBoardManager_TaskList_o *, __int64, Il2CppMethodPointer))pieceComponent->klass->vtable._32_OnDead.method)(
          pieceComponent,
          0LL,
          v11,
          1LL,
          pieceComponent->klass->vtable._33_OnRevive.methodPtr);
        return v11;
      }
    }
LABEL_13:
    sub_B5D69C(pieceComponent, v12);
  }
  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    goto LABEL_13;
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, _QWORD, WarBoardManager_TaskList_o *, _QWORD, _QWORD, __int64, Il2CppMethodPointer))pieceComponent->klass->vtable._31_OnBreak.method)(
    pieceComponent,
    breakPoint_k__BackingField,
    0LL,
    v11,
    v14,
    0LL,
    1LL,
    pieceComponent->klass->vtable._32_OnDead.methodPtr);
  return v11;
}


void __fastcall WarBoardPieceData__Deselect(WarBoardPieceData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardData_o *pieceComponent; // x0
  WarBoardSquareData_o *Square; // x0

  if ( (byte_42E763F & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E763F = 1;
  }
  pieceComponent = (WarBoardData_o *)this->fields.pieceComponent;
  if ( !pieceComponent
    || (((void (__fastcall *)(WarBoardData_o *, Il2CppMethodPointer))pieceComponent->klass[1].vtable._0_Equals.method)(
          pieceComponent,
          pieceComponent->klass[1].vtable._1_Finalize.methodPtr),
        (pieceComponent = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (pieceComponent = (WarBoardData_o *)pieceComponent[1].fields.reinforcementsSaveList) == 0LL )
  {
    sub_B5D69C(pieceComponent, method);
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
      sub_B5D69C(0LL, *(_QWORD *)&substructPoint);
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
      sub_B5D69C(0LL, *(_QWORD *)&substructPoint);
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
      sub_B5D69C(0LL, *(_QWORD *)&substructPoint);
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
      sub_B5D69C(0LL, *(_QWORD *)&substructPoint);
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
    sub_B5D69C(Cost_k__BackingField, method);
  p_currentActionCount_k__BackingField = &v4->fields._CurrentActionPoint_k__BackingField;
  return *p_currentActionCount_k__BackingField;
}


BuffList_TYPE_array *__fastcall WarBoardPieceData__GetBuffTypesFromConstantStr(
        System_String_o *key,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Int32_array *ValueAsIntArray; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x19
  WarBoardPieceData___c_c *v25; // x0
  struct WarBoardPieceData___c_StaticFields *static_fields; // x8
  System_Func_int__BuffList_TYPE__o *_9__336_0; // x20
  Il2CppObject *v28; // x21
  struct WarBoardPieceData___c_StaticFields *v29; // x0
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  BuffList_TYPE_array *result; // x0
  _QWORD **v38; // x20
  __int64 v39; // x19
  __int16 v40; // w8
  __int64 v41; // x19
  __int64 v42; // x19
  __int64 v43; // x19

  if ( (byte_42E764D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_BuffList_TYPE___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_int__BuffList_TYPE___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_BuffList_TYPE___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Func_int__BuffList_TYPE___ctor__, v11, v12, v13);
    sub_B5D5C4(&System_Func_int__BuffList_TYPE__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_WarBoardPieceData___c__GetBuffTypesFromConstantStr_b__336_0__, v17, v18, v19);
    sub_B5D5C4(&WarBoardPieceData___c_TypeInfo, v20, v21, v22);
    byte_42E764D = 1;
  }
  ValueAsIntArray = ConstantStrMaster__GetValueAsIntArray(key, 0LL);
  if ( !ValueAsIntArray )
    goto LABEL_13;
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)ValueAsIntArray;
  v25 = WarBoardPieceData___c_TypeInfo;
  if ( (BYTE3(WarBoardPieceData___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !WarBoardPieceData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPieceData___c_TypeInfo);
    v25 = WarBoardPieceData___c_TypeInfo;
  }
  static_fields = v25->static_fields;
  _9__336_0 = static_fields->__9__336_0;
  if ( !_9__336_0 )
  {
    if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) != 0 && !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      static_fields = WarBoardPieceData___c_TypeInfo->static_fields;
    }
    v28 = (Il2CppObject *)static_fields->__9;
    _9__336_0 = (System_Func_int__BuffList_TYPE__o *)sub_B5D694(System_Func_int__BuffList_TYPE__TypeInfo);
    System_Func_int__BuffList_TYPE____ctor(
      _9__336_0,
      v28,
      Method_WarBoardPieceData___c__GetBuffTypesFromConstantStr_b__336_0__,
      (const MethodInfo_2C29340 *)Method_System_Func_int__BuffList_TYPE___ctor__);
    v29 = WarBoardPieceData___c_TypeInfo->static_fields;
    v29->__9__336_0 = _9__336_0;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v29->__9__336_0,
      (System_Int32_array **)_9__336_0,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
  }
  v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__BuffList_TYPE_(
                                                               v24,
                                                               (System_Func_TSource__TResult__o *)_9__336_0,
                                                               (const MethodInfo_1CB1A94 *)Method_System_Linq_Enumerable_Select_int__BuffList_TYPE___);
  result = System_Linq_Enumerable__ToArray_BuffList_TYPE_(
             v36,
             (const MethodInfo_1CB7748 *)Method_System_Linq_Enumerable_ToArray_BuffList_TYPE___);
  if ( !result )
  {
LABEL_13:
    v38 = (_QWORD **)Method_System_Array_Empty_BuffList_TYPE___;
    v39 = **((_QWORD **)Method_System_Array_Empty_BuffList_TYPE___ + 6);
    v40 = *(_WORD *)(v39 + 306);
    if ( (v40 & 1) == 0 )
    {
      sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_BuffList_TYPE___ + 6));
      v40 = *(_WORD *)(v39 + 306);
    }
    if ( (v40 & 0x400) != 0 )
    {
      v41 = *v38[6];
      if ( (*(_BYTE *)(v41 + 306) & 1) == 0 )
        sub_AF52C4(*v38[6]);
      if ( !*(_DWORD *)(v41 + 224) )
      {
        v42 = *v38[6];
        if ( (*(_BYTE *)(v42 + 306) & 1) == 0 )
          sub_AF52C4(*v38[6]);
        j_il2cpp_runtime_class_init_0(v42);
      }
    }
    v43 = *v38[6];
    if ( (*(_BYTE *)(v43 + 306) & 1) == 0 )
      sub_AF52C4(*v38[6]);
    return **(BuffList_TYPE_array ***)(v43 + 184);
  }
  return result;
}


int32_t __fastcall WarBoardPieceData__GetDeadEffectType(WarBoardPieceData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WarBoardReinforcementsMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x0
  int32_t value; // [xsp+4h] [xbp-1Ch] BYREF
  WarBoardReinforcementsEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E7648 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42E7648 = 1;
  }
  entity = 0LL;
  value = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
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
    sub_B5D69C(Master_WarQuestSelectionMaster, v9);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_Generic_List_int__o *v15; // x20
  BattleServantData_o *battleServant_k__BackingField; // x0
  bool IsIgnoreIndivUnreleasable; // w3
  bool IsIncludeIgnoreIndividuality; // w2
  bool v19; // w4
  System_Int32_array *ConcatServantAndBuffIndividualityies; // x0
  __int64 v21; // x1

  if ( (byte_42E762F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, (_DWORD)args, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v12, v13, v14);
    byte_42E762F = 1;
  }
  v15 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
  if ( battleServant_k__BackingField )
  {
    if ( args )
    {
      IsIgnoreIndivUnreleasable = args->fields.IsIgnoreIndivUnreleasable;
      IsIncludeIgnoreIndividuality = args->fields.IsIncludeIgnoreIndividuality;
      v19 = !args->fields.IsIncludePassiveIndividuality;
    }
    else
    {
      IsIncludeIgnoreIndividuality = 0;
      IsIgnoreIndivUnreleasable = 0;
      v19 = 0;
    }
    ConcatServantAndBuffIndividualityies = BattleServantData__getConcatServantAndBuffIndividualityies(
                                             battleServant_k__BackingField,
                                             0LL,
                                             IsIncludeIgnoreIndividuality,
                                             IsIgnoreIndivUnreleasable,
                                             v19,
                                             0LL);
    if ( !v15 )
LABEL_15:
      sub_B5D69C(ConcatServantAndBuffIndividualityies, v21);
    System_Collections_Generic_List_int___AddRange(
      v15,
      (System_Collections_Generic_IEnumerable_T__o *)ConcatServantAndBuffIndividualityies,
      (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  ConcatServantAndBuffIndividualityies = (System_Int32_array *)BasicHelper__IsNullOrEmpty(
                                                                 (System_Collections_ICollection_o *)this->fields._individuality_k__BackingField,
                                                                 0LL);
  if ( ((unsigned __int8)ConcatServantAndBuffIndividualityies & 1) != 0 )
  {
    if ( !v15 )
      goto LABEL_15;
  }
  else
  {
    if ( !v15 )
      goto LABEL_15;
    System_Collections_Generic_List_int___AddRange(
      v15,
      (System_Collections_Generic_IEnumerable_T__o *)this->fields._individuality_k__BackingField,
      (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
  }
  return System_Collections_Generic_List_int___ToArray(
           v15,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
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
      sub_B5D69C(Cost_k__BackingField, method);
    }
    return this->fields._limitActionCount_k__BackingField;
  }
  return result;
}


int32_t __fastcall WarBoardPieceData__GetMoveAfterAttack(WarBoardPieceData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WarBoardReinforcementsMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x0
  int32_t type; // [xsp+4h] [xbp-1Ch] BYREF
  WarBoardReinforcementsEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E7649 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42E7649 = 1;
  }
  entity = 0LL;
  type = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
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
    sub_B5D69C(Master_WarQuestSelectionMaster, v9);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WarBoardReinforcementsMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1
  WarBoardStagePieceDetailEntity_o *stagePieceDetailEntity; // x0
  int32_t type; // [xsp+4h] [xbp-1Ch] BYREF
  WarBoardReinforcementsEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E764A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42E764A = 1;
  }
  entity = 0LL;
  type = 0;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardReinforcementsMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
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
    sub_B5D69C(Master_WarQuestSelectionMaster, v9);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  BattleServantData_o *battleServant_k__BackingField; // x0
  struct WarBoardPieceData_PieceStatusCache_o *statusCache; // x20
  bool HasAvailablePermanentSleepBuff; // w1
  __int16 *v14; // x0
  unsigned __int16 *p_HasAvailablePermanentSleepBuff_k__BackingField; // x0
  struct System_Nullable_bool__o v17; // [xsp+8h] [xbp-18h] BYREF
  unsigned __int16 HasAvailablePermanentSleepBuff_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E763B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Nullable_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Nullable_bool__get_HasValue__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Nullable_bool__get_Value__, v8, v9, v10);
    byte_42E763B = 1;
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
          v14 = (__int16 *)&v17,
          v17 = 0,
          System_Nullable_bool____ctor(
            (System_Nullable_bool__o)v14,
            HasAvailablePermanentSleepBuff,
            (const MethodInfo_2347ED0 *)Method_System_Nullable_bool___ctor__),
          statusCache->fields._HasAvailablePermanentSleepBuff_k__BackingField = v17,
          (statusCache = this->fields.statusCache) == 0LL) )
    {
      sub_B5D69C(battleServant_k__BackingField, method);
    }
    p_HasAvailablePermanentSleepBuff_k__BackingField = &HasAvailablePermanentSleepBuff_k__BackingField;
    HasAvailablePermanentSleepBuff_k__BackingField = (unsigned __int16)statusCache->fields._HasAvailablePermanentSleepBuff_k__BackingField;
    LOBYTE(battleServant_k__BackingField) = System_Nullable_bool___get_Value(
                                              (System_Nullable_bool__o)p_HasAvailablePermanentSleepBuff_k__BackingField,
                                              (const MethodInfo_2347EEC *)Method_System_Nullable_bool__get_Value__);
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
  int v2; // w2
  __int64 v3; // x3
  WarBoardPieceData_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  struct WarBoardPieceData_PieceStatusCache_o *statusCache; // x8
  struct WarBoardPieceData_PieceStatusCache_o *v18; // x20
  bool HasAnyBuffByBuffTypes; // w1
  __int16 *v20; // x0
  unsigned __int16 *p_HasCompletelyActionDisabledBuff_k__BackingField; // x0
  struct System_Nullable_bool__o v24; // [xsp+8h] [xbp-18h] BYREF
  unsigned __int16 HasCompletelyActionDisabledBuff_k__BackingField; // [xsp+Ch] [xbp-14h] BYREF

  v4 = this;
  if ( (byte_42E763C & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Nullable_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Nullable_bool__get_HasValue__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Nullable_bool__get_Value__, v8, v9, v10);
    sub_B5D5C4(&WarBoardPieceData_TypeInfo, v11, v12, v13);
    this = (WarBoardPieceData_o *)sub_B5D5C4(&StringLiteral_15486/*"WAR_BOARD_ACTION_DISABLED_BUFF_TYPES"*/, v14, v15, v16);
    byte_42E763C = 1;
  }
  HasCompletelyActionDisabledBuff_k__BackingField = 0;
  if ( v4->fields._battleServant_k__BackingField )
  {
    statusCache = v4->fields.statusCache;
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
                                      (System_String_o *)StringLiteral_15486/*"WAR_BOARD_ACTION_DISABLED_BUFF_TYPES"*/,
                                      method);
      if ( !v4->fields._battleServant_k__BackingField
        || (v18 = v4->fields.statusCache,
            HasAnyBuffByBuffTypes = BattleServantData__HasAnyBuffByBuffTypes(
                                      v4->fields._battleServant_k__BackingField,
                                      (BuffList_TYPE_array *)this,
                                      0LL),
            v20 = (__int16 *)&v24,
            v24 = 0,
            System_Nullable_bool____ctor(
              (System_Nullable_bool__o)v20,
              HasAnyBuffByBuffTypes,
              (const MethodInfo_2347ED0 *)Method_System_Nullable_bool___ctor__),
            !v18)
        || (v18->fields._HasCompletelyActionDisabledBuff_k__BackingField = v24,
            (statusCache = v4->fields.statusCache) == 0LL) )
      {
LABEL_16:
        sub_B5D69C(this, method);
      }
    }
    p_HasCompletelyActionDisabledBuff_k__BackingField = &HasCompletelyActionDisabledBuff_k__BackingField;
    HasCompletelyActionDisabledBuff_k__BackingField = (unsigned __int16)statusCache->fields._HasCompletelyActionDisabledBuff_k__BackingField;
    return System_Nullable_bool___get_Value(
             (System_Nullable_bool__o)p_HasCompletelyActionDisabledBuff_k__BackingField,
             (const MethodInfo_2347EEC *)Method_System_Nullable_bool__get_Value__);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  __int64 v38; // x20
  WarBoardData_o *Instance; // x0
  __int64 v40; // x1
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  System_Int32_array **reinforcementsSaveList; // x1
  WarBoardSquareData_o *Square; // x0
  System_Collections_Generic_IEnumerable_TSource__o *linkedSquares; // x21
  System_Func_int__BattleActionData_SideEffectData__o *v50; // x22
  System_Collections_Generic_IEnumerable_T__o *v51; // x0
  System_Collections_Generic_IEnumerable_T__o *v52; // x0
  DrawLotsDisplayMessage_DisplayedInGroup_SaveData_array *v53; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v54; // x21
  WarBoardCost_o *Cost_k__BackingField; // x0
  bool CanAction; // w8
  bool result; // w0

  if ( (byte_42E7631 & 1) == 0 )
  {
    sub_B5D5C4(&Method_BasicHelper_Any_WarBoardWallData___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_BasicHelper_ExcludeNull_WarBoardWallData___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_int__WarBoardWallData___, v8, v9, v10);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_WarBoardWallData___, v11, v12, v13);
    sub_B5D5C4(&Method_System_Func_WarBoardWallData__bool___ctor__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Func_int__WarBoardWallData___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Func_int__WarBoardWallData__TypeInfo, v20, v21, v22);
    sub_B5D5C4(&System_Func_WarBoardWallData__bool__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v26, v27, v28);
    sub_B5D5C4(&Method_WarBoardPieceData___c__DisplayClass219_0__HasVitalityToDoAnyActions_b__0__, v29, v30, v31);
    sub_B5D5C4(&WarBoardPieceData___c__DisplayClass219_0_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_WarBoardPieceData_CheckWallAttackCond__, v35, v36, v37);
    byte_42E7631 = 1;
  }
  v38 = sub_B5D694(WarBoardPieceData___c__DisplayClass219_0_TypeInfo);
  WarBoardPieceData___c__DisplayClass219_0___ctor((WarBoardPieceData___c__DisplayClass219_0_o *)v38, 0LL);
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  if ( !v38 )
    goto LABEL_19;
  reinforcementsSaveList = (System_Int32_array **)Instance[1].fields.reinforcementsSaveList;
  *(_QWORD *)(v38 + 16) = reinforcementsSaveList;
  sub_B5D560((BattleServantConfConponent_o *)(v38 + 16), reinforcementsSaveList, v41, v42, v43, v44, v45, v46);
  Instance = *(WarBoardData_o **)(v38 + 16);
  if ( !Instance )
    goto LABEL_19;
  Square = WarBoardData__GetSquare(Instance, this->fields._nowSquareIndex_k__BackingField, 0LL);
  if ( Square
    && (linkedSquares = (System_Collections_Generic_IEnumerable_TSource__o *)Square->fields.linkedSquares) != 0LL )
  {
    v50 = (System_Func_int__BattleActionData_SideEffectData__o *)sub_B5D694(System_Func_int__WarBoardWallData__TypeInfo);
    System_Func_int__BattleActionData_SideEffectData____ctor(
      v50,
      (Il2CppObject *)v38,
      Method_WarBoardPieceData___c__DisplayClass219_0__HasVitalityToDoAnyActions_b__0__,
      (const MethodInfo_2C29938 *)Method_System_Func_int__WarBoardWallData___ctor__);
    v51 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_int__BattleActionData_SideEffectData_(
                                                           linkedSquares,
                                                           (System_Func_TSource__TResult__o *)v50,
                                                           (const MethodInfo_1CB1D40 *)Method_System_Linq_Enumerable_Select_int__WarBoardWallData___);
    v52 = BasicHelper__ExcludeNull_BlankEarthSpotAnimStateManager_SpotStateData_(
            v51,
            (const MethodInfo_1AD70CC *)Method_BasicHelper_ExcludeNull_WarBoardWallData___);
    v53 = System_Linq_Enumerable__ToArray_DrawLotsDisplayMessage_DisplayedInGroup_SaveData_(
            (System_Collections_Generic_IEnumerable_TSource__o *)v52,
            (const MethodInfo_1CB7860 *)Method_System_Linq_Enumerable_ToArray_WarBoardWallData___);
    if ( v53 )
    {
      v54 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardWallData__bool__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
        v54,
        (Il2CppObject *)this,
        Method_WarBoardPieceData_CheckWallAttackCond__,
        (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardWallData__bool___ctor__);
      LOBYTE(v53) = BasicHelper__Any_USFGOPlayBgmEventConditional_CondBGM_(
                      (WellFired_USFGOPlayBgmEventConditional_CondBGM_array *)v53,
                      (System_Func_T__bool__o *)v54,
                      (const MethodInfo_1AD6DE0 *)Method_BasicHelper_Any_WarBoardWallData___);
    }
  }
  else
  {
    LOBYTE(v53) = 0;
  }
  Cost_k__BackingField = this->fields._Cost_k__BackingField;
  if ( Cost_k__BackingField && WarBoardCost__get_HasCost(Cost_k__BackingField, 0LL) )
  {
    Instance = (WarBoardData_o *)this->fields._Cost_k__BackingField;
    if ( Instance )
    {
      CanAction = WarBoardCost__CanAction((WarBoardCost_o *)Instance, 0, (unsigned __int8)v53 & 1, 0LL);
      result = 0;
      if ( !CanAction )
        return result;
      return this->fields._limitActionCount_k__BackingField < 1 || this->fields._currentActionCount_k__BackingField > 0;
    }
LABEL_19:
    sub_B5D69C(Instance, v40);
  }
  return this->fields._limitActionCount_k__BackingField < 1 || this->fields._currentActionCount_k__BackingField > 0;
}


void __fastcall WarBoardPieceData__HideActionTarget(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, squareIndex);
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
      sub_B5D69C(pieceComponent, method);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  unsigned int breakPoint_k__BackingField; // w24
  WarBoardManager_TaskList_o *v14; // x20
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x23
  struct WarBoardPieceBaseComponent_o *v16; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  struct BattleServantData_o *battleServant_k__BackingField; // x20
  unsigned int MaxHp; // w0
  unsigned int v21; // w20
  int32_t type_k__BackingField; // w8
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  struct WarBoardUserServantData_o *serverServantData; // x8
  __int64 v25; // [xsp+8h] [xbp-38h] BYREF
  System_Nullable_float__o v26; // 0:x0.8
  System_Nullable_float__o v27; // 0:x0.8

  if ( (byte_42E764C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__,
      (_DWORD)taskListBreak,
      (_DWORD)taskListDead,
      method);
    sub_B5D5C4(&Method_System_Nullable_float___ctor__, v7, v8, v9);
    sub_B5D5C4(&WarBoardManager_TaskList_TypeInfo, v10, v11, v12);
    byte_42E764C = 1;
  }
  breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
  this->fields._breakPoint_k__BackingField = breakPoint_k__BackingField - 1;
  v14 = (WarBoardManager_TaskList_o *)sub_B5D694(WarBoardManager_TaskList_TypeInfo);
  WarBoardManager_TaskList___ctor(v14, 0LL);
  pieceComponent = this->fields.pieceComponent;
  if ( ((breakPoint_k__BackingField - 1) & 0x80000000) == 0 )
  {
    v26 = (System_Nullable_float__o)&v25;
    v25 = 0LL;
    System_Nullable_float____ctor(v26, 1.0, (const MethodInfo_234CDB0 *)Method_System_Nullable_float___ctor__);
    if ( pieceComponent )
    {
      v16 = (struct WarBoardPieceBaseComponent_o *)((__int64 (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, __int64, WarBoardManager_TaskList_o *, __int64, _QWORD, __int64, Il2CppMethodPointer))pieceComponent->klass->vtable._31_OnBreak.method)(
                                                     pieceComponent,
                                                     breakPoint_k__BackingField,
                                                     v25,
                                                     v14,
                                                     0xFFFFFFFFLL,
                                                     0LL,
                                                     1LL,
                                                     pieceComponent->klass->vtable._32_OnDead.methodPtr);
      if ( taskListBreak )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskListBreak,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__);
        battleServant_k__BackingField = this->fields._battleServant_k__BackingField;
        if ( battleServant_k__BackingField )
        {
          MaxHp = BattleServantData__getMaxHp(this->fields._battleServant_k__BackingField, 0LL);
          ((void (__fastcall *)(struct BattleServantData_o *, _QWORD, Il2CppMethodPointer))battleServant_k__BackingField->klass->vtable._10_set_hp.method)(
            battleServant_k__BackingField,
            MaxHp,
            battleServant_k__BackingField->klass->vtable._11_get_reducedhp.methodPtr);
        }
        v21 = 1;
        goto LABEL_17;
      }
    }
LABEL_20:
    sub_B5D69C(v16, v17);
  }
  v27 = (System_Nullable_float__o)&v25;
  v25 = 0LL;
  System_Nullable_float____ctor(v27, 1.0, (const MethodInfo_234CDB0 *)Method_System_Nullable_float___ctor__);
  if ( !pieceComponent )
    goto LABEL_20;
  v16 = (struct WarBoardPieceBaseComponent_o *)((__int64 (__fastcall *)(struct WarBoardPieceBaseComponent_o *, __int64, WarBoardManager_TaskList_o *, __int64, Il2CppMethodPointer))pieceComponent->klass->vtable._32_OnDead.method)(
                                                 pieceComponent,
                                                 v25,
                                                 v14,
                                                 1LL,
                                                 pieceComponent->klass->vtable._33_OnRevive.methodPtr);
  if ( !taskListDead )
    goto LABEL_20;
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)taskListDead,
    (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardManager_TaskList__Add__);
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
  v21 = 0;
LABEL_17:
  WarBoardPieceData__SetBreakPoint(this, this->fields._breakPoint_k__BackingField, v18);
  v16 = this->fields.pieceComponent;
  if ( !v16 )
    goto LABEL_20;
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, _QWORD, Il2CppMethodPointer))v16->klass->vtable._15_ChangeStatus.method)(
    v16,
    v21,
    v16->klass->vtable._16_IsModifyStatus.methodPtr);
  v16 = this->fields.pieceComponent;
  if ( !v16 )
    goto LABEL_20;
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))v16->klass->vtable._10_UpdateDisplayActionCount.method)(
    v16,
    v16->klass->vtable._11_UpdateUiBrightnessByPieceStatus.methodPtr);
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

  if ( (byte_42E7647 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Nullable_float___ctor__, cameraMove, (_DWORD)taskList, method);
    byte_42E7647 = 1;
  }
  this->fields._isDead_k__BackingField = 1;
  breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
  pieceComponent = this->fields.pieceComponent;
  v18 = (System_Nullable_float__o)&v17;
  v17 = 0LL;
  System_Nullable_float____ctor(v18, 1.0, (const MethodInfo_234CDB0 *)Method_System_Nullable_float___ctor__);
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
        System_Nullable_float____ctor(v19, 1.0, (const MethodInfo_234CDB0 *)Method_System_Nullable_float___ctor__),
        !v12) )
  {
    sub_B5D69C(v9, v10);
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
    sub_B5D69C(battleServant_k__BackingField, method);
  (*(void (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)battleServant_k__BackingField + 840LL))(
    battleServant_k__BackingField,
    0LL,
    *(_QWORD *)(*(_QWORD *)battleServant_k__BackingField + 848LL));
}


void __fastcall WarBoardPieceData__Select(WarBoardPieceData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardData_o *pieceComponent; // x0
  WarBoardSquareData_o *Square; // x0

  if ( (byte_42E763E & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E763E = 1;
  }
  pieceComponent = (WarBoardData_o *)this->fields.pieceComponent;
  if ( !pieceComponent
    || ((*(void (__fastcall **)(WarBoardData_o *, Il2CppMethodPointer))&pieceComponent->klass[1]._2.naturalAligment)(
          pieceComponent,
          pieceComponent->klass[1].vtable._0_Equals.methodPtr),
        (pieceComponent = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__)) == 0LL)
    || (pieceComponent = (WarBoardData_o *)pieceComponent[1].fields.reinforcementsSaveList) == 0LL )
  {
    sub_B5D69C(pieceComponent, method);
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
      sub_B5D69C(Cost_k__BackingField, *(_QWORD *)&ap);
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
    sub_B5D69C(this, bp);
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
  sub_B5D560(
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  void *pieceComponent; // x0
  int32_t limitActionCount_k__BackingField; // w9
  WarBoardCost_o *Cost_k__BackingField; // x0
  WarBoardData_o *v17; // x20
  int32_t PutSquareIndex_k__BackingField; // w21
  int32_t nowSquareIndex_k__BackingField; // w22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v20; // x23
  int32_t v21; // w0
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  const MethodInfo *v23; // x1
  struct WarBoardUserServantData_o *serverServantData; // x8

  if ( (byte_42E764B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Func_WarBoardPieceData__bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Func_WarBoardPieceData__bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_WarBoardPieceData__SetContinue_b__333_0__, v11, v12, v13);
    byte_42E764B = 1;
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
  pieceComponent = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !pieceComponent )
    goto LABEL_22;
  v17 = (WarBoardData_o *)*((_QWORD *)pieceComponent + 54);
  PutSquareIndex_k__BackingField = this->fields._PutSquareIndex_k__BackingField;
  nowSquareIndex_k__BackingField = this->fields._nowSquareIndex_k__BackingField;
  v20 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardPieceData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v20,
    (Il2CppObject *)this,
    Method_WarBoardPieceData__SetContinue_b__333_0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardPieceData__bool___ctor__);
  if ( !v17 )
    goto LABEL_22;
  v21 = WarBoardData__SearchNearestEmptySquare(
          v17,
          PutSquareIndex_k__BackingField,
          nowSquareIndex_k__BackingField,
          (System_Func_WarBoardPieceData__bool__o *)v20,
          0LL);
  serverMasterData_k__BackingField = this->fields._serverMasterData_k__BackingField;
  this->fields._nowSquareIndex_k__BackingField = v21;
  if ( serverMasterData_k__BackingField )
    serverMasterData_k__BackingField->fields.defeatPoint = this->fields._breakPointMax_k__BackingField;
  if ( this->fields.serverServantData && this->fields._battleServant_k__BackingField )
  {
    pieceComponent = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
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
        WarBoardPieceData__SetServantIconData(this, v23);
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
    sub_B5D69C(pieceComponent, method);
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
  __int64 v3; // x3
  WarBoardPieceData_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  System_Collections_Generic_IEnumerable_TSource__o *masterInfo; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v43; // x21
  System_Int32_array **v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  WarBoardActionPointClassMaster_o *Master_WarQuestSelectionMaster; // x20
  const MethodInfo *v53; // x1
  WarBoardActionPointClassEntity_o *MasterEntityFromStageId; // x0
  System_Int32_array **v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  struct WarBoardUserMasterData_o *v62; // x8
  int32_t currentPieceActionPoint; // w1
  System_Collections_Generic_IEnumerable_TSource__o *svtInfo; // x20
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v65; // x21
  System_Int32_array **v66; // x0
  struct WarBoardUserServantData_o **p_serverServantData; // x20
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  struct WarBoardUserServantData_o *serverServantData; // x8
  __int128 v75; // q1
  WarBoardPieceData_o *v76; // x21
  System_Int32_array **BattleServant; // x0
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  struct WarBoardUserServantData_o *v84; // x8
  WarBoardActionPointClassMaster_o *v85; // x20
  const MethodInfo *v86; // x1
  WarBoardActionPointEntity_o *v87; // x21
  WarBoardActionPointClassEntity_o *EntityFromActionPointEntity; // x20
  System_Int32_array **v89; // x0
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  struct WarBoardUserServantData_o *v96; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v97; // [xsp+0h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v98; // [xsp+20h] [xbp-40h]
  WarBoardReinforcementsEntity_o *entity; // [xsp+48h] [xbp-18h] BYREF

  v5 = this;
  if ( (byte_42E7641 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_WarBoardActionPointClassMaster___,
      (_DWORD)warBoardDataEntity,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardReinforcementsMaster___, v6, v7, v8);
    sub_B5D5C4(&DataManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___, v15, v16, v17);
    sub_B5D5C4(&Method_System_Func_WarBoardUserMasterData__bool___ctor__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Func_WarBoardUserServantData__bool___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Func_WarBoardUserMasterData__bool__TypeInfo, v24, v25, v26);
    sub_B5D5C4(&System_Func_WarBoardUserServantData__bool__TypeInfo, v27, v28, v29);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v33, v34, v35);
    sub_B5D5C4(&Method_WarBoardPieceData__SetInitinalData_b__311_0__, v36, v37, v38);
    this = (WarBoardPieceData_o *)sub_B5D5C4(&Method_WarBoardPieceData__SetInitinalData_b__311_1__, v39, v40, v41);
    byte_42E7641 = 1;
  }
  entity = 0LL;
  if ( !v5->fields._isDead_k__BackingField )
  {
    if ( warBoardDataEntity )
    {
      if ( v5->fields._type_k__BackingField == 1 )
      {
        masterInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.masterInfo;
        v43 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardUserMasterData__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v43,
          (Il2CppObject *)v5,
          Method_WarBoardPieceData__SetInitinalData_b__311_0__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardUserMasterData__bool___ctor__);
        v44 = (System_Int32_array **)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                       masterInfo,
                                       (System_Func_TSource__bool__o *)v43,
                                       (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
        v5->fields._serverMasterData_k__BackingField = (struct WarBoardUserMasterData_o *)v44;
        sub_B5D560(
          (BattleServantConfConponent_o *)&v5->fields._serverMasterData_k__BackingField,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49,
          v50);
        serverMasterData_k__BackingField = v5->fields._serverMasterData_k__BackingField;
        if ( serverMasterData_k__BackingField )
        {
          v5->fields._limitActionCount_k__BackingField = serverMasterData_k__BackingField->fields.limitActionPoint;
          v5->fields._currentActionCount_k__BackingField = serverMasterData_k__BackingField->fields.currentLimitActionPoint;
          v5->fields._attackCount_k__BackingField = serverMasterData_k__BackingField->fields.attackCount;
          v5->fields._nowSquareIndex_k__BackingField = serverMasterData_k__BackingField->fields.squareIndex;
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = (WarBoardActionPointClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
          this = (WarBoardPieceData_o *)WarBoardPieceData__get_ActionPointEntity(v5, v53);
          if ( Master_WarQuestSelectionMaster )
          {
            MasterEntityFromStageId = WarBoardActionPointClassMaster__GetMasterEntityFromStageId(
                                        Master_WarQuestSelectionMaster,
                                        (WarBoardActionPointEntity_o *)this,
                                        0LL);
            v55 = (System_Int32_array **)WarBoardCost__Create(
                                           MasterEntityFromStageId,
                                           v5->fields.stagePieceDetailEntity,
                                           0LL,
                                           0LL);
            v5->fields._Cost_k__BackingField = (struct WarBoardCost_o *)v55;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v5->fields._Cost_k__BackingField,
              v55,
              v56,
              v57,
              v58,
              v59,
              v60,
              v61);
            v62 = v5->fields._serverMasterData_k__BackingField;
            if ( v62 )
            {
              this = (WarBoardPieceData_o *)v5->fields._Cost_k__BackingField;
              if ( this )
              {
                currentPieceActionPoint = v62->fields.currentPieceActionPoint;
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
        v65 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardUserServantData__bool__TypeInfo);
        System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
          v65,
          (Il2CppObject *)v5,
          Method_WarBoardPieceData__SetInitinalData_b__311_1__,
          (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardUserServantData__bool___ctor__);
        v66 = (System_Int32_array **)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                       svtInfo,
                                       (System_Func_TSource__bool__o *)v65,
                                       (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
        p_serverServantData = &v5->fields.serverServantData;
        v5->fields.serverServantData = (struct WarBoardUserServantData_o *)v66;
        sub_B5D560((BattleServantConfConponent_o *)&v5->fields.serverServantData, v66, v68, v69, v70, v71, v72, v73);
        this = (WarBoardPieceData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        serverServantData = v5->fields.serverServantData;
        if ( serverServantData )
        {
          v75 = *(_OWORD *)&serverServantData->fields.id.fields.fakeValue;
          v76 = this;
          *(_OWORD *)&v98.fields.currentCryptoKey = *(_OWORD *)&serverServantData->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v98.fields.fakeValue = v75;
          if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
          }
          v97 = v98;
          this = (WarBoardPieceData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v97, 0LL);
          if ( v76 )
          {
            BattleServant = (System_Int32_array **)WarBoardManager__GetBattleServant(
                                                     (WarBoardManager_o *)v76,
                                                     (int64_t)this,
                                                     0LL);
            v5->fields._battleServant_k__BackingField = (struct BattleServantData_o *)BattleServant;
            sub_B5D560(
              (BattleServantConfConponent_o *)&v5->fields._battleServant_k__BackingField,
              BattleServant,
              v78,
              v79,
              v80,
              v81,
              v82,
              v83);
            this = (WarBoardPieceData_o *)v5->fields.serverServantData;
            if ( this )
            {
              WarBoardUserServantData__FromBattleServantData(
                (WarBoardUserServantData_o *)this,
                v5->fields._battleServant_k__BackingField,
                0LL);
              v84 = *p_serverServantData;
              if ( *p_serverServantData )
              {
                v5->fields._limitActionCount_k__BackingField = v84->fields.limitActionPoint;
                v5->fields._currentActionCount_k__BackingField = v84->fields.currentActionPoint;
                v5->fields._attackCount_k__BackingField = v84->fields.attackCount;
                v5->fields._nowSquareIndex_k__BackingField = v84->fields.squareIndex;
                if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !DataManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                }
                v85 = (WarBoardActionPointClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
                this = (WarBoardPieceData_o *)WarBoardPieceData__get_ActionPointEntity(v5, v86);
                if ( v5->fields._battleServant_k__BackingField )
                {
                  v87 = (WarBoardActionPointEntity_o *)this;
                  this = (WarBoardPieceData_o *)BattleServantData__getClassId(
                                                  v5->fields._battleServant_k__BackingField,
                                                  0LL);
                  if ( v85 )
                  {
                    EntityFromActionPointEntity = WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                                    v85,
                                                    v87,
                                                    (int32_t)this,
                                                    0LL);
                    this = (WarBoardPieceData_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardReinforcementsMaster___);
                    if ( this )
                    {
                      WarBoardReinforcementsMaster__TryGetEntity(
                        (WarBoardReinforcementsMaster_o *)this,
                        &entity,
                        v5->fields._ReinfoId_k__BackingField,
                        0LL);
                      v89 = (System_Int32_array **)WarBoardCost__Create(
                                                     EntityFromActionPointEntity,
                                                     v5->fields.stagePieceDetailEntity,
                                                     entity,
                                                     0LL);
                      v5->fields._Cost_k__BackingField = (struct WarBoardCost_o *)v89;
                      sub_B5D560(
                        (BattleServantConfConponent_o *)&v5->fields._Cost_k__BackingField,
                        v89,
                        v90,
                        v91,
                        v92,
                        v93,
                        v94,
                        v95);
                      v96 = v5->fields.serverServantData;
                      if ( v96 )
                      {
                        this = (WarBoardPieceData_o *)v5->fields._Cost_k__BackingField;
                        if ( this )
                        {
                          currentPieceActionPoint = v96->fields.currentPieceActionPoint;
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
    sub_B5D69C(this, warBoardDataEntity);
  }
}


void __fastcall WarBoardPieceData__SetMasterEquip(
        WarBoardPieceData_o *this,
        int64_t userEquipId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int64 v21; // x20
  __int64 v22; // x20
  DataManager_o *MasterData_WarQuestSelectionMaster; // x0
  struct System_Byte_array *masterDataBytes; // x20
  struct System_Collections_Generic_Dictionary_int__DataMasterBase__o *lookup; // x21
  int32_t v26; // w0
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x8
  __int64 v28; // x11
  UnityEngine_Object_o *v29; // x19
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  if ( (byte_42E7638 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserEquipMaster___, userEquipId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v15, v16, v17);
    sub_B5D5C4(&WarBoardMasterPieceComponent_TypeInfo, v18, v19, v20);
    byte_42E7638 = 1;
  }
  this->fields._CurrentUserEquipId_k__BackingField = userEquipId;
  v21 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v21 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 3));
  v22 = **(_QWORD **)(v21 + 192);
  if ( (*(_BYTE *)(v22 + 306) & 1) == 0 )
    sub_AF52C4(v22);
  MasterData_WarQuestSelectionMaster = **(DataManager_o ***)(v22 + 184);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_26;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          MasterData_WarQuestSelectionMaster,
                                                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserEquipMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_26;
  MasterData_WarQuestSelectionMaster = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___GetEntity(
                                                          (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)MasterData_WarQuestSelectionMaster,
                                                          this->fields._CurrentUserEquipId_k__BackingField,
                                                          (const MethodInfo_23FB038 *)Method_DataMasterBase_UserEquipMaster__UserEquipEntity__long__GetEntity__);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_26;
  lookup = MasterData_WarQuestSelectionMaster->fields.lookup;
  masterDataBytes = MasterData_WarQuestSelectionMaster->fields.masterDataBytes;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v30.fields.currentCryptoKey = lookup;
  *(_QWORD *)&v30.fields.fakeValue = masterDataBytes;
  v26 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v30, 0LL);
  pieceComponent = this->fields.pieceComponent;
  this->fields._iconId_k__BackingField = v26;
  if ( pieceComponent
    && (v28 = *(&WarBoardMasterPieceComponent_TypeInfo->_2.bitflags2 + 1),
        *(&pieceComponent->klass->_2.bitflags2 + 1) >= (unsigned int)v28) )
  {
    if ( (WarBoardMasterPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[v28 - 1] == WarBoardMasterPieceComponent_TypeInfo )
      v29 = (UnityEngine_Object_o *)pieceComponent;
    else
      v29 = 0LL;
  }
  else
  {
    v29 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  MasterData_WarQuestSelectionMaster = (DataManager_o *)UnityEngine_Object__op_Inequality(v29, 0LL, 0LL);
  if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( v29 )
    {
      WarBoardMasterPieceComponent__SetMasterIcon(
        (WarBoardMasterPieceComponent_o *)v29,
        (const MethodInfo *)userEquipId);
      return;
    }
LABEL_26:
    sub_B5D69C(MasterData_WarQuestSelectionMaster, userEquipId);
  }
}


void __fastcall WarBoardPieceData__SetOverwriteActionType(
        WarBoardPieceData_o *this,
        int32_t actionType,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  intptr_t v15; // w21
  System_Type_o *TypeFromHandle; // x21
  Il2CppObject *v17; // x22
  int32_t v18; // [xsp+Ch] [xbp-24h] BYREF
  System_RuntimeTypeHandle_o v19; // 0:w0.4

  if ( (byte_42E764E & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardStageLayoutEntity_ActionType_var, actionType, (_DWORD)method, v3);
    sub_B5D5C4(&System_Enum_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&int_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&System_Type_TypeInfo, v12, v13, v14);
    byte_42E764E = 1;
  }
  v15 = (int)WarBoardStageLayoutEntity_ActionType_var;
  if ( (BYTE3(System_Type_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v19.fields.value = v15;
  TypeFromHandle = System_Type__GetTypeFromHandle(v19, 0LL);
  v18 = actionType;
  v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  if ( (BYTE3(System_Enum_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  if ( System_Enum__IsDefined(TypeFromHandle, v17, 0LL) )
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x8
  __int64 v10; // x11
  UnityEngine_Object_o *v11; // x20
  _BOOL8 v12; // x0
  __int64 v13; // x1

  if ( (byte_42E7644 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, level, (_DWORD)method, v3);
    sub_B5D5C4(&WarBoardServantPieceComponent_TypeInfo, v6, v7, v8);
    byte_42E7644 = 1;
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
  v12 = UnityEngine_Object__op_Equality(v11, 0LL, 0LL);
  if ( !v12 )
  {
    if ( !v11 )
      sub_B5D69C(v12, v13);
    WarBoardServantPieceComponent__SetPartyBuffLevel((WarBoardServantPieceComponent_o *)v11, level, 0LL);
  }
}


void __fastcall WarBoardPieceData__SetPieceEnable(WarBoardPieceData_o *this, bool enable, const MethodInfo *method)
{
  WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_B5D69C(0LL, enable);
  WarBoardPieceBaseComponent__SetColliderEnable(pieceComponent, enable, method);
}


void __fastcall WarBoardPieceData__SetPrevAiRoute(
        WarBoardPieceData_o *this,
        WarBoardAIRoute_RouteData_o *prev,
        const MethodInfo *method)
{
  __int64 v3; // x3
  WarBoardPieceData_o *v5; // x19
  int32_t baseIndex; // w21
  int32_t actionIndex; // w22
  int64_t flagNow; // x20
  WarBoardPieceData_RouteSaveData_o *v9; // x23
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  v5 = this;
  if ( (byte_42E7646 & 1) == 0 )
  {
    this = (WarBoardPieceData_o *)sub_B5D5C4(
                                    &WarBoardPieceData_RouteSaveData_TypeInfo,
                                    (_DWORD)prev,
                                    (_DWORD)method,
                                    v3);
    byte_42E7646 = 1;
  }
  if ( !prev )
    sub_B5D69C(this, prev);
  baseIndex = prev->fields.baseIndex;
  actionIndex = prev->fields.actionIndex;
  flagNow = prev->fields.flagNow;
  v9 = (WarBoardPieceData_RouteSaveData_o *)sub_B5D694(WarBoardPieceData_RouteSaveData_TypeInfo);
  WarBoardPieceData_RouteSaveData___ctor_20357868(v9, baseIndex, actionIndex, flagNow, 0LL);
  v5->fields._PrevAiRoute_k__BackingField = v9;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v5->fields._PrevAiRoute_k__BackingField,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


void __fastcall WarBoardPieceData__SetServant(
        WarBoardPieceData_o *this,
        int64_t userServantId,
        int32_t overwriteLimitCount,
        const MethodInfo *method)
{
  int32_t IconLimitCount; // w21
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  DataManager_o *Instance; // x0
  __int64 v23; // x1
  __int64 v24; // x22
  __int64 v25; // x23
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x8
  __int64 v27; // x11
  UnityEngine_Object_o *v28; // x20
  UserServantEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v30; // 0:x0.16

  IconLimitCount = overwriteLimitCount;
  if ( (byte_42E7639 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, userServantId, overwriteLimitCount, method);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    sub_B5D5C4(&WarBoardServantPieceComponent_TypeInfo, v19, v20, v21);
    byte_42E7639 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_31;
  Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                &entity,
                                userServantId,
                                (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    this->fields._UserServantId_k__BackingField = userServantId;
    if ( !entity )
      goto LABEL_31;
    v25 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
    v24 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v30.fields.currentCryptoKey = v25;
    *(_QWORD *)&v30.fields.fakeValue = v24;
    this->fields._iconId_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v30, 0LL);
    if ( (IconLimitCount & 0x80000000) != 0 )
    {
      Instance = (DataManager_o *)entity;
      if ( !entity )
        goto LABEL_31;
      IconLimitCount = UserServantEntity__getIconLimitCount(entity, 0, 0LL);
    }
    this->fields._iconLimitCount_k__BackingField = IconLimitCount;
    Instance = (DataManager_o *)entity;
    if ( !entity
      || (this->fields._iconClassId_k__BackingField = UserServantEntity__getSvtClassId(entity, 0LL),
          (Instance = (DataManager_o *)entity) == 0LL)
      || (Instance = (DataManager_o *)UserServantEntity__getFrameType(entity, 0LL),
          this->fields._iconFrameType_k__BackingField = (int)Instance,
          !entity) )
    {
LABEL_31:
      sub_B5D69C(Instance, v23);
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
    && (v27 = *(&WarBoardServantPieceComponent_TypeInfo->_2.bitflags2 + 1),
        *(&pieceComponent->klass->_2.bitflags2 + 1) >= (unsigned int)v27) )
  {
    if ( (WarBoardServantPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[v27 - 1] == WarBoardServantPieceComponent_TypeInfo )
      v28 = (UnityEngine_Object_o *)this->fields.pieceComponent;
    else
      v28 = 0LL;
  }
  else
  {
    v28 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v28, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( v28 )
    {
      WarBoardServantPieceComponent__SetServant((WarBoardServantPieceComponent_o *)v28, userServantId, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  DataManager_o *Instance; // x0
  __int64 v22; // x1
  __int64 v23; // x21
  __int64 v24; // x22
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x8
  __int64 v26; // x11
  UnityEngine_Object_o *v27; // x20
  UserServantEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v29; // 0:x0.16

  if ( (byte_42E763A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserServantMaster___, userServantEquipId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&WarBoardServantPieceComponent_TypeInfo, v18, v19, v20);
    byte_42E763A = 1;
  }
  entity = 0LL;
  this->fields._UserServantEquipId_k__BackingField = userServantEquipId;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                                (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)Instance,
                                &entity,
                                this->fields._UserServantEquipId_k__BackingField,
                                (const MethodInfo_23FB094 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_26;
    v24 = *(_QWORD *)&entity->fields.svtId.fields.currentCryptoKey;
    v23 = *(_QWORD *)&entity->fields.svtId.fields.fakeValue;
    if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    }
    *(_QWORD *)&v29.fields.currentCryptoKey = v24;
    *(_QWORD *)&v29.fields.fakeValue = v23;
    Instance = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v29, 0LL);
    this->fields._iconEquipId_k__BackingField = (int)Instance;
    if ( !entity )
      goto LABEL_26;
    this->fields._equipLimitCount_k__BackingField = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
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
    && (v26 = *(&WarBoardServantPieceComponent_TypeInfo->_2.bitflags2 + 1),
        *(&pieceComponent->klass->_2.bitflags2 + 1) >= (unsigned int)v26) )
  {
    if ( (WarBoardServantPieceComponent_c *)pieceComponent->klass->_2.typeHierarchy[v26 - 1] == WarBoardServantPieceComponent_TypeInfo )
      v27 = (UnityEngine_Object_o *)this->fields.pieceComponent;
    else
      v27 = 0LL;
  }
  else
  {
    v27 = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(v27, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( v27 )
    {
      WarBoardServantPieceComponent__SetServantEquip((WarBoardServantPieceComponent_o *)v27, userServantEquipId, 0LL);
      return;
    }
LABEL_26:
    sub_B5D69C(Instance, v22);
  }
}


void __fastcall WarBoardPieceData__SetServantIconData(WarBoardPieceData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardPieceData_o *v4; // x19
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  __int64 v6; // x20
  __int64 v7; // x21
  int32_t v8; // w0
  struct WarBoardUserServantData_o *serverServantData; // x8
  WarBoardPieceData_o *v10; // x20
  struct BattleServantData_o *v11; // x8
  int32_t level; // w9
  struct BattleUserServantData_array *equipList; // x23
  __int64 v14; // x9
  BattleUserServantData_o *v15; // x9
  __int64 v16; // x20
  __int64 v17; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *v18; // x8
  BattleDeckServantData_o *deckSvt; // x20
  int32_t DispLimitCnt; // w0
  struct WarBoardUserServantData_o *v21; // x8
  __int64 v22; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v24; // 0:x0.16

  v4 = this;
  if ( (byte_42E7637 & 1) == 0 )
  {
    this = (WarBoardPieceData_o *)sub_B5D5C4(
                                    &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                    (_DWORD)method,
                                    v2,
                                    v3);
    byte_42E7637 = 1;
  }
  battleServant_k__BackingField = v4->fields._battleServant_k__BackingField;
  if ( !battleServant_k__BackingField )
    goto LABEL_39;
  v7 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&battleServant_k__BackingField->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v23.fields.currentCryptoKey = v7;
  *(_QWORD *)&v23.fields.fakeValue = v6;
  v8 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v23, 0LL);
  serverServantData = v4->fields.serverServantData;
  v4->fields._iconId_k__BackingField = v8;
  if ( serverServantData )
  {
    this = (WarBoardPieceData_o *)NpcSvtType__IsEnemy(serverServantData->fields.npcSvtType, 0LL);
    v10 = ((unsigned __int8)this & 1) != 0 ? v4 : 0LL;
  }
  else
  {
    this = 0LL;
    v10 = 0LL;
  }
  if ( !v4->fields._battleServant_k__BackingField )
    goto LABEL_39;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (WarBoardPieceData_o *)BattleServantData__getLimitCount(v4->fields._battleServant_k__BackingField, 0LL);
    if ( !v10 )
      goto LABEL_39;
  }
  else
  {
    LODWORD(this) = BattleServantData__GetIconImageLimitCount(v4->fields._battleServant_k__BackingField, 0LL);
    v10 = v4;
  }
  v10->fields._iconLimitCount_k__BackingField = (int)this;
  this = (WarBoardPieceData_o *)v4->fields._battleServant_k__BackingField;
  if ( !this )
    goto LABEL_39;
  this = (WarBoardPieceData_o *)BattleServantData__getClassId((BattleServantData_o *)this, 0LL);
  v11 = v4->fields._battleServant_k__BackingField;
  v4->fields._iconClassId_k__BackingField = (int)this;
  if ( !v11 )
    goto LABEL_39;
  v4->fields._iconFrameType_k__BackingField = v11->fields._frameType_k__BackingField;
  level = v11->fields.level;
  v4->fields._iconEquipId_k__BackingField = 0;
  v4->fields._equipLimitCount_k__BackingField = 0;
  v4->fields._iconLevel_k__BackingField = level;
  equipList = v11->fields.equipList;
  if ( equipList )
  {
    v14 = *(_QWORD *)&equipList->max_length;
    if ( v14 )
    {
      if ( !(_DWORD)v14 )
        goto LABEL_40;
      v15 = equipList->m_Items[0];
      if ( !v15 )
        goto LABEL_29;
      v17 = *(_QWORD *)&v15->fields.svtId.fields.currentCryptoKey;
      v16 = *(_QWORD *)&v15->fields.svtId.fields.fakeValue;
      if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      }
      *(_QWORD *)&v24.fields.currentCryptoKey = v17;
      *(_QWORD *)&v24.fields.fakeValue = v16;
      this = (WarBoardPieceData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v24, 0LL);
      v4->fields._iconEquipId_k__BackingField = (int)this;
      if ( !equipList->max_length )
      {
LABEL_40:
        v22 = sub_B5D6C8(this);
        sub_B5D668(v22, 0LL);
      }
      v18 = (CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o *)equipList->m_Items[0];
      if ( !v18
        || (this = (WarBoardPieceData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(
                                            v18[6],
                                            0LL),
            v11 = v4->fields._battleServant_k__BackingField,
            v4->fields._equipLimitCount_k__BackingField = (int)this,
            !v11) )
      {
LABEL_39:
        sub_B5D69C(this, method);
      }
    }
  }
LABEL_29:
  deckSvt = v11->fields.deckSvt;
  if ( deckSvt && deckSvt->fields.enemyScript )
  {
    v4->fields._npcImageSvtId_k__BackingField = BattleDeckServantData__GetImageSvtId(deckSvt, 0LL);
    DispLimitCnt = BattleDeckServantData__GetDispLimitCnt(deckSvt, 0LL);
    v21 = v4->fields.serverServantData;
    v4->fields._npcDispLimitCount_k__BackingField = DispLimitCnt;
    if ( v21 )
    {
      if ( v21->fields.displayType == 2 )
        LOBYTE(v21) = v4->fields._npcImageSvtId_k__BackingField < 1 || BattleDeckServantData__IsShadow(deckSvt, 0LL);
      else
        LOBYTE(v21) = 0;
    }
    v4->fields._IsShadow_k__BackingField = (char)v21;
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
          sub_B5D69C(this, method);
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
    sub_B5D69C(0LL, enable);
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
      sub_B5D69C(0LL, v3);
    ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))pieceComponent->klass->vtable._20_ShowActionTarget.method)(
      pieceComponent,
      pieceComponent->klass->vtable._21_HideActionTarget.methodPtr);
  }
}


System_String_o *__fastcall WarBoardPieceData__ToJson(WarBoardPieceData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Il2CppObject *serverMasterData_k__BackingField; // x19
  WarBoardUserServantData_o *serverServantData; // x0

  if ( (byte_42E7643 & 1) == 0 )
  {
    sub_B5D5C4(&JsonManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&string_TypeInfo, v5, v6, v7);
    byte_42E7643 = 1;
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
    sub_B5D69C(0LL, method);
  ((void (__fastcall *)(struct WarBoardPieceBaseComponent_o *, Il2CppMethodPointer))pieceComponent->klass->vtable._9_HideActionCount.method)(
    pieceComponent,
    pieceComponent->klass->vtable._10_UpdateDisplayActionCount.methodPtr);
}


void __fastcall WarBoardPieceData__TurnStart(WarBoardPieceData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_B5D69C(0LL, method);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  System_Collections_Generic_IEnumerable_TSource__o *masterInfo; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v87; // x22
  struct WarBoardUserMasterData_o *v88; // x0
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  int32_t defeatPoint; // w8
  struct WarBoardUserMasterData_o *v96; // x22
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  struct WarBoardUserMasterData_o **p_serverMasterData_k__BackingField; // x21
  _BOOL4 v99; // w24
  System_Collections_Generic_IEnumerable_TSource__o *svtInfo; // x22
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v101; // x24
  WarBoardData_SquareRangeSearch_o *v102; // x0
  const MethodInfo *v103; // x1
  int32_t breakPoint_k__BackingField; // w26
  int32_t monitor_high; // w8
  struct WarBoardUserServantData_o *v106; // x22
  unsigned int v107; // w21
  __int64 v108; // x24
  __int64 pieceComponent; // x0
  System_String_array **v110; // x2
  System_String_array **v111; // x3
  System_Boolean_array **v112; // x4
  System_Int32_array **v113; // x5
  System_Int32_array *v114; // x6
  System_Int32_array *v115; // x7
  System_Int32_array **v116; // x1
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  struct WarBoardUserServantData_o *serverServantData; // x8
  struct WarBoardUserServantData_o **p_serverServantData; // x23
  _BOOL4 v125; // w26
  struct WarBoardCost_o *v126; // x8
  _BOOL4 v127; // w22
  int32_t currentActionCount_k__BackingField; // w28
  int32_t currentActionPoint; // w24
  struct WarBoardPieceData_SaveData_o *localSaveData; // x9
  unsigned int v131; // w27
  _BOOL4 v132; // w25
  int32_t *v133; // x8
  int v134; // w23
  _BOOL4 v135; // w8
  struct WarBoardPieceBaseComponent_o *v136; // x8
  __int64 v137; // x11
  UnityEngine_Object_o *v138; // x20
  bool v139; // w8
  WarBoardCost_o *Cost_k__BackingField; // x0
  struct WarBoardCost_o *v141; // x8
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  struct WarBoardUserServantData_o *v143; // x8
  int32_t squareIndex; // w9
  WarBoardActionPointClassMaster_o *Master_WarQuestSelectionMaster; // x22
  const MethodInfo *v146; // x1
  WarBoardActionPointEntity_o *v147; // x23
  struct WarBoardUserServantData_o *v148; // x8
  WarBoardActionPointClassEntity_o *v149; // x22
  WarBoardCost_o *v150; // x23
  int v151; // w22
  int v152; // w23
  struct WarBoardPieceBaseComponent_o *v153; // x8
  __int64 v154; // x11
  UnityEngine_Object_o *v155; // x20
  struct BattleServantData_o *v156; // x8
  __int64 v157; // x21
  __int64 v158; // x22
  int32_t v159; // w0
  struct WarBoardUserServantData_o *v160; // x8
  WarBoardPieceData_o *v161; // x21
  struct BattleServantData_o *v162; // x8
  WarBoardPieceData___c__DisplayClass312_0_o *v163; // x20
  System_Func_bool__o *v164; // x19
  UnityEngine_WaitUntil_o *v165; // x21
  __int64 v166; // x19
  System_Delegate_o *v167; // x22
  WarBoardTaskBase_TaskCallback_o *v168; // x23
  System_Int32_array **v169; // x0
  System_String_array **v170; // x2
  System_String_array **v171; // x3
  System_Boolean_array **v172; // x4
  System_Int32_array **v173; // x5
  System_Int32_array *v174; // x6
  System_Int32_array *v175; // x7
  WebViewManager_o *Instance; // x20
  __int64 v177; // x21
  __int64 v178; // x0
  System_String_array **v179; // x2
  System_String_array **v180; // x3
  System_Boolean_array **v181; // x4
  System_Int32_array **v182; // x5
  System_Int32_array *v183; // x6
  System_Int32_array *v184; // x7
  __int64 v185; // x0
  __int64 v186; // x0
  WarBoardPieceData_o *v187; // x0
  const MethodInfo *v188; // x1
  _BOOL4 v189; // [xsp+Ch] [xbp-54h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v190; // 0:x0.16

  v6 = forceUpdate;
  if ( (byte_42E7642 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_WarBoardActionPointClassMaster___,
      (_DWORD)warBoardDataEntity,
      (_DWORD)deadBreakList,
      taskList);
    sub_B5D5C4(&DataManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___, v14, v15, v16);
    sub_B5D5C4(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___, v17, v18, v19);
    sub_B5D5C4(&Method_System_Func_bool___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Func_bool__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_System_Func_WarBoardUserMasterData__bool___ctor__, v26, v27, v28);
    sub_B5D5C4(&Method_System_Func_WarBoardUserServantData__bool___ctor__, v29, v30, v31);
    sub_B5D5C4(&System_Func_WarBoardUserMasterData__bool__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&System_Func_WarBoardUserServantData__bool__TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__Add__, v38, v39, v40);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v47, v48, v49);
    sub_B5D5C4(&WarBoardTaskBase_TaskCallback_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&Method_WarBoardPieceData___c__DisplayClass312_0__UpdateFromServerData_b__2__, v53, v54, v55);
    sub_B5D5C4(&Method_WarBoardPieceData___c__DisplayClass312_0__UpdateFromServerData_b__3__, v56, v57, v58);
    sub_B5D5C4(&WarBoardPieceData___c__DisplayClass312_0_TypeInfo, v59, v60, v61);
    sub_B5D5C4(&UnityEngine_WaitUntil_TypeInfo, v62, v63, v64);
    sub_B5D5C4(&WarBoardCallbackTask_TypeInfo, v65, v66, v67);
    sub_B5D5C4(&WarBoardData_WarBoardDeadBreakList_TypeInfo, v68, v69, v70);
    sub_B5D5C4(&WarBoardMasterPieceComponent_TypeInfo, v71, v72, v73);
    sub_B5D5C4(&Method_WarBoardPieceData__UpdateFromServerData_b__312_0__, v74, v75, v76);
    sub_B5D5C4(&Method_WarBoardPieceData__UpdateFromServerData_b__312_1__, v77, v78, v79);
    sub_B5D5C4(&WarBoardServantPieceComponent_TypeInfo, v80, v81, v82);
    sub_B5D5C4(&WarBoardTaskBase___TypeInfo, v83, v84, v85);
    byte_42E7642 = 1;
  }
  if ( !warBoardDataEntity )
    return;
  if ( this->fields._type_k__BackingField != 1 )
  {
    svtInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.svtInfo;
    v101 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardUserServantData__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v101,
      (Il2CppObject *)this,
      Method_WarBoardPieceData__UpdateFromServerData_b__312_1__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardUserServantData__bool___ctor__);
    v102 = System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
             svtInfo,
             (System_Func_TSource__bool__o *)v101,
             (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserServantData___);
    if ( !v102 )
      return;
    breakPoint_k__BackingField = this->fields._breakPoint_k__BackingField;
    monitor_high = HIDWORD(v102[23].monitor);
    v106 = (struct WarBoardUserServantData_o *)v102;
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
      v107 = 0;
    }
    else
    {
      this->fields._breakPoint_k__BackingField = monitor_high;
      v107 = 1;
      if ( (HIDWORD(v102[23].monitor) & 0x80000000) != 0 )
      {
        this->fields._isDead_k__BackingField = 1;
        v107 = 0;
      }
      v108 = sub_B5D694(WarBoardData_WarBoardDeadBreakList_TypeInfo);
      WarBoardData_WarBoardDeadBreakList___ctor((WarBoardData_WarBoardDeadBreakList_o *)v108, 0LL);
      if ( !v108 )
        goto LABEL_150;
      v116 = (System_Int32_array **)this->fields.pieceComponent;
      *(_QWORD *)(v108 + 16) = v116;
      sub_B5D560((BattleServantConfConponent_o *)(v108 + 16), v116, v110, v111, v112, v113, v114, v115);
      *(_DWORD *)(v108 + 24) = v106->fields.defeatPoint;
      *(_DWORD *)(v108 + 28) = breakPoint_k__BackingField;
      if ( !deadBreakList )
        goto LABEL_150;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)deadBreakList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v108,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WarBoardData_WarBoardDeadBreakList__Add__);
    }
    p_serverServantData = &this->fields.serverServantData;
    serverServantData = this->fields.serverServantData;
    if ( serverServantData )
      v125 = serverServantData->fields.transformIndex != v106->fields.transformIndex;
    else
      v125 = 0;
    currentActionCount_k__BackingField = this->fields._currentActionCount_k__BackingField;
    currentActionPoint = v106->fields.currentActionPoint;
    localSaveData = this->fields.localSaveData;
    v131 = currentActionCount_k__BackingField != currentActionPoint;
    if ( !localSaveData )
      goto LABEL_150;
    if ( v106->fields.consumedActionPointDateTime <= localSaveData->fields.consumedActionPointDateTime
      || this->fields._forceId_k__BackingField
      || this->fields._groupId_k__BackingField )
    {
      v189 = 0;
      if ( serverServantData )
      {
LABEL_34:
        v132 = serverServantData->fields.criticalStars != v106->fields.criticalStars;
LABEL_63:
        v139 = v106->fields.consumedRecoverDonotActCostDateTime > localSaveData->fields.consumedRecoverDonotActCostDateTime
            && !this->fields._forceId_k__BackingField
            && !this->fields._groupId_k__BackingField
            && !this->fields._isDead_k__BackingField;
        this->fields._IsDispConsumedPieceActionPoint_k__BackingField = v139;
        Cost_k__BackingField = this->fields._Cost_k__BackingField;
        this->fields._ConsumedRecoverDonotActCost_k__BackingField = v106->fields.consumedRecoverDonotActCost;
        if ( Cost_k__BackingField )
        {
          pieceComponent = WarBoardCost__get_HasCost(Cost_k__BackingField, 0LL);
          v131 = (currentActionCount_k__BackingField != currentActionPoint) | (unsigned int)pieceComponent;
          if ( currentActionCount_k__BackingField == currentActionPoint && (pieceComponent & 1) != 0 )
          {
            v141 = this->fields._Cost_k__BackingField;
            if ( !v141 )
              goto LABEL_150;
            v131 = v141->fields._CurrentActionPoint_k__BackingField != v106->fields.currentPieceActionPoint;
          }
        }
        this->fields.serverServantData = v106;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.serverServantData,
          (System_Int32_array **)v106,
          v117,
          v118,
          v119,
          v120,
          v121,
          v122);
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
        v143 = this->fields.serverServantData;
        if ( !v143 )
          goto LABEL_150;
        this->fields._limitActionCount_k__BackingField = v143->fields.limitActionPoint;
        this->fields._currentActionCount_k__BackingField = v143->fields.currentActionPoint;
        this->fields._attackCount_k__BackingField = v143->fields.attackCount;
        squareIndex = v143->fields.squareIndex;
        if ( squareIndex == -1 )
        {
          this->fields._lastSquareIndex_k__BackingField = this->fields._nowSquareIndex_k__BackingField;
          squareIndex = v143->fields.squareIndex;
        }
        this->fields._nowSquareIndex_k__BackingField = squareIndex;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (WarBoardActionPointClassMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardActionPointClassMaster___);
        pieceComponent = (__int64)WarBoardPieceData__get_ActionPointEntity(this, v146);
        if ( !this->fields._battleServant_k__BackingField )
          goto LABEL_150;
        v147 = (WarBoardActionPointEntity_o *)pieceComponent;
        pieceComponent = BattleServantData__getClassId(this->fields._battleServant_k__BackingField, 0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_150;
        pieceComponent = (__int64)WarBoardActionPointClassMaster__GetEntityFromActionPointEntity(
                                    Master_WarQuestSelectionMaster,
                                    v147,
                                    pieceComponent,
                                    0LL);
        v148 = this->fields.serverServantData;
        if ( !v148 )
          goto LABEL_150;
        v149 = (WarBoardActionPointClassEntity_o *)pieceComponent;
        pieceComponent = (__int64)this->fields._Cost_k__BackingField;
        if ( !pieceComponent )
          goto LABEL_150;
        WarBoardCost__UpdateCurrentPointByServerData(
          (WarBoardCost_o *)pieceComponent,
          v148->fields.currentPieceActionPoint,
          0LL);
        pieceComponent = (__int64)this->fields._battleServant_k__BackingField;
        if ( !pieceComponent )
          goto LABEL_150;
        v150 = this->fields._Cost_k__BackingField;
        pieceComponent = BattleServantData__getClassId((BattleServantData_o *)pieceComponent, 0LL);
        if ( !v150 )
          goto LABEL_150;
        if ( WarBoardCost__IsSameClass(v150, pieceComponent, 0LL) )
        {
          v151 = 0;
        }
        else
        {
          pieceComponent = (__int64)WarBoardCost__Create(v149, 0LL, 0LL, 0LL);
          if ( !this->fields._Cost_k__BackingField )
            goto LABEL_150;
          WarBoardCost__UpdateClassCost(this->fields._Cost_k__BackingField, (WarBoardCost_o *)pieceComponent, 0LL);
          v151 = 1;
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
            v107,
            *(_QWORD *)(*(_QWORD *)pieceComponent + 560LL));
        }
        if ( v151 | (v131 | v6) & 1 && !this->fields._isDead_k__BackingField )
        {
          pieceComponent = (__int64)this->fields.pieceComponent;
          if ( !pieceComponent )
            goto LABEL_150;
          (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)pieceComponent + 472LL))(
            pieceComponent,
            *(_QWORD *)(*(_QWORD *)pieceComponent + 480LL));
        }
        v152 = v6;
        if ( v125 | v152 && !this->fields._isDead_k__BackingField )
        {
          v153 = this->fields.pieceComponent;
          if ( v153
            && (v154 = *(&WarBoardServantPieceComponent_TypeInfo->_2.bitflags2 + 1),
                *(&v153->klass->_2.bitflags2 + 1) >= (unsigned int)v154) )
          {
            if ( (WarBoardServantPieceComponent_c *)v153->klass->_2.typeHierarchy[v154 - 1] == WarBoardServantPieceComponent_TypeInfo )
              v155 = (UnityEngine_Object_o *)this->fields.pieceComponent;
            else
              v155 = 0LL;
          }
          else
          {
            v155 = 0LL;
          }
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          pieceComponent = UnityEngine_Object__op_Inequality(v155, 0LL, 0LL);
          if ( (pieceComponent & 1) != 0 )
          {
            v156 = this->fields._battleServant_k__BackingField;
            if ( !v156 )
              goto LABEL_150;
            v158 = *(_QWORD *)&v156->fields.svtId.fields.currentCryptoKey;
            v157 = *(_QWORD *)&v156->fields.svtId.fields.fakeValue;
            if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            }
            *(_QWORD *)&v190.fields.currentCryptoKey = v158;
            *(_QWORD *)&v190.fields.fakeValue = v157;
            v159 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44899288(v190, 0LL);
            v160 = this->fields.serverServantData;
            this->fields._iconId_k__BackingField = v159;
            if ( v160 )
            {
              pieceComponent = NpcSvtType__IsEnemy(v160->fields.npcSvtType, 0LL);
              v161 = (pieceComponent & 1) != 0 ? this : 0LL;
            }
            else
            {
              pieceComponent = 0LL;
              v161 = 0LL;
            }
            if ( !this->fields._battleServant_k__BackingField )
              goto LABEL_150;
            if ( (pieceComponent & 1) != 0 )
            {
              pieceComponent = BattleServantData__getLimitCount(this->fields._battleServant_k__BackingField, 0LL);
              if ( !v161 )
                goto LABEL_150;
            }
            else
            {
              LODWORD(pieceComponent) = BattleServantData__GetIconImageLimitCount(
                                          this->fields._battleServant_k__BackingField,
                                          0LL);
              v161 = this;
            }
            v161->fields._iconLimitCount_k__BackingField = pieceComponent;
            pieceComponent = (__int64)this->fields._battleServant_k__BackingField;
            if ( !pieceComponent )
              goto LABEL_150;
            pieceComponent = BattleServantData__getClassId((BattleServantData_o *)pieceComponent, 0LL);
            v162 = this->fields._battleServant_k__BackingField;
            this->fields._iconClassId_k__BackingField = pieceComponent;
            if ( !v162 )
              goto LABEL_150;
            this->fields._iconFrameType_k__BackingField = v162->fields._frameType_k__BackingField;
            this->fields._iconLevel_k__BackingField = v162->fields.level;
            if ( !v155 )
              goto LABEL_150;
            WarBoardServantPieceComponent__SetServantIcon((WarBoardServantPieceComponent_o *)v155, 0LL);
            ((void (__fastcall *)(UnityEngine_Object_o *, void *))v155->klass[1]._1.parent)(
              v155,
              v155->klass[1]._1.generic_class);
            ((void (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *))v155->klass[1]._1.castClass)(
              v155,
              v155->klass[1]._1.declaringType);
          }
        }
        if ( v132 | v152 && !this->fields._isDead_k__BackingField )
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
          if ( v189 )
          {
            v163 = (WarBoardPieceData___c__DisplayClass312_0_o *)sub_B5D694(WarBoardPieceData___c__DisplayClass312_0_TypeInfo);
            WarBoardPieceData___c__DisplayClass312_0___ctor(v163, 0LL);
            if ( !v163 )
              goto LABEL_150;
            v163->fields.popupClose = 0;
            v164 = (System_Func_bool__o *)sub_B5D694(System_Func_bool__TypeInfo);
            System_Func_bool____ctor(
              v164,
              (Il2CppObject *)v163,
              Method_WarBoardPieceData___c__DisplayClass312_0__UpdateFromServerData_b__2__,
              (const MethodInfo_278D9C4 *)Method_System_Func_bool___ctor__);
            v165 = (UnityEngine_WaitUntil_o *)sub_B5D694(UnityEngine_WaitUntil_TypeInfo);
            UnityEngine_WaitUntil___ctor(v165, v164, 0LL);
            v166 = sub_B5D694(WarBoardCallbackTask_TypeInfo);
            WarBoardCallbackTask___ctor(
              (WarBoardCallbackTask_o *)v166,
              (UnityEngine_CustomYieldInstruction_o *)v165,
              0LL);
            if ( !v166 )
              goto LABEL_150;
            v167 = *(System_Delegate_o **)(v166 + 32);
            v168 = (WarBoardTaskBase_TaskCallback_o *)sub_B5D694(WarBoardTaskBase_TaskCallback_TypeInfo);
            WarBoardTaskBase_TaskCallback___ctor(
              v168,
              (Il2CppObject *)v163,
              Method_WarBoardPieceData___c__DisplayClass312_0__UpdateFromServerData_b__3__,
              0LL);
            v169 = (System_Int32_array **)System_Delegate__Combine(v167, (System_Delegate_o *)v168, 0LL);
            if ( v169 && *v169 != (System_Int32_array *)WarBoardTaskBase_TaskCallback_TypeInfo )
            {
              v187 = (WarBoardPieceData_o *)sub_B5D990(v169);
              WarBoardPieceData__ToJson(v187, v188);
            }
            else
            {
              *(_QWORD *)(v166 + 32) = v169;
              sub_B5D560((BattleServantConfConponent_o *)(v166 + 32), v169, v170, v171, v172, v173, v174, v175);
              Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
              pieceComponent = sub_B5D5DC(WarBoardTaskBase___TypeInfo, 1LL);
              if ( !pieceComponent )
                goto LABEL_150;
              v177 = pieceComponent;
              v178 = sub_B5D684(v166, *(_QWORD *)(*(_QWORD *)pieceComponent + 64LL));
              if ( !v178 )
              {
                v185 = sub_B5D6BC();
                sub_B5D668(v185, 0LL);
              }
              if ( !*(_DWORD *)(v177 + 24) )
              {
                v186 = sub_B5D6C8(v178);
                sub_B5D668(v186, 0LL);
              }
              *(_QWORD *)(v177 + 32) = v166;
              sub_B5D560(
                (BattleServantConfConponent_o *)(v177 + 32),
                (System_Int32_array **)v166,
                v179,
                v180,
                v181,
                v182,
                v183,
                v184);
              if ( !Instance )
                goto LABEL_150;
              WarBoardManager__InsertTask((WarBoardManager_o *)Instance, 1, (WarBoardTaskBase_array *)v177, 0LL);
            }
          }
          return;
        }
LABEL_150:
        sub_B5D69C(pieceComponent, v103);
      }
    }
    else
    {
      v189 = !this->fields._isDead_k__BackingField;
      if ( serverServantData )
        goto LABEL_34;
    }
    v132 = 0;
    goto LABEL_63;
  }
  masterInfo = (System_Collections_Generic_IEnumerable_TSource__o *)warBoardDataEntity->fields.masterInfo;
  v87 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_WarBoardUserMasterData__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v87,
    (Il2CppObject *)this,
    Method_WarBoardPieceData__UpdateFromServerData_b__312_0__,
    (const MethodInfo_2C2ECD0 *)Method_System_Func_WarBoardUserMasterData__bool___ctor__);
  v88 = (struct WarBoardUserMasterData_o *)System_Linq_Enumerable__FirstOrDefault_WarBoardData_SquareRangeSearch_(
                                             masterInfo,
                                             (System_Func_TSource__bool__o *)v87,
                                             (const MethodInfo_1CAC850 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardUserMasterData___);
  if ( !v88 )
    return;
  defeatPoint = v88->fields.defeatPoint;
  v96 = v88;
  if ( this->fields._breakPoint_k__BackingField > defeatPoint )
  {
    this->fields._breakPoint_k__BackingField = defeatPoint;
    if ( v88->fields.defeatPoint <= 0 )
      this->fields._isDead_k__BackingField = 1;
  }
  p_serverMasterData_k__BackingField = &this->fields._serverMasterData_k__BackingField;
  serverMasterData_k__BackingField = this->fields._serverMasterData_k__BackingField;
  if ( serverMasterData_k__BackingField )
    v99 = serverMasterData_k__BackingField->fields.commandSpellNum != v88->fields.commandSpellNum;
  else
    v99 = 1;
  this->fields._serverMasterData_k__BackingField = v88;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._serverMasterData_k__BackingField,
    (System_Int32_array **)v88,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  if ( this->fields._currentActionCount_k__BackingField == v96->fields.currentLimitActionPoint )
  {
    v126 = this->fields._Cost_k__BackingField;
    if ( v126 )
    {
      if ( !*p_serverMasterData_k__BackingField )
        goto LABEL_150;
      v127 = v126->fields._CurrentActionPoint_k__BackingField != (*p_serverMasterData_k__BackingField)->fields.currentPieceActionPoint;
    }
    else
    {
      v127 = 0;
    }
  }
  else
  {
    v127 = 1;
  }
  v133 = (int32_t *)*p_serverMasterData_k__BackingField;
  if ( !*p_serverMasterData_k__BackingField )
    goto LABEL_150;
  pieceComponent = (__int64)this->fields._Cost_k__BackingField;
  this->fields._limitActionCount_k__BackingField = v133[12];
  this->fields._currentActionCount_k__BackingField = v133[11];
  this->fields._attackCount_k__BackingField = v133[13];
  this->fields._nowSquareIndex_k__BackingField = v133[14];
  if ( !pieceComponent )
    goto LABEL_150;
  v134 = v6;
  WarBoardCost__UpdateCurrentPointByServerData((WarBoardCost_o *)pieceComponent, v133[18], 0LL);
  v135 = !this->fields._forceId_k__BackingField
      && !this->fields._groupId_k__BackingField
      && this->fields._type_k__BackingField == 1;
  if ( (v135 & (v99 | v134)) != 0 )
  {
    v136 = this->fields.pieceComponent;
    if ( v136
      && (v137 = *(&WarBoardMasterPieceComponent_TypeInfo->_2.bitflags2 + 1),
          *(&v136->klass->_2.bitflags2 + 1) >= (unsigned int)v137) )
    {
      v138 = (WarBoardMasterPieceComponent_c *)v136->klass->_2.typeHierarchy[v137 - 1] == WarBoardMasterPieceComponent_TypeInfo
           ? (UnityEngine_Object_o *)this->fields.pieceComponent
           : 0LL;
    }
    else
    {
      v138 = 0LL;
    }
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    pieceComponent = UnityEngine_Object__op_Inequality(v138, 0LL, 0LL);
    if ( (pieceComponent & 1) != 0 )
    {
      if ( !*p_serverMasterData_k__BackingField )
        goto LABEL_150;
      if ( !v138 )
        goto LABEL_150;
      pieceComponent = (__int64)v138[13].monitor;
      if ( !pieceComponent )
        goto LABEL_150;
      CommandSpellIconComponent__SetRemain(
        (CommandSpellIconComponent_o *)pieceComponent,
        (*p_serverMasterData_k__BackingField)->fields.commandSpellNum,
        0LL);
    }
  }
  if ( v127 | v134 && !this->fields._isDead_k__BackingField )
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
    sub_B5D69C(0LL, method);
  WarBoardPieceBaseComponent__UpdateWidgetDepth(pieceComponent, method);
}


void __fastcall WarBoardPieceData__WallAttack(WarBoardPieceData_o *this, int32_t squareIndex, const MethodInfo *method)
{
  struct WarBoardPieceBaseComponent_o *pieceComponent; // x0

  pieceComponent = this->fields.pieceComponent;
  if ( !pieceComponent )
    sub_B5D69C(0LL, squareIndex);
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
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  return x->fields.forceId == this->fields._forceId_k__BackingField
      && x->fields.groupId == this->fields._groupId_k__BackingField;
}


bool __fastcall WarBoardPieceData___SetInitinalData_b__311_1(
        WarBoardPieceData_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
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
    sub_B5D69C(this, 0LL);
  return x->fields.forceId == this->fields._forceId_k__BackingField
      && x->fields.groupId == this->fields._groupId_k__BackingField;
}


bool __fastcall WarBoardPieceData___UpdateFromServerData_b__312_1(
        WarBoardPieceData_o *this,
        WarBoardUserServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B5D69C(this, 0LL);
  return x->fields.forceId == this->fields._forceId_k__BackingField
      && x->fields.groupId == this->fields._groupId_k__BackingField
      && x->fields.pieceIndex == this->fields._index_k__BackingField;
}


WarBoardActionPointEntity_o *__fastcall WarBoardPieceData__get_ActionPointEntity(
        WarBoardPieceData_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WarBoardActionPointMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1

  if ( (byte_42E7633 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_WarBoardActionPointMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42E7633 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (WarBoardActionPointMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarBoardActionPointMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v9);
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
    sub_B5D69C(this, method);
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
  int v2; // w2
  __int64 v3; // x3
  WarBoardPieceData_o *v4; // x19
  struct WarBoardUserServantData_o *serverServantData; // x8
  __int128 v6; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v8; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v9; // [xsp+20h] [xbp-30h]

  v4 = this;
  if ( (byte_42E7632 & 1) == 0 )
  {
    this = (WarBoardPieceData_o *)sub_B5D5C4(
                                    &CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo,
                                    (_DWORD)method,
                                    v2,
                                    v3);
    byte_42E7632 = 1;
  }
  serverServantData = v4->fields.serverServantData;
  if ( !serverServantData )
    sub_B5D69C(this, method);
  v6 = *(_OWORD *)&serverServantData->fields.id.fields.fakeValue;
  *(_OWORD *)&v9.fields.currentCryptoKey = *(_OWORD *)&serverServantData->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v9.fields.fakeValue = v6;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  }
  v8 = v9;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(&v8, 0LL);
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
    sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  WarBoardData_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E7630 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42E7630 = 1;
  }
  Instance = (WarBoardData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  if ( !Instance || (Instance = (WarBoardData_o *)Instance[1].fields.reinforcementsSaveList) == 0LL )
    sub_B5D69C(Instance, v6);
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(
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


void __fastcall WarBoardPieceData_RouteSaveData___ctor_20357868(
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
  *(_OWORD *)&this->fields.forceId = xmmword_32A0110;
}


void __fastcall WarBoardPieceData_SaveData___ctor_20357988(
        WarBoardPieceData_SaveData_o *this,
        WarBoardPieceData_o *owner,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  struct WarBoardPieceData_o *v7; // x0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.owner = owner;
  sub_B5D560(&this->fields.owner);
  WarBoardPieceData_SaveData__Save(this, v5);
  v7 = this->fields.owner;
  if ( !v7 )
    sub_B5D69C(0LL, v6);
  v7->fields.localSaveData = this;
  sub_B5D560(&v7->fields.localSaveData);
}


void __fastcall WarBoardPieceData_SaveData__Load(WarBoardPieceData_SaveData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  WarBoardPieceData_SaveData_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct WarBoardPieceData_o *owner; // x8
  struct WarBoardPieceData_o *v9; // x8
  struct WarBoardPieceData_o *v10; // x8
  struct WarBoardPieceData_o *v11; // x8
  struct WarBoardPieceData_o *v12; // x8
  struct WarBoardPieceData_o *v13; // x8
  struct WarBoardPieceData_o *v14; // x8
  struct WarBoardPieceData_o *v15; // x8
  struct WarBoardPieceData_o *v16; // x8
  struct WarBoardPieceData_o *v17; // x8
  struct WarBoardPieceData_o *v18; // x8
  struct WarBoardUserMasterData_o *serverMasterData_k__BackingField; // x8
  struct WarBoardPieceData_o *v20; // x8
  struct WarBoardUserMasterData_o *v21; // x8
  struct WarBoardPieceData_o *v22; // x8
  struct WarBoardUserMasterData_o *v23; // x8
  struct WarBoardPieceData_o *v24; // x8
  struct WarBoardUserMasterData_o *v25; // x8
  struct WarBoardPieceData_o *v26; // x8
  struct WarBoardUserMasterData_o *v27; // x8
  struct WarBoardPieceData_o *v28; // x8
  struct WarBoardUserMasterData_o *v29; // x8
  struct WarBoardUserServantData_o *serverServantData; // x8
  struct WarBoardPieceData_o *v31; // x8
  struct WarBoardUserServantData_o *v32; // x8
  struct WarBoardPieceData_o *v33; // x8
  struct WarBoardUserServantData_o *v34; // x8
  struct WarBoardPieceData_o *v35; // x8
  struct WarBoardUserServantData_o *v36; // x8
  struct WarBoardPieceData_o *v37; // x8
  struct WarBoardUserServantData_o *v38; // x8
  struct WarBoardPieceData_o *v39; // x8
  struct WarBoardUserServantData_o *v40; // x8
  struct WarBoardPieceData_o *v41; // x8
  struct WarBoardUserServantData_o *v42; // x8
  struct WarBoardPieceData_o *v43; // x8
  struct WarBoardUserServantData_o *v44; // x8
  struct WarBoardPieceData_o *v45; // x8
  struct WarBoardUserServantData_o *v46; // x8
  struct WarBoardPieceData_o *v47; // x8
  struct WarBoardUserServantData_o *v48; // x8
  struct WarBoardPieceData_o *v49; // x8
  struct WarBoardUserServantData_o *v50; // x8
  __int128 v51; // q1
  WarBoardPieceData_SaveData_o *v52; // x20
  struct WarBoardPieceData_o *v53; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+0h] [xbp-50h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+20h] [xbp-30h]

  v4 = this;
  if ( (byte_42E5FC1 & 1) == 0 )
  {
    sub_B5D5C4(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, (_DWORD)method, v2, v3);
    this = (WarBoardPieceData_SaveData_o *)sub_B5D5C4(
                                             &Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__,
                                             v5,
                                             v6,
                                             v7);
    byte_42E5FC1 = 1;
  }
  owner = v4->fields.owner;
  if ( owner )
  {
    owner->fields._breakPoint_k__BackingField = v4->fields.breakPoint;
    v9 = v4->fields.owner;
    if ( !v9 )
      goto LABEL_62;
    v9->fields._nowSquareIndex_k__BackingField = v4->fields.squareIndex;
    v10 = v4->fields.owner;
    if ( !v10 )
      goto LABEL_62;
    v10->fields._currentActionCount_k__BackingField = v4->fields.actionCount;
    v11 = v4->fields.owner;
    if ( !v11 )
      goto LABEL_62;
    v11->fields._attackCount_k__BackingField = v4->fields.attackCount;
    this = (WarBoardPieceData_SaveData_o *)v4->fields.owner;
    if ( !this )
      goto LABEL_62;
    *(_QWORD *)&this[1].fields.pieceIndex = v4->fields.prevAiRoute;
    sub_B5D560(&this[1].fields.pieceIndex);
    v12 = v4->fields.owner;
    if ( !v12 )
      goto LABEL_62;
    v12->fields._entryTurn_k__BackingField = v4->fields.entryTurn;
    v13 = v4->fields.owner;
    if ( !v13 )
      goto LABEL_62;
    v13->fields._StageReinfoId_k__BackingField = v4->fields.stageReinforcementId;
    v14 = v4->fields.owner;
    if ( !v14 )
      goto LABEL_62;
    v14->fields._ReinfoIndex_k__BackingField = v4->fields.reinforcementIndex;
    v15 = v4->fields.owner;
    if ( !v15 )
      goto LABEL_62;
    v15->fields._overwriteActionType_k__BackingField = v4->fields.overwriteActionType;
    v16 = v4->fields.owner;
    if ( !v16 )
      goto LABEL_62;
    v16->fields._overwriteAiId_k__BackingField = v4->fields.overwriteAiId;
    this = (WarBoardPieceData_SaveData_o *)v4->fields.owner;
    if ( !this )
      goto LABEL_62;
    this = (WarBoardPieceData_SaveData_o *)WarBoardPieceData__get_HasCost((WarBoardPieceData_o *)this, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v17 = v4->fields.owner;
      if ( !v17 )
        goto LABEL_62;
      this = (WarBoardPieceData_SaveData_o *)v17->fields._Cost_k__BackingField;
      if ( !this )
        goto LABEL_62;
      WarBoardCost__UpdateCurrentPointBySaveData((WarBoardCost_o *)this, v4->fields.currentActionPoint, 0LL);
    }
    this = (WarBoardPieceData_SaveData_o *)v4->fields.owner;
    if ( !this )
      goto LABEL_62;
    this = (WarBoardPieceData_SaveData_o *)WarBoardPieceData__get_isMaster((WarBoardPieceData_o *)this, 0LL);
    v18 = v4->fields.owner;
    if ( !v18 )
      goto LABEL_62;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      serverMasterData_k__BackingField = v18->fields._serverMasterData_k__BackingField;
      if ( serverMasterData_k__BackingField )
      {
        serverMasterData_k__BackingField->fields.currentLimitActionPoint = v4->fields.actionCount;
        v20 = v4->fields.owner;
        if ( v20 )
        {
          v21 = v20->fields._serverMasterData_k__BackingField;
          if ( v21 )
          {
            v21->fields.squareIndex = v4->fields.squareIndex;
            v22 = v4->fields.owner;
            if ( v22 )
            {
              v23 = v22->fields._serverMasterData_k__BackingField;
              if ( v23 )
              {
                v23->fields.currentForceActionPoint = v4->fields.currentForceActionPoint;
                v24 = v4->fields.owner;
                if ( v24 )
                {
                  v25 = v24->fields._serverMasterData_k__BackingField;
                  if ( v25 )
                  {
                    v25->fields.attackCount = v4->fields.attackCount;
                    v26 = v4->fields.owner;
                    if ( v26 )
                    {
                      v27 = v26->fields._serverMasterData_k__BackingField;
                      if ( v27 )
                      {
                        v27->fields.currentPieceActionPoint = v4->fields.currentActionPoint;
                        v28 = v4->fields.owner;
                        if ( v28 )
                        {
                          v29 = v28->fields._serverMasterData_k__BackingField;
                          if ( v29 )
                          {
                            v29->fields.defeatPoint = v4->fields.breakPoint;
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
        sub_B5D69C(this, method);
      }
    }
    else
    {
      serverServantData = v18->fields.serverServantData;
      if ( serverServantData )
      {
        serverServantData->fields.currentActionPoint = v4->fields.actionCount;
        v31 = v4->fields.owner;
        if ( !v31 )
          goto LABEL_62;
        v32 = v31->fields.serverServantData;
        if ( !v32 )
          goto LABEL_62;
        v32->fields.squareIndex = v4->fields.squareIndex;
        v33 = v4->fields.owner;
        if ( !v33 )
          goto LABEL_62;
        v34 = v33->fields.serverServantData;
        if ( !v34 )
          goto LABEL_62;
        v34->fields.buffDataSave = v4->fields.buffSave;
        sub_B5D560(&v34->fields.buffDataSave);
        v35 = v4->fields.owner;
        if ( !v35 )
          goto LABEL_62;
        v36 = v35->fields.serverServantData;
        if ( !v36 )
          goto LABEL_62;
        v36->fields.attackCount = v4->fields.attackCount;
        v37 = v4->fields.owner;
        if ( !v37 )
          goto LABEL_62;
        v38 = v37->fields.serverServantData;
        if ( !v38 )
          goto LABEL_62;
        v38->fields.currentHp = v4->fields.hp;
        v39 = v4->fields.owner;
        if ( !v39 )
          goto LABEL_62;
        v40 = v39->fields.serverServantData;
        if ( !v40 )
          goto LABEL_62;
        v40->fields.currentNp = v4->fields.np;
        v41 = v4->fields.owner;
        if ( !v41 )
          goto LABEL_62;
        v42 = v41->fields.serverServantData;
        if ( !v42 )
          goto LABEL_62;
        v42->fields.nextNpTurn = v4->fields.tdTurn;
        v43 = v4->fields.owner;
        if ( !v43 )
          goto LABEL_62;
        v44 = v43->fields.serverServantData;
        if ( !v44 )
          goto LABEL_62;
        v44->fields.criticalStars = v4->fields.criticalStars;
        v45 = v4->fields.owner;
        if ( !v45 )
          goto LABEL_62;
        v46 = v45->fields.serverServantData;
        if ( !v46 )
          goto LABEL_62;
        v46->fields.currentPieceActionPoint = v4->fields.currentActionPoint;
        v47 = v4->fields.owner;
        if ( !v47 )
          goto LABEL_62;
        v48 = v47->fields.serverServantData;
        if ( !v48 )
          goto LABEL_62;
        v48->fields.defeatPoint = v4->fields.breakPoint;
        this = (WarBoardPieceData_SaveData_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
        v49 = v4->fields.owner;
        if ( !v49 )
          goto LABEL_62;
        v50 = v49->fields.serverServantData;
        if ( !v50 )
          goto LABEL_62;
        v51 = *(_OWORD *)&v50->fields.id.fields.fakeValue;
        v52 = this;
        *(_OWORD *)&v55.fields.currentCryptoKey = *(_OWORD *)&v50->fields.id.fields.currentCryptoKey;
        *(_OWORD *)&v55.fields.fakeValue = v51;
        if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
        }
        v54 = v55;
        this = (WarBoardPieceData_SaveData_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_44902444(
                                                 &v54,
                                                 0LL);
        if ( !v52 )
          goto LABEL_62;
        this = (WarBoardPieceData_SaveData_o *)WarBoardManager__GetBattleServant(
                                                 (WarBoardManager_o *)v52,
                                                 (int64_t)this,
                                                 0LL);
        v53 = v4->fields.owner;
        if ( !v53 )
          goto LABEL_62;
        method = (const MethodInfo *)this;
        this = (WarBoardPieceData_SaveData_o *)v53->fields.serverServantData;
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
      sub_B5D69C(this, method);
    v3->fields._overwriteAiId_k__BackingField = this->fields.overwriteAiId;
  }
}


void __fastcall WarBoardPieceData_SaveData__Save(WarBoardPieceData_SaveData_o *this, const MethodInfo *method)
{
  struct WarBoardPieceData_o *owner; // x0
  struct WarBoardPieceData_o *v4; // x8
  struct WarBoardCost_o *Cost_k__BackingField; // x8
  int32_t CurrentActionPoint_k__BackingField; // w8
  struct WarBoardPieceData_o *v7; // x8
  struct WarBoardPieceData_o *v8; // x8
  struct WarBoardUserServantData_o *serverServantData; // x9
  struct WarBoardUserServantData_o *v10; // x9
  struct WarBoardUserServantData_o *v11; // x9
  struct BattleServantData_o *battleServant_k__BackingField; // x8
  long double v13; // q0
  struct WarBoardPieceData_o *v14; // x8
  struct WarBoardPieceData_o *v15; // x8
  struct BattleServantData_o *v16; // x9
  struct BattleServantData_o *v17; // x8
  struct WarBoardPieceData_o *v18; // x8
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
    v4 = this->fields.owner;
    if ( !v4 )
      goto LABEL_28;
    Cost_k__BackingField = v4->fields._Cost_k__BackingField;
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
  sub_B5D560(&this->fields.buffSave);
  v7 = this->fields.owner;
  this->fields.currentForceActionPoint = 0;
  if ( !v7 )
    goto LABEL_28;
  this->fields.prevAiRoute = v7->fields._PrevAiRoute_k__BackingField;
  sub_B5D560(&this->fields.prevAiRoute);
  owner = this->fields.owner;
  if ( !owner )
    goto LABEL_28;
  this->fields.entryTurn = owner->fields._entryTurn_k__BackingField;
  this->fields.stageReinforcementId = owner->fields._StageReinfoId_k__BackingField;
  this->fields.reinforcementIndex = owner->fields._ReinfoIndex_k__BackingField;
  this->fields.overwriteActionType = owner->fields._overwriteActionType_k__BackingField;
  this->fields.overwriteAiId = owner->fields._overwriteAiId_k__BackingField;
  owner = (struct WarBoardPieceData_o *)WarBoardPieceData__get_isServant(owner, 0LL);
  v8 = this->fields.owner;
  if ( !v8 )
    goto LABEL_28;
  if ( ((unsigned __int8)owner & 1) != 0 )
  {
    serverServantData = v8->fields.serverServantData;
    if ( serverServantData )
    {
      this->fields.consumedActionPointDateTime = serverServantData->fields.consumedActionPointDateTime;
      v10 = v8->fields.serverServantData;
      if ( !v10 )
        goto LABEL_28;
      this->fields.criticalStars = v10->fields.criticalStars;
      v11 = v8->fields.serverServantData;
      if ( !v11 )
        goto LABEL_28;
      this->fields.consumedRecoverDonotActCostDateTime = v11->fields.consumedRecoverDonotActCostDateTime;
    }
    battleServant_k__BackingField = v8->fields._battleServant_k__BackingField;
    if ( battleServant_k__BackingField )
    {
      owner = (struct WarBoardPieceData_o *)battleServant_k__BackingField->fields.buffData;
      if ( owner )
      {
        this->fields.buffSave = BattleBuffData__getSaveData((BattleBuffData_o *)owner, 0LL);
        *(__n128 *)&v13 = sub_B5D560(&this->fields.buffSave);
        v14 = this->fields.owner;
        if ( v14 )
        {
          owner = (struct WarBoardPieceData_o *)v14->fields._battleServant_k__BackingField;
          if ( owner )
          {
            owner = (struct WarBoardPieceData_o *)((__int64 (__fastcall *)(struct WarBoardPieceData_o *, Il2CppMethodPointer, long double))owner->klass->vtable._9_get_AiTargetSortSecondIndex.method)(
                                                    owner,
                                                    owner->klass->vtable._10_GetIndividuality.methodPtr,
                                                    v13);
            v15 = this->fields.owner;
            this->fields.hp = (int)owner;
            if ( v15 )
            {
              v16 = v15->fields._battleServant_k__BackingField;
              if ( v16 )
              {
                this->fields.np = v16->fields.np;
                v17 = v15->fields._battleServant_k__BackingField;
                if ( v17 )
                {
                  this->fields.tdTurn = v17->fields.nexttpturn;
                  return;
                }
              }
            }
          }
        }
      }
LABEL_28:
      sub_B5D69C(owner, method);
    }
  }
  else
  {
    owner = (struct WarBoardPieceData_o *)WarBoardPieceData__get_isMaster(this->fields.owner, 0LL);
    if ( ((unsigned __int8)owner & 1) != 0 )
    {
      v18 = this->fields.owner;
      if ( !v18 )
        goto LABEL_28;
      serverMasterData_k__BackingField = v18->fields._serverMasterData_k__BackingField;
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
  struct WarBoardPieceData_o *owner; // x0

  if ( !data )
    sub_B5D69C(this, 0LL);
  this->fields.owner = WarBoardData__GetPiece(
                         data,
                         this->fields.forceId,
                         this->fields.groupId,
                         this->fields.pieceIndex,
                         0,
                         0LL);
  sub_B5D560(&this->fields.owner);
  owner = this->fields.owner;
  if ( owner )
  {
    owner->fields.localSaveData = this;
    sub_B5D560(&owner->fields.localSaveData);
  }
}


void __fastcall WarBoardPieceData___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct WarBoardPieceData___c_StaticFields *static_fields; // x0

  if ( (byte_42E5FBE & 1) == 0 )
  {
    sub_B5D5C4(&WarBoardPieceData___c_TypeInfo, v1, v2, v3);
    byte_42E5FBE = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(WarBoardPieceData___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = WarBoardPieceData___c_TypeInfo->static_fields;
  static_fields->__9 = (struct WarBoardPieceData___c_o *)v4;
  sub_B5D560(static_fields);
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
    sub_B5D69C(0LL, x);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  WebViewManager_o *Instance; // x0
  __int64 v15; // x1
  System_Action_bool__o *_9__4; // x22
  WarBoardManager_o *v17; // x20

  if ( (byte_42E5FBF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_bool___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Action_bool__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_WarBoardPieceData___c__DisplayClass312_0__UpdateFromServerData_b__4__, v11, v12, v13);
    byte_42E5FBF = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__4 = this->fields.__9__4;
  v17 = (WarBoardManager_o *)Instance;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_bool__o *)sub_B5D694(System_Action_bool__TypeInfo);
    System_Action_bool____ctor(
      _9__4,
      (Il2CppObject *)this,
      Method_WarBoardPieceData___c__DisplayClass312_0__UpdateFromServerData_b__4__,
      (const MethodInfo_25873D8 *)Method_System_Action_bool___ctor__);
    this->fields.__9__4 = _9__4;
    sub_B5D560(&this->fields.__9__4);
  }
  if ( !v17 )
    sub_B5D69C(Instance, v15);
  WarBoardManager__ShowActionCountDecreaseNoticePopup(v17, _9__4, 0LL);
}


void __fastcall WarBoardPieceData___c__DisplayClass312_0___UpdateFromServerData_b__4(
        WarBoardPieceData___c__DisplayClass312_0_o *this,
        bool ok,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v5; // w1
  int v6; // w2
  __int64 v7; // x3
  char v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  System_Action_o *_9__5; // x22
  WarBoardManager_o *v14; // x20

  if ( (byte_42E5FC0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, ok, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_WarBoardPieceData___c__DisplayClass312_0__UpdateFromServerData_b__5__, v8, v9, v10);
    byte_42E5FC0 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_WarBoardManager__get_Instance__);
  _9__5 = this->fields.__9__5;
  v14 = (WarBoardManager_o *)Instance;
  if ( !_9__5 )
  {
    _9__5 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__5,
      (Il2CppObject *)this,
      Method_WarBoardPieceData___c__DisplayClass312_0__UpdateFromServerData_b__5__,
      0LL);
    this->fields.__9__5 = _9__5;
    sub_B5D560(&this->fields.__9__5);
  }
  if ( !v14 )
    sub_B5D69C(Instance, v12);
  WarBoardManager__HideActionCountDecreaseNoticePopup(v14, _9__5, 0LL);
}


void __fastcall WarBoardPieceData___c__DisplayClass312_0___UpdateFromServerData_b__5(
        WarBoardPieceData___c__DisplayClass312_0_o *this,
        const MethodInfo *method)
{
  this->fields.popupClose = 1;
}