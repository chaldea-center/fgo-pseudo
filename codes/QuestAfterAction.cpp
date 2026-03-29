void QuestAfterAction___cctor(const MethodInfo *method)
{
  if ( (byte_4D2D4AF & 1) == 0 )
  {
    sub_1C93AD4(&QuestAfterAction_TypeInfo);
    byte_4D2D4AF = 1;
  }
  LODWORD(QuestAfterAction_TypeInfo->static_fields->EventAnimationAfterBgmResetTime) = (struct QuestAfterAction_StaticFields)1056964608;
}


void QuestAfterAction___ctor(QuestAfterAction_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  BlankEarthQuestAfterAction_o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  PlanetEarthQuestAfterAction_o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v24; // x20
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Collections_Generic_Dictionary_int__object__o *v31; // x20
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7

  if ( (byte_4D2D4AE & 1) == 0 )
  {
    sub_1C93AD4(&BlankEarthQuestAfterAction_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo);
    sub_1C93AD4(&PlanetEarthQuestAfterAction_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
    sub_1C93AD4(&QuestAfterAction_TitleInfoControlCallback_TypeInfo);
    byte_4D2D4AE = 1;
  }
  v3 = (Il2CppObject *)sub_1C93D20(QuestAfterAction_TitleInfoControlCallback_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields._TitleInfoCtrlCallback_k__BackingField = (struct QuestAfterAction_TitleInfoControlCallback_o *)v3;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._TitleInfoCtrlCallback_k__BackingField,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (BlankEarthQuestAfterAction_o *)sub_1C93D20(BlankEarthQuestAfterAction_TypeInfo);
  BlankEarthQuestAfterAction___ctor(v10, 0);
  this->fields._BlankEarthQuestAfterAction_k__BackingField = v10;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._BlankEarthQuestAfterAction_k__BackingField,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (PlanetEarthQuestAfterAction_o *)sub_1C93D20(PlanetEarthQuestAfterAction_TypeInfo);
  PlanetEarthQuestAfterAction___ctor(v17, 0);
  this->fields._PlanetEarthQuestAfterAction_k__BackingField = (struct BlankEarthQuestAfterAction_o *)v17;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._PlanetEarthQuestAfterAction_k__BackingField,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C93D20(System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v24,
    (const MethodInfo_34F52C0 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
  this->fields.commandTypeIds = (struct System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *)v24;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.commandTypeIds, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v31,
    (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
  this->fields.svtVoices = (struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v31;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.svtVoices, (int32_t)v31, v32, v33, v34, v35, v36, v37);
  this->fields.MapMoveBeforeFocusSpotId = -1;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3AC57E4 *)Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
}


void QuestAfterAction__CallEndAct(QuestAfterAction_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_endAct; // x0
  System_Action_o *endAct; // t1

  endAct = this->fields.endAct;
  p_endAct = (GrandQuestFolderBoardItem_o *)&this->fields.endAct;
  p_endAct->klass = 0;
  sub_1C93A78(p_endAct, 0, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(endAct, 0);
}


bool QuestAfterAction__CheckChangeBlankEarth(QuestAfterAction_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  int32_t BlankEarthTargetWarId; // w8
  bool v5; // w19
  TerminalPramsManager_c *v6; // x0
  int32_t QuestId_k__BackingField; // w20
  _BOOL8 QuestAfterActionVals; // x0
  __int64 v9; // x1
  System_String_array *v10; // x8
  signed int v11; // w20
  unsigned int max_length; // w9
  int32_t result; // [xsp+4h] [xbp-2Ch] BYREF
  System_String_array *questAfterAction; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2D48D & 1) == 0 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_1166/*"1"*/);
    byte_4D2D48D = 1;
  }
  questAfterAction = 0;
  result = 0;
  BlankEarthTargetWarId = this->fields.BlankEarthTargetWarId;
  v5 = 0;
  if ( BlankEarthTargetWarId <= 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D2A7BF )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2A7BF = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v6->static_fields->_QuestId_k__BackingField;
    if ( !byte_4D2A7BE )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
      byte_4D2A7BE = 1;
    }
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = TerminalPramsManager_TypeInfo;
    }
    QuestAfterActionVals = QuestAfterAction__TryGetQuestAfterActionVals(
                             (QuestAfterAction_o *)v6,
                             &questAfterAction,
                             QuestId_k__BackingField,
                             v6->static_fields->_PhaseCnt_k__BackingField + 1,
                             v2);
    if ( QuestAfterActionVals )
    {
      v10 = questAfterAction;
      if ( !questAfterAction )
LABEL_25:
        sub_1C93D2C(QuestAfterActionVals, v9);
      v11 = 0;
      while ( 1 )
      {
        max_length = v10->max_length;
        v5 = v11 < (int)max_length;
        if ( v11 >= (int)max_length )
          break;
        if ( v11 >= max_length )
          goto LABEL_28;
        QuestAfterActionVals = System_Int32__TryParse(v10->m_Items[v11], &result, 0);
        if ( QuestAfterActionVals && result == 701 )
        {
          if ( !questAfterAction )
            goto LABEL_25;
          if ( (unsigned int)(v11 + 1) >= LODWORD(questAfterAction->max_length) )
LABEL_28:
            sub_1C93D34(QuestAfterActionVals);
          QuestAfterActionVals = System_String__op_Equality(
                                   questAfterAction->m_Items[v11 + 1],
                                   (System_String_o *)StringLiteral_1166/*"1"*/,
                                   0);
          if ( QuestAfterActionVals )
            break;
        }
        v10 = questAfterAction;
        v11 += 2;
        if ( !questAfterAction )
          goto LABEL_25;
      }
    }
    else
    {
      return 0;
    }
  }
  return v5;
}


void QuestAfterAction__Clear(QuestAfterAction_o *this, const MethodInfo *method)
{
  QuestAfterAction_c *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2D4A7 & 1) == 0 )
  {
    sub_1C93AD4(&QuestAfterAction_TypeInfo);
    byte_4D2D4A7 = 1;
  }
  v3 = QuestAfterAction_TypeInfo;
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  QuestAfterAction__DeleteContinueData((const MethodInfo *)v3);
  this->fields.commandBuf = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.commandBuf, 0, v4, v5, v6, v7, v8, v9);
}


QuestAfterAction_Command_array *QuestAfterAction__ConvertValsToCommand(
        QuestAfterAction_o *this,
        System_String_array *actionVals,
        const MethodInfo *method)
{
  if ( (byte_4D2D49C & 1) == 0 )
  {
    sub_1C93AD4(&QuestAfterAction_TypeInfo);
    byte_4D2D49C = 1;
  }
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  return QuestAfterAction__GenerateCommandBuf(actionVals, (const MethodInfo *)actionVals);
}


// local variable allocation has failed, the output may be wrong!
void QuestAfterAction__CreateCommandBuf(QuestAfterAction_o *this, bool isBeforeAction, const MethodInfo *method)
{
  QuestAfterAction_o *v4; // x21
  TerminalPramsManager_c **v5; // x29
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  TerminalPramsManager_c *v8; // x0
  int32_t QuestId_k__BackingField; // w22
  int32_t PhaseCnt_k__BackingField; // w19
  __int64 v11; // x1
  Il2CppObject *Instance; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *MasterData_object; // x0
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *klass; // x8
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v15; // x8
  const MethodInfo *v16; // x8
  int32_t invoker_method_high; // w24
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v18; // x8
  const MethodInfo *v19; // x8
  int32_t invoker_method; // w25
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v21; // x8
  const MethodInfo *v22; // x8
  int32_t MasterName_k__BackingField_high; // w24
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v24; // x8
  const MethodInfo *v25; // x8
  int32_t MasterKind_k__BackingField; // w19
  TerminalPramsManager_c *v27; // x0
  TerminalSceneComponent_c *v28; // x0
  TerminalPramsManager_c *v29; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x23
  int32_t v31; // w24
  int32_t v32; // w24
  System_String_o *lookup; // x24
  bool v34; // w24
  bool v35; // w23
  Il2CppObject *v36; // x23
  WarEntity_o *QuestId; // x0
  WarEntity_o *v38; // x23
  BalanceConfig_c *v39; // x0
  bool v40; // w0
  uint32_t cctor_finished; // w9
  TerminalPramsManager_c *v42; // x0
  TerminalPramsManager_c *v43; // x0
  int32_t id; // w19
  bool v45; // w23
  TerminalPramsManager_c *v46; // x0
  Il2CppObject *Master_object; // x23
  WarReleaseEntity_o *OpenEntity; // x24
  Il2CppObject *v49; // x23
  TerminalPramsManager_c *v50; // x0
  Il2CppObject *v51; // x23
  int32_t items_high; // w24
  Il2CppObject *v53; // x22
  int32_t v54; // w23
  TerminalPramsManager_c *v55; // x0
  Il2CppObject *v56; // x22
  int32_t v57; // w24
  bool IsOverwriteCommandNone; // w0
  il2cpp_array_size_t max_length; // x8
  __int64 v60; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  int *commandBuf; // x8
  unsigned __int64 v68; // x24
  unsigned int v69; // w20
  __int64 v70; // x25
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7
  __int64 v77; // x8
  System_String_o *v78; // x1
  System_String_o **v79; // x26
  const MethodInfo *v80; // x2
  int v81; // w8
  bool v82; // w8
  TerminalPramsManager_c **v83; // x23
  System_Collections_Generic_Dictionary_int__object__o *svtVoices; // x27
  int32_t v85; // w22
  DataMasterBase_TMaster__TEntity__PKType__o *v86; // x29
  __int64 v87; // x28
  int32_t v88; // w2
  int32_t v89; // w3
  System_String_o *v90; // x4
  int32_t v91; // w5
  int64_t v92; // x6
  System_String_o *v93; // x7
  System_String_c *MasterName_k__BackingField; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v95; // x27
  int32_t v96; // w27
  TerminalPramsManager_c *v97; // x0
  BalanceConfig_c *v98; // x8
  int32_t WarId_k__BackingField; // w28
  TerminalPramsManager_c *v100; // x0
  int32_t v101; // w28
  int v102; // w8
  unsigned int v103; // w8
  const MethodInfo *v104; // x1
  System_Collections_Generic_List_int__o *Item; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v107; // x9
  __int64 size; // x10
  QuestAfterAction_o *v109; // x0
  const MethodInfo *v110; // x2
  System_String_c *v111; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v112; // x26
  unsigned __int64 v113; // x27
  System_String_Fields v114; // x8
  _QWORD *v115; // x9
  __int64 MasterName_k__BackingField_low; // x10
  unsigned int *v117; // x26
  int32_t v118; // w2
  int32_t v119; // w3
  System_String_o *v120; // x4
  int32_t v121; // w5
  int64_t v122; // x6
  System_String_o *v123; // x7
  unsigned int *v124; // x0
  TerminalPramsManager_c *v125; // x0
  TerminalPramsManager_c *v126; // x0
  int32_t BeforeQuestStartWarId_k__BackingField; // w19
  TerminalSceneComponent_c *v128; // x0
  Il2CppObject *v129; // x20
  TerminalPramsManager_c *v130; // x0
  TerminalPramsManager_c *v131; // x0
  Il2CppObject *v132; // x21
  TerminalPramsManager_c *v133; // x0
  BalanceConfig_c *v134; // x8
  int32_t v135; // w19
  int32_t v136; // w19
  TerminalPramsManager_c *v137; // x0
  TerminalPramsManager_c *v138; // x0
  BalanceConfig_c *v139; // x8
  int32_t v140; // w20
  TerminalPramsManager_c *v141; // x0
  TerminalPramsManager_c *v142; // x0
  TerminalPramsManager_c *v143; // x0
  System_Collections_ObjectModel_ObservableCollection_TEntity__c *v144; // x8
  ScrTerminalListTop_o *v145; // x20
  TerminalPramsManager_c *v146; // x0
  TerminalPramsManager_c *v147; // x0
  __int64 v148; // x0
  char v149; // [xsp+Ch] [xbp-A4h]
  System_String_array *actionCommand; // [xsp+10h] [xbp-A0h]
  unsigned int **p_commandBuf; // [xsp+18h] [xbp-98h]
  OpeningMovieEntity_o *ent; // [xsp+20h] [xbp-90h] BYREF
  int32_t svtId; // [xsp+2Ch] [xbp-84h] BYREF
  Il2CppObject *v154; // [xsp+30h] [xbp-80h] BYREF
  QuestEntity_o *entity; // [xsp+38h] [xbp-78h] BYREF
  Il2CppObject *v156; // [xsp+40h] [xbp-70h] BYREF
  QuestEntity_o *v157; // [xsp+48h] [xbp-68h] BYREF

  v4 = this;
  if ( (byte_4D2D48C & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&bool_TypeInfo);
    sub_1C93AD4(&QuestAfterAction_Command___TypeInfo);
    sub_1C93AD4(&QuestAfterAction_Command_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_WarMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C93AD4(&GrandQuestViewSwitcher_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&QuestAfterAction_TypeInfo);
    sub_1C93AD4(&ScrTerminalListTop_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    sub_1C93AD4(&QuestAfterAction_VoiceInfo_TypeInfo);
    sub_1C93AD4(&StringLiteral_16833/*"afterActionBk"*/);
    this = (QuestAfterAction_o *)sub_1C93AD4(&StringLiteral_809/*","*/);
    byte_4D2D48C = 1;
  }
  v5 = &TerminalPramsManager_TypeInfo;
  v156 = 0;
  v157 = 0;
  v154 = 0;
  entity = 0;
  svtId = 0;
  ent = 0;
  *(_WORD *)&v4->fields.isLoadedVoice = 0;
  *(_QWORD *)&v4->fields.ActionMapTargetType = -1;
  if ( isBeforeAction )
  {
    if ( System_Linq_Enumerable__Any_KeyValuePair_int__object__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.svtVoices,
           (const MethodInfo_31AF784 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____) )
    {
      QuestAfterAction__releaseVoice(v4, v6);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D2A7BF )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2A7BF = 1;
    }
    v8 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v8 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v8->static_fields->_QuestId_k__BackingField;
    if ( !byte_4D2A7BE )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      v8 = TerminalPramsManager_TypeInfo;
      byte_4D2A7BE = 1;
    }
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = TerminalPramsManager_TypeInfo;
    }
    PhaseCnt_k__BackingField = v8->static_fields->_PhaseCnt_k__BackingField;
    if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
    actionCommand = QuestAfterAction__GetBeforeAction(QuestId_k__BackingField, PhaseCnt_k__BackingField + 1, v7);
    goto LABEL_234;
  }
  QuestAfterAction__LoadTerminalTransitionInfo(this, (const MethodInfo *)isBeforeAction);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  klass = MasterData_object[2].fields.list->klass;
  if ( !klass )
    goto LABEL_356;
  if ( !klass->vtable._9_unknown.method )
    goto LABEL_82;
  if ( !LODWORD(MasterData_object[3].monitor) )
    j_il2cpp_runtime_class_init_0(MasterData_object);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  v15 = MasterData_object[2].fields.list->klass;
  if ( !v15 )
    goto LABEL_356;
  v16 = v15->vtable._9_unknown.method;
  if ( !v16 )
    goto LABEL_356;
  invoker_method_high = HIDWORD(v16->invoker_method);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    byte_4D2A6EE = 1;
  }
  if ( !LODWORD(MasterData_object[3].monitor) )
  {
    j_il2cpp_runtime_class_init_0(MasterData_object);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
  }
  v18 = MasterData_object[2].fields.list->klass;
  if ( !v18 )
    goto LABEL_356;
  v19 = v18->vtable._9_unknown.method;
  if ( !v19 )
    goto LABEL_356;
  invoker_method = (int32_t)v19->invoker_method;
  if ( invoker_method >= 1 )
  {
    if ( !LODWORD(MasterData_object[3].monitor) )
      j_il2cpp_runtime_class_init_0(MasterData_object);
    if ( !byte_4D2A6EE )
    {
      sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
      byte_4D2A6EE = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    }
    v21 = MasterData_object[2].fields.list->klass;
    if ( !v21 )
      goto LABEL_356;
    v22 = v21->vtable._9_unknown.method;
    if ( !v22 )
      goto LABEL_356;
    if ( !Instance )
      goto LABEL_356;
    actionCommand = (System_String_array *)v22->klass;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !MasterData_object )
      goto LABEL_356;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        MasterData_object,
                                                                        invoker_method,
                                                                        (const MethodInfo_3463274 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( !MasterData_object )
      goto LABEL_356;
    MasterName_k__BackingField_high = HIDWORD(MasterData_object->fields._MasterName_k__BackingField);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !MasterData_object )
      goto LABEL_356;
    goto LABEL_69;
  }
  if ( invoker_method_high >= 1 )
  {
    if ( !LODWORD(MasterData_object[3].monitor) )
      j_il2cpp_runtime_class_init_0(MasterData_object);
    if ( !byte_4D2A6EE )
    {
      sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
      byte_4D2A6EE = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    }
    v24 = MasterData_object[2].fields.list->klass;
    if ( !v24 )
      goto LABEL_356;
    v25 = v24->vtable._9_unknown.method;
    if ( !v25 )
      goto LABEL_356;
    actionCommand = (System_String_array *)v25->klass;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( !MasterData_object )
      goto LABEL_356;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        MasterData_object,
                                                                        invoker_method_high,
                                                                        (const MethodInfo_3463274 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    if ( !MasterData_object )
      goto LABEL_356;
    MasterName_k__BackingField_high = (int32_t)MasterData_object->fields._MasterName_k__BackingField;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_WarMaster___);
    if ( !MasterData_object )
      goto LABEL_356;
LABEL_69:
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)WarMaster__getByEventId(
                                                                        (WarMaster_o *)MasterData_object,
                                                                        MasterName_k__BackingField_high,
                                                                        0);
    if ( !MasterData_object )
      goto LABEL_356;
    MasterKind_k__BackingField = MasterData_object->fields._MasterKind_k__BackingField;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D2D136 )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2D136 = 1;
    }
    v27 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v27 = TerminalPramsManager_TypeInfo;
    }
    v27->static_fields->_WarId_k__BackingField = MasterKind_k__BackingField;
    if ( !byte_4D2A6EE )
    {
      sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
      byte_4D2A6EE = 1;
    }
    v28 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v28 = TerminalSceneComponent_TypeInfo;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v28->static_fields->mInstance;
    if ( !MasterData_object )
      goto LABEL_356;
    TerminalSceneComponent__CallQuestInformationCloseAtAll((TerminalSceneComponent_o *)MasterData_object, 0, 0);
    if ( actionCommand )
      goto LABEL_234;
  }
LABEL_82:
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2D4B9 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D4B9 = 1;
  }
  v29 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v29 = TerminalPramsManager_TypeInfo;
  }
  if ( !v29->static_fields->_IsPhaseClear_k__BackingField
    && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_16833/*"afterActionBk"*/, 0) )
  {
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_PlayerPrefs__GetString_72078212(
                                                                        (System_String_o *)StringLiteral_16833/*"afterActionBk"*/,
                                                                        0);
    if ( !MasterData_object )
      goto LABEL_356;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Split(
                                                                        (System_String_o *)MasterData_object,
                                                                        0x2Cu,
                                                                        0,
                                                                        0);
    if ( !MasterData_object )
      goto LABEL_356;
    v30 = MasterData_object;
    if ( !LODWORD(MasterData_object->fields._MasterName_k__BackingField) )
      goto LABEL_518;
    v31 = System_Int32__Parse(*(System_String_o **)&MasterData_object->fields.revision, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D2D130 )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2D130 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    HIDWORD(MasterData_object[2].fields.list->fields.items) = v31;
    if ( LODWORD(v30->fields._MasterName_k__BackingField) <= 1 )
      goto LABEL_518;
    v32 = System_Int32__Parse((System_String_o *)v30->fields.list, 0);
    if ( !byte_4D2D134 )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2D134 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    LODWORD(MasterData_object[2].fields.list->fields._monitor) = v32;
    if ( LODWORD(v30->fields._MasterName_k__BackingField) <= 2 )
      goto LABEL_518;
    lookup = (System_String_o *)v30->fields._lookup;
    if ( !bool_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
    v34 = System_Boolean__Parse(lookup, 0);
    if ( !byte_4D2D4BA )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2D4BA = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    BYTE5(MasterData_object[2].fields.list[1].fields.CollectionChanged) = v34;
    if ( LODWORD(v30->fields._MasterName_k__BackingField) <= 3 )
      goto LABEL_518;
    v35 = System_Boolean__Parse((System_String_o *)v30->fields.seriazlier, 0);
    if ( !byte_4D2D4BB )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2D4BB = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    BYTE6(MasterData_object[2].fields.list[1].fields.CollectionChanged) = v35;
    if ( !byte_4D2D4BC )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      byte_4D2D4BC = 1;
    }
    if ( !LODWORD(MasterData_object[3].monitor) )
    {
      j_il2cpp_runtime_class_init_0(MasterData_object);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( BYTE5(MasterData_object[2].fields.list[1].fields.CollectionChanged) )
    {
      if ( !Instance )
        goto LABEL_356;
      v36 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4D2A7BF )
      {
        sub_1C93AD4(&TerminalPramsManager_TypeInfo);
        byte_4D2A7BF = 1;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v36 )
        goto LABEL_356;
      QuestId = WarMaster__getByLastQuestId(
                  (WarMaster_o *)v36,
                  HIDWORD(MasterData_object[2].fields.list->fields.items),
                  0);
      if ( QuestId )
      {
        v38 = QuestId;
        v39 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v39 = BalanceConfig_TypeInfo;
        }
        v40 = System_Linq_Enumerable__Contains_int_(
                (System_Collections_Generic_IEnumerable_TSource__o *)v39->static_fields->MainInterludeMapReturnWarIds,
                v38->fields.id,
                (const MethodInfo_31C106C *)Method_System_Linq_Enumerable_Contains_int___);
        cctor_finished = TerminalPramsManager_TypeInfo->_2.cctor_finished;
        if ( v40 )
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4D2D4BD )
          {
            sub_1C93AD4(&TerminalPramsManager_TypeInfo);
            byte_4D2D4BD = 1;
          }
          v42 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v42 = TerminalPramsManager_TypeInfo;
          }
          v42->static_fields->_IsWarClear_k__BackingField = 0;
        }
        else
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4D2D4BD )
          {
            sub_1C93AD4(&TerminalPramsManager_TypeInfo);
            byte_4D2D4BD = 1;
          }
          v43 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v43 = TerminalPramsManager_TypeInfo;
          }
          v43->static_fields->_IsWarClear_k__BackingField = 1;
          id = v38->fields.id;
          if ( !byte_4D2D136 )
          {
            sub_1C93AD4(&TerminalPramsManager_TypeInfo);
            v43 = TerminalPramsManager_TypeInfo;
            byte_4D2D136 = 1;
          }
          if ( !v43->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v43);
            v43 = TerminalPramsManager_TypeInfo;
          }
          v43->static_fields->_WarId_k__BackingField = id;
          v45 = TerminalPramsManager__CheckIsOrdealCallWarClear(v38, 0);
          if ( !byte_4D2D4BE )
          {
            sub_1C93AD4(&TerminalPramsManager_TypeInfo);
            byte_4D2D4BE = 1;
          }
          v46 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v46 = TerminalPramsManager_TypeInfo;
          }
          v46->static_fields->_IsOrdealCallWarClear_k__BackingField = v45;
        }
      }
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2ABEB )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2ABEB = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_356;
  OpenEntity = WarReleaseMaster__GetOpenEntity(
                 (WarReleaseMaster_o *)Master_object,
                 HIDWORD(MasterData_object[2].fields.list->klass),
                 0);
  if ( !byte_4D2D4BF )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D4BF = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( HIBYTE(MasterData_object[2].fields.list[1].fields._blockReentrancyCount) )
  {
    if ( !LODWORD(MasterData_object[3].monitor) )
      j_il2cpp_runtime_class_init_0(MasterData_object);
    if ( !byte_4D2D072 )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2D072 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    if ( !*((_BYTE *)&MasterData_object[2].fields.list[1].fields._blockReentrancyCount + 4) )
      goto LABEL_233;
  }
  if ( !Instance )
    goto LABEL_356;
  v49 = DataManager__GetMasterData_object_(
          (DataManager_o *)Instance,
          (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2A7BF )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2A7BF = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v49 )
    goto LABEL_356;
  actionCommand = 0;
  if ( !QuestMaster__TryGetQuestEntity(
          (QuestMaster_o *)v49,
          &entity,
          HIDWORD(MasterData_object[2].fields.list->fields.items),
          0) )
    goto LABEL_234;
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)entity;
  if ( !entity )
    goto LABEL_356;
  if ( QuestEntity__IsOpenByTime(entity, 0, 0) )
  {
LABEL_189:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D2D4B9 )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2D4B9 = 1;
    }
    v50 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v50 = TerminalPramsManager_TypeInfo;
    }
    if ( v50->static_fields->_IsPhaseClear_k__BackingField )
    {
      v51 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4D2A7BF )
      {
        sub_1C93AD4(&TerminalPramsManager_TypeInfo);
        byte_4D2A7BF = 1;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      items_high = HIDWORD(MasterData_object[2].fields.list->fields.items);
      if ( !byte_4D2A7BE )
      {
        sub_1C93AD4(&TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
        byte_4D2A7BE = 1;
      }
      if ( !LODWORD(MasterData_object[3].monitor) )
      {
        j_il2cpp_runtime_class_init_0(MasterData_object);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v51 )
        goto LABEL_356;
      actionCommand = QuestPhaseDetailAddMaster__GetAfterAction(
                        (QuestPhaseDetailAddMaster_o *)v51,
                        items_high,
                        LODWORD(MasterData_object[2].fields.list->fields._monitor) + 1,
                        0);
      if ( actionCommand )
        goto LABEL_234;
      v53 = DataManager__GetMasterData_object_(
              (DataManager_o *)Instance,
              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4D2A7BF )
      {
        sub_1C93AD4(&TerminalPramsManager_TypeInfo);
        byte_4D2A7BF = 1;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      v54 = HIDWORD(MasterData_object[2].fields.list->fields.items);
      if ( !byte_4D2A7BE )
      {
        sub_1C93AD4(&TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
        byte_4D2A7BE = 1;
      }
      if ( !LODWORD(MasterData_object[3].monitor) )
      {
        j_il2cpp_runtime_class_init_0(MasterData_object);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v53 )
        goto LABEL_356;
      actionCommand = QuestPhaseDetailMaster__GetAfterAction(
                        (QuestPhaseDetailMaster_o *)v53,
                        v54,
                        LODWORD(MasterData_object[2].fields.list->fields._monitor) + 1,
                        0);
      if ( actionCommand )
        goto LABEL_234;
      v50 = TerminalPramsManager_TypeInfo;
    }
    if ( !v50->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v50);
    if ( !byte_4D2D4BC )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2D4BC = 1;
    }
    v55 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v55 = TerminalPramsManager_TypeInfo;
    }
    if ( v55->static_fields->_IsQuestClear_k__BackingField )
    {
      if ( !v55->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v55);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager__get_Debug_IsQuestReleaseAll(0);
      actionCommand = 0;
      if ( ((unsigned __int8)MasterData_object & 1) == 0 )
      {
        if ( !entity )
          goto LABEL_356;
        actionCommand = entity->fields.afterActionVals;
      }
      goto LABEL_234;
    }
    goto LABEL_233;
  }
  if ( !OpenEntity )
  {
LABEL_233:
    actionCommand = 0;
    goto LABEL_234;
  }
  actionCommand = 0;
  if ( WarReleaseEntity__IsOpen(OpenEntity, 0) )
    goto LABEL_189;
LABEL_234:
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v56 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2A7BF )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2A7BF = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  v57 = HIDWORD(MasterData_object[2].fields.list->fields.items);
  if ( !byte_4D2A7BE )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    byte_4D2A7BE = 1;
  }
  if ( !LODWORD(MasterData_object[3].monitor) )
  {
    j_il2cpp_runtime_class_init_0(MasterData_object);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v56 )
    goto LABEL_356;
  if ( QuestBehaviorMaster__IsOpenQuestBehaviorCond(
         (QuestBehaviorMaster_o *)v56,
         v57,
         LODWORD(MasterData_object[2].fields.list->fields._monitor) + 1,
         7,
         0) )
  {
    goto LABEL_522;
  }
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  IsOverwriteCommandNone = QuestAfterAction__IsOverwriteCommandNone(actionCommand, (const MethodInfo *)v11);
  if ( !actionCommand
    || IsOverwriteCommandNone
    || (max_length = actionCommand->max_length, (int)max_length < 2)
    || (max_length & 1) != 0 )
  {
LABEL_522:
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D2D4C0 )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2D4C0 = 1;
    }
    v125 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v125 = TerminalPramsManager_TypeInfo;
    }
    if ( v125->static_fields->_BeforeQuestStartWarId_k__BackingField >= 1 )
    {
      if ( !v125->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v125);
      if ( !byte_4D2AFE8 )
      {
        sub_1C93AD4(&TerminalPramsManager_TypeInfo);
        byte_4D2AFE8 = 1;
      }
      v126 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v126 = TerminalPramsManager_TypeInfo;
      }
      v126->static_fields->_IsAutoResume_k__BackingField = 1;
      if ( !byte_4D2D132 )
      {
        sub_1C93AD4(&TerminalPramsManager_TypeInfo);
        v126 = TerminalPramsManager_TypeInfo;
        byte_4D2D132 = 1;
      }
      if ( !v126->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v126);
        v126 = TerminalPramsManager_TypeInfo;
      }
      v126->static_fields->_DispState_k__BackingField = 2;
      if ( !byte_4D2D4C0 )
      {
        sub_1C93AD4(&TerminalPramsManager_TypeInfo);
        v126 = TerminalPramsManager_TypeInfo;
        byte_4D2D4C0 = 1;
      }
      if ( !v126->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v126);
        v126 = TerminalPramsManager_TypeInfo;
      }
      BeforeQuestStartWarId_k__BackingField = v126->static_fields->_BeforeQuestStartWarId_k__BackingField;
      if ( !byte_4D2D136 )
      {
        sub_1C93AD4(&TerminalPramsManager_TypeInfo);
        v126 = TerminalPramsManager_TypeInfo;
        byte_4D2D136 = 1;
      }
      if ( !v126->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v126);
        v126 = TerminalPramsManager_TypeInfo;
      }
      v126->static_fields->_WarId_k__BackingField = BeforeQuestStartWarId_k__BackingField;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4D2A6EE )
      {
        sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
        byte_4D2A6EE = 1;
      }
      v128 = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v128 = TerminalSceneComponent_TypeInfo;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v128->static_fields->mInstance;
      if ( !MasterData_object )
        goto LABEL_356;
      TerminalSceneComponent__CallQuestInformationCloseAtAll((TerminalSceneComponent_o *)MasterData_object, 0, 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      v129 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !byte_4D2ABEB )
      {
        sub_1C93AD4(&TerminalPramsManager_TypeInfo);
        byte_4D2ABEB = 1;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      if ( !v129 )
        goto LABEL_356;
      if ( DataMasterBase_object__object__int___TryGetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)v129,
             &v154,
             HIDWORD(MasterData_object[2].fields.list->klass),
             (const MethodInfo_34632C0 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v154;
        if ( !v154 )
          goto LABEL_356;
        v4->fields.ActionMapTargetId = WarEntity__GetBaseMap((WarEntity_o *)v154, 0);
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4D2D4C1 )
      {
        sub_1C93AD4(&TerminalPramsManager_TypeInfo);
        byte_4D2D4C1 = 1;
      }
      v130 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v130 = TerminalPramsManager_TypeInfo;
      }
      v130->static_fields->_BeforeQuestStartWarId_k__BackingField = 0;
    }
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16833/*"afterActionBk"*/, 0);
    return;
  }
  v60 = sub_1C93B7C(QuestAfterAction_Command___TypeInfo, (unsigned int)max_length >> 1);
  v4->fields.commandBuf = (struct QuestAfterAction_Command_array *)v60;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v4->fields.commandBuf, v60, v61, v62, v63, v64, v65, v66);
  commandBuf = (int *)v4->fields.commandBuf;
  p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
  if ( !commandBuf )
    goto LABEL_356;
  v149 = 0;
  v68 = 0;
  v69 = 0;
  while ( (__int64)v68 < commandBuf[6] )
  {
    v70 = sub_1C93D20(QuestAfterAction_Command_TypeInfo);
    System_Object___ctor((Il2CppObject *)v70, 0);
    if ( v69 >= LODWORD(actionCommand->max_length) )
      goto LABEL_518;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Int32__Parse(
                                                                        actionCommand->m_Items[v69],
                                                                        0);
    if ( !v70 )
      goto LABEL_356;
    *(_DWORD *)(v70 + 16) = (_DWORD)MasterData_object;
    v77 = (int)v69 | 1LL;
    if ( (unsigned int)v77 >= LODWORD(actionCommand->max_length) )
      goto LABEL_518;
    v78 = actionCommand->m_Items[v77];
    *(_QWORD *)(v70 + 24) = v78;
    v79 = (System_String_o **)(v70 + 24);
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v70 + 24), (int32_t)v78, v71, v72, v73, v74, v75, v76);
    if ( !v69 && !v4->fields.isRequestedStopBgm && *(_DWORD *)(v70 + 16) == 850 )
      v4->fields.isRequestedStopBgm = 1;
    if ( v4->fields.MapMoveBeforeFocusSpotId < 0 && *(_DWORD *)(v70 + 16) == 350 )
    {
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*v79;
      if ( !*v79 )
        goto LABEL_356;
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Split(
                                                                          (System_String_o *)MasterData_object,
                                                                          0x2Cu,
                                                                          0,
                                                                          0);
      if ( !MasterData_object )
        goto LABEL_356;
      if ( SLODWORD(MasterData_object->fields._MasterName_k__BackingField) >= 4 )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Int32__Parse(
                                                                            (System_String_o *)MasterData_object->fields.seriazlier,
                                                                            0);
        v4->fields.MapMoveBeforeFocusSpotId = (int)MasterData_object;
      }
    }
    v81 = *(_DWORD *)(v70 + 16);
    if ( v4->fields.IsMoveToEventRewardShop || v81 != 700 )
    {
      if ( v81 == 703 )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*v79;
        if ( !*v79 )
          goto LABEL_356;
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Split_64477632(
                                                                            (System_String_o *)MasterData_object,
                                                                            (System_String_o *)StringLiteral_809/*","*/,
                                                                            0,
                                                                            0);
        if ( !MasterData_object )
          goto LABEL_356;
        if ( SLODWORD(MasterData_object->fields._MasterName_k__BackingField) >= 3 )
        {
          MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Int32__Parse(
                                                                              (System_String_o *)MasterData_object->fields._lookup,
                                                                              0);
          v82 = (int)MasterData_object > 0;
        }
        else
        {
          v82 = 0;
        }
        v4->fields.IsMoveBeforeFadeIn = v82;
        v4->fields.IsMoveToClassScore = 1;
        v81 = *(_DWORD *)(v70 + 16);
      }
      if ( v81 == 800 )
      {
        v83 = v5;
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestAfterAction_Command__GetAvailableRandomVoice(
                                                                            (QuestAfterAction_Command_o *)v70,
                                                                            &svtId,
                                                                            v80);
        if ( MasterData_object )
        {
          svtVoices = (System_Collections_Generic_Dictionary_int__object__o *)v4->fields.svtVoices;
          v85 = svtId;
          v86 = MasterData_object;
          v87 = sub_1C93D20(QuestAfterAction_VoiceInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v87, 0);
          *(_DWORD *)(v87 + 16) = v85;
          *(_QWORD *)(v87 + 24) = v86;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v87 + 24), (int32_t)v86, v88, v89, v90, v91, v92, v93);
          if ( !svtVoices )
            goto LABEL_356;
          System_Collections_Generic_Dictionary_int__object___Add(
            svtVoices,
            v68,
            (Il2CppObject *)v87,
            (const MethodInfo_34BCD84 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__);
        }
        v81 = *(_DWORD *)(v70 + 16);
        v5 = v83;
      }
      if ( v81 == 702 )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*v79;
        if ( !*v79 )
          goto LABEL_356;
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Split_64477632(
                                                                            (System_String_o *)MasterData_object,
                                                                            (System_String_o *)StringLiteral_809/*","*/,
                                                                            0,
                                                                            0);
        if ( !MasterData_object )
          goto LABEL_356;
        MasterName_k__BackingField = (System_String_c *)MasterData_object->fields._MasterName_k__BackingField;
        v95 = MasterData_object;
        if ( MasterName_k__BackingField )
        {
          if ( !(_DWORD)MasterName_k__BackingField )
            goto LABEL_518;
          MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Int32__Parse(
                                                                              *(System_String_o **)&MasterData_object->fields.revision,
                                                                              0);
          if ( (int)MasterData_object >= 1 )
          {
            if ( SLODWORD(v95->fields._MasterName_k__BackingField) < 2 )
              v96 = 0;
            else
              v96 = System_Int32__Parse((System_String_o *)v95->fields.list, 0);
            if ( !(*v5)->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(*v5);
            TerminalPramsManager__SetAutoResumeForFolder(v96, 0);
            if ( !byte_4D2ABEB )
            {
              sub_1C93AD4(v5);
              byte_4D2ABEB = 1;
            }
            v97 = *v5;
            if ( !(*v5)->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v97);
              v97 = *v5;
            }
            v98 = BalanceConfig_TypeInfo;
            WarId_k__BackingField = v97->static_fields->_WarId_k__BackingField;
            if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
              v98 = BalanceConfig_TypeInfo;
            }
            if ( WarId_k__BackingField == v98->static_fields->OrdealCallWarId )
            {
              v4->fields.BlankEarthTargetWarId = v96;
              v149 = 1;
            }
            if ( !(*v5)->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(*v5);
            if ( !byte_4D2ABEB )
            {
              sub_1C93AD4(v5);
              byte_4D2ABEB = 1;
            }
            v100 = *v5;
            if ( !(*v5)->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v100);
              v100 = *v5;
            }
            v101 = v100->static_fields->_WarId_k__BackingField;
            if ( !ScrTerminalListTop_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(ScrTerminalListTop_TypeInfo);
            MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)ScrTerminalListTop__IsGrandQuestWarId(
                                                                                v101,
                                                                                0);
            if ( ((unsigned __int8)MasterData_object & 1) != 0 )
            {
              if ( !GrandQuestViewSwitcher_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(GrandQuestViewSwitcher_TypeInfo);
              MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)GrandQuestViewSwitcher__TryGetEnabledOpeningMovieEntity(
                                                                                  v96,
                                                                                  &ent,
                                                                                  1,
                                                                                  0);
              if ( ((unsigned __int8)MasterData_object & 1) != 0 )
                v4->fields.IsWaitFadeInForGrandQuestMovie = 1;
            }
          }
        }
      }
    }
    else
    {
      v4->fields.IsMoveToEventRewardShop = 1;
    }
    v102 = *(_DWORD *)(v70 + 16);
    if ( v102 <= 205 )
    {
      if ( (unsigned int)(v102 - 100) < 0xF && ((0x7C1Fu >> (v102 - 100)) & 1) != 0 )
      {
        v11 = 0;
      }
      else
      {
        if ( (unsigned int)(v102 - 200) > 5 )
          goto LABEL_339;
        v11 = 1;
      }
    }
    else if ( v102 <= 550 )
    {
      if ( (unsigned int)(v102 - 400) < 0xD )
      {
        v11 = 2;
      }
      else
      {
        if ( v102 != 550 )
          goto LABEL_339;
        v11 = 3;
      }
    }
    else
    {
      v103 = v102 - 1000;
      if ( v103 >= 0xD || ((0x1C07u >> v103) & 1) == 0 )
        goto LABEL_339;
      v11 = 4;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.commandTypeIds;
    if ( !MasterData_object )
      goto LABEL_356;
    Item = (System_Collections_Generic_List_int__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                       (System_Collections_Generic_Dictionary_TKey__TValue__o *)MasterData_object,
                                                       v11,
                                                       (const MethodInfo_34F5BF4 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestAfterAction__ExtractCommandTargetId(
                                                                        (QuestAfterAction_Command_o *)v70,
                                                                        v104);
    if ( !Item )
      goto LABEL_356;
    items = Item->fields._items;
    v107 = Method_System_Collections_Generic_List_int__Add__;
    ++Item->fields._version;
    if ( !items )
      goto LABEL_356;
    size = Item->fields._size;
    v11 = (unsigned int)MasterData_object;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        Item,
        (int32_t)MasterData_object,
        *(const MethodInfo_385C978 **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
    }
    else
    {
      Item->fields._size = size + 1;
      items->m_Items[size] = (int)MasterData_object;
    }
LABEL_339:
    if ( v4->fields.ActionMapTargetId <= 0 )
      QuestAfterAction__SetActionMap(v4, (QuestAfterAction_Command_o *)v70, v80);
    if ( *(_DWORD *)(v70 + 16) == 102 )
    {
      v109 = (QuestAfterAction_o *)System_Int32__Parse(*v79, 0);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)QuestAfterAction__GetMapGimmickId(
                                                                          v109,
                                                                          (int32_t)v109,
                                                                          v110);
      if ( !MasterData_object )
        goto LABEL_356;
      v111 = (System_String_c *)MasterData_object->fields._MasterName_k__BackingField;
      v112 = MasterData_object;
      if ( (int)v111 >= 1 )
      {
        v113 = 0;
        while ( v113 < (unsigned int)v111 )
        {
          MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v4->fields.invalidMapGimmickIdList;
          if ( !MasterData_object )
            goto LABEL_356;
          v11 = *((unsigned int *)&v112->fields.revision + v113);
          v114 = *(System_String_Fields *)&MasterData_object->fields._MasterKind_k__BackingField;
          v115 = Method_System_Collections_Generic_List_int__Add__;
          ++HIDWORD(MasterData_object->fields._MasterName_k__BackingField);
          if ( !*(_QWORD *)&v114 )
            goto LABEL_356;
          MasterName_k__BackingField_low = SLODWORD(MasterData_object->fields._MasterName_k__BackingField);
          if ( (unsigned int)MasterName_k__BackingField_low >= *(_DWORD *)(*(_QWORD *)&v114 + 24LL) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              (System_Collections_Generic_List_int__o *)MasterData_object,
              v11,
              *(const MethodInfo_385C978 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
          }
          else
          {
            LODWORD(MasterData_object->fields._MasterName_k__BackingField) = MasterName_k__BackingField_low + 1;
            *(_DWORD *)(*(_QWORD *)&v114 + 4 * MasterName_k__BackingField_low + 32) = v11;
          }
          LODWORD(v111) = v112->fields._MasterName_k__BackingField;
          if ( (__int64)++v113 >= (int)v111 )
            goto LABEL_352;
        }
LABEL_518:
        sub_1C93D34(MasterData_object);
      }
    }
LABEL_352:
    v117 = *p_commandBuf;
    if ( !*p_commandBuf )
      goto LABEL_356;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1C93C10(
                                                                        v70,
                                                                        *(_QWORD *)(*(_QWORD *)v117 + 64LL));
    if ( !MasterData_object )
    {
      v148 = sub_1C93D50();
      sub_1C93BFC(v148, 0);
    }
    if ( v68 >= v117[6] )
      goto LABEL_518;
    v124 = &v117[2 * v68];
    *((_QWORD *)v124 + 4) = v70;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v124 + 8), v70, v118, v119, v120, v121, v122, v123);
    v69 += 2;
    ++v68;
    commandBuf = (int *)*p_commandBuf;
    if ( !*p_commandBuf )
      goto LABEL_356;
  }
  if ( !(*v5)->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(*v5);
  if ( !byte_4D2D4B9 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D4B9 = 1;
  }
  v131 = *v5;
  if ( !(*v5)->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v131);
    v131 = *v5;
  }
  if ( v131->static_fields->_IsPhaseClear_k__BackingField )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v132 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !(*v5)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v5);
    if ( !byte_4D2A7BF )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2A7BF = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*v5;
    if ( !(*v5)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterData_object);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*v5;
    }
    if ( !v132 )
      goto LABEL_356;
    if ( QuestMaster__TryGetQuestEntity(
           (QuestMaster_o *)v132,
           &v157,
           HIDWORD(MasterData_object[2].fields.list->fields.items),
           0) )
    {
      if ( !(*v5)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v5);
      if ( !byte_4D2ABEB )
      {
        sub_1C93AD4(&TerminalPramsManager_TypeInfo);
        byte_4D2ABEB = 1;
      }
      v133 = *v5;
      if ( !(*v5)->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v133);
        v133 = *v5;
      }
      v134 = BalanceConfig_TypeInfo;
      v135 = v133->static_fields->_WarId_k__BackingField;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v134 = BalanceConfig_TypeInfo;
      }
      if ( v135 == v134->static_fields->OrdealCallWarId )
      {
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
        if ( v157 && MasterData_object )
        {
          MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                              MasterData_object,
                                                                              &v156,
                                                                              v157->fields.spotId,
                                                                              (const MethodInfo_34632C0 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)MasterData_object & 1) == 0 )
            goto LABEL_446;
          if ( v156 )
          {
            v136 = (int32_t)v156[1].klass;
            if ( !(*v5)->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(*v5);
            if ( !byte_4D2D4C2 )
            {
              sub_1C93AD4(&TerminalPramsManager_TypeInfo);
              byte_4D2D4C2 = 1;
            }
            v137 = *v5;
            if ( !(*v5)->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v137);
              v137 = *v5;
            }
            v137->static_fields->_BlankEarthAfterActionFocusSpotId_k__BackingField = v136;
            goto LABEL_446;
          }
        }
LABEL_356:
        sub_1C93D2C(MasterData_object, v11);
      }
    }
  }
LABEL_446:
  if ( (v149 & 1) == 0 )
  {
    if ( !(*v5)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v5);
    if ( !byte_4D2AFE8 )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2AFE8 = 1;
    }
    v138 = *v5;
    if ( !(*v5)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v138);
      v138 = *v5;
    }
    v138->static_fields->_IsAutoResume_k__BackingField = 1;
    if ( !byte_4D2D132 )
    {
      sub_1C93AD4(v5);
      v138 = *v5;
      byte_4D2D132 = 1;
    }
    if ( !v138->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v138);
      v138 = *v5;
    }
    v138->static_fields->_DispState_k__BackingField = 2;
    if ( !byte_4D2ABEB )
    {
      sub_1C93AD4(v5);
      v138 = *v5;
      byte_4D2ABEB = 1;
    }
    if ( !v138->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v138);
      v138 = *v5;
    }
    v139 = BalanceConfig_TypeInfo;
    v140 = v138->static_fields->_WarId_k__BackingField;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v139 = BalanceConfig_TypeInfo;
    }
    v141 = *v5;
    if ( v140 == v139->static_fields->OrdealCallWarId )
      goto LABEL_523;
    if ( !v141->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v141);
    if ( !byte_4D2D072 )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2D072 = 1;
    }
    v141 = *v5;
    if ( !(*v5)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v141);
      v141 = *v5;
    }
    if ( v141->static_fields->_IsOrdealCallWarClear_k__BackingField )
    {
LABEL_523:
      if ( !v141->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v141);
      if ( !byte_4D2D06B )
      {
        sub_1C93AD4(&TerminalPramsManager_TypeInfo);
        byte_4D2D06B = 1;
      }
      v142 = *v5;
      if ( !(*v5)->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v142);
        v142 = *v5;
      }
      v142->static_fields->_BlankEarthSpotId_k__BackingField = 0;
      if ( !byte_4D2D072 )
      {
        sub_1C93AD4(v5);
        v142 = *v5;
        byte_4D2D072 = 1;
      }
      if ( !v142->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v142);
        v142 = *v5;
      }
      if ( !v142->static_fields->_IsOrdealCallWarClear_k__BackingField )
      {
        if ( !v142->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v142);
        if ( !byte_4D2D132 )
        {
          sub_1C93AD4(&TerminalPramsManager_TypeInfo);
          byte_4D2D132 = 1;
        }
        v143 = *v5;
        if ( !(*v5)->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v143);
          v143 = *v5;
        }
        v143->static_fields->_DispState_k__BackingField = 3;
      }
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4D2A6EE )
    {
      sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
      byte_4D2A6EE = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    }
    v144 = MasterData_object[2].fields.list->klass;
    if ( !v144 )
      goto LABEL_356;
    v145 = *(ScrTerminalListTop_o **)&v144->_2.element_size;
    if ( !(*v5)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v5);
    if ( !byte_4D2ABEB )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2ABEB = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*v5;
    if ( !(*v5)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MasterData_object);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*v5;
    }
    if ( !v145 )
      goto LABEL_356;
    if ( ScrTerminalListTop__IsPlanetMapWarId(v145, HIDWORD(MasterData_object[2].fields.list->klass), 0) )
    {
      if ( !(*v5)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v5);
      if ( !byte_4D2D132 )
      {
        sub_1C93AD4(&TerminalPramsManager_TypeInfo);
        byte_4D2D132 = 1;
      }
      v146 = *v5;
      if ( !(*v5)->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v146);
        v146 = *v5;
      }
      v146->static_fields->_DispState_k__BackingField = 3;
    }
  }
  if ( !(*v5)->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(*v5);
  if ( !byte_4D2D135 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D135 = 1;
  }
  v147 = *v5;
  if ( !(*v5)->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v147);
    v147 = *v5;
  }
  v147->static_fields->_SpotId_k__BackingField = -1;
}


void QuestAfterAction__DeleteContinueData(const MethodInfo *method)
{
  if ( (byte_4D2D48A & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_16833/*"afterActionBk"*/);
    byte_4D2D48A = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16833/*"afterActionBk"*/, 0);
}


bool QuestAfterAction__ExistsBlankEarthTutorialRankChangeCommand(QuestAfterAction_o *this, const MethodInfo *method)
{
  QuestAfterAction_Command_array *BlankEarthTutorialCommand; // x0
  __int64 v3; // x1
  const MethodInfo *v4; // x2
  il2cpp_array_size_t max_length; // x8
  QuestAfterAction_Command_array *v6; // x19
  bool v7; // w20
  unsigned __int64 v8; // x21

  BlankEarthTutorialCommand = QuestAfterAction__GetBlankEarthTutorialCommand(this, method);
  if ( !BlankEarthTutorialCommand )
    sub_1C93D2C(0, v3);
  max_length = BlankEarthTutorialCommand->max_length;
  v6 = BlankEarthTutorialCommand;
  v7 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    do
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1C93D34(BlankEarthTutorialCommand);
      BlankEarthTutorialCommand = (QuestAfterAction_Command_array *)QuestAfterAction__IsRankChangeCommand(
                                                                      (QuestAfterAction_o *)BlankEarthTutorialCommand,
                                                                      v6->m_Items[v8],
                                                                      v4);
      if ( ((unsigned __int8)BlankEarthTutorialCommand & 1) != 0 )
        break;
      LODWORD(max_length) = v6->max_length;
      v7 = (__int64)++v8 < (int)max_length;
    }
    while ( (__int64)v8 < (int)max_length );
  }
  return v7;
}


int32_t QuestAfterAction__ExtractCommandTargetId(QuestAfterAction_Command_o *command, const MethodInfo *method)
{
  QuestAfterAction_Command_o *v2; // x19
  QuestAfterAction_Command_c *param; // x8

  v2 = command;
  if ( (byte_4D2D48F & 1) == 0 )
  {
    command = (QuestAfterAction_Command_o *)sub_1C93AD4(&StringLiteral_809/*","*/);
    byte_4D2D48F = 1;
  }
  if ( !v2 )
    goto LABEL_11;
  command = (QuestAfterAction_Command_o *)v2->fields.param;
  if ( !command )
    goto LABEL_11;
  command = (QuestAfterAction_Command_o *)System_String__Contains(
                                            (System_String_o *)command,
                                            (System_String_o *)StringLiteral_809/*","*/,
                                            0);
  param = (QuestAfterAction_Command_c *)v2->fields.param;
  if ( ((unsigned __int8)command & 1) == 0 )
    return System_Int32__Parse((System_String_o *)param, 0);
  if ( !param || (command = (QuestAfterAction_Command_o *)System_String__Split(v2->fields.param, 0x2Cu, 0, 0)) == 0 )
LABEL_11:
    sub_1C93D2C(command, method);
  if ( !LODWORD(command->fields.param) )
    sub_1C93D34(command);
  param = command[1].klass;
  return System_Int32__Parse((System_String_o *)param, 0);
}


System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *QuestAfterAction__FilterCommandsMainActionConflictsResolved(
        QuestAfterAction_o *this,
        System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *commandEnumerable,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4D2D49D & 1) == 0 )
  {
    sub_1C93AD4(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__98_TypeInfo);
    byte_4D2D49D = 1;
  }
  v5 = sub_1C93D20(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__98_TypeInfo);
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__98___ctor(
    (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__98_o *)v5,
    -2,
    0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  *(_QWORD *)(v5 + 56) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 56), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 48) = commandEnumerable;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 48), (int32_t)commandEnumerable, v14, v15, v16, v17, v18, v19);
  return (System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *)v5;
}


QuestAfterAction_Command_array *QuestAfterAction__GenerateCommandBuf(
        System_String_array *actionVals,
        const MethodInfo *method)
{
  __int64 IsNullOrEmpty; // x0
  __int64 v4; // x1
  long double inited; // q0
  _QWORD *v6; // x19
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0
  unsigned int *v10; // x20
  __int64 v11; // x22
  unsigned __int64 v12; // x23
  __int64 v13; // x24
  unsigned int v14; // w25
  __int64 v15; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_String_o *v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  __int64 v30; // x0

  if ( (byte_4D2D490 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Empty_QuestAfterAction_Command___);
    sub_1C93AD4(&QuestAfterAction_Command___TypeInfo);
    sub_1C93AD4(&QuestAfterAction_Command_TypeInfo);
    byte_4D2D490 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v6 = Method_System_Array_Empty_QuestAfterAction_Command___;
    v7 = *((_QWORD *)Method_System_Array_Empty_QuestAfterAction_Command___ + 7);
    if ( !v7 )
    {
      sub_1C69BC4(Method_System_Array_Empty_QuestAfterAction_Command___);
      v7 = v6[7];
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C69B68(inited);
    if ( !*(_DWORD *)(v8 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v8);
    v9 = *(_QWORD *)(v6[7] + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1C69B68(inited);
    return **(QuestAfterAction_Command_array ***)(v9 + 184);
  }
  else
  {
    if ( !actionVals
      || (IsNullOrEmpty = sub_1C93B7C(
                            QuestAfterAction_Command___TypeInfo,
                            (unsigned int)(SLODWORD(actionVals->max_length) / 2))) == 0 )
    {
LABEL_25:
      sub_1C93D2C(IsNullOrEmpty, v4);
    }
    v10 = (unsigned int *)IsNullOrEmpty;
    if ( *(int *)(IsNullOrEmpty + 24) >= 1 )
    {
      v11 = 0;
      v12 = 0;
      v13 = IsNullOrEmpty + 32;
      v14 = 1;
      do
      {
        v15 = sub_1C93D20(QuestAfterAction_Command_TypeInfo);
        System_Object___ctor((Il2CppObject *)v15, 0);
        if ( v14 - 1 >= LODWORD(actionVals->max_length) )
          goto LABEL_24;
        IsNullOrEmpty = System_Int32__Parse(actionVals->m_Items[v14 - 1], 0);
        if ( !v15 )
          goto LABEL_25;
        *(_DWORD *)(v15 + 16) = IsNullOrEmpty;
        if ( v14 >= LODWORD(actionVals->max_length) )
          goto LABEL_24;
        v22 = actionVals->m_Items[v14];
        *(_QWORD *)(v15 + 24) = v22;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v15 + 24), (int32_t)v22, v16, v17, v18, v19, v20, v21);
        IsNullOrEmpty = sub_1C93C10(v15, *(_QWORD *)(*(_QWORD *)v10 + 64LL));
        if ( !IsNullOrEmpty )
        {
          v30 = sub_1C93D50();
          sub_1C93BFC(v30, 0);
        }
        if ( v12 >= v10[6] )
LABEL_24:
          sub_1C93D34(IsNullOrEmpty);
        *(_QWORD *)(v13 + 8 * v12) = v15;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v13 + v11), v15, v23, v24, v25, v26, v27, v28);
        ++v12;
        v14 += 2;
        v11 += 8;
      }
      while ( (__int64)v12 < (int)v10[6] );
    }
  }
  return (QuestAfterAction_Command_array *)v10;
}


System_String_array *QuestAfterAction__GetAfterAction(int32_t questId, int32_t phase, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x22
  int32_t v8; // w23
  const MethodInfo *v9; // x1
  System_String_array *v10; // x22
  Il2CppObject *v12; // x19
  Il2CppObject *Entity; // x0
  Il2CppObject *v14; // x19

  if ( (byte_4D2D4A9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1C93AD4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_string___);
    sub_1C93AD4(&QuestAfterAction_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D4A9 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2A7BF )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2A7BF = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v8 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL);
  if ( !byte_4D2A7BE )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_4D2A7BE = 1;
  }
  if ( !LODWORD(Instance[1].fields.saveDataMapList) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_35;
  v10 = QuestPhaseDetailAddMaster__GetAfterAction(
          (QuestPhaseDetailAddMaster_o *)MasterData_object,
          v8,
          *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 24LL) + 1,
          0);
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  if ( !QuestAfterAction__IsOverwriteCommandNone(v10, v9) )
  {
    if ( v10 )
      return v10;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
      if ( Instance )
      {
        v10 = QuestPhaseDetailMaster__GetAfterAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0);
        if ( v10 )
          return v10;
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          v12 = DataManager__GetMasterData_object_(
                  Instance,
                  (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4D2A7BF )
          {
            sub_1C93AD4(&TerminalPramsManager_TypeInfo);
            byte_4D2A7BF = 1;
          }
          Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
          }
          if ( v12 )
          {
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v12,
                       *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
                       (const MethodInfo_3463274 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
            if ( Entity )
            {
              v14 = Entity;
              if ( System_Linq_Enumerable__Any_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)Entity[6].klass,
                     (const MethodInfo_31B0714 *)Method_System_Linq_Enumerable_Any_string___) )
              {
                return (System_String_array *)v14[6].klass;
              }
            }
            return 0;
          }
        }
      }
    }
LABEL_35:
    sub_1C93D2C(Instance, v6);
  }
  return 0;
}


System_String_array *QuestAfterAction__GetBeforeAction(int32_t questId, int32_t phase, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x22
  int32_t v8; // w23
  const MethodInfo *v9; // x1
  System_String_array *v10; // x22
  Il2CppObject *v12; // x19
  Il2CppObject *Entity; // x0
  Il2CppObject *v14; // x19

  if ( (byte_4D2D4A8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1C93AD4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_string___);
    sub_1C93AD4(&QuestAfterAction_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D4A8 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2A7BF )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2A7BF = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v8 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL);
  if ( !byte_4D2A7BE )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_4D2A7BE = 1;
  }
  if ( !LODWORD(Instance[1].fields.saveDataMapList) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_35;
  v10 = QuestPhaseDetailAddMaster__GetBeforeAction(
          (QuestPhaseDetailAddMaster_o *)MasterData_object,
          v8,
          *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 24LL) + 1,
          0);
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  if ( !QuestAfterAction__IsOverwriteCommandNone(v10, v9) )
  {
    if ( v10 )
      return v10;
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
      if ( Instance )
      {
        v10 = QuestPhaseDetailMaster__GetBeforeAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0);
        if ( v10 )
          return v10;
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          v12 = DataManager__GetMasterData_object_(
                  Instance,
                  (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4D2A7BF )
          {
            sub_1C93AD4(&TerminalPramsManager_TypeInfo);
            byte_4D2A7BF = 1;
          }
          Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
          }
          if ( v12 )
          {
            Entity = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v12,
                       *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL),
                       (const MethodInfo_3463274 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
            if ( Entity )
            {
              v14 = Entity;
              if ( System_Linq_Enumerable__Any_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)Entity[5].monitor,
                     (const MethodInfo_31B0714 *)Method_System_Linq_Enumerable_Any_string___) )
              {
                return (System_String_array *)v14[5].monitor;
              }
            }
            return 0;
          }
        }
      }
    }
LABEL_35:
    sub_1C93D2C(Instance, v6);
  }
  return 0;
}


QuestAfterAction_Command_array *QuestAfterAction__GetBlankEarthTutorialCommand(
        QuestAfterAction_o *this,
        const MethodInfo *method)
{
  System_Array_o *v3; // x20
  __int64 v4; // x21
  System_Collections_Generic_IEnumerable_T__o *v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  EventTutorialEntity_array *AvailableTutorialArray; // x0
  QuestAfterAction___c_c *v14; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x20
  System_Func_object__object__o *_9__131_0; // x21
  Il2CppObject *v17; // x22
  struct QuestAfterAction___c_StaticFields *static_fields; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Collections_Generic_List_TSource__o *v26; // x0
  QuestAfterAction___c_c *v27; // x8
  System_Collections_Generic_List_object__o *v28; // x21
  System_Func_object__object__o *_9__131_1; // x22
  Il2CppObject *v30; // x23
  struct QuestAfterAction___c_StaticFields *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  QuestAfterAction_o *v39; // x0
  const MethodInfo *v40; // x2
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *v41; // x0
  const MethodInfo *v42; // x2
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *v43; // x0

  if ( (byte_4D2D4AC & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_QuestAfterAction_Command___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1C93AD4(&EventTutorialMaster_EventTutorialArgs_TypeInfo);
    sub_1C93AD4(&System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C93AD4(&EventTutorialMaster_OpenType___TypeInfo);
    sub_1C93AD4(&Field__PrivateImplementationDetails__0E24DABDAA65F1F9E961A0EFF8FDC6D5F49343D9C3B631647C34888694F88FDB);
    sub_1C93AD4(&Method_QuestAfterAction___c__GetBlankEarthTutorialCommand_b__131_0__);
    sub_1C93AD4(&Method_QuestAfterAction___c__GetBlankEarthTutorialCommand_b__131_1__);
    sub_1C93AD4(&QuestAfterAction___c_TypeInfo);
    byte_4D2D4AC = 1;
  }
  v3 = (System_Array_o *)sub_1C93B7C(EventTutorialMaster_OpenType___TypeInfo, 3);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
    v3,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__0E24DABDAA65F1F9E961A0EFF8FDC6D5F49343D9C3B631647C34888694F88FDB,
    0);
  v4 = sub_1C93D20(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v4, 0);
  if ( !v4 )
    goto LABEL_18;
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 24) = v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v4 + 24), (int32_t)v3, v7, v8, v9, v10, v11, v12);
  AvailableTutorialArray = EventTutorialMaster__GetAvailableTutorialArray(
                             (EventTutorialMaster_EventTutorialArgs_o *)v4,
                             0);
  v14 = QuestAfterAction___c_TypeInfo;
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)AvailableTutorialArray;
  if ( !QuestAfterAction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction___c_TypeInfo);
    v14 = QuestAfterAction___c_TypeInfo;
  }
  _9__131_0 = (System_Func_object__object__o *)v14->static_fields->__9__131_0;
  if ( !_9__131_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = QuestAfterAction___c_TypeInfo;
    }
    v17 = (Il2CppObject *)v14->static_fields->__9;
    _9__131_0 = (System_Func_object__object__o *)sub_1C93D20(System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
    System_Func_object__object____ctor(
      _9__131_0,
      v17,
      Method_QuestAfterAction___c__GetBlankEarthTutorialCommand_b__131_0__,
      0);
    static_fields = QuestAfterAction___c_TypeInfo->static_fields;
    static_fields->__9__131_0 = (struct System_Func_EventTutorialEntity__IEnumerable_string___o *)_9__131_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__131_0,
      (int32_t)_9__131_0,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v15,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__131_0,
                                                               (const MethodInfo_31DD3D0 *)Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
  v26 = System_Linq_Enumerable__ToList_object_(
          v25,
          (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_string___);
  v27 = QuestAfterAction___c_TypeInfo;
  v28 = (System_Collections_Generic_List_object__o *)v26;
  if ( !QuestAfterAction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction___c_TypeInfo);
    v27 = QuestAfterAction___c_TypeInfo;
  }
  _9__131_1 = (System_Func_object__object__o *)v27->static_fields->__9__131_1;
  if ( !_9__131_1 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27);
      v27 = QuestAfterAction___c_TypeInfo;
    }
    v30 = (Il2CppObject *)v27->static_fields->__9;
    _9__131_1 = (System_Func_object__object__o *)sub_1C93D20(System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
    System_Func_object__object____ctor(
      _9__131_1,
      v30,
      Method_QuestAfterAction___c__GetBlankEarthTutorialCommand_b__131_1__,
      0);
    v31 = QuestAfterAction___c_TypeInfo->static_fields;
    v31->__9__131_1 = (struct System_Func_EventTutorialEntity__IEnumerable_string___o *)_9__131_1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v31->__9__131_1, (int32_t)_9__131_1, v32, v33, v34, v35, v36, v37);
  }
  v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v15,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__131_1,
                                                               (const MethodInfo_31DD3D0 *)Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
  v5 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToList_object_(
                                                        v38,
                                                        (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_string___);
  if ( !v28 )
LABEL_18:
    sub_1C93D2C(v5, v6);
  System_Collections_Generic_List_object___AddRange(
    v28,
    v5,
    (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_string__AddRange__);
  v39 = (QuestAfterAction_o *)System_Collections_Generic_List_object___ToArray(
                                v28,
                                (const MethodInfo_387B4F4 *)Method_System_Collections_Generic_List_string__ToArray__);
  v41 = (System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *)QuestAfterAction__ConvertValsToCommand(
                                                                                v39,
                                                                                (System_String_array *)v39,
                                                                                v40);
  v43 = QuestAfterAction__FilterCommandsMainActionConflictsResolved(this, v41, v42);
  return (QuestAfterAction_Command_array *)System_Linq_Enumerable__ToArray_object_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)v43,
                                             (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_QuestAfterAction_Command___);
}


int32_t QuestAfterAction__GetCommandType(QuestAfterAction_o *this, int32_t commandId, const MethodInfo *method)
{
  if ( commandId <= 205 )
  {
    if ( (unsigned int)(commandId - 100) >= 0xF || ((0x7C1Fu >> (commandId - 100)) & 1) == 0 )
    {
      if ( (unsigned int)(commandId - 200) <= 5 )
        return 1;
      return -1;
    }
    return 0;
  }
  else
  {
    if ( commandId > 550 )
    {
      if ( (unsigned int)(commandId - 1000) < 0xD )
        return dword_D348AC[commandId - 1000];
      return -1;
    }
    if ( (unsigned int)(commandId - 400) >= 0xD )
    {
      if ( commandId == 550 )
        return 3;
      return -1;
    }
    return 2;
  }
}


SrcSpotBasePrefab_o *QuestAfterAction__GetLastDispSpot(QuestAfterAction_o *this, const MethodInfo *method)
{
  return this->fields.lastDispSpot;
}


Il2CppObject *QuestAfterAction__GetMapComponent_object_(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        QuestAfterAction_StateMain_o *state,
        const MethodInfo_323DD94 *method)
{
  UnityEngine_Object_o *MapGameObject; // x20
  _BOOL8 v11; // x0
  __int64 v12; // x1

  if ( !method->rgctx_data )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C69BC4();
  }
  MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(this, comType, id, state, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality(MapGameObject, 0, 0);
  if ( v11 )
    return 0;
  if ( !MapGameObject )
    sub_1C93D2C(v11, v12);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)MapGameObject,
           (const MethodInfo_31FC084 *)method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *QuestAfterAction__GetMapGameObject(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        QuestAfterAction_StateMain_o *state,
        const MethodInfo *method)
{
  QuestAfterAction_o *v8; // x22
  UnityEngine_Object_o *v9; // x23
  UnityEngine_Transform_o *transform; // x23
  UnityEngine_Transform_o *v11; // x23
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x3

  v8 = this;
  if ( (byte_4D2D4A3 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    this = (QuestAfterAction_o *)sub_1C93AD4(&SrcSpotBasePrefab_TypeInfo);
    byte_4D2D4A3 = 1;
  }
  if ( comType != 2 )
  {
    if ( comType == 1 )
    {
      if ( !state )
        goto LABEL_45;
      if ( state->fields.IsMapModel )
      {
        this = (QuestAfterAction_o *)v8->fields.subRoadRoot;
        if ( !this )
          goto LABEL_45;
      }
      else
      {
        this = (QuestAfterAction_o *)v8->fields.mRoadRoot;
        if ( !this )
          goto LABEL_45;
      }
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      this = (QuestAfterAction_o *)srcLineSprite__GetGobjName(id, 0);
      if ( !transform )
        goto LABEL_45;
    }
    else
    {
      if ( comType )
      {
        v9 = 0;
        goto LABEL_35;
      }
      if ( !state )
        goto LABEL_45;
      if ( state->fields.IsMapModel )
      {
        this = (QuestAfterAction_o *)v8->fields.subSpotRoot;
        if ( !this )
          goto LABEL_45;
      }
      else
      {
        this = (QuestAfterAction_o *)v8->fields.mSpotRoot;
        if ( !this )
          goto LABEL_45;
      }
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
      if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
      this = (QuestAfterAction_o *)SrcSpotBasePrefab__GetGobjName(id, 0);
      if ( !transform )
LABEL_45:
        sub_1C93D2C(this, *(_QWORD *)&comType);
    }
    goto LABEL_34;
  }
  if ( !state )
    goto LABEL_45;
  if ( state->fields.IsMapModel )
  {
    this = (QuestAfterAction_o *)QuestAfterAction_StateMain__get_SubGimmickRoot(
                                   (QuestAfterAction_StateMain_o *)this,
                                   *(const MethodInfo **)&comType);
    if ( !this )
      goto LABEL_45;
LABEL_30:
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    this = (QuestAfterAction_o *)MapGimmickComponent__GetGobjName(id, v13);
    if ( !transform )
      goto LABEL_45;
LABEL_34:
    v9 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)this, 0);
    goto LABEL_35;
  }
  this = (QuestAfterAction_o *)v8->fields.mGimmickRoot;
  if ( !this )
    goto LABEL_45;
  v11 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
  this = (QuestAfterAction_o *)MapGimmickComponent__GetGobjName(id, v12);
  if ( !v11 )
    goto LABEL_45;
  v9 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(v11, (System_String_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v9, 0, 0) )
  {
    this = (QuestAfterAction_o *)v8->fields.mUIGimmickRoot;
    if ( !this )
      goto LABEL_45;
    goto LABEL_30;
  }
LABEL_35:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (QuestAfterAction_o *)UnityEngine_Object__op_Equality(v9, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (QuestAfterAction_o *)QuestAfterAction__IsMapChangeable(this, *(const MethodInfo **)&comType);
    if ( !state )
      goto LABEL_45;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      state->fields.IsAnimDoing = 0;
      QuestAfterAction__RequestMapChange(v8, comType, id, v14);
    }
    else
    {
      ((void (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))state->klass->vtable._14_EndAnim.methodPtr)(
        state,
        state->klass->vtable._14_EndAnim.method);
    }
    return 0;
  }
  else
  {
    if ( !v9 )
      goto LABEL_45;
    return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0);
  }
}


System_Int32_array *QuestAfterAction__GetMapGimmickId(
        QuestAfterAction_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v4; // x20
  System_Object_array *Instance; // x0
  __int64 name_low; // x1
  int max_length; // w8
  System_Object_array *v8; // x21
  unsigned int v9; // w23
  Il2CppClass **v10; // x8
  Il2CppClass *v11; // x22
  struct System_Int32_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10

  if ( (byte_4D2D491 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_MapGimmickMaster___);
    sub_1C93AD4(&Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__getEntitys__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2D491 = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (System_Object_array *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Instance,
                                      (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_MapGimmickMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataMasterBase_object__object__int___getEntitys(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               (const MethodInfo_34624F8 *)Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__getEntitys__);
  if ( !Instance )
    goto LABEL_19;
  max_length = Instance->max_length;
  v8 = Instance;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1C93D34(Instance);
      v10 = &v8->obj.klass + (int)v9;
      v11 = v10[4];
      if ( !v11 )
        break;
      Instance = (System_Object_array *)MapGimmickEntity__GetRaidDispSpotIdFromScript((MapGimmickEntity_o *)v10[4], 0);
      if ( (_DWORD)Instance == spotId )
      {
        if ( !v4 )
          break;
        name_low = LODWORD(v11->_1.name);
        items = v4->fields._items;
        v13 = Method_System_Collections_Generic_List_int__Add__;
        ++v4->fields._version;
        if ( !items )
          break;
        size = v4->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v4,
            name_low,
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
        }
        else
        {
          v4->fields._size = size + 1;
          items->m_Items[size] = name_low;
        }
      }
      max_length = v8->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_17;
    }
LABEL_19:
    sub_1C93D2C(Instance, name_low);
  }
LABEL_17:
  if ( !v4 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
}


QuestAfterAction_Command_array *QuestAfterAction__GetRaidUiSetupCommand(
        QuestAfterAction_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *EventID; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8
  System_Array_o *v6; // x21
  __int64 v7; // x20
  TerminalPramsManager_c *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct TerminalSceneComponent_o *v15; // x8
  struct ScrTerminalMap_o *v16; // x8
  int32_t *p_currentMapId; // x8
  TerminalPramsManager_c *v18; // x0
  TerminalPramsManager_c *v19; // x0
  EventTutorialEntity_array *AvailableTutorialArray; // x0
  QuestAfterAction___c_c *v21; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x20
  System_Func_object__object__o *_9__130_0; // x21
  Il2CppObject *v24; // x22
  struct QuestAfterAction___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  QuestAfterAction_o *v33; // x0
  const MethodInfo *v34; // x2
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *v35; // x0
  const MethodInfo *v36; // x2
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *v37; // x0

  if ( (byte_4D2D4AB & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_QuestAfterAction_Command___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C93AD4(&EventTutorialMaster_EventTutorialArgs_TypeInfo);
    sub_1C93AD4(&System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
    sub_1C93AD4(&EventTutorialMaster_OpenType___TypeInfo);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    sub_1C93AD4(&Field__PrivateImplementationDetails__83682AE78EC9DC337AFAC04521CAD301FF028FAFB91A8278FD1007638F092305);
    sub_1C93AD4(&Method_QuestAfterAction___c__GetRaidUiSetupCommand_b__130_0__);
    sub_1C93AD4(&QuestAfterAction___c_TypeInfo);
    byte_4D2D4AB = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  EventID = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    EventID = TerminalSceneComponent_TypeInfo;
  }
  mInstance = EventID->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_47;
  mTerminalMap = mInstance->fields.mTerminalMap;
  if ( !mTerminalMap )
    goto LABEL_47;
  if ( mTerminalMap->fields.currentMapId >= 1 )
  {
    v6 = (System_Array_o *)sub_1C93B7C(EventTutorialMaster_OpenType___TypeInfo, 3);
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65124948(
      v6,
      (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__83682AE78EC9DC337AFAC04521CAD301FF028FAFB91A8278FD1007638F092305,
      0);
    v7 = sub_1C93D20(EventTutorialMaster_EventTutorialArgs_TypeInfo);
    EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v7, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D2ABEB )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2ABEB = 1;
    }
    v8 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v8 = TerminalPramsManager_TypeInfo;
    }
    EventID = (TerminalSceneComponent_c *)WarMaster__getEventID(v8->static_fields->_WarId_k__BackingField, 0);
    if ( v7 )
    {
      *(_QWORD *)(v7 + 24) = v6;
      *(_DWORD *)(v7 + 16) = (_DWORD)EventID;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)v6, v9, v10, v11, v12, v13, v14);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4D2A6EE )
      {
        sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
        byte_4D2A6EE = 1;
      }
      EventID = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        EventID = TerminalSceneComponent_TypeInfo;
      }
      v15 = EventID->static_fields->mInstance;
      if ( v15 )
      {
        v16 = v15->fields.mTerminalMap;
        if ( v16 )
        {
          p_currentMapId = &v16->fields.currentMapId;
          goto LABEL_40;
        }
      }
    }
LABEL_47:
    sub_1C93D2C(EventID, method);
  }
  v7 = sub_1C93D20(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v7, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2ABEB )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2ABEB = 1;
  }
  v18 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v18 = TerminalPramsManager_TypeInfo;
  }
  EventID = (TerminalSceneComponent_c *)WarMaster__getEventID(v18->static_fields->_WarId_k__BackingField, 0);
  if ( !v7 )
    goto LABEL_47;
  *(_DWORD *)(v7 + 16) = (_DWORD)EventID;
  *(_DWORD *)(v7 + 20) = 18;
  if ( !byte_4D2ABEB )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2ABEB = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  p_currentMapId = &v19->static_fields->_WarId_k__BackingField;
LABEL_40:
  *(_DWORD *)(v7 + 40) = *p_currentMapId;
  AvailableTutorialArray = EventTutorialMaster__GetAvailableTutorialArray(
                             (EventTutorialMaster_EventTutorialArgs_o *)v7,
                             0);
  v21 = QuestAfterAction___c_TypeInfo;
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)AvailableTutorialArray;
  if ( !QuestAfterAction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction___c_TypeInfo);
    v21 = QuestAfterAction___c_TypeInfo;
  }
  _9__130_0 = (System_Func_object__object__o *)v21->static_fields->__9__130_0;
  if ( !_9__130_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = QuestAfterAction___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v21->static_fields->__9;
    _9__130_0 = (System_Func_object__object__o *)sub_1C93D20(System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
    System_Func_object__object____ctor(_9__130_0, v24, Method_QuestAfterAction___c__GetRaidUiSetupCommand_b__130_0__, 0);
    static_fields = QuestAfterAction___c_TypeInfo->static_fields;
    static_fields->__9__130_0 = (struct System_Func_EventTutorialEntity__IEnumerable_string___o *)_9__130_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__130_0,
      (int32_t)_9__130_0,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v22,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__130_0,
                                                               (const MethodInfo_31DD3D0 *)Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
  v33 = (QuestAfterAction_o *)System_Linq_Enumerable__ToArray_object_(
                                v32,
                                (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_string___);
  v35 = (System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *)QuestAfterAction__ConvertValsToCommand(
                                                                                v33,
                                                                                (System_String_array *)v33,
                                                                                v34);
  v37 = QuestAfterAction__FilterCommandsMainActionConflictsResolved(this, v35, v36);
  return (QuestAfterAction_Command_array *)System_Linq_Enumerable__ToArray_object_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)v37,
                                             (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_QuestAfterAction_Command___);
}


int32_t QuestAfterAction__GetState(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_4D2D4A1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_CStateManager_QuestAfterAction__getState__);
    byte_4D2D4A1 = 1;
  }
  fsm = this->fields.fsm;
  if ( fsm )
    return fsm->fields.m_state;
  else
    return 0;
}


void QuestAfterAction__Init(QuestAfterAction_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct CStateManager_QuestAfterAction__o **p_fsm; // x20
  CStateManager_T__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  CStateManager_T__o *fsm; // x21
  Il2CppObject *v13; // x22
  System_Collections_Generic_Dictionary_TKey__TValue__o *commandTypeIds; // x0
  __int64 v15; // x1
  CStateManager_T__o *v16; // x21
  Il2CppObject *v17; // x22
  CStateManager_T__o *v18; // x21
  QuestAfterAction_StateAdditional_o *v19; // x22
  CStateManager_T__o *v20; // x20
  QuestAfterAction_StateInstant_o *v21; // x21
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int32_t v28; // w20
  System_Collections_Generic_Dictionary_TKey__TValue__o *v29; // x21
  int v30; // w8
  System_Collections_Generic_List_int__o *v31; // x22
  Il2CppObject *Component_object; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  System_Collections_Generic_List_int__o *v45; // x20
  struct System_Collections_Generic_List_int__o **p_invalidMapGimmickIdList; // x19
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7

  if ( (byte_4D2D48B & 1) == 0 )
  {
    sub_1C93AD4(&Method_CStateManager_QuestAfterAction___ctor__);
    sub_1C93AD4(&Method_CStateManager_QuestAfterAction__add__);
    sub_1C93AD4(&CStateManager_QuestAfterAction__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&QuestAfterAction_StateAdditional_TypeInfo);
    sub_1C93AD4(&QuestAfterAction_StateInstant_TypeInfo);
    sub_1C93AD4(&QuestAfterAction_StateMain_TypeInfo);
    sub_1C93AD4(&QuestAfterAction_StateNone_TypeInfo);
    byte_4D2D48B = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v5 = (CStateManager_T__o *)sub_1C93D20(CStateManager_QuestAfterAction__TypeInfo);
    CStateManager_object____ctor(
      v5,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_33EE80C *)Method_CStateManager_QuestAfterAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestAfterAction__o *)v5;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.fsm, (int32_t)v5, v6, v7, v8, v9, v10, v11);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v13 = (Il2CppObject *)sub_1C93D20(QuestAfterAction_StateNone_TypeInfo);
    System_Object___ctor(v13, 0);
    if ( !fsm )
      goto LABEL_21;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v13,
      (const MethodInfo_33EE8B4 *)Method_CStateManager_QuestAfterAction__add__);
    v16 = (CStateManager_T__o *)*p_fsm;
    v17 = (Il2CppObject *)sub_1C93D20(QuestAfterAction_StateMain_TypeInfo);
    System_Object___ctor(v17, 0);
    if ( !v16 )
      goto LABEL_21;
    CStateManager_object___add(
      v16,
      1,
      (IState_T__o *)v17,
      (const MethodInfo_33EE8B4 *)Method_CStateManager_QuestAfterAction__add__);
    v18 = (CStateManager_T__o *)*p_fsm;
    v19 = (QuestAfterAction_StateAdditional_o *)sub_1C93D20(QuestAfterAction_StateAdditional_TypeInfo);
    QuestAfterAction_StateAdditional___ctor(v19, 0);
    if ( !v18 )
      goto LABEL_21;
    CStateManager_object___add(
      v18,
      2,
      (IState_T__o *)v19,
      (const MethodInfo_33EE8B4 *)Method_CStateManager_QuestAfterAction__add__);
    v20 = (CStateManager_T__o *)*p_fsm;
    v21 = (QuestAfterAction_StateInstant_o *)sub_1C93D20(QuestAfterAction_StateInstant_TypeInfo);
    QuestAfterAction_StateInstant___ctor(v21, 0);
    if ( !v20 )
      goto LABEL_21;
    CStateManager_object___add(
      v20,
      3,
      (IState_T__o *)v21,
      (const MethodInfo_33EE8B4 *)Method_CStateManager_QuestAfterAction__add__);
  }
  QuestAfterAction__SetState(this, 0, v2);
  this->fields.commandBuf = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.commandBuf, 0, v22, v23, v24, v25, v26, v27);
  v28 = 0;
  this->fields.commandIdx = 0;
  do
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( !commandTypeIds )
      goto LABEL_21;
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
                                                                                commandTypeIds,
                                                                                v28,
                                                                                (const MethodInfo_34F5E88 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    v29 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( ((unsigned __int8)commandTypeIds & 1) != 0 )
    {
      if ( !v29 )
        goto LABEL_21;
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds,
                                                                                  v28,
                                                                                  (const MethodInfo_34F5BF4 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( !commandTypeIds )
        goto LABEL_21;
      v30 = HIDWORD(commandTypeIds->fields._entries) + 1;
      LODWORD(commandTypeIds->fields._entries) = 0;
      HIDWORD(commandTypeIds->fields._entries) = v30;
    }
    else
    {
      v31 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v31,
        (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v29 )
        goto LABEL_21;
      System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
        v29,
        v28,
        (Il2CppObject *)v31,
        (const MethodInfo_34F5C80 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
    }
    ++v28;
  }
  while ( v28 != 5 );
  commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)UnityEngine_Component__get_gameObject(
                                                                              (UnityEngine_Component_o *)this,
                                                                              0);
  if ( !commandTypeIds
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)commandTypeIds,
                             (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.screenCollider = (struct UnityEngine_BoxCollider_o *)Component_object,
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&this->fields.screenCollider,
          (int32_t)Component_object,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38),
        (commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.screenCollider) == 0) )
  {
LABEL_21:
    sub_1C93D2C(commandTypeIds, v15);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)commandTypeIds, 0, 0);
  this->fields.lastDispSpot = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.lastDispSpot, 0, v39, v40, v41, v42, v43, v44);
  v45 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v45,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.invalidMapGimmickIdList = v45;
  p_invalidMapGimmickIdList = &this->fields.invalidMapGimmickIdList;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_invalidMapGimmickIdList, (int32_t)v45, v47, v48, v49, v50, v51, v52);
  *((_BYTE *)p_invalidMapGimmickIdList + 192) = 0;
  *((_BYTE *)p_invalidMapGimmickIdList + 168) = 0;
}


bool QuestAfterAction__IsActiveCommand(QuestAfterAction_o *this, const MethodInfo *method)
{
  return this->fields.commandBuf != 0;
}


bool QuestAfterAction__IsBlankEarthActiveCommand(QuestAfterAction_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  bool IsExistTerminalTransition; // w0
  _DWORD *QuestInfo; // x0
  TerminalPramsManager_c *v6; // x0
  __int64 v7; // x1
  Il2CppObject *Instance; // x19
  TerminalPramsManager_c *v9; // x0
  int v10; // w19
  bool isFadeTransition; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2D4AA & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D4AA = 1;
  }
  isFadeTransition = 0;
  if ( this->fields.commandBuf
    && (IsExistTerminalTransition = QuestAfterAction__IsExistTerminalTransition(this, &isFadeTransition, v2),
        !IsExistTerminalTransition || !isFadeTransition) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D2D072 )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2D072 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    if ( v6->static_fields->_IsOrdealCallWarClear_k__BackingField )
    {
      LOBYTE(QuestInfo) = 1;
    }
    else
    {
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4D2A7BF )
      {
        sub_1C93AD4(&TerminalPramsManager_TypeInfo);
        byte_4D2A7BF = 1;
      }
      v9 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v9 = TerminalPramsManager_TypeInfo;
      }
      if ( !Instance )
        sub_1C93D2C(v9, v7);
      QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)Instance, v9->static_fields->_QuestId_k__BackingField, 0);
      if ( QuestInfo )
      {
        v10 = QuestInfo[16];
        QuestInfo = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          QuestInfo = BalanceConfig_TypeInfo;
        }
        LOBYTE(QuestInfo) = v10 == *(_DWORD *)(*((_QWORD *)QuestInfo + 23) + 860LL);
      }
    }
  }
  else
  {
    LOBYTE(QuestInfo) = 0;
  }
  return (char)QuestInfo;
}


bool QuestAfterAction__IsCommandRaidUiDisableQuick(
        QuestAfterAction_o *this,
        QuestAfterAction_Command_o *command,
        int32_t day,
        const MethodInfo *method)
{
  QuestAfterAction_o *v5; // x21
  int v6; // w20
  int32_t v7; // w22
  _BOOL4 v8; // w23
  _BOOL4 v10; // w8

  if ( !command )
    goto LABEL_14;
  if ( command->fields.id != 1312 )
    return 0;
  this = (QuestAfterAction_o *)command->fields.param;
  if ( !this || (this = (QuestAfterAction_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0)) == 0 )
LABEL_14:
    sub_1C93D2C(this, command);
  v5 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource)
    || (this = (QuestAfterAction_o *)System_Int32__Parse((System_String_o *)this->fields.invalidMapGimmickIdList, 0),
        LODWORD(v5->fields.m_CancellationTokenSource) <= 1) )
  {
    sub_1C93D34(this);
  }
  v6 = (int)this;
  v7 = System_Int32__Parse((System_String_o *)v5->fields._TitleInfoCtrlCallback_k__BackingField, 0);
  if ( SLODWORD(v5->fields.m_CancellationTokenSource) >= 3 )
  {
    v8 = System_Int32__Parse((System_String_o *)v5->fields._BlankEarthQuestAfterAction_k__BackingField, 0) > 0;
    if ( SLODWORD(v5->fields.m_CancellationTokenSource) >= 4 )
    {
      v10 = System_Int32__Parse((System_String_o *)v5->fields._PlanetEarthQuestAfterAction_k__BackingField, 0) > 0;
      return v10 || v8 || v6 == day || v7 == day;
    }
  }
  else
  {
    v8 = 0;
  }
  v10 = 0;
  return v10 || v8 || v6 == day || v7 == day;
}


// local variable allocation has failed, the output may be wrong!
bool QuestAfterAction__IsExistCommand(
        QuestAfterAction_o *this,
        int32_t commandType,
        int32_t commandTypeId,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *commandTypeIds; // x0

  if ( (byte_4D2D494 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4D2D494 = 1;
  }
  commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
  if ( !commandTypeIds )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         commandTypeIds,
         commandType,
         (const MethodInfo_34F5E88 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__) )
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( commandTypeIds )
    {
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  commandTypeIds,
                                                                                  commandType,
                                                                                  (const MethodInfo_34F5BF4 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( commandTypeIds )
        return System_Collections_Generic_List_int___Contains(
                 (System_Collections_Generic_List_int__o *)commandTypeIds,
                 commandTypeId,
                 (const MethodInfo_385CCF0 *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_9:
    sub_1C93D2C(commandTypeIds, *(_QWORD *)&commandType);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool QuestAfterAction__IsExistSpotReveal(QuestAfterAction_o *this, int32_t spotId, const MethodInfo *method)
{
  struct QuestAfterAction_Command_array *commandBuf; // x8
  QuestAfterAction_o *v4; // x19
  __int64 v6; // x22
  int max_length; // w9
  bool v8; // w21
  QuestAfterAction_Command_o *v9; // x9
  int32_t id; // w10

  commandBuf = this->fields.commandBuf;
  if ( !commandBuf )
    return 0;
  v4 = this;
  v6 = 0;
  while ( 1 )
  {
    max_length = commandBuf->max_length;
    v8 = (int)v6 < max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1C93D34(this);
    v9 = commandBuf->m_Items[v6];
    if ( v9 )
    {
      id = v9->fields.id;
      if ( id == 112 || id == 102 )
      {
        this = (QuestAfterAction_o *)System_Int32__Parse(v9->fields.param, 0);
        if ( (_DWORD)this == spotId )
          return v8;
        commandBuf = v4->fields.commandBuf;
      }
      ++v6;
      if ( commandBuf )
        continue;
    }
    sub_1C93D2C(this, *(_QWORD *)&spotId);
  }
  return v8;
}


bool QuestAfterAction__IsExistTerminalTransition(
        QuestAfterAction_o *this,
        bool *isFadeTransition,
        const MethodInfo *method)
{
  struct QuestAfterAction_Command_array *commandBuf; // x10
  int max_length; // w8
  __int64 v6; // x9
  QuestAfterAction_Command_o **m_Items; // x10
  QuestAfterAction_Command_o *v8; // x20
  int32_t id; // w11
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  result = 0;
  *isFadeTransition = 0;
  commandBuf = this->fields.commandBuf;
  if ( !commandBuf )
    return 0;
  max_length = commandBuf->max_length;
  if ( max_length < 1 )
    return 0;
  v6 = 0;
  m_Items = commandBuf->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v6 >= max_length )
      goto LABEL_19;
    v8 = m_Items[v6];
    if ( !v8 )
      goto LABEL_18;
    id = v8->fields.id;
    if ( id == 701 )
      return 1;
    if ( id == 702 )
      break;
    if ( (int)++v6 >= max_length )
      return 0;
  }
  if ( !System_String__IsNullOrEmpty(v8->fields.param, 0) )
  {
    this = (QuestAfterAction_o *)v8->fields.param;
    if ( !this || (this = (QuestAfterAction_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0)) == 0 )
LABEL_18:
      sub_1C93D2C(this, isFadeTransition);
    m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
    if ( m_CancellationTokenSource )
    {
      if ( !(_DWORD)m_CancellationTokenSource )
LABEL_19:
        sub_1C93D34(this);
      if ( System_Int32__TryParse((System_String_o *)this->fields.invalidMapGimmickIdList, &result, 0) )
        *isFadeTransition = result > 0;
    }
  }
  return 1;
}


bool QuestAfterAction__IsGimmickDispCommand(int32_t cmd, const MethodInfo *method)
{
  return (cmd & 0xFFFFFFFD) == 401;
}


bool QuestAfterAction__IsMapChangeable(QuestAfterAction_o *this, const MethodInfo *method)
{
  ScrTerminalMap_o *v2; // x0
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_4D2D4A6 & 1) == 0 )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2D4A6 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v2->fields.subRootGimmickP->klass;
  if ( !klass || (v2 = *(ScrTerminalMap_o **)&klass->_2.static_fields_size) == 0 )
    sub_1C93D2C(v2, method);
  return ScrTerminalMap__IsMapChangeable(v2, 0);
}


bool QuestAfterAction__IsNoWaitCommand(QuestAfterAction_Command_o *cmd, const MethodInfo *method)
{
  int32_t id; // w20
  QuestAfterAction_Command_o *v3; // x19
  System_String_array *v4; // x0
  char v5; // w9
  System_String_array *v6; // x8
  int32_t v7; // w8
  int32_t v9; // [xsp+Ch] [xbp-24h] BYREF
  int32_t v10; // [xsp+18h] [xbp-18h] BYREF
  int32_t result; // [xsp+1Ch] [xbp-14h] BYREF

  v9 = 0;
  if ( !cmd )
    goto LABEL_36;
  id = cmd->fields.id;
  v3 = cmd;
  if ( id <= 403 )
  {
    if ( id > 205 )
    {
      if ( (id & 0xFFFFFFFE) != 0x192 )
        goto LABEL_15;
      LOBYTE(cmd) = 1;
      return (char)cmd;
    }
    LOBYTE(cmd) = 1;
    if ( (unsigned int)(id - 110) < 5 || (unsigned int)(id - 203) < 3 )
      return (char)cmd;
LABEL_15:
    if ( System_String__IsNullOrEmpty(v3->fields.param, 0) )
    {
LABEL_16:
      LOBYTE(cmd) = 0;
      return (char)cmd;
    }
    cmd = (QuestAfterAction_Command_o *)v3->fields.param;
    if ( !cmd )
      goto LABEL_36;
    v4 = System_String__Split((System_String_o *)cmd, 0x2Cu, 0, 0);
    v5 = id - 44;
    v6 = v4;
    cmd = 0;
    if ( (unsigned int)(id - 300) > 8 )
      return (char)cmd;
    if ( ((1 << v5) & 0xE8) != 0 )
    {
      if ( !v6 )
        goto LABEL_36;
      if ( SLODWORD(v6->max_length) < 5 || !System_Int32__TryParse(v6->m_Items[4], &v10, 0) )
        goto LABEL_16;
      v7 = v10;
    }
    else
    {
      if ( ((1 << v5) & 7) != 0 )
      {
        if ( v6 )
        {
          if ( SLODWORD(v6->max_length) < 4 || !System_Int32__TryParse(v6->m_Items[3], &result, 0) )
            goto LABEL_16;
          v7 = result;
          goto LABEL_30;
        }
LABEL_36:
        sub_1C93D2C(cmd, method);
      }
      if ( id != 308 )
        return (char)cmd;
      if ( !v6 )
        goto LABEL_36;
      if ( SLODWORD(v6->max_length) < 6 || !System_Int32__TryParse(v6->m_Items[5], &v9, 0) )
        goto LABEL_16;
      v7 = v9;
    }
LABEL_30:
    LOBYTE(cmd) = v7 > 0;
    return (char)cmd;
  }
  if ( id <= 1200 )
  {
    LOBYTE(cmd) = 1;
    if ( (unsigned int)(id - 1010) < 3 || id == 1200 )
      return (char)cmd;
    goto LABEL_15;
  }
  LOBYTE(cmd) = 1;
  if ( id != 1300 && id != 1312 )
    goto LABEL_15;
  return (char)cmd;
}


bool QuestAfterAction__IsOtherObjChangeDispQuicklyCommand(int32_t cmd, const MethodInfo *method)
{
  return (cmd & 0xFFFFFFFE) == 1010;
}


bool QuestAfterAction__IsOtherObjHideCommand(int32_t cmd, const MethodInfo *method)
{
  return cmd == 1000 || cmd == 1010;
}


bool QuestAfterAction__IsOverwriteCommandNone(System_String_array *actionCommand, const MethodInfo *method)
{
  il2cpp_array_size_t max_length; // x8

  if ( actionCommand )
  {
    max_length = actionCommand->max_length;
    if ( max_length )
    {
      if ( !(_DWORD)max_length )
        sub_1C93D34(actionCommand);
      LOBYTE(actionCommand) = System_Int32__Parse(actionCommand->m_Items[0], 0) == 0;
    }
    else
    {
      LOBYTE(actionCommand) = 0;
    }
  }
  return (char)actionCommand;
}


bool QuestAfterAction__IsPlaying(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_4D2D4A1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_CStateManager_QuestAfterAction__getState__);
    byte_4D2D4A1 = 1;
  }
  fsm = this->fields.fsm;
  return fsm && fsm->fields.m_state == 1;
}


bool QuestAfterAction__IsPlayingAction(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_4D2D4A1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_CStateManager_QuestAfterAction__getState__);
    byte_4D2D4A1 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    return 0;
  if ( fsm->fields.m_state == 1 )
    return 1;
  return fsm->fields.m_state == 2;
}


// local variable allocation has failed, the output may be wrong!
bool QuestAfterAction__IsRaidUiDisableQuickBySetUpCommand(
        QuestAfterAction_o *this,
        int32_t day,
        const MethodInfo *method)
{
  QuestAfterAction_Command_array *RaidUiSetupCommand; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3
  struct QuestAfterAction_Command_array *commandBuf; // x21
  QuestAfterAction_Command_array *v9; // x20
  il2cpp_array_size_t v10; // x8
  unsigned __int64 v11; // x22
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v13; // x21

  RaidUiSetupCommand = QuestAfterAction__GetRaidUiSetupCommand(this, *(const MethodInfo **)&day);
  commandBuf = this->fields.commandBuf;
  v9 = RaidUiSetupCommand;
  if ( commandBuf && (v10 = commandBuf->max_length, (int)v10 >= 1) )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v10 )
        goto LABEL_17;
      RaidUiSetupCommand = (QuestAfterAction_Command_array *)QuestAfterAction__IsCommandRaidUiDisableQuick(
                                                               (QuestAfterAction_o *)RaidUiSetupCommand,
                                                               commandBuf->m_Items[v11],
                                                               day,
                                                               v7);
      if ( ((unsigned __int8)RaidUiSetupCommand & 1) != 0 )
        break;
      LODWORD(v10) = commandBuf->max_length;
      if ( (__int64)++v11 >= (int)v10 )
        goto LABEL_7;
    }
    LOBYTE(RaidUiSetupCommand) = 1;
  }
  else
  {
LABEL_7:
    if ( !v9 )
      sub_1C93D2C(RaidUiSetupCommand, v6);
    max_length = v9->max_length;
    if ( (int)max_length >= 1 )
    {
      v13 = 0;
      while ( v13 < (unsigned int)max_length )
      {
        RaidUiSetupCommand = (QuestAfterAction_Command_array *)QuestAfterAction__IsCommandRaidUiDisableQuick(
                                                                 (QuestAfterAction_o *)RaidUiSetupCommand,
                                                                 v9->m_Items[v13],
                                                                 day,
                                                                 v7);
        if ( ((unsigned __int8)RaidUiSetupCommand & 1) == 0 )
        {
          LODWORD(max_length) = v9->max_length;
          if ( (__int64)++v13 < (int)max_length )
            continue;
        }
        return (unsigned __int8)RaidUiSetupCommand & 1;
      }
LABEL_17:
      sub_1C93D34(RaidUiSetupCommand);
    }
    LOBYTE(RaidUiSetupCommand) = 0;
  }
  return (unsigned __int8)RaidUiSetupCommand & 1;
}


bool QuestAfterAction__IsRankChangeCommand(
        QuestAfterAction_o *this,
        QuestAfterAction_Command_o *command,
        const MethodInfo *method)
{
  QuestAfterAction_o *v4; // x19
  bool v5; // w8
  bool v6; // w0
  bool v7; // w0
  int32_t v8; // w1
  BalanceConfig_c *v9; // x0
  int32_t result[2]; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4D2D4AD & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    this = (QuestAfterAction_o *)sub_1C93AD4(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4D2D4AD = 1;
  }
  *(_QWORD *)result = 0;
  if ( !command )
    goto LABEL_20;
  if ( command->fields.id != 560 || System_String__IsNullOrEmpty(command->fields.param, 0) )
    return 0;
  this = (QuestAfterAction_o *)command->fields.param;
  if ( !this || (this = (QuestAfterAction_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0)) == 0 )
LABEL_20:
    sub_1C93D2C(this, command);
  v4 = this;
  if ( SLODWORD(this->fields.m_CancellationTokenSource) < 3 )
    return 0;
  v5 = System_Int32__TryParse(
         (System_String_o *)this->fields._BlankEarthQuestAfterAction_k__BackingField,
         &result[1],
         0);
  v6 = 0;
  if ( v5 && result[1] == 1 )
  {
    if ( LODWORD(v4->fields.m_CancellationTokenSource) <= 1 )
      sub_1C93D34(0);
    v7 = System_Int32__TryParse((System_String_o *)v4->fields._TitleInfoCtrlCallback_k__BackingField, result, 0);
    v8 = result[0];
    if ( result[0] >= 1 && v7 )
    {
      v9 = BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v9 = BalanceConfig_TypeInfo;
        v8 = result[0];
      }
      if ( System_Linq_Enumerable__Contains_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v9->static_fields->BlankEarthRankChangeEventUiIds,
             v8,
             (const MethodInfo_31C106C *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        return 1;
      }
    }
    return 0;
  }
  return v6;
}


bool QuestAfterAction__IsRemainFadeCommand(QuestAfterAction_o *this, const MethodInfo *method)
{
  bool result; // w0
  struct QuestAfterAction_Command_array *commandBuf; // x10
  int32_t commandIdx; // w8
  int32_t max_length; // w9
  __int64 v6; // x10
  int v7; // w11

  if ( this->fields.IsMoveBeforeFadeIn )
    return 1;
  commandBuf = this->fields.commandBuf;
  if ( !commandBuf )
    return 0;
  commandIdx = this->fields.commandIdx;
  max_length = commandBuf->max_length;
  if ( commandIdx >= max_length )
    return 0;
  v6 = (__int64)&commandBuf->m_Items[commandIdx];
  result = 1;
  while ( 1 )
  {
    if ( commandIdx >= (unsigned int)max_length )
      sub_1C93D34(1);
    if ( !*(_QWORD *)v6 )
      sub_1C93D2C(1, method);
    v7 = *(_DWORD *)(*(_QWORD *)v6 + 16LL);
    if ( v7 == 405 || v7 == 520 )
      break;
    ++commandIdx;
    v6 += 8;
    if ( commandIdx >= max_length )
      return 0;
  }
  return result;
}


bool QuestAfterAction__IsSetUpCommandHasHideRaidUi(QuestAfterAction_o *this, const MethodInfo *method)
{
  QuestAfterAction_Command_array *RaidUiSetupCommand; // x0
  __int64 v4; // x1
  struct QuestAfterAction_Command_array *commandBuf; // x10
  int v6; // w8
  __int64 v7; // x9
  QuestAfterAction_Command_o **m_Items; // x10
  QuestAfterAction_Command_o *v9; // x11
  int32_t id; // w11
  int max_length; // w9
  int v12; // w10
  QuestAfterAction_Command_o *v13; // x8
  int32_t v14; // w11
  bool v15; // w8

  RaidUiSetupCommand = QuestAfterAction__GetRaidUiSetupCommand(this, method);
  commandBuf = this->fields.commandBuf;
  if ( commandBuf && (v6 = commandBuf->max_length, v6 >= 1) )
  {
    v7 = 0;
    m_Items = commandBuf->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v7 >= v6 )
        goto LABEL_20;
      v9 = m_Items[v7];
      if ( !v9 )
        goto LABEL_21;
      id = v9->fields.id;
      if ( id == 1310 || id == 1312 )
        return 1;
      if ( (int)++v7 >= v6 )
        goto LABEL_9;
    }
  }
  else
  {
LABEL_9:
    if ( !RaidUiSetupCommand )
LABEL_21:
      sub_1C93D2C(RaidUiSetupCommand, v4);
    max_length = RaidUiSetupCommand->max_length;
    if ( max_length >= 1 )
    {
      v12 = 0;
      while ( max_length != v12 )
      {
        v13 = RaidUiSetupCommand->m_Items[v12];
        if ( !v13 )
          goto LABEL_21;
        v14 = v13->fields.id;
        v15 = 1;
        if ( v14 == 1310 || v14 == 1312 )
          return v15;
        if ( max_length == ++v12 )
          return 0;
      }
LABEL_20:
      sub_1C93D34(RaidUiSetupCommand);
    }
    return 0;
  }
}


bool QuestAfterAction__IsSpotChangeDispQuicklyCommand(int32_t cmd, const MethodInfo *method)
{
  return (unsigned int)(cmd - 110) < 3;
}


bool QuestAfterAction__IsSpotDispCommand(int32_t cmd, const MethodInfo *method)
{
  return cmd == 102 || cmd == 112;
}


bool QuestAfterAction__IsSpotGrayCommand(int32_t cmd, const MethodInfo *method)
{
  return cmd == 101 || cmd == 111;
}


bool QuestAfterAction__IsSpotHideCommand(int32_t cmd, const MethodInfo *method)
{
  return cmd == 100 || cmd == 110;
}


void QuestAfterAction__LoadTerminalTransitionInfo(QuestAfterAction_o *this, const MethodInfo *method)
{
  TerminalTransitionInfo_o *TerminalTransitionInfoData; // x0
  __int64 v3; // x1
  TerminalTransitionInfo_o *v4; // x20
  char *Master_object; // x0
  TerminalSceneComponent_o *v6; // x19
  DataManager_o *v7; // x22
  EventMissionActionAddEntity_o *EntityFromIdProgressTypeAndActionType; // x0
  EventMissionActionAddEntity_o *v9; // x23
  EventMissionActionInfo_o *v10; // x21
  Il2CppObject *Entity; // x0
  Il2CppObject *v12; // x21
  Il2CppObject *v13; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *current; // x21
  TerminalPramsManager_c *v17; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x0
  Il2CppClass *klass; // x1
  __int64 v27; // x0
  __int64 v28; // x1
  struct TerminalTransitionInfo_o *v29; // x8
  EventMissionActionEntity_o *v30; // x0
  EventMissionActionEntity_o *v31; // x23
  Il2CppObject *v32; // x0
  Il2CppObject *v33; // x23
  TerminalPramsManager_c *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  struct System_String_array *vals; // x1
  struct TerminalTransitionInfo_o *v42; // x8
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4D2D498 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ShopActionMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__get_Current__);
    sub_1C93AD4(&EventMissionActionInfo_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2D498 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalTransitionInfoData = TerminalPramsManager__Load_TerminalTransitionInfoData(0);
  if ( !TerminalTransitionInfoData )
    return;
  v4 = TerminalTransitionInfoData;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  Master_object = (char *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Master_object = (char *)TerminalSceneComponent_TypeInfo;
  }
  v6 = (TerminalSceneComponent_o *)**((_QWORD **)Master_object + 23);
  if ( !v6 )
    goto LABEL_67;
  if ( v6->fields._TransitionInfo_k__BackingField )
    return;
  if ( v4->fields.missionId < 1 )
  {
    if ( v4->fields.shopId >= 1 )
    {
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_object )
        goto LABEL_67;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 v4->fields.shopId,
                 (const MethodInfo_3463274 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( Entity )
      {
        v12 = Entity;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_EventMaster___);
        if ( !Master_object )
          goto LABEL_67;
        v13 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                (int32_t)v12[1].monitor,
                (const MethodInfo_3463274 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !v13 || !EventEntity__IsEventPeriod((EventEntity_o *)v13, 0, 0) )
          goto LABEL_66;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ShopActionMaster___);
        if ( !Master_object )
          goto LABEL_67;
        Master_object = (char *)ShopActionMaster__GetEntityList(
                                  (ShopActionMaster_o *)Master_object,
                                  (int32_t)v12[1].klass,
                                  0);
        if ( !Master_object )
          goto LABEL_67;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v43,
          (System_Collections_Generic_List_object__o *)Master_object,
          (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
        v44 = v43;
        while ( 1 )
        {
          v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v44,
                  (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__);
          if ( !v14 )
            break;
          current = v44.fields._current;
          if ( !v44.fields._current )
            sub_1C93D2C(v14, v15);
          if ( LODWORD(v44.fields._current[1].monitor) == 4 )
          {
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4D2D4C3 )
            {
              sub_1C93AD4(&TerminalPramsManager_TypeInfo);
              byte_4D2D4C3 = 1;
            }
            v17 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v17 = TerminalPramsManager_TypeInfo;
            }
            v17->static_fields->meSceneStatus = 2;
            TerminalSceneComponent__CreateTransitionInfo(v6, v4, 0);
            TransitionInfo_k__BackingField = v6->fields._TransitionInfo_k__BackingField;
            if ( !TransitionInfo_k__BackingField )
              sub_1C93D2C(0, v18);
            klass = current[2].klass;
            TransitionInfo_k__BackingField->fields.afterActionVals = (struct System_String_array *)klass;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&TransitionInfo_k__BackingField->fields.afterActionVals,
              (int32_t)klass,
              v19,
              v20,
              v21,
              v22,
              v23,
              v24);
            v29 = v6->fields._TransitionInfo_k__BackingField;
            if ( !v29 )
              sub_1C93D2C(v27, v28);
            v29->fields.optionId = (int32_t)current[2].monitor;
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v44,
          (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__);
      }
    }
  }
  else
  {
    Master_object = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_67;
    v7 = (DataManager_o *)Master_object;
    Master_object = (char *)DataManager__GetMasterData_object_(
                              (DataManager_o *)Master_object,
                              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    if ( !Master_object )
      goto LABEL_67;
    EntityFromIdProgressTypeAndActionType = EventMissionActionAddMaster__GetEntityFromIdProgressTypeAndActionType(
                                              (EventMissionActionAddMaster_o *)Master_object,
                                              v4->fields.missionId,
                                              5,
                                              4,
                                              0);
    if ( EntityFromIdProgressTypeAndActionType )
    {
      v9 = EntityFromIdProgressTypeAndActionType;
      v10 = (EventMissionActionInfo_o *)sub_1C93D20(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_46573156(v10, v9, 0);
    }
    else
    {
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v7,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
      if ( !Master_object )
        goto LABEL_67;
      v30 = EventMissionActionMaster__getEntityFromIdProgressTypeAndActionType(
              (EventMissionActionMaster_o *)Master_object,
              v4->fields.missionId,
              5,
              4,
              0);
      if ( !v30 )
        return;
      v31 = v30;
      v10 = (EventMissionActionInfo_o *)sub_1C93D20(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v10, v31, 0);
    }
    Master_object = (char *)DataManager__GetMasterData_object_(
                              v7,
                              (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !Master_object )
      goto LABEL_67;
    v32 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            v4->fields.missionId,
            (const MethodInfo_3463274 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( v32 )
    {
      v33 = v32;
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v7,
                                (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Master_object )
        goto LABEL_67;
      Master_object = (char *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                HIDWORD(v33[1].monitor),
                                (const MethodInfo_3463274 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_67;
      if ( EventEntity__IsEventPeriod((EventEntity_o *)Master_object, 0, 0) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4D2D4C3 )
        {
          sub_1C93AD4(&TerminalPramsManager_TypeInfo);
          byte_4D2D4C3 = 1;
        }
        v34 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v34 = TerminalPramsManager_TypeInfo;
        }
        v34->static_fields->meSceneStatus = 2;
        TerminalSceneComponent__CreateTransitionInfo(v6, v4, 0);
        if ( v10 )
        {
          Master_object = (char *)v6->fields._TransitionInfo_k__BackingField;
          if ( Master_object )
          {
            vals = v10->fields.vals;
            *((_QWORD *)Master_object + 4) = vals;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)(Master_object + 32),
              (int32_t)vals,
              v35,
              v36,
              v37,
              v38,
              v39,
              v40);
            v42 = v6->fields._TransitionInfo_k__BackingField;
            if ( v42 )
            {
              v42->fields.optionId = v10->fields.optionId;
              return;
            }
          }
        }
LABEL_67:
        sub_1C93D2C(Master_object, v3);
      }
LABEL_66:
      TerminalSceneComponent__ClearTransitionInfo(v6, 0);
    }
  }
}


void QuestAfterAction__LoadVoice(QuestAfterAction_o *this, System_Action_o *endAct, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *svtVoices; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x21
  System_Collections_Generic_List_object__o *v7; // x22
  const MethodInfo *v8; // x3

  if ( (byte_4D2D495 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    byte_4D2D495 = 1;
  }
  if ( this->fields.isLoadedVoice )
  {
    ActionExtensions__Call(endAct, 0);
  }
  else
  {
    svtVoices = this->fields.svtVoices;
    this->fields.isLoadedVoice = 1;
    if ( !svtVoices )
      sub_1C93D2C(0, endAct);
    Values = System_Collections_Generic_Dictionary_int__object___get_Values(
               (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
               (const MethodInfo_34BCB94 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_59216528(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)Values,
      (const MethodInfo_3879290 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    QuestAfterAction__LoadVoice_36859980(
      this,
      (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)v7,
      endAct,
      v8);
  }
}


void QuestAfterAction__LoadVoice_36859980(
        QuestAfterAction_o *this,
        System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *svtVInfos,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v7; // x21
  System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o **v16; // x28
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  System_Action_o **v23; // x19
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  System_String_o *VoiceAssetName_43508840; // x19
  Il2CppObject *v31; // x20
  System_Action_o *v32; // x22

  while ( 1 )
  {
    if ( (byte_4D2D496 & 1) == 0 )
    {
      sub_1C93AD4(&System_Action_TypeInfo);
      sub_1C93AD4(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___);
      sub_1C93AD4(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
      sub_1C93AD4(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
      sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sub_1C93AD4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      sub_1C93AD4(&Method_QuestAfterAction___c__DisplayClass91_0__LoadVoice_b__0__);
      sub_1C93AD4(&QuestAfterAction___c__DisplayClass91_0_TypeInfo);
      byte_4D2D496 = 1;
    }
    v7 = sub_1C93D20(QuestAfterAction___c__DisplayClass91_0_TypeInfo);
    QuestAfterAction___c__DisplayClass91_0___ctor((QuestAfterAction___c__DisplayClass91_0_o *)v7, 0);
    if ( !v7 )
      goto LABEL_17;
    *(_QWORD *)(v7 + 16) = svtVInfos;
    v16 = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o **)(v7 + 16);
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)svtVInfos, v10, v11, v12, v13, v14, v15);
    *(_QWORD *)(v7 + 24) = this;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)this, v17, v18, v19, v20, v21, v22);
    *(_QWORD *)(v7 + 32) = endAct;
    v23 = (System_Action_o **)(v7 + 32);
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)endAct, v24, v25, v26, v27, v28, v29);
    if ( !System_Linq_Enumerable__Any_object_(
            *(System_Collections_Generic_IEnumerable_TSource__o **)(v7 + 16),
            (const MethodInfo_31B0714 *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___) )
    {
      Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
        ActionExtensions__Call(*v23, 0);
        return;
      }
LABEL_17:
      sub_1C93D2C(Instance, v9);
    }
    Instance = *v16;
    if ( !*v16 )
      goto LABEL_17;
    Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)System_Collections_Generic_List_object___get_Item(
                                                                                  (System_Collections_Generic_List_object__o *)Instance,
                                                                                  0,
                                                                                  (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
    if ( !Instance )
      goto LABEL_17;
    if ( LODWORD(Instance->fields._items) )
      break;
    Instance = *v16;
    if ( !*v16 )
      goto LABEL_17;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)Instance,
      0,
      (const MethodInfo_387B170 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    svtVInfos = *v16;
    endAct = *v23;
  }
  Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  Instance = *v16;
  if ( !*v16 )
    goto LABEL_17;
  Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)System_Collections_Generic_List_object___get_Item(
                                                                                (System_Collections_Generic_List_object__o *)Instance,
                                                                                0,
                                                                                (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
  if ( !Instance )
    goto LABEL_17;
  VoiceAssetName_43508840 = ServantVoiceEntity__getVoiceAssetName_43508840((int32_t)Instance->fields._items, 0);
  v31 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v32 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v32, (Il2CppObject *)v7, Method_QuestAfterAction___c__DisplayClass91_0__LoadVoice_b__0__, 0);
  if ( !v31 )
    goto LABEL_17;
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)v31, VoiceAssetName_43508840, v32, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *QuestAfterAction__MapObjName(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_4D2D4A5 & 1) == 0 )
  {
    sub_1C93AD4(&SrcSpotBasePrefab_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2D4A5 = 1;
  }
  if ( comType )
  {
    if ( comType == 1 )
    {
      return srcLineSprite__GetGobjName(id, 0);
    }
    else if ( comType == 2 )
    {
      return MapGimmickComponent__GetGobjName(id, *(const MethodInfo **)&comType);
    }
    else
    {
      return (System_String_o *)StringLiteral_1/*""*/;
    }
  }
  else
  {
    if ( !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
    return SrcSpotBasePrefab__GetGobjName(id, 0);
  }
}


void QuestAfterAction__OnEnd(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_Action_o *endAct; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Collider_o *screenCollider; // x0
  struct System_Collections_Generic_List_int__o *invalidMapGimmickIdList; // x8
  int v7; // w9

  if ( (byte_4D2D49F & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Clear__);
    byte_4D2D49F = 1;
  }
  endAct = this->fields.endAct;
  this->fields.isKeepingMainStateButFinished = 1;
  *(_QWORD *)&this->fields.ActionMapTargetType = -1;
  ActionExtensions__Call(endAct, 0);
  screenCollider = (UnityEngine_Collider_o *)this->fields.screenCollider;
  if ( !screenCollider
    || (UnityEngine_Collider__set_enabled(screenCollider, 0, 0),
        (invalidMapGimmickIdList = this->fields.invalidMapGimmickIdList) == 0) )
  {
    sub_1C93D2C(screenCollider, v4);
  }
  v7 = invalidMapGimmickIdList->fields._version + 1;
  invalidMapGimmickIdList->fields._size = 0;
  invalidMapGimmickIdList->fields._version = v7;
  QuestAfterAction__Init(this, v4);
  *(_WORD *)&this->fields._IsAfterFadeInPlay_k__BackingField = 0;
}


void QuestAfterAction__Play(QuestAfterAction_o *this, System_Action_o *endAct, const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Action_o *v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  const MethodInfo *v21; // x2

  if ( (byte_4D2D49A & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C93AD4(&Method_QuestAfterAction___c__DisplayClass95_0__Play_b__0__);
    sub_1C93AD4(&QuestAfterAction___c__DisplayClass95_0_TypeInfo);
    byte_4D2D49A = 1;
  }
  v5 = sub_1C93D20(QuestAfterAction___c__DisplayClass95_0_TypeInfo);
  QuestAfterAction___c__DisplayClass95_0___ctor((QuestAfterAction___c__DisplayClass95_0_o *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = endAct,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)endAct, v8, v9, v10, v11, v12, v13),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0) )
  {
    sub_1C93D2C(Instance, v7);
  }
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  v14 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)v5, Method_QuestAfterAction___c__DisplayClass95_0__Play_b__0__, 0);
  this->fields.endAct = v14;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.endAct, (int32_t)v14, v15, v16, v17, v18, v19, v20);
  if ( this->fields.commandBuf )
    QuestAfterAction__SetState(this, 1, v21);
  else
    ActionExtensions__Call(this->fields.endAct, 0);
}


void QuestAfterAction__PlaySpecifiedAction(
        QuestAfterAction_o *this,
        System_String_array *actionVals,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  const MethodInfo *v22; // x1
  struct QuestAfterAction_Command_array *CommandBuf; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  System_Action_o *v30; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  System_Action_o *v37; // x21
  const MethodInfo *v38; // x2
  System_Collections_IEnumerator_o *v39; // x1

  if ( (byte_4D2D49B & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&QuestAfterAction_TypeInfo);
    sub_1C93AD4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1C93AD4(&Method_QuestAfterAction___c__DisplayClass96_0__PlaySpecifiedAction_b__0__);
    sub_1C93AD4(&Method_QuestAfterAction___c__DisplayClass96_0__PlaySpecifiedAction_b__1__);
    sub_1C93AD4(&QuestAfterAction___c__DisplayClass96_0_TypeInfo);
    byte_4D2D49B = 1;
  }
  v7 = sub_1C93D20(QuestAfterAction___c__DisplayClass96_0_TypeInfo);
  QuestAfterAction___c__DisplayClass96_0___ctor((QuestAfterAction___c__DisplayClass96_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_10;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = finishCallback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)finishCallback, v16, v17, v18, v19, v20, v21);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
    return;
  }
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  CommandBuf = QuestAfterAction__GenerateCommandBuf(actionVals, v22);
  this->fields.temporaryCommandBuf = CommandBuf;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.temporaryCommandBuf,
    (int32_t)CommandBuf,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_10:
    sub_1C93D2C(Instance, v9);
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  v30 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v7,
    Method_QuestAfterAction___c__DisplayClass96_0__PlaySpecifiedAction_b__0__,
    0);
  this->fields.endAct = v30;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.endAct, (int32_t)v30, v31, v32, v33, v34, v35, v36);
  v37 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v7,
    Method_QuestAfterAction___c__DisplayClass96_0__PlaySpecifiedAction_b__1__,
    0);
  v39 = QuestAfterAction__WaitWhileMainStateFinished(this, v37, v38);
  UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, v39, 0);
}


void QuestAfterAction__PlaySpecifiedActionInstantly(
        QuestAfterAction_o *this,
        QuestAfterAction_Command_array *commandArray,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  System_Action_o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_4D2D49E & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__99_0__);
    byte_4D2D49E = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)commandArray, 0) )
  {
    this->fields.temporaryCommandBuf = commandArray;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.temporaryCommandBuf,
      (int32_t)commandArray,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    v11 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__99_0__, 0);
    this->fields.endAct = v11;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.endAct, (int32_t)v11, v12, v13, v14, v15, v16, v17);
    QuestAfterAction__SetState(this, 3, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestAfterAction__RequestMapChange(
        QuestAfterAction_o *this,
        int32_t cType,
        int32_t cTarget,
        const MethodInfo *method)
{
  __int64 v7; // x1
  TerminalPramsManager_c *v8; // x0
  ScrTerminalMap_o *v9; // x0
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_4D2D4A4 & 1) == 0 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2D4A4 = 1;
  }
  this->fields.ActionMapTargetType = cType;
  this->fields.ActionMapTargetId = cTarget;
  QuestAfterAction__SetState(this, 0, *(const MethodInfo **)&cTarget);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2AFE8 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2AFE8 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v9->fields.subRootGimmickP->klass;
  if ( !klass || (v9 = *(ScrTerminalMap_o **)&klass->_2.static_fields_size) == 0 )
    sub_1C93D2C(v9, v7);
  ScrTerminalMap__RequestMapChange(v9, 0, -1, -1, 0);
}


void QuestAfterAction__SetActionMap(
        QuestAfterAction_o *this,
        QuestAfterAction_Command_o *com,
        const MethodInfo *method)
{
  QuestAfterAction_o *v4; // x19
  int32_t id; // w8
  int v6; // w8
  unsigned int v7; // w8
  unsigned int v8; // w8
  int m_CancellationTokenSource; // w8
  System_String_o *TitleInfoCtrlCallback_k__BackingField; // x0
  int32_t SpotId; // w0
  Il2CppObject *MasterData_object; // x0
  System_String_o *param; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v14; // x20

  v4 = this;
  if ( (byte_4D2D493 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C93AD4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    this = (QuestAfterAction_o *)sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2D493 = 1;
  }
  if ( v4->fields.ActionMapTargetType == -1 )
  {
    if ( !com )
      goto LABEL_42;
    id = com->fields.id;
    if ( id > 307 )
    {
      if ( id > 500 )
      {
        if ( id == 510 )
        {
          v4->fields.ActionMapTargetType = 0;
          this = (QuestAfterAction_o *)com->fields.param;
          if ( this )
          {
            this = (QuestAfterAction_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0);
            if ( this )
            {
              m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
              if ( m_CancellationTokenSource >= 2 )
              {
                TitleInfoCtrlCallback_k__BackingField = (System_String_o *)this->fields._TitleInfoCtrlCallback_k__BackingField;
LABEL_29:
                SpotId = System_Int32__Parse(TitleInfoCtrlCallback_k__BackingField, 0);
LABEL_30:
                v4->fields.ActionMapTargetId = SpotId;
                return;
              }
LABEL_27:
              if ( !m_CancellationTokenSource )
                sub_1C93D34(this);
              TitleInfoCtrlCallback_k__BackingField = (System_String_o *)this->fields.invalidMapGimmickIdList;
              goto LABEL_29;
            }
          }
LABEL_42:
          sub_1C93D2C(this, com);
        }
        if ( id == 550 )
        {
          v6 = 3;
LABEL_23:
          v4->fields.ActionMapTargetType = v6;
          goto LABEL_24;
        }
LABEL_41:
        SpotId = -1;
        v4->fields.ActionMapTargetType = -1;
        goto LABEL_30;
      }
      if ( (unsigned int)(id - 400) > 0xC )
      {
        if ( id == 500 )
        {
          v4->fields.ActionMapTargetType = 0;
          this = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestMaster___);
            param = com->fields.param;
            v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
            this = (QuestAfterAction_o *)System_Int32__Parse(param, 0);
            if ( v14 )
            {
              this = (QuestAfterAction_o *)DataMasterBase_object__object__int___GetEntity(
                                             v14,
                                             (int32_t)this,
                                             (const MethodInfo_3463274 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
              if ( this )
              {
                SpotId = QuestEntity__getSpotId((QuestEntity_o *)this, 0);
                goto LABEL_30;
              }
            }
          }
          goto LABEL_42;
        }
        goto LABEL_41;
      }
LABEL_18:
      v6 = 2;
      goto LABEL_23;
    }
    if ( id <= 113 )
    {
      v8 = id - 100;
      if ( v8 > 0xD || ((1 << v8) & 0x3C1F) == 0 )
        goto LABEL_41;
    }
    else
    {
      if ( (unsigned int)(id - 200) < 6 )
        goto LABEL_22;
      v7 = id - 300;
      if ( v7 > 7 )
        goto LABEL_41;
      if ( ((1 << v7) & 0x21) == 0 )
      {
        if ( ((1 << v7) & 0x42) == 0 )
        {
          if ( ((1 << v7) & 0x84) == 0 )
            goto LABEL_41;
          goto LABEL_18;
        }
LABEL_22:
        v6 = 1;
        goto LABEL_23;
      }
    }
    v4->fields.ActionMapTargetType = 0;
LABEL_24:
    this = (QuestAfterAction_o *)com->fields.param;
    if ( this )
    {
      this = (QuestAfterAction_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0);
      if ( this )
      {
        m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
        goto LABEL_27;
      }
    }
    goto LABEL_42;
  }
}


// local variable allocation has failed, the output may be wrong!
void QuestAfterAction__SetState(QuestAfterAction_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4D2D4A2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_CStateManager_QuestAfterAction__setState__);
    byte_4D2D4A2 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1C93D2C(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_33EE940 *)Method_CStateManager_QuestAfterAction__setState__);
}


void QuestAfterAction__SkipToNextAction(QuestAfterAction_o *this, const MethodInfo *method)
{
  this->fields.isSkippedNext = 1;
}


bool QuestAfterAction__TryGetQuestAfterActionVals(
        QuestAfterAction_o *this,
        System_String_array **questAfterAction,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v11; // x1
  Il2CppObject *Instance; // x21
  QuestPhaseDetailAddMaster_o *MasterData_object; // x0
  System_String_array *v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  System_String_array *v21; // x8
  TerminalPramsManager_c *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  Il2CppClass *klass; // x1
  il2cpp_array_size_t max_length; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2D48E & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1C93AD4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D48E = 1;
  }
  entity = 0;
  *questAfterAction = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)questAfterAction, 0, questId, phase, (System_String_o *)method, v5, v6, v7);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2D4B9 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D4B9 = 1;
  }
  MasterData_object = (QuestPhaseDetailAddMaster_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (QuestPhaseDetailAddMaster_o *)TerminalPramsManager_TypeInfo;
  }
  if ( BYTE6(MasterData_object[2].fields.list[1].fields.CollectionChanged) )
  {
    if ( !Instance )
      goto LABEL_36;
    MasterData_object = (QuestPhaseDetailAddMaster_o *)DataManager__GetMasterData_object_(
                                                         (DataManager_o *)Instance,
                                                         (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    if ( !MasterData_object )
      goto LABEL_36;
    v14 = QuestPhaseDetailAddMaster__GetAfterAction(MasterData_object, questId, phase, 0);
    if ( !v14 )
    {
      MasterData_object = (QuestPhaseDetailAddMaster_o *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)Instance,
                                                           (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
      if ( !MasterData_object )
        goto LABEL_36;
      v14 = QuestPhaseDetailMaster__GetAfterAction((QuestPhaseDetailMaster_o *)MasterData_object, questId, phase, 0);
    }
    *questAfterAction = v14;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)questAfterAction, (int32_t)v14, v15, v16, v17, v18, v19, v20);
  }
  v21 = *questAfterAction;
  if ( !*questAfterAction )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D2D4BC )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2D4BC = 1;
    }
    v22 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v22 = TerminalPramsManager_TypeInfo;
    }
    if ( !v22->static_fields->_IsQuestClear_k__BackingField )
      goto LABEL_32;
    if ( !v22->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v22);
    MasterData_object = (QuestPhaseDetailAddMaster_o *)TerminalPramsManager__get_Debug_IsQuestReleaseAll(0);
    if ( ((unsigned __int8)MasterData_object & 1) != 0 )
    {
LABEL_32:
      v21 = *questAfterAction;
      if ( !*questAfterAction )
        return 0;
      goto LABEL_33;
    }
    if ( Instance )
    {
      MasterData_object = (QuestPhaseDetailAddMaster_o *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)Instance,
                                                           (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( MasterData_object )
      {
        MasterData_object = (QuestPhaseDetailAddMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                             &entity,
                                                             questId,
                                                             (const MethodInfo_34632C0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)MasterData_object & 1) == 0 )
          goto LABEL_32;
        if ( entity )
        {
          klass = entity[6].klass;
          *questAfterAction = (System_String_array *)klass;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)questAfterAction, (int32_t)klass, v23, v24, v25, v26, v27, v28);
          goto LABEL_32;
        }
      }
    }
LABEL_36:
    sub_1C93D2C(MasterData_object, v11);
  }
LABEL_33:
  max_length = v21->max_length;
  if ( (int)max_length >= 2 )
    return (max_length & 1) == 0;
  return 0;
}


void QuestAfterAction__Update(QuestAfterAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4D2D499 & 1) == 0 )
  {
    sub_1C93AD4(&Method_CStateManager_QuestAfterAction__update__);
    byte_4D2D499 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(fsm, (const MethodInfo_33EE91C *)Method_CStateManager_QuestAfterAction__update__);
}


System_Collections_IEnumerator_o *QuestAfterAction__WaitWhileMainStateFinished(
        QuestAfterAction_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4D2D4A0 & 1) == 0 )
  {
    sub_1C93AD4(&QuestAfterAction__WaitWhileMainStateFinished_d__102_TypeInfo);
    byte_4D2D4A0 = 1;
  }
  v5 = sub_1C93D20(QuestAfterAction__WaitWhileMainStateFinished_d__102_TypeInfo);
  QuestAfterAction__WaitWhileMainStateFinished_d__102___ctor(
    (QuestAfterAction__WaitWhileMainStateFinished_d__102_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = action;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)action, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void QuestAfterAction___PlaySpecifiedActionInstantly_b__99_0(QuestAfterAction_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  const MethodInfo *v15; // x2

  this->fields.endAct = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.endAct, 0, v2, v3, v4, v5, v6, v7);
  this->fields.temporaryCommandBuf = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.temporaryCommandBuf, 0, v9, v10, v11, v12, v13, v14);
  QuestAfterAction__SetState(this, 0, v15);
}


System_Int32_array *QuestAfterAction__getMapGmkOffIdList(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *invalidMapGimmickIdList; // x0

  if ( (byte_4D2D492 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4D2D492 = 1;
  }
  invalidMapGimmickIdList = this->fields.invalidMapGimmickIdList;
  if ( !invalidMapGimmickIdList )
    sub_1C93D2C(0, method);
  return System_Collections_Generic_List_int___ToArray(
           invalidMapGimmickIdList,
           (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
}


BlankEarthQuestAfterAction_o *QuestAfterAction__get_BlankEarthQuestAfterAction(
        QuestAfterAction_o *this,
        const MethodInfo *method)
{
  return this->fields._BlankEarthQuestAfterAction_k__BackingField;
}


bool QuestAfterAction__get_IsAfterFadeInPlay(QuestAfterAction_o *this, const MethodInfo *method)
{
  return this->fields._IsAfterFadeInPlay_k__BackingField;
}


bool QuestAfterAction__get_IsMoveToAnyScene(QuestAfterAction_o *this, const MethodInfo *method)
{
  return this->fields.IsMoveToEventRewardShop || this->fields.IsMoveToClassScore;
}


bool QuestAfterAction__get_IsRequestedStopBgm(QuestAfterAction_o *this, const MethodInfo *method)
{
  return this->fields.isRequestedStopBgm;
}


BlankEarthQuestAfterAction_o *QuestAfterAction__get_PlanetEarthQuestAfterAction(
        QuestAfterAction_o *this,
        const MethodInfo *method)
{
  return this->fields._PlanetEarthQuestAfterAction_k__BackingField;
}


QuestAfterAction_TitleInfoControlCallback_o *QuestAfterAction__get_TitleInfoCtrlCallback(
        QuestAfterAction_o *this,
        const MethodInfo *method)
{
  return this->fields._TitleInfoCtrlCallback_k__BackingField;
}


void QuestAfterAction__releaseVoice(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *svtVoices; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x21
  System_Collections_Generic_List_object__o *v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_String_o *VoiceAssetName_43508840; // x20
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4D2D497 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    sub_1C93AD4(&SoundManager_TypeInfo);
    byte_4D2D497 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
    goto LABEL_14;
  Values = System_Collections_Generic_Dictionary_int__object___get_Values(
             (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
             (const MethodInfo_34BCB94 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
  v5 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor_59216528(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_3879290 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
  if ( !v5 )
    goto LABEL_14;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    v5,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__);
    if ( !v6 )
      break;
    if ( !v9.fields._current )
      sub_1C93D2C(v6, v7);
    VoiceAssetName_43508840 = ServantVoiceEntity__getVoiceAssetName_43508840(
                                *(_DWORD *)((char *)&v9.fields._current->klass + (unsigned __int64)&word_10),
                                0);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(VoiceAssetName_43508840, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
LABEL_14:
    sub_1C93D2C(svtVoices, method);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
    (const MethodInfo_34BCF0C *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
  this->fields.isLoadedVoice = 0;
}


void QuestAfterAction__set_IsAfterFadeInPlay(QuestAfterAction_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsAfterFadeInPlay_k__BackingField = value;
}


void QuestAfterAction__set_IsRequestedStopBgm(QuestAfterAction_o *this, bool value, const MethodInfo *method)
{
  this->fields.isRequestedStopBgm = value;
}


void QuestAfterAction_Command___ctor(QuestAfterAction_Command_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *QuestAfterAction_Command__GetAvailableRandomVoice(
        QuestAfterAction_Command_o *this,
        int32_t *svtId,
        const MethodInfo *method)
{
  void *param; // x0
  System_Collections_Generic_IEnumerable_T__o *v6; // x22
  Il2CppObject *MasterData_object; // x20
  System_Collections_Generic_List_object__o *v8; // x21
  System_Random_o *v9; // x22
  __int64 size; // x1
  int32_t v11; // w24
  int v12; // w8
  void *v13; // x25
  Il2CppObject *Item; // x25
  __int64 v15; // x8
  __int64 v16; // x8
  int32_t v17; // w1
  _BOOL8 v18; // x0
  int v19; // w8
  void *v20; // x21
  int32_t result; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_4D2D4B0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string___ctor___79020168);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C93AD4(&System_Random_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    sub_1C93AD4(&StringLiteral_16207/*"_"*/);
    byte_4D2D4B0 = 1;
  }
  *svtId = 0;
  if ( this->fields.id != 800 )
    return 0;
  param = this->fields.param;
  if ( !param )
    goto LABEL_41;
  param = System_String__Split((System_String_o *)param, 0x2Cu, 0, 0);
  if ( !param )
    goto LABEL_41;
  v6 = (System_Collections_Generic_IEnumerable_T__o *)param;
  if ( *((int *)param + 6) > 1 )
  {
    param = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( param )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)param,
                            (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
      v8 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor_59216528(
        v8,
        v6,
        (const MethodInfo_3879290 *)Method_System_Collections_Generic_List_string___ctor___79020168);
      result = 0;
      v9 = (System_Random_o *)sub_1C93D20(System_Random_TypeInfo);
      System_Random___ctor(v9, 0);
      if ( v8 )
      {
        if ( v9 )
        {
          size = (unsigned int)v8->fields._size;
          while ( 1 )
          {
            v11 = ((__int64 (__fastcall *)(System_Random_o *, __int64, const MethodInfo *))v9->klass->vtable._7_Next.methodPtr)(
                    v9,
                    size,
                    v9->klass->vtable._7_Next.method);
            result = 0;
            param = System_Collections_Generic_List_object___get_Item(
                      v8,
                      v11,
                      (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_string__get_Item__);
            if ( !param )
              break;
            param = System_String__Split((System_String_o *)param, 0x5Fu, 0, 0);
            if ( !param )
              break;
            v12 = *((_DWORD *)param + 6);
            v13 = param;
            if ( v12 == 3 )
            {
              v18 = System_Int32__TryParse(*((System_String_o **)param + 4), &result, 0);
              if ( *((_DWORD *)v13 + 6) <= 2u )
                goto LABEL_42;
              param = System_String__Concat_64463988(
                        *((System_String_o **)v13 + 5),
                        (System_String_o *)StringLiteral_16207/*"_"*/,
                        *((System_String_o **)v13 + 6),
                        0);
              if ( !MasterData_object )
                break;
              v17 = result;
              Item = (Il2CppObject *)param;
            }
            else
            {
              if ( v12 != 2 )
                goto LABEL_29;
              result = 0;
              Item = System_Collections_Generic_List_object___get_Item(
                       v8,
                       v11,
                       (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_string__get_Item__);
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4D2A6EE )
              {
                sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
                byte_4D2A6EE = 1;
              }
              param = TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                param = TerminalSceneComponent_TypeInfo;
              }
              v15 = **((_QWORD **)param + 23);
              if ( !v15 )
                break;
              v16 = *(_QWORD *)(v15 + 464);
              if ( !v16 )
                break;
              param = (void *)ServantVoiceEntity__getSvtIdfromVoiceAssetName(*(System_String_o **)(v16 + 40), 0);
              if ( !MasterData_object )
                break;
              v17 = (int)param;
            }
            if ( VoicePlayCondMaster__isVoicePlay(
                   (VoicePlayCondMaster_o *)MasterData_object,
                   v17,
                   (System_String_o *)Item,
                   0,
                   -1,
                   -1,
                   0,
                   0) )
            {
              *svtId = result;
              return (System_String_o *)Item;
            }
LABEL_29:
            System_Collections_Generic_List_object___RemoveAt(
              v8,
              v11,
              (const MethodInfo_387B170 *)Method_System_Collections_Generic_List_string__RemoveAt__);
            size = (unsigned int)v8->fields._size;
            if ( !(_DWORD)size )
            {
              Item = 0;
              *svtId = 0;
              return (System_String_o *)Item;
            }
          }
        }
      }
    }
LABEL_41:
    sub_1C93D2C(param, svtId);
  }
  param = this->fields.param;
  if ( !param )
    goto LABEL_41;
  param = System_String__Split((System_String_o *)param, 0x5Fu, 0, 0);
  if ( !param )
    goto LABEL_41;
  v19 = *((_DWORD *)param + 6);
  v20 = param;
  if ( v19 != 3 )
  {
    if ( v19 == 2 )
      return this->fields.param;
    return 0;
  }
  v18 = System_Int32__TryParse(*((System_String_o **)param + 4), svtId, 0);
  if ( *((_DWORD *)v20 + 6) <= 2u )
LABEL_42:
    sub_1C93D34(v18);
  return System_String__Concat_64463988(
           *((System_String_o **)v20 + 5),
           (System_String_o *)StringLiteral_16207/*"_"*/,
           *((System_String_o **)v20 + 6),
           0);
}


System_String_o *QuestAfterAction_Command__GetBgmName(QuestAfterAction_Command_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x0
  bool v4; // w8
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF
  int32_t result; // [xsp+1Ch] [xbp-14h] BYREF

  if ( (byte_4D2D4B2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1C93AD4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2D4B2 = 1;
  }
  result = 0;
  entity = 0;
  v3 = 0;
  if ( this->fields.id == 851 )
  {
    v4 = System_Int32__TryParse(this->fields.param, &result, 0);
    v3 = 0;
    if ( v4 )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_12;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_BgmMaster___);
      if ( !Instance )
        goto LABEL_12;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                   &entity,
                                   result,
                                   (const MethodInfo_34632C0 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( entity )
          return (System_String_o *)entity[1].monitor;
LABEL_12:
        sub_1C93D2C(Instance, v6);
      }
      return 0;
    }
  }
  return v3;
}


int32_t QuestAfterAction_Command__GetSvtId(
        QuestAfterAction_Command_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  System_String_o **v3; // x0
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  if ( this->fields.id != 800 )
    return 0;
  v3 = (System_String_o **)str;
  if ( !str || (v3 = (System_String_o **)System_String__Split(str, 0x5Fu, 0, 0)) == 0 )
    sub_1C93D2C(v3, str);
  if ( *((_DWORD *)v3 + 6) != 3 )
    return 0;
  result = 0;
  if ( System_Int32__TryParse(v3[4], &result, 0) )
    return result;
  else
    return 0;
}


System_String_o *QuestAfterAction_Command__GetVoiceId(
        QuestAfterAction_Command_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  System_String_o *v3; // x19
  QuestAfterAction_Command_o *v4; // x20
  int param; // w8

  v3 = str;
  v4 = this;
  if ( (byte_4D2D4B1 & 1) == 0 )
  {
    this = (QuestAfterAction_Command_o *)sub_1C93AD4(&StringLiteral_16207/*"_"*/);
    byte_4D2D4B1 = 1;
  }
  if ( v4->fields.id == 800 )
  {
    if ( !v3 || (this = (QuestAfterAction_Command_o *)System_String__Split(v3, 0x5Fu, 0, 0)) == 0 )
      sub_1C93D2C(this, str);
    param = (int)this->fields.param;
    if ( param == 2 )
      return v3;
    if ( param == 3 )
      return System_String__Concat_64463988(
               *((System_String_o **)this + 5),
               (System_String_o *)StringLiteral_16207/*"_"*/,
               *((System_String_o **)this + 6),
               0);
  }
  return 0;
}


void QuestAfterAction_StateAdditional___ctor(QuestAfterAction_StateAdditional_o *this, const MethodInfo *method)
{
  QuestAfterAction_StateMain___ctor((QuestAfterAction_StateMain_o *)this, 0);
}


void QuestAfterAction_StateAdditionalBase___ctor(
        QuestAfterAction_StateAdditionalBase_o *this,
        const MethodInfo *method)
{
  QuestAfterAction_StateMain___ctor((QuestAfterAction_StateMain_o *)this, 0);
}


void QuestAfterAction_StateAdditionalBase__begin(
        QuestAfterAction_StateAdditionalBase_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  QuestAfterAction_StateMain__begin((QuestAfterAction_StateMain_o *)this, that, 0);
  ((void (__fastcall *)(QuestAfterAction_StateAdditionalBase_o *, _QWORD, const MethodInfo *))this->klass->vtable._12_set_CommandIndex.methodPtr)(
    this,
    0,
    this->klass->vtable._12_set_CommandIndex.method);
}


QuestAfterAction_Command_array *QuestAfterAction_StateAdditionalBase__get_CommandBuf(
        QuestAfterAction_StateAdditionalBase_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1C93D2C(this, method);
  return that->fields.temporaryCommandBuf;
}


int32_t QuestAfterAction_StateAdditionalBase__get_CommandIndex(
        QuestAfterAction_StateAdditionalBase_o *this,
        const MethodInfo *method)
{
  return this->fields._CommandIndex_k__BackingField;
}


void QuestAfterAction_StateAdditionalBase__onEnd(
        QuestAfterAction_StateAdditionalBase_o *this,
        bool deleteKey,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *screenCollider; // x0
  __int64 v5; // x1
  struct QuestAfterAction_o *that; // x8

  screenCollider = (struct QuestAfterAction_o *)((__int64 (__fastcall *)(QuestAfterAction_StateAdditionalBase_o *, _QWORD, const MethodInfo *))this->klass->vtable._12_set_CommandIndex.methodPtr)(
                                                  this,
                                                  0,
                                                  this->klass->vtable._12_set_CommandIndex.method);
  that = this->fields.that;
  if ( !that
    || (screenCollider = (struct QuestAfterAction_o *)that->fields.screenCollider) == 0
    || (UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)screenCollider, 0, 0),
        (screenCollider = this->fields.that) == 0) )
  {
    sub_1C93D2C(screenCollider, v5);
  }
  QuestAfterAction__CallEndAct(screenCollider, 0);
}


void QuestAfterAction_StateAdditionalBase__set_CommandIndex(
        QuestAfterAction_StateAdditionalBase_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._CommandIndex_k__BackingField = value;
}


void QuestAfterAction_StateInstant___ctor(QuestAfterAction_StateInstant_o *this, const MethodInfo *method)
{
  QuestAfterAction_StateMain___ctor((QuestAfterAction_StateMain_o *)this, 0);
}


void QuestAfterAction_StateInstant__EndAnim(QuestAfterAction_StateInstant_o *this, const MethodInfo *method)
{
  if ( !this->fields.completed )
  {
    QuestAfterAction_StateMain__EndAnim((QuestAfterAction_StateMain_o *)this, 0);
    ((void (__fastcall *)(QuestAfterAction_StateInstant_o *, struct QuestAfterAction_o *, const MethodInfo *))this->klass->vtable._13_UpdateAnim.methodPtr)(
      this,
      this->fields.that,
      this->klass->vtable._13_UpdateAnim.method);
  }
}


bool QuestAfterAction_StateInstant__IsUsableCommand(
        QuestAfterAction_StateInstant_o *this,
        QuestAfterAction_Command_o *cmd,
        const MethodInfo *method)
{
  if ( (byte_4D2D529 & 1) == 0 )
  {
    sub_1C93AD4(&QuestAfterAction_TypeInfo);
    byte_4D2D529 = 1;
  }
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  return QuestAfterAction__IsNoWaitCommand(cmd, 0);
}


void QuestAfterAction_StateInstant__UpdateAnim(
        QuestAfterAction_StateInstant_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  if ( !this->fields.completed )
    QuestAfterAction_StateMain__UpdateAnim((QuestAfterAction_StateMain_o *)this, that, 0);
}


void QuestAfterAction_StateInstant__begin(
        QuestAfterAction_StateInstant_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  QuestAfterAction_StateInstant_c *klass; // x8

  QuestAfterAction_StateMain__begin((QuestAfterAction_StateMain_o *)this, that, 0);
  ((void (__fastcall *)(QuestAfterAction_StateInstant_o *, _QWORD, const MethodInfo *))this->klass->vtable._12_set_CommandIndex.methodPtr)(
    this,
    0,
    this->klass->vtable._12_set_CommandIndex.method);
  klass = this->klass;
  this->fields.completed = 0;
  ((void (__fastcall *)(QuestAfterAction_StateInstant_o *, QuestAfterAction_o *, const MethodInfo *))klass->vtable._13_UpdateAnim.methodPtr)(
    this,
    that,
    klass->vtable._13_UpdateAnim.method);
}


void QuestAfterAction_StateInstant__onEnd(
        QuestAfterAction_StateInstant_o *this,
        bool deleteKey,
        const MethodInfo *method)
{
  this->fields.completed = 1;
  QuestAfterAction_StateAdditionalBase__onEnd((QuestAfterAction_StateAdditionalBase_o *)this, 0, method);
}


void QuestAfterAction_StateInstant__update(
        QuestAfterAction_StateInstant_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestAfterAction_StateMain___ctor(QuestAfterAction_StateMain_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain__EndAnim(QuestAfterAction_StateMain_o *this, const MethodInfo *method)
{
  QuestAfterAction_StateMain_c *klass; // x8
  int v4; // w0
  int v5; // w20
  __int64 v6; // x0
  __int64 v7; // x1

  klass = this->klass;
  this->fields.IsAnimDoing = 0;
  v4 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))klass->vtable._11_get_CommandIndex.methodPtr)(
         this,
         klass->vtable._11_get_CommandIndex.method);
  ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, const MethodInfo *))this->klass->vtable._12_set_CommandIndex.methodPtr)(
    this,
    (unsigned int)(v4 + 1),
    this->klass->vtable._12_set_CommandIndex.method);
  v5 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._11_get_CommandIndex.methodPtr)(
         this,
         this->klass->vtable._11_get_CommandIndex.method);
  v6 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._10_get_CommandBuf.methodPtr)(
         this,
         this->klass->vtable._10_get_CommandBuf.method);
  if ( !v6 )
    sub_1C93D2C(0, v7);
  if ( v5 >= *(_DWORD *)(v6 + 24) )
    ((void (__fastcall *)(QuestAfterAction_StateMain_o *, __int64, const MethodInfo *))this->klass->vtable._15_onEnd.methodPtr)(
      this,
      1,
      this->klass->vtable._15_onEnd.method);
}


void QuestAfterAction_StateMain__ForceEndAnim(
        QuestAfterAction_StateMain_o *this,
        bool deleteKey,
        const MethodInfo *method)
{
  QuestAfterAction_StateMain_c *klass; // x8
  __int64 v6; // x0
  __int64 v7; // x1

  klass = this->klass;
  this->fields.IsAnimDoing = 0;
  v6 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *, const MethodInfo *))klass->vtable._10_get_CommandBuf.methodPtr)(
         this,
         klass->vtable._10_get_CommandBuf.method,
         method);
  if ( !v6 )
    sub_1C93D2C(0, v7);
  ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, const MethodInfo *))this->klass->vtable._12_set_CommandIndex.methodPtr)(
    this,
    *(unsigned int *)(v6 + 24),
    this->klass->vtable._12_set_CommandIndex.method);
  ((void (__fastcall *)(QuestAfterAction_StateMain_o *, bool, const MethodInfo *))this->klass->vtable._15_onEnd.methodPtr)(
    this,
    deleteKey,
    this->klass->vtable._15_onEnd.method);
}


bool QuestAfterAction_StateMain__IsUsableCommand(
        QuestAfterAction_StateMain_o *this,
        QuestAfterAction_Command_o *cmd,
        const MethodInfo *method)
{
  return 1;
}


void QuestAfterAction_StateMain__StartMapGimmick(QuestAfterAction_StateMain_o *this, const MethodInfo *method)
{
  QuestAfterAction_StateMain_o *v2; // x19
  struct QuestAfterAction_o *that; // x8
  __int64 v4; // x8
  QuestAfterAction_StateMain_o *v5; // x20
  unsigned __int64 v6; // x22
  struct QuestAfterAction_o *v7; // x8
  int32_t v8; // w21
  Il2CppObject *MapComponent_object; // x21
  Il2CppClass *klass; // x8
  float AnimTime; // s0
  const MethodInfo *v12; // x3

  v2 = this;
  if ( (byte_4D2D4B7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
    this = (QuestAfterAction_StateMain_o *)sub_1C93AD4(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4D2D4B7 = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)that->fields.invalidMapGimmickIdList;
  if ( !this )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)System_Collections_Generic_List_int___ToArray(
                                           (System_Collections_Generic_List_int__o *)this,
                                           (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !this )
    goto LABEL_22;
  v4 = *(_QWORD *)&this->fields.IsAnimDoing;
  v5 = this;
  if ( (int)v4 >= 1 )
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= (unsigned int)v4 )
        sub_1C93D34(this);
      v7 = v2->fields.that;
      if ( !v7 )
        break;
      this = (QuestAfterAction_StateMain_o *)v7->fields.invalidMapGimmickIdList;
      if ( !this )
        break;
      v8 = *((_DWORD *)&v5->fields.waitTime + v6);
      System_Collections_Generic_List_int___Remove(
        (System_Collections_Generic_List_int__o *)this,
        v8,
        (const MethodInfo_385DE74 *)Method_System_Collections_Generic_List_int__Remove__);
      this = (QuestAfterAction_StateMain_o *)v2->fields.that;
      if ( !this )
        break;
      MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                              (QuestAfterAction_o *)this,
                              2,
                              v8,
                              v2,
                              (const MethodInfo_323DD94 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (QuestAfterAction_StateMain_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)MapComponent_object,
                                               0,
                                               0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (QuestAfterAction_StateMain_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapComponent_object || !this )
          break;
        this = (QuestAfterAction_StateMain_o *)QuestTree__CheckMapGimmickCond_37205160(
                                                 (QuestTree_o *)this,
                                                 (MapControl_MapGimmickInfo_o *)MapComponent_object[7].klass,
                                                 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          klass = MapComponent_object[7].klass;
          if ( !klass )
            break;
          LODWORD(klass->_1.name) = 1;
          AnimTime = MapGimmickComponent__GetAnimTime((MapGimmickComponent_o *)MapComponent_object, method);
          MapGimmickComponent__SetDispAnim_36812548((MapGimmickComponent_o *)MapComponent_object, 1, AnimTime, 1, v12);
        }
      }
      LODWORD(v4) = *(_DWORD *)&v5->fields.IsAnimDoing;
      if ( (__int64)++v6 >= (int)v4 )
        return;
    }
LABEL_22:
    sub_1C93D2C(this, method);
  }
}


void QuestAfterAction_StateMain__UpdateAnim(
        QuestAfterAction_StateMain_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x22
  __int64 updated; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  QuestAfterAction_o **v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  QuestAfterAction_StateMain_c *klass; // x8
  __int64 v22; // x21
  QuestAfterAction_Command_o *v23; // x21
  QuestAfterAction_o *v24; // x23
  BlankEarthQuestAfterAction_o *PlanetEarthQuestAfterAction_k__BackingField; // x24
  System_Action_o *v26; // x25
  QuestAfterAction_o *v27; // x23
  BlankEarthQuestAfterAction_o *BlankEarthQuestAfterAction_k__BackingField; // x24
  System_Action_o *v29; // x25
  long double inited; // q0
  int id; // w8
  __int64 v32; // x23
  int v33; // w22
  bool v34; // w21
  __int64 v35; // x23
  int32_t v36; // w21
  int32_t v37; // w22
  int32_t v38; // w23
  __int64 v39; // x8
  __int64 v40; // x23
  float v41; // s0
  __int64 v42; // x19
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  __int64 v49; // x22
  int32_t v50; // w20
  int32_t v51; // w21
  BgmManager_c *v52; // x0
  float v53; // s0
  float masterVolume; // s1
  float v55; // s0
  __int64 v56; // x8
  ScrTerminalListTop_o *v57; // x22
  float v58; // s8
  float v59; // s9
  __int64 v60; // x8
  ScrTerminalListTop_o *v61; // x22
  System_Action_o *v62; // x23
  __int64 v63; // x20
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  __int64 v70; // x23
  __int64 v71; // x8
  __int64 v72; // x22
  int32_t v73; // w21
  bool v74; // w24
  bool v75; // w25
  System_String_o *v76; // x19
  System_String_o *v77; // x20
  System_String_o *v78; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v80; // x23
  __int64 v81; // x20
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  __int64 v88; // x8
  QuestAfterAction_o *v89; // x22
  Il2CppObject *MapComponent_object; // x0
  int32_t v91; // w2
  int32_t v92; // w3
  System_String_o *v93; // x4
  int32_t v94; // w5
  int64_t v95; // x6
  System_String_o *v96; // x7
  UnityEngine_Object_o *v97; // x19
  SrcSpotBasePrefab_o *v98; // x19
  System_Action_o *v99; // x21
  int32_t v100; // w1
  __int64 v101; // x22
  int32_t v102; // w21
  bool v103; // w23
  float v104; // s8
  TerminalSceneComponent_c *v105; // x0
  TerminalSceneComponent_o *v106; // x19
  System_Action_o *v107; // x20
  TerminalSceneComponent_o *v108; // x0
  float DEFAULT_FADE_TIME; // s0
  System_Action_o *v110; // x1
  __int64 v111; // x21
  int32_t v112; // w20
  int32_t v113; // w22
  __int64 v114; // x20
  int32_t v115; // w2
  int32_t v116; // w3
  System_String_o *v117; // x4
  int32_t v118; // w5
  int64_t v119; // x6
  System_String_o *v120; // x7
  __int64 v121; // x8
  QuestAfterAction_o *v122; // x22
  Il2CppObject *v123; // x0
  int32_t v124; // w2
  int32_t v125; // w3
  System_String_o *v126; // x4
  int32_t v127; // w5
  int64_t v128; // x6
  System_String_o *v129; // x7
  UnityEngine_Object_o *v130; // x19
  ModelLineComponent_o *v131; // x19
  System_Action_o *v132; // x21
  const MethodInfo *v133; // x3
  int32_t v134; // w1
  __int64 v135; // x8
  __int64 v136; // x22
  _BOOL4 v137; // w23
  float v138; // s0
  TerminalSceneComponent_c *v139; // x0
  TerminalSceneComponent_o *mInstance; // x22
  __int64 v141; // x23
  int v142; // w22
  bool v143; // w21
  __int64 v144; // x8
  PlayMakerFSM_o *v145; // x20
  System_String_o *ActiveStateName; // x0
  __int64 v147; // x8
  __int64 v148; // x8
  QuestBoardListViewManager_o *v149; // x21
  System_Action_o *v150; // x22
  Il2CppObject *v151; // x23
  struct QuestAfterAction_StateMain___c_StaticFields *v152; // x0
  int32_t v153; // w2
  int32_t v154; // w3
  System_String_o *v155; // x4
  int32_t v156; // w5
  int64_t v157; // x6
  System_String_o *v158; // x7
  TerminalSceneComponent_c *v159; // x0
  __int64 v160; // x8
  float v161; // s0
  __int64 v162; // x23
  float v163; // s0
  float v164; // s8
  int32_t v165; // w22
  __int64 v166; // x8
  ScrTerminalMap_o *v167; // x24
  float v168; // s0
  float v169; // s9
  float v170; // s0
  const MethodInfo_39A43D0 *v171; // x2
  int v172; // w8
  MapCamera_o *v173; // x20
  __int64 v174; // x8
  float v175; // s0
  __int64 v176; // x21
  int32_t v177; // w0
  int32_t v178; // w20
  float v179; // s8
  int32_t v180; // w19
  __int64 v181; // x20
  int32_t v182; // w2
  int32_t v183; // w3
  System_String_o *v184; // x4
  int32_t v185; // w5
  int64_t v186; // x6
  System_String_o *v187; // x7
  __int64 v188; // x23
  int32_t v189; // w21
  Il2CppObject *v190; // x0
  __int64 *v191; // x24
  int32_t v192; // w2
  int32_t v193; // w3
  System_String_o *v194; // x4
  int32_t v195; // w5
  int64_t v196; // x6
  System_String_o *v197; // x7
  MapControl_QuestInfo_o *QuestInfo; // x0
  __int64 v199; // x22
  int32_t v200; // w2
  int32_t v201; // w3
  System_String_o *v202; // x4
  int32_t v203; // w5
  int64_t v204; // x6
  System_String_o *v205; // x7
  const MethodInfo *v206; // x2
  int v207; // w21
  __int64 v208; // x8
  NetworkManager_ResultCallbackFunc_o *v209; // x21
  Il2CppObject *Request_object; // x20
  int32_t v211; // w21
  System_String_o *param; // x21
  _QWORD *v213; // x0
  System_Reflection_MethodBase_o *v214; // x0
  __int64 v215; // x21
  int v216; // w22
  int32_t v217; // w21
  __int64 v218; // x8
  bool v219; // w2
  bool v220; // w3
  int32_t v221; // w1
  __int64 v222; // x22
  int v223; // w23
  float v224; // s8
  int32_t v225; // w21
  QuestAfterAction_o *v226; // x8
  __int64 v227; // x8
  __int64 v228; // x8
  __int64 v229; // x8
  System_String_o *v230; // x20
  System_String_o *v231; // x21
  SeManager_c *v232; // x0
  float DEFAULT_VOLUME; // s8
  System_String_o *v234; // x19
  System_String_o *v235; // x20
  System_String_o *v236; // x20
  Il2CppObject *v237; // x21
  System_Action_o *v238; // x23
  System_String_o *v239; // x19
  System_String_o *v240; // x20
  System_String_o *v241; // x20
  Il2CppObject *v242; // x21
  System_Action_o *v243; // x23
  __int64 v244; // x23
  int32_t v245; // w2
  int32_t v246; // w3
  System_String_o *v247; // x4
  int32_t v248; // w5
  int64_t v249; // x6
  System_String_o *v250; // x7
  System_String_array *v251; // x20
  int32_t v252; // w1
  int v253; // w8
  __int64 v254; // x23
  int32_t v255; // w2
  int32_t v256; // w3
  System_String_o *v257; // x4
  int32_t v258; // w5
  int64_t v259; // x6
  System_String_o *v260; // x7
  System_String_array *v261; // x20
  int32_t v262; // w1
  int v263; // w8
  System_String_o *v264; // x19
  System_String_o *v265; // x20
  __int64 v266; // x22
  int32_t v267; // w21
  bool v268; // w23
  __int64 v269; // x8
  int v270; // w9
  __int64 v271; // x8
  __int64 v272; // x8
  __int64 v273; // x8
  __int64 v274; // x22
  int v275; // w23
  bool v276; // w21
  int v277; // w23
  __int64 v278; // x21
  float v279; // s0
  float v280; // s8
  float v281; // s0
  MapCamera_o *v282; // x19
  float v283; // s0
  float v284; // s9
  int32_t v285; // w20
  __int64 v286; // x23
  float v287; // s0
  float v288; // s9
  float v289; // s0
  float v290; // s10
  float v291; // s0
  float v292; // s11
  float v293; // s0
  float v294; // s8
  int32_t v295; // w19
  __int64 v296; // x8
  float v297; // s8
  const MethodInfo_39A43D0 *v298; // x2
  MapCamera_o *v299; // x20
  System_Action_o *v300; // x21
  MapCamera_o *v301; // x0
  float v302; // s3
  int32_t v303; // w1
  __int64 v304; // x8
  __int64 v305; // x21
  int32_t v306; // w20
  __int64 v307; // x8
  __int64 v308; // x21
  int32_t v309; // w0
  int32_t v310; // w20
  System_String_o *v311; // x21
  TerminalPramsManager_c *v312; // x0
  TerminalPramsManager_c *v313; // x0
  BalanceConfig_c *v314; // x0
  TerminalPramsManager_c *v315; // x0
  __int64 v316; // x8
  const MethodInfo *v317; // x2
  __int64 v318; // x8
  __int64 v319; // x8
  __int64 v320; // x8
  __int64 v321; // x22
  unsigned __int64 v322; // x24
  __int64 v323; // x8
  Il2CppObject *v324; // x22
  Il2CppObject *v325; // x20
  __int64 v326; // x8
  ScrTerminalMap_o *v327; // x23
  __int64 v328; // x8
  ScrTerminalMap_o *v329; // x20
  UnityEngine_GameObject_o *v330; // x22
  System_Action_o *v331; // x23
  TerminalPramsManager_c *v332; // x0
  QuestAfterAction_o *v333; // x22
  UnityEngine_Object_o *v334; // x21
  intptr_t v335; // x8
  QuestAfterAction_o *v336; // x22
  UnityEngine_Object_o *v337; // x21
  intptr_t m_CachedPtr; // x8
  SrcSpotBasePrefab_o *v339; // x0
  int32_t v340; // w1
  QuestAfterAction_o *v341; // x22
  intptr_t v342; // x8
  __int64 v343; // x22
  QuestAfterAction_o *v344; // x21
  Il2CppObject *v345; // x21
  System_Action_o *v346; // x22
  int32_t v347; // w2
  int32_t v348; // w3
  System_String_o *v349; // x4
  int32_t v350; // w5
  int64_t v351; // x6
  System_String_o *v352; // x7
  GrandQuestFolderBoardItem_o *v353; // x0
  __int64 v354; // x1
  __int64 v355; // x20
  int32_t v356; // w2
  int32_t v357; // w3
  System_String_o *v358; // x4
  int32_t v359; // w5
  int64_t v360; // x6
  System_String_o *v361; // x7
  __int64 v362; // x8
  QuestAfterAction_o *v363; // x22
  Il2CppObject *v364; // x0
  int32_t v365; // w2
  int32_t v366; // w3
  System_String_o *v367; // x4
  int32_t v368; // w5
  int64_t v369; // x6
  System_String_o *v370; // x7
  UnityEngine_Object_o *v371; // x19
  __int64 v372; // x23
  int32_t v373; // w2
  int32_t v374; // w3
  System_String_o *v375; // x4
  int32_t v376; // w5
  int64_t v377; // x6
  System_String_o *v378; // x7
  __int64 v379; // x20
  QuestAfterAction_o *v380; // x22
  Il2CppObject *v381; // x0
  __int64 *v382; // x19
  int32_t v383; // w2
  int32_t v384; // w3
  System_String_o *v385; // x4
  int32_t v386; // w5
  int64_t v387; // x6
  System_String_o *v388; // x7
  UnityEngine_Object_o *v389; // x21
  SrcSpotBasePrefab_o *v390; // x21
  System_Action_o *v391; // x22
  __int64 v392; // x21
  QuestAfterAction_o *v393; // x22
  Il2CppObject *v394; // x22
  __int64 v395; // x21
  QuestAfterAction_o *v396; // x22
  Il2CppObject *v397; // x22
  QuestAfterAction_o *v398; // x23
  const MethodInfo *v399; // x4
  UnityEngine_Object_o *v400; // x23
  float v401; // s9
  float v402; // s8
  float v403; // s10
  __int64 v404; // x21
  float v405; // s0
  QuestAfterAction_o *v406; // x20
  float v407; // s8
  Il2CppObject *v408; // x20
  _BOOL4 v409; // w23
  QuestAfterAction_o *v410; // x22
  QuestAfterAction_o *v411; // x23
  const MethodInfo *v412; // x4
  int32_t v413; // w2
  int32_t v414; // w1
  QuestAfterAction_o *v415; // x0
  __int64 v416; // x8
  __int64 v417; // x22
  int32_t v418; // w21
  bool v419; // w22
  int32_t v420; // w21
  TerminalPramsManager_c *v421; // x0
  QuestAfterAction_o *v422; // x20
  Il2CppObject *v423; // x20
  TerminalPramsManager_c *v424; // x0
  __int64 v425; // x8
  __int64 v426; // x22
  int32_t v427; // w21
  bool v428; // w22
  __int64 v429; // x8
  __int64 v430; // x22
  int32_t v431; // w21
  bool v432; // w22
  __int64 v433; // x21
  QuestAfterAction_o *v434; // x20
  Il2CppObject *v435; // x20
  UIWidget_o *v436; // x20
  __int64 v437; // x23
  int32_t v438; // w2
  int32_t v439; // w3
  System_String_o *v440; // x4
  int32_t v441; // w5
  int64_t v442; // x6
  System_String_o *v443; // x7
  __int64 v444; // x20
  __int64 v445; // x8
  __int64 v446; // x21
  int32_t v447; // w22
  bool v448; // w25
  bool v449; // w27
  __int64 v450; // x20
  int32_t v451; // w2
  int32_t v452; // w3
  System_String_o *v453; // x4
  int32_t v454; // w5
  int64_t v455; // x6
  System_String_o *v456; // x7
  __int64 v457; // x8
  QuestAfterAction_o *v458; // x22
  Il2CppObject *v459; // x0
  int32_t v460; // w2
  int32_t v461; // w3
  System_String_o *v462; // x4
  int32_t v463; // w5
  int64_t v464; // x6
  System_String_o *v465; // x7
  UnityEngine_Object_o *v466; // x19
  MapGimmickComponent_o *v467; // x19
  System_Action_o *v468; // x21
  const MethodInfo *v469; // x3
  TerminalSceneComponent_o *v470; // x19
  __int64 v471; // x20
  int32_t v472; // w2
  int32_t v473; // w3
  System_String_o *v474; // x4
  int32_t v475; // w5
  int64_t v476; // x6
  System_String_o *v477; // x7
  System_String_array *v478; // x0
  __int64 *v479; // x21
  int32_t v480; // w2
  int32_t v481; // w3
  System_String_o *v482; // x4
  int32_t v483; // w5
  int64_t v484; // x6
  System_String_o *v485; // x7
  __int64 v486; // x8
  __int64 v487; // x9
  QuestAfterAction_o *v488; // x21
  Il2CppObject *v489; // x0
  int32_t v490; // w2
  int32_t v491; // w3
  System_String_o *v492; // x4
  int32_t v493; // w5
  int64_t v494; // x6
  System_String_o *v495; // x7
  UnityEngine_Object_o *v496; // x19
  MapGimmickComponent_o *v497; // x19
  System_Action_o *v498; // x0
  intptr_t *v499; // x8
  Il2CppObject *v500; // x1
  System_Action_o *v501; // x21
  QuestAfterAction_o *v502; // x22
  QuestAfterAction_o *v503; // x23
  UnityEngine_Object_o *v504; // x23
  __int64 v505; // x8
  float v506; // s0
  float v507; // s11
  int32_t v508; // w23
  const MethodInfo *v509; // x3
  __int64 v510; // x20
  int32_t v511; // w2
  int32_t v512; // w3
  System_String_o *v513; // x4
  int32_t v514; // w5
  int64_t v515; // x6
  System_String_o *v516; // x7
  __int64 v517; // x8
  QuestAfterAction_o *v518; // x22
  Il2CppObject *v519; // x0
  __int64 v520; // x19
  int32_t v521; // w2
  int32_t v522; // w3
  System_String_o *v523; // x4
  int32_t v524; // w5
  int64_t v525; // x6
  System_String_o *v526; // x7
  UnityEngine_Object_o *v527; // x21
  bool v528; // w0
  bool v529; // w22
  const MethodInfo *v530; // x3
  int32_t v531; // w1
  _BOOL4 v532; // w23
  QuestAfterAction_o *v533; // x22
  UnityEngine_Object_o *v534; // x21
  const MethodInfo *v535; // x2
  const MethodInfo *v536; // x2
  _DWORD *v537; // x8
  __int64 v538; // x20
  int32_t v539; // w2
  int32_t v540; // w3
  System_String_o *v541; // x4
  int32_t v542; // w5
  int64_t v543; // x6
  System_String_o *v544; // x7
  __int64 v545; // x8
  QuestAfterAction_o *v546; // x22
  Il2CppObject *v547; // x0
  int32_t v548; // w2
  int32_t v549; // w3
  System_String_o *v550; // x4
  int32_t v551; // w5
  int64_t v552; // x6
  System_String_o *v553; // x7
  UnityEngine_Object_o *v554; // x19
  _BOOL4 IsMapModel; // w23
  QuestAfterAction_o *v556; // x22
  UnityEngine_Object_o *v557; // x21
  const MethodInfo *v558; // x2
  _DWORD *v559; // x8
  __int64 v560; // x20
  int32_t v561; // w2
  int32_t v562; // w3
  System_String_o *v563; // x4
  int32_t v564; // w5
  int64_t v565; // x6
  System_String_o *v566; // x7
  __int64 v567; // x8
  QuestAfterAction_o *v568; // x22
  Il2CppObject *v569; // x0
  int32_t v570; // w2
  int32_t v571; // w3
  System_String_o *v572; // x4
  int32_t v573; // w5
  int64_t v574; // x6
  System_String_o *v575; // x7
  UnityEngine_Object_o *v576; // x19
  _BOOL4 v577; // w23
  QuestAfterAction_o *v578; // x22
  UnityEngine_Object_o *v579; // x21
  const MethodInfo *v580; // x2
  const MethodInfo *v581; // x2
  float v582; // s0
  QuestAfterAction_o *v583; // x24
  const MethodInfo *v584; // x4
  UnityEngine_Object_o *v585; // x24
  const MethodInfo_39A43D0 *v586; // x2
  float x; // s10
  float y; // s8
  float z; // s9
  __int64 v590; // x8
  int v591; // w8
  MapCamera_o *v592; // x20
  float v593; // s0
  float v594; // s0
  QuestAfterAction_o *v595; // x24
  const MethodInfo *v596; // x4
  UnityEngine_Object_o *MapGameObject; // x24
  __int64 v598; // x8
  System_String_o *v599; // x24
  QuestAfterAction_o *v600; // x24
  const MethodInfo *v601; // x4
  UnityEngine_Object_o *v602; // x24
  __int64 v603; // x8
  int32_t v604; // w1
  Il2CppObject *v605; // x3
  __int64 v606; // x8
  __int64 v607; // x8
  __int64 v608; // x8
  __int64 v609; // x22
  unsigned __int64 v610; // x24
  __int64 v611; // x8
  bool v612; // w25
  bool v613; // w25
  __int64 v614; // x21
  const MethodInfo *v615; // x3
  QuestAfterAction_o *v616; // x8
  QuestAfterAction_TitleInfoControlCallback_o *TitleInfoCtrlCallback_k__BackingField; // x22
  System_Action_o *v618; // x20
  const MethodInfo *v619; // x3
  SceneJumpInfo_o *v620; // x21
  __int64 v621; // x8
  __int64 v622; // x8
  TerminalPramsManager_c *v623; // x0
  TerminalPramsManager_c *v624; // x0
  Il2CppObject *v625; // x21
  System_Action_o *v626; // x23
  __int64 v627; // x8
  __int64 v628; // x8
  UnityEngine_Object_o *v629; // x24
  _BOOL8 v630; // x0
  __int64 v631; // x1
  _QWORD *monitor; // x8
  int32_t v633; // w22
  Il2CppObject *current; // x24
  __int64 naturalAligment; // x10
  Il2CppObject *v636; // x23
  _BOOL8 v637; // x0
  __int64 v638; // x1
  TerminalPramsManager_c *v639; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  System_Collections_Generic_List_int__o *nonFrameInBossHpUiIndex; // x0
  __int64 klass_low; // x1
  struct System_Int32_array *items; // x9
  _QWORD *v644; // x10
  __int64 v645; // x11
  System_Collections_Generic_List_int__o *RaidBossHpForceHideGroupIndexList; // x0
  struct System_Int32_array *v647; // x8
  _QWORD *v648; // x9
  __int64 v649; // x10
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v651; // x1
  __int64 v652; // x8
  __int64 v653; // x8
  UnityEngine_Object_o *v654; // x24
  _BOOL8 v655; // x0
  __int64 v656; // x1
  _QWORD *v657; // x8
  int32_t v658; // w22
  Il2CppObject *v659; // x24
  __int64 v660; // x10
  Il2CppObject *v661; // x23
  _BOOL8 v662; // x0
  __int64 v663; // x1
  TerminalPramsManager_c *v664; // x0
  struct TerminalPramsManager_StaticFields *v665; // x8
  System_Collections_Generic_List_int__o *v666; // x0
  __int64 v667; // x1
  struct System_Int32_array *v668; // x9
  _QWORD *v669; // x10
  __int64 v670; // x11
  System_Collections_Generic_List_int__o *v671; // x0
  struct System_Int32_array *v672; // x8
  _QWORD *v673; // x9
  __int64 v674; // x10
  UnityEngine_GameObject_o *v675; // x0
  __int64 v676; // x1
  __int64 v677; // x8
  __int64 v678; // x8
  UnityEngine_Object_o *v679; // x22
  int v680; // w25
  int v681; // w26
  _BOOL8 v682; // x0
  __int64 v683; // x1
  TerminalPramsManager_c *v684; // x0
  __int64 v685; // x8
  System_Collections_IEnumerable_o **v686; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v687; // x23
  QuestAfterAction_StateMain___c_c *v688; // x8
  System_Func_object__bool__o *_9__16_35; // x24
  Il2CppObject *v690; // x25
  struct QuestAfterAction_StateMain___c_StaticFields *v691; // x0
  int32_t v692; // w2
  int32_t v693; // w3
  System_String_o *v694; // x4
  int32_t v695; // w5
  int64_t v696; // x6
  System_String_o *v697; // x7
  char v698; // w23
  __int64 v699; // x8
  _QWORD *v700; // x8
  int32_t v701; // w24
  Il2CppObject *v702; // x26
  __int64 v703; // x10
  Il2CppObject *v704; // x25
  _BOOL8 v705; // x0
  __int64 v706; // x1
  TerminalPramsManager_c *v707; // x0
  System_Collections_Generic_List_int__o *v708; // x0
  _BOOL8 v709; // x0
  __int64 v710; // x1
  TitleInfoEventItemControl_o *v711; // x0
  UnityEngine_GameObject_o *v712; // x0
  __int64 v713; // x1
  __int64 v714; // x0
  __int64 v715; // x1
  Il2CppObject *v716; // x21
  float AnimTime; // s0
  const MethodInfo *v718; // x3
  Il2CppClass *v719; // x8
  QuestAfterAction_StateMain_c *v720; // x8
  int v721; // w0
  Il2CppObject *v722; // x21
  const MethodInfo *v723; // x3
  Il2CppObject *v724; // x21
  const MethodInfo *v725; // x3
  Il2CppClass *v726; // x8
  Il2CppObject *v727; // x0
  int32_t v728; // w2
  int32_t v729; // w3
  System_String_o *v730; // x4
  int32_t v731; // w5
  int64_t v732; // x6
  System_String_o *v733; // x7
  UnityEngine_Object_o *v734; // x22
  MapGimmickComponent_o *v735; // x21
  System_Action_o *v736; // x0
  System_Action_o *v737; // x22
  MapGimmickComponent_o *v738; // x0
  System_Action_o *v739; // x2
  Il2CppObject *v740; // x0
  MapGimmickComponent_o **v741; // x22
  int32_t v742; // w2
  int32_t v743; // w3
  System_String_o *v744; // x4
  int32_t v745; // w5
  int64_t v746; // x6
  System_String_o *v747; // x7
  UnityEngine_Object_o *v748; // x24
  MapGimmickComponent_o *v749; // x24
  const MethodInfo *v750; // x3
  System_Action_o *v751; // x0
  System_Action_o *v752; // x21
  __int64 v753; // x20
  int32_t v754; // w2
  int32_t v755; // w3
  System_String_o *v756; // x4
  int32_t v757; // w5
  int64_t v758; // x6
  System_String_o *v759; // x7
  __int64 v760; // x8
  QuestAfterAction_o *v761; // x22
  Il2CppObject *v762; // x0
  int32_t v763; // w2
  int32_t v764; // w3
  System_String_o *v765; // x4
  int32_t v766; // w5
  int64_t v767; // x6
  System_String_o *v768; // x7
  UnityEngine_Object_o *v769; // x19
  srcLineSprite_o *v770; // x19
  System_Action_o *v771; // x21
  int32_t v772; // w1
  __int64 v773; // x20
  int32_t v774; // w2
  int32_t v775; // w3
  System_String_o *v776; // x4
  int32_t v777; // w5
  int64_t v778; // x6
  System_String_o *v779; // x7
  __int64 v780; // x8
  QuestAfterAction_o *v781; // x22
  Il2CppObject *v782; // x0
  int32_t v783; // w2
  int32_t v784; // w3
  System_String_o *v785; // x4
  int32_t v786; // w5
  int64_t v787; // x6
  System_String_o *v788; // x7
  UnityEngine_Object_o *v789; // x19
  __int64 v790; // x20
  int32_t v791; // w2
  int32_t v792; // w3
  System_String_o *v793; // x4
  int32_t v794; // w5
  int64_t v795; // x6
  System_String_o *v796; // x7
  __int64 v797; // x8
  QuestAfterAction_o *v798; // x22
  Il2CppObject *v799; // x0
  int32_t v800; // w2
  int32_t v801; // w3
  System_String_o *v802; // x4
  int32_t v803; // w5
  int64_t v804; // x6
  System_String_o *v805; // x7
  UnityEngine_Object_o *v806; // x19
  UnityEngine_Object_o *v807; // x21
  int v808; // w9
  UnityEngine_Object_o *v809; // x21
  UnityEngine_Object_o *v810; // x21
  float v811; // s10
  float v812; // s9
  float v813; // s8
  System_String_o *v814; // x24
  __int64 v815; // x8
  ScrTerminalMap_o *v816; // x21
  System_Action_o *v817; // x23
  MapCamera_o *v818; // x20
  int32_t v819; // w0
  int32_t v820; // w23
  SceneJumpInfo_o *v821; // x22
  System_Action_o *v822; // x20
  const MethodInfo *v823; // x3
  MapGimmickComponent_o *v824; // x0
  float v827; // s3
  int32_t v828; // w1
  System_Action_o *v829; // x2
  System_String_o *v830; // x20
  const MethodInfo *v831; // x3
  __int64 v832; // x8
  const MethodInfo *v833; // x3
  MapCamera_o *mMapCamera; // x20
  QuestAfterAction_o *v841; // x8
  MapCamera_o *v842; // x0
  int v845; // w8
  MapCamera_o *v846; // x20
  QuestAfterAction_o *v847; // x8
  float v848; // s3
  QuestAfterAction_o *v849; // x8
  __int64 v850; // x8
  ScrTerminalMap_o *v851; // x22
  float v852; // s0
  float v853; // s9
  float v854; // s0
  float v855; // s8
  const MethodInfo *v856; // x3
  int32_t v857; // w21
  System_Action_o *v858; // x22
  float v859; // s0
  System_Nullable_float__o v860; // x3
  float v861; // s0
  MapCamera_o *v862; // x0
  float v863; // s0
  System_Action_o *v864; // x21
  System_Nullable_float__o v865; // x3
  float v866; // s0
  MapCamera_o *v867; // x0
  int32_t v868; // w4
  MapCamera_o *v869; // x20
  float v870; // s0
  float v871; // s0
  float v872; // s0
  float v873; // s0
  float v874; // s1
  float v875; // s2
  int32_t onClickOkSeKind; // [xsp+10h] [xbp-140h]
  int32_t v877; // [xsp+48h] [xbp-108h]
  int32_t sec; // [xsp+4Ch] [xbp-104h]
  int32_t seca; // [xsp+4Ch] [xbp-104h]
  float secb; // [xsp+4Ch] [xbp-104h]
  bool secc; // [xsp+4Ch] [xbp-104h]
  System_Collections_Generic_List_Enumerator_object__o v882; // [xsp+50h] [xbp-100h] BYREF
  System_Nullable_float__o size; // [xsp+68h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v884; // [xsp+70h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+90h] [xbp-C0h] BYREF
  Il2CppObject *value; // [xsp+A8h] [xbp-A8h] BYREF
  Il2CppObject *entity; // [xsp+B0h] [xbp-A0h] BYREF
  UnityEngine_Color_o color; // [xsp+B8h] [xbp-98h] BYREF
  bool isQuickUpdate[4]; // [xsp+CCh] [xbp-84h] BYREF
  UnityEngine_Vector3_o v890; // 0:kr00_12.12
  UnityEngine_Vector3_o v891; // 0:kr14_12.12
  UnityEngine_Vector3_o v892; // 0:kr20_12.12
  UnityEngine_Vector3_o v893; // 0:kr34_12.12
  UnityEngine_Vector3_o v894; // 0:kr40_12.12
  UnityEngine_Vector3_o v895; // 0:kr54_12.12
  UnityEngine_Vector3_o v896; // 0:kr60_12.12
  UnityEngine_Vector3_o LocalPosition; // 0:kr74_12.12
  UnityEngine_Vector3_o v898; // 0:kr80_12.12
  UnityEngine_Vector3_o Position; // 0:kr94_12.12
  UnityEngine_Vector3_o v900; // 0:krA0_12.12
  UnityEngine_Vector3_o v901; // 0:krB4_12.12
  UnityEngine_Vector3_o v902; // 0:krC0_12.12
  System_Nullable_Vector3__o v903; // 0:x0.16
  System_Nullable_Vector3__o v904; // 0:x0.16
  System_Nullable_Vector3__o v905; // 0:x0.16
  System_Nullable_Vector3__o v906; // 0:x0.16
  System_Nullable_Vector3__o v907; // 0:x0.16
  System_Nullable_Vector3__o v908; // 0:x1.16
  System_Nullable_Vector3__o v909; // 0:x1.16
  UnityEngine_Vector3_o v910; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v911; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v912; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v913; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v914; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v915; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v916; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4D2D4B5 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&BgmManager_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1C93AD4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_TitleInfoEventRaidBossComponent___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_OfType_TitleInfoEventRaidBossComponent___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__get_Current__);
    sub_1C93AD4(&FSUtility_TypeInfo);
    sub_1C93AD4(&System_Func_TitleInfoEventRaidBossComponent__bool__TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_TitleInfoEventRaidStatusComponent__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_NetworkManager_getRequest_BattleSetupScenarioRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_System_Nullable_Vector3___ctor__);
    sub_1C93AD4(&Method_System_Nullable_float___ctor__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
    sub_1C93AD4(&Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
    sub_1C93AD4(&Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
    sub_1C93AD4(&Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
    sub_1C93AD4(&QuestAfterAction_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C93AD4(&SceneJumpInfo_TypeInfo);
    sub_1C93AD4(&SeManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1C93AD4(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1C93AD4(&SoundManager_TypeInfo);
    sub_1C93AD4(&Method_QuestAfterAction_StateMain_UpdateAnim__);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    sub_1C93AD4(&QuestAfterAction_TitleInfoControlParam_TypeInfo);
    sub_1C93AD4(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_1C93AD4(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_22__);
    sub_1C93AD4(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_35__);
    sub_1C93AD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__);
    sub_1C93AD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__);
    sub_1C93AD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__);
    sub_1C93AD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__23__);
    sub_1C93AD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__29__);
    sub_1C93AD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__30__);
    sub_1C93AD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__31__);
    sub_1C93AD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__);
    sub_1C93AD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__33__);
    sub_1C93AD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__);
    sub_1C93AD4(&QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo);
    sub_1C93AD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__13__);
    sub_1C93AD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__14__);
    sub_1C93AD4(&QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo);
    sub_1C93AD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__15__);
    sub_1C93AD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__16__);
    sub_1C93AD4(&QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo);
    sub_1C93AD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__17__);
    sub_1C93AD4(&QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo);
    sub_1C93AD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__18__);
    sub_1C93AD4(&QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo);
    sub_1C93AD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__20__);
    sub_1C93AD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__21__);
    sub_1C93AD4(&QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo);
    sub_1C93AD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__24__);
    sub_1C93AD4(&QuestAfterAction_StateMain___c__DisplayClass16_16_TypeInfo);
    sub_1C93AD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_17__UpdateAnim_b__34__);
    sub_1C93AD4(&QuestAfterAction_StateMain___c__DisplayClass16_17_TypeInfo);
    sub_1C93AD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__);
    sub_1C93AD4(&QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo);
    sub_1C93AD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__);
    sub_1C93AD4(&QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo);
    sub_1C93AD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__);
    sub_1C93AD4(&QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo);
    sub_1C93AD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__);
    sub_1C93AD4(&QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo);
    sub_1C93AD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__);
    sub_1C93AD4(&QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo);
    sub_1C93AD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__);
    sub_1C93AD4(&QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo);
    sub_1C93AD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__);
    sub_1C93AD4(&QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo);
    sub_1C93AD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__);
    sub_1C93AD4(&QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo);
    sub_1C93AD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__);
    sub_1C93AD4(&QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo);
    sub_1C93AD4(&QuestAfterAction_StateMain___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_87/*"\r\n"*/);
    sub_1C93AD4(&StringLiteral_1374/*"30101"*/);
    sub_1C93AD4(&StringLiteral_10898/*"QUEST_AFTER_ACTION_MESSAGE_"*/);
    sub_1C93AD4(&StringLiteral_1375/*"30102"*/);
    sub_1C93AD4(&StringLiteral_1301/*"10703"*/);
    sub_1C93AD4(&StringLiteral_809/*","*/);
    sub_1C93AD4(&StringLiteral_3311/*"CAPTER WAIT"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_20075/*"gevINFOBAR_BACK"*/);
    sub_1C93AD4(&StringLiteral_1116/*"0"*/);
    byte_4D2D4B5 = 1;
  }
  isQuickUpdate[0] = 0;
  *(_QWORD *)&color.fields.r = 0;
  *(_QWORD *)&color.fields.b = 0;
  value = 0;
  entity = 0;
  memset(&i, 0, sizeof(i));
  memset(&v884, 0, sizeof(v884));
  v5 = sub_1C93D20(QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo);
  QuestAfterAction_StateMain___c__DisplayClass16_0___ctor((QuestAfterAction_StateMain___c__DisplayClass16_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_1425;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = that;
  v14 = (QuestAfterAction_o **)(v5 + 24);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)that, v15, v16, v17, v18, v19, v20);
  if ( this->fields.IsAnimDoing )
    return;
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._10_get_CommandBuf.methodPtr)(
              this,
              this->klass->vtable._10_get_CommandBuf.method);
  if ( !updated )
    return;
  if ( !*v14 )
    goto LABEL_1425;
  if ( (*v14)->fields.isSkippedNext )
  {
    updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
                this,
                this->klass->vtable._14_EndAnim.method);
    if ( !*v14 )
      goto LABEL_1425;
    (*v14)->fields.isSkippedNext = 0;
    return;
  }
  klass = this->klass;
  this->fields.IsAnimDoing = 1;
  v22 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))klass->vtable._10_get_CommandBuf.methodPtr)(
          this,
          klass->vtable._10_get_CommandBuf.method);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._11_get_CommandIndex.methodPtr)(
              this,
              this->klass->vtable._11_get_CommandIndex.method);
  if ( !v22 )
    goto LABEL_1425;
  if ( (unsigned int)updated >= *(_DWORD *)(v22 + 24) )
    goto LABEL_1426;
  v23 = *(QuestAfterAction_Command_o **)(v22 + 8LL * (int)updated + 32);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_Command_o *, const MethodInfo *))this->klass->vtable._9_IsUsableCommand.methodPtr)(
              this,
              v23,
              this->klass->vtable._9_IsUsableCommand.method);
  if ( (updated & 1) == 0 )
    goto LABEL_1321;
  isQuickUpdate[0] = 0;
  v24 = *v14;
  if ( !*v14 )
    goto LABEL_1425;
  PlanetEarthQuestAfterAction_k__BackingField = v24->fields._PlanetEarthQuestAfterAction_k__BackingField;
  v26 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
  if ( !PlanetEarthQuestAfterAction_k__BackingField )
    goto LABEL_1425;
  updated = BlankEarthQuestAfterAction__UpdateAnim(
              PlanetEarthQuestAfterAction_k__BackingField,
              v24,
              v23,
              v26,
              isQuickUpdate,
              0);
  if ( (updated & 1) != 0 )
    goto LABEL_20;
  v27 = *v14;
  if ( !*v14 )
    goto LABEL_1425;
  BlankEarthQuestAfterAction_k__BackingField = v27->fields._BlankEarthQuestAfterAction_k__BackingField;
  v29 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v29, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
  if ( !BlankEarthQuestAfterAction_k__BackingField )
    goto LABEL_1425;
  updated = BlankEarthQuestAfterAction__UpdateAnim(
              BlankEarthQuestAfterAction_k__BackingField,
              v27,
              v23,
              v29,
              isQuickUpdate,
              0);
  if ( (updated & 1) != 0 )
  {
LABEL_20:
    if ( isQuickUpdate[0] )
      goto LABEL_21;
    return;
  }
  if ( !v23 )
    goto LABEL_1425;
  id = v23->fields.id;
  if ( id > 540 )
  {
    if ( id > 850 )
    {
      if ( id <= 1100 )
      {
        if ( id == 851 )
        {
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4D2A6EE )
          {
            sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
            byte_4D2A6EE = 1;
          }
          v139 = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v139 = TerminalSceneComponent_TypeInfo;
          }
          mInstance = v139->static_fields->mInstance;
          updated = (__int64)QuestAfterAction_Command__GetBgmName(v23, v7);
          if ( !mInstance )
            goto LABEL_1425;
          TerminalSceneComponent__playBgm(mInstance, (System_String_o *)updated, 0, 0);
          if ( !*v14 )
            goto LABEL_1425;
          (*v14)->fields.isRequestedStopBgm = 0;
          goto LABEL_21;
        }
        if ( id == 900 )
        {
          v138 = (float)System_Int32__Parse(v23->fields.param, 0) / 1000.0;
          if ( v138 <= 0.0 )
            goto LABEL_21;
          this->fields.waitTime = v138;
          this->fields.waitStartTime = UnityEngine_Time__get_realtimeSinceStartup(0);
          return;
        }
        if ( id != 1100 )
          goto LABEL_21;
        v42 = sub_1C93D20(QuestAfterAction_StateMain___c__DisplayClass16_17_TypeInfo);
        QuestAfterAction_StateMain___c__DisplayClass16_17___ctor(
          (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)v42,
          0);
        if ( !v42 )
          goto LABEL_1425;
        *(_QWORD *)(v42 + 24) = v5;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v42 + 24), v5, v43, v44, v45, v46, v47, v48);
        updated = (__int64)v23->fields.param;
        if ( !updated )
          goto LABEL_1425;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
        if ( !updated )
          goto LABEL_1425;
        v49 = updated;
        if ( *(_DWORD *)(updated + 24) )
        {
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
          if ( *(_DWORD *)(v49 + 24) > 1u )
          {
            v50 = updated;
            v51 = System_Int32__Parse(*(System_String_o **)(v49 + 40), 0);
            if ( !BgmManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
            if ( !byte_4D2B5DC )
            {
              sub_1C93AD4(&BgmManager_TypeInfo);
              byte_4D2B5DC = 1;
            }
            v52 = BgmManager_TypeInfo;
            if ( !BgmManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
              v52 = BgmManager_TypeInfo;
            }
            v53 = -1.0;
            masterVolume = v52->static_fields->masterVolume;
            *(float *)(v42 + 20) = masterVolume;
            if ( *(int *)(v49 + 24) >= 3 )
            {
              v53 = System_Single__Parse(*(System_String_o **)(v49 + 48), 0);
              masterVolume = *(float *)(v42 + 20);
            }
            v55 = v53 * masterVolume;
            *(float *)(v42 + 16) = v55;
            if ( v55 > -1.0 )
            {
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4D2A6EE )
              {
                sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
                byte_4D2A6EE = 1;
              }
              updated = (__int64)TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                updated = (__int64)TerminalSceneComponent_TypeInfo;
              }
              v56 = **(_QWORD **)(updated + 184);
              if ( !v56 )
                goto LABEL_1425;
              v57 = *(ScrTerminalListTop_o **)(v56 + 256);
              v58 = *(float *)(v42 + 16);
              v59 = *(float *)(v42 + 20);
              updated = (__int64)QuestAfterAction_TypeInfo;
              if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
              if ( !v57 )
                goto LABEL_1425;
              ScrTerminalListTop__StartEasingBgmMasterVolume(
                v57,
                v59,
                v58,
                QuestAfterAction_TypeInfo->static_fields->EventAnimationAfterBgmResetTime,
                2,
                0,
                0);
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4D2A6EE )
            {
              sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
              byte_4D2A6EE = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v60 = **(_QWORD **)(updated + 184);
            if ( !v60 )
              goto LABEL_1425;
            v61 = *(ScrTerminalListTop_o **)(v60 + 256);
            v62 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
            System_Action___ctor(
              v62,
              (Il2CppObject *)v42,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_17__UpdateAnim_b__34__,
              0);
            if ( !v61 )
              goto LABEL_1425;
            ScrTerminalListTop__StartEventEffect(v61, v50, v51, v62, 0, 0);
            return;
          }
        }
        goto LABEL_1426;
      }
      if ( id > 1300 )
      {
        if ( id <= 1310 )
        {
          if ( id != 1301 )
          {
            if ( id != 1310 )
              goto LABEL_21;
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1425;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1425;
            v32 = updated;
            if ( *(_DWORD *)(updated + 24) )
            {
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
              if ( *(_DWORD *)(v32 + 24) > 1u )
              {
                v33 = updated;
                sec = System_Int32__Parse(*(System_String_o **)(v32 + 40), 0);
                if ( *(int *)(v32 + 24) >= 3 )
                {
                  v34 = System_Int32__Parse(*(System_String_o **)(v32 + 48), 0) > 0;
                  if ( *(int *)(v32 + 24) >= 4 )
                  {
                    v612 = System_Int32__Parse(*(System_String_o **)(v32 + 56), 0) > 0;
                    goto LABEL_992;
                  }
                }
                else
                {
                  v34 = 0;
                }
                v612 = 0;
LABEL_992:
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                if ( !byte_4D2A6EE )
                {
                  sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
                  byte_4D2A6EE = 1;
                }
                updated = (__int64)TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v627 = **(_QWORD **)(updated + 184);
                if ( !v627 )
                  goto LABEL_1425;
                v628 = *(_QWORD *)(v627 + 256);
                if ( !v628 )
                  goto LABEL_1425;
                v629 = *(UnityEngine_Object_o **)(v628 + 128);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality(v629, 0, 0);
                if ( (updated & 1) != 0 )
                  goto LABEL_21;
                if ( !v629 )
                  goto LABEL_1425;
                updated = (__int64)v629[14].monitor;
                if ( !updated )
                  goto LABEL_1425;
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v882,
                  (System_Collections_Generic_List_object__o *)updated,
                  (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_TitleInfoEventRaidStatusComponent__GetEnumerator__);
                i = v882;
                while ( 1 )
                {
                  v630 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                           &i,
                           (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__MoveNext__);
                  if ( !v630 )
                  {
                    System_Collections_Generic_List_Enumerator_object___Dispose(
                      &i,
                      (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__Dispose__);
                    monitor = v629[15].monitor;
                    if ( monitor )
                    {
                      updated = monitor[9];
                      if ( updated )
                      {
                        System_Collections_Generic_List_object___GetEnumerator(
                          (System_Collections_Generic_List_Enumerator_T__o *)&v882,
                          (System_Collections_Generic_List_object__o *)updated,
                          (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
                        v884 = v882;
                        v633 = 0;
                        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                                  &v884,
                                  (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__) )
                        {
                          current = v884.fields._current;
                          if ( v884.fields._current
                            && (naturalAligment = TitleInfoEventRaidBossComponent_TypeInfo->_2.naturalAligment,
                                v884.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
                          {
                            if ( (TitleInfoEventRaidBossComponent_c *)v884.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == TitleInfoEventRaidBossComponent_TypeInfo )
                              v636 = v884.fields._current;
                            else
                              v636 = 0;
                          }
                          else
                          {
                            v636 = 0;
                          }
                          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                          v637 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v636, 0, 0);
                          if ( v637 )
                          {
                            if ( v612 )
                              goto LABEL_1029;
                            if ( !v636 )
                              sub_1C93D2C(v637, v638);
                            if ( sec == LODWORD(v636[23].klass) )
                            {
LABEL_1029:
                              v639 = TerminalPramsManager_TypeInfo;
                              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                              {
                                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                                v639 = TerminalPramsManager_TypeInfo;
                              }
                              if ( !v636 )
                                sub_1C93D2C(v639, v638);
                              static_fields = v639->static_fields;
                              nonFrameInBossHpUiIndex = static_fields->nonFrameInBossHpUiIndex;
                              if ( !nonFrameInBossHpUiIndex )
                                sub_1C93D2C(0, v638);
                              klass_low = LODWORD(v636[23].klass);
                              items = nonFrameInBossHpUiIndex->fields._items;
                              v644 = Method_System_Collections_Generic_List_int__Add__;
                              ++nonFrameInBossHpUiIndex->fields._version;
                              if ( !items )
                                sub_1C93D2C(nonFrameInBossHpUiIndex, klass_low);
                              v645 = nonFrameInBossHpUiIndex->fields._size;
                              if ( (unsigned int)v645 >= LODWORD(items->max_length) )
                              {
                                System_Collections_Generic_List_int___AddWithResize(
                                  nonFrameInBossHpUiIndex,
                                  klass_low,
                                  *(const MethodInfo_385C978 **)(*(_QWORD *)(v644[4] + 192LL) + 112LL));
                                static_fields = TerminalPramsManager_TypeInfo->static_fields;
                              }
                              else
                              {
                                nonFrameInBossHpUiIndex->fields._size = v645 + 1;
                                items->m_Items[v645] = klass_low;
                              }
                              RaidBossHpForceHideGroupIndexList = static_fields->RaidBossHpForceHideGroupIndexList;
                              if ( !RaidBossHpForceHideGroupIndexList )
                                sub_1C93D2C(0, klass_low);
                              v647 = RaidBossHpForceHideGroupIndexList->fields._items;
                              v648 = Method_System_Collections_Generic_List_int__Add__;
                              ++RaidBossHpForceHideGroupIndexList->fields._version;
                              if ( !v647 )
                                sub_1C93D2C(RaidBossHpForceHideGroupIndexList, klass_low);
                              v649 = RaidBossHpForceHideGroupIndexList->fields._size;
                              if ( (unsigned int)v649 >= LODWORD(v647->max_length) )
                              {
                                System_Collections_Generic_List_int___AddWithResize(
                                  RaidBossHpForceHideGroupIndexList,
                                  v633,
                                  *(const MethodInfo_385C978 **)(*(_QWORD *)(v648[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                RaidBossHpForceHideGroupIndexList->fields._size = v649 + 1;
                                v647->m_Items[v649] = v633;
                              }
                              if ( v612 )
                              {
                                if ( !current )
                                  sub_1C93D2C(RaidBossHpForceHideGroupIndexList, klass_low);
                                gameObject = UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)current,
                                               0);
                                if ( !gameObject )
                                  sub_1C93D2C(0, v651);
                                UnityEngine_GameObject__SetActive(gameObject, 1, 0);
                                TitleInfoEventRaidBossComponent__PlayFrameOutBoss(
                                  (TitleInfoEventRaidBossComponent_o *)v636,
                                  0,
                                  0);
                              }
                            }
                          }
                          ++v633;
                        }
                        goto LABEL_1193;
                      }
LABEL_1425:
                      sub_1C93D2C(updated, v7);
                    }
LABEL_21:
                    ((void (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
                      this,
                      this->klass->vtable._14_EndAnim.method);
LABEL_22:
                    ((void (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_o *, const MethodInfo *))this->klass->vtable._13_UpdateAnim.methodPtr)(
                      this,
                      *v14,
                      this->klass->vtable._13_UpdateAnim.method);
                    return;
                  }
                  if ( v34 )
                    break;
                  if ( !i.fields._current )
                    sub_1C93D2C(v630, v631);
                  if ( v33 == LODWORD(i.fields._current[9].monitor) )
LABEL_1012:
                    TitleInfoEventRaidStatusComponent__FrameOut(
                      (TitleInfoEventRaidStatusComponent_o *)i.fields._current,
                      0,
                      0,
                      0);
                }
                if ( !i.fields._current )
                  sub_1C93D2C(v630, v631);
                goto LABEL_1012;
              }
            }
            goto LABEL_1426;
          }
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1425;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1425;
          v266 = updated;
          if ( !*(_DWORD *)(updated + 24) )
            goto LABEL_1426;
          v267 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
          v268 = *(int *)(v266 + 24) >= 2 && System_Int32__Parse(*(System_String_o **)(v266 + 40), 0) > 0;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4D2A6EE )
          {
            sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
            byte_4D2A6EE = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v606 = **(_QWORD **)(updated + 184);
          if ( !v606 )
            goto LABEL_1425;
          v607 = *(_QWORD *)(v606 + 256);
          if ( !v607 )
            goto LABEL_1425;
          updated = *(_QWORD *)(v607 + 128);
          if ( !updated )
            goto LABEL_1425;
          updated = (__int64)TitleInfoControl__GetEnableEventUiObjectList((TitleInfoControl_o *)updated, 1, 0);
          if ( !updated )
            goto LABEL_1425;
          v608 = *(_QWORD *)(updated + 24);
          v609 = updated;
          if ( (int)v608 < 1 )
            goto LABEL_21;
          v610 = 0;
          while ( 1 )
          {
            if ( v610 >= (unsigned int)v608 )
              goto LABEL_1426;
            updated = *(_QWORD *)(v609 + 32 + 8 * v610);
            if ( v268 )
            {
              if ( !updated )
                goto LABEL_1425;
            }
            else
            {
              if ( !updated )
                goto LABEL_1425;
              v611 = *(_QWORD *)(updated + 64);
              if ( !v611 )
                goto LABEL_1425;
              if ( v267 != *(_DWORD *)(v611 + 16) )
                goto LABEL_919;
            }
            updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)updated, 0);
            if ( !updated )
              goto LABEL_1425;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)updated, 1, 0);
LABEL_919:
            LODWORD(v608) = *(_DWORD *)(v609 + 24);
            if ( (__int64)++v610 >= (int)v608 )
              goto LABEL_21;
          }
        }
        if ( id != 1311 )
        {
          if ( id != 1312 )
            goto LABEL_21;
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1425;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1425;
          v141 = updated;
          if ( !*(_DWORD *)(updated + 24) )
            goto LABEL_1426;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
          if ( *(_DWORD *)(v141 + 24) <= 1u )
            goto LABEL_1426;
          v142 = updated;
          seca = System_Int32__Parse(*(System_String_o **)(v141 + 40), 0);
          if ( *(int *)(v141 + 24) >= 3 )
          {
            v143 = System_Int32__Parse(*(System_String_o **)(v141 + 48), 0) > 0;
            if ( *(int *)(v141 + 24) >= 4 )
            {
              v613 = System_Int32__Parse(*(System_String_o **)(v141 + 56), 0) > 0;
              goto LABEL_1048;
            }
          }
          else
          {
            v143 = 0;
          }
          v613 = 0;
LABEL_1048:
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4D2A6EE )
          {
            sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
            byte_4D2A6EE = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v652 = **(_QWORD **)(updated + 184);
          if ( !v652 )
            goto LABEL_1425;
          v653 = *(_QWORD *)(v652 + 256);
          if ( !v653 )
            goto LABEL_1425;
          v654 = *(UnityEngine_Object_o **)(v653 + 128);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality(v654, 0, 0);
          if ( (updated & 1) != 0 )
            goto LABEL_21;
          if ( !v654 )
            goto LABEL_1425;
          updated = (__int64)v654[14].monitor;
          if ( !updated )
            goto LABEL_1425;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v882,
            (System_Collections_Generic_List_object__o *)updated,
            (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_TitleInfoEventRaidStatusComponent__GetEnumerator__);
          i = v882;
          while ( 1 )
          {
            v655 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &i,
                     (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__MoveNext__);
            if ( !v655 )
            {
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &i,
                (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__Dispose__);
              v657 = v654[15].monitor;
              if ( !v657 )
                goto LABEL_21;
              updated = v657[9];
              if ( !updated )
                goto LABEL_1425;
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v882,
                (System_Collections_Generic_List_object__o *)updated,
                (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
              v884 = v882;
              v658 = 0;
              while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v884,
                        (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__) )
              {
                v659 = v884.fields._current;
                if ( v884.fields._current
                  && (v660 = TitleInfoEventRaidBossComponent_TypeInfo->_2.naturalAligment,
                      v884.fields._current->klass->_2.naturalAligment >= (unsigned int)v660) )
                {
                  if ( (TitleInfoEventRaidBossComponent_c *)v884.fields._current->klass->_2.typeHierarchy[v660 - 1] == TitleInfoEventRaidBossComponent_TypeInfo )
                    v661 = v884.fields._current;
                  else
                    v661 = 0;
                }
                else
                {
                  v661 = 0;
                }
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                v662 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v661, 0, 0);
                if ( v662 )
                {
                  if ( v613 )
                    goto LABEL_1085;
                  if ( !v661 )
                    sub_1C93D2C(v662, v663);
                  if ( seca == LODWORD(v661[23].klass) )
                  {
LABEL_1085:
                    v664 = TerminalPramsManager_TypeInfo;
                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                      v664 = TerminalPramsManager_TypeInfo;
                    }
                    if ( !v661 )
                      sub_1C93D2C(v664, v663);
                    v665 = v664->static_fields;
                    v666 = v665->nonFrameInBossHpUiIndex;
                    if ( !v666 )
                      sub_1C93D2C(0, v663);
                    v667 = LODWORD(v661[23].klass);
                    v668 = v666->fields._items;
                    v669 = Method_System_Collections_Generic_List_int__Add__;
                    ++v666->fields._version;
                    if ( !v668 )
                      sub_1C93D2C(v666, v667);
                    v670 = v666->fields._size;
                    if ( (unsigned int)v670 >= LODWORD(v668->max_length) )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        v666,
                        v667,
                        *(const MethodInfo_385C978 **)(*(_QWORD *)(v669[4] + 192LL) + 112LL));
                      v665 = TerminalPramsManager_TypeInfo->static_fields;
                    }
                    else
                    {
                      v666->fields._size = v670 + 1;
                      v668->m_Items[v670] = v667;
                    }
                    v671 = v665->RaidBossHpForceHideGroupIndexList;
                    if ( !v671 )
                      sub_1C93D2C(0, v667);
                    v672 = v671->fields._items;
                    v673 = Method_System_Collections_Generic_List_int__Add__;
                    ++v671->fields._version;
                    if ( !v672 )
                      sub_1C93D2C(v671, v667);
                    v674 = v671->fields._size;
                    if ( (unsigned int)v674 >= LODWORD(v672->max_length) )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        v671,
                        v658,
                        *(const MethodInfo_385C978 **)(*(_QWORD *)(v673[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v671->fields._size = v674 + 1;
                      v672->m_Items[v674] = v658;
                    }
                    if ( v613 )
                    {
                      if ( !v659 )
                        sub_1C93D2C(v671, v667);
                      v675 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v659, 0);
                      if ( !v675 )
                        sub_1C93D2C(0, v676);
                      UnityEngine_GameObject__SetActive(v675, 1, 0);
                      TitleInfoEventRaidBossComponent__PlayFrameOutBoss((TitleInfoEventRaidBossComponent_o *)v661, 1, 0);
                    }
                  }
                }
                ++v658;
              }
              goto LABEL_1193;
            }
            if ( v143 )
              break;
            if ( !i.fields._current )
              sub_1C93D2C(v655, v656);
            if ( v142 == LODWORD(i.fields._current[9].monitor) )
LABEL_1068:
              TitleInfoEventRaidStatusComponent__FrameOut(
                (TitleInfoEventRaidStatusComponent_o *)i.fields._current,
                0,
                1,
                0);
          }
          if ( !i.fields._current )
            sub_1C93D2C(v655, v656);
          goto LABEL_1068;
        }
        updated = (__int64)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          inited = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          updated = (__int64)TerminalPramsManager_TypeInfo;
        }
        v269 = *(_QWORD *)(*(_QWORD *)(updated + 184) + 880LL);
        if ( !v269 )
          goto LABEL_1425;
        v270 = *(_DWORD *)(v269 + 28) + 1;
        *(_DWORD *)(v269 + 24) = 0;
        *(_DWORD *)(v269 + 28) = v270;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          inited = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4D2A6EE )
        {
          sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
          byte_4D2A6EE = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          inited = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v271 = **(_QWORD **)(updated + 184);
        if ( !v271 )
          goto LABEL_1425;
        v272 = *(_QWORD *)(v271 + 256);
        if ( !v272 )
          goto LABEL_1425;
        v273 = *(_QWORD *)(v272 + 128);
        if ( !v273 )
          goto LABEL_1425;
        updated = *(_QWORD *)(v273 + 328);
        if ( !updated )
          goto LABEL_1425;
        (*(void (__fastcall **)(__int64, _QWORD, long double))(*(_QWORD *)updated + 440LL))(
          updated,
          *(_QWORD *)(*(_QWORD *)updated + 448LL),
          inited);
        updated = (__int64)v23->fields.param;
        if ( !updated )
          goto LABEL_1425;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
        if ( !updated )
          goto LABEL_1425;
        v274 = updated;
        if ( !*(_DWORD *)(updated + 24) )
          goto LABEL_1426;
        updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
        if ( *(_DWORD *)(v274 + 24) <= 1u )
          goto LABEL_1426;
        v275 = updated;
        v877 = System_Int32__Parse(*(System_String_o **)(v274 + 40), 0);
        if ( *(int *)(v274 + 24) >= 3 )
        {
          v276 = System_Int32__Parse(*(System_String_o **)(v274 + 48), 0) > 0;
          if ( *(int *)(v274 + 24) >= 4 )
          {
            secc = System_Int32__Parse(*(System_String_o **)(v274 + 56), 0) > 0;
            goto LABEL_1104;
          }
        }
        else
        {
          v276 = 0;
        }
        secc = 0;
LABEL_1104:
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4D2A6EE )
        {
          sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
          byte_4D2A6EE = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v677 = **(_QWORD **)(updated + 184);
        if ( !v677 )
          goto LABEL_1425;
        v678 = *(_QWORD *)(v677 + 256);
        if ( !v678 )
          goto LABEL_1425;
        v679 = *(UnityEngine_Object_o **)(v678 + 128);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        updated = UnityEngine_Object__op_Equality(v679, 0, 0);
        if ( (updated & 1) != 0 )
          goto LABEL_21;
        if ( !v679 )
          goto LABEL_1425;
        updated = (__int64)v679[14].monitor;
        if ( !updated )
          goto LABEL_1425;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v882,
          (System_Collections_Generic_List_object__o *)updated,
          (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_TitleInfoEventRaidStatusComponent__GetEnumerator__);
        v680 = 0;
        for ( i = v882;
              ;
              TitleInfoEventRaidStatusComponent__SetEntryAnim(
                (TitleInfoEventRaidStatusComponent_o *)i.fields._current,
                0) )
        {
          v681 = v680;
          while ( 1 )
          {
            v682 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &i,
                     (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__MoveNext__);
            if ( !v682 )
            {
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &i,
                (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__Dispose__);
              if ( (v680 & 1) != 0 )
              {
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4D2D4CA )
                {
                  sub_1C93AD4(&TerminalPramsManager_TypeInfo);
                  byte_4D2D4CA = 1;
                }
                v684 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v684 = TerminalPramsManager_TypeInfo;
                }
                if ( v684->static_fields->_RemainingRaidHpData_k__BackingField )
                {
                  if ( !v684->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(v684);
                  if ( !byte_4D2D4CA )
                  {
                    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
                    byte_4D2D4CA = 1;
                  }
                  updated = (__int64)TerminalPramsManager_TypeInfo;
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    updated = (__int64)TerminalPramsManager_TypeInfo;
                  }
                  v685 = *(_QWORD *)(*(_QWORD *)(updated + 184) + 440LL);
                  if ( !v685 )
                    goto LABEL_1425;
                  *(_BYTE *)(v685 + 64) = 1;
                }
              }
              v686 = (System_Collections_IEnumerable_o **)v679[15].monitor;
              if ( !v686 )
                goto LABEL_21;
              v687 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                            v686[9],
                                                                            (const MethodInfo_31D3358 *)Method_System_Linq_Enumerable_OfType_TitleInfoEventRaidBossComponent___);
              v688 = QuestAfterAction_StateMain___c_TypeInfo;
              if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
                v688 = QuestAfterAction_StateMain___c_TypeInfo;
              }
              _9__16_35 = (System_Func_object__bool__o *)v688->static_fields->__9__16_35;
              if ( !_9__16_35 )
              {
                if ( !v688->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v688);
                  v688 = QuestAfterAction_StateMain___c_TypeInfo;
                }
                v690 = (Il2CppObject *)v688->static_fields->__9;
                _9__16_35 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_TitleInfoEventRaidBossComponent__bool__TypeInfo);
                System_Func_object__bool____ctor(
                  _9__16_35,
                  v690,
                  Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_35__,
                  0);
                v691 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
                v691->__9__16_35 = (struct System_Func_TitleInfoEventRaidBossComponent__bool__o *)_9__16_35;
                sub_1C93A78(
                  (GrandQuestFolderBoardItem_o *)&v691->__9__16_35,
                  (int32_t)_9__16_35,
                  v692,
                  v693,
                  v694,
                  v695,
                  v696,
                  v697);
              }
              updated = System_Linq_Enumerable__Any_object__52110824(
                          v687,
                          (System_Func_TSource__bool__o *)_9__16_35,
                          (const MethodInfo_31B25E8 *)Method_System_Linq_Enumerable_Any_TitleInfoEventRaidBossComponent___);
              v698 = updated;
              if ( (updated & 1) != 0 && ((v681 ^ 1) & 1) != 0 )
              {
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4D2D4CA )
                {
                  sub_1C93AD4(&TerminalPramsManager_TypeInfo);
                  byte_4D2D4CA = 1;
                }
                updated = (__int64)TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  updated = (__int64)TerminalPramsManager_TypeInfo;
                }
                if ( *(_QWORD *)(*(_QWORD *)(updated + 184) + 440LL) )
                {
                  if ( !*(_DWORD *)(updated + 224) )
                    j_il2cpp_runtime_class_init_0(updated);
                  if ( !byte_4D2D4CA )
                  {
                    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
                    byte_4D2D4CA = 1;
                  }
                  updated = (__int64)TerminalPramsManager_TypeInfo;
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    updated = (__int64)TerminalPramsManager_TypeInfo;
                  }
                  v699 = *(_QWORD *)(*(_QWORD *)(updated + 184) + 440LL);
                  if ( !v699 )
                    goto LABEL_1425;
                  *(_BYTE *)(v699 + 64) = 1;
                }
              }
              v700 = v679[15].monitor;
              if ( !v700 )
                goto LABEL_1425;
              updated = v700[9];
              if ( !updated )
                goto LABEL_1425;
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v882,
                (System_Collections_Generic_List_object__o *)updated,
                (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
              v884 = v882;
              v701 = 0;
              while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                        &v884,
                        (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__) )
              {
                v702 = v884.fields._current;
                if ( v884.fields._current
                  && (v703 = TitleInfoEventRaidBossComponent_TypeInfo->_2.naturalAligment,
                      v884.fields._current->klass->_2.naturalAligment >= (unsigned int)v703) )
                {
                  if ( (TitleInfoEventRaidBossComponent_c *)v884.fields._current->klass->_2.typeHierarchy[v703 - 1] == TitleInfoEventRaidBossComponent_TypeInfo )
                    v704 = v884.fields._current;
                  else
                    v704 = 0;
                }
                else
                {
                  v704 = 0;
                }
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                v705 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v704, 0, 0);
                if ( v705 )
                {
                  if ( secc )
                    goto LABEL_1182;
                  if ( !v704 )
                    sub_1C93D2C(v705, v706);
                  if ( v877 == LODWORD(v704[23].klass) )
                  {
LABEL_1182:
                    v707 = TerminalPramsManager_TypeInfo;
                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                      v707 = TerminalPramsManager_TypeInfo;
                    }
                    v708 = v707->static_fields->RaidBossHpForceHideGroupIndexList;
                    if ( !v708 )
                      sub_1C93D2C(0, v706);
                    v709 = System_Collections_Generic_List_int___Remove(
                             v708,
                             v701,
                             (const MethodInfo_385DE74 *)Method_System_Collections_Generic_List_int__Remove__);
                    if ( (v698 & 1) != 0 )
                    {
                      v711 = (TitleInfoEventItemControl_o *)v679[15].monitor;
                      if ( !v711 )
                        sub_1C93D2C(0, v710);
                      TitleInfoEventItemControl__SetEventGroupIdx(v711, v701, 1, 0);
                    }
                    else
                    {
                      if ( !v702 )
                        sub_1C93D2C(v709, v710);
                      v712 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v702, 0);
                      if ( !v712 )
                        sub_1C93D2C(0, v713);
                      UnityEngine_GameObject__SetActive(v712, 1, 0);
                      if ( !v704 )
                        sub_1C93D2C(v714, v715);
                      TitleInfoEventRaidBossComponent__PlayFrameInBoss((TitleInfoEventRaidBossComponent_o *)v704, 0);
                    }
                  }
                }
                ++v701;
              }
LABEL_1193:
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v884,
                (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__);
              goto LABEL_21;
            }
            if ( v276 )
              break;
            if ( !i.fields._current )
              sub_1C93D2C(v682, v683);
            if ( v275 == LODWORD(i.fields._current[9].monitor) )
              goto LABEL_1125;
          }
          if ( !i.fields._current )
            sub_1C93D2C(v682, v683);
LABEL_1125:
          v680 = 1;
        }
      }
      if ( id != 1200 )
      {
        if ( id != 1300 )
          goto LABEL_21;
        updated = (__int64)v23->fields.param;
        if ( !updated )
          goto LABEL_1425;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
        if ( !updated )
          goto LABEL_1425;
        v101 = updated;
        if ( !*(_DWORD *)(updated + 24) )
          goto LABEL_1426;
        v102 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
        v103 = *(int *)(v101 + 24) >= 2 && System_Int32__Parse(*(System_String_o **)(v101 + 40), 0) > 0;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4D2A6EE )
        {
          sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
          byte_4D2A6EE = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v318 = **(_QWORD **)(updated + 184);
        if ( !v318 )
          goto LABEL_1425;
        v319 = *(_QWORD *)(v318 + 256);
        if ( !v319 )
          goto LABEL_1425;
        updated = *(_QWORD *)(v319 + 128);
        if ( !updated )
          goto LABEL_1425;
        updated = (__int64)TitleInfoControl__GetEnableEventUiObjectList((TitleInfoControl_o *)updated, 0, 0);
        if ( !updated )
          goto LABEL_1425;
        v320 = *(_QWORD *)(updated + 24);
        v321 = updated;
        if ( (int)v320 < 1 )
          goto LABEL_21;
        v322 = 0;
        while ( 1 )
        {
          if ( v322 >= (unsigned int)v320 )
            goto LABEL_1426;
          updated = *(_QWORD *)(v321 + 32 + 8 * v322);
          if ( v103 )
          {
            if ( !updated )
              goto LABEL_1425;
          }
          else
          {
            if ( !updated )
              goto LABEL_1425;
            v323 = *(_QWORD *)(updated + 64);
            if ( !v323 )
              goto LABEL_1425;
            if ( v102 != *(_DWORD *)(v323 + 16) )
              goto LABEL_510;
          }
          updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)updated, 0);
          if ( !updated )
            goto LABEL_1425;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)updated, 0, 0);
LABEL_510:
          LODWORD(v320) = *(_DWORD *)(v321 + 24);
          if ( (__int64)++v322 >= (int)v320 )
            goto LABEL_21;
        }
      }
      updated = (__int64)v23->fields.param;
      if ( !updated )
        goto LABEL_1425;
      updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
      if ( !updated )
        goto LABEL_1425;
      v215 = updated;
      if ( !*(_DWORD *)(updated + 24) )
        goto LABEL_1426;
      updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
      if ( *(_DWORD *)(v215 + 24) <= 1u )
        goto LABEL_1426;
      v216 = updated;
      v217 = System_Int32__Parse(*(System_String_o **)(v215 + 40), 0);
      if ( v216 == 2 )
      {
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4D2A6EE )
        {
          sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
          byte_4D2A6EE = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v622 = **(_QWORD **)(updated + 184);
        if ( !v622 )
          goto LABEL_1425;
        updated = *(_QWORD *)(v622 + 256);
        if ( !updated )
          goto LABEL_1425;
        v219 = 1;
        v221 = v217;
      }
      else
      {
        if ( v216 != 1 )
        {
          if ( v216 )
            goto LABEL_21;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4D2A6EE )
          {
            sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
            byte_4D2A6EE = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v218 = **(_QWORD **)(updated + 184);
          if ( !v218 )
            goto LABEL_1425;
          updated = *(_QWORD *)(v218 + 256);
          if ( !updated )
            goto LABEL_1425;
          v219 = 1;
          v220 = 1;
          v221 = v217;
          goto LABEL_966;
        }
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4D2A6EE )
        {
          sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
          byte_4D2A6EE = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v621 = **(_QWORD **)(updated + 184);
        if ( !v621 )
          goto LABEL_1425;
        updated = *(_QWORD *)(v621 + 256);
        if ( !updated )
          goto LABEL_1425;
        v221 = v217;
        v219 = 0;
      }
      v220 = 0;
LABEL_966:
      ScrTerminalListTop__SetQuestStateForEventEffect((ScrTerminalListTop_o *)updated, v221, v219, v220, 0);
      goto LABEL_21;
    }
    if ( id <= 604 )
    {
      switch ( id )
      {
        case 600:
          v76 = (System_String_o *)StringLiteral_1/*""*/;
          v77 = System_String__Concat_64425724((System_String_o *)StringLiteral_10898/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v23->fields.param, 0);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v78 = LocalizationManager__Get(v77, 0);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v80 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
          System_Action___ctor(
            v80,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__29__,
            0);
          if ( !Instance )
            goto LABEL_1425;
          CommonUI__OpenNotificationDialog(
            (CommonUI_o *)Instance,
            v76,
            v78,
            v80,
            210,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0.0,
            0,
            0);
          return;
        case 601:
          v254 = StringLiteral_1/*""*/;
          updated = sub_1C93B7C(string___TypeInfo, 1);
          if ( !updated )
            goto LABEL_1425;
          v261 = (System_String_array *)updated;
          if ( !*(_DWORD *)(updated + 24) )
            break;
          v262 = StringLiteral_87/*"\r\n"*/;
          *(_QWORD *)(updated + 32) = StringLiteral_87/*"\r\n"*/;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(updated + 32), v262, v255, v256, v257, v258, v259, v260);
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1425;
          updated = (__int64)System_String__Split_64478772((System_String_o *)updated, v261, 0, 0);
          if ( !updated )
            goto LABEL_1425;
          v263 = *(_DWORD *)(updated + 24);
          if ( v263 <= 0 )
            goto LABEL_1321;
          v264 = *(System_String_o **)(updated + 32);
          if ( v263 == 1 )
          {
            v265 = *(System_String_o **)(updated + 32);
            v264 = (System_String_o *)v254;
          }
          else
          {
            v265 = *(System_String_o **)(updated + 40);
          }
          v625 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v626 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
          System_Action___ctor(
            v626,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__30__,
            0);
          if ( !v625 )
            goto LABEL_1425;
          CommonUI__OpenNotificationDialog((CommonUI_o *)v625, v264, v265, v626, 210, 0, 0, 0, 1, 0, 1, 0, 0, 0.0, 0, 0);
          return;
        case 602:
          v239 = (System_String_o *)StringLiteral_1/*""*/;
          v240 = System_String__Concat_64425724((System_String_o *)StringLiteral_10898/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v23->fields.param, 0);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v241 = LocalizationManager__Get(v240, 0);
          v242 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v243 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
          System_Action___ctor(
            v243,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__31__,
            0);
          if ( !v242 )
            goto LABEL_1425;
          onClickOkSeKind = 0;
          goto LABEL_987;
        case 603:
          v244 = StringLiteral_1/*""*/;
          updated = sub_1C93B7C(string___TypeInfo, 1);
          if ( !updated )
            goto LABEL_1425;
          v251 = (System_String_array *)updated;
          if ( !*(_DWORD *)(updated + 24) )
            break;
          v252 = StringLiteral_87/*"\r\n"*/;
          *(_QWORD *)(updated + 32) = StringLiteral_87/*"\r\n"*/;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(updated + 32), v252, v245, v246, v247, v248, v249, v250);
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1425;
          updated = (__int64)System_String__Split_64478772((System_String_o *)updated, v251, 0, 0);
          if ( !updated )
            goto LABEL_1425;
          v253 = *(_DWORD *)(updated + 24);
          if ( v253 <= 0 )
            goto LABEL_1321;
          v239 = *(System_String_o **)(updated + 32);
          if ( v253 == 1 )
          {
            v241 = *(System_String_o **)(updated + 32);
            v239 = (System_String_o *)v244;
          }
          else
          {
            v241 = *(System_String_o **)(updated + 40);
          }
          v242 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v243 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
          System_Action___ctor(
            v243,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__,
            0);
          if ( !v242 )
            goto LABEL_1425;
          onClickOkSeKind = 1;
LABEL_987:
          CommonUI__OpenNotificationDialog_31582080(
            (CommonUI_o *)v242,
            v239,
            v241,
            v243,
            40.0,
            -162.5,
            210,
            0,
            0,
            0,
            1,
            28,
            onClickOkSeKind,
            0,
            1,
            0,
            0);
          return;
        case 604:
          v234 = (System_String_o *)StringLiteral_1/*""*/;
          v235 = System_String__Concat_64425724((System_String_o *)StringLiteral_10898/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v23->fields.param, 0);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v236 = LocalizationManager__Get(v235, 0);
          v237 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v238 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
          System_Action___ctor(
            v238,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__33__,
            0);
          if ( !v237 )
            goto LABEL_1425;
          CommonUI__OpenNotificationDialog_31582080(
            (CommonUI_o *)v237,
            v234,
            v236,
            v238,
            30.0,
            -162.5,
            210,
            0,
            0,
            0,
            1,
            30,
            0,
            0,
            1,
            0,
            0);
          return;
        default:
          if ( id != 560 )
            goto LABEL_21;
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1425;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1425;
          v135 = *(_QWORD *)(updated + 24);
          v136 = updated;
          if ( v135 )
          {
            if ( !(_DWORD)v135 )
              break;
            v137 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0) > 0;
          }
          else
          {
            v137 = 0;
          }
          v614 = sub_1C93D20(QuestAfterAction_TitleInfoControlParam_TypeInfo);
          System_Object___ctor((Il2CppObject *)v614, 0);
          if ( *(int *)(v136 + 24) < 2 )
            goto LABEL_933;
          updated = System_Int32__Parse(*(System_String_o **)(v136 + 40), 0);
          if ( (int)updated < 1 )
            goto LABEL_933;
          if ( *(_DWORD *)(v136 + 24) <= 1u )
            break;
          updated = System_Int32__Parse(*(System_String_o **)(v136 + 40), 0);
          if ( !v614 )
            goto LABEL_1425;
          *(_DWORD *)(v614 + 16) = updated;
LABEL_933:
          if ( *(int *)(v136 + 24) <= 2 )
            goto LABEL_938;
          updated = System_Int32__Parse(*(System_String_o **)(v136 + 48), 0);
          if ( (int)updated < 1 )
            goto LABEL_938;
          if ( *(_DWORD *)(v136 + 24) > 2u )
          {
            updated = System_Int32__Parse(*(System_String_o **)(v136 + 48), 0);
            if ( !v614 )
              goto LABEL_1425;
            *(_DWORD *)(v614 + 20) = updated;
LABEL_938:
            v616 = *v14;
            if ( !*v14 )
              goto LABEL_1425;
            TitleInfoCtrlCallback_k__BackingField = v616->fields._TitleInfoCtrlCallback_k__BackingField;
            if ( v137 )
            {
              if ( !TitleInfoCtrlCallback_k__BackingField )
                goto LABEL_1425;
              QuestAfterAction_TitleInfoControlCallback__Start(
                v616->fields._TitleInfoCtrlCallback_k__BackingField,
                (QuestAfterAction_TitleInfoControlParam_o *)v614,
                0,
                v615);
              goto LABEL_21;
            }
            v618 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
            System_Action___ctor(v618, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
            if ( !TitleInfoCtrlCallback_k__BackingField )
              goto LABEL_1425;
            QuestAfterAction_TitleInfoControlCallback__Start(
              TitleInfoCtrlCallback_k__BackingField,
              (QuestAfterAction_TitleInfoControlParam_o *)v614,
              v618,
              v619);
            return;
          }
          break;
      }
LABEL_1426:
      sub_1C93D34(updated);
    }
    if ( id > 800 )
    {
      if ( id == 801 )
      {
        param = v23->fields.param;
        v213 = Method_QuestAfterAction_StateMain_UpdateAnim__;
        if ( (*((_BYTE *)Method_QuestAfterAction_StateMain_UpdateAnim__ + 83) & 2) != 0 )
          v213 = (_QWORD *)sub_1C93AEC(Method_QuestAfterAction_StateMain_UpdateAnim__);
        v214 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v213, v213[4]);
        OverwriteAssetSoundName__PlaySe(v214, param, 0, 0);
      }
      else if ( id == 850 )
      {
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__stopBgm(0);
        if ( !*v14 )
          goto LABEL_1425;
        (*v14)->fields.isRequestedStopBgm = 1;
      }
      goto LABEL_21;
    }
    switch ( id )
    {
      case 700:
        updated = (__int64)v23->fields.param;
        if ( !updated )
          goto LABEL_1425;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
        if ( !updated )
          goto LABEL_1425;
        v111 = updated;
        if ( !*(_DWORD *)(updated + 24) )
          goto LABEL_1426;
        v112 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
        if ( *(int *)(v111 + 24) >= 2 )
          v113 = System_Int32__Parse(*(System_String_o **)(v111 + 40), 0) + 1;
        else
          v113 = 0;
        v620 = (SceneJumpInfo_o *)sub_1C93D20(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_42211656(v620, (System_String_o *)StringLiteral_1/*""*/, v112, v113, 0);
        updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !updated )
          goto LABEL_1425;
        v604 = 72;
        v605 = (Il2CppObject *)v620;
        goto LABEL_1320;
      case 701:
        if ( !System_String__op_Equality(v23->fields.param, (System_String_o *)StringLiteral_1116/*"0"*/, 0) )
          goto LABEL_21;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4D2D4C7 )
        {
          sub_1C93AD4(&TerminalPramsManager_TypeInfo);
          byte_4D2D4C7 = 1;
        }
        v312 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v312 = TerminalPramsManager_TypeInfo;
        }
        if ( v312->static_fields->_IsTransOrdealCall_k__BackingField )
          goto LABEL_21;
        if ( !v312->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v312);
        if ( !byte_4D2D4C8 )
        {
          sub_1C93AD4(&TerminalPramsManager_TypeInfo);
          byte_4D2D4C8 = 1;
        }
        v313 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v313 = TerminalPramsManager_TypeInfo;
        }
        v313->static_fields->_IsTransOrdealCall_k__BackingField = 1;
        v314 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v314 = BalanceConfig_TypeInfo;
        }
        TerminalPramsManager__SetAutoResumeByWarId(v314->static_fields->OrdealCallWarId, 0);
        updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !updated )
          goto LABEL_1425;
        AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)updated, 34, 1, 0, 0, 0);
        return;
      case 702:
        updated = (__int64)v23->fields.param;
        if ( !updated )
          goto LABEL_1425;
        updated = (__int64)System_String__Split_64477632(
                             (System_String_o *)updated,
                             (System_String_o *)StringLiteral_809/*","*/,
                             0,
                             0);
        if ( !updated )
          goto LABEL_1425;
        v304 = *(_QWORD *)(updated + 24);
        v305 = updated;
        if ( !v304 )
          goto LABEL_967;
        if ( !(_DWORD)v304 )
          goto LABEL_1426;
        if ( System_Int32__Parse(*(System_String_o **)(updated + 32), 0) > 0 )
          goto LABEL_21;
        if ( *(int *)(v305 + 24) < 2 )
LABEL_967:
          v306 = 0;
        else
          v306 = System_Int32__Parse(*(System_String_o **)(v305 + 40), 0);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        TerminalPramsManager__SetAutoResumeForFolder(v306, 0);
        if ( !byte_4D2D3F7 )
        {
          sub_1C93AD4(&TerminalPramsManager_TypeInfo);
          byte_4D2D3F7 = 1;
        }
        v623 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v623 = TerminalPramsManager_TypeInfo;
        }
        if ( v623->static_fields->_DispState_k__BackingField == 3 )
        {
          if ( !v623->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(v623);
          if ( !byte_4D2D4C9 )
          {
            sub_1C93AD4(&TerminalPramsManager_TypeInfo);
            byte_4D2D4C9 = 1;
          }
          v624 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v624 = TerminalPramsManager_TypeInfo;
          }
          v624->static_fields->_IsMoveFolderByQuestAfterAction_k__BackingField = 1;
        }
        updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !updated )
          goto LABEL_1425;
        AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)updated, 34, 1, 0, 0, 0);
        break;
      case 703:
        updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
        if ( !updated )
          goto LABEL_1425;
        *(_BYTE *)(updated + 203) = 0;
        updated = (__int64)v23->fields.param;
        if ( !updated )
          goto LABEL_1425;
        updated = (__int64)System_String__Split_64477632(
                             (System_String_o *)updated,
                             (System_String_o *)StringLiteral_809/*","*/,
                             0,
                             0);
        if ( !updated )
          goto LABEL_1425;
        v307 = *(_QWORD *)(updated + 24);
        v308 = updated;
        if ( !v307 )
          goto LABEL_895;
        if ( !(_DWORD)v307 )
          goto LABEL_1426;
        v309 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
        if ( v309 < 1 )
        {
LABEL_895:
          updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
          if ( !updated )
            goto LABEL_1425;
          v604 = 91;
          v605 = 0;
          goto LABEL_1320;
        }
        v310 = v309;
        if ( *(int *)(v308 + 24) > 1 )
        {
          v819 = System_Int32__Parse(*(System_String_o **)(v308 + 40), 0);
          v311 = (System_String_o *)StringLiteral_1/*""*/;
          if ( v819 >= 1 )
          {
            v820 = 1;
            goto LABEL_1318;
          }
        }
        else
        {
          v311 = (System_String_o *)StringLiteral_1/*""*/;
        }
        v820 = 0;
LABEL_1318:
        v821 = (SceneJumpInfo_o *)sub_1C93D20(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_42211656(v821, v311, v310, v820, 0);
        updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !updated )
          goto LABEL_1425;
        v604 = 91;
        v605 = (Il2CppObject *)v821;
LABEL_1320:
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)updated, v604, 1, v605, 0);
        break;
      default:
        if ( id != 800 )
          goto LABEL_21;
        v226 = *v14;
        if ( !*v14 )
          goto LABEL_1425;
        updated = (__int64)v226->fields.svtVoices;
        if ( !updated )
          goto LABEL_1425;
        if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                (System_Collections_Generic_Dictionary_int__object__o *)updated,
                v226->fields.commandIdx,
                &value,
                (const MethodInfo_34BE510 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__) )
          break;
        updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
        if ( !updated )
          goto LABEL_1425;
        AutomatedAction__TerminateMissionAction((AutomatedAction_o *)updated, 0);
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4D2A6EE )
        {
          sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
          byte_4D2A6EE = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v227 = **(_QWORD **)(updated + 184);
        if ( !v227 )
          goto LABEL_1425;
        if ( !*(_QWORD *)(v227 + 464) )
          goto LABEL_349;
        if ( !*(_DWORD *)(updated + 224) )
          j_il2cpp_runtime_class_init_0(updated);
        if ( !byte_4D2A6EE )
        {
          sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
          byte_4D2A6EE = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v228 = **(_QWORD **)(updated + 184);
        if ( !v228 )
          goto LABEL_1425;
        v229 = *(_QWORD *)(v228 + 464);
        if ( !v229 )
          goto LABEL_1425;
        updated = *(unsigned int *)(v229 + 48);
        if ( (_DWORD)updated )
          goto LABEL_351;
LABEL_349:
        if ( !value )
          goto LABEL_1425;
        updated = LODWORD(value[1].klass);
LABEL_351:
        if ( (int)updated < 1 )
        {
          if ( !value )
            goto LABEL_1425;
          v830 = (System_String_o *)value[1].monitor;
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          SoundManager__playVoice(v830, 0, 0);
        }
        else
        {
          updated = (__int64)ServantVoiceEntity__getVoiceAssetName_43508840(updated, 0);
          if ( !value )
            goto LABEL_1425;
          v230 = (System_String_o *)updated;
          v231 = (System_String_o *)value[1].monitor;
          v232 = SeManager_TypeInfo;
          if ( !SeManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
            v232 = SeManager_TypeInfo;
          }
          DEFAULT_VOLUME = v232->static_fields->DEFAULT_VOLUME;
          if ( !SoundManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          SoundManager__playVoice_42249560(v230, v231, DEFAULT_VOLUME, 0, 0, 0);
        }
        break;
    }
LABEL_1321:
    ((void (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
      this,
      this->klass->vtable._14_EndAnim.method);
    return;
  }
  if ( id <= 352 )
  {
    if ( id <= 205 )
    {
      switch ( id )
      {
        case 'd':
          v81 = sub_1C93D20(QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_1___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_1_o *)v81,
            0);
          if ( !v81 )
            goto LABEL_1425;
          *(_QWORD *)(v81 + 24) = v5;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v81 + 24), v5, v82, v83, v84, v85, v86, v87);
          v88 = *(_QWORD *)(v81 + 24);
          if ( !v88 )
            goto LABEL_1425;
          v89 = *(QuestAfterAction_o **)(v88 + 24);
          updated = System_Int32__Parse(v23->fields.param, 0);
          if ( !v89 )
            goto LABEL_1425;
          MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                                  v89,
                                  0,
                                  updated,
                                  this,
                                  (const MethodInfo_323DD94 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v81 + 16) = MapComponent_object;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)(v81 + 16),
            (int32_t)MapComponent_object,
            v91,
            v92,
            v93,
            v94,
            v95,
            v96);
          v97 = *(UnityEngine_Object_o **)(v81 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v97, 0, 0) )
            return;
          v98 = *(SrcSpotBasePrefab_o **)(v81 + 16);
          v99 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
          System_Action___ctor(
            v99,
            (Il2CppObject *)v81,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__,
            0);
          if ( !v98 )
            goto LABEL_1425;
          v100 = 2;
          goto LABEL_593;
        case 'e':
          v355 = sub_1C93D20(QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_2___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_2_o *)v355,
            0);
          if ( !v355 )
            goto LABEL_1425;
          *(_QWORD *)(v355 + 24) = v5;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v355 + 24), v5, v356, v357, v358, v359, v360, v361);
          v362 = *(_QWORD *)(v355 + 24);
          if ( !v362 )
            goto LABEL_1425;
          v363 = *(QuestAfterAction_o **)(v362 + 24);
          updated = System_Int32__Parse(v23->fields.param, 0);
          if ( !v363 )
            goto LABEL_1425;
          v364 = QuestAfterAction__GetMapComponent_object_(
                   v363,
                   0,
                   updated,
                   this,
                   (const MethodInfo_323DD94 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v355 + 16) = v364;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v355 + 16), (int32_t)v364, v365, v366, v367, v368, v369, v370);
          v371 = *(UnityEngine_Object_o **)(v355 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v371, 0, 0) )
            return;
          v98 = *(SrcSpotBasePrefab_o **)(v355 + 16);
          v99 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
          System_Action___ctor(
            v99,
            (Il2CppObject *)v355,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__,
            0);
          if ( !v98 )
            goto LABEL_1425;
          v100 = 3;
LABEL_593:
          SrcSpotBasePrefab__SetState(v98, v100, v99, 0);
          return;
        case 'f':
          v372 = sub_1C93D20(QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_3___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_3_o *)v372,
            0);
          if ( !v372 )
            goto LABEL_1425;
          *(_QWORD *)(v372 + 24) = v5;
          v379 = v372 + 24;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v372 + 24), v5, v373, v374, v375, v376, v377, v378);
          if ( !*(_QWORD *)(v372 + 24) )
            goto LABEL_1425;
          v380 = *(QuestAfterAction_o **)(*(_QWORD *)(v372 + 24) + 24LL);
          updated = System_Int32__Parse(v23->fields.param, 0);
          if ( !v380 )
            goto LABEL_1425;
          v381 = QuestAfterAction__GetMapComponent_object_(
                   v380,
                   0,
                   updated,
                   this,
                   (const MethodInfo_323DD94 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v372 + 16) = v381;
          v382 = (__int64 *)(v372 + 16);
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v372 + 16), (int32_t)v381, v383, v384, v385, v386, v387, v388);
          v389 = *(UnityEngine_Object_o **)(v372 + 16);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v389, 0, 0) )
            return;
          v390 = *(SrcSpotBasePrefab_o **)(v372 + 16);
          v391 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
          System_Action___ctor(
            v391,
            (Il2CppObject *)v372,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__,
            0);
          if ( !v390 )
            goto LABEL_1425;
          SrcSpotBasePrefab__SetState(v390, 4, v391, 0);
          if ( !*(_QWORD *)v379 )
            goto LABEL_1425;
          updated = *(_QWORD *)(*(_QWORD *)v379 + 24LL);
          if ( !updated )
            goto LABEL_1425;
          v354 = *v382;
          *(_QWORD *)(updated + 192) = *v382;
          v353 = (GrandQuestFolderBoardItem_o *)(updated + 192);
          goto LABEL_604;
        case 'g':
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1425;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1425;
          v343 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_1321;
          v344 = *v14;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
          if ( !v344 )
            goto LABEL_1425;
          v345 = QuestAfterAction__GetMapComponent_object_(
                   v344,
                   0,
                   updated,
                   this,
                   (const MethodInfo_323DD94 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v345, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v343 + 24) <= 1u )
            goto LABEL_1426;
          updated = System_Int32__Parse(*(System_String_o **)(v343 + 40), 0);
          if ( !v345 )
            goto LABEL_1425;
          LODWORD(v345[14].klass) = updated;
          v346 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
          System_Action___ctor(v346, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
          SrcSpotBasePrefab__SetState((SrcSpotBasePrefab_o *)v345, 5, v346, 0);
          updated = (__int64)*v14;
          if ( !*v14 )
            goto LABEL_1425;
          *(_QWORD *)(updated + 192) = v345;
          v353 = (GrandQuestFolderBoardItem_o *)(updated + 192);
          LODWORD(v354) = (_DWORD)v345;
LABEL_604:
          sub_1C93A78(v353, v354, v347, v348, v349, v350, v351, v352);
          return;
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
          goto LABEL_21;
        case 'n':
          v336 = *v14;
          updated = System_Int32__Parse(v23->fields.param, 0);
          if ( !v336 )
            goto LABEL_1425;
          v337 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                           v336,
                                           0,
                                           updated,
                                           this,
                                           (const MethodInfo_323DD94 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality(v337, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          if ( !v337 )
            goto LABEL_1425;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v337, 0, 0);
          m_CachedPtr = v337[9].fields.m_CachedPtr;
          if ( !m_CachedPtr )
            goto LABEL_1425;
          *(_DWORD *)(m_CachedPtr + 20) = 0;
          v339 = (SrcSpotBasePrefab_o *)v337;
          v340 = 0;
          goto LABEL_573;
        case 'o':
          v341 = *v14;
          updated = System_Int32__Parse(v23->fields.param, 0);
          if ( !v341 )
            goto LABEL_1425;
          v334 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                           v341,
                                           0,
                                           updated,
                                           this,
                                           (const MethodInfo_323DD94 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality(v334, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          if ( !v334 )
            goto LABEL_1425;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v334, 1, 0);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v334, 0, 0);
          v342 = v334[9].fields.m_CachedPtr;
          if ( !v342 )
            goto LABEL_1425;
          *(_DWORD *)(v342 + 20) = 2;
          goto LABEL_572;
        case 'p':
          v333 = *v14;
          updated = System_Int32__Parse(v23->fields.param, 0);
          if ( !v333 )
            goto LABEL_1425;
          v334 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                           v333,
                                           0,
                                           updated,
                                           this,
                                           (const MethodInfo_323DD94 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality(v334, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          if ( !v334 )
            goto LABEL_1425;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v334, 1, 0);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v334, 1, 0);
          v335 = v334[9].fields.m_CachedPtr;
          if ( !v335 )
            goto LABEL_1425;
          *(_DWORD *)(v335 + 20) = 1;
LABEL_572:
          v340 = 1;
          v339 = (SrcSpotBasePrefab_o *)v334;
LABEL_573:
          SrcSpotBasePrefab__SetTouchType(v339, v340, 0);
          goto LABEL_21;
        case 'q':
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1425;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1425;
          v392 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_1321;
          v393 = *v14;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
          if ( !v393 )
            goto LABEL_1425;
          v394 = QuestAfterAction__GetMapComponent_object_(
                   v393,
                   0,
                   updated,
                   this,
                   (const MethodInfo_323DD94 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v394, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v392 + 24) <= 1u )
            goto LABEL_1426;
          updated = System_Int32__Parse(*(System_String_o **)(v392 + 40), 0);
          if ( !v394 )
            goto LABEL_1425;
          LODWORD(v394[14].klass) = updated;
          SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)v394, 1, 0);
          goto LABEL_21;
        default:
          switch ( id )
          {
            case 200:
              if ( this->fields.IsMapModel )
              {
                v114 = sub_1C93D20(QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_4___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_4_o *)v114,
                  0);
                if ( !v114 )
                  goto LABEL_1425;
                *(_QWORD *)(v114 + 24) = v5;
                sub_1C93A78((GrandQuestFolderBoardItem_o *)(v114 + 24), v5, v115, v116, v117, v118, v119, v120);
                v121 = *(_QWORD *)(v114 + 24);
                if ( !v121 )
                  goto LABEL_1425;
                v122 = *(QuestAfterAction_o **)(v121 + 24);
                updated = System_Int32__Parse(v23->fields.param, 0);
                if ( !v122 )
                  goto LABEL_1425;
                v123 = QuestAfterAction__GetMapComponent_object_(
                         v122,
                         1,
                         updated,
                         this,
                         (const MethodInfo_323DD94 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                *(_QWORD *)(v114 + 16) = v123;
                sub_1C93A78(
                  (GrandQuestFolderBoardItem_o *)(v114 + 16),
                  (int32_t)v123,
                  v124,
                  v125,
                  v126,
                  v127,
                  v128,
                  v129);
                v130 = *(UnityEngine_Object_o **)(v114 + 16);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Equality(v130, 0, 0) )
                {
                  v131 = *(ModelLineComponent_o **)(v114 + 16);
                  v132 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
                  System_Action___ctor(
                    v132,
                    (Il2CppObject *)v114,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__,
                    0);
                  if ( !v131 )
                    goto LABEL_1425;
                  v134 = 2;
                  goto LABEL_815;
                }
              }
              else
              {
                v773 = sub_1C93D20(QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_5___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_5_o *)v773,
                  0);
                if ( !v773 )
                  goto LABEL_1425;
                *(_QWORD *)(v773 + 24) = v5;
                sub_1C93A78((GrandQuestFolderBoardItem_o *)(v773 + 24), v5, v774, v775, v776, v777, v778, v779);
                v780 = *(_QWORD *)(v773 + 24);
                if ( !v780 )
                  goto LABEL_1425;
                v781 = *(QuestAfterAction_o **)(v780 + 24);
                updated = System_Int32__Parse(v23->fields.param, 0);
                if ( !v781 )
                  goto LABEL_1425;
                v782 = QuestAfterAction__GetMapComponent_object_(
                         v781,
                         1,
                         updated,
                         this,
                         (const MethodInfo_323DD94 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                *(_QWORD *)(v773 + 16) = v782;
                sub_1C93A78(
                  (GrandQuestFolderBoardItem_o *)(v773 + 16),
                  (int32_t)v782,
                  v783,
                  v784,
                  v785,
                  v786,
                  v787,
                  v788);
                v789 = *(UnityEngine_Object_o **)(v773 + 16);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Equality(v789, 0, 0) )
                {
                  v770 = *(srcLineSprite_o **)(v773 + 16);
                  v771 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
                  System_Action___ctor(
                    v771,
                    (Il2CppObject *)v773,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__,
                    0);
                  if ( !v770 )
                    goto LABEL_1425;
                  v772 = 2;
                  goto LABEL_1272;
                }
              }
              return;
            case 201:
              if ( this->fields.IsMapModel )
              {
                v560 = sub_1C93D20(QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_6___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_6_o *)v560,
                  0);
                if ( !v560 )
                  goto LABEL_1425;
                *(_QWORD *)(v560 + 24) = v5;
                sub_1C93A78((GrandQuestFolderBoardItem_o *)(v560 + 24), v5, v561, v562, v563, v564, v565, v566);
                v567 = *(_QWORD *)(v560 + 24);
                if ( !v567 )
                  goto LABEL_1425;
                v568 = *(QuestAfterAction_o **)(v567 + 24);
                updated = System_Int32__Parse(v23->fields.param, 0);
                if ( !v568 )
                  goto LABEL_1425;
                v569 = QuestAfterAction__GetMapComponent_object_(
                         v568,
                         1,
                         updated,
                         this,
                         (const MethodInfo_323DD94 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                *(_QWORD *)(v560 + 16) = v569;
                sub_1C93A78(
                  (GrandQuestFolderBoardItem_o *)(v560 + 16),
                  (int32_t)v569,
                  v570,
                  v571,
                  v572,
                  v573,
                  v574,
                  v575);
                v576 = *(UnityEngine_Object_o **)(v560 + 16);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Equality(v576, 0, 0) )
                {
                  v131 = *(ModelLineComponent_o **)(v560 + 16);
                  v132 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
                  System_Action___ctor(
                    v132,
                    (Il2CppObject *)v560,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__,
                    0);
                  if ( !v131 )
                    goto LABEL_1425;
                  v134 = 3;
                  goto LABEL_815;
                }
              }
              else
              {
                v790 = sub_1C93D20(QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_7___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_7_o *)v790,
                  0);
                if ( !v790 )
                  goto LABEL_1425;
                *(_QWORD *)(v790 + 24) = v5;
                sub_1C93A78((GrandQuestFolderBoardItem_o *)(v790 + 24), v5, v791, v792, v793, v794, v795, v796);
                v797 = *(_QWORD *)(v790 + 24);
                if ( !v797 )
                  goto LABEL_1425;
                v798 = *(QuestAfterAction_o **)(v797 + 24);
                updated = System_Int32__Parse(v23->fields.param, 0);
                if ( !v798 )
                  goto LABEL_1425;
                v799 = QuestAfterAction__GetMapComponent_object_(
                         v798,
                         1,
                         updated,
                         this,
                         (const MethodInfo_323DD94 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                *(_QWORD *)(v790 + 16) = v799;
                sub_1C93A78(
                  (GrandQuestFolderBoardItem_o *)(v790 + 16),
                  (int32_t)v799,
                  v800,
                  v801,
                  v802,
                  v803,
                  v804,
                  v805);
                v806 = *(UnityEngine_Object_o **)(v790 + 16);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Equality(v806, 0, 0) )
                {
                  v770 = *(srcLineSprite_o **)(v790 + 16);
                  v771 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
                  System_Action___ctor(
                    v771,
                    (Il2CppObject *)v790,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__,
                    0);
                  if ( !v770 )
                    goto LABEL_1425;
                  v772 = 3;
                  goto LABEL_1272;
                }
              }
              return;
            case 202:
              if ( this->fields.IsMapModel )
              {
                v538 = sub_1C93D20(QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_8___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_8_o *)v538,
                  0);
                if ( !v538 )
                  goto LABEL_1425;
                *(_QWORD *)(v538 + 24) = v5;
                sub_1C93A78((GrandQuestFolderBoardItem_o *)(v538 + 24), v5, v539, v540, v541, v542, v543, v544);
                v545 = *(_QWORD *)(v538 + 24);
                if ( !v545 )
                  goto LABEL_1425;
                v546 = *(QuestAfterAction_o **)(v545 + 24);
                updated = System_Int32__Parse(v23->fields.param, 0);
                if ( !v546 )
                  goto LABEL_1425;
                v547 = QuestAfterAction__GetMapComponent_object_(
                         v546,
                         1,
                         updated,
                         this,
                         (const MethodInfo_323DD94 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                *(_QWORD *)(v538 + 16) = v547;
                sub_1C93A78(
                  (GrandQuestFolderBoardItem_o *)(v538 + 16),
                  (int32_t)v547,
                  v548,
                  v549,
                  v550,
                  v551,
                  v552,
                  v553);
                v554 = *(UnityEngine_Object_o **)(v538 + 16);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Equality(v554, 0, 0) )
                {
                  v131 = *(ModelLineComponent_o **)(v538 + 16);
                  v132 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
                  System_Action___ctor(
                    v132,
                    (Il2CppObject *)v538,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__,
                    0);
                  if ( !v131 )
                    goto LABEL_1425;
                  v134 = 4;
LABEL_815:
                  ModelLineComponent__SetState(v131, v134, v132, v133);
                }
              }
              else
              {
                v753 = sub_1C93D20(QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_9___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_9_o *)v753,
                  0);
                if ( !v753 )
                  goto LABEL_1425;
                *(_QWORD *)(v753 + 24) = v5;
                sub_1C93A78((GrandQuestFolderBoardItem_o *)(v753 + 24), v5, v754, v755, v756, v757, v758, v759);
                v760 = *(_QWORD *)(v753 + 24);
                if ( !v760 )
                  goto LABEL_1425;
                v761 = *(QuestAfterAction_o **)(v760 + 24);
                updated = System_Int32__Parse(v23->fields.param, 0);
                if ( !v761 )
                  goto LABEL_1425;
                v762 = QuestAfterAction__GetMapComponent_object_(
                         v761,
                         1,
                         updated,
                         this,
                         (const MethodInfo_323DD94 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                *(_QWORD *)(v753 + 16) = v762;
                sub_1C93A78(
                  (GrandQuestFolderBoardItem_o *)(v753 + 16),
                  (int32_t)v762,
                  v763,
                  v764,
                  v765,
                  v766,
                  v767,
                  v768);
                v769 = *(UnityEngine_Object_o **)(v753 + 16);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Equality(v769, 0, 0) )
                {
                  v770 = *(srcLineSprite_o **)(v753 + 16);
                  v771 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
                  System_Action___ctor(
                    v771,
                    (Il2CppObject *)v753,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__,
                    0);
                  if ( !v770 )
                    goto LABEL_1425;
                  v772 = 4;
LABEL_1272:
                  srcLineSprite__SetState(v770, v772, v771, 0);
                }
              }
              return;
            case 203:
              IsMapModel = this->fields.IsMapModel;
              v556 = *v14;
              updated = System_Int32__Parse(v23->fields.param, 0);
              if ( !v556 )
                goto LABEL_1425;
              if ( IsMapModel )
              {
                v557 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v556,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_323DD94 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality(v557, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v557 )
                  goto LABEL_1425;
                ModelLineComponent__SetQuestAfterActionScaleAnim_36837260((ModelLineComponent_o *)v557, 0, 0.0, v558);
                v559 = v557[3].klass;
                if ( !v559 )
                  goto LABEL_1425;
              }
              else
              {
                v809 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v556,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_323DD94 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality(v809, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v809 )
                  goto LABEL_1425;
                srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v809, 0, 0);
                v559 = v809[5].monitor;
                if ( !v559 )
                  goto LABEL_1425;
              }
              goto LABEL_1284;
            case 204:
              v532 = this->fields.IsMapModel;
              v533 = *v14;
              updated = System_Int32__Parse(v23->fields.param, 0);
              if ( !v533 )
                goto LABEL_1425;
              if ( v532 )
              {
                v534 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v533,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_323DD94 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality(v534, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v534 )
                  goto LABEL_1425;
                ModelLineComponent__SetQuestAfterActionScaleAnim_36837260((ModelLineComponent_o *)v534, 1, 0.0, v535);
                ModelLineComponent__SetQuestAfterActionColorAnim_36837736((ModelLineComponent_o *)v534, 0, 0.0, v536);
                v537 = v534[3].klass;
                if ( !v537 )
                  goto LABEL_1425;
              }
              else
              {
                v807 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v533,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_323DD94 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality(v807, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v807 )
                  goto LABEL_1425;
                srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v807, 1, 0);
                srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v807, 0, 0);
                v537 = v807[5].monitor;
                if ( !v537 )
                  goto LABEL_1425;
              }
              v808 = 2;
              goto LABEL_1291;
            case 205:
              v577 = this->fields.IsMapModel;
              v578 = *v14;
              updated = System_Int32__Parse(v23->fields.param, 0);
              if ( !v578 )
                goto LABEL_1425;
              if ( v577 )
              {
                v579 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v578,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_323DD94 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality(v579, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v579 )
                  goto LABEL_1425;
                ModelLineComponent__SetQuestAfterActionScaleAnim_36837260((ModelLineComponent_o *)v579, 1, 0.0, v580);
                ModelLineComponent__SetQuestAfterActionColorAnim_36837736((ModelLineComponent_o *)v579, 1, 0.0, v581);
                v537 = v579[3].klass;
                if ( !v537 )
                  goto LABEL_1425;
              }
              else
              {
                v810 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v578,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_323DD94 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality(v810, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v810 )
                  goto LABEL_1425;
                srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v810, 1, 0);
                srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v810, 1, 0);
                v537 = v810[5].monitor;
                if ( !v537 )
                  goto LABEL_1425;
              }
              v808 = 1;
LABEL_1291:
              v537[4] = v808;
              goto LABEL_21;
            default:
              goto LABEL_21;
          }
      }
    }
    switch ( id )
    {
      case 300:
      case 305:
        updated = (__int64)v23->fields.param;
        if ( !updated )
          goto LABEL_1425;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
        if ( !updated )
          goto LABEL_1425;
        v39 = *(_QWORD *)(updated + 24);
        v40 = updated;
        if ( (int)v39 <= 0 )
          goto LABEL_1321;
        if ( (int)v39 > 2 )
        {
          v593 = System_Single__Parse(*(System_String_o **)(updated + 48), 0);
          v39 = *(_QWORD *)(v40 + 24);
          v41 = v593 * 0.001;
        }
        else
        {
          v41 = 0.5;
        }
        secb = v41;
        if ( (int)v39 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v40 + 40), 0);
          v39 = *(_QWORD *)(v40 + 24);
          v165 = updated;
        }
        else
        {
          v165 = 15;
        }
        if ( !(_DWORD)v39 )
          goto LABEL_1426;
        v595 = *v14;
        updated = System_Int32__Parse(*(System_String_o **)(v40 + 32), 0);
        if ( !v595 )
          goto LABEL_1425;
        MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v595, 0, updated, this, v596);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(MapGameObject, 0, 0) )
          return;
        LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)MapGameObject, 0);
        x = LocalPosition.fields.x;
        y = LocalPosition.fields.y;
        z = LocalPosition.fields.z;
        if ( !this->fields.IsMapModel )
          goto LABEL_871;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4D2A6EE )
        {
          sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
          byte_4D2A6EE = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v598 = **(_QWORD **)(updated + 184);
        if ( !v598 )
          goto LABEL_1425;
        updated = *(_QWORD *)(v598 + 264);
        if ( !updated )
          goto LABEL_1425;
        v898 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, LocalPosition, 0);
        x = v898.fields.x;
        y = v898.fields.y;
        z = v898.fields.z;
LABEL_871:
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0);
        if ( (updated & 1) != 0 )
          goto LABEL_1344;
        if ( !*(_DWORD *)(v40 + 24) )
          goto LABEL_1426;
        v599 = *(System_String_o **)(v40 + 32);
        updated = System_String__op_Equality(v599, (System_String_o *)StringLiteral_1301/*"10703"*/, 0);
        if ( (updated & 1) != 0 )
        {
          y = y + -50.0;
        }
        else
        {
          updated = System_String__op_Equality(v599, (System_String_o *)StringLiteral_1374/*"30101"*/, 0);
          if ( (updated & 1) != 0 )
            y = y + -50.0;
        }
LABEL_1344:
        v591 = *(_DWORD *)(v40 + 24);
        if ( v23->fields.id != 305 )
        {
LABEL_1345:
          if ( v591 < 4 )
            goto LABEL_1346;
          updated = System_Int32__Parse(*(System_String_o **)(v40 + 56), 0);
          v841 = *v14;
          if ( !*v14 )
            goto LABEL_1425;
          mMapCamera = v841->fields.mMapCamera;
          if ( (int)updated < 1 )
            goto LABEL_1348;
          if ( !mMapCamera )
            goto LABEL_1425;
          v842 = v841->fields.mMapCamera;
          v916.fields.x = x;
          v916.fields.y = y;
          v916.fields.z = z;
          goto LABEL_1374;
        }
LABEL_844:
        if ( v591 < 4 )
        {
LABEL_1346:
          if ( !*v14 )
            goto LABEL_1425;
          mMapCamera = (*v14)->fields.mMapCamera;
LABEL_1348:
          v300 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
          System_Action___ctor(v300, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
          if ( !mMapCamera )
            goto LABEL_1425;
          v301 = mMapCamera;
          v911.fields.x = x;
          v911.fields.y = y;
          v911.fields.z = z;
LABEL_1367:
          v302 = secb;
LABEL_1368:
          v303 = v165;
LABEL_1369:
          MapCamera__StartAutoMove(v301, v911, v302, v303, v300, 0);
          return;
        }
        if ( v591 == 4 )
        {
          if ( !*v14 )
            goto LABEL_1425;
          v592 = (*v14)->fields.mMapCamera;
        }
        else
        {
          updated = System_Int32__Parse(*(System_String_o **)(v40 + 64), 0);
          if ( !*v14 )
            goto LABEL_1425;
          v592 = (*v14)->fields.mMapCamera;
          if ( (int)updated >= 1 )
          {
            *(_QWORD *)&v903.fields.hasValue = &v882;
            v914.fields.x = x;
            v914.fields.y = y;
            *(_QWORD *)&v903.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
            v914.fields.z = z;
            *(_OWORD *)&v882.fields._list = 0u;
LABEL_1403:
            System_Nullable_Vector3____ctor(v903, v914, v586);
            if ( *(_DWORD *)(v40 + 24) <= 3u )
              goto LABEL_1426;
            v859 = System_Single__Parse(*(System_String_o **)(v40 + 56), 0);
            size = 0;
            System_Nullable_float____ctor(
              (System_Nullable_float__o)&size,
              v859,
              (const MethodInfo_39A1F0C *)Method_System_Nullable_float___ctor__);
            if ( !v592 )
              goto LABEL_1425;
            v908 = *(System_Nullable_Vector3__o *)&v882.fields._list;
            v860 = size;
            v861 = secb;
            v862 = v592;
LABEL_1406:
            MapCamera__StartAutoWork(v862, v861, v908, v860, v165, 0, 0);
            goto LABEL_1321;
          }
        }
        *(_QWORD *)&v904.fields.hasValue = &v882;
        v915.fields.x = x;
        v915.fields.y = y;
        *(_QWORD *)&v904.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
        v915.fields.z = z;
        *(_OWORD *)&v882.fields._list = 0u;
        goto LABEL_1408;
      case 301:
      case 306:
        updated = (__int64)v23->fields.param;
        if ( !updated )
          goto LABEL_1425;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
        if ( !updated )
          goto LABEL_1425;
        v174 = *(_QWORD *)(updated + 24);
        v40 = updated;
        if ( (int)v174 <= 0 )
          goto LABEL_1321;
        if ( (int)v174 > 2 )
        {
          v594 = System_Single__Parse(*(System_String_o **)(updated + 48), 0);
          v174 = *(_QWORD *)(v40 + 24);
          v175 = v594 * 0.001;
        }
        else
        {
          v175 = 0.5;
        }
        secb = v175;
        if ( (int)v174 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v40 + 40), 0);
          v174 = *(_QWORD *)(v40 + 24);
          v165 = updated;
        }
        else
        {
          v165 = 15;
        }
        if ( !(_DWORD)v174 )
          goto LABEL_1426;
        v600 = *v14;
        updated = System_Int32__Parse(*(System_String_o **)(v40 + 32), 0);
        if ( !v600 )
          goto LABEL_1425;
        v602 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v600, 1, updated, this, v601);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        updated = UnityEngine_Object__op_Equality(v602, 0, 0);
        if ( (updated & 1) != 0 )
          return;
        if ( this->fields.IsMapModel )
        {
          if ( !v602 )
            goto LABEL_1425;
          updated = (__int64)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v602,
                               (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
          if ( !updated )
            goto LABEL_1425;
          Position = GameObjectExtensions__GetPosition((UnityEngine_GameObject_o *)*(_QWORD *)(updated + 32), 0);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4D2A6EE )
          {
            sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
            byte_4D2A6EE = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v603 = **(_QWORD **)(updated + 184);
          if ( !v603 )
            goto LABEL_1425;
          updated = *(_QWORD *)(v603 + 264);
          if ( !updated )
            goto LABEL_1425;
          v900 = ScrTerminalMap__ConvertWorldToScreenPosition((ScrTerminalMap_o *)updated, Position, 0);
          v873 = v900.fields.x;
          v874 = v900.fields.y;
          v875 = v900.fields.z;
        }
        else
        {
          v901 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v602, 0);
          v873 = v901.fields.x;
          v874 = v901.fields.y;
          v875 = v901.fields.z;
        }
        v811 = v873;
        v812 = v874;
        v813 = v875;
        if ( !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0);
        if ( (updated & 1) != 0 )
          goto LABEL_1356;
        if ( !*(_DWORD *)(v40 + 24) )
          goto LABEL_1426;
        v814 = *(System_String_o **)(v40 + 32);
        updated = System_String__op_Equality(v814, (System_String_o *)StringLiteral_1301/*"10703"*/, 0);
        if ( (updated & 1) != 0 )
        {
          v812 = v812 + -95.0;
        }
        else
        {
          updated = System_String__op_Equality(v814, (System_String_o *)StringLiteral_1375/*"30102"*/, 0);
          if ( (updated & 1) != 0 )
            v812 = v812 + 45.0;
        }
LABEL_1356:
        v845 = *(_DWORD *)(v40 + 24);
        if ( v23->fields.id == 306 )
        {
          if ( v845 >= 4 )
          {
            if ( v845 == 4 )
            {
              if ( !*v14 )
                goto LABEL_1425;
              v592 = (*v14)->fields.mMapCamera;
            }
            else
            {
              updated = System_Int32__Parse(*(System_String_o **)(v40 + 64), 0);
              if ( !*v14 )
                goto LABEL_1425;
              v592 = (*v14)->fields.mMapCamera;
              if ( (int)updated >= 1 )
              {
                *(_OWORD *)&v882.fields._list = 0u;
                *(_QWORD *)&v903.fields.hasValue = &v882;
                v914.fields.x = v811;
                *(_QWORD *)&v903.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                v914.fields.y = v812;
                v914.fields.z = v813;
                goto LABEL_1403;
              }
            }
            *(_OWORD *)&v882.fields._list = 0u;
            *(_QWORD *)&v904.fields.hasValue = &v882;
            v915.fields.x = v811;
            *(_QWORD *)&v904.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
            v915.fields.y = v812;
            v915.fields.z = v813;
LABEL_1408:
            System_Nullable_Vector3____ctor(v904, v915, v586);
            if ( *(_DWORD *)(v40 + 24) <= 3u )
              goto LABEL_1426;
            v863 = System_Single__Parse(*(System_String_o **)(v40 + 56), 0);
            size = 0;
            System_Nullable_float____ctor(
              (System_Nullable_float__o)&size,
              v863,
              (const MethodInfo_39A1F0C *)Method_System_Nullable_float___ctor__);
            v864 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
            System_Action___ctor(v864, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
            if ( !v592 )
              goto LABEL_1425;
            v909 = *(System_Nullable_Vector3__o *)&v882.fields._list;
            v865 = size;
            v866 = secb;
            v867 = v592;
LABEL_1411:
            v868 = v165;
LABEL_1412:
            MapCamera__StartAutoWork(v867, v866, v909, v865, v868, v864, 0);
            return;
          }
        }
        else if ( v845 >= 4 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v40 + 56), 0);
          v847 = *v14;
          if ( !*v14 )
            goto LABEL_1425;
          v846 = v847->fields.mMapCamera;
          if ( (int)updated >= 1 )
          {
            if ( !v846 )
              goto LABEL_1425;
            v842 = v847->fields.mMapCamera;
            v916.fields.x = v811;
            v916.fields.y = v812;
            v916.fields.z = v813;
LABEL_1374:
            v848 = secb;
LABEL_1375:
            MapCamera__StartAutoMove(v842, v916, v848, v165, 0, 0);
            goto LABEL_1321;
          }
LABEL_1365:
          v300 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
          System_Action___ctor(v300, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
          if ( !v846 )
            goto LABEL_1425;
          v301 = v846;
          v911.fields.x = v811;
          v911.fields.y = v812;
          v911.fields.z = v813;
          goto LABEL_1367;
        }
        if ( !*v14 )
          goto LABEL_1425;
        v846 = (*v14)->fields.mMapCamera;
        goto LABEL_1365;
      case 302:
      case 307:
        updated = (__int64)v23->fields.param;
        if ( !updated )
          goto LABEL_1425;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
        if ( !updated )
          goto LABEL_1425;
        v160 = *(_QWORD *)(updated + 24);
        v40 = updated;
        if ( (int)v160 <= 0 )
          goto LABEL_1321;
        if ( (int)v160 > 2 )
        {
          v582 = System_Single__Parse(*(System_String_o **)(updated + 48), 0);
          v160 = *(_QWORD *)(v40 + 24);
          v161 = v582 * 0.001;
        }
        else
        {
          v161 = 0.5;
        }
        secb = v161;
        if ( (int)v160 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v40 + 40), 0);
          v160 = *(_QWORD *)(v40 + 24);
          v165 = updated;
        }
        else
        {
          v165 = 15;
        }
        if ( !(_DWORD)v160 )
          goto LABEL_1426;
        v583 = *v14;
        updated = System_Int32__Parse(*(System_String_o **)(v40 + 32), 0);
        if ( !v583 )
          goto LABEL_1425;
        v585 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v583, 2, updated, this, v584);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(v585, 0, 0) )
          return;
        v895 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v585, 0);
        x = v895.fields.x;
        y = v895.fields.y;
        z = v895.fields.z;
        if ( !this->fields.IsMapModel )
          goto LABEL_843;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4D2A6EE )
        {
          sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
          byte_4D2A6EE = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v590 = **(_QWORD **)(updated + 184);
        if ( !v590 )
          goto LABEL_1425;
        updated = *(_QWORD *)(v590 + 264);
        if ( !updated )
          goto LABEL_1425;
        v896 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v895, 0);
        x = v896.fields.x;
        y = v896.fields.y;
        z = v896.fields.z;
LABEL_843:
        v591 = *(_DWORD *)(v40 + 24);
        if ( v23->fields.id == 307 )
          goto LABEL_844;
        goto LABEL_1345;
      case 303:
      case 308:
        updated = (__int64)v23->fields.param;
        if ( !updated )
          goto LABEL_1425;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
        if ( !updated )
          goto LABEL_1425;
        v162 = updated;
        if ( *(int *)(updated + 24) < 4 )
          goto LABEL_1321;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4D2D4C4 )
        {
          sub_1C93AD4(&TerminalPramsManager_TypeInfo);
          byte_4D2D4C4 = 1;
        }
        updated = (__int64)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          updated = (__int64)TerminalPramsManager_TypeInfo;
        }
        if ( *(_BYTE *)(*(_QWORD *)(updated + 184) + 105LL) )
          goto LABEL_1321;
        if ( *(_DWORD *)(v162 + 24) <= 2u )
          goto LABEL_1426;
        v163 = System_Single__Parse(*(System_String_o **)(v162 + 48), 0) * 0.001;
        v164 = v163 >= 0.0 ? v163 : 0.5;
        if ( *(_DWORD *)(v162 + 24) <= 3u )
          goto LABEL_1426;
        v165 = System_Int32__Parse(*(System_String_o **)(v162 + 56), 0);
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4D2A6EE )
        {
          sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
          byte_4D2A6EE = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v166 = **(_QWORD **)(updated + 184);
        if ( !v166 )
          goto LABEL_1425;
        if ( !*(_DWORD *)(v162 + 24) )
          goto LABEL_1426;
        v167 = *(ScrTerminalMap_o **)(v166 + 264);
        v168 = System_Single__Parse(*(System_String_o **)(v162 + 32), 0);
        if ( *(_DWORD *)(v162 + 24) <= 1u )
          goto LABEL_1426;
        v169 = v168;
        v170 = System_Single__Parse(*(System_String_o **)(v162 + 40), 0);
        if ( !v167 )
          goto LABEL_1425;
        v890 = ScrTerminalMap__LocalPosFromCoord(v167, v169, v170, 0.0, 0.0, 0);
        v172 = *(_DWORD *)(v162 + 24);
        if ( v23->fields.id == 308 )
        {
          if ( v172 >= 5 )
          {
            if ( v172 == 5 )
            {
              if ( !*v14 )
                goto LABEL_1425;
              v173 = (*v14)->fields.mMapCamera;
            }
            else
            {
              updated = System_Int32__Parse(*(System_String_o **)(v162 + 72), 0);
              if ( !*v14 )
                goto LABEL_1425;
              v173 = (*v14)->fields.mMapCamera;
              if ( (int)updated >= 1 )
              {
                *(_QWORD *)&v906.fields.hasValue = &v882;
                *(_QWORD *)&v906.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                *(_OWORD *)&v882.fields._list = 0u;
                System_Nullable_Vector3____ctor(v906, v890, v171);
                if ( *(_DWORD *)(v162 + 24) <= 4u )
                  goto LABEL_1426;
                v871 = System_Single__Parse(*(System_String_o **)(v162 + 64), 0);
                size = 0;
                System_Nullable_float____ctor(
                  (System_Nullable_float__o)&size,
                  v871,
                  (const MethodInfo_39A1F0C *)Method_System_Nullable_float___ctor__);
                if ( !v173 )
                  goto LABEL_1425;
                v908 = *(System_Nullable_Vector3__o *)&v882.fields._list;
                v860 = size;
                v862 = v173;
                v861 = v164;
                goto LABEL_1406;
              }
            }
            *(_QWORD *)&v907.fields.hasValue = &v882;
            *(_QWORD *)&v907.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
            *(_OWORD *)&v882.fields._list = 0u;
            System_Nullable_Vector3____ctor(v907, v890, v171);
            if ( *(_DWORD *)(v162 + 24) <= 4u )
              goto LABEL_1426;
            v872 = System_Single__Parse(*(System_String_o **)(v162 + 64), 0);
            size = 0;
            System_Nullable_float____ctor(
              (System_Nullable_float__o)&size,
              v872,
              (const MethodInfo_39A1F0C *)Method_System_Nullable_float___ctor__);
            v864 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
            System_Action___ctor(v864, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
            if ( !v173 )
              goto LABEL_1425;
            v909 = *(System_Nullable_Vector3__o *)&v882.fields._list;
            v865 = size;
            v867 = v173;
            v866 = v164;
            goto LABEL_1411;
          }
        }
        else if ( v172 >= 5 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v162 + 64), 0);
          v849 = *v14;
          if ( !*v14 )
            goto LABEL_1425;
          v818 = v849->fields.mMapCamera;
          if ( (int)updated >= 1 )
          {
            if ( !v818 )
              goto LABEL_1425;
            v842 = v849->fields.mMapCamera;
            v916 = v890;
            v848 = v164;
            goto LABEL_1375;
          }
LABEL_1313:
          v300 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
          System_Action___ctor(v300, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
          if ( !v818 )
            goto LABEL_1425;
          v301 = v818;
          v911 = v890;
          v302 = v164;
          goto LABEL_1368;
        }
        if ( !*v14 )
          goto LABEL_1425;
        v818 = (*v14)->fields.mMapCamera;
        goto LABEL_1313;
      case 304:
        updated = (__int64)v23->fields.param;
        if ( !updated )
          goto LABEL_1425;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
        if ( !updated )
          goto LABEL_1425;
        v277 = *(_DWORD *)(updated + 24);
        v278 = updated;
        if ( v277 <= 1 )
          goto LABEL_1321;
        v279 = System_Single__Parse(*(System_String_o **)(updated + 32), 0);
        if ( *(_DWORD *)(v278 + 24) <= 1u )
          goto LABEL_1426;
        v280 = v279;
        v281 = System_Single__Parse(*(System_String_o **)(v278 + 40), 0);
        if ( !*v14 )
          goto LABEL_1425;
        v282 = (*v14)->fields.mMapCamera;
        v283 = v281 * 0.001;
        if ( v283 >= 0.0 )
          v284 = v283;
        else
          v284 = 0.5;
        if ( v277 < 3 )
        {
          v285 = 5;
        }
        else
        {
          if ( *(_DWORD *)(v278 + 24) <= 2u )
            goto LABEL_1426;
          v285 = System_Int32__Parse(*(System_String_o **)(v278 + 48), 0);
        }
        v752 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
        System_Action___ctor(
          v752,
          (Il2CppObject *)v5,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__,
          0);
        if ( !v282 )
          goto LABEL_1425;
        MapCamera__StartAutoZoom(v282, v280, v284, v285, v752, 0);
        return;
      default:
        if ( id == 350 )
        {
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1425;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1425;
          v176 = updated;
          if ( *(int *)(updated + 24) > 0 )
          {
            v177 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            if ( v177 >= 1 )
            {
              v178 = v177;
              v179 = 0.5;
              if ( *(int *)(v176 + 24) > 1 )
              {
                v180 = System_Int32__Parse(*(System_String_o **)(v176 + 40), 0);
                if ( *(int *)(v176 + 24) >= 3 )
                  v179 = System_Single__Parse(*(System_String_o **)(v176 + 48), 0) * 0.001;
              }
              else
              {
                v180 = 15;
              }
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4D2A6EE )
              {
                sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
                byte_4D2A6EE = 1;
              }
              updated = (__int64)TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                updated = (__int64)TerminalSceneComponent_TypeInfo;
              }
              v815 = **(_QWORD **)(updated + 184);
              if ( !v815 )
                goto LABEL_1425;
              v816 = *(ScrTerminalMap_o **)(v815 + 264);
              v817 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
              System_Action___ctor(
                v817,
                (Il2CppObject *)v5,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__,
                0);
              if ( !v816 )
                goto LABEL_1425;
              ScrTerminalMap__RequestMapMove_37712644(v816, v178, v179, v180, v817, 0);
              return;
            }
          }
          goto LABEL_1321;
        }
        if ( (unsigned int)(id - 351) > 1 )
          goto LABEL_21;
        updated = (__int64)v23->fields.param;
        if ( !updated )
          goto LABEL_1425;
        updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
        if ( !updated )
          goto LABEL_1425;
        v286 = updated;
        if ( *(int *)(updated + 24) <= 4 )
          goto LABEL_1321;
        v287 = System_Single__Parse(*(System_String_o **)(updated + 32), 0);
        if ( *(_DWORD *)(v286 + 24) <= 1u )
          goto LABEL_1426;
        v288 = v287;
        v289 = System_Single__Parse(*(System_String_o **)(v286 + 40), 0);
        if ( *(_DWORD *)(v286 + 24) <= 2u )
          goto LABEL_1426;
        v290 = v289;
        v291 = System_Single__Parse(*(System_String_o **)(v286 + 48), 0);
        if ( *(_DWORD *)(v286 + 24) <= 3u )
          goto LABEL_1426;
        v292 = v291;
        v293 = System_Single__Parse(*(System_String_o **)(v286 + 56), 0);
        if ( *(_DWORD *)(v286 + 24) <= 4u )
          goto LABEL_1426;
        v294 = v293;
        v295 = System_Int32__Parse(*(System_String_o **)(v286 + 64), 0);
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4D2A6EE )
        {
          sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
          byte_4D2A6EE = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v296 = **(_QWORD **)(updated + 184);
        if ( !v296 )
          goto LABEL_1425;
        updated = *(_QWORD *)(v296 + 264);
        if ( !updated )
          goto LABEL_1425;
        v910.fields.y = v290;
        v910.fields.z = v292;
        v297 = v294 * 0.001;
        v910.fields.x = v288;
        v891 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v910, 0);
        if ( v23->fields.id != 352 || *(int *)(v286 + 24) < 6 )
        {
          if ( !*v14 )
            goto LABEL_1425;
          v299 = (*v14)->fields.mMapCamera;
          v300 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
          System_Action___ctor(
            v300,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__,
            0);
          if ( !v299 )
            goto LABEL_1425;
          v301 = v299;
          v911 = v891;
          v302 = v297;
          v303 = v295;
          goto LABEL_1369;
        }
        if ( !*v14 )
          goto LABEL_1425;
        v869 = (*v14)->fields.mMapCamera;
        *(_QWORD *)&v905.fields.hasValue = &v882;
        *(_QWORD *)&v905.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
        *(_OWORD *)&v882.fields._list = 0u;
        System_Nullable_Vector3____ctor(v905, v891, v298);
        if ( *(_DWORD *)(v286 + 24) <= 5u )
          goto LABEL_1426;
        v870 = System_Single__Parse(*(System_String_o **)(v286 + 72), 0);
        size = 0;
        System_Nullable_float____ctor(
          (System_Nullable_float__o)&size,
          v870,
          (const MethodInfo_39A1F0C *)Method_System_Nullable_float___ctor__);
        v864 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
        System_Action___ctor(
          v864,
          (Il2CppObject *)v5,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__,
          0);
        if ( !v869 )
          goto LABEL_1425;
        v909 = *(System_Nullable_Vector3__o *)&v882.fields._list;
        v865 = size;
        v867 = v869;
        v866 = v297;
        v868 = v295;
        goto LABEL_1412;
    }
  }
  if ( id > 501 )
  {
    if ( id <= 520 )
    {
      if ( id != 510 )
      {
        if ( id != 520 )
          goto LABEL_21;
        v104 = System_Single__Parse(v23->fields.param, 0);
        if ( v104 <= 0.0 )
        {
          updated = (__int64)AvalonSceneManager_TypeInfo;
          if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            updated = (__int64)AvalonSceneManager_TypeInfo;
          }
          v104 = **(float **)(updated + 184);
        }
        if ( !*v14 )
          goto LABEL_1425;
        (*v14)->fields._IsAfterFadeInPlay_k__BackingField = 1;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4D2A6EE )
        {
          sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
          byte_4D2A6EE = 1;
        }
        v105 = TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v105 = TerminalSceneComponent_TypeInfo;
        }
        v106 = v105->static_fields->mInstance;
        v107 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
        System_Action___ctor(
          v107,
          (Il2CppObject *)v5,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__23__,
          0);
        if ( !v106 )
          goto LABEL_1425;
        v108 = v106;
        DEFAULT_FADE_TIME = v104;
        v110 = v107;
LABEL_145:
        TerminalSceneComponent__Fadein_MapDisp(v108, DEFAULT_FADE_TIME, v110, 0);
        return;
      }
      updated = (__int64)v23->fields.param;
      if ( !updated )
        goto LABEL_1425;
      updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
      if ( !updated )
        goto LABEL_1425;
      v222 = updated;
      if ( *(_DWORD *)(updated + 24) )
      {
        v223 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
        v224 = 0.5;
        if ( *(int *)(v222 + 24) >= 2 )
        {
          v225 = System_Int32__Parse(*(System_String_o **)(v222 + 40), 0);
          if ( *(int *)(v222 + 24) >= 3 )
            v224 = System_Single__Parse(*(System_String_o **)(v222 + 48), 0);
        }
        else
        {
          v225 = v223;
          v223 = -1;
        }
        updated = (__int64)*v14;
        if ( !*v14 )
          goto LABEL_1425;
        v324 = QuestAfterAction__GetMapComponent_object_(
                 (QuestAfterAction_o *)updated,
                 0,
                 v225,
                 this,
                 (const MethodInfo_323DD94 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v324, 0, 0) )
        {
          if ( v223 >= 1 )
          {
            updated = (__int64)*v14;
            if ( !*v14 )
              goto LABEL_1425;
            v325 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     0,
                     v223,
                     this,
                     (const MethodInfo_323DD94 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v325, 0, 0) )
            {
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4D2A6EE )
              {
                sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
                byte_4D2A6EE = 1;
              }
              updated = (__int64)TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                updated = (__int64)TerminalSceneComponent_TypeInfo;
              }
              v326 = **(_QWORD **)(updated + 184);
              if ( !v326 )
                goto LABEL_1425;
              if ( !v325 )
                goto LABEL_1425;
              v327 = *(ScrTerminalMap_o **)(v326 + 264);
              updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v325, 0);
              if ( !v327 )
                goto LABEL_1425;
              ScrTerminalMap__SetPlayerIcon(v327, (UnityEngine_GameObject_o *)updated, 0);
            }
          }
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4D2A6EE )
          {
            sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
            byte_4D2A6EE = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v328 = **(_QWORD **)(updated + 184);
          if ( !v328 )
            goto LABEL_1425;
          if ( !v324 )
            goto LABEL_1425;
          v329 = *(ScrTerminalMap_o **)(v328 + 264);
          v330 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v324, 0);
          v331 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
          System_Action___ctor(v331, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
          if ( !v329 )
            goto LABEL_1425;
          ScrTerminalMap__MovePlayerIcon(v329, v330, v225, v331, v224, 0);
        }
        return;
      }
      goto LABEL_1426;
    }
    if ( id == 530 )
    {
      v181 = sub_1C93D20(QuestAfterAction_StateMain___c__DisplayClass16_16_TypeInfo);
      QuestAfterAction_StateMain___c__DisplayClass16_16___ctor(
        (QuestAfterAction_StateMain___c__DisplayClass16_16_o *)v181,
        0);
      if ( !v181 )
        goto LABEL_1425;
      *(_QWORD *)(v181 + 32) = v5;
      v188 = v181 + 32;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v181 + 32), v5, v182, v183, v184, v185, v186, v187);
      v189 = System_Int32__Parse(v23->fields.param, 0);
      updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !updated )
        goto LABEL_1425;
      updated = (__int64)DataManager__GetMasterData_object_(
                           (DataManager_o *)updated,
                           (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( !updated )
        goto LABEL_1425;
      v190 = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
               v189,
               (const MethodInfo_3463274 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
      *(_QWORD *)(v181 + 16) = v190;
      v191 = (__int64 *)(v181 + 16);
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v181 + 16), (int32_t)v190, v192, v193, v194, v195, v196, v197);
      updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !updated )
        goto LABEL_1425;
      QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)updated, v189, 0);
      *(_QWORD *)(v181 + 24) = QuestInfo;
      v199 = v181 + 24;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v181 + 24), (int32_t)QuestInfo, v200, v201, v202, v203, v204, v205);
      if ( !*(_QWORD *)(v181 + 24) )
        goto LABEL_1425;
      if ( *(_DWORD *)(*(_QWORD *)(v181 + 24) + 32LL) == 1 )
      {
        updated = *v191;
        if ( !*v191 )
          goto LABEL_1425;
        if ( QuestEntity__HasFlag((QuestEntity_o *)updated, 2, 0) )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4D2D130 )
          {
            sub_1C93AD4(&TerminalPramsManager_TypeInfo);
            byte_4D2D130 = 1;
          }
          updated = (__int64)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            updated = (__int64)TerminalPramsManager_TypeInfo;
          }
          *(_DWORD *)(*(_QWORD *)(updated + 184) + 20LL) = v189;
          if ( !*(_QWORD *)v199 )
            goto LABEL_1425;
          v207 = *(_DWORD *)(*(_QWORD *)v199 + 44LL);
          if ( !byte_4D2D134 )
          {
            sub_1C93AD4(&TerminalPramsManager_TypeInfo);
            updated = (__int64)TerminalPramsManager_TypeInfo;
            byte_4D2D134 = 1;
          }
          if ( !*(_DWORD *)(updated + 224) )
          {
            j_il2cpp_runtime_class_init_0(updated);
            updated = (__int64)TerminalPramsManager_TypeInfo;
          }
          *(_DWORD *)(*(_QWORD *)(updated + 184) + 24LL) = v207;
          if ( !*(_QWORD *)v188 )
            goto LABEL_1425;
          v208 = *(_QWORD *)(*(_QWORD *)v188 + 24LL);
          if ( !v208 )
            goto LABEL_1425;
          *(_BYTE *)(v208 + 205) = 1;
          v209 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
          NetworkManager_ResultCallbackFunc___ctor(
            v209,
            (Il2CppObject *)v181,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__24__,
            0);
          if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
          Request_object = NetworkManager__getRequest_object_(
                             v209,
                             (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_BattleSetupScenarioRequest___);
          if ( !byte_4D2A7BF )
          {
            sub_1C93AD4(&TerminalPramsManager_TypeInfo);
            byte_4D2A7BF = 1;
          }
          updated = (__int64)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            updated = (__int64)TerminalPramsManager_TypeInfo;
          }
          v211 = *(_DWORD *)(*(_QWORD *)(updated + 184) + 20LL);
          if ( !byte_4D2A7BE )
          {
            sub_1C93AD4(&TerminalPramsManager_TypeInfo);
            updated = (__int64)TerminalPramsManager_TypeInfo;
            byte_4D2A7BE = 1;
          }
          if ( !*(_DWORD *)(updated + 224) )
          {
            j_il2cpp_runtime_class_init_0(updated);
            updated = (__int64)TerminalPramsManager_TypeInfo;
          }
          if ( !Request_object )
            goto LABEL_1425;
          BattleSetupScenarioRequest__beginRequest(
            (BattleSetupScenarioRequest_o *)Request_object,
            v211,
            *(_DWORD *)(*(_QWORD *)(updated + 184) + 24LL) + 1,
            0);
        }
      }
      else
      {
        QuestAfterAction_StateMain__ForceEndAnim(this, 1, v206);
      }
      return;
    }
    if ( id != 540 )
      goto LABEL_21;
    updated = (__int64)v23->fields.param;
    if ( !updated )
      goto LABEL_1425;
    updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
    if ( !updated )
      goto LABEL_1425;
    v35 = updated;
    if ( !*(_DWORD *)(updated + 24) )
      goto LABEL_1426;
    v36 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
    if ( *(int *)(v35 + 24) < 2 )
    {
      v37 = -1;
    }
    else
    {
      v37 = System_Int32__Parse(*(System_String_o **)(v35 + 40), 0);
      if ( *(int *)(v35 + 24) >= 3 )
      {
        v38 = System_Int32__Parse(*(System_String_o **)(v35 + 48), 0);
LABEL_471:
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4D2AFE8 )
        {
          sub_1C93AD4(&TerminalPramsManager_TypeInfo);
          byte_4D2AFE8 = 1;
        }
        v315 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v315 = TerminalPramsManager_TypeInfo;
        }
        v315->static_fields->_IsAutoResume_k__BackingField = 1;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4D2A6EE )
        {
          sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
          byte_4D2A6EE = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v316 = **(_QWORD **)(updated + 184);
        if ( !v316 )
          goto LABEL_1425;
        updated = *(_QWORD *)(v316 + 264);
        if ( !updated )
          goto LABEL_1425;
        if ( !ScrTerminalMap__RequestMapChange((ScrTerminalMap_o *)updated, v36, v37, v38, 0) )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4D2AFE8 )
          {
            sub_1C93AD4(&TerminalPramsManager_TypeInfo);
            byte_4D2AFE8 = 1;
          }
          v332 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v332 = TerminalPramsManager_TypeInfo;
          }
          v332->static_fields->_IsAutoResume_k__BackingField = 0;
          goto LABEL_21;
        }
        ((void (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
          this,
          this->klass->vtable._14_EndAnim.method);
        updated = (__int64)*v14;
        if ( !*v14 )
          goto LABEL_1425;
        QuestAfterAction__SetState((QuestAfterAction_o *)updated, 0, v317);
        return;
      }
    }
    v38 = -1;
    goto LABEL_471;
  }
  switch ( id )
  {
    case 400:
      v63 = sub_1C93D20(QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo);
      QuestAfterAction_StateMain___c__DisplayClass16_10___ctor(
        (QuestAfterAction_StateMain___c__DisplayClass16_10_o *)v63,
        0);
      if ( !v63 )
        goto LABEL_1425;
      *(_QWORD *)(v63 + 24) = v5;
      v70 = v63 + 24;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v63 + 24), v5, v64, v65, v66, v67, v68, v69);
      updated = (__int64)v23->fields.param;
      if ( !updated )
        goto LABEL_1425;
      updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
      if ( !updated )
        goto LABEL_1425;
      v71 = *(_QWORD *)(updated + 24);
      v72 = updated;
      if ( v71 )
      {
        if ( !(_DWORD)v71 )
          goto LABEL_1426;
        updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
        v73 = updated;
        if ( *(int *)(v72 + 24) >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v72 + 40), 0);
          v74 = (int)updated < 1;
          if ( *(int *)(v72 + 24) < 3 )
          {
            v75 = 0;
          }
          else
          {
            updated = System_Int32__Parse(*(System_String_o **)(v72 + 48), 0);
            v75 = (int)updated > 0;
          }
          goto LABEL_1223;
        }
      }
      else
      {
        v73 = 0;
      }
      v75 = 0;
      v74 = 1;
LABEL_1223:
      if ( !*(_QWORD *)v70 )
        goto LABEL_1425;
      updated = *(_QWORD *)(*(_QWORD *)v70 + 24LL);
      if ( !updated )
        goto LABEL_1425;
      v727 = QuestAfterAction__GetMapComponent_object_(
               (QuestAfterAction_o *)updated,
               2,
               v73,
               this,
               (const MethodInfo_323DD94 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
      *(_QWORD *)(v63 + 16) = v727;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v63 + 16), (int32_t)v727, v728, v729, v730, v731, v732, v733);
      v734 = *(UnityEngine_Object_o **)(v63 + 16);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      updated = UnityEngine_Object__op_Equality(v734, 0, 0);
      if ( (updated & 1) != 0 )
        return;
      v735 = *(MapGimmickComponent_o **)(v63 + 16);
      if ( !v735 )
        goto LABEL_1425;
      v735->fields.isForceNotActive = v75;
      v736 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      v737 = v736;
      if ( v74 )
      {
        System_Action___ctor(
          v736,
          (Il2CppObject *)v63,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__14__,
          0);
        v531 = 2;
        v738 = v735;
        v739 = v737;
LABEL_1328:
        MapGimmickComponent__SetState(v738, v531, v739, v530);
        return;
      }
      System_Action___ctor(
        v736,
        (Il2CppObject *)v63,
        Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__13__,
        0);
      MapGimmickComponent__SetState(v735, 2, v737, v831);
      updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
                  this,
                  this->klass->vtable._14_EndAnim.method);
      v832 = *(_QWORD *)(v63 + 24);
      if ( !v832 )
        goto LABEL_1425;
      goto LABEL_1337;
    case 401:
      v437 = sub_1C93D20(QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo);
      QuestAfterAction_StateMain___c__DisplayClass16_11___ctor(
        (QuestAfterAction_StateMain___c__DisplayClass16_11_o *)v437,
        0);
      if ( !v437 )
        goto LABEL_1425;
      *(_QWORD *)(v437 + 24) = v5;
      v444 = v437 + 24;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v437 + 24), v5, v438, v439, v440, v441, v442, v443);
      updated = (__int64)v23->fields.param;
      if ( !updated )
        goto LABEL_1425;
      updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
      if ( !updated )
        goto LABEL_1425;
      v445 = *(_QWORD *)(updated + 24);
      v446 = updated;
      if ( v445 )
      {
        if ( !(_DWORD)v445 )
          goto LABEL_1426;
        updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
        v447 = updated;
        if ( *(int *)(v446 + 24) >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v446 + 40), 0);
          v448 = (int)updated < 1;
          if ( *(int *)(v446 + 24) < 3 )
          {
            v449 = 0;
          }
          else
          {
            updated = System_Int32__Parse(*(System_String_o **)(v446 + 48), 0);
            v449 = (int)updated > 0;
          }
          goto LABEL_1233;
        }
      }
      else
      {
        v447 = 0;
      }
      v449 = 0;
      v448 = 1;
LABEL_1233:
      if ( !*(_QWORD *)v444 )
        goto LABEL_1425;
      updated = *(_QWORD *)(*(_QWORD *)v444 + 24LL);
      if ( !updated )
        goto LABEL_1425;
      v740 = QuestAfterAction__GetMapComponent_object_(
               (QuestAfterAction_o *)updated,
               2,
               v447,
               this,
               (const MethodInfo_323DD94 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
      *(_QWORD *)(v437 + 16) = v740;
      v741 = (MapGimmickComponent_o **)(v437 + 16);
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v437 + 16), (int32_t)v740, v742, v743, v744, v745, v746, v747);
      v748 = *(UnityEngine_Object_o **)(v437 + 16);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      updated = UnityEngine_Object__op_Equality(v748, 0, 0);
      if ( (updated & 1) != 0 )
        return;
      v749 = *v741;
      if ( !*v741 )
        goto LABEL_1425;
      v749->fields.isForceLoop = v449;
      v749->fields.isForceNotActive = 0;
      if ( *(int *)(v446 + 24) >= 4 )
      {
        updated = System_Int32__Parse(*(System_String_o **)(v446 + 56), 0);
        if ( !*v741 )
          goto LABEL_1425;
        MapGimmickComponent__SetUseAnimNum(*v741, updated, 1, v750);
        v749 = *v741;
      }
      v751 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      v501 = v751;
      if ( v448 )
      {
        System_Action___ctor(
          v751,
          (Il2CppObject *)v437,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__16__,
          0);
        if ( !v749 )
          goto LABEL_1425;
        v531 = 3;
        v738 = v749;
LABEL_1327:
        v739 = v501;
        goto LABEL_1328;
      }
      System_Action___ctor(
        v751,
        (Il2CppObject *)v437,
        Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__15__,
        0);
      if ( !v749 )
        goto LABEL_1425;
      MapGimmickComponent__SetState(v749, 3, v501, v833);
      updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
                  this,
                  this->klass->vtable._14_EndAnim.method);
      v832 = *(_QWORD *)v444;
      if ( !*(_QWORD *)v444 )
        goto LABEL_1425;
LABEL_1337:
      ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, const MethodInfo *))this->klass->vtable._13_UpdateAnim.methodPtr)(
        this,
        *(_QWORD *)(v832 + 24),
        this->klass->vtable._13_UpdateAnim.method);
      return;
    case 402:
      updated = (__int64)v23->fields.param;
      if ( !updated )
        goto LABEL_1425;
      updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
      if ( !updated )
        goto LABEL_1425;
      v425 = *(_QWORD *)(updated + 24);
      v426 = updated;
      if ( v425 )
      {
        if ( !(_DWORD)v425 )
          goto LABEL_1426;
        v427 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
        if ( *(int *)(v426 + 24) >= 2 )
        {
          v428 = System_Int32__Parse(*(System_String_o **)(v426 + 40), 0) > 0;
          goto LABEL_1205;
        }
      }
      else
      {
        v427 = 0;
      }
      v428 = 0;
LABEL_1205:
      updated = (__int64)*v14;
      if ( !*v14 )
        goto LABEL_1425;
      v722 = QuestAfterAction__GetMapComponent_object_(
               (QuestAfterAction_o *)updated,
               2,
               v427,
               this,
               (const MethodInfo_323DD94 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v722, 0, 0);
      if ( (updated & 1) == 0 )
      {
        if ( !v722 )
          goto LABEL_1425;
        BYTE1(v722[6].monitor) = v428;
        MapGimmickComponent__SetDispAnim_36812548((MapGimmickComponent_o *)v722, 0, 0.0, 0, v723);
        v559 = v722[7].klass;
        if ( !v559 )
          goto LABEL_1425;
LABEL_1284:
        v559[4] = 0;
        goto LABEL_21;
      }
      return;
    case 403:
      updated = (__int64)v23->fields.param;
      if ( !updated )
        goto LABEL_1425;
      updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
      if ( !updated )
        goto LABEL_1425;
      v429 = *(_QWORD *)(updated + 24);
      v430 = updated;
      if ( v429 )
      {
        if ( !(_DWORD)v429 )
          goto LABEL_1426;
        v431 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
        if ( *(int *)(v430 + 24) >= 2 )
        {
          v432 = System_Int32__Parse(*(System_String_o **)(v430 + 40), 0) > 0;
          goto LABEL_1214;
        }
      }
      else
      {
        v431 = 0;
      }
      v432 = 0;
LABEL_1214:
      updated = (__int64)*v14;
      if ( !*v14 )
        goto LABEL_1425;
      v724 = QuestAfterAction__GetMapComponent_object_(
               (QuestAfterAction_o *)updated,
               2,
               v431,
               this,
               (const MethodInfo_323DD94 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v724, 0, 0);
      if ( (updated & 1) == 0 )
      {
        if ( !v724 )
          goto LABEL_1425;
        LOBYTE(v724[6].monitor) = v432;
        BYTE1(v724[6].monitor) = 0;
        MapGimmickComponent__SetDispAnim_36812548((MapGimmickComponent_o *)v724, 1, 0.0, 0, v725);
        v726 = v724[7].klass;
        if ( !v726 )
          goto LABEL_1425;
        LODWORD(v726->_1.name) = 1;
        goto LABEL_21;
      }
      return;
    case 404:
      updated = (__int64)v23->fields.param;
      if ( !updated )
        goto LABEL_1425;
      updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
      if ( !updated )
        goto LABEL_1425;
      v404 = updated;
      if ( *(int *)(updated + 24) <= 4 )
        goto LABEL_1321;
      v405 = System_Single__Parse(*(System_String_o **)(updated + 56), 0);
      if ( !*(_DWORD *)(v404 + 24) )
        goto LABEL_1426;
      v406 = *v14;
      v407 = v405;
      updated = System_Int32__Parse(*(System_String_o **)(v404 + 32), 0);
      if ( !v406 )
        goto LABEL_1425;
      v408 = QuestAfterAction__GetMapComponent_object_(
               v406,
               2,
               updated,
               this,
               (const MethodInfo_323DD94 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v408, 0, 0) )
        return;
      v409 = *(int *)(v404 + 24) >= 6 && System_Int32__Parse(*(System_String_o **)(v404 + 72), 0) > 0;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4D2A6EE )
      {
        sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
        byte_4D2A6EE = 1;
      }
      updated = (__int64)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        updated = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v850 = **(_QWORD **)(updated + 184);
      if ( !v850 )
        goto LABEL_1425;
      if ( *(_DWORD *)(v404 + 24) <= 1u )
        goto LABEL_1426;
      v851 = *(ScrTerminalMap_o **)(v850 + 264);
      v852 = System_Single__Parse(*(System_String_o **)(v404 + 40), 0);
      if ( *(_DWORD *)(v404 + 24) <= 2u )
        goto LABEL_1426;
      v853 = v852;
      v854 = System_Single__Parse(*(System_String_o **)(v404 + 48), 0);
      if ( !v851 )
        goto LABEL_1425;
      v902 = ScrTerminalMap__LocalPosFromCoord(v851, v853, v854, 0.0, 0.0, 0);
      if ( *(_DWORD *)(v404 + 24) <= 4u )
        goto LABEL_1426;
      v855 = v407 * 0.001;
      updated = System_Int32__Parse(*(System_String_o **)(v404 + 64), 0);
      v857 = updated;
      if ( v409 )
      {
        if ( !v408 )
          goto LABEL_1425;
        MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v408, v902, v855, updated, 0, v856);
        goto LABEL_1321;
      }
      v858 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v858, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
      if ( !v408 )
        goto LABEL_1425;
      v824 = (MapGimmickComponent_o *)v408;
      v913 = v902;
      v827 = v855;
      v828 = v857;
      v829 = v858;
LABEL_1399:
      MapGimmickComponent__SetMoveAnim(v824, v913, v827, v828, v829, v823);
      return;
    case 405:
      v450 = sub_1C93D20(QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo);
      QuestAfterAction_StateMain___c__DisplayClass16_12___ctor(
        (QuestAfterAction_StateMain___c__DisplayClass16_12_o *)v450,
        0);
      if ( !v450 )
        goto LABEL_1425;
      *(_QWORD *)(v450 + 24) = v5;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v450 + 24), v5, v451, v452, v453, v454, v455, v456);
      v457 = *(_QWORD *)(v450 + 24);
      if ( !v457 )
        goto LABEL_1425;
      v458 = *(QuestAfterAction_o **)(v457 + 24);
      updated = System_Int32__Parse(v23->fields.param, 0);
      if ( !v458 )
        goto LABEL_1425;
      v459 = QuestAfterAction__GetMapComponent_object_(
               v458,
               2,
               updated,
               this,
               (const MethodInfo_323DD94 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
      *(_QWORD *)(v450 + 16) = v459;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v450 + 16), (int32_t)v459, v460, v461, v462, v463, v464, v465);
      v466 = *(UnityEngine_Object_o **)(v450 + 16);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v466, 0, 0) )
        return;
      v467 = *(MapGimmickComponent_o **)(v450 + 16);
      v468 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(
        v468,
        (Il2CppObject *)v450,
        Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__17__,
        0);
      if ( !v467 )
        goto LABEL_1425;
      MapGimmickComponent__SetState(v467, 3, v468, v469);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4D2A6EE )
      {
        sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
        byte_4D2A6EE = 1;
      }
      updated = (__int64)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        updated = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v470 = **(TerminalSceneComponent_o ***)(updated + 184);
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( !v470 )
        goto LABEL_1425;
      v108 = v470;
      v110 = 0;
      DEFAULT_FADE_TIME = AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME;
      goto LABEL_145;
    case 406:
      v471 = sub_1C93D20(QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo);
      QuestAfterAction_StateMain___c__DisplayClass16_13___ctor(
        (QuestAfterAction_StateMain___c__DisplayClass16_13_o *)v471,
        0);
      if ( !v471 )
        goto LABEL_1425;
      *(_QWORD *)(v471 + 32) = v5;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v471 + 32), v5, v472, v473, v474, v475, v476, v477);
      updated = (__int64)v23->fields.param;
      if ( !updated )
        goto LABEL_1425;
      v478 = System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
      *(_QWORD *)(v471 + 24) = v478;
      v479 = (__int64 *)(v471 + 24);
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v471 + 24), (int32_t)v478, v480, v481, v482, v483, v484, v485);
      v486 = *(_QWORD *)(v471 + 32);
      if ( !v486 )
        goto LABEL_1425;
      v487 = *v479;
      if ( !*v479 )
        goto LABEL_1425;
      if ( !*(_DWORD *)(v487 + 24) )
        goto LABEL_1426;
      v488 = *(QuestAfterAction_o **)(v486 + 24);
      updated = System_Int32__Parse(*(System_String_o **)(v487 + 32), 0);
      if ( !v488 )
        goto LABEL_1425;
      v489 = QuestAfterAction__GetMapComponent_object_(
               v488,
               2,
               updated,
               this,
               (const MethodInfo_323DD94 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
      *(_QWORD *)(v471 + 16) = v489;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v471 + 16), (int32_t)v489, v490, v491, v492, v493, v494, v495);
      v496 = *(UnityEngine_Object_o **)(v471 + 16);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v496, 0, 0) )
        return;
      v497 = *(MapGimmickComponent_o **)(v471 + 16);
      v498 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      v499 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__18__;
      v500 = (Il2CppObject *)v471;
      v501 = v498;
      goto LABEL_779;
    case 407:
      updated = (__int64)v23->fields.param;
      if ( !updated )
        goto LABEL_1425;
      updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
      if ( !updated )
        goto LABEL_1425;
      v433 = updated;
      if ( !*(_DWORD *)(updated + 24) )
        goto LABEL_1426;
      v434 = *v14;
      updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
      if ( !v434 )
        goto LABEL_1425;
      v435 = QuestAfterAction__GetMapComponent_object_(
               v434,
               2,
               updated,
               this,
               (const MethodInfo_323DD94 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v435, 0, 0);
      if ( (updated & 1) != 0 )
        return;
      if ( !v435 )
        goto LABEL_1425;
      updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v435, 0);
      if ( !updated )
        goto LABEL_1425;
      updated = (__int64)UnityEngine_GameObject__GetComponentInChildren_object_(
                           (UnityEngine_GameObject_o *)updated,
                           (const MethodInfo_31FC2E8 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
      if ( *(_DWORD *)(v433 + 24) <= 1u )
        goto LABEL_1426;
      v436 = (UIWidget_o *)updated;
      updated = UnityEngine_ColorUtility__TryParseHtmlString(*(System_String_o **)(v433 + 40), &color, 0);
      if ( !v436 )
        goto LABEL_1425;
      UIWidget__set_color(v436, color, 0);
      goto LABEL_1321;
    case 408:
      v510 = sub_1C93D20(QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo);
      QuestAfterAction_StateMain___c__DisplayClass16_15___ctor(
        (QuestAfterAction_StateMain___c__DisplayClass16_15_o *)v510,
        0);
      if ( !v510 )
        goto LABEL_1425;
      *(_QWORD *)(v510 + 24) = v5;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v510 + 24), v5, v511, v512, v513, v514, v515, v516);
      v517 = *(_QWORD *)(v510 + 24);
      if ( !v517 )
        goto LABEL_1425;
      v518 = *(QuestAfterAction_o **)(v517 + 24);
      updated = System_Int32__Parse(v23->fields.param, 0);
      if ( !v518 )
        goto LABEL_1425;
      v519 = QuestAfterAction__GetMapComponent_object_(
               v518,
               2,
               updated,
               this,
               (const MethodInfo_323DD94 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
      *(_QWORD *)(v510 + 16) = v519;
      v520 = v510 + 16;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v510 + 16), (int32_t)v519, v521, v522, v523, v524, v525, v526);
      v527 = *(UnityEngine_Object_o **)(v510 + 16);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v527, 0, 0) )
        return;
      updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !*(_QWORD *)v520 || !updated )
        goto LABEL_1425;
      v528 = QuestTree__CheckMapGimmickCond_37205160(
               (QuestTree_o *)updated,
               *(MapControl_MapGimmickInfo_o **)(*(_QWORD *)v520 + 112LL),
               0);
      v497 = *(MapGimmickComponent_o **)v520;
      v529 = v528;
      v498 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      v501 = v498;
      if ( v529 )
      {
        v499 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__20__;
        v500 = (Il2CppObject *)v510;
LABEL_779:
        System_Action___ctor(v498, v500, *v499, 0);
        if ( !v497 )
          goto LABEL_1425;
        v531 = 3;
      }
      else
      {
        System_Action___ctor(
          v498,
          (Il2CppObject *)v510,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__21__,
          0);
        if ( !v497 )
          goto LABEL_1425;
        v531 = 2;
      }
      v738 = v497;
      goto LABEL_1327;
    case 409:
      updated = (__int64)v23->fields.param;
      if ( !updated )
        goto LABEL_1425;
      updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
      if ( !updated )
        goto LABEL_1425;
      v416 = *(_QWORD *)(updated + 24);
      v417 = updated;
      if ( v416 )
      {
        if ( !(_DWORD)v416 )
          goto LABEL_1426;
        v418 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
        if ( *(int *)(v417 + 24) >= 2 )
        {
          v419 = System_Int32__Parse(*(System_String_o **)(v417 + 40), 0) > 0;
          goto LABEL_1196;
        }
      }
      else
      {
        v418 = 0;
      }
      v419 = 0;
LABEL_1196:
      updated = (__int64)*v14;
      if ( !*v14 )
        goto LABEL_1425;
      v716 = QuestAfterAction__GetMapComponent_object_(
               (QuestAfterAction_o *)updated,
               2,
               v418,
               this,
               (const MethodInfo_323DD94 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v716, 0, 0);
      if ( (updated & 1) == 0 )
      {
        if ( !v716 )
          goto LABEL_1425;
        LOBYTE(v716[6].monitor) = v419;
        BYTE1(v716[6].monitor) = 0;
        AnimTime = MapGimmickComponent__GetAnimTime((MapGimmickComponent_o *)v716, v7);
        MapGimmickComponent__SetDispAnim_36812548((MapGimmickComponent_o *)v716, 1, AnimTime, 1, v718);
        v719 = v716[7].klass;
        if ( !v719 )
          goto LABEL_1425;
        LODWORD(v719->_1.name) = 1;
        v720 = this->klass;
        this->fields.IsAnimDoing = 0;
        v721 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))v720->vtable._11_get_CommandIndex.methodPtr)(
                 this,
                 v720->vtable._11_get_CommandIndex.method);
        ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, const MethodInfo *))this->klass->vtable._12_set_CommandIndex.methodPtr)(
          this,
          (unsigned int)(v721 + 1),
          this->klass->vtable._12_set_CommandIndex.method);
        goto LABEL_22;
      }
      return;
    case 410:
      updated = (__int64)v23->fields.param;
      if ( !updated )
        goto LABEL_1425;
      updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
      if ( !updated )
        goto LABEL_1425;
      v395 = updated;
      if ( *(int *)(updated + 24) <= 2 )
        goto LABEL_1321;
      v502 = *v14;
      updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
      if ( !v502 )
        goto LABEL_1425;
      v397 = QuestAfterAction__GetMapComponent_object_(
               v502,
               2,
               updated,
               this,
               (const MethodInfo_323DD94 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v397, 0, 0);
      if ( (updated & 1) != 0 )
        return;
      if ( *(_DWORD *)(v395 + 24) <= 1u )
        goto LABEL_1426;
      v503 = *v14;
      updated = System_Int32__Parse(*(System_String_o **)(v395 + 40), 0);
      if ( !v503 )
        goto LABEL_1425;
      v413 = updated;
      v415 = v503;
      v414 = 0;
      goto LABEL_747;
    case 411:
      updated = (__int64)v23->fields.param;
      if ( !updated )
        goto LABEL_1425;
      updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
      if ( !updated )
        goto LABEL_1425;
      v395 = updated;
      if ( *(int *)(updated + 24) <= 2 )
        goto LABEL_1321;
      v396 = *v14;
      updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
      if ( !v396 )
        goto LABEL_1425;
      v397 = QuestAfterAction__GetMapComponent_object_(
               v396,
               2,
               updated,
               this,
               (const MethodInfo_323DD94 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v397, 0, 0);
      if ( (updated & 1) != 0 )
        return;
      if ( *(_DWORD *)(v395 + 24) <= 1u )
        goto LABEL_1426;
      v398 = *v14;
      updated = System_Int32__Parse(*(System_String_o **)(v395 + 40), 0);
      if ( !v398 )
        goto LABEL_1425;
      v400 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v398, 2, updated, this, v399);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v400, 0, 0) )
        return;
      v892 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v400, 0);
      if ( *(_DWORD *)(v395 + 24) <= 2u )
        goto LABEL_1426;
      v401 = v892.fields.x;
      v402 = v892.fields.y;
      v403 = v892.fields.z;
      goto LABEL_761;
    case 412:
      updated = (__int64)v23->fields.param;
      if ( !updated )
        goto LABEL_1425;
      updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
      if ( !updated )
        goto LABEL_1425;
      v395 = updated;
      if ( *(int *)(updated + 24) <= 2 )
        goto LABEL_1321;
      v410 = *v14;
      updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
      if ( !v410 )
        goto LABEL_1425;
      v397 = QuestAfterAction__GetMapComponent_object_(
               v410,
               2,
               updated,
               this,
               (const MethodInfo_323DD94 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v397, 0, 0);
      if ( (updated & 1) != 0 )
        return;
      if ( *(_DWORD *)(v395 + 24) <= 1u )
        goto LABEL_1426;
      v411 = *v14;
      updated = System_Int32__Parse(*(System_String_o **)(v395 + 40), 0);
      if ( !v411 )
        goto LABEL_1425;
      v413 = updated;
      v414 = 1;
      v415 = v411;
LABEL_747:
      v504 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v415, v414, v413, this, v412);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v504, 0, 0) )
        return;
      v893 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v504, 0);
      v401 = v893.fields.x;
      v402 = v893.fields.y;
      v403 = v893.fields.z;
      if ( !this->fields.IsMapModel )
        goto LABEL_760;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4D2A6EE )
      {
        sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
        byte_4D2A6EE = 1;
      }
      updated = (__int64)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        updated = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v505 = **(_QWORD **)(updated + 184);
      if ( !v505 )
        goto LABEL_1425;
      updated = *(_QWORD *)(v505 + 264);
      if ( !updated )
        goto LABEL_1425;
      v894 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v893, 0);
      v401 = v894.fields.x;
      v402 = v894.fields.y;
      v403 = v894.fields.z;
LABEL_760:
      if ( *(_DWORD *)(v395 + 24) <= 2u )
        goto LABEL_1426;
LABEL_761:
      v506 = System_Single__Parse(*(System_String_o **)(v395 + 48), 0) * 0.001;
      if ( v506 >= 0.0 )
        v507 = v506;
      else
        v507 = 0.5;
      if ( *(_DWORD *)(v395 + 24) <= 3u )
        goto LABEL_1426;
      v508 = System_Int32__Parse(*(System_String_o **)(v395 + 56), 0);
      if ( *(int *)(v395 + 24) >= 5 )
      {
        updated = System_Int32__Parse(*(System_String_o **)(v395 + 64), 0);
        if ( (int)updated >= 1 )
        {
          if ( !v397 )
            goto LABEL_1425;
          v912.fields.x = v401;
          v912.fields.y = v402;
          v912.fields.z = v403;
          MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v397, v912, v507, v508, 0, v509);
          goto LABEL_21;
        }
      }
      v822 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(v822, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
      if ( !v397 )
        goto LABEL_1425;
      v824 = (MapGimmickComponent_o *)v397;
      v913.fields.x = v401;
      v913.fields.y = v402;
      v913.fields.z = v403;
      v827 = v507;
      v828 = v508;
      v829 = v822;
      goto LABEL_1399;
    default:
      if ( id == 500 )
      {
        v420 = System_Int32__Parse(v23->fields.param, 0);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4D2D4C5 )
        {
          sub_1C93AD4(&TerminalPramsManager_TypeInfo);
          byte_4D2D4C5 = 1;
        }
        v421 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v421 = TerminalPramsManager_TypeInfo;
        }
        v421->static_fields->_AfterActionFocusQuestId_k__BackingField = v420;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        updated = (__int64)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_QuestMaster___);
        if ( !updated )
          goto LABEL_1425;
        if ( DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
               &entity,
               v420,
               (const MethodInfo_34632C0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
        {
          updated = (__int64)entity;
          if ( !entity )
            goto LABEL_1425;
          v422 = *v14;
          updated = QuestEntity__getSpotId((QuestEntity_o *)entity, 0);
          if ( !v422 )
            goto LABEL_1425;
          v423 = QuestAfterAction__GetMapComponent_object_(
                   v422,
                   0,
                   updated,
                   this,
                   (const MethodInfo_323DD94 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v423, 0, 0);
          if ( (updated & 1) != 0 )
          {
            if ( !v423 )
              goto LABEL_1425;
            SrcSpotBasePrefab__SelectSpot((SrcSpotBasePrefab_o *)v423, 0, 0);
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4D2D4C6 )
            {
              sub_1C93AD4(&TerminalPramsManager_TypeInfo);
              byte_4D2D4C6 = 1;
            }
            v424 = TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v424 = TerminalPramsManager_TypeInfo;
            }
            v424->static_fields->_IsBackQuestBoardDisable_k__BackingField = 1;
          }
        }
      }
      else
      {
        if ( id != 501 )
          goto LABEL_21;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        if ( !byte_4D2A6EE )
        {
          sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
          byte_4D2A6EE = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v144 = **(_QWORD **)(updated + 184);
        if ( !v144 )
          goto LABEL_1425;
        updated = *(_QWORD *)(v144 + 256);
        if ( !updated )
          goto LABEL_1425;
        updated = (__int64)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)updated, 0);
        if ( !updated )
          goto LABEL_1425;
        v145 = (PlayMakerFSM_o *)updated;
        ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)updated, 0);
        if ( System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3311/*"CAPTER WAIT"*/, 0) )
        {
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4D2A6EE )
          {
            sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
            byte_4D2A6EE = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v147 = **(_QWORD **)(updated + 184);
          if ( !v147 )
            goto LABEL_1425;
          v148 = *(_QWORD *)(v147 + 256);
          if ( !v148 )
            goto LABEL_1425;
          v149 = *(QuestBoardListViewManager_o **)(v148 + 320);
          updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
          if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
            updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
          }
          v150 = *(System_Action_o **)(*(_QWORD *)(updated + 184) + 8LL);
          if ( !v150 )
          {
            if ( !*(_DWORD *)(updated + 224) )
            {
              j_il2cpp_runtime_class_init_0(updated);
              updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
            }
            v151 = **(Il2CppObject ***)(updated + 184);
            v150 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
            System_Action___ctor(v150, v151, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_22__, 0);
            v152 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
            v152->__9__16_22 = v150;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&v152->__9__16_22,
              (int32_t)v150,
              v153,
              v154,
              v155,
              v156,
              v157,
              v158);
          }
          if ( !v149 )
            goto LABEL_1425;
          QuestBoardListViewManager__SetMode(v149, 4, v150, 0, 0, 0, 0);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4D2A6EE )
          {
            sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
            byte_4D2A6EE = 1;
          }
          v159 = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v159 = TerminalSceneComponent_TypeInfo;
          }
          updated = (__int64)v159->static_fields->mInstance;
          if ( !updated )
            goto LABEL_1425;
          TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)updated, 0);
          PlayMakerFSM__SendEvent(v145, (System_String_o *)StringLiteral_20075/*"gevINFOBAR_BACK"*/, 0);
        }
      }
      goto LABEL_1321;
  }
}


void QuestAfterAction_StateMain__Wait(QuestAfterAction_StateMain_o *this, const MethodInfo *method)
{
  QuestAfterAction_StateMain_c *klass; // x8

  if ( this->fields.waitTime > 0.0
    && (float)(UnityEngine_Time__get_realtimeSinceStartup(0) - this->fields.waitStartTime) >= this->fields.waitTime )
  {
    klass = this->klass;
    this->fields.waitTime = 0.0;
    ((void (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))klass->vtable._14_EndAnim.methodPtr)(
      this,
      klass->vtable._14_EndAnim.method);
  }
}


void QuestAfterAction_StateMain__begin(
        QuestAfterAction_StateMain_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TerminalSceneComponent_c *screenCollider; // x0
  __int64 v11; // x1
  struct QuestAfterAction_o *v12; // x8
  struct TerminalSceneComponent_o *mInstance; // x8

  if ( (byte_4D2D4B4 & 1) == 0 )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2D4B4 = 1;
  }
  this->fields.that = that;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)that, (int32_t)method, v3, v4, v5, v6, v7);
  v12 = this->fields.that;
  if ( !v12 )
    goto LABEL_14;
  screenCollider = (TerminalSceneComponent_c *)v12->fields.screenCollider;
  if ( !screenCollider )
    goto LABEL_14;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)screenCollider, 1, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  screenCollider = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    screenCollider = TerminalSceneComponent_TypeInfo;
  }
  mInstance = screenCollider->static_fields->mInstance;
  if ( !mInstance || (screenCollider = (TerminalSceneComponent_c *)mInstance->fields.mTerminalMap) == 0 )
LABEL_14:
    sub_1C93D2C(screenCollider, v11);
  this->fields.IsMapModel = ScrTerminalMap__IsMapModel((ScrTerminalMap_o *)screenCollider, 0);
}


void QuestAfterAction_StateMain__end(
        QuestAfterAction_StateMain_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  ;
}


QuestAfterAction_Command_array *QuestAfterAction_StateMain__get_CommandBuf(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1C93D2C(this, method);
  return that->fields.commandBuf;
}


int32_t QuestAfterAction_StateMain__get_CommandIndex(QuestAfterAction_StateMain_o *this, const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1C93D2C(this, method);
  return that->fields.commandIdx;
}


UnityEngine_GameObject_o *QuestAfterAction_StateMain__get_SubGimmickRoot(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  if ( (byte_4D2D4B3 & 1) == 0 )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2D4B3 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v2->static_fields->mInstance;
  if ( !mInstance || (mTerminalMap = mInstance->fields.mTerminalMap) == 0 )
    sub_1C93D2C(v2, method);
  return mTerminalMap->fields.subRootGimmickP;
}


// local variable allocation has failed, the output may be wrong!
void QuestAfterAction_StateMain__onEnd(QuestAfterAction_StateMain_o *this, bool deleteKey, const MethodInfo *method)
{
  TerminalSceneComponent_c *v5; // x0
  TerminalSceneComponent_o *mInstance; // x0
  const MethodInfo *v7; // x1
  struct UnityEngine_Vector2_o TUTORIAL_MENU_ARROW_POS2; // x9
  __int64 v9; // x8
  int v10; // w9

  if ( (byte_4D2D4B6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    sub_1C93AD4(&StringLiteral_16833/*"afterActionBk"*/);
    byte_4D2D4B6 = 1;
  }
  if ( deleteKey )
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16833/*"afterActionBk"*/, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  v5 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v5 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v5->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_21;
  TerminalSceneComponent__ClearTransitionInfo(mInstance, 0);
  QuestAfterAction_StateMain__StartMapGimmick(this, v7);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2D4C8 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D4C8 = 1;
  }
  mInstance = (TerminalSceneComponent_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    mInstance = (TerminalSceneComponent_o *)TerminalPramsManager_TypeInfo;
  }
  TUTORIAL_MENU_ARROW_POS2 = mInstance->fields.TUTORIAL_MENU_ARROW_POS2;
  v9 = *(_QWORD *)(*(_QWORD *)&TUTORIAL_MENU_ARROW_POS2 + 880LL);
  *(_BYTE *)(*(_QWORD *)&TUTORIAL_MENU_ARROW_POS2 + 584LL) = 0;
  if ( !v9
    || (v10 = *(_DWORD *)(v9 + 28) + 1,
        *(_DWORD *)(v9 + 24) = 0,
        *(_DWORD *)(v9 + 28) = v10,
        (mInstance = (TerminalSceneComponent_o *)this->fields.that) == 0) )
  {
LABEL_21:
    sub_1C93D2C(mInstance, deleteKey);
  }
  QuestAfterAction__OnEnd((QuestAfterAction_o *)mInstance, (const MethodInfo *)deleteKey);
}


void QuestAfterAction_StateMain__set_CommandIndex(
        QuestAfterAction_StateMain_o *this,
        int32_t value,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1C93D2C(this, value);
  that->fields.commandIdx = value;
}


void QuestAfterAction_StateMain__update(
        QuestAfterAction_StateMain_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  ((void (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_o *, const MethodInfo *))this->klass->vtable._13_UpdateAnim.methodPtr)(
    this,
    that,
    this->klass->vtable._13_UpdateAnim.method);
  QuestAfterAction_StateMain__Wait(this, v4);
}


void QuestAfterAction_StateMain___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2D520 & 1) == 0 )
  {
    sub_1C93AD4(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_4D2D520 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(QuestAfterAction_StateMain___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestAfterAction_StateMain___c_TypeInfo->static_fields->__9 = (struct QuestAfterAction_StateMain___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)QuestAfterAction_StateMain___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void QuestAfterAction_StateMain___c___ctor(QuestAfterAction_StateMain___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c___UpdateAnim_b__16_22(
        QuestAfterAction_StateMain___c_o *this,
        const MethodInfo *method)
{
  ;
}


void QuestAfterAction_StateMain___c___UpdateAnim_b__16_26(
        QuestAfterAction_StateMain___c_o *this,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  int32_t WarId_k__BackingField; // w19
  int32_t QuestId_k__BackingField; // w20
  QuestAfterAction_StateMain___c_c *v5; // x8
  int32_t PhaseCnt_k__BackingField; // w23
  ScriptManager_CallbackFunc_o *_9__16_27; // x21
  Il2CppObject *v8; // x22
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4D2D521 & 1) == 0 )
  {
    sub_1C93AD4(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1C93AD4(&ScriptManager_TypeInfo);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_27__);
    sub_1C93AD4(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_4D2D521 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2ABEB )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2ABEB = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v2->static_fields->_WarId_k__BackingField;
  if ( !byte_4D2A7BF )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_4D2A7BF = 1;
  }
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v2->static_fields->_QuestId_k__BackingField;
  if ( !byte_4D2A7BE )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_4D2A7BE = 1;
  }
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v5 = QuestAfterAction_StateMain___c_TypeInfo;
  PhaseCnt_k__BackingField = v2->static_fields->_PhaseCnt_k__BackingField;
  if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
    v5 = QuestAfterAction_StateMain___c_TypeInfo;
  }
  _9__16_27 = v5->static_fields->__9__16_27;
  if ( !_9__16_27 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = QuestAfterAction_StateMain___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__16_27 = (ScriptManager_CallbackFunc_o *)sub_1C93D20(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(_9__16_27, v8, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_27__, 0);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_27 = _9__16_27;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__16_27,
      (int32_t)_9__16_27,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayBattleStart(
    WarId_k__BackingField,
    QuestId_k__BackingField,
    PhaseCnt_k__BackingField + 1,
    _9__16_27,
    0,
    0,
    -1,
    0,
    0,
    0,
    0);
}


void QuestAfterAction_StateMain___c___UpdateAnim_b__16_27(
        QuestAfterAction_StateMain___c_o *this,
        bool isExit,
        const MethodInfo *method)
{
  QuestAfterAction_StateMain___c_c *v3; // x0
  NetworkManager_ResultCallbackFunc_o *_9__16_28; // x19
  Il2CppObject *v5; // x20
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  Il2CppObject *Request_object; // x19
  TerminalPramsManager_c *v14; // x0
  int32_t QuestId_k__BackingField; // w21
  int32_t PhaseCnt_k__BackingField; // w20
  System_Int32_array *SelectRouteArray; // x0
  __int64 v18; // x1

  if ( (byte_4D2D522 & 1) == 0 )
  {
    sub_1C93AD4(&Method_NetworkManager_getRequest_BattleScenarioRequest___);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C93AD4(&ScriptManager_TypeInfo);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_28__);
    sub_1C93AD4(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_4D2D522 = 1;
  }
  v3 = QuestAfterAction_StateMain___c_TypeInfo;
  if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
    v3 = QuestAfterAction_StateMain___c_TypeInfo;
  }
  _9__16_28 = v3->static_fields->__9__16_28;
  if ( !_9__16_28 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = QuestAfterAction_StateMain___c_TypeInfo;
    }
    v5 = (Il2CppObject *)v3->static_fields->__9;
    _9__16_28 = (NetworkManager_ResultCallbackFunc_o *)sub_1C93D20(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__16_28,
      v5,
      Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_28__,
      0);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_28 = _9__16_28;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__16_28,
      (int32_t)_9__16_28,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     _9__16_28,
                     (const MethodInfo_322FB9C *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2A7BF )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2A7BF = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v14->static_fields->_QuestId_k__BackingField;
  if ( !byte_4D2A7BE )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
    byte_4D2A7BE = 1;
  }
  if ( !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v14->static_fields->_PhaseCnt_k__BackingField;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  SelectRouteArray = ScriptManager__GetSelectRouteArray(0);
  if ( !Request_object )
    sub_1C93D2C(SelectRouteArray, v18);
  BattleScenarioRequest__beginRequest(
    (BattleScenarioRequest_o *)Request_object,
    QuestId_k__BackingField,
    PhaseCnt_k__BackingField + 1,
    SelectRouteArray,
    0);
}


void QuestAfterAction_StateMain___c___UpdateAnim_b__16_28(
        QuestAfterAction_StateMain___c_o *this,
        System_String_o *jsonstr,
        const MethodInfo *method)
{
  Il2CppObject *v4; // x19
  System_Object_array *v5; // x19
  TerminalPramsManager_c *v6; // x0
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4D2D523 & 1) == 0 )
  {
    sub_1C93AD4(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
    sub_1C93AD4(&JsonManager_TypeInfo);
    sub_1C93AD4(&ScriptManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_16833/*"afterActionBk"*/);
    sub_1C93AD4(&StringLiteral_15904/*"["*/);
    sub_1C93AD4(&StringLiteral_16156/*"]"*/);
    sub_1C93AD4(&StringLiteral_13816/*"TerminalTransitionInfoMissionId"*/);
    byte_4D2D523 = 1;
  }
  v4 = (Il2CppObject *)System_String__Concat_64463988(
                         (System_String_o *)StringLiteral_15904/*"["*/,
                         jsonstr,
                         (System_String_o *)StringLiteral_16156/*"]"*/,
                         0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v5 = JsonManager__DeserializeArray_object_(
         v4,
         (const MethodInfo_3213F70 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16833/*"afterActionBk"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13816/*"TerminalTransitionInfoMissionId"*/, 0);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__ReceiveQuestEndResultInfo((BattleResultComponent_resultData_array *)v5, 1, 0);
  if ( !byte_4D2AFE8 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2AFE8 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v8);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}


bool QuestAfterAction_StateMain___c___UpdateAnim_b__16_35(
        QuestAfterAction_StateMain___c_o *this,
        TitleInfoEventRaidBossComponent_o *eventRaidBossComponent,
        const MethodInfo *method)
{
  if ( !eventRaidBossComponent )
    sub_1C93D2C(this, 0);
  return eventRaidBossComponent->fields.isStartedFrameIn;
}


void QuestAfterAction_StateMain___c__DisplayClass16_0___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__10(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, const MethodInfo *))_4__this->klass->vtable._14_EndAnim.methodPtr)(
    _4__this,
    _4__this->klass->vtable._14_EndAnim.method);
}


void QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__11(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, const MethodInfo *))_4__this->klass->vtable._14_EndAnim.methodPtr)(
    _4__this,
    _4__this->klass->vtable._14_EndAnim.method);
}


void QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__12(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, const MethodInfo *))_4__this->klass->vtable._14_EndAnim.methodPtr)(
    _4__this,
    _4__this->klass->vtable._14_EndAnim.method);
}


void QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__23(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8
  QuestAfterAction_StateMain___c__DisplayClass16_0_o *v3; // x19

  that = this->fields.that;
  if ( !that
    || (that->fields._IsAfterFadeInPlay_k__BackingField = 0,
        v3 = this,
        (this = (QuestAfterAction_StateMain___c__DisplayClass16_0_o *)this->fields.__4__this) == 0)
    || (((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_0_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
          this,
          this->klass[1]._1.implementedInterfaces),
        (this = (QuestAfterAction_StateMain___c__DisplayClass16_0_o *)v3->fields.__4__this) == 0) )
  {
    sub_1C93D2C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_0_o *, struct QuestAfterAction_o *, void *))this->klass[1]._1.properties)(
    this,
    v3->fields.that,
    this->klass[1]._1.methods);
}


void QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__29(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, const MethodInfo *))_4__this->klass->vtable._14_EndAnim.methodPtr)(
    _4__this,
    _4__this->klass->vtable._14_EndAnim.method);
}


void QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__30(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, const MethodInfo *))_4__this->klass->vtable._14_EndAnim.methodPtr)(
    _4__this,
    _4__this->klass->vtable._14_EndAnim.method);
}


void QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__31(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, const MethodInfo *))_4__this->klass->vtable._14_EndAnim.methodPtr)(
    _4__this,
    _4__this->klass->vtable._14_EndAnim.method);
}


void QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__32(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, const MethodInfo *))_4__this->klass->vtable._14_EndAnim.methodPtr)(
    _4__this,
    _4__this->klass->vtable._14_EndAnim.method);
}


void QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__33(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, const MethodInfo *))_4__this->klass->vtable._14_EndAnim.methodPtr)(
    _4__this,
    _4__this->klass->vtable._14_EndAnim.method);
}


void QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__9(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, const MethodInfo *))_4__this->klass->vtable._14_EndAnim.methodPtr)(
    _4__this,
    _4__this->klass->vtable._14_EndAnim.method);
}


void QuestAfterAction_StateMain___c__DisplayClass16_1___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_1___UpdateAnim_b__0(
        QuestAfterAction_StateMain___c__DisplayClass16_1_o *this,
        const MethodInfo *method)
{
  struct SrcSpotBasePrefab_o *spot; // x0
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals1; // x8

  spot = this->fields.spot;
  if ( !spot
    || (mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo) == 0
    || (mMapCtrl_SpotInfo->fields.dispType = 0,
        SrcSpotBasePrefab__SetTouchType(spot, 0, 0),
        (CS___8__locals1 = this->fields.CS___8__locals1) == 0)
    || (spot = (struct SrcSpotBasePrefab_o *)CS___8__locals1->fields.__4__this) == 0 )
  {
    sub_1C93D2C(spot, method);
  }
  ((void (__fastcall *)(struct SrcSpotBasePrefab_o *, Il2CppClass **))spot->klass[1]._1.nestedTypes)(
    spot,
    spot->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_10___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_10_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_10___UpdateAnim_b__13(
        QuestAfterAction_StateMain___c__DisplayClass16_10_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0 )
    sub_1C93D2C(this, method);
  mMapCtrl_MapGimmickInfo->fields.dispType = 0;
}


void QuestAfterAction_StateMain___c__DisplayClass16_10___UpdateAnim_b__14(
        QuestAfterAction_StateMain___c__DisplayClass16_10_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals10; // x8

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick
    || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0
    || (mMapCtrl_MapGimmickInfo->fields.dispType = 0, (CS___8__locals10 = this->fields.CS___8__locals10) == 0)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_10_o *)CS___8__locals10->fields.__4__this) == 0 )
  {
    sub_1C93D2C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_10_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    this->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_11___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_11_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_11___UpdateAnim_b__15(
        QuestAfterAction_StateMain___c__DisplayClass16_11_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0 )
    sub_1C93D2C(this, method);
  mMapCtrl_MapGimmickInfo->fields.dispType = 1;
}


void QuestAfterAction_StateMain___c__DisplayClass16_11___UpdateAnim_b__16(
        QuestAfterAction_StateMain___c__DisplayClass16_11_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals11; // x8

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick
    || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0
    || (mMapCtrl_MapGimmickInfo->fields.dispType = 1, (CS___8__locals11 = this->fields.CS___8__locals11) == 0)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_11_o *)CS___8__locals11->fields.__4__this) == 0 )
  {
    sub_1C93D2C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_11_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    this->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_12___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_12_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_12___UpdateAnim_b__17(
        QuestAfterAction_StateMain___c__DisplayClass16_12_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals12; // x8

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick
    || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0
    || (mMapCtrl_MapGimmickInfo->fields.dispType = 1, (CS___8__locals12 = this->fields.CS___8__locals12) == 0)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_12_o *)CS___8__locals12->fields.__4__this) == 0 )
  {
    sub_1C93D2C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_12_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    this->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_13___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_13_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_13___UpdateAnim_b__18(
        QuestAfterAction_StateMain___c__DisplayClass16_13_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x19
  UnityEngine_Component_o *mapGimmick; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  UnityEngine_Component_o *v12; // x22
  Il2CppObject *v13; // x0
  UnityEngine_Color_o **v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct System_String_array *paramsStr; // x8
  struct System_String_array *v22; // x8
  UnityEngine_Color_o *v23; // x20
  float v24; // s0
  UITweener_o *v25; // x20
  EventDelegate_Callback_o *v26; // x21
  UnityEngine_Color_o color; // [xsp+10h] [xbp-40h] BYREF

  if ( (byte_4D2D524 & 1) == 0 )
  {
    sub_1C93AD4(&EventDelegate_Callback_TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_AddComponent_TweenColor___);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_1C93AD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__19__);
    sub_1C93AD4(&QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo);
    byte_4D2D524 = 1;
  }
  *(_QWORD *)&color.fields.r = 0;
  *(_QWORD *)&color.fields.b = 0;
  v3 = sub_1C93D20(QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_18;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  mapGimmick = (UnityEngine_Component_o *)this->fields.mapGimmick;
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0);
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                            (UnityEngine_GameObject_o *)mapGimmick,
                                            (const MethodInfo_31FC2E8 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !mapGimmick )
    goto LABEL_18;
  v12 = mapGimmick;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0);
  if ( !mapGimmick )
    goto LABEL_18;
  v13 = UnityEngine_GameObject__AddComponent_object_(
          (UnityEngine_GameObject_o *)mapGimmick,
          (const MethodInfo_31FBF9C *)Method_UnityEngine_GameObject_AddComponent_TweenColor___);
  *(_QWORD *)(v3 + 16) = v13;
  v14 = (UnityEngine_Color_o **)(v3 + 16);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)v13, v15, v16, v17, v18, v19, v20);
  paramsStr = this->fields.paramsStr;
  if ( !paramsStr )
    goto LABEL_18;
  if ( LODWORD(paramsStr->max_length) <= 1 )
    goto LABEL_19;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_ColorUtility__TryParseHtmlString(paramsStr->m_Items[1], &color, 0);
  if ( !*v14
    || ((*v14)[8] = *(UnityEngine_Color_o *)((char *)&v12[6].klass + 4), !*v14)
    || ((*v14)[9] = color, (v22 = this->fields.paramsStr) == 0) )
  {
LABEL_18:
    sub_1C93D2C(mapGimmick, v5);
  }
  if ( LODWORD(v22->max_length) <= 2 )
LABEL_19:
    sub_1C93D34(mapGimmick);
  v23 = *v14;
  v24 = System_Single__Parse(v22->m_Items[2], 0);
  if ( !v23 )
    goto LABEL_18;
  v23[3].fields.b = v24;
  mapGimmick = (UnityEngine_Component_o *)*v14;
  if ( !*v14 )
    goto LABEL_18;
  UITweener__PlayForward((UITweener_o *)mapGimmick, 0);
  v25 = *(UITweener_o **)(v3 + 16);
  v26 = (EventDelegate_Callback_o *)sub_1C93D20(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v26,
    (Il2CppObject *)v3,
    Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__19__,
    0);
  if ( !v25 )
    goto LABEL_18;
  UITweener__SetOnFinished(v25, v26, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_14___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_14_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_14___UpdateAnim_b__19(
        QuestAfterAction_StateMain___c__DisplayClass16_14_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *tween; // x20
  struct QuestAfterAction_StateMain_o *_4__this; // x0
  __int64 v5; // x1
  struct QuestAfterAction_StateMain___c__DisplayClass16_13_o *CS___8__locals14; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals13; // x8

  if ( (byte_4D2D525 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2D525 = 1;
  }
  tween = (UnityEngine_Object_o *)this->fields.tween;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_72119908(tween, 0);
  CS___8__locals14 = this->fields.CS___8__locals14;
  if ( !CS___8__locals14
    || (CS___8__locals13 = CS___8__locals14->fields.CS___8__locals13) == 0
    || (_4__this = CS___8__locals13->fields.__4__this) == 0 )
  {
    sub_1C93D2C(_4__this, v5);
  }
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, const MethodInfo *))_4__this->klass->vtable._14_EndAnim.methodPtr)(
    _4__this,
    _4__this->klass->vtable._14_EndAnim.method);
}


void QuestAfterAction_StateMain___c__DisplayClass16_15___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_15_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_15___UpdateAnim_b__20(
        QuestAfterAction_StateMain___c__DisplayClass16_15_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals15; // x8

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick
    || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0
    || (mMapCtrl_MapGimmickInfo->fields.dispType = 1, (CS___8__locals15 = this->fields.CS___8__locals15) == 0)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_15_o *)CS___8__locals15->fields.__4__this) == 0 )
  {
    sub_1C93D2C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_15_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    this->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_15___UpdateAnim_b__21(
        QuestAfterAction_StateMain___c__DisplayClass16_15_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals15; // x8

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick
    || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0
    || (mMapCtrl_MapGimmickInfo->fields.dispType = 0, (CS___8__locals15 = this->fields.CS___8__locals15) == 0)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_15_o *)CS___8__locals15->fields.__4__this) == 0 )
  {
    sub_1C93D2C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_15_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    this->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_16___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_16_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_16___UpdateAnim_b__24(
        QuestAfterAction_StateMain___c__DisplayClass16_16_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  QuestEntity_o *questEntity; // x0
  void *image; // x8
  ScrTerminalListTop_o *v6; // x20
  int32_t name_high; // w21
  int namespaze; // w24
  System_Action_o *_9__25; // x22
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  clsQuestCheck_o *v16; // x19
  QuestAfterAction_StateMain___c_c *v17; // x8
  System_Action_o *_9__16_26; // x20
  Il2CppObject *v19; // x21
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7

  if ( (byte_4D2D526 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    sub_1C93AD4(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_26__);
    sub_1C93AD4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__25__);
    sub_1C93AD4(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_4D2D526 = 1;
  }
  questEntity = this->fields.questEntity;
  if ( !questEntity )
    goto LABEL_34;
  if ( QuestEntity__HasFlag(questEntity, 0x800000000000LL, 0) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4D2A6EE )
    {
      sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
      byte_4D2A6EE = 1;
    }
    questEntity = (QuestEntity_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      questEntity = (QuestEntity_o *)TerminalSceneComponent_TypeInfo;
    }
    image = questEntity[1].klass->_1.image;
    if ( image )
    {
      v6 = (ScrTerminalListTop_o *)*((_QWORD *)image + 32);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4D2A7BF )
      {
        sub_1C93AD4(&TerminalPramsManager_TypeInfo);
        byte_4D2A7BF = 1;
      }
      questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      }
      name_high = HIDWORD(questEntity[1].klass->_1.name);
      if ( !byte_4D2A7BE )
      {
        sub_1C93AD4(&TerminalPramsManager_TypeInfo);
        questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
        byte_4D2A7BE = 1;
      }
      if ( !questEntity[1].fields.type )
      {
        j_il2cpp_runtime_class_init_0(questEntity);
        questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      }
      namespaze = (int)questEntity[1].klass->_1.namespaze;
      _9__25 = this->fields.__9__25;
      if ( !_9__25 )
      {
        _9__25 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
        System_Action___ctor(
          _9__25,
          (Il2CppObject *)this,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__25__,
          0);
        this->fields.__9__25 = _9__25;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__9__25, (int32_t)_9__25, v10, v11, v12, v13, v14, v15);
      }
      if ( v6 )
      {
        ScrTerminalListTop__StartWindowMessage_37540224(v6, name_high, namespaze + 1, 2, _9__25, 1, 0);
        return;
      }
    }
LABEL_34:
    sub_1C93D2C(questEntity, result);
  }
  questEntity = (QuestEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
  v16 = (clsQuestCheck_o *)questEntity;
  v17 = QuestAfterAction_StateMain___c_TypeInfo;
  if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
    v17 = QuestAfterAction_StateMain___c_TypeInfo;
  }
  _9__16_26 = v17->static_fields->__9__16_26;
  if ( !_9__16_26 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = QuestAfterAction_StateMain___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v17->static_fields->__9;
    _9__16_26 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(_9__16_26, v19, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_26__, 0);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_26 = _9__16_26;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__16_26,
      (int32_t)_9__16_26,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  if ( !v16 )
    goto LABEL_34;
  clsQuestCheck__PlayQuestStartAction(v16, _9__16_26, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_16___UpdateAnim_b__25(
        QuestAfterAction_StateMain___c__DisplayClass16_16_o *this,
        const MethodInfo *method)
{
  ScrTerminalMap_o *_4__this; // x0
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_c *v5; // x8
  UnityEngine_GameObject_c *v6; // x8
  TerminalPramsManager_c *v7; // x0
  int32_t QuestId_k__BackingField; // w21
  TerminalPramsManager_c *v9; // x0
  bool HasFlag; // w0
  TerminalPramsManager_c *v11; // x8
  TerminalPramsManager_c *v12; // x0
  int32_t SpotId; // w21
  struct MapControl_QuestInfo_o *questInfo; // x8
  int32_t questId; // w21
  UnityEngine_GameObject_c *v16; // x8
  bool Effect; // w21
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals16; // x8
  TerminalPramsManager_c *v19; // x0
  int32_t WarId_k__BackingField; // w19
  UnityEngine_GameObject_c *v21; // x8
  ScrTerminalListTop_o *v22; // x19
  int32_t m_CachedPtr_high; // w21

  if ( (byte_4D2D527 & 1) == 0 )
  {
    sub_1C93AD4(&MyRoomParamsManager_TypeInfo);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    sub_1C93AD4(&StringLiteral_16833/*"afterActionBk"*/);
    sub_1C93AD4(&StringLiteral_13816/*"TerminalTransitionInfoMissionId"*/);
    byte_4D2D527 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = _4__this->fields.subRootGimmickP->klass;
  if ( !klass )
    goto LABEL_101;
  _4__this = *(ScrTerminalMap_o **)&klass->_2.static_fields_size;
  if ( !_4__this )
    goto LABEL_101;
  if ( !ScrTerminalMap__IsAllMaskActive(_4__this, 0) )
    goto LABEL_21;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v5 = _4__this->fields.subRootGimmickP->klass;
  if ( !v5 || (_4__this = *(ScrTerminalMap_o **)&v5->_2.static_fields_size) == 0 )
LABEL_101:
    sub_1C93D2C(_4__this, method);
  ScrTerminalMap__AllMaskEnd(_4__this, 0);
LABEL_21:
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v6 = _4__this->fields.subRootGimmickP->klass;
  if ( !v6 )
    goto LABEL_101;
  _4__this = *(ScrTerminalMap_o **)&v6->_2.element_size;
  if ( !_4__this )
    goto LABEL_101;
  ScrTerminalListTop__IsAllTouchEnable((ScrTerminalListTop_o *)_4__this, 0, 0, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2A7BF )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2A7BF = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v7->static_fields->_QuestId_k__BackingField;
  if ( !byte_4D2D5D9 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4D2D5D9 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_LastPlayedQuestId_k__BackingField = QuestId_k__BackingField;
  if ( !byte_4D2A7BF )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4D2A7BF = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  TerminalPramsManager__CheckClearSelectedStoryQuestId(v7->static_fields->_QuestId_k__BackingField, 0);
  if ( !byte_4D2A7BF )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2A7BF = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  HasFlag = QuestMaster__HasFlag(v9->static_fields->_QuestId_k__BackingField, 0x8000000000LL, 0);
  v11 = TerminalPramsManager_TypeInfo;
  if ( HasFlag )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4D2A7BF )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2A7BF = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = TerminalPramsManager_TypeInfo;
    }
    SpotId = QuestMaster__GetSpotId(v12->static_fields->_QuestId_k__BackingField, 0);
    if ( !byte_4D2D5DA )
    {
      sub_1C93AD4(&TerminalPramsManager_TypeInfo);
      byte_4D2D5DA = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    v11->static_fields->_LastPlayedFreeQuestSpotId_k__BackingField = SpotId;
  }
  if ( !v11->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v11);
  TerminalPramsManager__PlayQuestSave_SaveData(0);
  TerminalPramsManager__Save_SaveData(0);
  questInfo = this->fields.questInfo;
  if ( !questInfo )
    goto LABEL_101;
  questId = questInfo->fields.questId;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  MyRoomParamsManager__SetClearQuestWarEnableMyRoomBgChange(questId, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16833/*"afterActionBk"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13816/*"TerminalTransitionInfoMissionId"*/, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v16 = _4__this->fields.subRootGimmickP->klass;
  if ( !v16 )
    goto LABEL_101;
  _4__this = *(ScrTerminalMap_o **)&v16->_2.element_size;
  if ( !_4__this )
    goto LABEL_101;
  Effect = ScrTerminalListTop__IsDisplayGetEffect((ScrTerminalListTop_o *)_4__this, 0);
  if ( !byte_4D2D5DB )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2D5DB = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  }
  BYTE2(_4__this->fields.subRootGimmickP[7].klass) = Effect;
  CS___8__locals16 = this->fields.CS___8__locals16;
  if ( !CS___8__locals16 )
    goto LABEL_101;
  _4__this = (ScrTerminalMap_o *)CS___8__locals16->fields.__4__this;
  if ( !_4__this )
    goto LABEL_101;
  ((void (__fastcall *)(ScrTerminalMap_o *, Il2CppClass **))_4__this->klass[1]._1.nestedTypes)(
    _4__this,
    _4__this->klass[1]._1.implementedInterfaces);
  if ( !byte_4D2ABEB )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2ABEB = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v19->static_fields->_WarId_k__BackingField;
  if ( !byte_4D2D4C1 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
    byte_4D2D4C1 = 1;
  }
  if ( !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19);
    v19 = TerminalPramsManager_TypeInfo;
  }
  v19->static_fields->_BeforeQuestStartWarId_k__BackingField = WarId_k__BackingField;
  if ( !byte_4D2A6EE )
  {
    sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2A6EE = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  v21 = _4__this->fields.subRootGimmickP->klass;
  if ( !v21 )
    goto LABEL_101;
  v22 = *(ScrTerminalListTop_o **)&v21->_2.element_size;
  if ( !byte_4D2A7BF )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2A7BF = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  }
  m_CachedPtr_high = HIDWORD(_4__this->fields.subRootGimmickP->fields.m_CachedPtr);
  if ( !byte_4D2A7BE )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
    byte_4D2A7BE = 1;
  }
  if ( !LODWORD(_4__this->fields.pfbBaseP) )
  {
    j_il2cpp_runtime_class_init_0(_4__this);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v22 )
    goto LABEL_101;
  ScrTerminalListTop__RequestBattleSecnario(
    v22,
    m_CachedPtr_high,
    LODWORD(_4__this->fields.subRootGimmickP[1].klass) + 1,
    0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_17___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_17_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_17___UpdateAnim_b__34(
        QuestAfterAction_StateMain___c__DisplayClass16_17_o *this,
        const MethodInfo *method)
{
  QuestAfterAction_StateMain___c__DisplayClass16_17_o *v2; // x19
  __int64 v3; // x8
  ScrTerminalListTop_o *v4; // x20
  float defaultBgmVolume; // s8
  float bgmVolume; // s9
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals17; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *v8; // x8

  v2 = this;
  if ( (byte_4D2D528 & 1) == 0 )
  {
    sub_1C93AD4(&QuestAfterAction_TypeInfo);
    this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
    byte_4D2D528 = 1;
  }
  if ( v2->fields.bgmVolume > -1.0 )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4D2A6EE )
    {
      sub_1C93AD4(&TerminalSceneComponent_TypeInfo);
      byte_4D2A6EE = 1;
    }
    this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)TerminalSceneComponent_TypeInfo;
    }
    v3 = **((_QWORD **)this + 23);
    if ( !v3 )
      goto LABEL_20;
    v4 = *(ScrTerminalListTop_o **)(v3 + 256);
    bgmVolume = v2->fields.bgmVolume;
    defaultBgmVolume = v2->fields.defaultBgmVolume;
    this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)QuestAfterAction_TypeInfo;
    if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
    if ( !v4 )
LABEL_20:
      sub_1C93D2C(this, method);
    ScrTerminalListTop__StartEasingBgmMasterVolume(
      v4,
      bgmVolume,
      defaultBgmVolume,
      QuestAfterAction_TypeInfo->static_fields->EventAnimationAfterBgmResetTime,
      2,
      0,
      0);
  }
  CS___8__locals17 = v2->fields.CS___8__locals17;
  if ( !CS___8__locals17 )
    goto LABEL_20;
  this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)CS___8__locals17->fields.__4__this;
  if ( !this )
    goto LABEL_20;
  this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)((__int64 (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_17_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
                                                                  this,
                                                                  this->klass[1]._1.implementedInterfaces);
  v8 = v2->fields.CS___8__locals17;
  if ( !v8 )
    goto LABEL_20;
  this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)v8->fields.__4__this;
  if ( !this )
    goto LABEL_20;
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_17_o *, struct QuestAfterAction_o *, void *))this->klass[1]._1.properties)(
    this,
    v8->fields.that,
    this->klass[1]._1.methods);
}


void QuestAfterAction_StateMain___c__DisplayClass16_2___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_2___UpdateAnim_b__1(
        QuestAfterAction_StateMain___c__DisplayClass16_2_o *this,
        const MethodInfo *method)
{
  struct SrcSpotBasePrefab_o *spot; // x0
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals2; // x8

  spot = this->fields.spot;
  if ( !spot
    || (mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo) == 0
    || (mMapCtrl_SpotInfo->fields.dispType = 2,
        SrcSpotBasePrefab__SetTouchType(spot, 1, 0),
        (CS___8__locals2 = this->fields.CS___8__locals2) == 0)
    || (spot = (struct SrcSpotBasePrefab_o *)CS___8__locals2->fields.__4__this) == 0 )
  {
    sub_1C93D2C(spot, method);
  }
  ((void (__fastcall *)(struct SrcSpotBasePrefab_o *, Il2CppClass **))spot->klass[1]._1.nestedTypes)(
    spot,
    spot->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_3___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_3___UpdateAnim_b__2(
        QuestAfterAction_StateMain___c__DisplayClass16_3_o *this,
        const MethodInfo *method)
{
  struct SrcSpotBasePrefab_o *spot; // x0
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals3; // x8

  spot = this->fields.spot;
  if ( !spot
    || (mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo) == 0
    || (mMapCtrl_SpotInfo->fields.dispType = 1,
        SrcSpotBasePrefab__SetTouchType(spot, 1, 0),
        (CS___8__locals3 = this->fields.CS___8__locals3) == 0)
    || (spot = (struct SrcSpotBasePrefab_o *)CS___8__locals3->fields.__4__this) == 0 )
  {
    sub_1C93D2C(spot, method);
  }
  ((void (__fastcall *)(struct SrcSpotBasePrefab_o *, Il2CppClass **))spot->klass[1]._1.nestedTypes)(
    spot,
    spot->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_4___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_4_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_4___UpdateAnim_b__3(
        QuestAfterAction_StateMain___c__DisplayClass16_4_o *this,
        const MethodInfo *method)
{
  struct ModelLineComponent_o *roadModel; // x8
  struct MapControl_SpotRoadInfo_o *SpotRoadInfo_k__BackingField; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals4; // x8

  roadModel = this->fields.roadModel;
  if ( !roadModel
    || (SpotRoadInfo_k__BackingField = roadModel->fields._SpotRoadInfo_k__BackingField) == 0
    || (SpotRoadInfo_k__BackingField->fields.dispType = 0, (CS___8__locals4 = this->fields.CS___8__locals4) == 0)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_4_o *)CS___8__locals4->fields.__4__this) == 0 )
  {
    sub_1C93D2C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_4_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    this->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_5___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_5_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_5___UpdateAnim_b__4(
        QuestAfterAction_StateMain___c__DisplayClass16_5_o *this,
        const MethodInfo *method)
{
  struct srcLineSprite_o *roadSprite; // x8
  struct MapControl_SpotRoadInfo_o *mMapCtrl_SpotRoadInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals5; // x8

  roadSprite = this->fields.roadSprite;
  if ( !roadSprite
    || (mMapCtrl_SpotRoadInfo = roadSprite->fields.mMapCtrl_SpotRoadInfo) == 0
    || (mMapCtrl_SpotRoadInfo->fields.dispType = 0, (CS___8__locals5 = this->fields.CS___8__locals5) == 0)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_5_o *)CS___8__locals5->fields.__4__this) == 0 )
  {
    sub_1C93D2C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_5_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    this->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_6___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_6_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_6___UpdateAnim_b__5(
        QuestAfterAction_StateMain___c__DisplayClass16_6_o *this,
        const MethodInfo *method)
{
  struct ModelLineComponent_o *roadModel; // x8
  struct MapControl_SpotRoadInfo_o *SpotRoadInfo_k__BackingField; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals6; // x8

  roadModel = this->fields.roadModel;
  if ( !roadModel
    || (SpotRoadInfo_k__BackingField = roadModel->fields._SpotRoadInfo_k__BackingField) == 0
    || (SpotRoadInfo_k__BackingField->fields.dispType = 2, (CS___8__locals6 = this->fields.CS___8__locals6) == 0)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_6_o *)CS___8__locals6->fields.__4__this) == 0 )
  {
    sub_1C93D2C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_6_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    this->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_7___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_7_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_7___UpdateAnim_b__6(
        QuestAfterAction_StateMain___c__DisplayClass16_7_o *this,
        const MethodInfo *method)
{
  struct srcLineSprite_o *roadSprite; // x8
  struct MapControl_SpotRoadInfo_o *mMapCtrl_SpotRoadInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals7; // x8

  roadSprite = this->fields.roadSprite;
  if ( !roadSprite
    || (mMapCtrl_SpotRoadInfo = roadSprite->fields.mMapCtrl_SpotRoadInfo) == 0
    || (mMapCtrl_SpotRoadInfo->fields.dispType = 2, (CS___8__locals7 = this->fields.CS___8__locals7) == 0)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_7_o *)CS___8__locals7->fields.__4__this) == 0 )
  {
    sub_1C93D2C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_7_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    this->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_8___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_8_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_8___UpdateAnim_b__7(
        QuestAfterAction_StateMain___c__DisplayClass16_8_o *this,
        const MethodInfo *method)
{
  struct ModelLineComponent_o *roadModel; // x8
  struct MapControl_SpotRoadInfo_o *SpotRoadInfo_k__BackingField; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals8; // x8

  roadModel = this->fields.roadModel;
  if ( !roadModel
    || (SpotRoadInfo_k__BackingField = roadModel->fields._SpotRoadInfo_k__BackingField) == 0
    || (SpotRoadInfo_k__BackingField->fields.dispType = 1, (CS___8__locals8 = this->fields.CS___8__locals8) == 0)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_8_o *)CS___8__locals8->fields.__4__this) == 0 )
  {
    sub_1C93D2C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_8_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    this->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass16_9___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_9_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass16_9___UpdateAnim_b__8(
        QuestAfterAction_StateMain___c__DisplayClass16_9_o *this,
        const MethodInfo *method)
{
  struct srcLineSprite_o *roadSprite; // x8
  struct MapControl_SpotRoadInfo_o *mMapCtrl_SpotRoadInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals9; // x8

  roadSprite = this->fields.roadSprite;
  if ( !roadSprite
    || (mMapCtrl_SpotRoadInfo = roadSprite->fields.mMapCtrl_SpotRoadInfo) == 0
    || (mMapCtrl_SpotRoadInfo->fields.dispType = 1, (CS___8__locals9 = this->fields.CS___8__locals9) == 0)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_9_o *)CS___8__locals9->fields.__4__this) == 0 )
  {
    sub_1C93D2C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_9_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    this->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateNone___ctor(QuestAfterAction_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateNone__begin(
        QuestAfterAction_StateNone_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestAfterAction_StateNone__end(
        QuestAfterAction_StateNone_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestAfterAction_StateNone__update(
        QuestAfterAction_StateNone_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  ;
}


void QuestAfterAction_TitleInfoControlCallback___ctor(
        QuestAfterAction_TitleInfoControlCallback_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_TitleInfoControlCallback__End(
        QuestAfterAction_TitleInfoControlCallback_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Action_o *end; // x8
  GrandQuestFolderBoardItem_o *p_end; // x19

  p_end = (GrandQuestFolderBoardItem_o *)&this->fields.end;
  end = this->fields.end;
  if ( end )
    ((void (__fastcall *)(intptr_t, intptr_t))end->fields.invoke_impl)(end->fields.method_code, end->fields.method);
  p_end->klass = 0;
  sub_1C93A78(p_end, 0, v2, v3, v4, v5, v6, v7);
}


bool QuestAfterAction_TitleInfoControlCallback__HasStartCallback(
        QuestAfterAction_TitleInfoControlCallback_o *this,
        const MethodInfo *method)
{
  return this->fields.start != 0;
}


void QuestAfterAction_TitleInfoControlCallback__SetStartCallback(
        QuestAfterAction_TitleInfoControlCallback_o *this,
        System_Action_QuestAfterAction_TitleInfoControlParam__o *startCallback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.start = startCallback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)startCallback, (int32_t)method, v3, v4, v5, v6, v7);
}


void QuestAfterAction_TitleInfoControlCallback__Start(
        QuestAfterAction_TitleInfoControlCallback_o *this,
        QuestAfterAction_TitleInfoControlParam_o *titleInfoControlParam,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct System_Action_o *end; // x8
  struct System_Action_o **p_end; // x22
  const MethodInfo *v13; // x1
  struct System_Action_QuestAfterAction_TitleInfoControlParam__o *start; // x8

  p_end = &this->fields.end;
  end = this->fields.end;
  if ( end )
    ((void (__fastcall *)(intptr_t, intptr_t, System_Action_o *, const MethodInfo *))end->fields.invoke_impl)(
      end->fields.method_code,
      end->fields.method,
      endCallback,
      method);
  this->fields.end = endCallback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)p_end,
    (int32_t)endCallback,
    (int32_t)endCallback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  start = this->fields.start;
  if ( start )
    ((void (__fastcall *)(intptr_t, QuestAfterAction_TitleInfoControlParam_o *, intptr_t))start->fields.invoke_impl)(
      start->fields.method_code,
      titleInfoControlParam,
      start->fields.method);
  else
    QuestAfterAction_TitleInfoControlCallback__End(this, v13);
}


void QuestAfterAction_TitleInfoControlParam___ctor(
        QuestAfterAction_TitleInfoControlParam_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t QuestAfterAction_TitleInfoControlParam__get_TargetId(
        QuestAfterAction_TitleInfoControlParam_o *this,
        const MethodInfo *method)
{
  return this->fields._TargetId_k__BackingField;
}


int32_t QuestAfterAction_TitleInfoControlParam__get_TargetType(
        QuestAfterAction_TitleInfoControlParam_o *this,
        const MethodInfo *method)
{
  return this->fields._TargetType_k__BackingField;
}


void QuestAfterAction_TitleInfoControlParam__set_TargetId(
        QuestAfterAction_TitleInfoControlParam_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TargetId_k__BackingField = value;
}


void QuestAfterAction_TitleInfoControlParam__set_TargetType(
        QuestAfterAction_TitleInfoControlParam_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TargetType_k__BackingField = value;
}


void QuestAfterAction_VoiceInfo___ctor(
        QuestAfterAction_VoiceInfo_o *this,
        int32_t sId,
        System_String_o *vName,
        const MethodInfo *method)
{
  QuestAfterAction_VoiceInfo_o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v6->fields.voiceName = vName;
  v6 = (QuestAfterAction_VoiceInfo_o *)((char *)v6 + 24);
  LODWORD(v6[-1].fields.voiceName) = sId;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v6, (int32_t)vName, v7, v8, v9, v10, v11, v12);
}


void QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__98___ctor(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__98_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__98__MoveNext(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__98_o *this,
        const MethodInfo *method)
{
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__98_o *v2; // x21
  int32_t _1__state; // w8
  QuestAfterAction_o *_4__this; // x19
  struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *commandEnumerable; // x20
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__c *klass; // x8
  __int64 v7; // x9
  int *p_offset; // x10
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *_7__wrap1; // x20
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  const MethodInfo *v22; // x1
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *v23; // x20
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x1
  QuestAfterAction_Command_o *v30; // x20
  int32_t CommandType; // w21
  int32_t CommandTargetId; // w2
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__98_o *v46; // [xsp+18h] [xbp-38h]

  v46 = this;
  v2 = this;
  if ( (byte_4D2D52E & 1) == 0 )
  {
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__98_o *)sub_1C93AD4(&QuestAfterAction_TypeInfo);
    byte_4D2D52E = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    commandEnumerable = v2->fields.commandEnumerable;
    v2->fields.__1__state = -1;
    if ( !commandEnumerable )
      sub_1C93D2C(this, method);
    klass = commandEnumerable->klass;
    v7 = *(unsigned __int16 *)&commandEnumerable->klass->_2.rank;
    if ( *(_WORD *)&commandEnumerable->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_QuestAfterAction_Command__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo )
      {
        --v7;
        p_offset += 4;
        if ( !v7 )
          goto LABEL_10;
      }
      v9 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v9 = sub_1C69E5C(commandEnumerable, System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo, 0);
    }
    v10 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *, _QWORD))v9)(
            commandEnumerable,
            *(_QWORD *)(v9 + 8));
    v46->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)v10;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v46->fields.__7__wrap1, v10, v11, v12, v13, v14, v15, v16);
    v2 = v46;
  }
  _7__wrap1 = v2->fields.__7__wrap1;
  v2->fields.__1__state = -3;
  if ( !_7__wrap1 )
LABEL_34:
    sub_1C93D2C(this, method);
  while ( 1 )
  {
    v18 = _7__wrap1->klass;
    v19 = *(unsigned __int16 *)&_7__wrap1->klass->_2.rank;
    if ( *(_WORD *)&_7__wrap1->klass->_2.rank )
    {
      v20 = &v18->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v20 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        v20 += 4;
        if ( !v19 )
          goto LABEL_18;
      }
      v21 = (__int64)&v18->vtable[*v20];
    }
    else
    {
LABEL_18:
      v21 = sub_1C69E5C(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v21)(
            _7__wrap1,
            *(_QWORD *)(v21 + 8))
        & 1) == 0 )
    {
      QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__98____m__Finally1(v46, v22);
      v46->fields.__7__wrap1 = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v46->fields.__7__wrap1, 0, v39, v40, v41, v42, v43, v44);
      return 0;
    }
    v23 = v46->fields.__7__wrap1;
    if ( !v23 )
      sub_1C93D2C(v46, v22);
    v24 = v23->klass;
    v25 = *(unsigned __int16 *)&v23->klass->_2.rank;
    if ( *(_WORD *)&v23->klass->_2.rank )
    {
      v26 = &v24->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c **)v26 - 1) != System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_26;
      }
      v27 = (__int64)&v24->vtable[*v26];
    }
    else
    {
LABEL_26:
      v27 = sub_1C69E5C(
              v46->fields.__7__wrap1,
              System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo,
              0);
    }
    v28 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v27)(
            v23,
            *(_QWORD *)(v27 + 8));
    v30 = (QuestAfterAction_Command_o *)v28;
    if ( !v28 )
      sub_1C93D2C(0, v29);
    if ( !_4__this )
      sub_1C93D2C(v28, v29);
    CommandType = QuestAfterAction__GetCommandType(_4__this, *(_DWORD *)(v28 + 16), 0);
    if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
    CommandTargetId = QuestAfterAction__ExtractCommandTargetId(v30, 0);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__98_o *)QuestAfterAction__IsExistCommand(
                                                                                    _4__this,
                                                                                    CommandType,
                                                                                    CommandTargetId,
                                                                                    0);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    _7__wrap1 = v46->fields.__7__wrap1;
    if ( !_7__wrap1 )
      goto LABEL_34;
  }
  v46->fields.__2__current = v30;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v46->fields.__2__current, (int32_t)v30, v33, v34, v35, v36, v37, v38);
  v46->fields.__1__state = 1;
  return 1;
}


System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__98__System_Collections_Generic_IEnumerable_QuestAfterAction_Command__GetEnumerator(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__98_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__98_o *v10; // x20
  struct QuestAfterAction_o *_4__this; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *_3__commandEnumerable; // x1

  if ( (byte_4D2D530 & 1) == 0 )
  {
    sub_1C93AD4(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__98_TypeInfo);
    byte_4D2D530 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
    v10 = this;
  }
  else
  {
    v10 = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__98_o *)sub_1C93D20(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__98_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    v10->fields.__4__this = _4__this;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v10->fields.__4__this, (int32_t)_4__this, v12, v13, v14, v15, v16, v17);
  }
  _3__commandEnumerable = this->fields.__3__commandEnumerable;
  v10->fields.commandEnumerable = _3__commandEnumerable;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v10->fields.commandEnumerable,
    (int32_t)_3__commandEnumerable,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  return (System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)v10;
}


QuestAfterAction_Command_o *QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__98__System_Collections_Generic_IEnumerator_QuestAfterAction_Command__get_Current(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__98_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__98__System_Collections_IEnumerator_Reset(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__98_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__98_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__98__System_Collections_IEnumerator_get_Current(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__98_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__98__System_IDisposable_Dispose(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__98_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__98____m__Finally1(this, method);
}


void QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__98____m__Finally1(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__98_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4D2D52F & 1) == 0 )
  {
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    byte_4D2D52F = 1;
  }
  _7__wrap1 = this->fields.__7__wrap1;
  this->fields.__1__state = -1;
  if ( _7__wrap1 )
  {
    klass = _7__wrap1->klass;
    v5 = *(unsigned __int16 *)&_7__wrap1->klass->_2.rank;
    if ( *(_WORD *)&_7__wrap1->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v5;
        p_offset += 4;
        if ( !v5 )
          goto LABEL_8;
      }
      v7 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_8:
      v7 = sub_1C69E5C(_7__wrap1, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v7)(
      _7__wrap1,
      *(_QWORD *)(v7 + 8));
  }
}


void QuestAfterAction__WaitWhileMainStateFinished_d__102___ctor(
        QuestAfterAction__WaitWhileMainStateFinished_d__102_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool QuestAfterAction__WaitWhileMainStateFinished_d__102__MoveNext(
        QuestAfterAction__WaitWhileMainStateFinished_d__102_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct QuestAfterAction_o *_4__this; // x8
  Il2CppObject **p__2__current; // x19

  if ( this->fields.__1__state < 2u )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_1C93D2C(this, method);
    if ( _4__this->fields.isKeepingMainStateButFinished )
    {
      this->fields.__2__current = 0;
      p__2__current = &this->fields.__2__current;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, 0, v2, v3, v4, v5, v6, v7);
      *((_DWORD *)p__2__current - 2) = 1;
      return 1;
    }
    ActionExtensions__Call(this->fields.action, 0);
  }
  return 0;
}


Il2CppObject *QuestAfterAction__WaitWhileMainStateFinished_d__102__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestAfterAction__WaitWhileMainStateFinished_d__102_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestAfterAction__WaitWhileMainStateFinished_d__102__System_Collections_IEnumerator_Reset(
        QuestAfterAction__WaitWhileMainStateFinished_d__102_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_QuestAfterAction__WaitWhileMainStateFinished_d__102_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *QuestAfterAction__WaitWhileMainStateFinished_d__102__System_Collections_IEnumerator_get_Current(
        QuestAfterAction__WaitWhileMainStateFinished_d__102_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void QuestAfterAction__WaitWhileMainStateFinished_d__102__System_IDisposable_Dispose(
        QuestAfterAction__WaitWhileMainStateFinished_d__102_o *this,
        const MethodInfo *method)
{
  ;
}


void QuestAfterAction___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2D52A & 1) == 0 )
  {
    sub_1C93AD4(&QuestAfterAction___c_TypeInfo);
    byte_4D2D52A = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(QuestAfterAction___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestAfterAction___c_TypeInfo->static_fields->__9 = (struct QuestAfterAction___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)QuestAfterAction___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void QuestAfterAction___c___ctor(QuestAfterAction___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_string__o *QuestAfterAction___c___GetBlankEarthTutorialCommand_b__131_0(
        QuestAfterAction___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return (System_Collections_Generic_IEnumerable_string__o *)EventTutorialEntity__GetBeforeActionVals(x, 0);
}


System_Collections_Generic_IEnumerable_string__o *QuestAfterAction___c___GetBlankEarthTutorialCommand_b__131_1(
        QuestAfterAction___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return (System_Collections_Generic_IEnumerable_string__o *)EventTutorialEntity__GetAfterActionVals(x, 0);
}


System_Collections_Generic_IEnumerable_string__o *QuestAfterAction___c___GetRaidUiSetupCommand_b__130_0(
        QuestAfterAction___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
  return (System_Collections_Generic_IEnumerable_string__o *)EventTutorialEntity__GetBeforeActionSetupVals(x, 0);
}


void QuestAfterAction___c__DisplayClass91_0___ctor(
        QuestAfterAction___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction___c__DisplayClass91_0___LoadVoice_b__0(
        QuestAfterAction___c__DisplayClass91_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *svtVInfos; // x0

  if ( (byte_4D2D52B & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    byte_4D2D52B = 1;
  }
  svtVInfos = (System_Collections_Generic_List_object__o *)this->fields.svtVInfos;
  if ( !svtVInfos
    || (System_Collections_Generic_List_object___RemoveAt(
          svtVInfos,
          0,
          (const MethodInfo_387B170 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__),
        (svtVInfos = (System_Collections_Generic_List_object__o *)this->fields.__4__this) == 0) )
  {
    sub_1C93D2C(svtVInfos, method);
  }
  QuestAfterAction__LoadVoice_36859980((QuestAfterAction_o *)svtVInfos, this->fields.svtVInfos, this->fields.endAct, 0);
}


void QuestAfterAction___c__DisplayClass95_0___ctor(
        QuestAfterAction___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction___c__DisplayClass95_0___Play_b__0(
        QuestAfterAction___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4D2D52C & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4D2D52C = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
  ActionExtensions__Call(this->fields.endAct, 0);
}


void QuestAfterAction___c__DisplayClass96_0___ctor(
        QuestAfterAction___c__DisplayClass96_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction___c__DisplayClass96_0___PlaySpecifiedAction_b__0(
        QuestAfterAction___c__DisplayClass96_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  char *_4__this; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4D2D52D & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4D2D52D = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  *((_QWORD *)_4__this + 23) = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(_4__this + 184), 0, v2, v3, v4, v5, v6, v7);
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this
    || (*((_QWORD *)_4__this + 10) = 0,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(_4__this + 80), 0, v10, v11, v12, v13, v14, v15),
        (_4__this = (char *)SingletonTemplate_object___get_Instance((const MethodInfo_3AC57EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0)
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0),
        (_4__this = (char *)this->fields.__4__this) == 0) )
  {
LABEL_8:
    sub_1C93D2C(_4__this, method);
  }
  QuestAfterAction__SetState((QuestAfterAction_o *)_4__this, 0, 0);
  ActionExtensions__Call(this->fields.finishCallback, 0);
}


void QuestAfterAction___c__DisplayClass96_0___PlaySpecifiedAction_b__1(
        QuestAfterAction___c__DisplayClass96_0_o *this,
        const MethodInfo *method)
{
  QuestAfterAction_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C93D2C(0, method);
  QuestAfterAction__SetState(_4__this, 2, 0);
}