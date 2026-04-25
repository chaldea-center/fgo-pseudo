void QuestAfterAction___cctor(const MethodInfo *method)
{
  if ( (byte_4E014E4 & 1) == 0 )
  {
    sub_1CE6700(&QuestAfterAction_TypeInfo);
    byte_4E014E4 = 1;
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

  if ( (byte_4E014E3 & 1) == 0 )
  {
    sub_1CE6700(&BlankEarthQuestAfterAction_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
    sub_1CE6700(&System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo);
    sub_1CE6700(&System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo);
    sub_1CE6700(&PlanetEarthQuestAfterAction_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
    sub_1CE6700(&QuestAfterAction_TitleInfoControlCallback_TypeInfo);
    byte_4E014E3 = 1;
  }
  v3 = (Il2CppObject *)sub_1CE694C(QuestAfterAction_TitleInfoControlCallback_TypeInfo);
  System_Object___ctor(v3, 0);
  this->fields._TitleInfoCtrlCallback_k__BackingField = (struct QuestAfterAction_TitleInfoControlCallback_o *)v3;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields._TitleInfoCtrlCallback_k__BackingField,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (BlankEarthQuestAfterAction_o *)sub_1CE694C(BlankEarthQuestAfterAction_TypeInfo);
  BlankEarthQuestAfterAction___ctor(v10, 0);
  this->fields._BlankEarthQuestAfterAction_k__BackingField = v10;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields._BlankEarthQuestAfterAction_k__BackingField,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (PlanetEarthQuestAfterAction_o *)sub_1CE694C(PlanetEarthQuestAfterAction_TypeInfo);
  PlanetEarthQuestAfterAction___ctor(v17, 0);
  this->fields._PlanetEarthQuestAfterAction_k__BackingField = (struct BlankEarthQuestAfterAction_o *)v17;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields._PlanetEarthQuestAfterAction_k__BackingField,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1CE694C(System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v24,
    (const MethodInfo_357B178 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
  this->fields.commandTypeIds = (struct System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *)v24;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.commandTypeIds, (int32_t)v24, v25, v26, v27, v28, v29, v30);
  v31 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1CE694C(System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v31,
    (const MethodInfo_355AB10 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
  this->fields.svtVoices = (struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v31;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.svtVoices, (int32_t)v31, v32, v33, v34, v35, v36, v37);
  this->fields.MapMoveBeforeFocusSpotId = -1;
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3B5522C *)Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
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
  sub_1CE66A4(p_endAct, 0, v2, v3, v4, v5, v6, v7);
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

  if ( (byte_4E014BF & 1) == 0 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&StringLiteral_1167/*"1"*/);
    byte_4E014BF = 1;
  }
  questAfterAction = 0;
  result = 0;
  BlankEarthTargetWarId = this->fields.BlankEarthTargetWarId;
  v5 = 0;
  if ( BlankEarthTargetWarId <= 0 )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4DFE737 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4DFE737 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v6->static_fields->_QuestId_k__BackingField;
    if ( !byte_4DFE736 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      v6 = TerminalPramsManager_TypeInfo;
      byte_4DFE736 = 1;
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
        sub_1CE6958(QuestAfterActionVals, v9);
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
            sub_1CE6960(QuestAfterActionVals);
          QuestAfterActionVals = System_String__op_Equality(
                                   questAfterAction->m_Items[v11 + 1],
                                   (System_String_o *)StringLiteral_1167/*"1"*/,
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

  if ( (byte_4E014D9 & 1) == 0 )
  {
    sub_1CE6700(&QuestAfterAction_TypeInfo);
    byte_4E014D9 = 1;
  }
  v3 = QuestAfterAction_TypeInfo;
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  QuestAfterAction__DeleteContinueData((const MethodInfo *)v3);
  this->fields.commandBuf = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.commandBuf, 0, v4, v5, v6, v7, v8, v9);
}


QuestAfterAction_Command_array *QuestAfterAction__ConvertValsToCommand(
        QuestAfterAction_o *this,
        System_String_array *actionVals,
        const MethodInfo *method)
{
  if ( (byte_4E014CE & 1) == 0 )
  {
    sub_1CE6700(&QuestAfterAction_TypeInfo);
    byte_4E014CE = 1;
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
  if ( (byte_4E014BE & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&bool_TypeInfo);
    sub_1CE6700(&QuestAfterAction_Command___TypeInfo);
    sub_1CE6700(&QuestAfterAction_Command_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_WarMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_WarReleaseMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1CE6700(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_1CE6700(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    sub_1CE6700(&Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    sub_1CE6700(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____);
    sub_1CE6700(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1CE6700(&GrandQuestViewSwitcher_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__Add__);
    sub_1CE6700(&QuestAfterAction_TypeInfo);
    sub_1CE6700(&ScrTerminalListTop_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    sub_1CE6700(&QuestAfterAction_VoiceInfo_TypeInfo);
    sub_1CE6700(&StringLiteral_16885/*"afterActionBk"*/);
    this = (QuestAfterAction_o *)sub_1CE6700(&StringLiteral_810/*","*/);
    byte_4E014BE = 1;
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
           (const MethodInfo_320F0F0 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____) )
    {
      QuestAfterAction__releaseVoice(v4, v6);
    }
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4DFE737 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4DFE737 = 1;
    }
    v8 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v8 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v8->static_fields->_QuestId_k__BackingField;
    if ( !byte_4DFE736 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      v8 = TerminalPramsManager_TypeInfo;
      byte_4DFE736 = 1;
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4DFE666 )
  {
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    byte_4DFE666 = 1;
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
  if ( !byte_4DFE666 )
  {
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    byte_4DFE666 = 1;
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
  if ( !byte_4DFE666 )
  {
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalSceneComponent_TypeInfo;
    byte_4DFE666 = 1;
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
    if ( !byte_4DFE666 )
    {
      sub_1CE6700(&TerminalSceneComponent_TypeInfo);
      byte_4DFE666 = 1;
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
                                                                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !MasterData_object )
      goto LABEL_356;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        MasterData_object,
                                                                        invoker_method,
                                                                        (const MethodInfo_34E925C *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( !MasterData_object )
      goto LABEL_356;
    MasterName_k__BackingField_high = HIDWORD(MasterData_object->fields._MasterName_k__BackingField);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMasterData_object_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_WarMaster___);
    if ( !MasterData_object )
      goto LABEL_356;
    goto LABEL_69;
  }
  if ( invoker_method_high >= 1 )
  {
    if ( !LODWORD(MasterData_object[3].monitor) )
      j_il2cpp_runtime_class_init_0(MasterData_object);
    if ( !byte_4DFE666 )
    {
      sub_1CE6700(&TerminalSceneComponent_TypeInfo);
      byte_4DFE666 = 1;
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
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ShopMaster___);
    if ( !MasterData_object )
      goto LABEL_356;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___GetEntity(
                                                                        MasterData_object,
                                                                        invoker_method_high,
                                                                        (const MethodInfo_34E925C *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    if ( !MasterData_object )
      goto LABEL_356;
    MasterName_k__BackingField_high = (int32_t)MasterData_object->fields._MasterName_k__BackingField;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_WarMaster___);
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
    if ( !byte_4E01226 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E01226 = 1;
    }
    v27 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v27 = TerminalPramsManager_TypeInfo;
    }
    v27->static_fields->_WarId_k__BackingField = MasterKind_k__BackingField;
    if ( !byte_4DFE666 )
    {
      sub_1CE6700(&TerminalSceneComponent_TypeInfo);
      byte_4DFE666 = 1;
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
  if ( !byte_4E014EF )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E014EF = 1;
  }
  v29 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v29 = TerminalPramsManager_TypeInfo;
  }
  if ( !v29->static_fields->_IsPhaseClear_k__BackingField
    && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_16885/*"afterActionBk"*/, 0) )
  {
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)UnityEngine_PlayerPrefs__GetString_72876844(
                                                                        (System_String_o *)StringLiteral_16885/*"afterActionBk"*/,
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
    if ( !byte_4E01220 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E01220 = 1;
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
    if ( !byte_4E01224 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E01224 = 1;
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
    if ( !byte_4E014F0 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E014F0 = 1;
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
    if ( !byte_4E014F1 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E014F1 = 1;
    }
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    }
    BYTE6(MasterData_object[2].fields.list[1].fields.CollectionChanged) = v35;
    if ( !byte_4E014F2 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      byte_4E014F2 = 1;
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
              (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4DFE737 )
      {
        sub_1CE6700(&TerminalPramsManager_TypeInfo);
        byte_4DFE737 = 1;
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
                (const MethodInfo_3220A90 *)Method_System_Linq_Enumerable_Contains_int___);
        cctor_finished = TerminalPramsManager_TypeInfo->_2.cctor_finished;
        if ( v40 )
        {
          if ( !cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4E014F3 )
          {
            sub_1CE6700(&TerminalPramsManager_TypeInfo);
            byte_4E014F3 = 1;
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
          if ( !byte_4E014F3 )
          {
            sub_1CE6700(&TerminalPramsManager_TypeInfo);
            byte_4E014F3 = 1;
          }
          v43 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v43 = TerminalPramsManager_TypeInfo;
          }
          v43->static_fields->_IsWarClear_k__BackingField = 1;
          id = v38->fields.id;
          if ( !byte_4E01226 )
          {
            sub_1CE6700(&TerminalPramsManager_TypeInfo);
            v43 = TerminalPramsManager_TypeInfo;
            byte_4E01226 = 1;
          }
          if ( !v43->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v43);
            v43 = TerminalPramsManager_TypeInfo;
          }
          v43->static_fields->_WarId_k__BackingField = id;
          v45 = TerminalPramsManager__CheckIsOrdealCallWarClear(v38, 0);
          if ( !byte_4E014F4 )
          {
            sub_1CE6700(&TerminalPramsManager_TypeInfo);
            byte_4E014F4 = 1;
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_WarReleaseMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4DFEC9C )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4DFEC9C = 1;
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
  if ( !byte_4E014F5 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E014F5 = 1;
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
    if ( !byte_4E010D9 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E010D9 = 1;
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
          (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4DFE737 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4DFE737 = 1;
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
    if ( !byte_4E014EF )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E014EF = 1;
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
              (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4DFE737 )
      {
        sub_1CE6700(&TerminalPramsManager_TypeInfo);
        byte_4DFE737 = 1;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      items_high = HIDWORD(MasterData_object[2].fields.list->fields.items);
      if ( !byte_4DFE736 )
      {
        sub_1CE6700(&TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
        byte_4DFE736 = 1;
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
              (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4DFE737 )
      {
        sub_1CE6700(&TerminalPramsManager_TypeInfo);
        byte_4DFE737 = 1;
      }
      MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
      }
      v54 = HIDWORD(MasterData_object[2].fields.list->fields.items);
      if ( !byte_4DFE736 )
      {
        sub_1CE6700(&TerminalPramsManager_TypeInfo);
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
        byte_4DFE736 = 1;
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
    if ( !byte_4E014F2 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E014F2 = 1;
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
  v56 = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4DFE737 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4DFE737 = 1;
  }
  MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
  }
  v57 = HIDWORD(MasterData_object[2].fields.list->fields.items);
  if ( !byte_4DFE736 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)TerminalPramsManager_TypeInfo;
    byte_4DFE736 = 1;
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
    if ( !byte_4E014F6 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E014F6 = 1;
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
      if ( !byte_4DFF129 )
      {
        sub_1CE6700(&TerminalPramsManager_TypeInfo);
        byte_4DFF129 = 1;
      }
      v126 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v126 = TerminalPramsManager_TypeInfo;
      }
      v126->static_fields->_IsAutoResume_k__BackingField = 1;
      if ( !byte_4E01222 )
      {
        sub_1CE6700(&TerminalPramsManager_TypeInfo);
        v126 = TerminalPramsManager_TypeInfo;
        byte_4E01222 = 1;
      }
      if ( !v126->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v126);
        v126 = TerminalPramsManager_TypeInfo;
      }
      v126->static_fields->_DispState_k__BackingField = 2;
      if ( !byte_4E014F6 )
      {
        sub_1CE6700(&TerminalPramsManager_TypeInfo);
        v126 = TerminalPramsManager_TypeInfo;
        byte_4E014F6 = 1;
      }
      if ( !v126->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v126);
        v126 = TerminalPramsManager_TypeInfo;
      }
      BeforeQuestStartWarId_k__BackingField = v126->static_fields->_BeforeQuestStartWarId_k__BackingField;
      if ( !byte_4E01226 )
      {
        sub_1CE6700(&TerminalPramsManager_TypeInfo);
        v126 = TerminalPramsManager_TypeInfo;
        byte_4E01226 = 1;
      }
      if ( !v126->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v126);
        v126 = TerminalPramsManager_TypeInfo;
      }
      v126->static_fields->_WarId_k__BackingField = BeforeQuestStartWarId_k__BackingField;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4DFE666 )
      {
        sub_1CE6700(&TerminalSceneComponent_TypeInfo);
        byte_4DFE666 = 1;
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
      v129 = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !byte_4DFEC9C )
      {
        sub_1CE6700(&TerminalPramsManager_TypeInfo);
        byte_4DFEC9C = 1;
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
             (const MethodInfo_34E92A8 *)Method_DataMasterBase_WarMaster__WarEntity__int__TryGetEntity__) )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)v154;
        if ( !v154 )
          goto LABEL_356;
        v4->fields.ActionMapTargetId = WarEntity__GetBaseMap((WarEntity_o *)v154, 0);
      }
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4E014F7 )
      {
        sub_1CE6700(&TerminalPramsManager_TypeInfo);
        byte_4E014F7 = 1;
      }
      v130 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v130 = TerminalPramsManager_TypeInfo;
      }
      v130->static_fields->_BeforeQuestStartWarId_k__BackingField = 0;
    }
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16885/*"afterActionBk"*/, 0);
    return;
  }
  v60 = sub_1CE67A8(QuestAfterAction_Command___TypeInfo, (unsigned int)max_length >> 1);
  v4->fields.commandBuf = (struct QuestAfterAction_Command_array *)v60;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v4->fields.commandBuf, v60, v61, v62, v63, v64, v65, v66);
  commandBuf = (int *)v4->fields.commandBuf;
  p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
  if ( !commandBuf )
    goto LABEL_356;
  v149 = 0;
  v68 = 0;
  v69 = 0;
  while ( (__int64)v68 < commandBuf[6] )
  {
    v70 = sub_1CE694C(QuestAfterAction_Command_TypeInfo);
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
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v70 + 24), (int32_t)v78, v71, v72, v73, v74, v75, v76);
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
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Split_65174736(
                                                                            (System_String_o *)MasterData_object,
                                                                            (System_String_o *)StringLiteral_810/*","*/,
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
          v87 = sub_1CE694C(QuestAfterAction_VoiceInfo_TypeInfo);
          System_Object___ctor((Il2CppObject *)v87, 0);
          *(_DWORD *)(v87 + 16) = v85;
          *(_QWORD *)(v87 + 24) = v86;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v87 + 24), (int32_t)v86, v88, v89, v90, v91, v92, v93);
          if ( !svtVoices )
            goto LABEL_356;
          System_Collections_Generic_Dictionary_int__object___Add(
            svtVoices,
            v68,
            (Il2CppObject *)v87,
            (const MethodInfo_355B4E4 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__);
        }
        v81 = *(_DWORD *)(v70 + 16);
        v5 = v83;
      }
      if ( v81 == 702 )
      {
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)*v79;
        if ( !*v79 )
          goto LABEL_356;
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_String__Split_65174736(
                                                                            (System_String_o *)MasterData_object,
                                                                            (System_String_o *)StringLiteral_810/*","*/,
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
            if ( !byte_4DFEC9C )
            {
              sub_1CE6700(v5);
              byte_4DFEC9C = 1;
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
            if ( !byte_4DFEC9C )
            {
              sub_1CE6700(v5);
              byte_4DFEC9C = 1;
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
    if ( v102 <= 208 )
    {
      if ( (unsigned int)(v102 - 100) < 0xF && ((0x7C1Fu >> (v102 - 100)) & 1) != 0 )
      {
        v11 = 0;
      }
      else
      {
        if ( (unsigned int)(v102 - 200) > 8 )
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
                                                       (const MethodInfo_357BAAC *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
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
        *(const MethodInfo_38E8F44 **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
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
              *(const MethodInfo_38E8F44 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
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
        sub_1CE6960(MasterData_object);
      }
    }
LABEL_352:
    v117 = *p_commandBuf;
    if ( !*p_commandBuf )
      goto LABEL_356;
    MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)sub_1CE683C(
                                                                        v70,
                                                                        *(_QWORD *)(*(_QWORD *)v117 + 64LL));
    if ( !MasterData_object )
    {
      v148 = sub_1CE697C();
      sub_1CE6828(v148, 0);
    }
    if ( v68 >= v117[6] )
      goto LABEL_518;
    v124 = &v117[2 * v68];
    *((_QWORD *)v124 + 4) = v70;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v124 + 8), v70, v118, v119, v120, v121, v122, v123);
    v69 += 2;
    ++v68;
    commandBuf = (int *)*p_commandBuf;
    if ( !*p_commandBuf )
      goto LABEL_356;
  }
  if ( !(*v5)->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(*v5);
  if ( !byte_4E014EF )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E014EF = 1;
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
    v132 = DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( !(*v5)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v5);
    if ( !byte_4DFE737 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4DFE737 = 1;
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
      if ( !byte_4DFEC9C )
      {
        sub_1CE6700(&TerminalPramsManager_TypeInfo);
        byte_4DFEC9C = 1;
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
        MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
        if ( v157 && MasterData_object )
        {
          MasterData_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                              MasterData_object,
                                                                              &v156,
                                                                              v157->fields.spotId,
                                                                              (const MethodInfo_34E92A8 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
          if ( ((unsigned __int8)MasterData_object & 1) == 0 )
            goto LABEL_446;
          if ( v156 )
          {
            v136 = (int32_t)v156[1].klass;
            if ( !(*v5)->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(*v5);
            if ( !byte_4E014F8 )
            {
              sub_1CE6700(&TerminalPramsManager_TypeInfo);
              byte_4E014F8 = 1;
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
        sub_1CE6958(MasterData_object, v11);
      }
    }
  }
LABEL_446:
  if ( (v149 & 1) == 0 )
  {
    if ( !(*v5)->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(*v5);
    if ( !byte_4DFF129 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4DFF129 = 1;
    }
    v138 = *v5;
    if ( !(*v5)->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v138);
      v138 = *v5;
    }
    v138->static_fields->_IsAutoResume_k__BackingField = 1;
    if ( !byte_4E01222 )
    {
      sub_1CE6700(v5);
      v138 = *v5;
      byte_4E01222 = 1;
    }
    if ( !v138->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v138);
      v138 = *v5;
    }
    v138->static_fields->_DispState_k__BackingField = 2;
    if ( !byte_4DFEC9C )
    {
      sub_1CE6700(v5);
      v138 = *v5;
      byte_4DFEC9C = 1;
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
    if ( !byte_4E010D9 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E010D9 = 1;
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
      if ( !byte_4E010D2 )
      {
        sub_1CE6700(&TerminalPramsManager_TypeInfo);
        byte_4E010D2 = 1;
      }
      v142 = *v5;
      if ( !(*v5)->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v142);
        v142 = *v5;
      }
      v142->static_fields->_BlankEarthSpotId_k__BackingField = 0;
      if ( !byte_4E010D9 )
      {
        sub_1CE6700(v5);
        v142 = *v5;
        byte_4E010D9 = 1;
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
        if ( !byte_4E01222 )
        {
          sub_1CE6700(&TerminalPramsManager_TypeInfo);
          byte_4E01222 = 1;
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
    if ( !byte_4DFE666 )
    {
      sub_1CE6700(&TerminalSceneComponent_TypeInfo);
      byte_4DFE666 = 1;
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
    if ( !byte_4DFEC9C )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4DFEC9C = 1;
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
      if ( !byte_4E01222 )
      {
        sub_1CE6700(&TerminalPramsManager_TypeInfo);
        byte_4E01222 = 1;
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
  if ( !byte_4E01225 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E01225 = 1;
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
  if ( (byte_4E014BC & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_16885/*"afterActionBk"*/);
    byte_4E014BC = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16885/*"afterActionBk"*/, 0);
}


void QuestAfterAction__ExecuteReservedCommandListBeforeFadeIn(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_QuestAfterAction_Command__o *ReservedCommandListBeforeFadeIn_k__BackingField; // x20
  System_Collections_Generic_List_object__o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  Il2CppObject *current; // x20
  int klass; // w8
  bool v12; // w0
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x0
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4E014E0 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_Command__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_Command__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_Command__get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_QuestAfterAction_Command__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_QuestAfterAction_Command__Remove__);
    sub_1CE6700(&Method_System_Collections_Generic_List_QuestAfterAction_Command___ctor___79880920);
    sub_1CE6700(&Method_System_Collections_Generic_List_QuestAfterAction_Command__get_Count__);
    sub_1CE6700(&System_Collections_Generic_List_QuestAfterAction_Command__TypeInfo);
    sub_1CE6700(&QuestAfterAction_TypeInfo);
    byte_4E014E0 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  ReservedCommandListBeforeFadeIn_k__BackingField = this->fields._ReservedCommandListBeforeFadeIn_k__BackingField;
  if ( ReservedCommandListBeforeFadeIn_k__BackingField
    && ReservedCommandListBeforeFadeIn_k__BackingField->fields._size >= 1 )
  {
    v4 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_QuestAfterAction_Command__TypeInfo);
    System_Collections_Generic_List_object____ctor_59791452(
      v4,
      (System_Collections_Generic_IEnumerable_T__o *)ReservedCommandListBeforeFadeIn_k__BackingField,
      (const MethodInfo_390585C *)Method_System_Collections_Generic_List_QuestAfterAction_Command___ctor___79880920);
    if ( !v4 )
      sub_1CE6958(v5, v6);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      v4,
      (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_QuestAfterAction_Command__GetEnumerator__);
    v16 = v15;
    while ( 1 )
    {
      while ( 1 )
      {
        v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v16,
               (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_Command__MoveNext__);
        if ( !v7 )
        {
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v16,
            (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_Command__Dispose__);
          return;
        }
        current = v16.fields._current;
        if ( !v16.fields._current )
          sub_1CE6958(v7, v8);
        klass = (int)v16.fields._current[1].klass;
        if ( klass != 1300 )
          break;
        if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
        v12 = QuestAfterAction__TryEventUiDisableCommand((QuestAfterAction_Command_o *)current, v8);
LABEL_21:
        if ( v12 )
        {
          v14 = (System_Collections_Generic_List_object__o *)this->fields._ReservedCommandListBeforeFadeIn_k__BackingField;
          if ( !v14 )
            sub_1CE6958(0, v13);
          System_Collections_Generic_List_object___Remove(
            v14,
            current,
            (const MethodInfo_3907490 *)Method_System_Collections_Generic_List_QuestAfterAction_Command__Remove__);
        }
      }
      if ( klass == 1310 )
      {
        if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
        v12 = QuestAfterAction__TryRaidUiDisableCommand((QuestAfterAction_Command_o *)current, 0, v9);
        goto LABEL_21;
      }
      if ( klass == 1312 )
      {
        if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
        v12 = QuestAfterAction__TryRaidUiDisableCommand((QuestAfterAction_Command_o *)current, 1, v9);
        goto LABEL_21;
      }
    }
  }
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
    sub_1CE6958(0, v3);
  max_length = BlankEarthTutorialCommand->max_length;
  v6 = BlankEarthTutorialCommand;
  v7 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    do
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1CE6960(BlankEarthTutorialCommand);
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
  if ( (byte_4E014C1 & 1) == 0 )
  {
    command = (QuestAfterAction_Command_o *)sub_1CE6700(&StringLiteral_810/*","*/);
    byte_4E014C1 = 1;
  }
  if ( !v2 )
    goto LABEL_11;
  command = (QuestAfterAction_Command_o *)v2->fields.param;
  if ( !command )
    goto LABEL_11;
  command = (QuestAfterAction_Command_o *)System_String__Contains(
                                            (System_String_o *)command,
                                            (System_String_o *)StringLiteral_810/*","*/,
                                            0);
  param = (QuestAfterAction_Command_c *)v2->fields.param;
  if ( ((unsigned __int8)command & 1) == 0 )
    return System_Int32__Parse((System_String_o *)param, 0);
  if ( !param || (command = (QuestAfterAction_Command_o *)System_String__Split(v2->fields.param, 0x2Cu, 0, 0)) == 0 )
LABEL_11:
    sub_1CE6958(command, method);
  if ( !LODWORD(command->fields.param) )
    sub_1CE6960(command);
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

  if ( (byte_4E014CF & 1) == 0 )
  {
    sub_1CE6700(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__102_TypeInfo);
    byte_4E014CF = 1;
  }
  v5 = sub_1CE694C(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__102_TypeInfo);
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__102___ctor(
    (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__102_o *)v5,
    -2,
    0);
  if ( !v5 )
    sub_1CE6958(v6, v7);
  *(_QWORD *)(v5 + 56) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 56), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 48) = commandEnumerable;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 48), (int32_t)commandEnumerable, v14, v15, v16, v17, v18, v19);
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

  if ( (byte_4E014C2 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Array_Empty_QuestAfterAction_Command___);
    sub_1CE6700(&QuestAfterAction_Command___TypeInfo);
    sub_1CE6700(&QuestAfterAction_Command_TypeInfo);
    byte_4E014C2 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v6 = Method_System_Array_Empty_QuestAfterAction_Command___;
    v7 = *((_QWORD *)Method_System_Array_Empty_QuestAfterAction_Command___ + 7);
    if ( !v7 )
    {
      sub_1CBC7E4(Method_System_Array_Empty_QuestAfterAction_Command___);
      v7 = v6[7];
    }
    v8 = *(_QWORD *)(v7 + 16);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1CBC788(inited);
    if ( !*(_DWORD *)(v8 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v8);
    v9 = *(_QWORD *)(v6[7] + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1CBC788(inited);
    return **(QuestAfterAction_Command_array ***)(v9 + 184);
  }
  else
  {
    if ( !actionVals
      || (IsNullOrEmpty = sub_1CE67A8(
                            QuestAfterAction_Command___TypeInfo,
                            (unsigned int)(SLODWORD(actionVals->max_length) / 2))) == 0 )
    {
LABEL_25:
      sub_1CE6958(IsNullOrEmpty, v4);
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
        v15 = sub_1CE694C(QuestAfterAction_Command_TypeInfo);
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
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v15 + 24), (int32_t)v22, v16, v17, v18, v19, v20, v21);
        IsNullOrEmpty = sub_1CE683C(v15, *(_QWORD *)(*(_QWORD *)v10 + 64LL));
        if ( !IsNullOrEmpty )
        {
          v30 = sub_1CE697C();
          sub_1CE6828(v30, 0);
        }
        if ( v12 >= v10[6] )
LABEL_24:
          sub_1CE6960(IsNullOrEmpty);
        *(_QWORD *)(v13 + 8 * v12) = v15;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v13 + v11), v15, v23, v24, v25, v26, v27, v28);
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

  if ( (byte_4E014DB & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1CE6700(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1CE6700(&Method_System_Linq_Enumerable_Any_string___);
    sub_1CE6700(&QuestAfterAction_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E014DB = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4DFE737 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4DFE737 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v8 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL);
  if ( !byte_4DFE736 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_4DFE736 = 1;
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
      if ( Instance )
      {
        v10 = QuestPhaseDetailMaster__GetAfterAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0);
        if ( v10 )
          return v10;
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          v12 = DataManager__GetMasterData_object_(
                  Instance,
                  (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4DFE737 )
          {
            sub_1CE6700(&TerminalPramsManager_TypeInfo);
            byte_4DFE737 = 1;
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
                       (const MethodInfo_34E925C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
            if ( Entity )
            {
              v14 = Entity;
              if ( System_Linq_Enumerable__Any_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)Entity[6].klass,
                     (const MethodInfo_3210080 *)Method_System_Linq_Enumerable_Any_string___) )
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
    sub_1CE6958(Instance, v6);
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

  if ( (byte_4E014DA & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1CE6700(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1CE6700(&Method_System_Linq_Enumerable_Any_string___);
    sub_1CE6700(&QuestAfterAction_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E014DA = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_35;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4DFE737 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4DFE737 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  v8 = *(_DWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 20LL);
  if ( !byte_4DFE736 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_4DFE736 = 1;
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
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
      if ( Instance )
      {
        v10 = QuestPhaseDetailMaster__GetBeforeAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0);
        if ( v10 )
          return v10;
        Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( Instance )
        {
          v12 = DataManager__GetMasterData_object_(
                  Instance,
                  (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_QuestMaster___);
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4DFE737 )
          {
            sub_1CE6700(&TerminalPramsManager_TypeInfo);
            byte_4DFE737 = 1;
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
                       (const MethodInfo_34E925C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
            if ( Entity )
            {
              v14 = Entity;
              if ( System_Linq_Enumerable__Any_object_(
                     (System_Collections_Generic_IEnumerable_TSource__o *)Entity[5].monitor,
                     (const MethodInfo_3210080 *)Method_System_Linq_Enumerable_Any_string___) )
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
    sub_1CE6958(Instance, v6);
  }
  return 0;
}


QuestAfterAction_Command_array *QuestAfterAction__GetBlankEarthTutorialCommand(
        QuestAfterAction_o *this,
        const MethodInfo *method)
{
  System_Array_o *v3; // x0
  System_RuntimeFieldHandle_o v4; // x1
  System_Array_o *v5; // x20
  __int64 v6; // x21
  System_Collections_Generic_IEnumerable_T__o *v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  EventTutorialEntity_array *AvailableTutorialArray; // x0
  QuestAfterAction___c_c *v16; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x20
  System_Func_object__object__o *_9__135_0; // x21
  Il2CppObject *v19; // x22
  struct QuestAfterAction___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  System_Collections_Generic_List_TSource__o *v28; // x0
  QuestAfterAction___c_c *v29; // x8
  System_Collections_Generic_List_object__o *v30; // x21
  System_Func_object__object__o *_9__135_1; // x22
  Il2CppObject *v32; // x23
  struct QuestAfterAction___c_StaticFields *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  QuestAfterAction_o *v41; // x0
  const MethodInfo *v42; // x2
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *v43; // x0
  const MethodInfo *v44; // x2
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *v45; // x0

  if ( (byte_4E014DE & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
    sub_1CE6700(&Method_System_Linq_Enumerable_ToArray_QuestAfterAction_Command___);
    sub_1CE6700(&Method_System_Linq_Enumerable_ToList_string___);
    sub_1CE6700(&EventTutorialMaster_EventTutorialArgs_TypeInfo);
    sub_1CE6700(&System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1CE6700(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1CE6700(&EventTutorialMaster_OpenType___TypeInfo);
    sub_1CE6700(&Field__PrivateImplementationDetails__0E24DABDAA65F1F9E961A0EFF8FDC6D5F49343D9C3B631647C34888694F88FDB);
    sub_1CE6700(&Method_QuestAfterAction___c__GetBlankEarthTutorialCommand_b__135_0__);
    sub_1CE6700(&Method_QuestAfterAction___c__GetBlankEarthTutorialCommand_b__135_1__);
    sub_1CE6700(&QuestAfterAction___c_TypeInfo);
    byte_4E014DE = 1;
  }
  v3 = (System_Array_o *)sub_1CE67A8(EventTutorialMaster_OpenType___TypeInfo, 3);
  v4.fields.value = Field__PrivateImplementationDetails__0E24DABDAA65F1F9E961A0EFF8FDC6D5F49343D9C3B631647C34888694F88FDB;
  v5 = v3;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65822052(v3, v4, 0);
  v6 = sub_1CE694C(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v6, 0);
  if ( !v6 )
    goto LABEL_18;
  *(_DWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 24) = v5;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v6 + 24), (int32_t)v5, v9, v10, v11, v12, v13, v14);
  AvailableTutorialArray = EventTutorialMaster__GetAvailableTutorialArray(
                             (EventTutorialMaster_EventTutorialArgs_o *)v6,
                             0);
  v16 = QuestAfterAction___c_TypeInfo;
  v17 = (System_Collections_Generic_IEnumerable_TSource__o *)AvailableTutorialArray;
  if ( !QuestAfterAction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction___c_TypeInfo);
    v16 = QuestAfterAction___c_TypeInfo;
  }
  _9__135_0 = (System_Func_object__object__o *)v16->static_fields->__9__135_0;
  if ( !_9__135_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = QuestAfterAction___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__135_0 = (System_Func_object__object__o *)sub_1CE694C(System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
    System_Func_object__object____ctor(
      _9__135_0,
      v19,
      Method_QuestAfterAction___c__GetBlankEarthTutorialCommand_b__135_0__,
      0);
    static_fields = QuestAfterAction___c_TypeInfo->static_fields;
    static_fields->__9__135_0 = (struct System_Func_EventTutorialEntity__IEnumerable_string___o *)_9__135_0;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__135_0,
      (int32_t)_9__135_0,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
  }
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v17,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__135_0,
                                                               (const MethodInfo_323CECC *)Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
  v28 = System_Linq_Enumerable__ToList_object_(
          v27,
          (const MethodInfo_3248A54 *)Method_System_Linq_Enumerable_ToList_string___);
  v29 = QuestAfterAction___c_TypeInfo;
  v30 = (System_Collections_Generic_List_object__o *)v28;
  if ( !QuestAfterAction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction___c_TypeInfo);
    v29 = QuestAfterAction___c_TypeInfo;
  }
  _9__135_1 = (System_Func_object__object__o *)v29->static_fields->__9__135_1;
  if ( !_9__135_1 )
  {
    if ( !v29->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v29);
      v29 = QuestAfterAction___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v29->static_fields->__9;
    _9__135_1 = (System_Func_object__object__o *)sub_1CE694C(System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
    System_Func_object__object____ctor(
      _9__135_1,
      v32,
      Method_QuestAfterAction___c__GetBlankEarthTutorialCommand_b__135_1__,
      0);
    v33 = QuestAfterAction___c_TypeInfo->static_fields;
    v33->__9__135_1 = (struct System_Func_EventTutorialEntity__IEnumerable_string___o *)_9__135_1;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v33->__9__135_1, (int32_t)_9__135_1, v34, v35, v36, v37, v38, v39);
  }
  v40 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v17,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__135_1,
                                                               (const MethodInfo_323CECC *)Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
  v7 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__ToList_object_(
                                                        v40,
                                                        (const MethodInfo_3248A54 *)Method_System_Linq_Enumerable_ToList_string___);
  if ( !v30 )
LABEL_18:
    sub_1CE6958(v7, v8);
  System_Collections_Generic_List_object___AddRange(
    v30,
    v7,
    (const MethodInfo_3906174 *)Method_System_Collections_Generic_List_string__AddRange__);
  v41 = (QuestAfterAction_o *)System_Collections_Generic_List_object___ToArray(
                                v30,
                                (const MethodInfo_3907AC0 *)Method_System_Collections_Generic_List_string__ToArray__);
  v43 = (System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *)QuestAfterAction__ConvertValsToCommand(
                                                                                v41,
                                                                                (System_String_array *)v41,
                                                                                v42);
  v45 = QuestAfterAction__FilterCommandsMainActionConflictsResolved(this, v43, v44);
  return (QuestAfterAction_Command_array *)System_Linq_Enumerable__ToArray_object_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)v45,
                                             (const MethodInfo_32438A8 *)Method_System_Linq_Enumerable_ToArray_QuestAfterAction_Command___);
}


int32_t QuestAfterAction__GetCommandType(QuestAfterAction_o *this, int32_t commandId, const MethodInfo *method)
{
  if ( commandId <= 208 )
  {
    if ( (unsigned int)(commandId - 100) >= 0xF || ((0x7C1Fu >> (commandId - 100)) & 1) == 0 )
    {
      if ( (unsigned int)(commandId - 200) <= 8 )
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
        return dword_D58A20[commandId - 1000];
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
        const MethodInfo_329DB4C *method)
{
  UnityEngine_Object_o *MapGameObject; // x20
  _BOOL8 v11; // x0
  __int64 v12; // x1

  if ( !method->rgctx_data )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    if ( !method->rgctx_data )
      sub_1CBC7E4();
  }
  MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(this, comType, id, state, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality(MapGameObject, 0, 0);
  if ( v11 )
    return 0;
  if ( !MapGameObject )
    sub_1CE6958(v11, v12);
  return UnityEngine_GameObject__GetComponent_object_(
           (UnityEngine_GameObject_o *)MapGameObject,
           (const MethodInfo_325BE3C *)method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_);
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
  if ( (byte_4E014D5 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    this = (QuestAfterAction_o *)sub_1CE6700(&SrcSpotBasePrefab_TypeInfo);
    byte_4E014D5 = 1;
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
        sub_1CE6958(this, *(_QWORD *)&comType);
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

  if ( (byte_4E014C3 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_MapGimmickMaster___);
    sub_1CE6700(&Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__getEntitys__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_int__TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E014C3 = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_1CE694C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_38E86F0 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_19;
  Instance = (System_Object_array *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)Instance,
                                      (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
  if ( !Instance )
    goto LABEL_19;
  Instance = DataMasterBase_object__object__int___getEntitys(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               (const MethodInfo_34E84E0 *)Method_DataMasterBase_MapGimmickMaster__MapGimmickEntity__int__getEntitys__);
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
        sub_1CE6960(Instance);
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
            *(const MethodInfo_38E8F44 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
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
    sub_1CE6958(Instance, name_low);
  }
LABEL_17:
  if ( !v4 )
    goto LABEL_19;
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_38EA9FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


QuestAfterAction_Command_array *QuestAfterAction__GetRaidUiSetupCommand(
        QuestAfterAction_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *EventID; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8
  System_Array_o *v6; // x0
  System_RuntimeFieldHandle_o v7; // x1
  System_Array_o *v8; // x21
  __int64 v9; // x20
  TerminalPramsManager_c *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct TerminalSceneComponent_o *v17; // x8
  struct ScrTerminalMap_o *v18; // x8
  int32_t *p_currentMapId; // x8
  TerminalPramsManager_c *v20; // x0
  TerminalPramsManager_c *v21; // x0
  EventTutorialEntity_array *AvailableTutorialArray; // x0
  QuestAfterAction___c_c *v23; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x20
  System_Func_object__object__o *_9__134_0; // x21
  Il2CppObject *v26; // x22
  struct QuestAfterAction___c_StaticFields *static_fields; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x0
  QuestAfterAction_o *v35; // x0
  const MethodInfo *v36; // x2
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *v37; // x0
  const MethodInfo *v38; // x2
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *v39; // x0

  if ( (byte_4E014DD & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
    sub_1CE6700(&Method_System_Linq_Enumerable_ToArray_QuestAfterAction_Command___);
    sub_1CE6700(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1CE6700(&EventTutorialMaster_EventTutorialArgs_TypeInfo);
    sub_1CE6700(&System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
    sub_1CE6700(&EventTutorialMaster_OpenType___TypeInfo);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    sub_1CE6700(&Field__PrivateImplementationDetails__83682AE78EC9DC337AFAC04521CAD301FF028FAFB91A8278FD1007638F092305);
    sub_1CE6700(&Method_QuestAfterAction___c__GetRaidUiSetupCommand_b__134_0__);
    sub_1CE6700(&QuestAfterAction___c_TypeInfo);
    byte_4E014DD = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4DFE666 )
  {
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    byte_4DFE666 = 1;
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
    v6 = (System_Array_o *)sub_1CE67A8(EventTutorialMaster_OpenType___TypeInfo, 3);
    v7.fields.value = Field__PrivateImplementationDetails__83682AE78EC9DC337AFAC04521CAD301FF028FAFB91A8278FD1007638F092305;
    v8 = v6;
    System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_65822052(v6, v7, 0);
    v9 = sub_1CE694C(EventTutorialMaster_EventTutorialArgs_TypeInfo);
    EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v9, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4DFEC9C )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4DFEC9C = 1;
    }
    v10 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v10 = TerminalPramsManager_TypeInfo;
    }
    EventID = (TerminalSceneComponent_c *)WarMaster__getEventID(v10->static_fields->_WarId_k__BackingField, 0);
    if ( v9 )
    {
      *(_QWORD *)(v9 + 24) = v8;
      *(_DWORD *)(v9 + 16) = (_DWORD)EventID;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)v8, v11, v12, v13, v14, v15, v16);
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4DFE666 )
      {
        sub_1CE6700(&TerminalSceneComponent_TypeInfo);
        byte_4DFE666 = 1;
      }
      EventID = TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        EventID = TerminalSceneComponent_TypeInfo;
      }
      v17 = EventID->static_fields->mInstance;
      if ( v17 )
      {
        v18 = v17->fields.mTerminalMap;
        if ( v18 )
        {
          p_currentMapId = &v18->fields.currentMapId;
          goto LABEL_40;
        }
      }
    }
LABEL_47:
    sub_1CE6958(EventID, method);
  }
  v9 = sub_1CE694C(EventTutorialMaster_EventTutorialArgs_TypeInfo);
  EventTutorialMaster_EventTutorialArgs___ctor((EventTutorialMaster_EventTutorialArgs_o *)v9, 0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4DFEC9C )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4DFEC9C = 1;
  }
  v20 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v20 = TerminalPramsManager_TypeInfo;
  }
  EventID = (TerminalSceneComponent_c *)WarMaster__getEventID(v20->static_fields->_WarId_k__BackingField, 0);
  if ( !v9 )
    goto LABEL_47;
  *(_DWORD *)(v9 + 16) = (_DWORD)EventID;
  *(_DWORD *)(v9 + 20) = 18;
  if ( !byte_4DFEC9C )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4DFEC9C = 1;
  }
  v21 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v21 = TerminalPramsManager_TypeInfo;
  }
  p_currentMapId = &v21->static_fields->_WarId_k__BackingField;
LABEL_40:
  *(_DWORD *)(v9 + 40) = *p_currentMapId;
  AvailableTutorialArray = EventTutorialMaster__GetAvailableTutorialArray(
                             (EventTutorialMaster_EventTutorialArgs_o *)v9,
                             0);
  v23 = QuestAfterAction___c_TypeInfo;
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)AvailableTutorialArray;
  if ( !QuestAfterAction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction___c_TypeInfo);
    v23 = QuestAfterAction___c_TypeInfo;
  }
  _9__134_0 = (System_Func_object__object__o *)v23->static_fields->__9__134_0;
  if ( !_9__134_0 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = QuestAfterAction___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__134_0 = (System_Func_object__object__o *)sub_1CE694C(System_Func_EventTutorialEntity__IEnumerable_string___TypeInfo);
    System_Func_object__object____ctor(_9__134_0, v26, Method_QuestAfterAction___c__GetRaidUiSetupCommand_b__134_0__, 0);
    static_fields = QuestAfterAction___c_TypeInfo->static_fields;
    static_fields->__9__134_0 = (struct System_Func_EventTutorialEntity__IEnumerable_string___o *)_9__134_0;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__134_0,
      (int32_t)_9__134_0,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__SelectMany_object__object_(
                                                               v24,
                                                               (System_Func_TSource__IEnumerable_TResult___o *)_9__134_0,
                                                               (const MethodInfo_323CECC *)Method_System_Linq_Enumerable_SelectMany_EventTutorialEntity__string___);
  v35 = (QuestAfterAction_o *)System_Linq_Enumerable__ToArray_object_(
                                v34,
                                (const MethodInfo_32438A8 *)Method_System_Linq_Enumerable_ToArray_string___);
  v37 = (System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *)QuestAfterAction__ConvertValsToCommand(
                                                                                v35,
                                                                                (System_String_array *)v35,
                                                                                v36);
  v39 = QuestAfterAction__FilterCommandsMainActionConflictsResolved(this, v37, v38);
  return (QuestAfterAction_Command_array *)System_Linq_Enumerable__ToArray_object_(
                                             (System_Collections_Generic_IEnumerable_TSource__o *)v39,
                                             (const MethodInfo_32438A8 *)Method_System_Linq_Enumerable_ToArray_QuestAfterAction_Command___);
}


int32_t QuestAfterAction__GetState(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_4E014D3 & 1) == 0 )
  {
    sub_1CE6700(&Method_CStateManager_QuestAfterAction__getState__);
    byte_4E014D3 = 1;
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
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  struct System_Collections_Generic_List_QuestAfterAction_Command__o **p_ReservedCommandListBeforeFadeIn_k__BackingField; // x19
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7

  if ( (byte_4E014BD & 1) == 0 )
  {
    sub_1CE6700(&Method_CStateManager_QuestAfterAction___ctor__);
    sub_1CE6700(&Method_CStateManager_QuestAfterAction__add__);
    sub_1CE6700(&CStateManager_QuestAfterAction__TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_int__TypeInfo);
    sub_1CE6700(&QuestAfterAction_StateAdditional_TypeInfo);
    sub_1CE6700(&QuestAfterAction_StateInstant_TypeInfo);
    sub_1CE6700(&QuestAfterAction_StateMain_TypeInfo);
    sub_1CE6700(&QuestAfterAction_StateNone_TypeInfo);
    byte_4E014BD = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v5 = (CStateManager_T__o *)sub_1CE694C(CStateManager_QuestAfterAction__TypeInfo);
    CStateManager_object____ctor(
      v5,
      (Il2CppObject *)this,
      4,
      (const MethodInfo_3473510 *)Method_CStateManager_QuestAfterAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestAfterAction__o *)v5;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.fsm, (int32_t)v5, v6, v7, v8, v9, v10, v11);
    fsm = (CStateManager_T__o *)this->fields.fsm;
    v13 = (Il2CppObject *)sub_1CE694C(QuestAfterAction_StateNone_TypeInfo);
    System_Object___ctor(v13, 0);
    if ( !fsm )
      goto LABEL_21;
    CStateManager_object___add(
      fsm,
      0,
      (IState_T__o *)v13,
      (const MethodInfo_34735B8 *)Method_CStateManager_QuestAfterAction__add__);
    v16 = (CStateManager_T__o *)*p_fsm;
    v17 = (Il2CppObject *)sub_1CE694C(QuestAfterAction_StateMain_TypeInfo);
    System_Object___ctor(v17, 0);
    if ( !v16 )
      goto LABEL_21;
    CStateManager_object___add(
      v16,
      1,
      (IState_T__o *)v17,
      (const MethodInfo_34735B8 *)Method_CStateManager_QuestAfterAction__add__);
    v18 = (CStateManager_T__o *)*p_fsm;
    v19 = (QuestAfterAction_StateAdditional_o *)sub_1CE694C(QuestAfterAction_StateAdditional_TypeInfo);
    QuestAfterAction_StateAdditional___ctor(v19, 0);
    if ( !v18 )
      goto LABEL_21;
    CStateManager_object___add(
      v18,
      2,
      (IState_T__o *)v19,
      (const MethodInfo_34735B8 *)Method_CStateManager_QuestAfterAction__add__);
    v20 = (CStateManager_T__o *)*p_fsm;
    v21 = (QuestAfterAction_StateInstant_o *)sub_1CE694C(QuestAfterAction_StateInstant_TypeInfo);
    QuestAfterAction_StateInstant___ctor(v21, 0);
    if ( !v20 )
      goto LABEL_21;
    CStateManager_object___add(
      v20,
      3,
      (IState_T__o *)v21,
      (const MethodInfo_34735B8 *)Method_CStateManager_QuestAfterAction__add__);
  }
  QuestAfterAction__SetState(this, 0, v2);
  this->fields.commandBuf = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.commandBuf, 0, v22, v23, v24, v25, v26, v27);
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
                                                                                (const MethodInfo_357BD40 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    v29 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( ((unsigned __int8)commandTypeIds & 1) != 0 )
    {
      if ( !v29 )
        goto LABEL_21;
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds,
                                                                                  v28,
                                                                                  (const MethodInfo_357BAAC *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( !commandTypeIds )
        goto LABEL_21;
      v30 = HIDWORD(commandTypeIds->fields._entries) + 1;
      LODWORD(commandTypeIds->fields._entries) = 0;
      HIDWORD(commandTypeIds->fields._entries) = v30;
    }
    else
    {
      v31 = (System_Collections_Generic_List_int__o *)sub_1CE694C(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v31,
        (const MethodInfo_38E86F0 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v29 )
        goto LABEL_21;
      System_Collections_Generic_Dictionary_Int32Enum__object___set_Item(
        v29,
        v28,
        (Il2CppObject *)v31,
        (const MethodInfo_357BB38 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
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
                             (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.screenCollider = (struct UnityEngine_BoxCollider_o *)Component_object,
        sub_1CE66A4(
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
    sub_1CE6958(commandTypeIds, v15);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)commandTypeIds, 0, 0);
  this->fields.lastDispSpot = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.lastDispSpot, 0, v39, v40, v41, v42, v43, v44);
  v45 = (System_Collections_Generic_List_int__o *)sub_1CE694C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v45,
    (const MethodInfo_38E86F0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.invalidMapGimmickIdList = v45;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.invalidMapGimmickIdList,
    (int32_t)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  this->fields._ReservedCommandListBeforeFadeIn_k__BackingField = 0;
  p_ReservedCommandListBeforeFadeIn_k__BackingField = &this->fields._ReservedCommandListBeforeFadeIn_k__BackingField;
  *((_BYTE *)p_ReservedCommandListBeforeFadeIn_k__BackingField - 8) = 0;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)p_ReservedCommandListBeforeFadeIn_k__BackingField,
    0,
    v53,
    v54,
    v55,
    v56,
    v57,
    v58);
  *((_BYTE *)p_ReservedCommandListBeforeFadeIn_k__BackingField - 32) = 0;
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

  if ( (byte_4E014DC & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E014DC = 1;
  }
  isFadeTransition = 0;
  if ( this->fields.commandBuf
    && (IsExistTerminalTransition = QuestAfterAction__IsExistTerminalTransition(this, &isFadeTransition, v2),
        !IsExistTerminalTransition || !isFadeTransition) )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4E010D9 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E010D9 = 1;
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
      Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4DFE737 )
      {
        sub_1CE6700(&TerminalPramsManager_TypeInfo);
        byte_4DFE737 = 1;
      }
      v9 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v9 = TerminalPramsManager_TypeInfo;
      }
      if ( !Instance )
        sub_1CE6958(v9, v7);
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
        LOBYTE(QuestInfo) = v10 == *(_DWORD *)(*((_QWORD *)QuestInfo + 23) + 852LL);
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
    sub_1CE6958(this, command);
  v5 = this;
  if ( !LODWORD(this->fields.m_CancellationTokenSource)
    || (this = (QuestAfterAction_o *)System_Int32__Parse((System_String_o *)this->fields.invalidMapGimmickIdList, 0),
        LODWORD(v5->fields.m_CancellationTokenSource) <= 1) )
  {
    sub_1CE6960(this);
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

  if ( (byte_4E014C6 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4E014C6 = 1;
  }
  commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
  if ( !commandTypeIds )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         commandTypeIds,
         commandType,
         (const MethodInfo_357BD40 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__) )
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.commandTypeIds;
    if ( commandTypeIds )
    {
      commandTypeIds = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                  commandTypeIds,
                                                                                  commandType,
                                                                                  (const MethodInfo_357BAAC *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( commandTypeIds )
        return System_Collections_Generic_List_int___Contains(
                 (System_Collections_Generic_List_int__o *)commandTypeIds,
                 commandTypeId,
                 (const MethodInfo_38E92BC *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_9:
    sub_1CE6958(commandTypeIds, *(_QWORD *)&commandType);
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
      sub_1CE6960(this);
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
    sub_1CE6958(this, *(_QWORD *)&spotId);
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
      sub_1CE6958(this, isFadeTransition);
    m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
    if ( m_CancellationTokenSource )
    {
      if ( !(_DWORD)m_CancellationTokenSource )
LABEL_19:
        sub_1CE6960(this);
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

  if ( (byte_4E014D8 & 1) == 0 )
  {
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    byte_4E014D8 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4DFE666 )
  {
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    byte_4DFE666 = 1;
  }
  v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v2->fields.subRootGimmickP->klass;
  if ( !klass || (v2 = *(ScrTerminalMap_o **)&klass->_2.static_fields_size) == 0 )
    sub_1CE6958(v2, method);
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
  int32_t result[2]; // [xsp+18h] [xbp-18h] BYREF

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
      if ( SLODWORD(v6->max_length) < 5 || !System_Int32__TryParse(v6->m_Items[4], result, 0) )
        goto LABEL_16;
      v7 = result[0];
    }
    else
    {
      if ( ((1 << v5) & 7) != 0 )
      {
        if ( v6 )
        {
          if ( SLODWORD(v6->max_length) < 4 || !System_Int32__TryParse(v6->m_Items[3], &result[1], 0) )
            goto LABEL_16;
          v7 = result[1];
          goto LABEL_30;
        }
LABEL_36:
        sub_1CE6958(cmd, method);
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
        sub_1CE6960(actionCommand);
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

  if ( (byte_4E014D3 & 1) == 0 )
  {
    sub_1CE6700(&Method_CStateManager_QuestAfterAction__getState__);
    byte_4E014D3 = 1;
  }
  fsm = this->fields.fsm;
  return fsm && fsm->fields.m_state == 1;
}


bool QuestAfterAction__IsPlayingAction(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_4E014D3 & 1) == 0 )
  {
    sub_1CE6700(&Method_CStateManager_QuestAfterAction__getState__);
    byte_4E014D3 = 1;
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
      sub_1CE6958(RaidUiSetupCommand, v6);
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
      sub_1CE6960(RaidUiSetupCommand);
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

  if ( (byte_4E014DF & 1) == 0 )
  {
    sub_1CE6700(&BalanceConfig_TypeInfo);
    this = (QuestAfterAction_o *)sub_1CE6700(&Method_System_Linq_Enumerable_Contains_int___);
    byte_4E014DF = 1;
  }
  *(_QWORD *)result = 0;
  if ( !command )
    goto LABEL_20;
  if ( command->fields.id != 560 || System_String__IsNullOrEmpty(command->fields.param, 0) )
    return 0;
  this = (QuestAfterAction_o *)command->fields.param;
  if ( !this || (this = (QuestAfterAction_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0)) == 0 )
LABEL_20:
    sub_1CE6958(this, command);
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
      sub_1CE6960(0);
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
             (const MethodInfo_3220A90 *)Method_System_Linq_Enumerable_Contains_int___) )
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
      sub_1CE6960(1);
    if ( !*(_QWORD *)v6 )
      sub_1CE6958(1, method);
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
      sub_1CE6958(RaidUiSetupCommand, v4);
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
      sub_1CE6960(RaidUiSetupCommand);
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

  if ( (byte_4E014CA & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_EventMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ShopActionMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_ShopMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_1CE6700(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_1CE6700(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__get_Current__);
    sub_1CE6700(&EventMissionActionInfo_TypeInfo);
    sub_1CE6700(&Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    byte_4E014CA = 1;
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
  if ( !byte_4DFE666 )
  {
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    byte_4DFE666 = 1;
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
      Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_object )
        goto LABEL_67;
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                 v4->fields.shopId,
                 (const MethodInfo_34E925C *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( Entity )
      {
        v12 = Entity;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_EventMaster___);
        if ( !Master_object )
          goto LABEL_67;
        v13 = DataMasterBase_object__object__int___GetEntity(
                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                (int32_t)v12[1].monitor,
                (const MethodInfo_34E925C *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !v13 || !EventEntity__IsEventPeriod((EventEntity_o *)v13, 0, 0) )
          goto LABEL_66;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        Master_object = (char *)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_ShopActionMaster___);
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
          (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
        v44 = v43;
        while ( 1 )
        {
          v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v44,
                  (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__);
          if ( !v14 )
            break;
          current = v44.fields._current;
          if ( !v44.fields._current )
            sub_1CE6958(v14, v15);
          if ( LODWORD(v44.fields._current[1].monitor) == 4 )
          {
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            if ( !byte_4E014F9 )
            {
              sub_1CE6700(&TerminalPramsManager_TypeInfo);
              byte_4E014F9 = 1;
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
              sub_1CE6958(0, v18);
            klass = current[2].klass;
            TransitionInfo_k__BackingField->fields.afterActionVals = (struct System_String_array *)klass;
            sub_1CE66A4(
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
              sub_1CE6958(v27, v28);
            v29->fields.optionId = (int32_t)current[2].monitor;
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v44,
          (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__);
      }
    }
  }
  else
  {
    Master_object = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_67;
    v7 = (DataManager_o *)Master_object;
    Master_object = (char *)DataManager__GetMasterData_object_(
                              (DataManager_o *)Master_object,
                              (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
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
      v10 = (EventMissionActionInfo_o *)sub_1CE694C(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_46839508(v10, v9, 0);
    }
    else
    {
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v7,
                                (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
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
      v10 = (EventMissionActionInfo_o *)sub_1CE694C(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v10, v31, 0);
    }
    Master_object = (char *)DataManager__GetMasterData_object_(
                              v7,
                              (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !Master_object )
      goto LABEL_67;
    v32 = DataMasterBase_object__object__int___GetEntity(
            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
            v4->fields.missionId,
            (const MethodInfo_34E925C *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( v32 )
    {
      v33 = v32;
      Master_object = (char *)DataManager__GetMasterData_object_(
                                v7,
                                (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Master_object )
        goto LABEL_67;
      Master_object = (char *)DataMasterBase_object__object__int___GetEntity(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                HIDWORD(v33[1].monitor),
                                (const MethodInfo_34E925C *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Master_object )
        goto LABEL_67;
      if ( EventEntity__IsEventPeriod((EventEntity_o *)Master_object, 0, 0) )
      {
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4E014F9 )
        {
          sub_1CE6700(&TerminalPramsManager_TypeInfo);
          byte_4E014F9 = 1;
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
            sub_1CE66A4(
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
        sub_1CE6958(Master_object, v3);
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

  if ( (byte_4E014C7 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    sub_1CE6700(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    byte_4E014C7 = 1;
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
      sub_1CE6958(0, endAct);
    Values = System_Collections_Generic_Dictionary_int__object___get_Values(
               (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
               (const MethodInfo_355B2F4 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    v7 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    System_Collections_Generic_List_object____ctor_59791452(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)Values,
      (const MethodInfo_390585C *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    QuestAfterAction__LoadVoice_37276784(
      this,
      (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)v7,
      endAct,
      v8);
  }
}


void QuestAfterAction__LoadVoice_37276784(
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
  System_String_o *VoiceAssetName_43939436; // x19
  Il2CppObject *v31; // x20
  System_Action_o *v32; // x22

  while ( 1 )
  {
    if ( (byte_4E014C8 & 1) == 0 )
    {
      sub_1CE6700(&System_Action_TypeInfo);
      sub_1CE6700(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___);
      sub_1CE6700(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
      sub_1CE6700(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
      sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sub_1CE6700(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      sub_1CE6700(&Method_QuestAfterAction___c__DisplayClass95_0__LoadVoice_b__0__);
      sub_1CE6700(&QuestAfterAction___c__DisplayClass95_0_TypeInfo);
      byte_4E014C8 = 1;
    }
    v7 = sub_1CE694C(QuestAfterAction___c__DisplayClass95_0_TypeInfo);
    QuestAfterAction___c__DisplayClass95_0___ctor((QuestAfterAction___c__DisplayClass95_0_o *)v7, 0);
    if ( !v7 )
      goto LABEL_17;
    *(_QWORD *)(v7 + 16) = svtVInfos;
    v16 = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o **)(v7 + 16);
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)svtVInfos, v10, v11, v12, v13, v14, v15);
    *(_QWORD *)(v7 + 24) = this;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)this, v17, v18, v19, v20, v21, v22);
    *(_QWORD *)(v7 + 32) = endAct;
    v23 = (System_Action_o **)(v7 + 32);
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)endAct, v24, v25, v26, v27, v28, v29);
    if ( !System_Linq_Enumerable__Any_object_(
            *(System_Collections_Generic_IEnumerable_TSource__o **)(v7 + 16),
            (const MethodInfo_3210080 *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___) )
    {
      Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
        ActionExtensions__Call(*v23, 0);
        return;
      }
LABEL_17:
      sub_1CE6958(Instance, v9);
    }
    Instance = *v16;
    if ( !*v16 )
      goto LABEL_17;
    Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)System_Collections_Generic_List_object___get_Item(
                                                                                  (System_Collections_Generic_List_object__o *)Instance,
                                                                                  0,
                                                                                  (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
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
      (const MethodInfo_390773C *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    svtVInfos = *v16;
    endAct = *v23;
  }
  Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  Instance = *v16;
  if ( !*v16 )
    goto LABEL_17;
  Instance = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)System_Collections_Generic_List_object___get_Item(
                                                                                (System_Collections_Generic_List_object__o *)Instance,
                                                                                0,
                                                                                (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
  if ( !Instance )
    goto LABEL_17;
  VoiceAssetName_43939436 = ServantVoiceEntity__getVoiceAssetName_43939436((int32_t)Instance->fields._items, 0);
  v31 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v32 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(v32, (Il2CppObject *)v7, Method_QuestAfterAction___c__DisplayClass95_0__LoadVoice_b__0__, 0);
  if ( !v31 )
    goto LABEL_17;
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)v31, VoiceAssetName_43939436, v32, 1, 0);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *QuestAfterAction__MapObjName(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_4E014D7 & 1) == 0 )
  {
    sub_1CE6700(&SrcSpotBasePrefab_TypeInfo);
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E014D7 = 1;
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
  struct System_Collections_Generic_List_QuestAfterAction_Command__o **p_ReservedCommandListBeforeFadeIn_k__BackingField; // x19
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4E014D1 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_int__Clear__);
    byte_4E014D1 = 1;
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
    sub_1CE6958(screenCollider, v4);
  }
  v7 = invalidMapGimmickIdList->fields._version + 1;
  invalidMapGimmickIdList->fields._size = 0;
  invalidMapGimmickIdList->fields._version = v7;
  QuestAfterAction__Init(this, v4);
  this->fields._ReservedCommandListBeforeFadeIn_k__BackingField = 0;
  p_ReservedCommandListBeforeFadeIn_k__BackingField = &this->fields._ReservedCommandListBeforeFadeIn_k__BackingField;
  *((_BYTE *)p_ReservedCommandListBeforeFadeIn_k__BackingField + 8) = 0;
  *((_BYTE *)p_ReservedCommandListBeforeFadeIn_k__BackingField - 8) = 0;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)p_ReservedCommandListBeforeFadeIn_k__BackingField,
    0,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
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

  if ( (byte_4E014CC & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1CE6700(&Method_QuestAfterAction___c__DisplayClass99_0__Play_b__0__);
    sub_1CE6700(&QuestAfterAction___c__DisplayClass99_0_TypeInfo);
    byte_4E014CC = 1;
  }
  v5 = sub_1CE694C(QuestAfterAction___c__DisplayClass99_0_TypeInfo);
  QuestAfterAction___c__DisplayClass99_0___ctor((QuestAfterAction___c__DisplayClass99_0_o *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = endAct,
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)endAct, v8, v9, v10, v11, v12, v13),
        (Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0) )
  {
    sub_1CE6958(Instance, v7);
  }
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  v14 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)v5, Method_QuestAfterAction___c__DisplayClass99_0__Play_b__0__, 0);
  this->fields.endAct = v14;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.endAct, (int32_t)v14, v15, v16, v17, v18, v19, v20);
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

  if ( (byte_4E014CD & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&QuestAfterAction_TypeInfo);
    sub_1CE6700(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_1CE6700(&Method_QuestAfterAction___c__DisplayClass100_0__PlaySpecifiedAction_b__0__);
    sub_1CE6700(&Method_QuestAfterAction___c__DisplayClass100_0__PlaySpecifiedAction_b__1__);
    sub_1CE6700(&QuestAfterAction___c__DisplayClass100_0_TypeInfo);
    byte_4E014CD = 1;
  }
  v7 = sub_1CE694C(QuestAfterAction___c__DisplayClass100_0_TypeInfo);
  QuestAfterAction___c__DisplayClass100_0___ctor((QuestAfterAction___c__DisplayClass100_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_10;
  *(_QWORD *)(v7 + 16) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = finishCallback;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)finishCallback, v16, v17, v18, v19, v20, v21);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0);
    return;
  }
  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
  CommandBuf = QuestAfterAction__GenerateCommandBuf(actionVals, v22);
  this->fields.temporaryCommandBuf = CommandBuf;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields.temporaryCommandBuf,
    (int32_t)CommandBuf,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
LABEL_10:
    sub_1CE6958(Instance, v9);
  MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
  v30 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v7,
    Method_QuestAfterAction___c__DisplayClass100_0__PlaySpecifiedAction_b__0__,
    0);
  this->fields.endAct = v30;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.endAct, (int32_t)v30, v31, v32, v33, v34, v35, v36);
  v37 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v7,
    Method_QuestAfterAction___c__DisplayClass100_0__PlaySpecifiedAction_b__1__,
    0);
  v39 = QuestAfterAction__WaitWhileMainStateFinished(this, v37, v38);
  UnityEngine_MonoBehaviour__StartCoroutine_72903732((UnityEngine_MonoBehaviour_o *)this, v39, 0);
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

  if ( (byte_4E014D0 & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__103_0__);
    byte_4E014D0 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)commandArray, 0) )
  {
    this->fields.temporaryCommandBuf = commandArray;
    sub_1CE66A4(
      (GrandQuestFolderBoardItem_o *)&this->fields.temporaryCommandBuf,
      (int32_t)commandArray,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    v11 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__103_0__, 0);
    this->fields.endAct = v11;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.endAct, (int32_t)v11, v12, v13, v14, v15, v16, v17);
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

  if ( (byte_4E014D6 & 1) == 0 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    byte_4E014D6 = 1;
  }
  this->fields.ActionMapTargetType = cType;
  this->fields.ActionMapTargetId = cTarget;
  QuestAfterAction__SetState(this, 0, *(const MethodInfo **)&cTarget);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4DFF129 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4DFF129 = 1;
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
  if ( !byte_4DFE666 )
  {
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    byte_4DFE666 = 1;
  }
  v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v9->fields.subRootGimmickP->klass;
  if ( !klass || (v9 = *(ScrTerminalMap_o **)&klass->_2.static_fields_size) == 0 )
    sub_1CE6958(v9, v7);
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
  if ( (byte_4E014C5 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1CE6700(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    this = (QuestAfterAction_o *)sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E014C5 = 1;
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
                sub_1CE6960(this);
              TitleInfoCtrlCallback_k__BackingField = (System_String_o *)this->fields.invalidMapGimmickIdList;
              goto LABEL_29;
            }
          }
LABEL_42:
          sub_1CE6958(this, com);
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
          this = (QuestAfterAction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_QuestMaster___);
            param = com->fields.param;
            v14 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
            this = (QuestAfterAction_o *)System_Int32__Parse(param, 0);
            if ( v14 )
            {
              this = (QuestAfterAction_o *)DataMasterBase_object__object__int___GetEntity(
                                             v14,
                                             (int32_t)this,
                                             (const MethodInfo_34E925C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
      if ( (unsigned int)(id - 200) < 9 )
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

  if ( (byte_4E014D4 & 1) == 0 )
  {
    sub_1CE6700(&Method_CStateManager_QuestAfterAction__setState__);
    byte_4E014D4 = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( !fsm )
    sub_1CE6958(0, *(_QWORD *)&state);
  CStateManager_object___setState(
    fsm,
    state,
    (const MethodInfo_3473644 *)Method_CStateManager_QuestAfterAction__setState__);
}


void QuestAfterAction__SkipToNextAction(QuestAfterAction_o *this, const MethodInfo *method)
{
  this->fields.isSkippedNext = 1;
}


bool QuestAfterAction__TryEventUiDisableCommand(QuestAfterAction_Command_o *command, const MethodInfo *method)
{
  QuestAfterAction_Command_o *v2; // x19
  QuestAfterAction_Command_o *v3; // x20
  int32_t v4; // w19
  bool v5; // w21
  TerminalSceneComponent_c *v6; // x0
  struct TerminalSceneComponent_o *mInstance; // x9
  struct ScrTerminalListTop_o *mTerminalList; // x9
  UnityEngine_Object_o *mTitleInfo; // x20
  struct System_String_o *param; // x9
  QuestAfterAction_Command_o *v11; // x20
  char v12; // w8
  unsigned __int64 v13; // x22
  QuestAfterAction_Command_c *klass; // x9

  v2 = command;
  if ( (byte_4E014E1 & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    command = (QuestAfterAction_Command_o *)sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    byte_4E014E1 = 1;
  }
  if ( !v2 )
    goto LABEL_40;
  command = (QuestAfterAction_Command_o *)v2->fields.param;
  if ( !command )
    goto LABEL_40;
  command = (QuestAfterAction_Command_o *)System_String__Split((System_String_o *)command, 0x2Cu, 0, 0);
  if ( !command )
    goto LABEL_40;
  v3 = command;
  if ( !LODWORD(command->fields.param) )
LABEL_41:
    sub_1CE6960(command);
  v4 = System_Int32__Parse((System_String_o *)command[1].klass, 0);
  v5 = SLODWORD(v3->fields.param) >= 2 && System_Int32__Parse((System_String_o *)v3[1].monitor, 0) > 0;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4DFE666 )
  {
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    byte_4DFE666 = 1;
  }
  v6 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v6 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v6->static_fields->mInstance;
  if ( mInstance && (mTerminalList = mInstance->fields.mTerminalList) != 0 )
    mTitleInfo = (UnityEngine_Object_o *)mTerminalList->fields.mTitleInfo;
  else
    mTitleInfo = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  command = (QuestAfterAction_Command_o *)UnityEngine_Object__op_Equality(mTitleInfo, 0, 0);
  if ( ((unsigned __int8)command & 1) != 0 )
    goto LABEL_38;
  if ( !mTitleInfo
    || (command = (QuestAfterAction_Command_o *)TitleInfoControl__GetEnableEventUiObjectList(
                                                  (TitleInfoControl_o *)mTitleInfo,
                                                  0,
                                                  0)) == 0 )
  {
LABEL_40:
    sub_1CE6958(command, method);
  }
  param = command->fields.param;
  v11 = command;
  if ( (int)param >= 1 )
  {
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      if ( v13 >= (unsigned int)param )
        goto LABEL_41;
      command = (QuestAfterAction_Command_o *)*((_QWORD *)&v11[1].klass + v13);
      if ( v5 )
        break;
      if ( !command )
        goto LABEL_40;
      klass = command[2].klass;
      if ( !klass )
        goto LABEL_40;
      if ( v4 == LODWORD(klass->_1.name) )
        goto LABEL_34;
LABEL_36:
      LODWORD(param) = v11->fields.param;
      if ( (__int64)++v13 >= (int)param )
        return v12 & 1;
    }
    if ( !command )
      goto LABEL_40;
LABEL_34:
    command = (QuestAfterAction_Command_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)command, 0);
    if ( !command )
      goto LABEL_40;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)command, 0, 0);
    v12 = 1;
    goto LABEL_36;
  }
LABEL_38:
  v12 = 0;
  return v12 & 1;
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

  if ( (byte_4E014C0 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_1CE6700(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1CE6700(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E014C0 = 1;
  }
  entity = 0;
  *questAfterAction = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)questAfterAction, 0, questId, phase, (System_String_o *)method, v5, v6, v7);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4E014EF )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E014EF = 1;
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
                                                         (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    if ( !MasterData_object )
      goto LABEL_36;
    v14 = QuestPhaseDetailAddMaster__GetAfterAction(MasterData_object, questId, phase, 0);
    if ( !v14 )
    {
      MasterData_object = (QuestPhaseDetailAddMaster_o *)DataManager__GetMasterData_object_(
                                                           (DataManager_o *)Instance,
                                                           (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
      if ( !MasterData_object )
        goto LABEL_36;
      v14 = QuestPhaseDetailMaster__GetAfterAction((QuestPhaseDetailMaster_o *)MasterData_object, questId, phase, 0);
    }
    *questAfterAction = v14;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)questAfterAction, (int32_t)v14, v15, v16, v17, v18, v19, v20);
  }
  v21 = *questAfterAction;
  if ( !*questAfterAction )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4E014F2 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E014F2 = 1;
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
                                                           (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( MasterData_object )
      {
        MasterData_object = (QuestPhaseDetailAddMaster_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                                             &entity,
                                                             questId,
                                                             (const MethodInfo_34E92A8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)MasterData_object & 1) == 0 )
          goto LABEL_32;
        if ( entity )
        {
          klass = entity[6].klass;
          *questAfterAction = (System_String_array *)klass;
          sub_1CE66A4((GrandQuestFolderBoardItem_o *)questAfterAction, (int32_t)klass, v23, v24, v25, v26, v27, v28);
          goto LABEL_32;
        }
      }
    }
LABEL_36:
    sub_1CE6958(MasterData_object, v11);
  }
LABEL_33:
  max_length = v21->max_length;
  if ( (int)max_length >= 2 )
    return (max_length & 1) == 0;
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool QuestAfterAction__TryRaidUiDisableCommand(
        QuestAfterAction_Command_o *command,
        bool isQuick,
        const MethodInfo *method)
{
  QuestAfterAction_Command_o *v4; // x20
  QuestAfterAction_Command_o *v5; // x22
  int v6; // w21
  bool v7; // w20
  bool v8; // w24
  TerminalSceneComponent_c *v9; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct TitleInfoControl_o *mTitleInfo; // x22
  _BOOL8 v13; // x0
  __int64 v14; // x1
  struct TitleInfoEventItemControl_o *eventRaidUIControl; // x8
  int32_t v16; // w21
  char v17; // w25
  Il2CppObject *current; // x23
  __int64 naturalAligment; // x10
  Il2CppObject *v20; // x22
  _BOOL8 v21; // x0
  __int64 v22; // x1
  TerminalPramsManager_c *v23; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  System_Collections_Generic_List_int__o *nonFrameInBossHpUiIndex; // x0
  __int64 klass_low; // x1
  struct System_Int32_array *items; // x9
  _QWORD *v28; // x10
  __int64 size; // x11
  System_Collections_Generic_List_int__o *RaidBossHpForceHideGroupIndexList; // x0
  struct System_Int32_array *v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v35; // x1
  int32_t v37; // [xsp+4h] [xbp-BCh]
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+40h] [xbp-80h] BYREF

  v4 = command;
  if ( (byte_4E014E2 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_TitleInfoEventRaidStatusComponent__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    command = (QuestAfterAction_Command_o *)sub_1CE6700(&TitleInfoEventRaidBossComponent_TypeInfo);
    byte_4E014E2 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  memset(&v39, 0, sizeof(v39));
  if ( !v4 )
    goto LABEL_75;
  command = (QuestAfterAction_Command_o *)v4->fields.param;
  if ( !command )
    goto LABEL_75;
  command = (QuestAfterAction_Command_o *)System_String__Split((System_String_o *)command, 0x2Cu, 0, 0);
  if ( !command )
    goto LABEL_75;
  v5 = command;
  if ( !LODWORD(command->fields.param)
    || (command = (QuestAfterAction_Command_o *)System_Int32__Parse((System_String_o *)command[1].klass, 0),
        LODWORD(v5->fields.param) <= 1) )
  {
    sub_1CE6960(command);
  }
  v6 = (int)command;
  v37 = System_Int32__Parse((System_String_o *)v5[1].monitor, 0);
  if ( SLODWORD(v5->fields.param) < 3 )
  {
    v7 = 0;
LABEL_11:
    v8 = 0;
    goto LABEL_13;
  }
  v7 = System_Int32__Parse(*(System_String_o **)&v5[1].fields.id, 0) > 0;
  if ( SLODWORD(v5->fields.param) < 4 )
    goto LABEL_11;
  v8 = System_Int32__Parse(v5[1].fields.param, 0) > 0;
LABEL_13:
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4DFE666 )
  {
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    byte_4DFE666 = 1;
  }
  v9 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v9 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v9->static_fields->mInstance;
  if ( mInstance && (mTerminalList = mInstance->fields.mTerminalList) != 0 )
    mTitleInfo = mTerminalList->fields.mTitleInfo;
  else
    mTitleInfo = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  command = (QuestAfterAction_Command_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)mTitleInfo, 0, 0);
  if ( ((unsigned __int8)command & 1) != 0 )
    goto LABEL_71;
  if ( !mTitleInfo || (command = (QuestAfterAction_Command_o *)mTitleInfo->fields.mRaidStatusList) == 0 )
LABEL_75:
    sub_1CE6958(command, isQuick);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    (System_Collections_Generic_List_object__o *)command,
    (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_TitleInfoEventRaidStatusComponent__GetEnumerator__);
  v40 = v38;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v40,
            (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__MoveNext__);
    if ( !v13 )
      break;
    if ( v7 )
    {
      if ( !v40.fields._current )
        sub_1CE6958(v13, v14);
      goto LABEL_35;
    }
    if ( !v40.fields._current )
      sub_1CE6958(v13, v14);
    if ( v6 == LODWORD(v40.fields._current[9].monitor) )
LABEL_35:
      TitleInfoEventRaidStatusComponent__FrameOut(
        (TitleInfoEventRaidStatusComponent_o *)v40.fields._current,
        0,
        isQuick,
        0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v40,
    (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__Dispose__);
  eventRaidUIControl = mTitleInfo->fields.eventRaidUIControl;
  if ( !eventRaidUIControl )
  {
LABEL_71:
    v17 = 0;
    return v17 & 1;
  }
  command = (QuestAfterAction_Command_o *)eventRaidUIControl->fields.mEventInfoGroups;
  if ( !command )
    goto LABEL_75;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    (System_Collections_Generic_List_object__o *)command,
    (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
  v39 = v38;
  v16 = 0;
  v17 = 0;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v39,
            (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__) )
  {
    current = v39.fields._current;
    if ( v39.fields._current
      && (naturalAligment = TitleInfoEventRaidBossComponent_TypeInfo->_2.naturalAligment,
          v39.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
    {
      if ( (TitleInfoEventRaidBossComponent_c *)v39.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == TitleInfoEventRaidBossComponent_TypeInfo )
        v20 = v39.fields._current;
      else
        v20 = 0;
    }
    else
    {
      v20 = 0;
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v21 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0, 0);
    if ( v21 )
    {
      if ( v8 )
        goto LABEL_52;
      if ( !v20 )
        sub_1CE6958(v21, v22);
      if ( v37 == LODWORD(v20[23].klass) )
      {
LABEL_52:
        v23 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v23 = TerminalPramsManager_TypeInfo;
        }
        if ( !v20 )
          sub_1CE6958(v23, v22);
        static_fields = v23->static_fields;
        nonFrameInBossHpUiIndex = static_fields->nonFrameInBossHpUiIndex;
        if ( !nonFrameInBossHpUiIndex )
          sub_1CE6958(0, v22);
        klass_low = LODWORD(v20[23].klass);
        items = nonFrameInBossHpUiIndex->fields._items;
        v28 = Method_System_Collections_Generic_List_int__Add__;
        ++nonFrameInBossHpUiIndex->fields._version;
        if ( !items )
          sub_1CE6958(nonFrameInBossHpUiIndex, klass_low);
        size = nonFrameInBossHpUiIndex->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            nonFrameInBossHpUiIndex,
            klass_low,
            *(const MethodInfo_38E8F44 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
          static_fields = TerminalPramsManager_TypeInfo->static_fields;
        }
        else
        {
          nonFrameInBossHpUiIndex->fields._size = size + 1;
          items->m_Items[size] = klass_low;
        }
        RaidBossHpForceHideGroupIndexList = static_fields->RaidBossHpForceHideGroupIndexList;
        if ( !RaidBossHpForceHideGroupIndexList )
          sub_1CE6958(0, klass_low);
        v31 = RaidBossHpForceHideGroupIndexList->fields._items;
        v32 = Method_System_Collections_Generic_List_int__Add__;
        ++RaidBossHpForceHideGroupIndexList->fields._version;
        if ( !v31 )
          sub_1CE6958(RaidBossHpForceHideGroupIndexList, klass_low);
        v33 = RaidBossHpForceHideGroupIndexList->fields._size;
        if ( (unsigned int)v33 >= LODWORD(v31->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            RaidBossHpForceHideGroupIndexList,
            v16,
            *(const MethodInfo_38E8F44 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          RaidBossHpForceHideGroupIndexList->fields._size = v33 + 1;
          v31->m_Items[v33] = v16;
        }
        if ( v8 )
        {
          if ( !current )
            sub_1CE6958(RaidBossHpForceHideGroupIndexList, klass_low);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
          if ( !gameObject )
            sub_1CE6958(0, v35);
          UnityEngine_GameObject__SetActive(gameObject, 1, 0);
          TitleInfoEventRaidBossComponent__PlayFrameOutBoss((TitleInfoEventRaidBossComponent_o *)v20, isQuick, 0);
        }
        v17 = 1;
      }
    }
    ++v16;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v39,
    (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__);
  return v17 & 1;
}


void QuestAfterAction__Update(QuestAfterAction_o *this, const MethodInfo *method)
{
  CStateManager_T__o *fsm; // x0

  if ( (byte_4E014CB & 1) == 0 )
  {
    sub_1CE6700(&Method_CStateManager_QuestAfterAction__update__);
    byte_4E014CB = 1;
  }
  fsm = (CStateManager_T__o *)this->fields.fsm;
  if ( fsm )
    CStateManager_object___update(fsm, (const MethodInfo_3473620 *)Method_CStateManager_QuestAfterAction__update__);
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

  if ( (byte_4E014D2 & 1) == 0 )
  {
    sub_1CE6700(&QuestAfterAction__WaitWhileMainStateFinished_d__106_TypeInfo);
    byte_4E014D2 = 1;
  }
  v5 = sub_1CE694C(QuestAfterAction__WaitWhileMainStateFinished_d__106_TypeInfo);
  QuestAfterAction__WaitWhileMainStateFinished_d__106___ctor(
    (QuestAfterAction__WaitWhileMainStateFinished_d__106_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_1CE6958(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = action;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)action, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void QuestAfterAction___PlaySpecifiedActionInstantly_b__103_0(QuestAfterAction_o *this, const MethodInfo *method)
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
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.endAct, 0, v2, v3, v4, v5, v6, v7);
  this->fields.temporaryCommandBuf = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.temporaryCommandBuf, 0, v9, v10, v11, v12, v13, v14);
  QuestAfterAction__SetState(this, 0, v15);
}


System_Int32_array *QuestAfterAction__getMapGmkOffIdList(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *invalidMapGimmickIdList; // x0

  if ( (byte_4E014C4 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4E014C4 = 1;
  }
  invalidMapGimmickIdList = this->fields.invalidMapGimmickIdList;
  if ( !invalidMapGimmickIdList )
    sub_1CE6958(0, method);
  return System_Collections_Generic_List_int___ToArray(
           invalidMapGimmickIdList,
           (const MethodInfo_38EA9FC *)Method_System_Collections_Generic_List_int__ToArray__);
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


System_Collections_Generic_List_QuestAfterAction_Command__o *QuestAfterAction__get_ReservedCommandListBeforeFadeIn(
        QuestAfterAction_o *this,
        const MethodInfo *method)
{
  return this->fields._ReservedCommandListBeforeFadeIn_k__BackingField;
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
  System_String_o *VoiceAssetName_43939436; // x20
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4E014C9 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    sub_1CE6700(&SoundManager_TypeInfo);
    byte_4E014C9 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
    goto LABEL_14;
  Values = System_Collections_Generic_Dictionary_int__object___get_Values(
             (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
             (const MethodInfo_355B2F4 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
  v5 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor_59791452(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_390585C *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
  if ( !v5 )
    goto LABEL_14;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    v5,
    (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v9,
           (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__);
    if ( !v6 )
      break;
    if ( !v9.fields._current )
      sub_1CE6958(v6, v7);
    VoiceAssetName_43939436 = ServantVoiceEntity__getVoiceAssetName_43939436(
                                *(_DWORD *)((char *)&v9.fields._current->klass + (unsigned __int64)&word_10),
                                0);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(VoiceAssetName_43939436, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v9,
    (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
LABEL_14:
    sub_1CE6958(svtVoices, method);
  System_Collections_Generic_Dictionary_int__object___Clear(
    (System_Collections_Generic_Dictionary_int__object__o *)svtVoices,
    (const MethodInfo_355B66C *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
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


void QuestAfterAction__set_ReservedCommandListBeforeFadeIn(
        QuestAfterAction_o *this,
        System_Collections_Generic_List_QuestAfterAction_Command__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._ReservedCommandListBeforeFadeIn_k__BackingField = value;
  sub_1CE66A4(
    (GrandQuestFolderBoardItem_o *)&this->fields._ReservedCommandListBeforeFadeIn_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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

  if ( (byte_4E014E5 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_1CE6700(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_1CE6700(&Method_System_Collections_Generic_List_string___ctor___79866736);
    sub_1CE6700(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1CE6700(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1CE6700(&System_Collections_Generic_List_string__TypeInfo);
    sub_1CE6700(&System_Random_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    sub_1CE6700(&StringLiteral_16258/*"_"*/);
    byte_4E014E5 = 1;
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
    param = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( param )
    {
      MasterData_object = DataManager__GetMasterData_object_(
                            (DataManager_o *)param,
                            (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
      v8 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor_59791452(
        v8,
        v6,
        (const MethodInfo_390585C *)Method_System_Collections_Generic_List_string___ctor___79866736);
      result = 0;
      v9 = (System_Random_o *)sub_1CE694C(System_Random_TypeInfo);
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
                      (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_string__get_Item__);
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
              param = System_String__Concat_65161092(
                        *((System_String_o **)v13 + 5),
                        (System_String_o *)StringLiteral_16258/*"_"*/,
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
                       (const MethodInfo_3905C98 *)Method_System_Collections_Generic_List_string__get_Item__);
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4DFE666 )
              {
                sub_1CE6700(&TerminalSceneComponent_TypeInfo);
                byte_4DFE666 = 1;
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
              (const MethodInfo_390773C *)Method_System_Collections_Generic_List_string__RemoveAt__);
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
    sub_1CE6958(param, svtId);
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
    sub_1CE6960(v18);
  return System_String__Concat_65161092(
           *((System_String_o **)v20 + 5),
           (System_String_o *)StringLiteral_16258/*"_"*/,
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

  if ( (byte_4E014E7 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1CE6700(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4E014E7 = 1;
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
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_12;
      Instance = DataManager__GetMasterData_object_(
                   (DataManager_o *)Instance,
                   (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_BgmMaster___);
      if ( !Instance )
        goto LABEL_12;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                   &entity,
                                   result,
                                   (const MethodInfo_34E92A8 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( entity )
          return (System_String_o *)entity[1].monitor;
LABEL_12:
        sub_1CE6958(Instance, v6);
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
    sub_1CE6958(v3, str);
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
  if ( (byte_4E014E6 & 1) == 0 )
  {
    this = (QuestAfterAction_Command_o *)sub_1CE6700(&StringLiteral_16258/*"_"*/);
    byte_4E014E6 = 1;
  }
  if ( v4->fields.id == 800 )
  {
    if ( !v3 || (this = (QuestAfterAction_Command_o *)System_String__Split(v3, 0x5Fu, 0, 0)) == 0 )
      sub_1CE6958(this, str);
    param = (int)this->fields.param;
    if ( param == 2 )
      return v3;
    if ( param == 3 )
      return System_String__Concat_65161092(
               (System_String_o *)this[1].monitor,
               (System_String_o *)StringLiteral_16258/*"_"*/,
               *(System_String_o **)&this[1].fields.id,
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
    sub_1CE6958(this, method);
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
    sub_1CE6958(screenCollider, v5);
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
  if ( (byte_4E01560 & 1) == 0 )
  {
    sub_1CE6700(&QuestAfterAction_TypeInfo);
    byte_4E01560 = 1;
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
    sub_1CE6958(0, v7);
  if ( v5 >= *(_DWORD *)(v6 + 24) )
    ((void (__fastcall *)(QuestAfterAction_StateMain_o *, __int64, const MethodInfo *))this->klass->vtable._15_onEnd.methodPtr)(
      this,
      1,
      this->klass->vtable._15_onEnd.method);
}


void QuestAfterAction_StateMain__FadeRoad(
        QuestAfterAction_StateMain_o *this,
        QuestAfterAction_Command_o *command,
        int32_t fadeState,
        int32_t fadeEndDispType,
        const MethodInfo *method)
{
  __int64 v9; // x21
  void *param; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_String_o **v18; // x23
  int32_t v19; // w22
  _BOOL4 v20; // w24
  float v21; // s8
  Il2CppObject *MapComponent_object; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  UnityEngine_Object_o *v29; // x23
  srcLineSprite_o *v30; // x22
  System_Action_o *v31; // x0
  System_Action_o *v32; // x23

  if ( (byte_4E014ED & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
    sub_1CE6700(&Method_QuestAfterAction_StateMain___c__DisplayClass22_0__FadeRoad_b__0__);
    sub_1CE6700(&Method_QuestAfterAction_StateMain___c__DisplayClass22_0__FadeRoad_b__1__);
    sub_1CE6700(&QuestAfterAction_StateMain___c__DisplayClass22_0_TypeInfo);
    byte_4E014ED = 1;
  }
  v9 = sub_1CE694C(QuestAfterAction_StateMain___c__DisplayClass22_0_TypeInfo);
  QuestAfterAction_StateMain___c__DisplayClass22_0___ctor((QuestAfterAction_StateMain___c__DisplayClass22_0_o *)v9, 0);
  if ( !v9 )
    goto LABEL_24;
  *(_QWORD *)(v9 + 24) = this;
  *(_DWORD *)(v9 + 16) = fadeEndDispType;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v9 + 24), (int32_t)this, v12, v13, v14, v15, v16, v17);
  if ( !command )
    goto LABEL_24;
  param = command->fields.param;
  if ( !param )
    goto LABEL_24;
  param = System_String__Split((System_String_o *)param, 0x2Cu, 0, 0);
  if ( !param )
    goto LABEL_24;
  v18 = (System_String_o **)param;
  if ( !*((_DWORD *)param + 6) )
    sub_1CE6960(param);
  v19 = System_Int32__Parse(*((System_String_o **)param + 4), 0);
  if ( *((int *)v18 + 6) >= 2 )
  {
    v21 = System_Single__Parse(v18[5], 0) * 0.001;
    v20 = *((int *)v18 + 6) >= 3 && System_Int32__Parse(v18[6], 0) > 0;
  }
  else
  {
    v20 = 0;
    v21 = 0.5;
  }
  if ( this->fields.IsMapModel )
  {
    ((void (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
      this,
      this->klass->vtable._14_EndAnim.method);
    return;
  }
  param = this->fields.that;
  if ( !param )
    goto LABEL_24;
  MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                          (QuestAfterAction_o *)param,
                          1,
                          v19,
                          this,
                          (const MethodInfo_329DB4C *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
  *(_QWORD *)(v9 + 32) = MapComponent_object;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)MapComponent_object, v23, v24, v25, v26, v27, v28);
  v29 = *(UnityEngine_Object_o **)(v9 + 32);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(v29, 0, 0) )
  {
    v30 = *(srcLineSprite_o **)(v9 + 32);
    v31 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    v32 = v31;
    if ( v20 )
    {
      System_Action___ctor(
        v31,
        (Il2CppObject *)v9,
        Method_QuestAfterAction_StateMain___c__DisplayClass22_0__FadeRoad_b__0__,
        0);
      if ( v30 )
      {
        srcLineSprite__SetState(v30, fadeState, v32, v21, 0);
        ((void (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
          this,
          this->klass->vtable._14_EndAnim.method);
        ((void (__fastcall *)(QuestAfterAction_StateMain_o *, struct QuestAfterAction_o *, const MethodInfo *))this->klass->vtable._13_UpdateAnim.methodPtr)(
          this,
          this->fields.that,
          this->klass->vtable._13_UpdateAnim.method);
        return;
      }
LABEL_24:
      sub_1CE6958(param, v11);
    }
    System_Action___ctor(
      v31,
      (Il2CppObject *)v9,
      Method_QuestAfterAction_StateMain___c__DisplayClass22_0__FadeRoad_b__1__,
      0);
    if ( !v30 )
      goto LABEL_24;
    srcLineSprite__SetState(v30, fadeState, v32, v21, 0);
  }
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
    sub_1CE6958(0, v7);
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
  if ( (byte_4E014EC & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
    this = (QuestAfterAction_StateMain_o *)sub_1CE6700(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4E014EC = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)that->fields.invalidMapGimmickIdList;
  if ( !this )
    goto LABEL_22;
  this = (QuestAfterAction_StateMain_o *)System_Collections_Generic_List_int___ToArray(
                                           (System_Collections_Generic_List_int__o *)this,
                                           (const MethodInfo_38EA9FC *)Method_System_Collections_Generic_List_int__ToArray__);
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
        sub_1CE6960(this);
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
        (const MethodInfo_38EA440 *)Method_System_Collections_Generic_List_int__Remove__);
      this = (QuestAfterAction_StateMain_o *)v2->fields.that;
      if ( !this )
        break;
      MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                              (QuestAfterAction_o *)this,
                              2,
                              v8,
                              v2,
                              (const MethodInfo_329DB4C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (QuestAfterAction_StateMain_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)MapComponent_object,
                                               0,
                                               0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (QuestAfterAction_StateMain_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapComponent_object || !this )
          break;
        this = (QuestAfterAction_StateMain_o *)QuestTree__CheckMapGimmickCond_37625304(
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
          MapGimmickComponent__SetDispAnim_37229312((MapGimmickComponent_o *)MapComponent_object, 1, AnimTime, 1, v12);
        }
      }
      LODWORD(v4) = *(_DWORD *)&v5->fields.IsAnimDoing;
      if ( (__int64)++v6 >= (int)v4 )
        return;
    }
LABEL_22:
    sub_1CE6958(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  const MethodInfo *v30; // x2
  const MethodInfo *v31; // x4
  long double inited; // q0
  int id; // w8
  QuestAfterAction_Command_o *v34; // x0
  bool v35; // w1
  __int64 v36; // x24
  int32_t v37; // w21
  int32_t v38; // w23
  int32_t v39; // w22
  __int64 v40; // x8
  __int64 v41; // x23
  float v42; // s0
  __int64 v43; // x19
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  __int64 v50; // x22
  int32_t v51; // w20
  int32_t v52; // w21
  BgmManager_c *v53; // x0
  float v54; // s0
  float masterVolume; // s1
  float v56; // s0
  __int64 v57; // x8
  ScrTerminalListTop_o *v58; // x22
  float v59; // s8
  float v60; // s9
  __int64 v61; // x8
  ScrTerminalListTop_o *v62; // x22
  System_Action_o *v63; // x23
  __int64 v64; // x20
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  __int64 v71; // x23
  __int64 v72; // x8
  __int64 v73; // x22
  int32_t v74; // w21
  bool v75; // w24
  bool v76; // w25
  System_String_o *v77; // x19
  System_String_o *v78; // x20
  System_String_o *v79; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v81; // x23
  __int64 v82; // x20
  int32_t v83; // w2
  int32_t v84; // w3
  System_String_o *v85; // x4
  int32_t v86; // w5
  int64_t v87; // x6
  System_String_o *v88; // x7
  __int64 v89; // x8
  QuestAfterAction_o *v90; // x22
  Il2CppObject *v91; // x0
  int32_t v92; // w2
  int32_t v93; // w3
  System_String_o *v94; // x4
  int32_t v95; // w5
  int64_t v96; // x6
  System_String_o *v97; // x7
  UnityEngine_Object_o *v98; // x19
  SrcSpotBasePrefab_o *v99; // x19
  System_Action_o *v100; // x21
  int32_t v101; // w1
  int32_t v102; // w2
  int32_t v103; // w3
  System_String_o *v104; // x4
  int32_t v105; // w5
  int64_t v106; // x6
  System_String_o *v107; // x7
  __int64 v108; // x19
  float DEFAULT_FADE_TIME; // s8
  AvalonSceneManager_c *v110; // x0
  __int64 v111; // x21
  int32_t v112; // w8
  __int64 v113; // x21
  int32_t v114; // w20
  int32_t v115; // w22
  __int64 v116; // x20
  int32_t v117; // w2
  int32_t v118; // w3
  System_String_o *v119; // x4
  int32_t v120; // w5
  int64_t v121; // x6
  System_String_o *v122; // x7
  __int64 v123; // x8
  QuestAfterAction_o *v124; // x22
  Il2CppObject *v125; // x0
  int32_t v126; // w2
  int32_t v127; // w3
  System_String_o *v128; // x4
  int32_t v129; // w5
  int64_t v130; // x6
  System_String_o *v131; // x7
  UnityEngine_Object_o *v132; // x19
  ModelLineComponent_o *v133; // x19
  System_Action_o *v134; // x21
  const MethodInfo *v135; // x3
  int32_t v136; // w1
  __int64 v137; // x8
  __int64 v138; // x22
  _BOOL4 v139; // w23
  float v140; // s0
  TerminalSceneComponent_c *v141; // x0
  TerminalSceneComponent_o *mInstance; // x22
  QuestAfterAction_o *v143; // x22
  GrandQuestFolderBoardItem_o *p_ReservedCommandListBeforeFadeIn_k__BackingField; // x22
  System_Collections_Generic_List_object__o *v145; // x23
  System_Collections_Generic_List_object__o *ReservedCommandListBeforeFadeIn_k__BackingField; // t1
  int32_t v147; // w2
  int32_t v148; // w3
  System_String_o *v149; // x4
  int32_t v150; // w5
  int64_t v151; // x6
  System_String_o *v152; // x7
  __int64 v153; // x8
  _QWORD *v154; // x9
  __int64 v155; // x10
  __int64 v156; // x8
  __int64 v157; // x8
  PlayMakerFSM_o *v158; // x20
  System_String_o *ActiveStateName; // x0
  __int64 v160; // x8
  __int64 v161; // x8
  QuestBoardListViewManager_o *v162; // x21
  System_Action_o *v163; // x22
  Il2CppObject *v164; // x23
  struct QuestAfterAction_StateMain___c_StaticFields *v165; // x0
  int32_t v166; // w2
  int32_t v167; // w3
  System_String_o *v168; // x4
  int32_t v169; // w5
  int64_t v170; // x6
  System_String_o *v171; // x7
  TerminalSceneComponent_c *v172; // x0
  __int64 v173; // x8
  float v174; // s0
  __int64 v175; // x23
  float v176; // s0
  float v177; // s8
  int32_t v178; // w22
  __int64 v179; // x8
  ScrTerminalMap_o *v180; // x24
  float v181; // s0
  float v182; // s9
  float v183; // s0
  const MethodInfo_3A32A38 *v184; // x2
  int v185; // w8
  float v186; // s10
  float v187; // s9
  float v188; // s11
  MapCamera_o *v189; // x20
  __int64 v190; // x8
  float v191; // s0
  __int64 v192; // x21
  int32_t v193; // w0
  int32_t v194; // w20
  float v195; // s8
  int32_t v196; // w19
  __int64 v197; // x20
  int32_t v198; // w2
  int32_t v199; // w3
  System_String_o *v200; // x4
  int32_t v201; // w5
  int64_t v202; // x6
  System_String_o *v203; // x7
  __int64 v204; // x23
  int32_t v205; // w21
  Il2CppObject *v206; // x0
  __int64 *v207; // x24
  int32_t v208; // w2
  int32_t v209; // w3
  System_String_o *v210; // x4
  int32_t v211; // w5
  int64_t v212; // x6
  System_String_o *v213; // x7
  MapControl_QuestInfo_o *QuestInfo; // x0
  __int64 v215; // x22
  int32_t v216; // w2
  int32_t v217; // w3
  System_String_o *v218; // x4
  int32_t v219; // w5
  int64_t v220; // x6
  System_String_o *v221; // x7
  const MethodInfo *v222; // x2
  int v223; // w21
  __int64 v224; // x8
  NetworkManager_ResultCallbackFunc_o *v225; // x21
  Il2CppObject *Request_object; // x20
  int32_t v227; // w21
  System_String_o *param; // x21
  _QWORD *v229; // x0
  System_Reflection_MethodBase_o *v230; // x0
  __int64 v231; // x21
  int v232; // w22
  int32_t v233; // w21
  __int64 v234; // x8
  bool v235; // w2
  bool v236; // w3
  int32_t v237; // w1
  __int64 v238; // x22
  int v239; // w23
  float v240; // s8
  int32_t v241; // w21
  QuestAfterAction_o *v242; // x8
  __int64 v243; // x8
  __int64 v244; // x8
  __int64 v245; // x8
  System_String_o *v246; // x20
  System_String_o *v247; // x21
  SeManager_c *v248; // x0
  float DEFAULT_VOLUME; // s8
  System_String_o *v250; // x19
  System_String_o *v251; // x20
  System_String_o *v252; // x20
  Il2CppObject *v253; // x21
  System_Action_o *v254; // x23
  System_String_o *v255; // x19
  System_String_o *v256; // x20
  System_String_o *v257; // x20
  Il2CppObject *v258; // x21
  System_Action_o *v259; // x23
  __int64 v260; // x23
  int32_t v261; // w2
  int32_t v262; // w3
  System_String_o *v263; // x4
  int32_t v264; // w5
  int64_t v265; // x6
  System_String_o *v266; // x7
  System_String_array *v267; // x20
  int32_t v268; // w1
  int v269; // w8
  __int64 v270; // x23
  int32_t v271; // w2
  int32_t v272; // w3
  System_String_o *v273; // x4
  int32_t v274; // w5
  int64_t v275; // x6
  System_String_o *v276; // x7
  System_String_array *v277; // x20
  int32_t v278; // w1
  int v279; // w8
  System_String_o *v280; // x19
  System_String_o *v281; // x20
  int32_t v282; // s0
  int v283; // s1
  int v284; // s2
  System_Action_o *v285; // x19
  TerminalSceneComponent_o *v286; // x0
  float v287; // s0
  System_Action_o *v288; // x1
  __int64 v289; // x22
  int32_t v290; // w21
  bool v291; // w23
  __int64 v292; // x8
  int v293; // w9
  __int64 v294; // x8
  __int64 v295; // x8
  __int64 v296; // x8
  __int64 v297; // x22
  int v298; // w23
  bool v299; // w21
  int v300; // w23
  __int64 v301; // x21
  float v302; // s0
  float v303; // s8
  float v304; // s0
  MapCamera_o *v305; // x19
  float v306; // s0
  float v307; // s9
  int32_t v308; // w20
  __int64 v309; // x23
  float v310; // s0
  float v311; // s9
  float v312; // s0
  float v313; // s10
  float v314; // s0
  float v315; // s11
  float v316; // s0
  float v317; // s8
  int32_t v318; // w19
  __int64 v319; // x8
  float v320; // s8
  const MethodInfo_3A32A38 *v321; // x2
  float v322; // s10
  float v323; // s9
  float v324; // s11
  MapCamera_o *v325; // x20
  System_Action_o *v326; // x21
  MapCamera_o *v327; // x0
  float v328; // s0 OVERLAPPED
  float v329; // s1
  float v330; // s2
  float v331; // s3
  int32_t v332; // w1
  __int64 v333; // x8
  __int64 v334; // x21
  int32_t v335; // w20
  __int64 v336; // x8
  __int64 v337; // x21
  int32_t v338; // w0
  int32_t v339; // w20
  System_String_o *v340; // x21
  TerminalPramsManager_c *v341; // x0
  TerminalPramsManager_c *v342; // x0
  BalanceConfig_c *v343; // x0
  Il2CppObject *MapComponent_object; // x22
  Il2CppObject *v345; // x20
  __int64 v346; // x8
  ScrTerminalMap_o *v347; // x23
  __int64 v348; // x8
  ScrTerminalMap_o *v349; // x20
  UnityEngine_GameObject_o *v350; // x22
  System_Action_o *v351; // x23
  __int64 v352; // x21
  QuestAfterAction_o *v353; // x22
  Il2CppObject *v354; // x22
  QuestAfterAction_o *v355; // x23
  const MethodInfo *v356; // x4
  UnityEngine_Object_o *MapGameObject; // x23
  float v358; // s9
  float v359; // s8
  float v360; // s10
  __int64 v361; // x21
  float v362; // s0
  QuestAfterAction_o *v363; // x20
  float v364; // s8
  Il2CppObject *v365; // x20
  _BOOL4 v366; // w23
  QuestAfterAction_o *v367; // x22
  QuestAfterAction_o *v368; // x23
  const MethodInfo *v369; // x4
  int32_t v370; // w2
  int32_t v371; // w1
  QuestAfterAction_o *v372; // x0
  __int64 v373; // x8
  __int64 v374; // x22
  int32_t v375; // w21
  bool v376; // w22
  int32_t v377; // w21
  TerminalPramsManager_c *v378; // x0
  QuestAfterAction_o *v379; // x20
  Il2CppObject *v380; // x20
  TerminalPramsManager_c *v381; // x0
  __int64 v382; // x8
  __int64 v383; // x22
  int32_t v384; // w21
  bool v385; // w22
  __int64 v386; // x8
  __int64 v387; // x22
  int32_t v388; // w21
  bool v389; // w22
  __int64 v390; // x21
  QuestAfterAction_o *v391; // x20
  Il2CppObject *v392; // x20
  UIWidget_o *v393; // x20
  __int64 v394; // x23
  int32_t v395; // w2
  int32_t v396; // w3
  System_String_o *v397; // x4
  int32_t v398; // w5
  int64_t v399; // x6
  System_String_o *v400; // x7
  __int64 v401; // x20
  __int64 v402; // x8
  __int64 v403; // x21
  int32_t v404; // w22
  bool v405; // w25
  bool v406; // w27
  __int64 v407; // x20
  int32_t v408; // w2
  int32_t v409; // w3
  System_String_o *v410; // x4
  int32_t v411; // w5
  int64_t v412; // x6
  System_String_o *v413; // x7
  __int64 v414; // x8
  QuestAfterAction_o *v415; // x22
  Il2CppObject *v416; // x0
  int32_t v417; // w2
  int32_t v418; // w3
  System_String_o *v419; // x4
  int32_t v420; // w5
  int64_t v421; // x6
  System_String_o *v422; // x7
  UnityEngine_Object_o *v423; // x19
  MapGimmickComponent_o *v424; // x19
  System_Action_o *v425; // x21
  const MethodInfo *v426; // x3
  TerminalSceneComponent_o *v427; // x19
  __int64 v428; // x20
  int32_t v429; // w2
  int32_t v430; // w3
  System_String_o *v431; // x4
  int32_t v432; // w5
  int64_t v433; // x6
  System_String_o *v434; // x7
  System_String_array *v435; // x0
  __int64 *v436; // x21
  int32_t v437; // w2
  int32_t v438; // w3
  System_String_o *v439; // x4
  int32_t v440; // w5
  int64_t v441; // x6
  System_String_o *v442; // x7
  __int64 v443; // x8
  __int64 v444; // x9
  QuestAfterAction_o *v445; // x21
  Il2CppObject *v446; // x0
  int32_t v447; // w2
  int32_t v448; // w3
  System_String_o *v449; // x4
  int32_t v450; // w5
  int64_t v451; // x6
  System_String_o *v452; // x7
  UnityEngine_Object_o *v453; // x19
  MapGimmickComponent_o *v454; // x19
  System_Action_o *v455; // x0
  intptr_t *v456; // x8
  System_Action_o *v457; // x21
  QuestAfterAction_o *v458; // x22
  QuestAfterAction_o *v459; // x23
  UnityEngine_Object_o *v460; // x23
  __int64 v461; // x8
  float v462; // s0
  float v463; // s11
  int32_t v464; // w23
  const MethodInfo *v465; // x3
  int32_t v466; // w2
  int32_t v467; // w3
  System_String_o *v468; // x4
  int32_t v469; // w5
  int64_t v470; // x6
  System_String_o *v471; // x7
  __int64 v472; // x8
  QuestAfterAction_o *v473; // x22
  Il2CppObject *v474; // x0
  __int64 v475; // x19
  int32_t v476; // w2
  int32_t v477; // w3
  System_String_o *v478; // x4
  int32_t v479; // w5
  int64_t v480; // x6
  System_String_o *v481; // x7
  UnityEngine_Object_o *v482; // x21
  bool v483; // w0
  bool v484; // w22
  const MethodInfo *v485; // x3
  int32_t v486; // w1
  float v487; // s0
  QuestAfterAction_o *v488; // x24
  const MethodInfo *v489; // x4
  UnityEngine_Object_o *v490; // x24
  const MethodInfo_3A32A38 *v491; // x2
  float v492; // s10
  float v493; // s8
  float v494; // s9
  __int64 v495; // x8
  int v496; // w8
  MapCamera_o *v497; // x20
  float v498; // s0
  float v499; // s0
  QuestAfterAction_o *v500; // x24
  const MethodInfo *v501; // x4
  UnityEngine_Object_o *v502; // x24
  __int64 v503; // x8
  System_String_o *v504; // x24
  QuestAfterAction_o *v505; // x24
  const MethodInfo *v506; // x4
  UnityEngine_Object_o *v507; // x24
  float v508; // s8
  float v509; // s9
  float v510; // s10
  __int64 v511; // x8
  __int64 v512; // x21
  QuestAfterAction_o *v513; // x22
  Il2CppObject *v514; // x22
  QuestAfterAction_o *v515; // x22
  UnityEngine_Object_o *v516; // x21
  intptr_t v517; // x8
  __int64 v518; // x22
  QuestAfterAction_o *v519; // x21
  Il2CppObject *v520; // x21
  System_Action_o *v521; // x22
  int32_t v522; // w2
  int32_t v523; // w3
  System_String_o *v524; // x4
  int32_t v525; // w5
  int64_t v526; // x6
  System_String_o *v527; // x7
  GrandQuestFolderBoardItem_o *v528; // x0
  __int64 v529; // x1
  __int64 v530; // x20
  int32_t v531; // w2
  int32_t v532; // w3
  System_String_o *v533; // x4
  int32_t v534; // w5
  int64_t v535; // x6
  System_String_o *v536; // x7
  __int64 v537; // x8
  QuestAfterAction_o *v538; // x22
  Il2CppObject *v539; // x0
  int32_t v540; // w2
  int32_t v541; // w3
  System_String_o *v542; // x4
  int32_t v543; // w5
  int64_t v544; // x6
  System_String_o *v545; // x7
  UnityEngine_Object_o *v546; // x19
  __int64 v547; // x23
  int32_t v548; // w2
  int32_t v549; // w3
  System_String_o *v550; // x4
  int32_t v551; // w5
  int64_t v552; // x6
  System_String_o *v553; // x7
  __int64 v554; // x20
  QuestAfterAction_o *v555; // x22
  Il2CppObject *v556; // x0
  __int64 *v557; // x19
  int32_t v558; // w2
  int32_t v559; // w3
  System_String_o *v560; // x4
  int32_t v561; // w5
  int64_t v562; // x6
  System_String_o *v563; // x7
  UnityEngine_Object_o *v564; // x21
  SrcSpotBasePrefab_o *v565; // x21
  System_Action_o *v566; // x22
  QuestAfterAction_o *v567; // x22
  intptr_t v568; // x8
  int32_t v569; // w1
  SrcSpotBasePrefab_o *v570; // x0
  QuestAfterAction_o *v571; // x22
  UnityEngine_Object_o *v572; // x21
  intptr_t v573; // x8
  _BOOL4 v574; // w23
  QuestAfterAction_o *v575; // x22
  UnityEngine_Object_o *v576; // x21
  const MethodInfo *v577; // x2
  const MethodInfo *v578; // x2
  intptr_t v579; // x8
  __int64 v580; // x20
  int32_t v581; // w2
  int32_t v582; // w3
  System_String_o *v583; // x4
  int32_t v584; // w5
  int64_t v585; // x6
  System_String_o *v586; // x7
  __int64 v587; // x8
  QuestAfterAction_o *v588; // x22
  Il2CppObject *v589; // x0
  int32_t v590; // w2
  int32_t v591; // w3
  System_String_o *v592; // x4
  int32_t v593; // w5
  int64_t v594; // x6
  System_String_o *v595; // x7
  UnityEngine_Object_o *v596; // x19
  _BOOL4 IsMapModel; // w23
  QuestAfterAction_o *v598; // x22
  UnityEngine_Object_o *v599; // x21
  const MethodInfo *v600; // x2
  intptr_t m_CachedPtr; // x8
  int32_t v602; // w2
  int32_t v603; // w3
  __int64 v604; // x20
  int32_t v605; // w2
  int32_t v606; // w3
  System_String_o *v607; // x4
  int32_t v608; // w5
  int64_t v609; // x6
  System_String_o *v610; // x7
  __int64 v611; // x8
  QuestAfterAction_o *v612; // x22
  Il2CppObject *v613; // x0
  int32_t v614; // w2
  int32_t v615; // w3
  System_String_o *v616; // x4
  int32_t v617; // w5
  int64_t v618; // x6
  System_String_o *v619; // x7
  UnityEngine_Object_o *v620; // x19
  _BOOL4 v621; // w23
  QuestAfterAction_o *v622; // x22
  UnityEngine_Object_o *v623; // x21
  const MethodInfo *v624; // x2
  const MethodInfo *v625; // x2
  QuestAfterAction_StateMain_o *v626; // x0
  QuestAfterAction_Command_o *v627; // x1
  int32_t v628; // w1
  Il2CppObject *v629; // x3
  __int64 v630; // x8
  __int64 v631; // x8
  __int64 v632; // x8
  __int64 v633; // x22
  unsigned __int64 v634; // x24
  __int64 v635; // x8
  __int64 v636; // x21
  const MethodInfo *v637; // x3
  QuestAfterAction_o *v638; // x8
  QuestAfterAction_TitleInfoControlCallback_o *TitleInfoCtrlCallback_k__BackingField; // x22
  System_Action_o *v640; // x20
  const MethodInfo *v641; // x3
  bool v642; // w0
  TerminalPramsManager_c *v643; // x0
  TerminalPramsManager_c *v644; // x0
  __int64 v645; // x8
  const MethodInfo *v646; // x2
  TerminalPramsManager_c *v647; // x0
  SceneJumpInfo_o *v648; // x21
  __int64 v649; // x8
  __int64 v650; // x8
  TerminalPramsManager_c *v651; // x0
  TerminalPramsManager_c *v652; // x0
  Il2CppObject *v653; // x21
  System_Action_o *v654; // x23
  __int64 v655; // x8
  __int64 v656; // x8
  UnityEngine_Object_o *v657; // x22
  int v658; // w25
  int v659; // w26
  _BOOL8 v660; // x0
  __int64 v661; // x1
  TerminalPramsManager_c *v662; // x0
  __int64 v663; // x8
  System_Collections_IEnumerable_o **monitor; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v665; // x23
  QuestAfterAction_StateMain___c_c *v666; // x8
  System_Func_object__bool__o *_9__16_35; // x24
  Il2CppObject *v668; // x25
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0
  int32_t v670; // w2
  int32_t v671; // w3
  System_String_o *v672; // x4
  int32_t v673; // w5
  int64_t v674; // x6
  System_String_o *v675; // x7
  char v676; // w23
  __int64 v677; // x8
  _QWORD *v678; // x8
  int32_t v679; // w24
  Il2CppObject *current; // x26
  __int64 naturalAligment; // x10
  Il2CppObject *v682; // x25
  _BOOL8 v683; // x0
  __int64 v684; // x1
  TerminalPramsManager_c *v685; // x0
  System_Collections_Generic_List_int__o *RaidBossHpForceHideGroupIndexList; // x0
  _BOOL8 v687; // x0
  __int64 v688; // x1
  TitleInfoEventItemControl_o *v689; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v691; // x1
  __int64 v692; // x0
  __int64 v693; // x1
  Il2CppObject *v694; // x21
  float AnimTime; // s0
  const MethodInfo *v696; // x3
  Il2CppClass *v697; // x8
  QuestAfterAction_StateMain_c *v698; // x8
  int v699; // w0
  Il2CppObject *v700; // x21
  const MethodInfo *v701; // x3
  Il2CppObject *v702; // x21
  const MethodInfo *v703; // x3
  Il2CppClass *v704; // x8
  Il2CppObject *v705; // x0
  int32_t v706; // w2
  int32_t v707; // w3
  System_String_o *v708; // x4
  int32_t v709; // w5
  int64_t v710; // x6
  System_String_o *v711; // x7
  UnityEngine_Object_o *v712; // x22
  MapGimmickComponent_o *v713; // x21
  System_Action_o *v714; // x0
  System_Action_o *v715; // x22
  MapGimmickComponent_o *v716; // x0
  System_Action_o *v717; // x2
  Il2CppObject *v718; // x0
  MapGimmickComponent_o **v719; // x22
  int32_t v720; // w2
  int32_t v721; // w3
  System_String_o *v722; // x4
  int32_t v723; // w5
  int64_t v724; // x6
  System_String_o *v725; // x7
  UnityEngine_Object_o *v726; // x24
  MapGimmickComponent_o *v727; // x24
  const MethodInfo *v728; // x3
  System_Action_o *v729; // x0
  System_Action_o *v730; // x21
  float v731; // s10
  float v732; // s9
  float v733; // s8
  System_String_o *v734; // x24
  __int64 v735; // x20
  int32_t v736; // w2
  int32_t v737; // w3
  System_String_o *v738; // x4
  int32_t v739; // w5
  int64_t v740; // x6
  System_String_o *v741; // x7
  __int64 v742; // x8
  QuestAfterAction_o *v743; // x22
  Il2CppObject *v744; // x0
  int32_t v745; // w2
  int32_t v746; // w3
  System_String_o *v747; // x4
  int32_t v748; // w5
  int64_t v749; // x6
  System_String_o *v750; // x7
  UnityEngine_Object_o *v751; // x19
  srcLineSprite_o *v752; // x19
  System_Action_o *v753; // x21
  float v754; // s0
  int32_t v755; // w1
  __int64 v756; // x20
  int32_t v757; // w2
  int32_t v758; // w3
  System_String_o *v759; // x4
  int32_t v760; // w5
  int64_t v761; // x6
  System_String_o *v762; // x7
  __int64 v763; // x8
  QuestAfterAction_o *v764; // x22
  Il2CppObject *v765; // x0
  int32_t v766; // w2
  int32_t v767; // w3
  System_String_o *v768; // x4
  int32_t v769; // w5
  int64_t v770; // x6
  System_String_o *v771; // x7
  UnityEngine_Object_o *v772; // x19
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
  UnityEngine_Object_o *v790; // x21
  int v791; // w9
  UnityEngine_Object_o *v792; // x21
  UnityEngine_Object_o *v793; // x21
  __int64 v794; // x8
  ScrTerminalMap_o *v795; // x21
  System_Action_o *v796; // x23
  MapCamera_o *v797; // x20
  int32_t v798; // w0
  int32_t v799; // w23
  SceneJumpInfo_o *v800; // x22
  System_Action_o *v801; // x20
  const MethodInfo *v802; // x3
  MapGimmickComponent_o *v803; // x0
  float v804; // s0 OVERLAPPED
  float v805; // s1
  float v806; // s2
  float v807; // s3
  int32_t v808; // w1
  System_Action_o *v809; // x2
  System_String_o *v810; // x20
  const MethodInfo *v811; // x3
  __int64 v812; // x8
  const MethodInfo *v813; // x3
  float v814; // s0 OVERLAPPED
  float v815; // s1
  System_Nullable_Vector3__o v816; // x0
  float v817; // s2
  float v818; // s0 OVERLAPPED
  float v819; // s1
  System_Nullable_Vector3__o v820; // x0
  float v821; // s2
  MapCamera_o *mMapCamera; // x20
  QuestAfterAction_o *v823; // x8
  MapCamera_o *v824; // x0
  float v825; // s0 OVERLAPPED
  float v826; // s1
  float v827; // s2
  int v828; // w8
  MapCamera_o *v829; // x20
  QuestAfterAction_o *v830; // x8
  float v831; // s3
  QuestAfterAction_o *v832; // x8
  __int64 v833; // x8
  ScrTerminalMap_o *v834; // x22
  float v835; // s0
  float v836; // s9
  float v837; // s0
  float x; // s10
  float y; // s9
  float z; // s11
  float v841; // s8
  const MethodInfo *v842; // x3
  int32_t v843; // w21
  System_Action_o *v844; // x22
  float v845; // s0
  System_Nullable_float__o p_size; // x0
  System_Nullable_Vector3__o v847; // x1 OVERLAPPED
  System_Nullable_float__o v848; // x3
  float v849; // s0
  MapCamera_o *v850; // x0
  float v851; // s0
  System_Nullable_float__o v852; // x0
  System_Action_o *v853; // x21
  System_Nullable_Vector3__o v854; // x1 OVERLAPPED
  System_Nullable_float__o v855; // x3
  float v856; // s0
  MapCamera_o *v857; // x0
  int32_t v858; // w4
  MapCamera_o *v859; // x20
  float v860; // s0
  System_Nullable_float__o v861; // x0
  float v862; // s0
  System_Nullable_float__o v863; // x0
  float v864; // s0
  System_Nullable_float__o v865; // x0
  int32_t onClickOkSeKind; // [xsp+10h] [xbp-160h]
  int32_t v867; // [xsp+48h] [xbp-128h]
  float sec; // [xsp+4Ch] [xbp-124h]
  bool seca; // [xsp+4Ch] [xbp-124h]
  System_Collections_Generic_List_Enumerator_object__o v870; // [xsp+50h] [xbp-120h] BYREF
  System_Nullable_float__o size; // [xsp+68h] [xbp-108h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v872; // [xsp+70h] [xbp-100h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v873; // [xsp+90h] [xbp-E0h] BYREF
  Il2CppObject *value; // [xsp+A8h] [xbp-C8h] BYREF
  int32_t v875; // [xsp+B4h] [xbp-BCh] BYREF
  int32_t v876[2]; // [xsp+B8h] [xbp-B8h] BYREF
  __int64 v877; // [xsp+C0h] [xbp-B0h] BYREF
  int32_t result[2]; // [xsp+C8h] [xbp-A8h] BYREF
  Il2CppObject *entity; // [xsp+D0h] [xbp-A0h] BYREF
  UnityEngine_Color_o color; // [xsp+D8h] [xbp-98h] BYREF
  bool isQuickUpdate[4]; // [xsp+ECh] [xbp-84h] BYREF
  System_Nullable_Vector3__o v882; // 0:x0.16
  System_Nullable_Vector3__o v883; // 0:x0.16
  System_Nullable_Vector3__o v884; // 0:x0.16
  UnityEngine_Vector3_o v885; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v886; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v887; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v889; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v890; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v891; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v892; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v893; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v894; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v895; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v896; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v897; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v898; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v900; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v901; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v902; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v903; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v904; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v905; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4E014EA & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&AvalonSceneManager_TypeInfo);
    sub_1CE6700(&BalanceConfig_TypeInfo);
    sub_1CE6700(&BgmManager_TypeInfo);
    sub_1CE6700(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1CE6700(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1CE6700(&DataManager_TypeInfo);
    sub_1CE6700(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_1CE6700(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__);
    sub_1CE6700(&Method_System_Linq_Enumerable_Any_TitleInfoEventRaidBossComponent___);
    sub_1CE6700(&Method_System_Linq_Enumerable_OfType_TitleInfoEventRaidBossComponent___);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__MoveNext__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__get_Current__);
    sub_1CE6700(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__get_Current__);
    sub_1CE6700(&FSUtility_TypeInfo);
    sub_1CE6700(&System_Func_TitleInfoEventRaidBossComponent__bool__TypeInfo);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
    sub_1CE6700(&Method_System_Collections_Generic_List_QuestAfterAction_Command__Add__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1CE6700(&Method_System_Collections_Generic_List_TitleInfoEventRaidStatusComponent__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
    sub_1CE6700(&Method_System_Collections_Generic_List_int__Remove__);
    sub_1CE6700(&Method_System_Collections_Generic_List_QuestAfterAction_Command___ctor__);
    sub_1CE6700(&System_Collections_Generic_List_QuestAfterAction_Command__TypeInfo);
    sub_1CE6700(&LocalizationManager_TypeInfo);
    sub_1CE6700(&Method_NetworkManager_getRequest_BattleSetupScenarioRequest___);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&Method_System_Nullable_Vector3___ctor__);
    sub_1CE6700(&Method_System_Nullable_float___ctor__);
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    sub_1CE6700(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
    sub_1CE6700(&Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
    sub_1CE6700(&Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
    sub_1CE6700(&Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
    sub_1CE6700(&QuestAfterAction_TypeInfo);
    sub_1CE6700(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1CE6700(&SceneJumpInfo_TypeInfo);
    sub_1CE6700(&SeManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1CE6700(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_1CE6700(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_1CE6700(&SoundManager_TypeInfo);
    sub_1CE6700(&Method_QuestAfterAction_StateMain_UpdateAnim__);
    sub_1CE6700(&string___TypeInfo);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    sub_1CE6700(&QuestAfterAction_TitleInfoControlParam_TypeInfo);
    sub_1CE6700(&TitleInfoEventRaidBossComponent_TypeInfo);
    sub_1CE6700(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_22__);
    sub_1CE6700(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_35__);
    sub_1CE6700(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__);
    sub_1CE6700(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__);
    sub_1CE6700(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__);
    sub_1CE6700(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__23__);
    sub_1CE6700(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__29__);
    sub_1CE6700(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__30__);
    sub_1CE6700(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__31__);
    sub_1CE6700(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__);
    sub_1CE6700(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__33__);
    sub_1CE6700(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__);
    sub_1CE6700(&QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo);
    sub_1CE6700(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__13__);
    sub_1CE6700(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__14__);
    sub_1CE6700(&QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo);
    sub_1CE6700(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__15__);
    sub_1CE6700(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__16__);
    sub_1CE6700(&QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo);
    sub_1CE6700(&Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__17__);
    sub_1CE6700(&QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo);
    sub_1CE6700(&Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__18__);
    sub_1CE6700(&QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo);
    sub_1CE6700(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__20__);
    sub_1CE6700(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__21__);
    sub_1CE6700(&QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo);
    sub_1CE6700(&Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__24__);
    sub_1CE6700(&QuestAfterAction_StateMain___c__DisplayClass16_16_TypeInfo);
    sub_1CE6700(&Method_QuestAfterAction_StateMain___c__DisplayClass16_17__UpdateAnim_b__34__);
    sub_1CE6700(&QuestAfterAction_StateMain___c__DisplayClass16_17_TypeInfo);
    sub_1CE6700(&Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__);
    sub_1CE6700(&QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo);
    sub_1CE6700(&Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__);
    sub_1CE6700(&QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo);
    sub_1CE6700(&Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__);
    sub_1CE6700(&QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo);
    sub_1CE6700(&Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__);
    sub_1CE6700(&QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo);
    sub_1CE6700(&Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__);
    sub_1CE6700(&QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo);
    sub_1CE6700(&Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__);
    sub_1CE6700(&QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo);
    sub_1CE6700(&Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__);
    sub_1CE6700(&QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo);
    sub_1CE6700(&Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__);
    sub_1CE6700(&QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo);
    sub_1CE6700(&Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__);
    sub_1CE6700(&QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo);
    sub_1CE6700(&QuestAfterAction_StateMain___c_TypeInfo);
    sub_1CE6700(&StringLiteral_87/*"\r\n"*/);
    sub_1CE6700(&StringLiteral_1376/*"30101"*/);
    sub_1CE6700(&StringLiteral_10931/*"QUEST_AFTER_ACTION_MESSAGE_"*/);
    sub_1CE6700(&StringLiteral_1377/*"30102"*/);
    sub_1CE6700(&StringLiteral_1302/*"10703"*/);
    sub_1CE6700(&StringLiteral_810/*","*/);
    sub_1CE6700(&StringLiteral_3317/*"CAPTER WAIT"*/);
    sub_1CE6700(&StringLiteral_1/*""*/);
    sub_1CE6700(&StringLiteral_20141/*"gevINFOBAR_BACK"*/);
    sub_1CE6700(&StringLiteral_1117/*"0"*/);
    byte_4E014EA = 1;
  }
  isQuickUpdate[0] = 0;
  *(_QWORD *)&color.fields.r = 0;
  *(_QWORD *)&color.fields.b = 0;
  *(_QWORD *)result = 0;
  entity = 0;
  *(_QWORD *)v876 = 0;
  v877 = 0;
  v875 = 0;
  value = 0;
  memset(&v873, 0, sizeof(v873));
  memset(&v872, 0, sizeof(v872));
  v5 = sub_1CE694C(QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo);
  QuestAfterAction_StateMain___c__DisplayClass16_0___ctor((QuestAfterAction_StateMain___c__DisplayClass16_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_1326;
  *(_QWORD *)(v5 + 16) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = that;
  v14 = (QuestAfterAction_o **)(v5 + 24);
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)that, v15, v16, v17, v18, v19, v20);
  if ( this->fields.IsAnimDoing )
    return;
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._10_get_CommandBuf.methodPtr)(
              this,
              this->klass->vtable._10_get_CommandBuf.method);
  if ( !updated )
    return;
  if ( !*v14 )
    goto LABEL_1326;
  if ( (*v14)->fields.isSkippedNext )
  {
    updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
                this,
                this->klass->vtable._14_EndAnim.method);
    if ( *v14 )
    {
      (*v14)->fields.isSkippedNext = 0;
      return;
    }
LABEL_1326:
    sub_1CE6958(updated, v7);
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
    goto LABEL_1326;
  if ( (unsigned int)updated >= *(_DWORD *)(v22 + 24) )
    goto LABEL_1327;
  v23 = *(QuestAfterAction_Command_o **)(v22 + 8LL * (int)updated + 32);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_Command_o *, const MethodInfo *))this->klass->vtable._9_IsUsableCommand.methodPtr)(
              this,
              v23,
              this->klass->vtable._9_IsUsableCommand.method);
  if ( (updated & 1) == 0 )
  {
LABEL_1222:
    ((void (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
      this,
      this->klass->vtable._14_EndAnim.method);
    return;
  }
  isQuickUpdate[0] = 0;
  v24 = *v14;
  if ( !*v14 )
    goto LABEL_1326;
  PlanetEarthQuestAfterAction_k__BackingField = v24->fields._PlanetEarthQuestAfterAction_k__BackingField;
  v26 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
  if ( !PlanetEarthQuestAfterAction_k__BackingField )
    goto LABEL_1326;
  updated = BlankEarthQuestAfterAction__UpdateAnim(
              PlanetEarthQuestAfterAction_k__BackingField,
              v24,
              v23,
              v26,
              isQuickUpdate,
              0);
  if ( (updated & 1) == 0 )
  {
    v27 = *v14;
    if ( !*v14 )
      goto LABEL_1326;
    BlankEarthQuestAfterAction_k__BackingField = v27->fields._BlankEarthQuestAfterAction_k__BackingField;
    v29 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(v29, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
    if ( !BlankEarthQuestAfterAction_k__BackingField )
      goto LABEL_1326;
    updated = BlankEarthQuestAfterAction__UpdateAnim(
                BlankEarthQuestAfterAction_k__BackingField,
                v27,
                v23,
                v29,
                isQuickUpdate,
                0);
    if ( (updated & 1) == 0 )
    {
      if ( !v23 )
        goto LABEL_1326;
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
              if ( !byte_4DFE666 )
              {
                sub_1CE6700(&TerminalSceneComponent_TypeInfo);
                byte_4DFE666 = 1;
              }
              v141 = TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                v141 = TerminalSceneComponent_TypeInfo;
              }
              mInstance = v141->static_fields->mInstance;
              updated = (__int64)QuestAfterAction_Command__GetBgmName(v23, v7);
              if ( !mInstance )
                goto LABEL_1326;
              TerminalSceneComponent__playBgm(mInstance, (System_String_o *)updated, 0, 0);
              if ( !*v14 )
                goto LABEL_1326;
              (*v14)->fields.isRequestedStopBgm = 0;
              goto LABEL_21;
            }
            if ( id == 900 )
            {
              v140 = (float)System_Int32__Parse(v23->fields.param, 0) / 1000.0;
              if ( v140 <= 0.0 )
                goto LABEL_21;
              this->fields.waitTime = v140;
              this->fields.waitStartTime = UnityEngine_Time__get_realtimeSinceStartup(0);
              return;
            }
            if ( id != 1100 )
              goto LABEL_21;
            v43 = sub_1CE694C(QuestAfterAction_StateMain___c__DisplayClass16_17_TypeInfo);
            QuestAfterAction_StateMain___c__DisplayClass16_17___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)v43,
              0);
            if ( !v43 )
              goto LABEL_1326;
            *(_QWORD *)(v43 + 24) = v5;
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v43 + 24), v5, v44, v45, v46, v47, v48, v49);
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1326;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1326;
            v50 = updated;
            if ( *(_DWORD *)(updated + 24) )
            {
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
              if ( *(_DWORD *)(v50 + 24) > 1u )
              {
                v51 = updated;
                v52 = System_Int32__Parse(*(System_String_o **)(v50 + 40), 0);
                if ( !BgmManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                if ( !byte_4DFF6D9 )
                {
                  sub_1CE6700(&BgmManager_TypeInfo);
                  byte_4DFF6D9 = 1;
                }
                v53 = BgmManager_TypeInfo;
                if ( !BgmManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
                  v53 = BgmManager_TypeInfo;
                }
                v54 = -1.0;
                masterVolume = v53->static_fields->masterVolume;
                *(float *)(v43 + 20) = masterVolume;
                if ( *(int *)(v50 + 24) >= 3 )
                {
                  v54 = System_Single__Parse(*(System_String_o **)(v50 + 48), 0);
                  masterVolume = *(float *)(v43 + 20);
                }
                v56 = v54 * masterVolume;
                *(float *)(v43 + 16) = v56;
                if ( v56 > -1.0 )
                {
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  if ( !byte_4DFE666 )
                  {
                    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
                    byte_4DFE666 = 1;
                  }
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    updated = (__int64)TerminalSceneComponent_TypeInfo;
                  }
                  v57 = **(_QWORD **)(updated + 184);
                  if ( !v57 )
                    goto LABEL_1326;
                  v58 = *(ScrTerminalListTop_o **)(v57 + 256);
                  v59 = *(float *)(v43 + 16);
                  v60 = *(float *)(v43 + 20);
                  updated = (__int64)QuestAfterAction_TypeInfo;
                  if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
                  if ( !v58 )
                    goto LABEL_1326;
                  ScrTerminalListTop__StartEasingBgmMasterVolume(
                    v58,
                    v60,
                    v59,
                    QuestAfterAction_TypeInfo->static_fields->EventAnimationAfterBgmResetTime,
                    2,
                    0,
                    0);
                }
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                if ( !byte_4DFE666 )
                {
                  sub_1CE6700(&TerminalSceneComponent_TypeInfo);
                  byte_4DFE666 = 1;
                }
                updated = (__int64)TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v61 = **(_QWORD **)(updated + 184);
                if ( !v61 )
                  goto LABEL_1326;
                v62 = *(ScrTerminalListTop_o **)(v61 + 256);
                v63 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
                System_Action___ctor(
                  v63,
                  (Il2CppObject *)v43,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_17__UpdateAnim_b__34__,
                  0);
                if ( !v62 )
                  goto LABEL_1326;
                ScrTerminalListTop__StartEventEffect(v62, v51, v52, v63, 0, 0);
                return;
              }
            }
            goto LABEL_1327;
          }
          if ( id > 1300 )
          {
            if ( id <= 1310 )
            {
              if ( id != 1301 )
              {
                if ( id != 1310 )
                  goto LABEL_21;
                if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
                v34 = v23;
                v35 = 0;
                goto LABEL_183;
              }
              updated = (__int64)v23->fields.param;
              if ( !updated )
                goto LABEL_1326;
              updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
              if ( !updated )
                goto LABEL_1326;
              v289 = updated;
              if ( *(_DWORD *)(updated + 24) )
              {
                v290 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
                v291 = *(int *)(v289 + 24) >= 2 && System_Int32__Parse(*(System_String_o **)(v289 + 40), 0) > 0;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                if ( !byte_4DFE666 )
                {
                  sub_1CE6700(&TerminalSceneComponent_TypeInfo);
                  byte_4DFE666 = 1;
                }
                updated = (__int64)TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v630 = **(_QWORD **)(updated + 184);
                if ( !v630 )
                  goto LABEL_1326;
                v631 = *(_QWORD *)(v630 + 256);
                if ( !v631 )
                  goto LABEL_1326;
                updated = *(_QWORD *)(v631 + 128);
                if ( !updated )
                  goto LABEL_1326;
                updated = (__int64)TitleInfoControl__GetEnableEventUiObjectList((TitleInfoControl_o *)updated, 1, 0);
                if ( !updated )
                  goto LABEL_1326;
                v632 = *(_QWORD *)(updated + 24);
                v633 = updated;
                if ( (int)v632 < 1 )
                  goto LABEL_21;
                v634 = 0;
                while ( 1 )
                {
                  if ( v634 >= (unsigned int)v632 )
                    goto LABEL_1327;
                  updated = *(_QWORD *)(v633 + 32 + 8 * v634);
                  if ( v291 )
                    break;
                  if ( !updated )
                    goto LABEL_1326;
                  v635 = *(_QWORD *)(updated + 64);
                  if ( !v635 )
                    goto LABEL_1326;
                  if ( v290 == *(_DWORD *)(v635 + 16) )
                    goto LABEL_897;
LABEL_899:
                  LODWORD(v632) = *(_DWORD *)(v633 + 24);
                  if ( (__int64)++v634 >= (int)v632 )
                    goto LABEL_21;
                }
                if ( !updated )
                  goto LABEL_1326;
LABEL_897:
                updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)updated, 0);
                if ( !updated )
                  goto LABEL_1326;
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)updated, 1, 0);
                goto LABEL_899;
              }
              goto LABEL_1327;
            }
            if ( id != 1311 )
            {
              if ( id != 1312 )
                goto LABEL_21;
              if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
              v35 = 1;
              v34 = v23;
LABEL_183:
              updated = QuestAfterAction__TryRaidUiDisableCommand(v34, v35, v30);
              if ( (updated & 1) != 0 )
                goto LABEL_21;
LABEL_184:
              v143 = *v14;
              if ( !*v14 )
                goto LABEL_1326;
              ReservedCommandListBeforeFadeIn_k__BackingField = (System_Collections_Generic_List_object__o *)v143->fields._ReservedCommandListBeforeFadeIn_k__BackingField;
              p_ReservedCommandListBeforeFadeIn_k__BackingField = (GrandQuestFolderBoardItem_o *)&v143->fields._ReservedCommandListBeforeFadeIn_k__BackingField;
              v145 = ReservedCommandListBeforeFadeIn_k__BackingField;
              if ( !ReservedCommandListBeforeFadeIn_k__BackingField )
              {
                v145 = (System_Collections_Generic_List_object__o *)sub_1CE694C(System_Collections_Generic_List_QuestAfterAction_Command__TypeInfo);
                System_Collections_Generic_List_object____ctor(
                  v145,
                  (const MethodInfo_3905734 *)Method_System_Collections_Generic_List_QuestAfterAction_Command___ctor__);
              }
              p_ReservedCommandListBeforeFadeIn_k__BackingField->klass = (GrandQuestFolderBoardItem_c *)v145;
              sub_1CE66A4(
                p_ReservedCommandListBeforeFadeIn_k__BackingField,
                (int32_t)v145,
                v102,
                v103,
                v104,
                v105,
                v106,
                v107);
              if ( !*v14 )
                goto LABEL_1326;
              updated = (__int64)(*v14)->fields._ReservedCommandListBeforeFadeIn_k__BackingField;
              if ( !updated )
                goto LABEL_1326;
              v153 = *(_QWORD *)(updated + 16);
              v154 = Method_System_Collections_Generic_List_QuestAfterAction_Command__Add__;
              ++*(_DWORD *)(updated + 28);
              if ( !v153 )
                goto LABEL_1326;
              v155 = *(int *)(updated + 24);
              if ( (unsigned int)v155 >= *(_DWORD *)(v153 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)updated,
                  (Il2CppObject *)v23,
                  *(const MethodInfo_3905F68 **)(*(_QWORD *)(v154[4] + 192LL) + 112LL));
              }
              else
              {
                v156 = v153 + 8 * v155;
                *(_DWORD *)(updated + 24) = v155 + 1;
                *(_QWORD *)(v156 + 32) = v23;
                sub_1CE66A4(
                  (GrandQuestFolderBoardItem_o *)(v156 + 32),
                  (int32_t)v23,
                  v147,
                  v148,
                  v149,
                  v150,
                  v151,
                  v152);
              }
              goto LABEL_21;
            }
            updated = (__int64)TerminalPramsManager_TypeInfo;
            if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              inited = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              updated = (__int64)TerminalPramsManager_TypeInfo;
            }
            v292 = *(_QWORD *)(*(_QWORD *)(updated + 184) + 880LL);
            if ( !v292 )
              goto LABEL_1326;
            v293 = *(_DWORD *)(v292 + 28) + 1;
            *(_DWORD *)(v292 + 24) = 0;
            *(_DWORD *)(v292 + 28) = v293;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              inited = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4DFE666 )
            {
              sub_1CE6700(&TerminalSceneComponent_TypeInfo);
              byte_4DFE666 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              inited = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v294 = **(_QWORD **)(updated + 184);
            if ( !v294 )
              goto LABEL_1326;
            v295 = *(_QWORD *)(v294 + 256);
            if ( !v295 )
              goto LABEL_1326;
            v296 = *(_QWORD *)(v295 + 128);
            if ( !v296 )
              goto LABEL_1326;
            updated = *(_QWORD *)(v296 + 328);
            if ( !updated )
              goto LABEL_1326;
            (*(void (__fastcall **)(__int64, _QWORD, long double))(*(_QWORD *)updated + 440LL))(
              updated,
              *(_QWORD *)(*(_QWORD *)updated + 448LL),
              inited);
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1326;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1326;
            v297 = updated;
            if ( !*(_DWORD *)(updated + 24) )
              goto LABEL_1327;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            if ( *(_DWORD *)(v297 + 24) <= 1u )
              goto LABEL_1327;
            v298 = updated;
            v867 = System_Int32__Parse(*(System_String_o **)(v297 + 40), 0);
            if ( *(int *)(v297 + 24) >= 3 )
            {
              v299 = System_Int32__Parse(*(System_String_o **)(v297 + 48), 0) > 0;
              if ( *(int *)(v297 + 24) >= 4 )
              {
                seca = System_Int32__Parse(*(System_String_o **)(v297 + 56), 0) > 0;
                goto LABEL_1005;
              }
            }
            else
            {
              v299 = 0;
            }
            seca = 0;
LABEL_1005:
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4DFE666 )
            {
              sub_1CE6700(&TerminalSceneComponent_TypeInfo);
              byte_4DFE666 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v655 = **(_QWORD **)(updated + 184);
            if ( !v655 )
              goto LABEL_1326;
            v656 = *(_QWORD *)(v655 + 256);
            if ( !v656 )
              goto LABEL_1326;
            v657 = *(UnityEngine_Object_o **)(v656 + 128);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality(v657, 0, 0);
            if ( (updated & 1) == 0 )
            {
              if ( !v657 )
                goto LABEL_1326;
              updated = (__int64)v657[14].monitor;
              if ( !updated )
                goto LABEL_1326;
              System_Collections_Generic_List_object___GetEnumerator(
                (System_Collections_Generic_List_Enumerator_T__o *)&v870,
                (System_Collections_Generic_List_object__o *)updated,
                (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_TitleInfoEventRaidStatusComponent__GetEnumerator__);
              v658 = 0;
              v873 = v870;
LABEL_1019:
              v659 = v658;
              while ( 1 )
              {
                v660 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                         &v873,
                         (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__MoveNext__);
                if ( !v660 )
                  break;
                if ( v299 )
                {
                  if ( !v873.fields._current )
                    sub_1CE6958(v660, v661);
LABEL_1026:
                  v658 = 1;
                  TitleInfoEventRaidStatusComponent__SetEntryAnim(
                    (TitleInfoEventRaidStatusComponent_o *)v873.fields._current,
                    0);
                  goto LABEL_1019;
                }
                if ( !v873.fields._current )
                  sub_1CE6958(v660, v661);
                if ( v298 == LODWORD(v873.fields._current[9].monitor) )
                  goto LABEL_1026;
              }
              System_Collections_Generic_List_Enumerator_object___Dispose(
                &v873,
                (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventRaidStatusComponent__Dispose__);
              if ( (v658 & 1) != 0 )
              {
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4E01501 )
                {
                  sub_1CE6700(&TerminalPramsManager_TypeInfo);
                  byte_4E01501 = 1;
                }
                v662 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v662 = TerminalPramsManager_TypeInfo;
                }
                if ( v662->static_fields->_RemainingRaidHpData_k__BackingField )
                {
                  if ( !v662->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(v662);
                  if ( !byte_4E01501 )
                  {
                    sub_1CE6700(&TerminalPramsManager_TypeInfo);
                    byte_4E01501 = 1;
                  }
                  updated = (__int64)TerminalPramsManager_TypeInfo;
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    updated = (__int64)TerminalPramsManager_TypeInfo;
                  }
                  v663 = *(_QWORD *)(*(_QWORD *)(updated + 184) + 440LL);
                  if ( !v663 )
                    goto LABEL_1326;
                  *(_BYTE *)(v663 + 64) = 1;
                }
              }
              monitor = (System_Collections_IEnumerable_o **)v657[15].monitor;
              if ( monitor )
              {
                v665 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                                              monitor[9],
                                                                              (const MethodInfo_3232D7C *)Method_System_Linq_Enumerable_OfType_TitleInfoEventRaidBossComponent___);
                v666 = QuestAfterAction_StateMain___c_TypeInfo;
                if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
                  v666 = QuestAfterAction_StateMain___c_TypeInfo;
                }
                _9__16_35 = (System_Func_object__bool__o *)v666->static_fields->__9__16_35;
                if ( !_9__16_35 )
                {
                  if ( !v666->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(v666);
                    v666 = QuestAfterAction_StateMain___c_TypeInfo;
                  }
                  v668 = (Il2CppObject *)v666->static_fields->__9;
                  _9__16_35 = (System_Func_object__bool__o *)sub_1CE694C(System_Func_TitleInfoEventRaidBossComponent__bool__TypeInfo);
                  System_Func_object__bool____ctor(
                    _9__16_35,
                    v668,
                    Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_35__,
                    0);
                  static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
                  static_fields->__9__16_35 = (struct System_Func_TitleInfoEventRaidBossComponent__bool__o *)_9__16_35;
                  sub_1CE66A4(
                    (GrandQuestFolderBoardItem_o *)&static_fields->__9__16_35,
                    (int32_t)_9__16_35,
                    v670,
                    v671,
                    v672,
                    v673,
                    v674,
                    v675);
                }
                updated = System_Linq_Enumerable__Any_object__52502356(
                            v665,
                            (System_Func_TSource__bool__o *)_9__16_35,
                            (const MethodInfo_3211F54 *)Method_System_Linq_Enumerable_Any_TitleInfoEventRaidBossComponent___);
                v676 = updated;
                if ( (updated & 1) != 0 && ((v659 ^ 1) & 1) != 0 )
                {
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  if ( !byte_4E01501 )
                  {
                    sub_1CE6700(&TerminalPramsManager_TypeInfo);
                    byte_4E01501 = 1;
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
                    if ( !byte_4E01501 )
                    {
                      sub_1CE6700(&TerminalPramsManager_TypeInfo);
                      byte_4E01501 = 1;
                    }
                    updated = (__int64)TerminalPramsManager_TypeInfo;
                    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                      updated = (__int64)TerminalPramsManager_TypeInfo;
                    }
                    v677 = *(_QWORD *)(*(_QWORD *)(updated + 184) + 440LL);
                    if ( !v677 )
                      goto LABEL_1326;
                    *(_BYTE *)(v677 + 64) = 1;
                  }
                }
                v678 = v657[15].monitor;
                if ( !v678 )
                  goto LABEL_1326;
                updated = v678[9];
                if ( !updated )
                  goto LABEL_1326;
                System_Collections_Generic_List_object___GetEnumerator(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v870,
                  (System_Collections_Generic_List_object__o *)updated,
                  (const MethodInfo_3906A60 *)Method_System_Collections_Generic_List_TitleInfoEventInfoComponent__GetEnumerator__);
                v872 = v870;
                v679 = 0;
                while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                          &v872,
                          (const MethodInfo_36809F0 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__MoveNext__) )
                {
                  current = v872.fields._current;
                  if ( v872.fields._current
                    && (naturalAligment = TitleInfoEventRaidBossComponent_TypeInfo->_2.naturalAligment,
                        v872.fields._current->klass->_2.naturalAligment >= (unsigned int)naturalAligment) )
                  {
                    if ( (TitleInfoEventRaidBossComponent_c *)v872.fields._current->klass->_2.typeHierarchy[naturalAligment - 1] == TitleInfoEventRaidBossComponent_TypeInfo )
                      v682 = v872.fields._current;
                    else
                      v682 = 0;
                  }
                  else
                  {
                    v682 = 0;
                  }
                  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  v683 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v682, 0, 0);
                  if ( v683 )
                  {
                    if ( seca )
                      goto LABEL_1083;
                    if ( !v682 )
                      sub_1CE6958(v683, v684);
                    if ( v867 == LODWORD(v682[23].klass) )
                    {
LABEL_1083:
                      v685 = TerminalPramsManager_TypeInfo;
                      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                        v685 = TerminalPramsManager_TypeInfo;
                      }
                      RaidBossHpForceHideGroupIndexList = v685->static_fields->RaidBossHpForceHideGroupIndexList;
                      if ( !RaidBossHpForceHideGroupIndexList )
                        sub_1CE6958(0, v684);
                      v687 = System_Collections_Generic_List_int___Remove(
                               RaidBossHpForceHideGroupIndexList,
                               v679,
                               (const MethodInfo_38EA440 *)Method_System_Collections_Generic_List_int__Remove__);
                      if ( (v676 & 1) != 0 )
                      {
                        v689 = (TitleInfoEventItemControl_o *)v657[15].monitor;
                        if ( !v689 )
                          sub_1CE6958(0, v688);
                        TitleInfoEventItemControl__SetEventGroupIdx(v689, v679, 1, 0);
                      }
                      else
                      {
                        if ( !current )
                          sub_1CE6958(v687, v688);
                        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
                        if ( !gameObject )
                          sub_1CE6958(0, v691);
                        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
                        if ( !v682 )
                          sub_1CE6958(v692, v693);
                        TitleInfoEventRaidBossComponent__PlayFrameInBoss((TitleInfoEventRaidBossComponent_o *)v682, 0);
                      }
                    }
                  }
                  ++v679;
                }
                System_Collections_Generic_List_Enumerator_object___Dispose(
                  &v872,
                  (const MethodInfo_36809EC *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventInfoComponent__Dispose__);
              }
            }
            goto LABEL_21;
          }
          if ( id != 1200 )
          {
            if ( id != 1300 )
              goto LABEL_21;
            if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
            updated = QuestAfterAction__TryEventUiDisableCommand(v23, v7);
            if ( (updated & 1) != 0 )
              goto LABEL_21;
            goto LABEL_184;
          }
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1326;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1326;
          v231 = updated;
          if ( !*(_DWORD *)(updated + 24) )
            goto LABEL_1327;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
          if ( *(_DWORD *)(v231 + 24) <= 1u )
            goto LABEL_1327;
          v232 = updated;
          v233 = System_Int32__Parse(*(System_String_o **)(v231 + 40), 0);
          if ( v232 == 2 )
          {
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4DFE666 )
            {
              sub_1CE6700(&TerminalSceneComponent_TypeInfo);
              byte_4DFE666 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v650 = **(_QWORD **)(updated + 184);
            if ( !v650 )
              goto LABEL_1326;
            updated = *(_QWORD *)(v650 + 256);
            if ( !updated )
              goto LABEL_1326;
            v235 = 1;
            v237 = v233;
          }
          else
          {
            if ( v232 != 1 )
            {
              if ( v232 )
                goto LABEL_21;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4DFE666 )
              {
                sub_1CE6700(&TerminalSceneComponent_TypeInfo);
                byte_4DFE666 = 1;
              }
              updated = (__int64)TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                updated = (__int64)TerminalSceneComponent_TypeInfo;
              }
              v234 = **(_QWORD **)(updated + 184);
              if ( !v234 )
                goto LABEL_1326;
              updated = *(_QWORD *)(v234 + 256);
              if ( !updated )
                goto LABEL_1326;
              v235 = 1;
              v236 = 1;
              v237 = v233;
LABEL_979:
              ScrTerminalListTop__SetQuestStateForEventEffect((ScrTerminalListTop_o *)updated, v237, v235, v236, 0);
              goto LABEL_21;
            }
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4DFE666 )
            {
              sub_1CE6700(&TerminalSceneComponent_TypeInfo);
              byte_4DFE666 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v649 = **(_QWORD **)(updated + 184);
            if ( !v649 )
              goto LABEL_1326;
            updated = *(_QWORD *)(v649 + 256);
            if ( !updated )
              goto LABEL_1326;
            v237 = v233;
            v235 = 0;
          }
          v236 = 0;
          goto LABEL_979;
        }
        if ( id > 604 )
        {
          if ( id > 800 )
          {
            if ( id == 801 )
            {
              param = v23->fields.param;
              v229 = Method_QuestAfterAction_StateMain_UpdateAnim__;
              if ( (*((_BYTE *)Method_QuestAfterAction_StateMain_UpdateAnim__ + 83) & 2) != 0 )
                v229 = (_QWORD *)sub_1CE6718(Method_QuestAfterAction_StateMain_UpdateAnim__);
              v230 = (System_Reflection_MethodBase_o *)sub_1CE66E4(v229, v229[4]);
              OverwriteAssetSoundName__PlaySe(v230, param, 0, 0);
            }
            else if ( id == 850 )
            {
              if ( !SoundManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
              SoundManager__stopBgm(0);
              if ( !*v14 )
                goto LABEL_1326;
              (*v14)->fields.isRequestedStopBgm = 1;
            }
            goto LABEL_21;
          }
          switch ( id )
          {
            case 700:
              updated = (__int64)v23->fields.param;
              if ( !updated )
                goto LABEL_1326;
              updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
              if ( !updated )
                goto LABEL_1326;
              v113 = updated;
              if ( !*(_DWORD *)(updated + 24) )
                goto LABEL_1327;
              v114 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
              if ( *(int *)(v113 + 24) >= 2 )
                v115 = System_Int32__Parse(*(System_String_o **)(v113 + 40), 0) + 1;
              else
                v115 = 0;
              v648 = (SceneJumpInfo_o *)sub_1CE694C(SceneJumpInfo_TypeInfo);
              SceneJumpInfo___ctor_42635632(v648, (System_String_o *)StringLiteral_1/*""*/, v114, v115, 0);
              updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( !updated )
                goto LABEL_1326;
              v628 = 72;
              v629 = (Il2CppObject *)v648;
              goto LABEL_1221;
            case 701:
              if ( !System_String__op_Equality(v23->fields.param, (System_String_o *)StringLiteral_1117/*"0"*/, 0) )
                goto LABEL_21;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4E014FE )
              {
                sub_1CE6700(&TerminalPramsManager_TypeInfo);
                byte_4E014FE = 1;
              }
              v341 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v341 = TerminalPramsManager_TypeInfo;
              }
              if ( v341->static_fields->_IsTransOrdealCall_k__BackingField )
                goto LABEL_21;
              if ( !v341->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(v341);
              if ( !byte_4E014FF )
              {
                sub_1CE6700(&TerminalPramsManager_TypeInfo);
                byte_4E014FF = 1;
              }
              v342 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v342 = TerminalPramsManager_TypeInfo;
              }
              v342->static_fields->_IsTransOrdealCall_k__BackingField = 1;
              v343 = BalanceConfig_TypeInfo;
              if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                v343 = BalanceConfig_TypeInfo;
              }
              TerminalPramsManager__SetAutoResumeByWarId(v343->static_fields->OrdealCallWarId, 0);
              updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( !updated )
                goto LABEL_1326;
              AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)updated, 34, 1, 0, 0, 0);
              return;
            case 702:
              updated = (__int64)v23->fields.param;
              if ( !updated )
                goto LABEL_1326;
              updated = (__int64)System_String__Split_65174736(
                                   (System_String_o *)updated,
                                   (System_String_o *)StringLiteral_810/*","*/,
                                   0,
                                   0);
              if ( !updated )
                goto LABEL_1326;
              v333 = *(_QWORD *)(updated + 24);
              v334 = updated;
              if ( !v333 )
                goto LABEL_980;
              if ( !(_DWORD)v333 )
                goto LABEL_1327;
              if ( System_Int32__Parse(*(System_String_o **)(updated + 32), 0) > 0 )
                goto LABEL_21;
              if ( *(int *)(v334 + 24) < 2 )
LABEL_980:
                v335 = 0;
              else
                v335 = System_Int32__Parse(*(System_String_o **)(v334 + 40), 0);
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              TerminalPramsManager__SetAutoResumeForFolder(v335, 0);
              if ( !byte_4E01429 )
              {
                sub_1CE6700(&TerminalPramsManager_TypeInfo);
                byte_4E01429 = 1;
              }
              v651 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v651 = TerminalPramsManager_TypeInfo;
              }
              if ( v651->static_fields->_DispState_k__BackingField == 3 )
              {
                if ( !v651->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(v651);
                if ( !byte_4E01500 )
                {
                  sub_1CE6700(&TerminalPramsManager_TypeInfo);
                  byte_4E01500 = 1;
                }
                v652 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v652 = TerminalPramsManager_TypeInfo;
                }
                v652->static_fields->_IsMoveFolderByQuestAfterAction_k__BackingField = 1;
              }
              updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( !updated )
                goto LABEL_1326;
              AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)updated, 34, 1, 0, 0, 0);
              goto LABEL_1222;
            case 703:
              updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_QuestAfterAction__get_Instance__);
              if ( !updated )
                goto LABEL_1326;
              *(_BYTE *)(updated + 203) = 0;
              updated = (__int64)v23->fields.param;
              if ( !updated )
                goto LABEL_1326;
              updated = (__int64)System_String__Split_65174736(
                                   (System_String_o *)updated,
                                   (System_String_o *)StringLiteral_810/*","*/,
                                   0,
                                   0);
              if ( !updated )
                goto LABEL_1326;
              v336 = *(_QWORD *)(updated + 24);
              v337 = updated;
              if ( !v336 )
                goto LABEL_875;
              if ( !(_DWORD)v336 )
                goto LABEL_1327;
              v338 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
              if ( v338 < 1 )
              {
LABEL_875:
                updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
                if ( !updated )
                  goto LABEL_1326;
                v628 = 91;
                v629 = 0;
                goto LABEL_1221;
              }
              v339 = v338;
              if ( *(int *)(v337 + 24) > 1 )
              {
                v798 = System_Int32__Parse(*(System_String_o **)(v337 + 40), 0);
                v340 = (System_String_o *)StringLiteral_1/*""*/;
                if ( v798 >= 1 )
                {
                  v799 = 1;
                  goto LABEL_1219;
                }
              }
              else
              {
                v340 = (System_String_o *)StringLiteral_1/*""*/;
              }
              v799 = 0;
LABEL_1219:
              v800 = (SceneJumpInfo_o *)sub_1CE694C(SceneJumpInfo_TypeInfo);
              SceneJumpInfo___ctor_42635632(v800, v340, v339, v799, 0);
              updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( !updated )
                goto LABEL_1326;
              v628 = 91;
              v629 = (Il2CppObject *)v800;
LABEL_1221:
              AvalonSceneManager__transitionScene((AvalonSceneManager_o *)updated, v628, 1, v629, 0);
              goto LABEL_1222;
            default:
              if ( id != 800 )
                goto LABEL_21;
              v242 = *v14;
              if ( !*v14 )
                goto LABEL_1326;
              updated = (__int64)v242->fields.svtVoices;
              if ( !updated )
                goto LABEL_1326;
              if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
                      (System_Collections_Generic_Dictionary_int__object__o *)updated,
                      v242->fields.commandIdx,
                      &value,
                      (const MethodInfo_355CC70 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__) )
                goto LABEL_1222;
              updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
              if ( !updated )
                goto LABEL_1326;
              AutomatedAction__TerminateMissionAction((AutomatedAction_o *)updated, 0);
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4DFE666 )
              {
                sub_1CE6700(&TerminalSceneComponent_TypeInfo);
                byte_4DFE666 = 1;
              }
              updated = (__int64)TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                updated = (__int64)TerminalSceneComponent_TypeInfo;
              }
              v243 = **(_QWORD **)(updated + 184);
              if ( !v243 )
                goto LABEL_1326;
              if ( !*(_QWORD *)(v243 + 464) )
                goto LABEL_354;
              if ( !*(_DWORD *)(updated + 224) )
                j_il2cpp_runtime_class_init_0(updated);
              if ( !byte_4DFE666 )
              {
                sub_1CE6700(&TerminalSceneComponent_TypeInfo);
                byte_4DFE666 = 1;
              }
              updated = (__int64)TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                updated = (__int64)TerminalSceneComponent_TypeInfo;
              }
              v244 = **(_QWORD **)(updated + 184);
              if ( !v244 )
                goto LABEL_1326;
              v245 = *(_QWORD *)(v244 + 464);
              if ( !v245 )
                goto LABEL_1326;
              updated = *(unsigned int *)(v245 + 48);
              if ( (_DWORD)updated )
                goto LABEL_356;
LABEL_354:
              if ( !value )
                goto LABEL_1326;
              updated = LODWORD(value[1].klass);
LABEL_356:
              if ( (int)updated < 1 )
              {
                if ( !value )
                  goto LABEL_1326;
                v810 = (System_String_o *)value[1].monitor;
                if ( !SoundManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                SoundManager__playVoice(v810, 0, 0);
              }
              else
              {
                updated = (__int64)ServantVoiceEntity__getVoiceAssetName_43939436(updated, 0);
                if ( !value )
                  goto LABEL_1326;
                v246 = (System_String_o *)updated;
                v247 = (System_String_o *)value[1].monitor;
                v248 = SeManager_TypeInfo;
                if ( !SeManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
                  v248 = SeManager_TypeInfo;
                }
                DEFAULT_VOLUME = v248->static_fields->DEFAULT_VOLUME;
                if ( !SoundManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
                SoundManager__playVoice_42673536(v246, v247, DEFAULT_VOLUME, 0, 0, 0);
              }
              break;
          }
          goto LABEL_1222;
        }
        switch ( id )
        {
          case 600:
            v77 = (System_String_o *)StringLiteral_1/*""*/;
            v78 = System_String__Concat_65122828((System_String_o *)StringLiteral_10931/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v23->fields.param, 0);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v79 = LocalizationManager__Get(v78, 0);
            Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v81 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
            System_Action___ctor(
              v81,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__29__,
              0);
            if ( !Instance )
              goto LABEL_1326;
            CommonUI__OpenNotificationDialog(
              (CommonUI_o *)Instance,
              v77,
              v79,
              v81,
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
            v270 = StringLiteral_1/*""*/;
            updated = sub_1CE67A8(string___TypeInfo, 1);
            if ( !updated )
              goto LABEL_1326;
            v277 = (System_String_array *)updated;
            if ( !*(_DWORD *)(updated + 24) )
              break;
            v278 = StringLiteral_87/*"\r\n"*/;
            *(_QWORD *)(updated + 32) = StringLiteral_87/*"\r\n"*/;
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(updated + 32), v278, v271, v272, v273, v274, v275, v276);
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1326;
            updated = (__int64)System_String__Split_65175876((System_String_o *)updated, v277, 0, 0);
            if ( !updated )
              goto LABEL_1326;
            v279 = *(_DWORD *)(updated + 24);
            if ( v279 <= 0 )
              goto LABEL_1222;
            v280 = *(System_String_o **)(updated + 32);
            if ( v279 == 1 )
            {
              v281 = *(System_String_o **)(updated + 32);
              v280 = (System_String_o *)v270;
            }
            else
            {
              v281 = *(System_String_o **)(updated + 40);
            }
            v653 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v654 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
            System_Action___ctor(
              v654,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__30__,
              0);
            if ( !v653 )
              goto LABEL_1326;
            CommonUI__OpenNotificationDialog(
              (CommonUI_o *)v653,
              v280,
              v281,
              v654,
              210,
              0,
              0,
              0,
              1,
              0,
              1,
              0,
              0,
              0.0,
              0,
              0);
            return;
          case 602:
            v255 = (System_String_o *)StringLiteral_1/*""*/;
            v256 = System_String__Concat_65122828((System_String_o *)StringLiteral_10931/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v23->fields.param, 0);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v257 = LocalizationManager__Get(v256, 0);
            v258 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v259 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
            System_Action___ctor(
              v259,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__31__,
              0);
            if ( !v258 )
              goto LABEL_1326;
            onClickOkSeKind = 0;
            goto LABEL_1000;
          case 603:
            v260 = StringLiteral_1/*""*/;
            updated = sub_1CE67A8(string___TypeInfo, 1);
            if ( !updated )
              goto LABEL_1326;
            v267 = (System_String_array *)updated;
            if ( !*(_DWORD *)(updated + 24) )
              break;
            v268 = StringLiteral_87/*"\r\n"*/;
            *(_QWORD *)(updated + 32) = StringLiteral_87/*"\r\n"*/;
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(updated + 32), v268, v261, v262, v263, v264, v265, v266);
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1326;
            updated = (__int64)System_String__Split_65175876((System_String_o *)updated, v267, 0, 0);
            if ( !updated )
              goto LABEL_1326;
            v269 = *(_DWORD *)(updated + 24);
            if ( v269 <= 0 )
              goto LABEL_1222;
            v255 = *(System_String_o **)(updated + 32);
            if ( v269 == 1 )
            {
              v257 = *(System_String_o **)(updated + 32);
              v255 = (System_String_o *)v260;
            }
            else
            {
              v257 = *(System_String_o **)(updated + 40);
            }
            v258 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v259 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
            System_Action___ctor(
              v259,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__,
              0);
            if ( !v258 )
              goto LABEL_1326;
            onClickOkSeKind = 1;
LABEL_1000:
            CommonUI__OpenNotificationDialog_31921040(
              (CommonUI_o *)v258,
              v255,
              v257,
              v259,
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
            v250 = (System_String_o *)StringLiteral_1/*""*/;
            v251 = System_String__Concat_65122828((System_String_o *)StringLiteral_10931/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v23->fields.param, 0);
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            v252 = LocalizationManager__Get(v251, 0);
            v253 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
            v254 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
            System_Action___ctor(
              v254,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__33__,
              0);
            if ( !v253 )
              goto LABEL_1326;
            CommonUI__OpenNotificationDialog_31921040(
              (CommonUI_o *)v253,
              v250,
              v252,
              v254,
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
              goto LABEL_1326;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1326;
            v137 = *(_QWORD *)(updated + 24);
            v138 = updated;
            if ( v137 )
            {
              if ( !(_DWORD)v137 )
                break;
              v139 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0) > 0;
            }
            else
            {
              v139 = 0;
            }
            v636 = sub_1CE694C(QuestAfterAction_TitleInfoControlParam_TypeInfo);
            System_Object___ctor((Il2CppObject *)v636, 0);
            if ( *(int *)(v138 + 24) < 2 )
              goto LABEL_909;
            updated = System_Int32__Parse(*(System_String_o **)(v138 + 40), 0);
            if ( (int)updated < 1 )
              goto LABEL_909;
            if ( *(_DWORD *)(v138 + 24) <= 1u )
              break;
            updated = System_Int32__Parse(*(System_String_o **)(v138 + 40), 0);
            if ( !v636 )
              goto LABEL_1326;
            *(_DWORD *)(v636 + 16) = updated;
LABEL_909:
            if ( *(int *)(v138 + 24) <= 2 )
              goto LABEL_914;
            updated = System_Int32__Parse(*(System_String_o **)(v138 + 48), 0);
            if ( (int)updated < 1 )
              goto LABEL_914;
            if ( *(_DWORD *)(v138 + 24) > 2u )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v138 + 48), 0);
              if ( !v636 )
                goto LABEL_1326;
              *(_DWORD *)(v636 + 20) = updated;
LABEL_914:
              v638 = *v14;
              if ( !*v14 )
                goto LABEL_1326;
              TitleInfoCtrlCallback_k__BackingField = v638->fields._TitleInfoCtrlCallback_k__BackingField;
              if ( v139 )
              {
                if ( !TitleInfoCtrlCallback_k__BackingField )
                  goto LABEL_1326;
                QuestAfterAction_TitleInfoControlCallback__Start(
                  v638->fields._TitleInfoCtrlCallback_k__BackingField,
                  (QuestAfterAction_TitleInfoControlParam_o *)v636,
                  0,
                  v637);
                goto LABEL_21;
              }
              v640 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
              System_Action___ctor(v640, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
              if ( !TitleInfoCtrlCallback_k__BackingField )
                goto LABEL_1326;
              QuestAfterAction_TitleInfoControlCallback__Start(
                TitleInfoCtrlCallback_k__BackingField,
                (QuestAfterAction_TitleInfoControlParam_o *)v636,
                v640,
                v641);
              return;
            }
            break;
        }
LABEL_1327:
        sub_1CE6960(updated);
      }
      if ( id > 352 )
      {
        if ( id > 501 )
        {
          if ( id <= 520 )
          {
            if ( id == 510 )
            {
              updated = (__int64)v23->fields.param;
              if ( !updated )
                goto LABEL_1326;
              updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
              if ( !updated )
                goto LABEL_1326;
              v238 = updated;
              if ( *(_DWORD *)(updated + 24) )
              {
                v239 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
                v240 = 0.5;
                if ( *(int *)(v238 + 24) >= 2 )
                {
                  v241 = System_Int32__Parse(*(System_String_o **)(v238 + 40), 0);
                  if ( *(int *)(v238 + 24) >= 3 )
                    v240 = System_Single__Parse(*(System_String_o **)(v238 + 48), 0);
                }
                else
                {
                  v241 = v239;
                  v239 = -1;
                }
                updated = (__int64)*v14;
                if ( !*v14 )
                  goto LABEL_1326;
                MapComponent_object = QuestAfterAction__GetMapComponent_object_(
                                        (QuestAfterAction_o *)updated,
                                        0,
                                        v241,
                                        this,
                                        (const MethodInfo_329DB4C *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)MapComponent_object, 0, 0) )
                {
                  if ( v239 >= 1 )
                  {
                    updated = (__int64)*v14;
                    if ( !*v14 )
                      goto LABEL_1326;
                    v345 = QuestAfterAction__GetMapComponent_object_(
                             (QuestAfterAction_o *)updated,
                             0,
                             v239,
                             this,
                             (const MethodInfo_329DB4C *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v345, 0, 0) )
                    {
                      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                      if ( !byte_4DFE666 )
                      {
                        sub_1CE6700(&TerminalSceneComponent_TypeInfo);
                        byte_4DFE666 = 1;
                      }
                      updated = (__int64)TerminalSceneComponent_TypeInfo;
                      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                        updated = (__int64)TerminalSceneComponent_TypeInfo;
                      }
                      v346 = **(_QWORD **)(updated + 184);
                      if ( !v346 )
                        goto LABEL_1326;
                      if ( !v345 )
                        goto LABEL_1326;
                      v347 = *(ScrTerminalMap_o **)(v346 + 264);
                      updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v345, 0);
                      if ( !v347 )
                        goto LABEL_1326;
                      ScrTerminalMap__SetPlayerIcon(v347, (UnityEngine_GameObject_o *)updated, 0);
                    }
                  }
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  if ( !byte_4DFE666 )
                  {
                    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
                    byte_4DFE666 = 1;
                  }
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    updated = (__int64)TerminalSceneComponent_TypeInfo;
                  }
                  v348 = **(_QWORD **)(updated + 184);
                  if ( !v348 )
                    goto LABEL_1326;
                  if ( !MapComponent_object )
                    goto LABEL_1326;
                  v349 = *(ScrTerminalMap_o **)(v348 + 264);
                  v350 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MapComponent_object, 0);
                  v351 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
                  System_Action___ctor(v351, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
                  if ( !v349 )
                    goto LABEL_1326;
                  ScrTerminalMap__MovePlayerIcon(v349, v350, v241, v351, v240, 0);
                }
                return;
              }
            }
            else
            {
              if ( id != 520 )
                goto LABEL_21;
              updated = (__int64)v23->fields.param;
              if ( !updated )
                goto LABEL_1326;
              updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
              if ( !updated )
                goto LABEL_1326;
              v108 = updated;
              if ( *(_DWORD *)(updated + 24) )
              {
                DEFAULT_FADE_TIME = System_Single__Parse(*(System_String_o **)(updated + 32), 0);
                if ( DEFAULT_FADE_TIME <= 0.0 )
                {
                  v110 = AvalonSceneManager_TypeInfo;
                  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
                    v110 = AvalonSceneManager_TypeInfo;
                  }
                  DEFAULT_FADE_TIME = v110->static_fields->DEFAULT_FADE_TIME;
                }
                result[1] = 0;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                if ( !byte_4DFE666 )
                {
                  sub_1CE6700(&TerminalSceneComponent_TypeInfo);
                  byte_4DFE666 = 1;
                }
                updated = (__int64)TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v111 = **(_QWORD **)(updated + 184);
                if ( *(int *)(v108 + 24) >= 2
                  && (updated = System_Int32__TryParse(*(System_String_o **)(v108 + 40), &result[1], 0),
                      (updated & 1) != 0) )
                {
                  if ( !v111 )
                    goto LABEL_1326;
                  v112 = result[1];
                  *(float *)(v111 + 412) = DEFAULT_FADE_TIME;
                  *(_DWORD *)(v111 + 476) = v112;
                }
                else
                {
                  v112 = result[1];
                }
                if ( v112 == 3 && *(int *)(v108 + 24) >= 5 )
                {
                  updated = System_Single__TryParse(*(System_String_o **)(v108 + 48), (float *)result, 0);
                  if ( (updated & 1) != 0 )
                  {
                    if ( *(_DWORD *)(v108 + 24) <= 3u )
                      goto LABEL_1327;
                    updated = System_Single__TryParse(*(System_String_o **)(v108 + 56), (float *)&v877 + 1, 0);
                    if ( (updated & 1) != 0 )
                    {
                      if ( *(_DWORD *)(v108 + 24) <= 4u )
                        goto LABEL_1327;
                      updated = System_Single__TryParse(*(System_String_o **)(v108 + 64), (float *)&v877, 0);
                      if ( (updated & 1) != 0 )
                      {
                        if ( !v111 )
                          goto LABEL_1326;
                        v283 = HIDWORD(v877);
                        v282 = result[0];
                        v284 = v877;
                        *(_DWORD *)(v111 + 492) = 1065353216;
                        *(_DWORD *)(v111 + 480) = v282;
                        *(_DWORD *)(v111 + 484) = v283;
                        *(_DWORD *)(v111 + 488) = v284;
                      }
                    }
                  }
                }
                if ( !*v14 )
                  goto LABEL_1326;
                (*v14)->fields._IsAfterFadeInPlay_k__BackingField = 1;
                v285 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
                System_Action___ctor(
                  v285,
                  (Il2CppObject *)v5,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__23__,
                  0);
                if ( !v111 )
                  goto LABEL_1326;
                v286 = (TerminalSceneComponent_o *)v111;
                v287 = DEFAULT_FADE_TIME;
                v288 = v285;
LABEL_398:
                TerminalSceneComponent__Fadein_MapDisp(v286, v287, v288, 0);
                return;
              }
            }
          }
          else
          {
            if ( id == 530 )
            {
              v197 = sub_1CE694C(QuestAfterAction_StateMain___c__DisplayClass16_16_TypeInfo);
              QuestAfterAction_StateMain___c__DisplayClass16_16___ctor(
                (QuestAfterAction_StateMain___c__DisplayClass16_16_o *)v197,
                0);
              if ( !v197 )
                goto LABEL_1326;
              *(_QWORD *)(v197 + 32) = v5;
              v204 = v197 + 32;
              sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v197 + 32), v5, v198, v199, v200, v201, v202, v203);
              v205 = System_Int32__Parse(v23->fields.param, 0);
              updated = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !updated )
                goto LABEL_1326;
              updated = (__int64)DataManager__GetMasterData_object_(
                                   (DataManager_o *)updated,
                                   (const MethodInfo_32043A8 *)Method_DataManager_GetMasterData_QuestMaster___);
              if ( !updated )
                goto LABEL_1326;
              v206 = DataMasterBase_object__object__int___GetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
                       v205,
                       (const MethodInfo_34E925C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
              *(_QWORD *)(v197 + 16) = v206;
              v207 = (__int64 *)(v197 + 16);
              sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v197 + 16), (int32_t)v206, v208, v209, v210, v211, v212, v213);
              updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_QuestTree__get_Instance__);
              if ( !updated )
                goto LABEL_1326;
              QuestInfo = QuestTree__GetQuestInfo((QuestTree_o *)updated, v205, 0);
              *(_QWORD *)(v197 + 24) = QuestInfo;
              v215 = v197 + 24;
              sub_1CE66A4(
                (GrandQuestFolderBoardItem_o *)(v197 + 24),
                (int32_t)QuestInfo,
                v216,
                v217,
                v218,
                v219,
                v220,
                v221);
              if ( !*(_QWORD *)(v197 + 24) )
                goto LABEL_1326;
              if ( *(_DWORD *)(*(_QWORD *)(v197 + 24) + 32LL) == 1 )
              {
                updated = *v207;
                if ( !*v207 )
                  goto LABEL_1326;
                if ( QuestEntity__HasFlag((QuestEntity_o *)updated, 2, 0) )
                {
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  if ( !byte_4E01220 )
                  {
                    sub_1CE6700(&TerminalPramsManager_TypeInfo);
                    byte_4E01220 = 1;
                  }
                  updated = (__int64)TerminalPramsManager_TypeInfo;
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    updated = (__int64)TerminalPramsManager_TypeInfo;
                  }
                  *(_DWORD *)(*(_QWORD *)(updated + 184) + 20LL) = v205;
                  if ( !*(_QWORD *)v215 )
                    goto LABEL_1326;
                  v223 = *(_DWORD *)(*(_QWORD *)v215 + 44LL);
                  if ( !byte_4E01224 )
                  {
                    sub_1CE6700(&TerminalPramsManager_TypeInfo);
                    updated = (__int64)TerminalPramsManager_TypeInfo;
                    byte_4E01224 = 1;
                  }
                  if ( !*(_DWORD *)(updated + 224) )
                  {
                    j_il2cpp_runtime_class_init_0(updated);
                    updated = (__int64)TerminalPramsManager_TypeInfo;
                  }
                  *(_DWORD *)(*(_QWORD *)(updated + 184) + 24LL) = v223;
                  if ( !*(_QWORD *)v204 )
                    goto LABEL_1326;
                  v224 = *(_QWORD *)(*(_QWORD *)v204 + 24LL);
                  if ( !v224 )
                    goto LABEL_1326;
                  *(_BYTE *)(v224 + 205) = 1;
                  v225 = (NetworkManager_ResultCallbackFunc_o *)sub_1CE694C(NetworkManager_ResultCallbackFunc_TypeInfo);
                  NetworkManager_ResultCallbackFunc___ctor(
                    v225,
                    (Il2CppObject *)v197,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__24__,
                    0);
                  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
                  Request_object = NetworkManager__getRequest_object_(
                                     v225,
                                     (const MethodInfo_328F954 *)Method_NetworkManager_getRequest_BattleSetupScenarioRequest___);
                  if ( !byte_4DFE737 )
                  {
                    sub_1CE6700(&TerminalPramsManager_TypeInfo);
                    byte_4DFE737 = 1;
                  }
                  updated = (__int64)TerminalPramsManager_TypeInfo;
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    updated = (__int64)TerminalPramsManager_TypeInfo;
                  }
                  v227 = *(_DWORD *)(*(_QWORD *)(updated + 184) + 20LL);
                  if ( !byte_4DFE736 )
                  {
                    sub_1CE6700(&TerminalPramsManager_TypeInfo);
                    updated = (__int64)TerminalPramsManager_TypeInfo;
                    byte_4DFE736 = 1;
                  }
                  if ( !*(_DWORD *)(updated + 224) )
                  {
                    j_il2cpp_runtime_class_init_0(updated);
                    updated = (__int64)TerminalPramsManager_TypeInfo;
                  }
                  if ( !Request_object )
                    goto LABEL_1326;
                  BattleSetupScenarioRequest__beginRequest(
                    (BattleSetupScenarioRequest_o *)Request_object,
                    v227,
                    *(_DWORD *)(*(_QWORD *)(updated + 184) + 24LL) + 1,
                    0);
                }
              }
              else
              {
                QuestAfterAction_StateMain__ForceEndAnim(this, 1, v222);
              }
              return;
            }
            if ( id != 540 )
              goto LABEL_21;
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1326;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1326;
            v36 = updated;
            if ( *(_DWORD *)(updated + 24) )
            {
              v37 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
              if ( *(int *)(v36 + 24) >= 2 )
              {
                if ( System_Int32__TryParse(*(System_String_o **)(v36 + 40), &v876[1], 0) )
                  v39 = v876[1];
                else
                  v39 = -1;
                if ( *(int *)(v36 + 24) >= 3 )
                {
                  if ( System_Int32__TryParse(*(System_String_o **)(v36 + 48), v876, 0) )
                    v38 = v876[0];
                  else
                    v38 = -1;
                  if ( *(int *)(v36 + 24) >= 4 )
                  {
                    v642 = System_Int32__TryParse(*(System_String_o **)(v36 + 56), &v875, 0);
                    if ( v875 >= 1 && v642 )
                    {
                      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                      if ( !byte_4E014FD )
                      {
                        sub_1CE6700(&TerminalPramsManager_TypeInfo);
                        byte_4E014FD = 1;
                      }
                      v643 = TerminalPramsManager_TypeInfo;
                      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                        v643 = TerminalPramsManager_TypeInfo;
                      }
                      v643->static_fields->_IsFirstFadeMap_k__BackingField = 1;
                    }
                  }
                }
                else
                {
                  v38 = -1;
                }
              }
              else
              {
                v38 = -1;
                v39 = -1;
              }
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4DFF129 )
              {
                sub_1CE6700(&TerminalPramsManager_TypeInfo);
                byte_4DFF129 = 1;
              }
              v644 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v644 = TerminalPramsManager_TypeInfo;
              }
              v644->static_fields->_IsAutoResume_k__BackingField = 1;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4DFE666 )
              {
                sub_1CE6700(&TerminalSceneComponent_TypeInfo);
                byte_4DFE666 = 1;
              }
              updated = (__int64)TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                updated = (__int64)TerminalSceneComponent_TypeInfo;
              }
              v645 = **(_QWORD **)(updated + 184);
              if ( !v645 )
                goto LABEL_1326;
              updated = *(_QWORD *)(v645 + 264);
              if ( !updated )
                goto LABEL_1326;
              if ( !ScrTerminalMap__RequestMapChange((ScrTerminalMap_o *)updated, v37, v39, v38, 0) )
              {
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                if ( !byte_4DFF129 )
                {
                  sub_1CE6700(&TerminalPramsManager_TypeInfo);
                  byte_4DFF129 = 1;
                }
                v647 = TerminalPramsManager_TypeInfo;
                if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v647 = TerminalPramsManager_TypeInfo;
                }
                v647->static_fields->_IsAutoResume_k__BackingField = 0;
                goto LABEL_21;
              }
              ((void (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
                this,
                this->klass->vtable._14_EndAnim.method);
              updated = (__int64)*v14;
              if ( !*v14 )
                goto LABEL_1326;
              QuestAfterAction__SetState((QuestAfterAction_o *)updated, 0, v646);
              return;
            }
          }
          goto LABEL_1327;
        }
        switch ( id )
        {
          case 400:
            v64 = sub_1CE694C(QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo);
            QuestAfterAction_StateMain___c__DisplayClass16_10___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_10_o *)v64,
              0);
            if ( !v64 )
              goto LABEL_1326;
            *(_QWORD *)(v64 + 24) = v5;
            v71 = v64 + 24;
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v64 + 24), v5, v65, v66, v67, v68, v69, v70);
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1326;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1326;
            v72 = *(_QWORD *)(updated + 24);
            v73 = updated;
            if ( v72 )
            {
              if ( !(_DWORD)v72 )
                goto LABEL_1327;
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
              v74 = updated;
              if ( *(int *)(v73 + 24) >= 2 )
              {
                updated = System_Int32__Parse(*(System_String_o **)(v73 + 40), 0);
                v75 = (int)updated < 1;
                if ( *(int *)(v73 + 24) < 3 )
                {
                  v76 = 0;
                }
                else
                {
                  updated = System_Int32__Parse(*(System_String_o **)(v73 + 48), 0);
                  v76 = (int)updated > 0;
                }
                goto LABEL_1124;
              }
            }
            else
            {
              v74 = 0;
            }
            v76 = 0;
            v75 = 1;
LABEL_1124:
            if ( !*(_QWORD *)v71 )
              goto LABEL_1326;
            updated = *(_QWORD *)(*(_QWORD *)v71 + 24LL);
            if ( !updated )
              goto LABEL_1326;
            v705 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v74,
                     this,
                     (const MethodInfo_329DB4C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v64 + 16) = v705;
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v64 + 16), (int32_t)v705, v706, v707, v708, v709, v710, v711);
            v712 = *(UnityEngine_Object_o **)(v64 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality(v712, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            v713 = *(MapGimmickComponent_o **)(v64 + 16);
            if ( !v713 )
              goto LABEL_1326;
            v713->fields.isForceNotActive = v76;
            v714 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
            v715 = v714;
            if ( v75 )
            {
              System_Action___ctor(
                v714,
                (Il2CppObject *)v64,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__14__,
                0);
              v486 = 2;
              v716 = v713;
              v717 = v715;
LABEL_1229:
              MapGimmickComponent__SetState(v716, v486, v717, v485);
              return;
            }
            System_Action___ctor(
              v714,
              (Il2CppObject *)v64,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__13__,
              0);
            MapGimmickComponent__SetState(v713, 2, v715, v811);
            updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
                        this,
                        this->klass->vtable._14_EndAnim.method);
            v812 = *(_QWORD *)(v64 + 24);
            if ( !v812 )
              goto LABEL_1326;
            goto LABEL_1238;
          case 401:
            v394 = sub_1CE694C(QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo);
            QuestAfterAction_StateMain___c__DisplayClass16_11___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_11_o *)v394,
              0);
            if ( !v394 )
              goto LABEL_1326;
            *(_QWORD *)(v394 + 24) = v5;
            v401 = v394 + 24;
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v394 + 24), v5, v395, v396, v397, v398, v399, v400);
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1326;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1326;
            v402 = *(_QWORD *)(updated + 24);
            v403 = updated;
            if ( v402 )
            {
              if ( !(_DWORD)v402 )
                goto LABEL_1327;
              updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
              v404 = updated;
              if ( *(int *)(v403 + 24) >= 2 )
              {
                updated = System_Int32__Parse(*(System_String_o **)(v403 + 40), 0);
                v405 = (int)updated < 1;
                if ( *(int *)(v403 + 24) < 3 )
                {
                  v406 = 0;
                }
                else
                {
                  updated = System_Int32__Parse(*(System_String_o **)(v403 + 48), 0);
                  v406 = (int)updated > 0;
                }
                goto LABEL_1134;
              }
            }
            else
            {
              v404 = 0;
            }
            v406 = 0;
            v405 = 1;
LABEL_1134:
            if ( !*(_QWORD *)v401 )
              goto LABEL_1326;
            updated = *(_QWORD *)(*(_QWORD *)v401 + 24LL);
            if ( !updated )
              goto LABEL_1326;
            v718 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v404,
                     this,
                     (const MethodInfo_329DB4C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v394 + 16) = v718;
            v719 = (MapGimmickComponent_o **)(v394 + 16);
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v394 + 16), (int32_t)v718, v720, v721, v722, v723, v724, v725);
            v726 = *(UnityEngine_Object_o **)(v394 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality(v726, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            v727 = *v719;
            if ( !*v719 )
              goto LABEL_1326;
            v727->fields.isForceLoop = v406;
            v727->fields.isForceNotActive = 0;
            if ( *(int *)(v403 + 24) >= 4 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v403 + 56), 0);
              if ( !*v719 )
                goto LABEL_1326;
              MapGimmickComponent__SetUseAnimNum(*v719, updated, 1, v728);
              v727 = *v719;
            }
            v729 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
            v457 = v729;
            if ( v405 )
            {
              System_Action___ctor(
                v729,
                (Il2CppObject *)v394,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__16__,
                0);
              if ( !v727 )
                goto LABEL_1326;
              v486 = 3;
              v716 = v727;
LABEL_1228:
              v717 = v457;
              goto LABEL_1229;
            }
            System_Action___ctor(
              v729,
              (Il2CppObject *)v394,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__15__,
              0);
            if ( !v727 )
              goto LABEL_1326;
            MapGimmickComponent__SetState(v727, 3, v457, v813);
            updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
                        this,
                        this->klass->vtable._14_EndAnim.method);
            v812 = *(_QWORD *)v401;
            if ( !*(_QWORD *)v401 )
              goto LABEL_1326;
LABEL_1238:
            ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, const MethodInfo *))this->klass->vtable._13_UpdateAnim.methodPtr)(
              this,
              *(_QWORD *)(v812 + 24),
              this->klass->vtable._13_UpdateAnim.method);
            return;
          case 402:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1326;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1326;
            v382 = *(_QWORD *)(updated + 24);
            v383 = updated;
            if ( v382 )
            {
              if ( !(_DWORD)v382 )
                goto LABEL_1327;
              v384 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
              if ( *(int *)(v383 + 24) >= 2 )
              {
                v385 = System_Int32__Parse(*(System_String_o **)(v383 + 40), 0) > 0;
                goto LABEL_1106;
              }
            }
            else
            {
              v384 = 0;
            }
            v385 = 0;
LABEL_1106:
            updated = (__int64)*v14;
            if ( !*v14 )
              goto LABEL_1326;
            v700 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v384,
                     this,
                     (const MethodInfo_329DB4C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v700, 0, 0);
            if ( (updated & 1) == 0 )
            {
              if ( !v700 )
                goto LABEL_1326;
              BYTE1(v700[6].monitor) = v385;
              MapGimmickComponent__SetDispAnim_37229312((MapGimmickComponent_o *)v700, 0, 0.0, 0, v701);
              m_CachedPtr = (intptr_t)v700[7].klass;
              if ( !m_CachedPtr )
                goto LABEL_1326;
LABEL_1192:
              *(_DWORD *)(m_CachedPtr + 16) = 0;
              goto LABEL_21;
            }
            return;
          case 403:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1326;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1326;
            v386 = *(_QWORD *)(updated + 24);
            v387 = updated;
            if ( v386 )
            {
              if ( !(_DWORD)v386 )
                goto LABEL_1327;
              v388 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
              if ( *(int *)(v387 + 24) >= 2 )
              {
                v389 = System_Int32__Parse(*(System_String_o **)(v387 + 40), 0) > 0;
                goto LABEL_1115;
              }
            }
            else
            {
              v388 = 0;
            }
            v389 = 0;
LABEL_1115:
            updated = (__int64)*v14;
            if ( !*v14 )
              goto LABEL_1326;
            v702 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v388,
                     this,
                     (const MethodInfo_329DB4C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v702, 0, 0);
            if ( (updated & 1) == 0 )
            {
              if ( !v702 )
                goto LABEL_1326;
              LOBYTE(v702[6].monitor) = v389;
              BYTE1(v702[6].monitor) = 0;
              MapGimmickComponent__SetDispAnim_37229312((MapGimmickComponent_o *)v702, 1, 0.0, 0, v703);
              v704 = v702[7].klass;
              if ( !v704 )
                goto LABEL_1326;
              LODWORD(v704->_1.name) = 1;
              goto LABEL_21;
            }
            return;
          case 404:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1326;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1326;
            v361 = updated;
            if ( *(int *)(updated + 24) <= 4 )
              goto LABEL_1222;
            v362 = System_Single__Parse(*(System_String_o **)(updated + 56), 0);
            if ( !*(_DWORD *)(v361 + 24) )
              goto LABEL_1327;
            v363 = *v14;
            v364 = v362;
            updated = System_Int32__Parse(*(System_String_o **)(v361 + 32), 0);
            if ( !v363 )
              goto LABEL_1326;
            v365 = QuestAfterAction__GetMapComponent_object_(
                     v363,
                     2,
                     updated,
                     this,
                     (const MethodInfo_329DB4C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v365, 0, 0) )
              return;
            v366 = *(int *)(v361 + 24) >= 6 && System_Int32__Parse(*(System_String_o **)(v361 + 72), 0) > 0;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4DFE666 )
            {
              sub_1CE6700(&TerminalSceneComponent_TypeInfo);
              byte_4DFE666 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v833 = **(_QWORD **)(updated + 184);
            if ( !v833 )
              goto LABEL_1326;
            if ( *(_DWORD *)(v361 + 24) <= 1u )
              goto LABEL_1327;
            v834 = *(ScrTerminalMap_o **)(v833 + 264);
            v835 = System_Single__Parse(*(System_String_o **)(v361 + 40), 0);
            if ( *(_DWORD *)(v361 + 24) <= 2u )
              goto LABEL_1327;
            v836 = v835;
            v837 = System_Single__Parse(*(System_String_o **)(v361 + 48), 0);
            if ( !v834 )
              goto LABEL_1326;
            v902 = ScrTerminalMap__LocalPosFromCoord(v834, v836, v837, 0.0, 0.0, 0);
            if ( *(_DWORD *)(v361 + 24) <= 4u )
              goto LABEL_1327;
            x = v902.fields.x;
            y = v902.fields.y;
            z = v902.fields.z;
            v841 = v364 * 0.001;
            updated = System_Int32__Parse(*(System_String_o **)(v361 + 64), 0);
            v843 = updated;
            if ( v366 )
            {
              if ( !v365 )
                goto LABEL_1326;
              v903.fields.x = x;
              v903.fields.y = y;
              v903.fields.z = z;
              MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v365, v903, v841, updated, 0, v842);
              goto LABEL_1222;
            }
            v844 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
            System_Action___ctor(v844, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
            if ( !v365 )
              goto LABEL_1326;
            v803 = (MapGimmickComponent_o *)v365;
            v804 = x;
            v805 = y;
            v806 = z;
            v807 = v841;
            v808 = v843;
            v809 = v844;
LABEL_1300:
            MapGimmickComponent__SetMoveAnim(v803, *(UnityEngine_Vector3_o *)&v804, v807, v808, v809, v802);
            return;
          case 405:
            v407 = sub_1CE694C(QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo);
            QuestAfterAction_StateMain___c__DisplayClass16_12___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_12_o *)v407,
              0);
            if ( !v407 )
              goto LABEL_1326;
            *(_QWORD *)(v407 + 24) = v5;
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v407 + 24), v5, v408, v409, v410, v411, v412, v413);
            v414 = *(_QWORD *)(v407 + 24);
            if ( !v414 )
              goto LABEL_1326;
            v415 = *(QuestAfterAction_o **)(v414 + 24);
            updated = System_Int32__Parse(v23->fields.param, 0);
            if ( !v415 )
              goto LABEL_1326;
            v416 = QuestAfterAction__GetMapComponent_object_(
                     v415,
                     2,
                     updated,
                     this,
                     (const MethodInfo_329DB4C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v407 + 16) = v416;
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v407 + 16), (int32_t)v416, v417, v418, v419, v420, v421, v422);
            v423 = *(UnityEngine_Object_o **)(v407 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v423, 0, 0) )
              return;
            v424 = *(MapGimmickComponent_o **)(v407 + 16);
            v425 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
            System_Action___ctor(
              v425,
              (Il2CppObject *)v407,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__17__,
              0);
            if ( !v424 )
              goto LABEL_1326;
            MapGimmickComponent__SetState(v424, 3, v425, v426);
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4DFE666 )
            {
              sub_1CE6700(&TerminalSceneComponent_TypeInfo);
              byte_4DFE666 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v427 = **(TerminalSceneComponent_o ***)(updated + 184);
            if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            if ( !v427 )
              goto LABEL_1326;
            v286 = v427;
            v288 = 0;
            v287 = AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME;
            goto LABEL_398;
          case 406:
            v428 = sub_1CE694C(QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo);
            QuestAfterAction_StateMain___c__DisplayClass16_13___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_13_o *)v428,
              0);
            if ( !v428 )
              goto LABEL_1326;
            *(_QWORD *)(v428 + 32) = v5;
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v428 + 32), v5, v429, v430, v431, v432, v433, v434);
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1326;
            v435 = System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            *(_QWORD *)(v428 + 24) = v435;
            v436 = (__int64 *)(v428 + 24);
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v428 + 24), (int32_t)v435, v437, v438, v439, v440, v441, v442);
            v443 = *(_QWORD *)(v428 + 32);
            if ( !v443 )
              goto LABEL_1326;
            v444 = *v436;
            if ( !*v436 )
              goto LABEL_1326;
            if ( !*(_DWORD *)(v444 + 24) )
              goto LABEL_1327;
            v445 = *(QuestAfterAction_o **)(v443 + 24);
            updated = System_Int32__Parse(*(System_String_o **)(v444 + 32), 0);
            if ( !v445 )
              goto LABEL_1326;
            v446 = QuestAfterAction__GetMapComponent_object_(
                     v445,
                     2,
                     updated,
                     this,
                     (const MethodInfo_329DB4C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v428 + 16) = v446;
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v428 + 16), (int32_t)v446, v447, v448, v449, v450, v451, v452);
            v453 = *(UnityEngine_Object_o **)(v428 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v453, 0, 0) )
              return;
            v454 = *(MapGimmickComponent_o **)(v428 + 16);
            v455 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
            v456 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__18__;
            v457 = v455;
            goto LABEL_690;
          case 407:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1326;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1326;
            v390 = updated;
            if ( !*(_DWORD *)(updated + 24) )
              goto LABEL_1327;
            v391 = *v14;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            if ( !v391 )
              goto LABEL_1326;
            v392 = QuestAfterAction__GetMapComponent_object_(
                     v391,
                     2,
                     updated,
                     this,
                     (const MethodInfo_329DB4C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v392, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            if ( !v392 )
              goto LABEL_1326;
            updated = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v392, 0);
            if ( !updated )
              goto LABEL_1326;
            updated = (__int64)UnityEngine_GameObject__GetComponentInChildren_object_(
                                 (UnityEngine_GameObject_o *)updated,
                                 (const MethodInfo_325C0A0 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
            if ( *(_DWORD *)(v390 + 24) <= 1u )
              goto LABEL_1327;
            v393 = (UIWidget_o *)updated;
            updated = UnityEngine_ColorUtility__TryParseHtmlString(*(System_String_o **)(v390 + 40), &color, 0);
            if ( !v393 )
              goto LABEL_1326;
            UIWidget__set_color(v393, color, 0);
            goto LABEL_1222;
          case 408:
            v428 = sub_1CE694C(QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo);
            QuestAfterAction_StateMain___c__DisplayClass16_15___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_15_o *)v428,
              0);
            if ( !v428 )
              goto LABEL_1326;
            *(_QWORD *)(v428 + 24) = v5;
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v428 + 24), v5, v466, v467, v468, v469, v470, v471);
            v472 = *(_QWORD *)(v428 + 24);
            if ( !v472 )
              goto LABEL_1326;
            v473 = *(QuestAfterAction_o **)(v472 + 24);
            updated = System_Int32__Parse(v23->fields.param, 0);
            if ( !v473 )
              goto LABEL_1326;
            v474 = QuestAfterAction__GetMapComponent_object_(
                     v473,
                     2,
                     updated,
                     this,
                     (const MethodInfo_329DB4C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v428 + 16) = v474;
            v475 = v428 + 16;
            sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v428 + 16), (int32_t)v474, v476, v477, v478, v479, v480, v481);
            v482 = *(UnityEngine_Object_o **)(v428 + 16);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v482, 0, 0) )
              return;
            updated = (__int64)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( !*(_QWORD *)v475 || !updated )
              goto LABEL_1326;
            v483 = QuestTree__CheckMapGimmickCond_37625304(
                     (QuestTree_o *)updated,
                     *(MapControl_MapGimmickInfo_o **)(*(_QWORD *)v475 + 112LL),
                     0);
            v454 = *(MapGimmickComponent_o **)v475;
            v484 = v483;
            v455 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
            v457 = v455;
            if ( v484 )
            {
              v456 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__20__;
LABEL_690:
              System_Action___ctor(v455, (Il2CppObject *)v428, *v456, 0);
              if ( !v454 )
                goto LABEL_1326;
              v486 = 3;
            }
            else
            {
              System_Action___ctor(
                v455,
                (Il2CppObject *)v428,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__21__,
                0);
              if ( !v454 )
                goto LABEL_1326;
              v486 = 2;
            }
            v716 = v454;
            goto LABEL_1228;
          case 409:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1326;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1326;
            v373 = *(_QWORD *)(updated + 24);
            v374 = updated;
            if ( v373 )
            {
              if ( !(_DWORD)v373 )
                goto LABEL_1327;
              v375 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
              if ( *(int *)(v374 + 24) >= 2 )
              {
                v376 = System_Int32__Parse(*(System_String_o **)(v374 + 40), 0) > 0;
                goto LABEL_1097;
              }
            }
            else
            {
              v375 = 0;
            }
            v376 = 0;
LABEL_1097:
            updated = (__int64)*v14;
            if ( !*v14 )
              goto LABEL_1326;
            v694 = QuestAfterAction__GetMapComponent_object_(
                     (QuestAfterAction_o *)updated,
                     2,
                     v375,
                     this,
                     (const MethodInfo_329DB4C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v694, 0, 0);
            if ( (updated & 1) == 0 )
            {
              if ( !v694 )
                goto LABEL_1326;
              LOBYTE(v694[6].monitor) = v376;
              BYTE1(v694[6].monitor) = 0;
              AnimTime = MapGimmickComponent__GetAnimTime((MapGimmickComponent_o *)v694, v7);
              MapGimmickComponent__SetDispAnim_37229312((MapGimmickComponent_o *)v694, 1, AnimTime, 1, v696);
              v697 = v694[7].klass;
              if ( !v697 )
                goto LABEL_1326;
              LODWORD(v697->_1.name) = 1;
              v698 = this->klass;
              this->fields.IsAnimDoing = 0;
              v699 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))v698->vtable._11_get_CommandIndex.methodPtr)(
                       this,
                       v698->vtable._11_get_CommandIndex.method);
              ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, const MethodInfo *))this->klass->vtable._12_set_CommandIndex.methodPtr)(
                this,
                (unsigned int)(v699 + 1),
                this->klass->vtable._12_set_CommandIndex.method);
              goto LABEL_22;
            }
            return;
          case 410:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1326;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1326;
            v352 = updated;
            if ( *(int *)(updated + 24) <= 2 )
              goto LABEL_1222;
            v458 = *v14;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            if ( !v458 )
              goto LABEL_1326;
            v354 = QuestAfterAction__GetMapComponent_object_(
                     v458,
                     2,
                     updated,
                     this,
                     (const MethodInfo_329DB4C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v354, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            if ( *(_DWORD *)(v352 + 24) <= 1u )
              goto LABEL_1327;
            v459 = *v14;
            updated = System_Int32__Parse(*(System_String_o **)(v352 + 40), 0);
            if ( !v459 )
              goto LABEL_1326;
            v370 = updated;
            v372 = v459;
            v371 = 0;
            goto LABEL_658;
          case 411:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1326;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1326;
            v352 = updated;
            if ( *(int *)(updated + 24) <= 2 )
              goto LABEL_1222;
            v353 = *v14;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            if ( !v353 )
              goto LABEL_1326;
            v354 = QuestAfterAction__GetMapComponent_object_(
                     v353,
                     2,
                     updated,
                     this,
                     (const MethodInfo_329DB4C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v354, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            if ( *(_DWORD *)(v352 + 24) <= 1u )
              goto LABEL_1327;
            v355 = *v14;
            updated = System_Int32__Parse(*(System_String_o **)(v352 + 40), 0);
            if ( !v355 )
              goto LABEL_1326;
            MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v355, 2, updated, this, v356);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(MapGameObject, 0, 0) )
              return;
            LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)MapGameObject, 0);
            if ( *(_DWORD *)(v352 + 24) <= 2u )
              goto LABEL_1327;
            v358 = LocalPosition.fields.x;
            v359 = LocalPosition.fields.y;
            v360 = LocalPosition.fields.z;
            goto LABEL_672;
          case 412:
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1326;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1326;
            v352 = updated;
            if ( *(int *)(updated + 24) <= 2 )
              goto LABEL_1222;
            v367 = *v14;
            updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            if ( !v367 )
              goto LABEL_1326;
            v354 = QuestAfterAction__GetMapComponent_object_(
                     v367,
                     2,
                     updated,
                     this,
                     (const MethodInfo_329DB4C *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v354, 0, 0);
            if ( (updated & 1) != 0 )
              return;
            if ( *(_DWORD *)(v352 + 24) <= 1u )
              goto LABEL_1327;
            v368 = *v14;
            updated = System_Int32__Parse(*(System_String_o **)(v352 + 40), 0);
            if ( !v368 )
              goto LABEL_1326;
            v370 = updated;
            v371 = 1;
            v372 = v368;
LABEL_658:
            v460 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v372, v371, v370, this, v369);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( UnityEngine_Object__op_Equality(v460, 0, 0) )
              return;
            v889 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v460, 0);
            v358 = v889.fields.x;
            v359 = v889.fields.y;
            v360 = v889.fields.z;
            if ( !this->fields.IsMapModel )
              goto LABEL_671;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4DFE666 )
            {
              sub_1CE6700(&TerminalSceneComponent_TypeInfo);
              byte_4DFE666 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v461 = **(_QWORD **)(updated + 184);
            if ( !v461 )
              goto LABEL_1326;
            updated = *(_QWORD *)(v461 + 264);
            if ( !updated )
              goto LABEL_1326;
            v890.fields.x = v358;
            v890.fields.y = v359;
            v890.fields.z = v360;
            v891 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v890, 0);
            v358 = v891.fields.x;
            v359 = v891.fields.y;
            v360 = v891.fields.z;
LABEL_671:
            if ( *(_DWORD *)(v352 + 24) <= 2u )
              goto LABEL_1327;
LABEL_672:
            v462 = System_Single__Parse(*(System_String_o **)(v352 + 48), 0) * 0.001;
            if ( v462 >= 0.0 )
              v463 = v462;
            else
              v463 = 0.5;
            if ( *(_DWORD *)(v352 + 24) <= 3u )
              goto LABEL_1327;
            v464 = System_Int32__Parse(*(System_String_o **)(v352 + 56), 0);
            if ( *(int *)(v352 + 24) >= 5 )
            {
              updated = System_Int32__Parse(*(System_String_o **)(v352 + 64), 0);
              if ( (int)updated >= 1 )
              {
                if ( !v354 )
                  goto LABEL_1326;
                v892.fields.x = v358;
                v892.fields.y = v359;
                v892.fields.z = v360;
                MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v354, v892, v463, v464, 0, v465);
                goto LABEL_21;
              }
            }
            v801 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
            System_Action___ctor(v801, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
            if ( !v354 )
              goto LABEL_1326;
            v803 = (MapGimmickComponent_o *)v354;
            v804 = v358;
            v805 = v359;
            v806 = v360;
            v807 = v463;
            v808 = v464;
            v809 = v801;
            goto LABEL_1300;
          default:
            if ( id == 500 )
            {
              v377 = System_Int32__Parse(v23->fields.param, 0);
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              if ( !byte_4E014FB )
              {
                sub_1CE6700(&TerminalPramsManager_TypeInfo);
                byte_4E014FB = 1;
              }
              v378 = TerminalPramsManager_TypeInfo;
              if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v378 = TerminalPramsManager_TypeInfo;
              }
              v378->static_fields->_AfterActionFocusQuestId_k__BackingField = v377;
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              updated = (__int64)DataManager__GetMaster_object_((const MethodInfo_3204354 *)Method_DataManager_GetMaster_QuestMaster___);
              if ( !updated )
                goto LABEL_1326;
              if ( DataMasterBase_object__object__int___TryGetEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)updated,
                     &entity,
                     v377,
                     (const MethodInfo_34E92A8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
              {
                updated = (__int64)entity;
                if ( !entity )
                  goto LABEL_1326;
                v379 = *v14;
                updated = QuestEntity__getSpotId((QuestEntity_o *)entity, 0);
                if ( !v379 )
                  goto LABEL_1326;
                v380 = QuestAfterAction__GetMapComponent_object_(
                         v379,
                         0,
                         updated,
                         this,
                         (const MethodInfo_329DB4C *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v380, 0, 0);
                if ( (updated & 1) != 0 )
                {
                  if ( !v380 )
                    goto LABEL_1326;
                  SrcSpotBasePrefab__SelectSpot((SrcSpotBasePrefab_o *)v380, 0, 0);
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  if ( !byte_4E014FC )
                  {
                    sub_1CE6700(&TerminalPramsManager_TypeInfo);
                    byte_4E014FC = 1;
                  }
                  v381 = TerminalPramsManager_TypeInfo;
                  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                    v381 = TerminalPramsManager_TypeInfo;
                  }
                  v381->static_fields->_IsBackQuestBoardDisable_k__BackingField = 1;
                }
              }
            }
            else
            {
              if ( id != 501 )
                goto LABEL_21;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4DFE666 )
              {
                sub_1CE6700(&TerminalSceneComponent_TypeInfo);
                byte_4DFE666 = 1;
              }
              updated = (__int64)TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                updated = (__int64)TerminalSceneComponent_TypeInfo;
              }
              v157 = **(_QWORD **)(updated + 184);
              if ( !v157 )
                goto LABEL_1326;
              updated = *(_QWORD *)(v157 + 256);
              if ( !updated )
                goto LABEL_1326;
              updated = (__int64)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)updated, 0);
              if ( !updated )
                goto LABEL_1326;
              v158 = (PlayMakerFSM_o *)updated;
              ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)updated, 0);
              if ( System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_3317/*"CAPTER WAIT"*/, 0) )
              {
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                if ( !byte_4DFE666 )
                {
                  sub_1CE6700(&TerminalSceneComponent_TypeInfo);
                  byte_4DFE666 = 1;
                }
                updated = (__int64)TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  updated = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v160 = **(_QWORD **)(updated + 184);
                if ( !v160 )
                  goto LABEL_1326;
                v161 = *(_QWORD *)(v160 + 256);
                if ( !v161 )
                  goto LABEL_1326;
                v162 = *(QuestBoardListViewManager_o **)(v161 + 320);
                updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
                if ( !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
                  updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
                }
                v163 = *(System_Action_o **)(*(_QWORD *)(updated + 184) + 8LL);
                if ( !v163 )
                {
                  if ( !*(_DWORD *)(updated + 224) )
                  {
                    j_il2cpp_runtime_class_init_0(updated);
                    updated = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
                  }
                  v164 = **(Il2CppObject ***)(updated + 184);
                  v163 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
                  System_Action___ctor(v163, v164, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_22__, 0);
                  v165 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
                  v165->__9__16_22 = v163;
                  sub_1CE66A4(
                    (GrandQuestFolderBoardItem_o *)&v165->__9__16_22,
                    (int32_t)v163,
                    v166,
                    v167,
                    v168,
                    v169,
                    v170,
                    v171);
                }
                if ( !v162 )
                  goto LABEL_1326;
                QuestBoardListViewManager__SetMode(v162, 4, v163, 0, 0, 0, 0);
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                if ( !byte_4DFE666 )
                {
                  sub_1CE6700(&TerminalSceneComponent_TypeInfo);
                  byte_4DFE666 = 1;
                }
                v172 = TerminalSceneComponent_TypeInfo;
                if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  v172 = TerminalSceneComponent_TypeInfo;
                }
                updated = (__int64)v172->static_fields->mInstance;
                if ( !updated )
                  goto LABEL_1326;
                TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)updated, 0);
                PlayMakerFSM__SendEvent(v158, (System_String_o *)StringLiteral_20141/*"gevINFOBAR_BACK"*/, 0);
              }
            }
            goto LABEL_1222;
        }
      }
      if ( id <= 208 )
      {
        switch ( id )
        {
          case 200:
            if ( this->fields.IsMapModel )
            {
              v116 = sub_1CE694C(QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo);
              QuestAfterAction_StateMain___c__DisplayClass16_4___ctor(
                (QuestAfterAction_StateMain___c__DisplayClass16_4_o *)v116,
                0);
              if ( !v116 )
                goto LABEL_1326;
              *(_QWORD *)(v116 + 24) = v5;
              sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v116 + 24), v5, v117, v118, v119, v120, v121, v122);
              v123 = *(_QWORD *)(v116 + 24);
              if ( !v123 )
                goto LABEL_1326;
              v124 = *(QuestAfterAction_o **)(v123 + 24);
              updated = System_Int32__Parse(v23->fields.param, 0);
              if ( !v124 )
                goto LABEL_1326;
              v125 = QuestAfterAction__GetMapComponent_object_(
                       v124,
                       1,
                       updated,
                       this,
                       (const MethodInfo_329DB4C *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v116 + 16) = v125;
              sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v116 + 16), (int32_t)v125, v126, v127, v128, v129, v130, v131);
              v132 = *(UnityEngine_Object_o **)(v116 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v132, 0, 0) )
              {
                v133 = *(ModelLineComponent_o **)(v116 + 16);
                v134 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
                System_Action___ctor(
                  v134,
                  (Il2CppObject *)v116,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__,
                  0);
                if ( !v133 )
                  goto LABEL_1326;
                v136 = 2;
                goto LABEL_862;
              }
            }
            else
            {
              v756 = sub_1CE694C(QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo);
              QuestAfterAction_StateMain___c__DisplayClass16_5___ctor(
                (QuestAfterAction_StateMain___c__DisplayClass16_5_o *)v756,
                0);
              if ( !v756 )
                goto LABEL_1326;
              *(_QWORD *)(v756 + 24) = v5;
              sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v756 + 24), v5, v757, v758, v759, v760, v761, v762);
              v763 = *(_QWORD *)(v756 + 24);
              if ( !v763 )
                goto LABEL_1326;
              v764 = *(QuestAfterAction_o **)(v763 + 24);
              updated = System_Int32__Parse(v23->fields.param, 0);
              if ( !v764 )
                goto LABEL_1326;
              v765 = QuestAfterAction__GetMapComponent_object_(
                       v764,
                       1,
                       updated,
                       this,
                       (const MethodInfo_329DB4C *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v756 + 16) = v765;
              sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v756 + 16), (int32_t)v765, v766, v767, v768, v769, v770, v771);
              v772 = *(UnityEngine_Object_o **)(v756 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v772, 0, 0) )
              {
                v752 = *(srcLineSprite_o **)(v756 + 16);
                v753 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
                System_Action___ctor(
                  v753,
                  (Il2CppObject *)v756,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__,
                  0);
                if ( !v752 )
                  goto LABEL_1326;
                v754 = -1.0;
                v755 = 2;
                goto LABEL_1180;
              }
            }
            return;
          case 201:
            if ( this->fields.IsMapModel )
            {
              v604 = sub_1CE694C(QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo);
              QuestAfterAction_StateMain___c__DisplayClass16_6___ctor(
                (QuestAfterAction_StateMain___c__DisplayClass16_6_o *)v604,
                0);
              if ( !v604 )
                goto LABEL_1326;
              *(_QWORD *)(v604 + 24) = v5;
              sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v604 + 24), v5, v605, v606, v607, v608, v609, v610);
              v611 = *(_QWORD *)(v604 + 24);
              if ( !v611 )
                goto LABEL_1326;
              v612 = *(QuestAfterAction_o **)(v611 + 24);
              updated = System_Int32__Parse(v23->fields.param, 0);
              if ( !v612 )
                goto LABEL_1326;
              v613 = QuestAfterAction__GetMapComponent_object_(
                       v612,
                       1,
                       updated,
                       this,
                       (const MethodInfo_329DB4C *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v604 + 16) = v613;
              sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v604 + 16), (int32_t)v613, v614, v615, v616, v617, v618, v619);
              v620 = *(UnityEngine_Object_o **)(v604 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v620, 0, 0) )
              {
                v133 = *(ModelLineComponent_o **)(v604 + 16);
                v134 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
                System_Action___ctor(
                  v134,
                  (Il2CppObject *)v604,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__,
                  0);
                if ( !v133 )
                  goto LABEL_1326;
                v136 = 3;
                goto LABEL_862;
              }
            }
            else
            {
              v773 = sub_1CE694C(QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo);
              QuestAfterAction_StateMain___c__DisplayClass16_7___ctor(
                (QuestAfterAction_StateMain___c__DisplayClass16_7_o *)v773,
                0);
              if ( !v773 )
                goto LABEL_1326;
              *(_QWORD *)(v773 + 24) = v5;
              sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v773 + 24), v5, v774, v775, v776, v777, v778, v779);
              v780 = *(_QWORD *)(v773 + 24);
              if ( !v780 )
                goto LABEL_1326;
              v781 = *(QuestAfterAction_o **)(v780 + 24);
              updated = System_Int32__Parse(v23->fields.param, 0);
              if ( !v781 )
                goto LABEL_1326;
              v782 = QuestAfterAction__GetMapComponent_object_(
                       v781,
                       1,
                       updated,
                       this,
                       (const MethodInfo_329DB4C *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v773 + 16) = v782;
              sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v773 + 16), (int32_t)v782, v783, v784, v785, v786, v787, v788);
              v789 = *(UnityEngine_Object_o **)(v773 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v789, 0, 0) )
              {
                v752 = *(srcLineSprite_o **)(v773 + 16);
                v753 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
                System_Action___ctor(
                  v753,
                  (Il2CppObject *)v773,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__,
                  0);
                if ( !v752 )
                  goto LABEL_1326;
                v754 = -1.0;
                v755 = 3;
                goto LABEL_1180;
              }
            }
            return;
          case 202:
            if ( this->fields.IsMapModel )
            {
              v580 = sub_1CE694C(QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo);
              QuestAfterAction_StateMain___c__DisplayClass16_8___ctor(
                (QuestAfterAction_StateMain___c__DisplayClass16_8_o *)v580,
                0);
              if ( !v580 )
                goto LABEL_1326;
              *(_QWORD *)(v580 + 24) = v5;
              sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v580 + 24), v5, v581, v582, v583, v584, v585, v586);
              v587 = *(_QWORD *)(v580 + 24);
              if ( !v587 )
                goto LABEL_1326;
              v588 = *(QuestAfterAction_o **)(v587 + 24);
              updated = System_Int32__Parse(v23->fields.param, 0);
              if ( !v588 )
                goto LABEL_1326;
              v589 = QuestAfterAction__GetMapComponent_object_(
                       v588,
                       1,
                       updated,
                       this,
                       (const MethodInfo_329DB4C *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v580 + 16) = v589;
              sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v580 + 16), (int32_t)v589, v590, v591, v592, v593, v594, v595);
              v596 = *(UnityEngine_Object_o **)(v580 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v596, 0, 0) )
              {
                v133 = *(ModelLineComponent_o **)(v580 + 16);
                v134 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
                System_Action___ctor(
                  v134,
                  (Il2CppObject *)v580,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__,
                  0);
                if ( !v133 )
                  goto LABEL_1326;
                v136 = 4;
LABEL_862:
                ModelLineComponent__SetState(v133, v136, v134, v135);
              }
            }
            else
            {
              v735 = sub_1CE694C(QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo);
              QuestAfterAction_StateMain___c__DisplayClass16_9___ctor(
                (QuestAfterAction_StateMain___c__DisplayClass16_9_o *)v735,
                0);
              if ( !v735 )
                goto LABEL_1326;
              *(_QWORD *)(v735 + 24) = v5;
              sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v735 + 24), v5, v736, v737, v738, v739, v740, v741);
              v742 = *(_QWORD *)(v735 + 24);
              if ( !v742 )
                goto LABEL_1326;
              v743 = *(QuestAfterAction_o **)(v742 + 24);
              updated = System_Int32__Parse(v23->fields.param, 0);
              if ( !v743 )
                goto LABEL_1326;
              v744 = QuestAfterAction__GetMapComponent_object_(
                       v743,
                       1,
                       updated,
                       this,
                       (const MethodInfo_329DB4C *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v735 + 16) = v744;
              sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v735 + 16), (int32_t)v744, v745, v746, v747, v748, v749, v750);
              v751 = *(UnityEngine_Object_o **)(v735 + 16);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              if ( !UnityEngine_Object__op_Equality(v751, 0, 0) )
              {
                v752 = *(srcLineSprite_o **)(v735 + 16);
                v753 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
                System_Action___ctor(
                  v753,
                  (Il2CppObject *)v735,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__,
                  0);
                if ( !v752 )
                  goto LABEL_1326;
                v754 = -1.0;
                v755 = 4;
LABEL_1180:
                srcLineSprite__SetState(v752, v755, v753, v754, 0);
              }
            }
            return;
          case 203:
            IsMapModel = this->fields.IsMapModel;
            v598 = *v14;
            updated = System_Int32__Parse(v23->fields.param, 0);
            if ( !v598 )
              goto LABEL_1326;
            if ( IsMapModel )
            {
              v599 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v598,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_329DB4C *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v599, 0, 0);
              if ( (updated & 1) != 0 )
                return;
              if ( !v599 )
                goto LABEL_1326;
              ModelLineComponent__SetQuestAfterActionScaleAnim_37254028((ModelLineComponent_o *)v599, 0, 0.0, v600);
              m_CachedPtr = (intptr_t)v599[3].klass;
              if ( !m_CachedPtr )
                goto LABEL_1326;
            }
            else
            {
              v792 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v598,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_329DB4C *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v792, 0, 0);
              if ( (updated & 1) != 0 )
                return;
              if ( !v792 )
                goto LABEL_1326;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v792, 0, 0);
              m_CachedPtr = v792[5].fields.m_CachedPtr;
              if ( !m_CachedPtr )
                goto LABEL_1326;
            }
            goto LABEL_1192;
          case 204:
            v574 = this->fields.IsMapModel;
            v575 = *v14;
            updated = System_Int32__Parse(v23->fields.param, 0);
            if ( !v575 )
              goto LABEL_1326;
            if ( v574 )
            {
              v576 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v575,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_329DB4C *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v576, 0, 0);
              if ( (updated & 1) != 0 )
                return;
              if ( !v576 )
                goto LABEL_1326;
              ModelLineComponent__SetQuestAfterActionScaleAnim_37254028((ModelLineComponent_o *)v576, 1, 0.0, v577);
              ModelLineComponent__SetQuestAfterActionColorAnim_37254504((ModelLineComponent_o *)v576, 0, 0.0, v578);
              v579 = (intptr_t)v576[3].klass;
              if ( !v579 )
                goto LABEL_1326;
            }
            else
            {
              v790 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v575,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_329DB4C *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v790, 0, 0);
              if ( (updated & 1) != 0 )
                return;
              if ( !v790 )
                goto LABEL_1326;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v790, 1, 0);
              srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v790, 0, 0);
              v579 = v790[5].fields.m_CachedPtr;
              if ( !v579 )
                goto LABEL_1326;
            }
            v791 = 2;
            goto LABEL_1199;
          case 205:
            v621 = this->fields.IsMapModel;
            v622 = *v14;
            updated = System_Int32__Parse(v23->fields.param, 0);
            if ( !v622 )
              goto LABEL_1326;
            if ( v621 )
            {
              v623 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v622,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_329DB4C *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v623, 0, 0);
              if ( (updated & 1) != 0 )
                return;
              if ( !v623 )
                goto LABEL_1326;
              ModelLineComponent__SetQuestAfterActionScaleAnim_37254028((ModelLineComponent_o *)v623, 1, 0.0, v624);
              ModelLineComponent__SetQuestAfterActionColorAnim_37254504((ModelLineComponent_o *)v623, 1, 0.0, v625);
              v579 = (intptr_t)v623[3].klass;
              if ( !v579 )
                goto LABEL_1326;
            }
            else
            {
              v793 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                               v622,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_329DB4C *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              updated = UnityEngine_Object__op_Equality(v793, 0, 0);
              if ( (updated & 1) != 0 )
                return;
              if ( !v793 )
                goto LABEL_1326;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v793, 1, 0);
              srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v793, 1, 0);
              v579 = v793[5].fields.m_CachedPtr;
              if ( !v579 )
                goto LABEL_1326;
            }
            v791 = 1;
LABEL_1199:
            *(_DWORD *)(v579 + 16) = v791;
            goto LABEL_21;
          case 206:
            v602 = 5;
            v626 = this;
            v627 = v23;
            v603 = 0;
            goto LABEL_874;
          case 207:
            v602 = 6;
            v603 = 2;
            goto LABEL_873;
          case 208:
            v602 = 7;
            v603 = 1;
LABEL_873:
            v626 = this;
            v627 = v23;
LABEL_874:
            QuestAfterAction_StateMain__FadeRoad(v626, v627, v602, v603, v31);
            return;
          default:
            switch ( id )
            {
              case 'd':
                v82 = sub_1CE694C(QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_1___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_1_o *)v82,
                  0);
                if ( !v82 )
                  goto LABEL_1326;
                *(_QWORD *)(v82 + 24) = v5;
                sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v82 + 24), v5, v83, v84, v85, v86, v87, v88);
                v89 = *(_QWORD *)(v82 + 24);
                if ( !v89 )
                  goto LABEL_1326;
                v90 = *(QuestAfterAction_o **)(v89 + 24);
                updated = System_Int32__Parse(v23->fields.param, 0);
                if ( !v90 )
                  goto LABEL_1326;
                v91 = QuestAfterAction__GetMapComponent_object_(
                        v90,
                        0,
                        updated,
                        this,
                        (const MethodInfo_329DB4C *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                *(_QWORD *)(v82 + 16) = v91;
                sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v82 + 16), (int32_t)v91, v92, v93, v94, v95, v96, v97);
                v98 = *(UnityEngine_Object_o **)(v82 + 16);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Equality(v98, 0, 0) )
                  return;
                v99 = *(SrcSpotBasePrefab_o **)(v82 + 16);
                v100 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
                System_Action___ctor(
                  v100,
                  (Il2CppObject *)v82,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__,
                  0);
                if ( !v99 )
                  goto LABEL_1326;
                v101 = 2;
                goto LABEL_799;
              case 'e':
                v530 = sub_1CE694C(QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_2___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_2_o *)v530,
                  0);
                if ( !v530 )
                  goto LABEL_1326;
                *(_QWORD *)(v530 + 24) = v5;
                sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v530 + 24), v5, v531, v532, v533, v534, v535, v536);
                v537 = *(_QWORD *)(v530 + 24);
                if ( !v537 )
                  goto LABEL_1326;
                v538 = *(QuestAfterAction_o **)(v537 + 24);
                updated = System_Int32__Parse(v23->fields.param, 0);
                if ( !v538 )
                  goto LABEL_1326;
                v539 = QuestAfterAction__GetMapComponent_object_(
                         v538,
                         0,
                         updated,
                         this,
                         (const MethodInfo_329DB4C *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                *(_QWORD *)(v530 + 16) = v539;
                sub_1CE66A4(
                  (GrandQuestFolderBoardItem_o *)(v530 + 16),
                  (int32_t)v539,
                  v540,
                  v541,
                  v542,
                  v543,
                  v544,
                  v545);
                v546 = *(UnityEngine_Object_o **)(v530 + 16);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Equality(v546, 0, 0) )
                  return;
                v99 = *(SrcSpotBasePrefab_o **)(v530 + 16);
                v100 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
                System_Action___ctor(
                  v100,
                  (Il2CppObject *)v530,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__,
                  0);
                if ( !v99 )
                  goto LABEL_1326;
                v101 = 3;
LABEL_799:
                SrcSpotBasePrefab__SetState(v99, v101, v100, 0);
                return;
              case 'f':
                v547 = sub_1CE694C(QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_3___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_3_o *)v547,
                  0);
                if ( !v547 )
                  goto LABEL_1326;
                *(_QWORD *)(v547 + 24) = v5;
                v554 = v547 + 24;
                sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v547 + 24), v5, v548, v549, v550, v551, v552, v553);
                if ( !*(_QWORD *)(v547 + 24) )
                  goto LABEL_1326;
                v555 = *(QuestAfterAction_o **)(*(_QWORD *)(v547 + 24) + 24LL);
                updated = System_Int32__Parse(v23->fields.param, 0);
                if ( !v555 )
                  goto LABEL_1326;
                v556 = QuestAfterAction__GetMapComponent_object_(
                         v555,
                         0,
                         updated,
                         this,
                         (const MethodInfo_329DB4C *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                *(_QWORD *)(v547 + 16) = v556;
                v557 = (__int64 *)(v547 + 16);
                sub_1CE66A4(
                  (GrandQuestFolderBoardItem_o *)(v547 + 16),
                  (int32_t)v556,
                  v558,
                  v559,
                  v560,
                  v561,
                  v562,
                  v563);
                v564 = *(UnityEngine_Object_o **)(v547 + 16);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                if ( UnityEngine_Object__op_Equality(v564, 0, 0) )
                  return;
                v565 = *(SrcSpotBasePrefab_o **)(v547 + 16);
                v566 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
                System_Action___ctor(
                  v566,
                  (Il2CppObject *)v547,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__,
                  0);
                if ( !v565 )
                  goto LABEL_1326;
                SrcSpotBasePrefab__SetState(v565, 4, v566, 0);
                if ( !*(_QWORD *)v554 )
                  goto LABEL_1326;
                updated = *(_QWORD *)(*(_QWORD *)v554 + 24LL);
                if ( !updated )
                  goto LABEL_1326;
                v529 = *v557;
                *(_QWORD *)(updated + 192) = *v557;
                v528 = (GrandQuestFolderBoardItem_o *)(updated + 192);
                goto LABEL_810;
              case 'g':
                updated = (__int64)v23->fields.param;
                if ( !updated )
                  goto LABEL_1326;
                updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
                if ( !updated )
                  goto LABEL_1326;
                v518 = updated;
                if ( *(int *)(updated + 24) <= 1 )
                  goto LABEL_1222;
                v519 = *v14;
                updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
                if ( !v519 )
                  goto LABEL_1326;
                v520 = QuestAfterAction__GetMapComponent_object_(
                         v519,
                         0,
                         updated,
                         this,
                         (const MethodInfo_329DB4C *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v520, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( *(_DWORD *)(v518 + 24) <= 1u )
                  goto LABEL_1327;
                updated = System_Int32__Parse(*(System_String_o **)(v518 + 40), 0);
                if ( !v520 )
                  goto LABEL_1326;
                LODWORD(v520[14].klass) = updated;
                v521 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
                System_Action___ctor(v521, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
                SrcSpotBasePrefab__SetState((SrcSpotBasePrefab_o *)v520, 5, v521, 0);
                updated = (__int64)*v14;
                if ( !*v14 )
                  goto LABEL_1326;
                *(_QWORD *)(updated + 192) = v520;
                v528 = (GrandQuestFolderBoardItem_o *)(updated + 192);
                LODWORD(v529) = (_DWORD)v520;
LABEL_810:
                sub_1CE66A4(v528, v529, v522, v523, v524, v525, v526, v527);
                return;
              case 'n':
                v571 = *v14;
                updated = System_Int32__Parse(v23->fields.param, 0);
                if ( !v571 )
                  goto LABEL_1326;
                v572 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v571,
                                                 0,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_329DB4C *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality(v572, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v572 )
                  goto LABEL_1326;
                SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v572, 0, 0);
                v573 = v572[9].fields.m_CachedPtr;
                if ( !v573 )
                  goto LABEL_1326;
                *(_DWORD *)(v573 + 20) = 0;
                v570 = (SrcSpotBasePrefab_o *)v572;
                v569 = 0;
                goto LABEL_826;
              case 'o':
                v515 = *v14;
                updated = System_Int32__Parse(v23->fields.param, 0);
                if ( !v515 )
                  goto LABEL_1326;
                v516 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v515,
                                                 0,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_329DB4C *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality(v516, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v516 )
                  goto LABEL_1326;
                SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v516, 1, 0);
                SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v516, 0, 0);
                v517 = v516[9].fields.m_CachedPtr;
                if ( !v517 )
                  goto LABEL_1326;
                *(_DWORD *)(v517 + 20) = 2;
                goto LABEL_818;
              case 'p':
                v567 = *v14;
                updated = System_Int32__Parse(v23->fields.param, 0);
                if ( !v567 )
                  goto LABEL_1326;
                v516 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_object_(
                                                 v567,
                                                 0,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_329DB4C *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality(v516, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v516 )
                  goto LABEL_1326;
                SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v516, 1, 0);
                SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v516, 1, 0);
                v568 = v516[9].fields.m_CachedPtr;
                if ( !v568 )
                  goto LABEL_1326;
                *(_DWORD *)(v568 + 20) = 1;
LABEL_818:
                v569 = 1;
                v570 = (SrcSpotBasePrefab_o *)v516;
LABEL_826:
                SrcSpotBasePrefab__SetTouchType(v570, v569, 0);
                goto LABEL_21;
              case 'q':
                updated = (__int64)v23->fields.param;
                if ( !updated )
                  goto LABEL_1326;
                updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
                if ( !updated )
                  goto LABEL_1326;
                v512 = updated;
                if ( *(int *)(updated + 24) <= 1 )
                  goto LABEL_1222;
                v513 = *v14;
                updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
                if ( !v513 )
                  goto LABEL_1326;
                v514 = QuestAfterAction__GetMapComponent_object_(
                         v513,
                         0,
                         updated,
                         this,
                         (const MethodInfo_329DB4C *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v514, 0, 0);
                if ( (updated & 1) != 0 )
                  return;
                if ( *(_DWORD *)(v512 + 24) <= 1u )
                  goto LABEL_1327;
                updated = System_Int32__Parse(*(System_String_o **)(v512 + 40), 0);
                if ( !v514 )
                  goto LABEL_1326;
                LODWORD(v514[14].klass) = updated;
                SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)v514, 1, 0);
                break;
              default:
                goto LABEL_21;
            }
            goto LABEL_21;
        }
      }
      switch ( id )
      {
        case 300:
        case 305:
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1326;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1326;
          v40 = *(_QWORD *)(updated + 24);
          v41 = updated;
          if ( (int)v40 <= 0 )
            goto LABEL_1222;
          if ( (int)v40 > 2 )
          {
            v498 = System_Single__Parse(*(System_String_o **)(updated + 48), 0);
            v40 = *(_QWORD *)(v41 + 24);
            v42 = v498 * 0.001;
          }
          else
          {
            v42 = 0.5;
          }
          sec = v42;
          if ( (int)v40 >= 2 )
          {
            updated = System_Int32__Parse(*(System_String_o **)(v41 + 40), 0);
            v40 = *(_QWORD *)(v41 + 24);
            v178 = updated;
          }
          else
          {
            v178 = 15;
          }
          if ( !(_DWORD)v40 )
            goto LABEL_1327;
          v500 = *v14;
          updated = System_Int32__Parse(*(System_String_o **)(v41 + 32), 0);
          if ( !v500 )
            goto LABEL_1326;
          v502 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v500, 0, updated, this, v501);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v502, 0, 0) )
            return;
          v896 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v502, 0);
          v492 = v896.fields.x;
          v493 = v896.fields.y;
          v494 = v896.fields.z;
          if ( !this->fields.IsMapModel )
            goto LABEL_739;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4DFE666 )
          {
            sub_1CE6700(&TerminalSceneComponent_TypeInfo);
            byte_4DFE666 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v503 = **(_QWORD **)(updated + 184);
          if ( !v503 )
            goto LABEL_1326;
          updated = *(_QWORD *)(v503 + 264);
          if ( !updated )
            goto LABEL_1326;
          v897.fields.x = v492;
          v897.fields.y = v493;
          v897.fields.z = v494;
          v898 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v897, 0);
          v492 = v898.fields.x;
          v493 = v898.fields.y;
          v494 = v898.fields.z;
LABEL_739:
          if ( !FSUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
          updated = FSUtility__IsUnderVista(0);
          if ( (updated & 1) != 0 )
            goto LABEL_1245;
          if ( !*(_DWORD *)(v41 + 24) )
            goto LABEL_1327;
          v504 = *(System_String_o **)(v41 + 32);
          updated = System_String__op_Equality(v504, (System_String_o *)StringLiteral_1302/*"10703"*/, 0);
          if ( (updated & 1) != 0 )
          {
            v493 = v493 + -50.0;
          }
          else
          {
            updated = System_String__op_Equality(v504, (System_String_o *)StringLiteral_1376/*"30101"*/, 0);
            if ( (updated & 1) != 0 )
              v493 = v493 + -50.0;
          }
LABEL_1245:
          v496 = *(_DWORD *)(v41 + 24);
          if ( v23->fields.id != 305 )
          {
LABEL_1246:
            if ( v496 < 4 )
              goto LABEL_1247;
            updated = System_Int32__Parse(*(System_String_o **)(v41 + 56), 0);
            v823 = *v14;
            if ( !*v14 )
              goto LABEL_1326;
            mMapCamera = v823->fields.mMapCamera;
            if ( (int)updated < 1 )
              goto LABEL_1249;
            if ( !mMapCamera )
              goto LABEL_1326;
            v824 = v823->fields.mMapCamera;
            v825 = v492;
            v826 = v493;
            v827 = v494;
            goto LABEL_1275;
          }
LABEL_712:
          if ( v496 < 4 )
          {
LABEL_1247:
            if ( !*v14 )
              goto LABEL_1326;
            mMapCamera = (*v14)->fields.mMapCamera;
LABEL_1249:
            v326 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
            System_Action___ctor(v326, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
            if ( !mMapCamera )
              goto LABEL_1326;
            v327 = mMapCamera;
            v328 = v492;
            v329 = v493;
            v330 = v494;
LABEL_1268:
            v331 = sec;
LABEL_1269:
            v332 = v178;
LABEL_1270:
            MapCamera__StartAutoMove(v327, *(UnityEngine_Vector3_o *)&v328, v331, v332, v326, 0);
            return;
          }
          if ( v496 == 4 )
          {
            if ( !*v14 )
              goto LABEL_1326;
            v497 = (*v14)->fields.mMapCamera;
          }
          else
          {
            updated = System_Int32__Parse(*(System_String_o **)(v41 + 64), 0);
            if ( !*v14 )
              goto LABEL_1326;
            v497 = (*v14)->fields.mMapCamera;
            if ( (int)updated >= 1 )
            {
              *(_QWORD *)&v816.fields.hasValue = &v870;
              v814 = v492;
              v815 = v493;
              *(_QWORD *)&v816.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
              v817 = v494;
              *(_OWORD *)&v870.fields._list = 0u;
LABEL_1304:
              System_Nullable_Vector3____ctor(v816, *(UnityEngine_Vector3_o *)&v814, v491);
              if ( *(_DWORD *)(v41 + 24) <= 3u )
                goto LABEL_1327;
              v845 = System_Single__Parse(*(System_String_o **)(v41 + 56), 0);
              p_size = (System_Nullable_float__o)&size;
              size = 0;
              System_Nullable_float____ctor(
                p_size,
                v845,
                (const MethodInfo_3A30574 *)Method_System_Nullable_float___ctor__);
              if ( !v497 )
                goto LABEL_1326;
              v847 = *(System_Nullable_Vector3__o *)&v870.fields._list;
              v848 = size;
              v849 = sec;
              v850 = v497;
LABEL_1307:
              MapCamera__StartAutoWork(v850, v849, v847, v848, v178, 0, 0);
              goto LABEL_1222;
            }
          }
          *(_QWORD *)&v820.fields.hasValue = &v870;
          v818 = v492;
          v819 = v493;
          *(_QWORD *)&v820.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
          v821 = v494;
          *(_OWORD *)&v870.fields._list = 0u;
          goto LABEL_1309;
        case 301:
        case 306:
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1326;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1326;
          v190 = *(_QWORD *)(updated + 24);
          v41 = updated;
          if ( (int)v190 <= 0 )
            goto LABEL_1222;
          if ( (int)v190 > 2 )
          {
            v499 = System_Single__Parse(*(System_String_o **)(updated + 48), 0);
            v190 = *(_QWORD *)(v41 + 24);
            v191 = v499 * 0.001;
          }
          else
          {
            v191 = 0.5;
          }
          sec = v191;
          if ( (int)v190 >= 2 )
          {
            updated = System_Int32__Parse(*(System_String_o **)(v41 + 40), 0);
            v190 = *(_QWORD *)(v41 + 24);
            v178 = updated;
          }
          else
          {
            v178 = 15;
          }
          if ( !(_DWORD)v190 )
            goto LABEL_1327;
          v505 = *v14;
          updated = System_Int32__Parse(*(System_String_o **)(v41 + 32), 0);
          if ( !v505 )
            goto LABEL_1326;
          v507 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v505, 1, updated, this, v506);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          updated = UnityEngine_Object__op_Equality(v507, 0, 0);
          if ( (updated & 1) != 0 )
            return;
          if ( this->fields.IsMapModel )
          {
            if ( !v507 )
              goto LABEL_1326;
            updated = (__int64)UnityEngine_GameObject__GetComponent_object_(
                                 (UnityEngine_GameObject_o *)v507,
                                 (const MethodInfo_325BE3C *)Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
            if ( !updated )
              goto LABEL_1326;
            Position = GameObjectExtensions__GetPosition((UnityEngine_GameObject_o *)*(_QWORD *)(updated + 32), 0);
            v508 = Position.fields.x;
            v509 = Position.fields.y;
            v510 = Position.fields.z;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4DFE666 )
            {
              sub_1CE6700(&TerminalSceneComponent_TypeInfo);
              byte_4DFE666 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v511 = **(_QWORD **)(updated + 184);
            if ( !v511 )
              goto LABEL_1326;
            updated = *(_QWORD *)(v511 + 264);
            if ( !updated )
              goto LABEL_1326;
            v900.fields.x = v508;
            v900.fields.y = v509;
            v900.fields.z = v510;
            v901 = ScrTerminalMap__ConvertWorldToScreenPosition((ScrTerminalMap_o *)updated, v900, 0);
          }
          else
          {
            v901 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v507, 0);
          }
          v731 = v901.fields.x;
          v732 = v901.fields.y;
          v733 = v901.fields.z;
          if ( !FSUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
          updated = FSUtility__IsUnderVista(0);
          if ( (updated & 1) != 0 )
            goto LABEL_1257;
          if ( !*(_DWORD *)(v41 + 24) )
            goto LABEL_1327;
          v734 = *(System_String_o **)(v41 + 32);
          updated = System_String__op_Equality(v734, (System_String_o *)StringLiteral_1302/*"10703"*/, 0);
          if ( (updated & 1) != 0 )
          {
            v732 = v732 + -95.0;
          }
          else
          {
            updated = System_String__op_Equality(v734, (System_String_o *)StringLiteral_1377/*"30102"*/, 0);
            if ( (updated & 1) != 0 )
              v732 = v732 + 45.0;
          }
LABEL_1257:
          v828 = *(_DWORD *)(v41 + 24);
          if ( v23->fields.id == 306 )
          {
            if ( v828 >= 4 )
            {
              if ( v828 == 4 )
              {
                if ( !*v14 )
                  goto LABEL_1326;
                v497 = (*v14)->fields.mMapCamera;
              }
              else
              {
                updated = System_Int32__Parse(*(System_String_o **)(v41 + 64), 0);
                if ( !*v14 )
                  goto LABEL_1326;
                v497 = (*v14)->fields.mMapCamera;
                if ( (int)updated >= 1 )
                {
                  *(_OWORD *)&v870.fields._list = 0u;
                  *(_QWORD *)&v816.fields.hasValue = &v870;
                  v814 = v731;
                  *(_QWORD *)&v816.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                  v815 = v732;
                  v817 = v733;
                  goto LABEL_1304;
                }
              }
              *(_OWORD *)&v870.fields._list = 0u;
              *(_QWORD *)&v820.fields.hasValue = &v870;
              v818 = v731;
              *(_QWORD *)&v820.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
              v819 = v732;
              v821 = v733;
LABEL_1309:
              System_Nullable_Vector3____ctor(v820, *(UnityEngine_Vector3_o *)&v818, v491);
              if ( *(_DWORD *)(v41 + 24) <= 3u )
                goto LABEL_1327;
              v851 = System_Single__Parse(*(System_String_o **)(v41 + 56), 0);
              v852 = (System_Nullable_float__o)&size;
              size = 0;
              System_Nullable_float____ctor(
                v852,
                v851,
                (const MethodInfo_3A30574 *)Method_System_Nullable_float___ctor__);
              v853 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
              System_Action___ctor(v853, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
              if ( !v497 )
                goto LABEL_1326;
              v854 = *(System_Nullable_Vector3__o *)&v870.fields._list;
              v855 = size;
              v856 = sec;
              v857 = v497;
              goto LABEL_1312;
            }
          }
          else if ( v828 >= 4 )
          {
            updated = System_Int32__Parse(*(System_String_o **)(v41 + 56), 0);
            v830 = *v14;
            if ( !*v14 )
              goto LABEL_1326;
            v829 = v830->fields.mMapCamera;
            if ( (int)updated >= 1 )
            {
              if ( !v829 )
                goto LABEL_1326;
              v824 = v830->fields.mMapCamera;
              v825 = v731;
              v826 = v732;
              v827 = v733;
LABEL_1275:
              v831 = sec;
LABEL_1276:
              MapCamera__StartAutoMove(v824, *(UnityEngine_Vector3_o *)&v825, v831, v178, 0, 0);
              goto LABEL_1222;
            }
LABEL_1266:
            v326 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
            System_Action___ctor(v326, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
            if ( !v829 )
              goto LABEL_1326;
            v327 = v829;
            v328 = v731;
            v329 = v732;
            v330 = v733;
            goto LABEL_1268;
          }
          if ( !*v14 )
            goto LABEL_1326;
          v829 = (*v14)->fields.mMapCamera;
          goto LABEL_1266;
        case 302:
        case 307:
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1326;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1326;
          v173 = *(_QWORD *)(updated + 24);
          v41 = updated;
          if ( (int)v173 <= 0 )
            goto LABEL_1222;
          if ( (int)v173 > 2 )
          {
            v487 = System_Single__Parse(*(System_String_o **)(updated + 48), 0);
            v173 = *(_QWORD *)(v41 + 24);
            v174 = v487 * 0.001;
          }
          else
          {
            v174 = 0.5;
          }
          sec = v174;
          if ( (int)v173 >= 2 )
          {
            updated = System_Int32__Parse(*(System_String_o **)(v41 + 40), 0);
            v173 = *(_QWORD *)(v41 + 24);
            v178 = updated;
          }
          else
          {
            v178 = 15;
          }
          if ( !(_DWORD)v173 )
            goto LABEL_1327;
          v488 = *v14;
          updated = System_Int32__Parse(*(System_String_o **)(v41 + 32), 0);
          if ( !v488 )
            goto LABEL_1326;
          v490 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v488, 2, updated, this, v489);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v490, 0, 0) )
            return;
          v893 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v490, 0);
          v492 = v893.fields.x;
          v493 = v893.fields.y;
          v494 = v893.fields.z;
          if ( !this->fields.IsMapModel )
            goto LABEL_711;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4DFE666 )
          {
            sub_1CE6700(&TerminalSceneComponent_TypeInfo);
            byte_4DFE666 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v495 = **(_QWORD **)(updated + 184);
          if ( !v495 )
            goto LABEL_1326;
          updated = *(_QWORD *)(v495 + 264);
          if ( !updated )
            goto LABEL_1326;
          v894.fields.x = v492;
          v894.fields.y = v493;
          v894.fields.z = v494;
          v895 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v894, 0);
          v492 = v895.fields.x;
          v493 = v895.fields.y;
          v494 = v895.fields.z;
LABEL_711:
          v496 = *(_DWORD *)(v41 + 24);
          if ( v23->fields.id == 307 )
            goto LABEL_712;
          goto LABEL_1246;
        case 303:
        case 308:
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1326;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1326;
          v175 = updated;
          if ( *(int *)(updated + 24) < 4 )
            goto LABEL_1222;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4E014FA )
          {
            sub_1CE6700(&TerminalPramsManager_TypeInfo);
            byte_4E014FA = 1;
          }
          updated = (__int64)TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            updated = (__int64)TerminalPramsManager_TypeInfo;
          }
          if ( *(_BYTE *)(*(_QWORD *)(updated + 184) + 105LL) )
            goto LABEL_1222;
          if ( *(_DWORD *)(v175 + 24) <= 2u )
            goto LABEL_1327;
          v176 = System_Single__Parse(*(System_String_o **)(v175 + 48), 0) * 0.001;
          v177 = v176 >= 0.0 ? v176 : 0.5;
          if ( *(_DWORD *)(v175 + 24) <= 3u )
            goto LABEL_1327;
          v178 = System_Int32__Parse(*(System_String_o **)(v175 + 56), 0);
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          if ( !byte_4DFE666 )
          {
            sub_1CE6700(&TerminalSceneComponent_TypeInfo);
            byte_4DFE666 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v179 = **(_QWORD **)(updated + 184);
          if ( !v179 )
            goto LABEL_1326;
          if ( !*(_DWORD *)(v175 + 24) )
            goto LABEL_1327;
          v180 = *(ScrTerminalMap_o **)(v179 + 264);
          v181 = System_Single__Parse(*(System_String_o **)(v175 + 32), 0);
          if ( *(_DWORD *)(v175 + 24) <= 1u )
            goto LABEL_1327;
          v182 = v181;
          v183 = System_Single__Parse(*(System_String_o **)(v175 + 40), 0);
          if ( !v180 )
            goto LABEL_1326;
          v885 = ScrTerminalMap__LocalPosFromCoord(v180, v182, v183, 0.0, 0.0, 0);
          v185 = *(_DWORD *)(v175 + 24);
          v186 = v885.fields.x;
          v187 = v885.fields.y;
          v188 = v885.fields.z;
          if ( v23->fields.id == 308 )
          {
            if ( v185 >= 5 )
            {
              if ( v185 == 5 )
              {
                if ( !*v14 )
                  goto LABEL_1326;
                v189 = (*v14)->fields.mMapCamera;
              }
              else
              {
                updated = System_Int32__Parse(*(System_String_o **)(v175 + 72), 0);
                if ( !*v14 )
                  goto LABEL_1326;
                v189 = (*v14)->fields.mMapCamera;
                if ( (int)updated >= 1 )
                {
                  *(_QWORD *)&v883.fields.hasValue = &v870;
                  v904.fields.x = v186;
                  v904.fields.y = v187;
                  *(_QWORD *)&v883.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
                  v904.fields.z = v188;
                  *(_OWORD *)&v870.fields._list = 0u;
                  System_Nullable_Vector3____ctor(v883, v904, v184);
                  if ( *(_DWORD *)(v175 + 24) <= 4u )
                    goto LABEL_1327;
                  v862 = System_Single__Parse(*(System_String_o **)(v175 + 64), 0);
                  v863 = (System_Nullable_float__o)&size;
                  size = 0;
                  System_Nullable_float____ctor(
                    v863,
                    v862,
                    (const MethodInfo_3A30574 *)Method_System_Nullable_float___ctor__);
                  if ( !v189 )
                    goto LABEL_1326;
                  v847 = *(System_Nullable_Vector3__o *)&v870.fields._list;
                  v848 = size;
                  v850 = v189;
                  v849 = v177;
                  goto LABEL_1307;
                }
              }
              *(_QWORD *)&v884.fields.hasValue = &v870;
              v905.fields.x = v186;
              v905.fields.y = v187;
              *(_QWORD *)&v884.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
              v905.fields.z = v188;
              *(_OWORD *)&v870.fields._list = 0u;
              System_Nullable_Vector3____ctor(v884, v905, v184);
              if ( *(_DWORD *)(v175 + 24) <= 4u )
                goto LABEL_1327;
              v864 = System_Single__Parse(*(System_String_o **)(v175 + 64), 0);
              v865 = (System_Nullable_float__o)&size;
              size = 0;
              System_Nullable_float____ctor(
                v865,
                v864,
                (const MethodInfo_3A30574 *)Method_System_Nullable_float___ctor__);
              v853 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
              System_Action___ctor(v853, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
              if ( !v189 )
                goto LABEL_1326;
              v854 = *(System_Nullable_Vector3__o *)&v870.fields._list;
              v855 = size;
              v857 = v189;
              v856 = v177;
LABEL_1312:
              v858 = v178;
              goto LABEL_1313;
            }
          }
          else if ( v185 >= 5 )
          {
            updated = System_Int32__Parse(*(System_String_o **)(v175 + 64), 0);
            v832 = *v14;
            if ( !*v14 )
              goto LABEL_1326;
            v797 = v832->fields.mMapCamera;
            if ( (int)updated >= 1 )
            {
              if ( !v797 )
                goto LABEL_1326;
              v824 = v832->fields.mMapCamera;
              v825 = v186;
              v826 = v187;
              v827 = v188;
              v831 = v177;
              goto LABEL_1276;
            }
LABEL_1214:
            v326 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
            System_Action___ctor(v326, (Il2CppObject *)this, (intptr_t)this->klass->vtable._14_EndAnim.method, 0);
            if ( !v797 )
              goto LABEL_1326;
            v327 = v797;
            v328 = v186;
            v329 = v187;
            v330 = v188;
            v331 = v177;
            goto LABEL_1269;
          }
          if ( !*v14 )
            goto LABEL_1326;
          v797 = (*v14)->fields.mMapCamera;
          goto LABEL_1214;
        case 304:
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1326;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1326;
          v300 = *(_DWORD *)(updated + 24);
          v301 = updated;
          if ( v300 <= 1 )
            goto LABEL_1222;
          v302 = System_Single__Parse(*(System_String_o **)(updated + 32), 0);
          if ( *(_DWORD *)(v301 + 24) <= 1u )
            goto LABEL_1327;
          v303 = v302;
          v304 = System_Single__Parse(*(System_String_o **)(v301 + 40), 0);
          if ( !*v14 )
            goto LABEL_1326;
          v305 = (*v14)->fields.mMapCamera;
          v306 = v304 * 0.001;
          if ( v306 >= 0.0 )
            v307 = v306;
          else
            v307 = 0.5;
          if ( v300 < 3 )
          {
            v308 = 5;
          }
          else
          {
            if ( *(_DWORD *)(v301 + 24) <= 2u )
              goto LABEL_1327;
            v308 = System_Int32__Parse(*(System_String_o **)(v301 + 48), 0);
          }
          v730 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
          System_Action___ctor(
            v730,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__,
            0);
          if ( !v305 )
            goto LABEL_1326;
          MapCamera__StartAutoZoom(v305, v303, v307, v308, v730, 0);
          return;
        default:
          if ( id != 350 )
          {
            if ( (unsigned int)(id - 351) > 1 )
              goto LABEL_21;
            updated = (__int64)v23->fields.param;
            if ( !updated )
              goto LABEL_1326;
            updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
            if ( !updated )
              goto LABEL_1326;
            v309 = updated;
            if ( *(int *)(updated + 24) <= 4 )
              goto LABEL_1222;
            v310 = System_Single__Parse(*(System_String_o **)(updated + 32), 0);
            if ( *(_DWORD *)(v309 + 24) <= 1u )
              goto LABEL_1327;
            v311 = v310;
            v312 = System_Single__Parse(*(System_String_o **)(v309 + 40), 0);
            if ( *(_DWORD *)(v309 + 24) <= 2u )
              goto LABEL_1327;
            v313 = v312;
            v314 = System_Single__Parse(*(System_String_o **)(v309 + 48), 0);
            if ( *(_DWORD *)(v309 + 24) <= 3u )
              goto LABEL_1327;
            v315 = v314;
            v316 = System_Single__Parse(*(System_String_o **)(v309 + 56), 0);
            if ( *(_DWORD *)(v309 + 24) <= 4u )
              goto LABEL_1327;
            v317 = v316;
            v318 = System_Int32__Parse(*(System_String_o **)(v309 + 64), 0);
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            if ( !byte_4DFE666 )
            {
              sub_1CE6700(&TerminalSceneComponent_TypeInfo);
              byte_4DFE666 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v319 = **(_QWORD **)(updated + 184);
            if ( !v319 )
              goto LABEL_1326;
            updated = *(_QWORD *)(v319 + 264);
            if ( !updated )
              goto LABEL_1326;
            v886.fields.y = v313;
            v886.fields.z = v315;
            v320 = v317 * 0.001;
            v886.fields.x = v311;
            v887 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v886, 0);
            v322 = v887.fields.x;
            v323 = v887.fields.y;
            v324 = v887.fields.z;
            if ( v23->fields.id != 352 || *(int *)(v309 + 24) < 6 )
            {
              if ( !*v14 )
                goto LABEL_1326;
              v325 = (*v14)->fields.mMapCamera;
              v326 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
              System_Action___ctor(
                v326,
                (Il2CppObject *)v5,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__,
                0);
              if ( !v325 )
                goto LABEL_1326;
              v327 = v325;
              v328 = v322;
              v329 = v323;
              v330 = v324;
              v331 = v320;
              v332 = v318;
              goto LABEL_1270;
            }
            if ( !*v14 )
              goto LABEL_1326;
            v859 = (*v14)->fields.mMapCamera;
            *(_QWORD *)&v882.fields.hasValue = &v870;
            *(_QWORD *)&v882.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
            *(_OWORD *)&v870.fields._list = 0u;
            System_Nullable_Vector3____ctor(v882, v887, v321);
            if ( *(_DWORD *)(v309 + 24) <= 5u )
              goto LABEL_1327;
            v860 = System_Single__Parse(*(System_String_o **)(v309 + 72), 0);
            v861 = (System_Nullable_float__o)&size;
            size = 0;
            System_Nullable_float____ctor(v861, v860, (const MethodInfo_3A30574 *)Method_System_Nullable_float___ctor__);
            v853 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
            System_Action___ctor(
              v853,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__,
              0);
            if ( !v859 )
              goto LABEL_1326;
            v854 = *(System_Nullable_Vector3__o *)&v870.fields._list;
            v855 = size;
            v857 = v859;
            v856 = v320;
            v858 = v318;
LABEL_1313:
            MapCamera__StartAutoWork(v857, v856, v854, v855, v858, v853, 0);
            return;
          }
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1326;
          updated = (__int64)System_String__Split((System_String_o *)updated, 0x2Cu, 0, 0);
          if ( !updated )
            goto LABEL_1326;
          v192 = updated;
          if ( *(int *)(updated + 24) > 0 )
          {
            v193 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0);
            if ( v193 >= 1 )
            {
              v194 = v193;
              v195 = 0.5;
              if ( *(int *)(v192 + 24) > 1 )
              {
                v196 = System_Int32__Parse(*(System_String_o **)(v192 + 40), 0);
                if ( *(int *)(v192 + 24) >= 3 )
                  v195 = System_Single__Parse(*(System_String_o **)(v192 + 48), 0) * 0.001;
              }
              else
              {
                v196 = 15;
              }
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              if ( !byte_4DFE666 )
              {
                sub_1CE6700(&TerminalSceneComponent_TypeInfo);
                byte_4DFE666 = 1;
              }
              updated = (__int64)TerminalSceneComponent_TypeInfo;
              if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                updated = (__int64)TerminalSceneComponent_TypeInfo;
              }
              v794 = **(_QWORD **)(updated + 184);
              if ( !v794 )
                goto LABEL_1326;
              v795 = *(ScrTerminalMap_o **)(v794 + 264);
              v796 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
              System_Action___ctor(
                v796,
                (Il2CppObject *)v5,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__,
                0);
              if ( !v795 )
                goto LABEL_1326;
              ScrTerminalMap__RequestMapMove_38192160(v795, v194, v195, v196, v796, 0);
              return;
            }
          }
          goto LABEL_1222;
      }
    }
  }
  if ( isQuickUpdate[0] )
  {
LABEL_21:
    ((void (__fastcall *)(QuestAfterAction_StateMain_o *, const MethodInfo *))this->klass->vtable._14_EndAnim.methodPtr)(
      this,
      this->klass->vtable._14_EndAnim.method);
LABEL_22:
    ((void (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_o *, const MethodInfo *))this->klass->vtable._13_UpdateAnim.methodPtr)(
      this,
      *v14,
      this->klass->vtable._13_UpdateAnim.method);
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

  if ( (byte_4E014E9 & 1) == 0 )
  {
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    byte_4E014E9 = 1;
  }
  this->fields.that = that;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)that, (int32_t)method, v3, v4, v5, v6, v7);
  v12 = this->fields.that;
  if ( !v12 )
    goto LABEL_14;
  screenCollider = (TerminalSceneComponent_c *)v12->fields.screenCollider;
  if ( !screenCollider )
    goto LABEL_14;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)screenCollider, 1, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4DFE666 )
  {
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    byte_4DFE666 = 1;
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
    sub_1CE6958(screenCollider, v11);
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
    sub_1CE6958(this, method);
  return that->fields.commandBuf;
}


int32_t QuestAfterAction_StateMain__get_CommandIndex(QuestAfterAction_StateMain_o *this, const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_1CE6958(this, method);
  return that->fields.commandIdx;
}


UnityEngine_GameObject_o *QuestAfterAction_StateMain__get_SubGimmickRoot(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  if ( (byte_4E014E8 & 1) == 0 )
  {
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    byte_4E014E8 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4DFE666 )
  {
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    byte_4DFE666 = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v2->static_fields->mInstance;
  if ( !mInstance || (mTerminalMap = mInstance->fields.mTerminalMap) == 0 )
    sub_1CE6958(v2, method);
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

  if ( (byte_4E014EB & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    sub_1CE6700(&StringLiteral_16885/*"afterActionBk"*/);
    byte_4E014EB = 1;
  }
  if ( deleteKey )
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16885/*"afterActionBk"*/, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4DFE666 )
  {
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    byte_4DFE666 = 1;
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
  if ( !byte_4E014FF )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E014FF = 1;
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
    sub_1CE6958(mInstance, deleteKey);
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
    sub_1CE6958(this, value);
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

  if ( (byte_4E01557 & 1) == 0 )
  {
    sub_1CE6700(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_4E01557 = 1;
  }
  v1 = (Il2CppObject *)sub_1CE694C(QuestAfterAction_StateMain___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestAfterAction_StateMain___c_TypeInfo->static_fields->__9 = (struct QuestAfterAction_StateMain___c_o *)v1;
  sub_1CE66A4(
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

  if ( (byte_4E01558 & 1) == 0 )
  {
    sub_1CE6700(&ScriptManager_CallbackFunc_TypeInfo);
    sub_1CE6700(&ScriptManager_TypeInfo);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_27__);
    sub_1CE6700(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_4E01558 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4DFEC9C )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4DFEC9C = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v2->static_fields->_WarId_k__BackingField;
  if ( !byte_4DFE737 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_4DFE737 = 1;
  }
  if ( !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v2->static_fields->_QuestId_k__BackingField;
  if ( !byte_4DFE736 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_4DFE736 = 1;
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
    _9__16_27 = (ScriptManager_CallbackFunc_o *)sub_1CE694C(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(_9__16_27, v8, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_27__, 0);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_27 = _9__16_27;
    sub_1CE66A4(
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

  if ( (byte_4E01559 & 1) == 0 )
  {
    sub_1CE6700(&Method_NetworkManager_getRequest_BattleScenarioRequest___);
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1CE6700(&ScriptManager_TypeInfo);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_28__);
    sub_1CE6700(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_4E01559 = 1;
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
    _9__16_28 = (NetworkManager_ResultCallbackFunc_o *)sub_1CE694C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__16_28,
      v5,
      Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_28__,
      0);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_28 = _9__16_28;
    sub_1CE66A4(
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
                     (const MethodInfo_328F954 *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4DFE737 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4DFE737 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v14->static_fields->_QuestId_k__BackingField;
  if ( !byte_4DFE736 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
    byte_4DFE736 = 1;
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
    sub_1CE6958(SelectRouteArray, v18);
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

  if ( (byte_4E0155A & 1) == 0 )
  {
    sub_1CE6700(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
    sub_1CE6700(&JsonManager_TypeInfo);
    sub_1CE6700(&ScriptManager_TypeInfo);
    sub_1CE6700(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&StringLiteral_16885/*"afterActionBk"*/);
    sub_1CE6700(&StringLiteral_15954/*"["*/);
    sub_1CE6700(&StringLiteral_16207/*"]"*/);
    sub_1CE6700(&StringLiteral_13859/*"TerminalTransitionInfoMissionId"*/);
    byte_4E0155A = 1;
  }
  v4 = (Il2CppObject *)System_String__Concat_65161092(
                         (System_String_o *)StringLiteral_15954/*"["*/,
                         jsonstr,
                         (System_String_o *)StringLiteral_16207/*"]"*/,
                         0);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v5 = JsonManager__DeserializeArray_object_(
         v4,
         (const MethodInfo_3273D28 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16885/*"afterActionBk"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13859/*"TerminalTransitionInfoMissionId"*/, 0);
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__ClearSelectRouteArray(0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  TerminalPramsManager__ReceiveQuestEndResultInfo((BattleResultComponent_resultData_array *)v5, 1, 0);
  if ( !byte_4DFF129 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4DFF129 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3B54D44 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1CE6958(0, v8);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}


bool QuestAfterAction_StateMain___c___UpdateAnim_b__16_35(
        QuestAfterAction_StateMain___c_o *this,
        TitleInfoEventRaidBossComponent_o *eventRaidBossComponent,
        const MethodInfo *method)
{
  if ( !eventRaidBossComponent )
    sub_1CE6958(this, 0);
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
    sub_1CE6958(0, method);
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
    sub_1CE6958(0, method);
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
    sub_1CE6958(0, method);
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
    sub_1CE6958(this, method);
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
    sub_1CE6958(0, method);
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
    sub_1CE6958(0, method);
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
    sub_1CE6958(0, method);
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
    sub_1CE6958(0, method);
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
    sub_1CE6958(0, method);
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
    sub_1CE6958(0, method);
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
    sub_1CE6958(spot, method);
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
    sub_1CE6958(this, method);
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
    sub_1CE6958(this, method);
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
    sub_1CE6958(this, method);
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
    sub_1CE6958(this, method);
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
    sub_1CE6958(this, method);
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

  if ( (byte_4E0155B & 1) == 0 )
  {
    sub_1CE6700(&EventDelegate_Callback_TypeInfo);
    sub_1CE6700(&Method_UnityEngine_GameObject_AddComponent_TweenColor___);
    sub_1CE6700(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_1CE6700(&Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__19__);
    sub_1CE6700(&QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo);
    byte_4E0155B = 1;
  }
  *(_QWORD *)&color.fields.r = 0;
  *(_QWORD *)&color.fields.b = 0;
  v3 = sub_1CE694C(QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_18;
  *(_QWORD *)(v3 + 24) = this;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v3 + 24), (int32_t)this, v6, v7, v8, v9, v10, v11);
  mapGimmick = (UnityEngine_Component_o *)this->fields.mapGimmick;
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0);
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentInChildren_object_(
                                            (UnityEngine_GameObject_o *)mapGimmick,
                                            (const MethodInfo_325C0A0 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !mapGimmick )
    goto LABEL_18;
  v12 = mapGimmick;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0);
  if ( !mapGimmick )
    goto LABEL_18;
  v13 = UnityEngine_GameObject__AddComponent_object_(
          (UnityEngine_GameObject_o *)mapGimmick,
          (const MethodInfo_325BD54 *)Method_UnityEngine_GameObject_AddComponent_TweenColor___);
  *(_QWORD *)(v3 + 16) = v13;
  v14 = (UnityEngine_Color_o **)(v3 + 16);
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)v13, v15, v16, v17, v18, v19, v20);
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
    sub_1CE6958(mapGimmick, v5);
  }
  if ( LODWORD(v22->max_length) <= 2 )
LABEL_19:
    sub_1CE6960(mapGimmick);
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
  v26 = (EventDelegate_Callback_o *)sub_1CE694C(EventDelegate_Callback_TypeInfo);
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

  if ( (byte_4E0155C & 1) == 0 )
  {
    sub_1CE6700(&UnityEngine_Object_TypeInfo);
    byte_4E0155C = 1;
  }
  tween = (UnityEngine_Object_o *)this->fields.tween;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_72918540(tween, 0);
  CS___8__locals14 = this->fields.CS___8__locals14;
  if ( !CS___8__locals14
    || (CS___8__locals13 = CS___8__locals14->fields.CS___8__locals13) == 0
    || (_4__this = CS___8__locals13->fields.__4__this) == 0 )
  {
    sub_1CE6958(_4__this, v5);
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
    sub_1CE6958(this, method);
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
    sub_1CE6958(this, method);
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

  if ( (byte_4E0155D & 1) == 0 )
  {
    sub_1CE6700(&System_Action_TypeInfo);
    sub_1CE6700(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    sub_1CE6700(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_26__);
    sub_1CE6700(&Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__25__);
    sub_1CE6700(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_4E0155D = 1;
  }
  questEntity = this->fields.questEntity;
  if ( !questEntity )
    goto LABEL_34;
  if ( QuestEntity__HasFlag(questEntity, 0x800000000000LL, 0) )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4DFE666 )
    {
      sub_1CE6700(&TerminalSceneComponent_TypeInfo);
      byte_4DFE666 = 1;
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
      if ( !byte_4DFE737 )
      {
        sub_1CE6700(&TerminalPramsManager_TypeInfo);
        byte_4DFE737 = 1;
      }
      questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
      }
      name_high = HIDWORD(questEntity[1].klass->_1.name);
      if ( !byte_4DFE736 )
      {
        sub_1CE6700(&TerminalPramsManager_TypeInfo);
        questEntity = (QuestEntity_o *)TerminalPramsManager_TypeInfo;
        byte_4DFE736 = 1;
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
        _9__25 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
        System_Action___ctor(
          _9__25,
          (Il2CppObject *)this,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_16__UpdateAnim_b__25__,
          0);
        this->fields.__9__25 = _9__25;
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.__9__25, (int32_t)_9__25, v10, v11, v12, v13, v14, v15);
      }
      if ( v6 )
      {
        ScrTerminalListTop__StartWindowMessage_37959456(v6, name_high, namespaze + 1, 2, _9__25, 1, 0);
        return;
      }
    }
LABEL_34:
    sub_1CE6958(questEntity, result);
  }
  questEntity = (QuestEntity_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
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
    _9__16_26 = (System_Action_o *)sub_1CE694C(System_Action_TypeInfo);
    System_Action___ctor(_9__16_26, v19, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_26__, 0);
    static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    static_fields->__9__16_26 = _9__16_26;
    sub_1CE66A4(
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

  if ( (byte_4E0155E & 1) == 0 )
  {
    sub_1CE6700(&MyRoomParamsManager_TypeInfo);
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    sub_1CE6700(&StringLiteral_16885/*"afterActionBk"*/);
    sub_1CE6700(&StringLiteral_13859/*"TerminalTransitionInfoMissionId"*/);
    byte_4E0155E = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4DFE666 )
  {
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    byte_4DFE666 = 1;
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
  if ( !byte_4DFE666 )
  {
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    byte_4DFE666 = 1;
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
    sub_1CE6958(_4__this, method);
  ScrTerminalMap__AllMaskEnd(_4__this, 0);
LABEL_21:
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4DFE666 )
  {
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    byte_4DFE666 = 1;
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
  if ( !byte_4DFE737 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4DFE737 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v7->static_fields->_QuestId_k__BackingField;
  if ( !byte_4E0160F )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4E0160F = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_LastPlayedQuestId_k__BackingField = QuestId_k__BackingField;
  if ( !byte_4DFE737 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4DFE737 = 1;
  }
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  TerminalPramsManager__CheckClearSelectedStoryQuestId(v7->static_fields->_QuestId_k__BackingField, 0);
  if ( !byte_4DFE737 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4DFE737 = 1;
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
    if ( !byte_4DFE737 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4DFE737 = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = TerminalPramsManager_TypeInfo;
    }
    SpotId = QuestMaster__GetSpotId(v12->static_fields->_QuestId_k__BackingField, 0);
    if ( !byte_4E01610 )
    {
      sub_1CE6700(&TerminalPramsManager_TypeInfo);
      byte_4E01610 = 1;
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
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16885/*"afterActionBk"*/, 0);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_13859/*"TerminalTransitionInfoMissionId"*/, 0);
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4DFE666 )
  {
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    byte_4DFE666 = 1;
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
  if ( !byte_4E01611 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4E01611 = 1;
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
  if ( !byte_4DFEC9C )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4DFEC9C = 1;
  }
  v19 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v19->static_fields->_WarId_k__BackingField;
  if ( !byte_4E014F7 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    v19 = TerminalPramsManager_TypeInfo;
    byte_4E014F7 = 1;
  }
  if ( !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19);
    v19 = TerminalPramsManager_TypeInfo;
  }
  v19->static_fields->_BeforeQuestStartWarId_k__BackingField = WarId_k__BackingField;
  if ( !byte_4DFE666 )
  {
    sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    byte_4DFE666 = 1;
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
  if ( !byte_4DFE737 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    byte_4DFE737 = 1;
  }
  _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
  }
  m_CachedPtr_high = HIDWORD(_4__this->fields.subRootGimmickP->fields.m_CachedPtr);
  if ( !byte_4DFE736 )
  {
    sub_1CE6700(&TerminalPramsManager_TypeInfo);
    _4__this = (ScrTerminalMap_o *)TerminalPramsManager_TypeInfo;
    byte_4DFE736 = 1;
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
  QuestAfterAction_StateMain___c__DisplayClass16_0_c *klass; // x8
  ScrTerminalListTop_o *v4; // x20
  float defaultBgmVolume; // s8
  float bgmVolume; // s9
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals17; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *v8; // x8

  v2 = this;
  if ( (byte_4E0155F & 1) == 0 )
  {
    sub_1CE6700(&QuestAfterAction_TypeInfo);
    this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)sub_1CE6700(&TerminalSceneComponent_TypeInfo);
    byte_4E0155F = 1;
  }
  if ( v2->fields.bgmVolume > -1.0 )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4DFE666 )
    {
      sub_1CE6700(&TerminalSceneComponent_TypeInfo);
      byte_4DFE666 = 1;
    }
    this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = this[5].fields.CS___8__locals17->klass;
    if ( !klass )
      goto LABEL_20;
    v4 = *(ScrTerminalListTop_o **)&klass->_2.element_size;
    bgmVolume = v2->fields.bgmVolume;
    defaultBgmVolume = v2->fields.defaultBgmVolume;
    this = (QuestAfterAction_StateMain___c__DisplayClass16_17_o *)QuestAfterAction_TypeInfo;
    if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
    if ( !v4 )
LABEL_20:
      sub_1CE6958(this, method);
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
    sub_1CE6958(spot, method);
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
    sub_1CE6958(spot, method);
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
    sub_1CE6958(this, method);
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
    sub_1CE6958(this, method);
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
    sub_1CE6958(this, method);
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
    sub_1CE6958(this, method);
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
    sub_1CE6958(this, method);
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
    sub_1CE6958(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_9_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
    this,
    this->klass[1]._1.implementedInterfaces);
}


void QuestAfterAction_StateMain___c__DisplayClass22_0___ctor(
        QuestAfterAction_StateMain___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction_StateMain___c__DisplayClass22_0___FadeRoad_b__0(
        QuestAfterAction_StateMain___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  struct srcLineSprite_o *roadSprite; // x8
  struct MapControl_SpotRoadInfo_o *mMapCtrl_SpotRoadInfo; // x8

  roadSprite = this->fields.roadSprite;
  if ( !roadSprite || (mMapCtrl_SpotRoadInfo = roadSprite->fields.mMapCtrl_SpotRoadInfo) == 0 )
    sub_1CE6958(this, method);
  mMapCtrl_SpotRoadInfo->fields.dispType = this->fields.fadeEndDispType;
}


void QuestAfterAction_StateMain___c__DisplayClass22_0___FadeRoad_b__1(
        QuestAfterAction_StateMain___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  struct srcLineSprite_o *roadSprite; // x8
  struct MapControl_SpotRoadInfo_o *mMapCtrl_SpotRoadInfo; // x8

  roadSprite = this->fields.roadSprite;
  if ( !roadSprite
    || (mMapCtrl_SpotRoadInfo = roadSprite->fields.mMapCtrl_SpotRoadInfo) == 0
    || (mMapCtrl_SpotRoadInfo->fields.dispType = this->fields.fadeEndDispType,
        (this = (QuestAfterAction_StateMain___c__DisplayClass22_0_o *)this->fields.__4__this) == 0) )
  {
    sub_1CE6958(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass22_0_o *, Il2CppClass **))this->klass[1]._1.nestedTypes)(
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
  sub_1CE66A4(p_end, 0, v2, v3, v4, v5, v6, v7);
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
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)startCallback, (int32_t)method, v3, v4, v5, v6, v7);
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
  sub_1CE66A4(
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
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)v6, (int32_t)vName, v7, v8, v9, v10, v11, v12);
}


void QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__102___ctor(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__102_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__102__MoveNext(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__102_o *this,
        const MethodInfo *method)
{
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__102_o *v2; // x21
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
  bool result; // w0
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__102_o *v46; // [xsp+18h] [xbp-38h]

  v46 = this;
  v2 = this;
  if ( (byte_4E01565 & 1) == 0 )
  {
    sub_1CE6700(&System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo);
    sub_1CE6700(&System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo);
    sub_1CE6700(&System_Collections_IEnumerator_TypeInfo);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__102_o *)sub_1CE6700(&QuestAfterAction_TypeInfo);
    byte_4E01565 = 1;
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
      sub_1CE6958(this, method);
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
      v9 = sub_1CBCA7C(commandEnumerable, System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo, 0);
    }
    v10 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *, _QWORD))v9)(
            commandEnumerable,
            *(_QWORD *)(v9 + 8));
    v46->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)v10;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v46->fields.__7__wrap1, v10, v11, v12, v13, v14, v15, v16);
    v2 = v46;
  }
  _7__wrap1 = v2->fields.__7__wrap1;
  v2->fields.__1__state = -3;
  if ( !_7__wrap1 )
LABEL_34:
    sub_1CE6958(this, method);
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
      v21 = sub_1CBCA7C(_7__wrap1, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v21)(
            _7__wrap1,
            *(_QWORD *)(v21 + 8))
        & 1) == 0 )
    {
      QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__102____m__Finally1(v46, v22);
      v46->fields.__7__wrap1 = 0;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v46->fields.__7__wrap1, 0, v39, v40, v41, v42, v43, v44);
      return 0;
    }
    v23 = v46->fields.__7__wrap1;
    if ( !v23 )
      sub_1CE6958(v46, v22);
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
      v27 = sub_1CBCA7C(
              v46->fields.__7__wrap1,
              System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo,
              0);
    }
    v28 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v27)(
            v23,
            *(_QWORD *)(v27 + 8));
    v30 = (QuestAfterAction_Command_o *)v28;
    if ( !v28 )
      sub_1CE6958(0, v29);
    if ( !_4__this )
      sub_1CE6958(v28, v29);
    CommandType = QuestAfterAction__GetCommandType(_4__this, *(_DWORD *)(v28 + 16), 0);
    if ( !QuestAfterAction_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(QuestAfterAction_TypeInfo);
    CommandTargetId = QuestAfterAction__ExtractCommandTargetId(v30, 0);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__102_o *)QuestAfterAction__IsExistCommand(
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
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v46->fields.__2__current, (int32_t)v30, v33, v34, v35, v36, v37, v38);
  result = 1;
  v46->fields.__1__state = 1;
  return result;
}


System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__102__System_Collections_Generic_IEnumerable_QuestAfterAction_Command__GetEnumerator(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__102_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__102_o *v10; // x20
  struct QuestAfterAction_o *_4__this; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *_3__commandEnumerable; // x1

  if ( (byte_4E01567 & 1) == 0 )
  {
    sub_1CE6700(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__102_TypeInfo);
    byte_4E01567 = 1;
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
    v10 = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__102_o *)sub_1CE694C(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__102_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
    _4__this = this->fields.__4__this;
    v10->fields.__4__this = _4__this;
    sub_1CE66A4((GrandQuestFolderBoardItem_o *)&v10->fields.__4__this, (int32_t)_4__this, v12, v13, v14, v15, v16, v17);
  }
  _3__commandEnumerable = this->fields.__3__commandEnumerable;
  v10->fields.commandEnumerable = _3__commandEnumerable;
  sub_1CE66A4(
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


QuestAfterAction_Command_o *QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__102__System_Collections_Generic_IEnumerator_QuestAfterAction_Command__get_Current(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__102_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__102__System_Collections_IEnumerator_Reset(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__102_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1CE6714(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1CE694C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1CE6714(&Method_QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__102_System_Collections_IEnumerator_Reset__);
  sub_1CE6828(v3, v4);
}


Il2CppObject *QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__102__System_Collections_IEnumerator_get_Current(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__102_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__102__System_IDisposable_Dispose(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__102_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__102____m__Finally1(this, method);
}


void QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__102____m__Finally1(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__102_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4E01566 & 1) == 0 )
  {
    sub_1CE6700(&System_IDisposable_TypeInfo);
    byte_4E01566 = 1;
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
      v7 = sub_1CBCA7C(_7__wrap1, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v7)(
      _7__wrap1,
      *(_QWORD *)(v7 + 8));
  }
}


void QuestAfterAction__WaitWhileMainStateFinished_d__106___ctor(
        QuestAfterAction__WaitWhileMainStateFinished_d__106_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool QuestAfterAction__WaitWhileMainStateFinished_d__106__MoveNext(
        QuestAfterAction__WaitWhileMainStateFinished_d__106_o *this,
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
  bool result; // w0

  if ( this->fields.__1__state < 2u )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_1CE6958(this, method);
    if ( _4__this->fields.isKeepingMainStateButFinished )
    {
      this->fields.__2__current = 0;
      p__2__current = &this->fields.__2__current;
      sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, 0, v2, v3, v4, v5, v6, v7);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    ActionExtensions__Call(this->fields.action, 0);
  }
  return 0;
}


Il2CppObject *QuestAfterAction__WaitWhileMainStateFinished_d__106__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestAfterAction__WaitWhileMainStateFinished_d__106_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn QuestAfterAction__WaitWhileMainStateFinished_d__106__System_Collections_IEnumerator_Reset(
        QuestAfterAction__WaitWhileMainStateFinished_d__106_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1CE6714(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1CE694C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1CE6714(&Method_QuestAfterAction__WaitWhileMainStateFinished_d__106_System_Collections_IEnumerator_Reset__);
  sub_1CE6828(v3, v4);
}


Il2CppObject *QuestAfterAction__WaitWhileMainStateFinished_d__106__System_Collections_IEnumerator_get_Current(
        QuestAfterAction__WaitWhileMainStateFinished_d__106_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void QuestAfterAction__WaitWhileMainStateFinished_d__106__System_IDisposable_Dispose(
        QuestAfterAction__WaitWhileMainStateFinished_d__106_o *this,
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

  if ( (byte_4E01561 & 1) == 0 )
  {
    sub_1CE6700(&QuestAfterAction___c_TypeInfo);
    byte_4E01561 = 1;
  }
  v1 = (Il2CppObject *)sub_1CE694C(QuestAfterAction___c_TypeInfo);
  System_Object___ctor(v1, 0);
  QuestAfterAction___c_TypeInfo->static_fields->__9 = (struct QuestAfterAction___c_o *)v1;
  sub_1CE66A4(
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


System_Collections_Generic_IEnumerable_string__o *QuestAfterAction___c___GetBlankEarthTutorialCommand_b__135_0(
        QuestAfterAction___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1CE6958(this, 0);
  return (System_Collections_Generic_IEnumerable_string__o *)EventTutorialEntity__GetBeforeActionVals(x, 0);
}


System_Collections_Generic_IEnumerable_string__o *QuestAfterAction___c___GetBlankEarthTutorialCommand_b__135_1(
        QuestAfterAction___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1CE6958(this, 0);
  return (System_Collections_Generic_IEnumerable_string__o *)EventTutorialEntity__GetAfterActionVals(x, 0);
}


System_Collections_Generic_IEnumerable_string__o *QuestAfterAction___c___GetRaidUiSetupCommand_b__134_0(
        QuestAfterAction___c_o *this,
        EventTutorialEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1CE6958(this, 0);
  return (System_Collections_Generic_IEnumerable_string__o *)EventTutorialEntity__GetBeforeActionSetupVals(x, 0);
}


void QuestAfterAction___c__DisplayClass100_0___ctor(
        QuestAfterAction___c__DisplayClass100_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction___c__DisplayClass100_0___PlaySpecifiedAction_b__0(
        QuestAfterAction___c__DisplayClass100_0_o *this,
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

  if ( (byte_4E01562 & 1) == 0 )
  {
    sub_1CE6700(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4E01562 = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  *((_QWORD *)_4__this + 23) = 0;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)(_4__this + 184), 0, v2, v3, v4, v5, v6, v7);
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this
    || (*((_QWORD *)_4__this + 10) = 0,
        sub_1CE66A4((GrandQuestFolderBoardItem_o *)(_4__this + 80), 0, v10, v11, v12, v13, v14, v15),
        (_4__this = (char *)SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__)) == 0)
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0),
        (_4__this = (char *)this->fields.__4__this) == 0) )
  {
LABEL_8:
    sub_1CE6958(_4__this, method);
  }
  QuestAfterAction__SetState((QuestAfterAction_o *)_4__this, 0, 0);
  ActionExtensions__Call(this->fields.finishCallback, 0);
}


void QuestAfterAction___c__DisplayClass100_0___PlaySpecifiedAction_b__1(
        QuestAfterAction___c__DisplayClass100_0_o *this,
        const MethodInfo *method)
{
  QuestAfterAction_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1CE6958(0, method);
  QuestAfterAction__SetState(_4__this, 2, 0);
}


void QuestAfterAction___c__DisplayClass95_0___ctor(
        QuestAfterAction___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction___c__DisplayClass95_0___LoadVoice_b__0(
        QuestAfterAction___c__DisplayClass95_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *svtVInfos; // x0

  if ( (byte_4E01563 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    byte_4E01563 = 1;
  }
  svtVInfos = (System_Collections_Generic_List_object__o *)this->fields.svtVInfos;
  if ( !svtVInfos
    || (System_Collections_Generic_List_object___RemoveAt(
          svtVInfos,
          0,
          (const MethodInfo_390773C *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__),
        (svtVInfos = (System_Collections_Generic_List_object__o *)this->fields.__4__this) == 0) )
  {
    sub_1CE6958(svtVInfos, method);
  }
  QuestAfterAction__LoadVoice_37276784((QuestAfterAction_o *)svtVInfos, this->fields.svtVInfos, this->fields.endAct, 0);
}


void QuestAfterAction___c__DisplayClass99_0___ctor(
        QuestAfterAction___c__DisplayClass99_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void QuestAfterAction___c__DisplayClass99_0___Play_b__0(
        QuestAfterAction___c__DisplayClass99_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4E01564 & 1) == 0 )
  {
    sub_1CE6700(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4E01564 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3B55234 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1CE6958(0, v4);
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
  ActionExtensions__Call(this->fields.endAct, 0);
}