void __fastcall QuestAfterAction___ctor(QuestAfterAction_o *this, const MethodInfo *method)
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
  QuestAfterAction_TitleInfoControlCallback_o *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  BlankEarthQuestAfterAction_o *v23; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v34; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v45; // x20
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7

  if ( (byte_40FA0CF & 1) == 0 )
  {
    sub_B16FFC(&BlankEarthQuestAfterAction_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__, v7);
    sub_B16FFC(&System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_QuestAfterAction___ctor__, v10);
    sub_B16FFC(&QuestAfterAction_TitleInfoControlCallback_TypeInfo, v11);
    byte_40FA0CF = 1;
  }
  v12 = (QuestAfterAction_TitleInfoControlCallback_o *)sub_B170CC(
                                                         QuestAfterAction_TitleInfoControlCallback_TypeInfo,
                                                         method,
                                                         v2,
                                                         v3,
                                                         v4);
  QuestAfterAction_TitleInfoControlCallback___ctor(v12, 0LL);
  this->fields._TitleInfoCtrlCallback_k__BackingField = v12;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._TitleInfoCtrlCallback_k__BackingField,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v23 = (BlankEarthQuestAfterAction_o *)sub_B170CC(BlankEarthQuestAfterAction_TypeInfo, v19, v20, v21, v22);
  BlankEarthQuestAfterAction___ctor(v23, 0LL);
  this->fields._BlankEarthQuestAfterAction_k__BackingField = v23;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields._BlankEarthQuestAfterAction_k__BackingField,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v34 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B170CC(
                                                                           System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo,
                                                                           v30,
                                                                           v31,
                                                                           v32,
                                                                           v33);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v34,
    (const MethodInfo_2DFF0A0 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
  this->fields.commandTypeIds = (struct System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *)v34;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.commandTypeIds,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v45 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B170CC(
                                                                                                   System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo,
                                                                                                   v41,
                                                                                                   v42,
                                                                                                   v43,
                                                                                                   v44);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v45,
    (const MethodInfo_2DE8808 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
  this->fields.svtVoices = (struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v45;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.svtVoices,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  this->fields.MapMoveBeforeFocusSpotId = -1;
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A552A4 *)Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
}


void __fastcall QuestAfterAction__CallEndAct(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_endAct; // x0
  System_Action_o *endAct; // t1

  endAct = this->fields.endAct;
  p_endAct = (BattleServantConfConponent_o *)&this->fields.endAct;
  p_endAct->klass = 0LL;
  sub_B16F98(p_endAct, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(endAct, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestAfterAction__CreateCommandBuf(
        QuestAfterAction_o *this,
        bool isBeforeAction,
        const MethodInfo *method)
{
  QuestAfterAction_o *v4; // x28
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
  const MethodInfo *v34; // x1
  const MethodInfo *v35; // x2
  TerminalPramsManager_c *v36; // x0
  int32_t QuestId_k__BackingField; // w21
  System_String_array *afterActionVals; // x27
  __int64 v39; // x1
  WebViewManager_o *Instance; // x20
  TerminalSceneComponent_c *v41; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  TerminalSceneComponent_c *v43; // x0
  struct TerminalSceneComponent_o *v44; // x8
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x8
  int32_t shopId; // w23
  struct TerminalSceneComponent_o *v47; // x8
  struct TerminalTransitionInfo_o *v48; // x8
  int32_t missionId; // w24
  TerminalSceneComponent_c *v50; // x0
  struct TerminalSceneComponent_o *v51; // x8
  struct TerminalTransitionInfo_o *v52; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *v54; // x0
  int32_t age; // w23
  WarMaster_o *v56; // x0
  TerminalSceneComponent_c *v57; // x0
  struct TerminalSceneComponent_o *v58; // x8
  struct TerminalTransitionInfo_o *v59; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  WarEntity_o *v61; // x0
  WarEntity_o *v62; // x0
  __int64 v63; // x1
  int32_t id; // w22
  TerminalPramsManager_c *v65; // x0
  TerminalSceneComponent_c *v66; // x0
  TerminalSceneComponent_o *v67; // x0
  TerminalPramsManager_c *v68; // x0
  System_String_o *String_34837456; // x22
  __int64 v70; // x2
  __int64 MapGimmickId; // x0
  System_String_array **v72; // x2
  __int64 v73; // x1
  __int64 v74; // x22
  int32_t v75; // w23
  int32_t v76; // w23
  System_String_o *v77; // x23
  bool v78; // w23
  bool v79; // w22
  TerminalPramsManager_c *v80; // x0
  __int64 v81; // x1
  WarMaster_o *v82; // x22
  TerminalPramsManager_c *v83; // x0
  WarEntity_o *QuestId; // x0
  WarEntity_o *v85; // x22
  TerminalPramsManager_c *v86; // x0
  int32_t v87; // w23
  bool v88; // w22
  TerminalPramsManager_c *v89; // x0
  TerminalPramsManager_c *v90; // x0
  TerminalPramsManager_c *v91; // x0
  __int64 v92; // x1
  QuestPhaseDetailAddMaster_o *v93; // x22
  TerminalPramsManager_c *v94; // x0
  int32_t v95; // w23
  __int64 v96; // x1
  QuestPhaseDetailMaster_o *v97; // x22
  TerminalPramsManager_c *v98; // x0
  int32_t v99; // w23
  TerminalPramsManager_c *v100; // x0
  __int64 v101; // x1
  TerminalPramsManager_c *v102; // x0
  int32_t v103; // w21
  DataMasterBase_WarMaster__WarEntity__int__o *v104; // x0
  WarEntity_o *v105; // x0
  __int64 v106; // x1
  QuestBehaviorMaster_o *v107; // x21
  TerminalPramsManager_c *v108; // x0
  int32_t v109; // w23
  bool IsOpenQuestBehaviorCond; // w0
  __int64 v111; // x2
  __int64 v112; // x8
  System_Int32_array **v113; // x0
  System_String_array **v114; // x2
  System_String_array **v115; // x3
  System_Boolean_array **v116; // x4
  System_Int32_array **v117; // x5
  System_Int32_array *v118; // x6
  System_Int32_array *v119; // x7
  __int64 v120; // x1
  __int64 v121; // x2
  __int64 v122; // x3
  __int64 v123; // x4
  int *commandBuf; // x8
  unsigned __int64 v125; // x23
  il2cpp_array_size_t v126; // w21
  __int64 v127; // x24
  System_String_array **v128; // x3
  System_Boolean_array **v129; // x4
  System_Int32_array **v130; // x5
  System_Int32_array *v131; // x6
  System_Int32_array *v132; // x7
  __int64 v133; // x8
  System_Int32_array **v134; // x1
  System_String_o **v135; // x25
  const MethodInfo *v136; // x2
  int v137; // w8
  int v138; // w8
  QuestAfterAction_o *v139; // x19
  System_String_o *AvailableRandomVoice; // x0
  __int64 v141; // x1
  __int64 v142; // x3
  __int64 v143; // x4
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *svtVoices; // x26
  int32_t v145; // w20
  System_String_o *v146; // x28
  QuestAfterAction_VoiceInfo_o *v147; // x27
  int v148; // w8
  int32_t v149; // w26
  unsigned int v150; // w8
  System_String_o *v151; // x26
  System_String_array *v152; // x0
  bool v153; // w0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *commandTypeIds; // x8
  bool v155; // w28
  System_String_o *Item; // x0
  __int64 v157; // x2
  System_String_o *v158; // x27
  System_Collections_Generic_List_int__o *v159; // x26
  int32_t v160; // w0
  int32_t v161; // w0
  QuestAfterAction_o *v162; // x0
  const MethodInfo *v163; // x2
  __int64 v164; // x8
  __int64 v165; // x25
  unsigned __int64 v166; // x20
  System_Collections_Generic_List_int__o *invalidMapGimmickIdList; // x0
  unsigned int *v168; // x20
  System_String_array **v169; // x3
  System_Boolean_array **v170; // x4
  System_Int32_array **v171; // x5
  System_Int32_array *v172; // x6
  System_Int32_array *v173; // x7
  unsigned int *v174; // x0
  TerminalPramsManager_c *v175; // x0
  __int64 v176; // x1
  QuestMaster_o *v177; // x19
  TerminalPramsManager_c *v178; // x0
  TerminalPramsManager_c *v179; // x0
  BalanceConfig_c *v180; // x8
  int32_t WarId_k__BackingField; // w19
  DataMasterBase_WarMaster__WarEntity__int__o *v182; // x0
  int32_t v183; // w19
  TerminalPramsManager_c *v184; // x0
  TerminalPramsManager_c *v185; // x0
  TerminalPramsManager_c *v186; // x0
  BalanceConfig_c *v187; // x8
  int32_t v188; // w20
  TerminalPramsManager_c *v189; // x0
  TerminalPramsManager_c *v190; // x0
  TerminalPramsManager_c *v191; // x0
  System_String_array *v192; // [xsp+8h] [xbp-78h]
  unsigned int **p_commandBuf; // [xsp+10h] [xbp-70h]
  int32_t svtId; // [xsp+1Ch] [xbp-64h] BYREF
  WarEntity_o *v195; // [xsp+20h] [xbp-60h] BYREF
  QuestEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  v4 = this;
  if ( (byte_40FA0B7 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, isBeforeAction);
    sub_B16FFC(&bool_TypeInfo, v5);
    sub_B16FFC(&char___TypeInfo, v6);
    sub_B16FFC(&QuestAfterAction_Command___TypeInfo, v7);
    sub_B16FFC(&QuestAfterAction_Command_TypeInfo, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, v10);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v11);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v12);
    sub_B16FFC(&Method_DataManager_GetMasterData_WarMaster___, v13);
    sub_B16FFC(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v14);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestBehaviorMaster___, v15);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestMaster___, v16);
    sub_B16FFC(&Method_DataManager_GetMaster_ShopMaster___, v17);
    sub_B16FFC(&Method_DataManager_GetMaster_WarMaster___, v18);
    sub_B16FFC(&DataManager_TypeInfo, v19);
    sub_B16FFC(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v20);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v21);
    sub_B16FFC(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v22);
    sub_B16FFC(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v23);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__, v24);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v25);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____, v26);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v27);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v29);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v30);
    sub_B16FFC(&QuestAfterAction_VoiceInfo_TypeInfo, v31);
    sub_B16FFC(&StringLiteral_16222, v32);
    this = (QuestAfterAction_o *)sub_B16FFC(&StringLiteral_698, v33);
    byte_40FA0B7 = 1;
  }
  v195 = 0LL;
  entity = 0LL;
  svtId = 0;
  *(_QWORD *)&v4->fields.ActionMapTargetType = -1LL;
  *(_WORD *)&v4->fields.isLoadedVoice = 0;
  if ( isBeforeAction )
  {
    if ( System_Linq_Enumerable__Any_KeyValuePair_int__QuestAfterAction_VoiceInfo__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.svtVoices,
           (const MethodInfo_18C7408 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____) )
    {
      QuestAfterAction__releaseVoice(v4, v34);
    }
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6057 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v34);
      byte_40F6057 = 1;
    }
    v36 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v36 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v36->static_fields->_QuestId_k__BackingField;
    if ( !byte_40F6058 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v34);
      v36 = TerminalPramsManager_TypeInfo;
      byte_40F6058 = 1;
    }
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v36 = TerminalPramsManager_TypeInfo;
    }
    afterActionVals = QuestAfterAction__GetBeforeAction(
                        QuestId_k__BackingField,
                        v36->static_fields->_PhaseCnt_k__BackingField + 1,
                        v35);
    goto LABEL_261;
  }
  QuestAfterAction__LoadTerminalTransitionInfo(this, (const MethodInfo *)isBeforeAction);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v39);
    byte_40F6042 = 1;
  }
  v41 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v41 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v41->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_344;
  if ( mInstance->fields._TransitionInfo_k__BackingField )
  {
    if ( (BYTE3(v41->vtable._0_Equals.methodPtr) & 4) != 0 && !v41->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v41);
    if ( !byte_40F6042 )
    {
      sub_B16FFC(&TerminalSceneComponent_TypeInfo, v39);
      byte_40F6042 = 1;
    }
    v43 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v43 = TerminalSceneComponent_TypeInfo;
    }
    v44 = v43->static_fields->mInstance;
    if ( !v44 )
      goto LABEL_344;
    TransitionInfo_k__BackingField = v44->fields._TransitionInfo_k__BackingField;
    if ( !TransitionInfo_k__BackingField )
      goto LABEL_344;
    shopId = TransitionInfo_k__BackingField->fields.shopId;
    if ( !byte_40F6042 )
    {
      sub_B16FFC(&TerminalSceneComponent_TypeInfo, v39);
      v43 = TerminalSceneComponent_TypeInfo;
      byte_40F6042 = 1;
    }
    if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v43);
      v43 = TerminalSceneComponent_TypeInfo;
    }
    v47 = v43->static_fields->mInstance;
    if ( !v47 )
      goto LABEL_344;
    v48 = v47->fields._TransitionInfo_k__BackingField;
    if ( !v48 )
      goto LABEL_344;
    missionId = v48->fields.missionId;
    if ( missionId < 1 )
    {
      if ( shopId < 1 )
        goto LABEL_96;
      if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v43);
      if ( !byte_40F6042 )
      {
        sub_B16FFC(&TerminalSceneComponent_TypeInfo, v39);
        byte_40F6042 = 1;
      }
      v57 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v57 = TerminalSceneComponent_TypeInfo;
      }
      v58 = v57->static_fields->mInstance;
      if ( !v58 )
        goto LABEL_344;
      v59 = v58->fields._TransitionInfo_k__BackingField;
      if ( !v59 )
        goto LABEL_344;
      afterActionVals = v59->fields.afterActionVals;
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_344;
      v61 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              Master_WarQuestSelectionMaster,
              shopId,
              (const MethodInfo_266F388 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( !v61 )
        goto LABEL_344;
      age = (int32_t)v61->fields.age;
      v56 = (WarMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !v56 )
        goto LABEL_344;
    }
    else
    {
      if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v43);
      if ( !byte_40F6042 )
      {
        sub_B16FFC(&TerminalSceneComponent_TypeInfo, v39);
        byte_40F6042 = 1;
      }
      v50 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v50 = TerminalSceneComponent_TypeInfo;
      }
      v51 = v50->static_fields->mInstance;
      if ( !v51 )
        goto LABEL_344;
      v52 = v51->fields._TransitionInfo_k__BackingField;
      if ( !v52 )
        goto LABEL_344;
      if ( !Instance )
        goto LABEL_344;
      afterActionVals = v52->fields.afterActionVals;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_344;
      v54 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
              MasterData_WarQuestSelectionMaster,
              missionId,
              (const MethodInfo_266F388 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
      if ( !v54 )
        goto LABEL_344;
      age = HIDWORD(v54->fields.age);
      v56 = (WarMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !v56 )
        goto LABEL_344;
    }
    v62 = WarMaster__getByEventId(v56, age, 0LL);
    if ( !v62 )
      goto LABEL_344;
    id = v62->fields.id;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6046 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v63);
      byte_40F6046 = 1;
    }
    v65 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v65 = TerminalPramsManager_TypeInfo;
    }
    v65->static_fields->_WarId_k__BackingField = id;
    if ( !byte_40F6042 )
    {
      sub_B16FFC(&TerminalSceneComponent_TypeInfo, v63);
      byte_40F6042 = 1;
    }
    v66 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v66 = TerminalSceneComponent_TypeInfo;
    }
    v67 = v66->static_fields->mInstance;
    if ( !v67 )
      goto LABEL_344;
    TerminalSceneComponent__CallQuestInformationCloseAtAll(v67, 0, 0LL);
    if ( afterActionVals )
      goto LABEL_261;
  }
LABEL_96:
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6059 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v39);
    byte_40F6059 = 1;
  }
  v68 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v68 = TerminalPramsManager_TypeInfo;
  }
  if ( !v68->static_fields->_IsPhaseClear_k__BackingField
    && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_16222, 0LL) )
  {
    String_34837456 = UnityEngine_PlayerPrefs__GetString_34837456((System_String_o *)StringLiteral_16222, 0LL);
    MapGimmickId = sub_B17014(char___TypeInfo, 1LL, v70);
    if ( !MapGimmickId )
      goto LABEL_344;
    v73 = MapGimmickId;
    if ( !*(_DWORD *)(MapGimmickId + 24) )
      goto LABEL_459;
    *(_WORD *)(MapGimmickId + 32) = 44;
    if ( !String_34837456 )
      goto LABEL_344;
    MapGimmickId = (__int64)System_String__Split(String_34837456, (System_Char_array *)MapGimmickId, 0LL);
    if ( !MapGimmickId )
      goto LABEL_344;
    v74 = MapGimmickId;
    if ( !*(_DWORD *)(MapGimmickId + 24) )
      goto LABEL_459;
    v75 = System_Int32__Parse(*(System_String_o **)(MapGimmickId + 32), 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6048 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v73);
      byte_40F6048 = 1;
    }
    MapGimmickId = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MapGimmickId = (__int64)TerminalPramsManager_TypeInfo;
    }
    *(_DWORD *)(*(_QWORD *)(MapGimmickId + 184) + 16LL) = v75;
    if ( *(_DWORD *)(v74 + 24) <= 1u )
      goto LABEL_459;
    v76 = System_Int32__Parse(*(System_String_o **)(v74 + 40), 0LL);
    if ( !byte_40F6049 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v73);
      byte_40F6049 = 1;
    }
    MapGimmickId = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MapGimmickId = (__int64)TerminalPramsManager_TypeInfo;
    }
    *(_DWORD *)(*(_QWORD *)(MapGimmickId + 184) + 20LL) = v76;
    if ( *(_DWORD *)(v74 + 24) <= 2u )
      goto LABEL_459;
    v77 = *(System_String_o **)(v74 + 48);
    if ( (BYTE3(bool_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !bool_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
    v78 = System_Boolean__Parse(v77, 0LL);
    if ( !byte_40F6072 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v73);
      byte_40F6072 = 1;
    }
    MapGimmickId = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      MapGimmickId = (__int64)TerminalPramsManager_TypeInfo;
    }
    *(_BYTE *)(*(_QWORD *)(MapGimmickId + 184) + 84LL) = v78;
    if ( *(_DWORD *)(v74 + 24) <= 3u )
      goto LABEL_459;
    v79 = System_Boolean__Parse(*(System_String_o **)(v74 + 56), 0LL);
    if ( !byte_40F6073 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v39);
      byte_40F6073 = 1;
    }
    v80 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v80 = TerminalPramsManager_TypeInfo;
    }
    v80->static_fields->_IsPhaseClear_k__BackingField = v79;
    if ( !byte_40F6069 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v39);
      v80 = TerminalPramsManager_TypeInfo;
      byte_40F6069 = 1;
    }
    if ( (BYTE3(v80->vtable._0_Equals.methodPtr) & 4) != 0 && !v80->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v80);
      v80 = TerminalPramsManager_TypeInfo;
    }
    if ( v80->static_fields->_IsQuestClear_k__BackingField )
    {
      if ( !Instance )
        goto LABEL_344;
      v82 = (WarMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                             (DataManager_o *)Instance,
                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_40F6057 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v81);
        byte_40F6057 = 1;
      }
      v83 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v83 = TerminalPramsManager_TypeInfo;
      }
      if ( !v82 )
        goto LABEL_344;
      QuestId = WarMaster__getByLastQuestId(v82, v83->static_fields->_QuestId_k__BackingField, 0LL);
      if ( QuestId )
      {
        v85 = QuestId;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_40F605F )
        {
          sub_B16FFC(&TerminalPramsManager_TypeInfo, v39);
          byte_40F605F = 1;
        }
        v86 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v86 = TerminalPramsManager_TypeInfo;
        }
        v86->static_fields->_IsWarClear_k__BackingField = 1;
        v87 = v85->fields.id;
        if ( !byte_40F6046 )
        {
          sub_B16FFC(&TerminalPramsManager_TypeInfo, v39);
          v86 = TerminalPramsManager_TypeInfo;
          byte_40F6046 = 1;
        }
        if ( (BYTE3(v86->vtable._0_Equals.methodPtr) & 4) != 0 && !v86->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v86);
          v86 = TerminalPramsManager_TypeInfo;
        }
        v86->static_fields->_WarId_k__BackingField = v87;
        v88 = TerminalPramsManager__CheckIsOrdealCallWarClear(v85, 0LL);
        if ( !byte_40F608E )
        {
          sub_B16FFC(&TerminalPramsManager_TypeInfo, v39);
          byte_40F608E = 1;
        }
        v89 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v89 = TerminalPramsManager_TypeInfo;
        }
        v89->static_fields->_IsOrdealCallWarClear_k__BackingField = v88;
      }
    }
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F605D )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v39);
    byte_40F605D = 1;
  }
  v90 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v90 = TerminalPramsManager_TypeInfo;
  }
  if ( v90->static_fields->_IsWarClear_k__BackingField )
  {
    if ( (BYTE3(v90->vtable._0_Equals.methodPtr) & 4) != 0 && !v90->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v90);
    if ( !byte_40F605E )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v39);
      byte_40F605E = 1;
    }
    v90 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v90 = TerminalPramsManager_TypeInfo;
    }
    if ( !v90->static_fields->_IsOrdealCallWarClear_k__BackingField )
      goto LABEL_260;
  }
  if ( (BYTE3(v90->vtable._0_Equals.methodPtr) & 4) != 0 && !v90->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v90);
  if ( !byte_40F6059 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v39);
    byte_40F6059 = 1;
  }
  v91 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v91 = TerminalPramsManager_TypeInfo;
  }
  if ( v91->static_fields->_IsPhaseClear_k__BackingField )
  {
    if ( !Instance )
      goto LABEL_344;
    v93 = (QuestPhaseDetailAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6057 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v92);
      byte_40F6057 = 1;
    }
    v94 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v94 = TerminalPramsManager_TypeInfo;
    }
    v95 = v94->static_fields->_QuestId_k__BackingField;
    if ( !byte_40F6058 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v92);
      v94 = TerminalPramsManager_TypeInfo;
      byte_40F6058 = 1;
    }
    if ( (BYTE3(v94->vtable._0_Equals.methodPtr) & 4) != 0 && !v94->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v94);
      v94 = TerminalPramsManager_TypeInfo;
    }
    if ( !v93 )
      goto LABEL_344;
    afterActionVals = QuestPhaseDetailAddMaster__GetAfterAction(
                        v93,
                        v95,
                        v94->static_fields->_PhaseCnt_k__BackingField + 1,
                        0LL);
    if ( afterActionVals )
      goto LABEL_261;
    v97 = (QuestPhaseDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6057 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v96);
      byte_40F6057 = 1;
    }
    v98 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v98 = TerminalPramsManager_TypeInfo;
    }
    v99 = v98->static_fields->_QuestId_k__BackingField;
    if ( !byte_40F6058 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v96);
      v98 = TerminalPramsManager_TypeInfo;
      byte_40F6058 = 1;
    }
    if ( (BYTE3(v98->vtable._0_Equals.methodPtr) & 4) != 0 && !v98->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v98);
      v98 = TerminalPramsManager_TypeInfo;
    }
    if ( !v97 )
      goto LABEL_344;
    afterActionVals = QuestPhaseDetailMaster__GetAfterAction(
                        v97,
                        v99,
                        v98->static_fields->_PhaseCnt_k__BackingField + 1,
                        0LL);
    if ( afterActionVals )
      goto LABEL_261;
    v91 = TerminalPramsManager_TypeInfo;
  }
  if ( (BYTE3(v91->vtable._0_Equals.methodPtr) & 4) != 0 && !v91->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v91);
  if ( !byte_40F6069 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v39);
    byte_40F6069 = 1;
  }
  v100 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v100 = TerminalPramsManager_TypeInfo;
  }
  if ( !v100->static_fields->_IsQuestClear_k__BackingField )
    goto LABEL_260;
  if ( (BYTE3(v100->vtable._0_Equals.methodPtr) & 4) != 0 && !v100->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v100);
  afterActionVals = 0LL;
  if ( TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL) )
    goto LABEL_261;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6057 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v101);
    byte_40F6057 = 1;
  }
  v102 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v102 = TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_344;
  v103 = v102->static_fields->_QuestId_k__BackingField;
  v104 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                          (DataManager_o *)Instance,
                                                          (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !v104 )
    goto LABEL_344;
  v105 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
           v104,
           v103,
           (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( v105 )
    afterActionVals = *(System_String_array **)&v105->fields.eventId;
  else
LABEL_260:
    afterActionVals = 0LL;
LABEL_261:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v107 = (QuestBehaviorMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6057 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v106);
    byte_40F6057 = 1;
  }
  v108 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v108 = TerminalPramsManager_TypeInfo;
  }
  v109 = v108->static_fields->_QuestId_k__BackingField;
  if ( !byte_40F6058 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v106);
    v108 = TerminalPramsManager_TypeInfo;
    byte_40F6058 = 1;
  }
  if ( (BYTE3(v108->vtable._0_Equals.methodPtr) & 4) != 0 && !v108->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v108);
    v108 = TerminalPramsManager_TypeInfo;
  }
  if ( !v107 )
    goto LABEL_344;
  IsOpenQuestBehaviorCond = QuestBehaviorMaster__IsOpenQuestBehaviorCond(
                              v107,
                              v109,
                              v108->static_fields->_PhaseCnt_k__BackingField + 1,
                              7,
                              0LL);
  if ( !afterActionVals
    || IsOpenQuestBehaviorCond
    || (v112 = *(_QWORD *)&afterActionVals->max_length, (int)v112 < 2)
    || (v112 & 1) != 0 )
  {
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16222, 0LL);
    return;
  }
  v113 = (System_Int32_array **)sub_B17014(QuestAfterAction_Command___TypeInfo, (unsigned int)v112 >> 1, v111);
  v4->fields.commandBuf = (struct QuestAfterAction_Command_array *)v113;
  sub_B16F98((BattleServantConfConponent_o *)&v4->fields.commandBuf, v113, v114, v115, v116, v117, v118, v119);
  commandBuf = (int *)v4->fields.commandBuf;
  if ( !commandBuf )
    goto LABEL_344;
  v125 = 0LL;
  v126 = 0;
  v192 = afterActionVals;
  p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
  while ( (__int64)v125 < commandBuf[6] )
  {
    v127 = sub_B170CC(QuestAfterAction_Command_TypeInfo, v120, v121, v122, v123);
    QuestAfterAction_Command___ctor((QuestAfterAction_Command_o *)v127, 0LL);
    if ( v126 >= afterActionVals->max_length )
      goto LABEL_459;
    MapGimmickId = System_Int32__Parse(afterActionVals->m_Items[v126], 0LL);
    if ( !v127 )
      goto LABEL_344;
    *(_DWORD *)(v127 + 16) = MapGimmickId;
    v133 = (int)v126 | 1LL;
    if ( (unsigned int)v133 >= afterActionVals->max_length )
      goto LABEL_459;
    v134 = (System_Int32_array **)afterActionVals->m_Items[v133];
    *(_QWORD *)(v127 + 24) = v134;
    v135 = (System_String_o **)(v127 + 24);
    sub_B16F98((BattleServantConfConponent_o *)(v127 + 24), v134, v72, v128, v129, v130, v131, v132);
    if ( !v4->fields.hasFadeCommand )
    {
      v137 = *(_DWORD *)(v127 + 16);
      if ( v137 == 520 || v137 == 405 )
        v4->fields.hasFadeCommand = 1;
    }
    if ( !v126 && !v4->fields.isRequestedStopBgm && *(_DWORD *)(v127 + 16) == 850 )
      v4->fields.isRequestedStopBgm = 1;
    if ( (v4->fields.MapMoveBeforeFocusSpotId & 0x80000000) != 0 )
    {
      v138 = *(_DWORD *)(v127 + 16);
      if ( v138 != 350 )
        goto LABEL_298;
      v151 = *v135;
      MapGimmickId = sub_B17014(char___TypeInfo, 1LL, v136);
      if ( !MapGimmickId )
        goto LABEL_344;
      v73 = MapGimmickId;
      if ( !*(_DWORD *)(MapGimmickId + 24) )
        goto LABEL_459;
      *(_WORD *)(MapGimmickId + 32) = 44;
      if ( !v151 )
        goto LABEL_344;
      v152 = System_String__Split(v151, (System_Char_array *)MapGimmickId, 0LL);
      if ( !v152 )
        goto LABEL_344;
      if ( (int)v152->max_length >= 4 )
        v4->fields.MapMoveBeforeFocusSpotId = System_Int32__Parse(v152->m_Items[3], 0LL);
    }
    v138 = *(_DWORD *)(v127 + 16);
LABEL_298:
    v139 = v4;
    if ( v138 == 800 )
    {
      AvailableRandomVoice = QuestAfterAction_Command__GetAvailableRandomVoice(
                               (QuestAfterAction_Command_o *)v127,
                               &svtId,
                               0LL);
      if ( AvailableRandomVoice )
      {
        svtVoices = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v4->fields.svtVoices;
        v145 = svtId;
        v146 = AvailableRandomVoice;
        v147 = (QuestAfterAction_VoiceInfo_o *)sub_B170CC(QuestAfterAction_VoiceInfo_TypeInfo, v141, v136, v142, v143);
        QuestAfterAction_VoiceInfo___ctor(v147, v145, v146, 0LL);
        if ( !svtVoices )
          goto LABEL_344;
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
          svtVoices,
          v125,
          (WarBoardEvalValueSquare_EvalValueSquare_o *)v147,
          (const MethodInfo_2DE93BC *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__);
        afterActionVals = v192;
      }
    }
    v148 = *(_DWORD *)(v127 + 16);
    if ( v148 <= 113 )
    {
      v150 = v148 - 100;
      v4 = v139;
      if ( v150 >= 0xE || ((0x3C1Fu >> v150) & 1) == 0 )
        goto LABEL_331;
      v149 = 0;
    }
    else if ( (unsigned int)(v148 - 200) < 6 )
    {
      v149 = 1;
      v4 = v139;
    }
    else
    {
      v4 = v139;
      if ( (unsigned int)(v148 - 400) < 0xA )
      {
        v149 = 2;
      }
      else
      {
        if ( v148 != 550 )
          goto LABEL_331;
        v149 = 3;
      }
    }
    if ( !*v135 )
      goto LABEL_344;
    v153 = System_String__Contains(*v135, (System_String_o *)StringLiteral_698, 0LL);
    commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v4->fields.commandTypeIds;
    if ( !commandTypeIds )
      goto LABEL_344;
    v155 = v153;
    Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
             commandTypeIds,
             v149,
             (const MethodInfo_2DFFB90 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    v158 = *v135;
    v159 = (System_Collections_Generic_List_int__o *)Item;
    if ( v155 )
    {
      MapGimmickId = sub_B17014(char___TypeInfo, 1LL, v157);
      if ( !MapGimmickId )
        goto LABEL_344;
      v73 = MapGimmickId;
      if ( !*(_DWORD *)(MapGimmickId + 24) )
        goto LABEL_459;
      *(_WORD *)(MapGimmickId + 32) = 44;
      if ( !v158 )
        goto LABEL_344;
      MapGimmickId = (__int64)System_String__Split(v158, (System_Char_array *)MapGimmickId, 0LL);
      if ( !MapGimmickId )
        goto LABEL_344;
      afterActionVals = v192;
      if ( !*(_DWORD *)(MapGimmickId + 24) )
        goto LABEL_459;
      v4 = v139;
      v160 = System_Int32__Parse(*(System_String_o **)(MapGimmickId + 32), 0LL);
      if ( !v159 )
        goto LABEL_344;
      System_Collections_Generic_List_int___Add(
        v159,
        v160,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
    }
    else
    {
      v161 = System_Int32__Parse(*v135, 0LL);
      if ( !v159 )
        goto LABEL_344;
      System_Collections_Generic_List_int___Add(
        v159,
        v161,
        (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      afterActionVals = v192;
      v4 = v139;
    }
LABEL_331:
    if ( v4->fields.ActionMapTargetId <= 0 )
      QuestAfterAction__SetActionMap(v4, (QuestAfterAction_Command_o *)v127, v136);
    if ( *(_DWORD *)(v127 + 16) == 102 )
    {
      v162 = (QuestAfterAction_o *)System_Int32__Parse(*v135, 0LL);
      MapGimmickId = (__int64)QuestAfterAction__GetMapGimmickId(v162, (int32_t)v162, v163);
      if ( !MapGimmickId )
        goto LABEL_344;
      v164 = *(_QWORD *)(MapGimmickId + 24);
      v165 = MapGimmickId;
      if ( (int)v164 >= 1 )
      {
        v166 = 0LL;
        while ( v166 < (unsigned int)v164 )
        {
          invalidMapGimmickIdList = v4->fields.invalidMapGimmickIdList;
          if ( !invalidMapGimmickIdList )
            goto LABEL_344;
          System_Collections_Generic_List_int___Add(
            invalidMapGimmickIdList,
            *(_DWORD *)(v165 + 32 + 4 * v166),
            (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
          LODWORD(v164) = *(_DWORD *)(v165 + 24);
          if ( (__int64)++v166 >= (int)v164 )
            goto LABEL_340;
        }
LABEL_459:
        sub_B17100(MapGimmickId, v73, v72);
        sub_B170A0();
      }
    }
LABEL_340:
    v168 = *p_commandBuf;
    if ( !*p_commandBuf )
      goto LABEL_344;
    MapGimmickId = sub_B170BC(v127, *(_QWORD *)(*(_QWORD *)v168 + 64LL));
    if ( !MapGimmickId )
    {
      sub_B170F4(0LL);
      sub_B170A0();
    }
    if ( v125 >= v168[6] )
      goto LABEL_459;
    v174 = &v168[2 * v125];
    *((_QWORD *)v174 + 4) = v127;
    sub_B16F98(
      (BattleServantConfConponent_o *)(v174 + 8),
      (System_Int32_array **)v127,
      v72,
      v169,
      v170,
      v171,
      v172,
      v173);
    commandBuf = (int *)*p_commandBuf;
    v126 += 2;
    ++v125;
    if ( !*p_commandBuf )
      goto LABEL_344;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6059 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v120);
    byte_40F6059 = 1;
  }
  v175 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v175 = TerminalPramsManager_TypeInfo;
  }
  if ( v175->static_fields->_IsPhaseClear_k__BackingField )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v177 = (QuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_40F6057 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v176);
      byte_40F6057 = 1;
    }
    v178 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v178 = TerminalPramsManager_TypeInfo;
    }
    if ( !v177 )
      goto LABEL_344;
    if ( QuestMaster__TryGetQuestEntity(v177, &entity, v178->static_fields->_QuestId_k__BackingField, 0LL) )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_40F6044 )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v120);
        byte_40F6044 = 1;
      }
      v179 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v179 = TerminalPramsManager_TypeInfo;
      }
      v180 = BalanceConfig_TypeInfo;
      WarId_k__BackingField = v179->static_fields->_WarId_k__BackingField;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v180 = BalanceConfig_TypeInfo;
      }
      if ( WarId_k__BackingField == v180->static_fields->OrdealCallWarId )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        v182 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
        if ( entity && v182 )
        {
          if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                  v182,
                  &v195,
                  entity->fields.spotId,
                  (const MethodInfo_266F3E4 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__) )
            goto LABEL_396;
          if ( v195 )
          {
            v183 = v195->fields.id;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            }
            if ( !byte_40F74D3 )
            {
              sub_B16FFC(&TerminalPramsManager_TypeInfo, v120);
              byte_40F74D3 = 1;
            }
            v184 = TerminalPramsManager_TypeInfo;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v184 = TerminalPramsManager_TypeInfo;
            }
            v184->static_fields->_BlankEarthAfterActionFocusSpotId_k__BackingField = v183;
            goto LABEL_396;
          }
        }
LABEL_344:
        sub_B170D4();
      }
    }
  }
LABEL_396:
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F604D )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v120);
    byte_40F604D = 1;
  }
  v185 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v185 = TerminalPramsManager_TypeInfo;
  }
  v185->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_40F604C )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v120);
    v185 = TerminalPramsManager_TypeInfo;
    byte_40F604C = 1;
  }
  if ( (BYTE3(v185->vtable._0_Equals.methodPtr) & 4) != 0 && !v185->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v185);
    v185 = TerminalPramsManager_TypeInfo;
  }
  v185->static_fields->_DispState_k__BackingField = 2;
  if ( !byte_40F6044 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v120);
    byte_40F6044 = 1;
  }
  v186 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v186 = TerminalPramsManager_TypeInfo;
  }
  v187 = BalanceConfig_TypeInfo;
  v188 = v186->static_fields->_WarId_k__BackingField;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v187 = BalanceConfig_TypeInfo;
  }
  v189 = TerminalPramsManager_TypeInfo;
  if ( v188 == v187->static_fields->OrdealCallWarId )
    goto LABEL_463;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F605E )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v120);
    byte_40F605E = 1;
  }
  v189 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v189 = TerminalPramsManager_TypeInfo;
  }
  if ( v189->static_fields->_IsOrdealCallWarClear_k__BackingField )
  {
LABEL_463:
    if ( (BYTE3(v189->vtable._0_Equals.methodPtr) & 4) != 0 && !v189->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v189);
    if ( !byte_40F6E08 )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v120);
      byte_40F6E08 = 1;
    }
    v189 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v189 = TerminalPramsManager_TypeInfo;
    }
    v189->static_fields->_BlankEarthSpotId_k__BackingField = 0;
    if ( !byte_40F605E )
    {
      sub_B16FFC(&TerminalPramsManager_TypeInfo, v120);
      v189 = TerminalPramsManager_TypeInfo;
      byte_40F605E = 1;
    }
    if ( (BYTE3(v189->vtable._0_Equals.methodPtr) & 4) != 0 && !v189->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v189);
      v189 = TerminalPramsManager_TypeInfo;
    }
    if ( !v189->static_fields->_IsOrdealCallWarClear_k__BackingField )
    {
      if ( (BYTE3(v189->vtable._0_Equals.methodPtr) & 4) != 0 && !v189->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v189);
      if ( !byte_40F604C )
      {
        sub_B16FFC(&TerminalPramsManager_TypeInfo, v120);
        byte_40F604C = 1;
      }
      v190 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v190 = TerminalPramsManager_TypeInfo;
      }
      v190->static_fields->_DispState_k__BackingField = 3;
      v189 = TerminalPramsManager_TypeInfo;
    }
  }
  if ( (BYTE3(v189->vtable._0_Equals.methodPtr) & 4) != 0 && !v189->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v189);
  if ( !byte_40F6079 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v120);
    byte_40F6079 = 1;
  }
  v191 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v191 = TerminalPramsManager_TypeInfo;
  }
  v191->static_fields->_SpotId_k__BackingField = -1;
}


void __fastcall QuestAfterAction__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_40FA0B5 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_16222, v1);
    byte_40FA0B5 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16222, 0LL);
}


QuestAfterAction_Command_array *__fastcall QuestAfterAction__GenerateCommandBuf(
        System_String_array *actionVals,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  _QWORD **v6; // x20
  __int64 v7; // x19
  __int16 v8; // w8
  __int64 v9; // x19
  __int64 v10; // x19
  __int64 v11; // x19
  QuestAfterAction_Command_array *v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  __int64 v18; // x22
  unsigned __int64 v19; // x23
  __int64 v20; // x24
  il2cpp_array_size_t v21; // w25
  __int64 v22; // x21
  __int64 v23; // x0
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  if ( (byte_40FA0B8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_QuestAfterAction_Command___, method);
    sub_B16FFC(&QuestAfterAction_Command___TypeInfo, v3);
    sub_B16FFC(&QuestAfterAction_Command_TypeInfo, v4);
    byte_40FA0B8 = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL) )
  {
    v6 = (_QWORD **)Method_System_Array_Empty_QuestAfterAction_Command___;
    v7 = **((_QWORD **)Method_System_Array_Empty_QuestAfterAction_Command___ + 6);
    v8 = *(_WORD *)(v7 + 306);
    if ( (v8 & 1) == 0 )
    {
      sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_QuestAfterAction_Command___ + 6));
      v8 = *(_WORD *)(v7 + 306);
    }
    if ( (v8 & 0x400) != 0 )
    {
      v9 = *v6[6];
      if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
        sub_AAFCFC(*v6[6]);
      if ( !*(_DWORD *)(v9 + 224) )
      {
        v10 = *v6[6];
        if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
          sub_AAFCFC(*v6[6]);
        j_il2cpp_runtime_class_init_0(v10);
      }
    }
    v11 = *v6[6];
    if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
      sub_AAFCFC(*v6[6]);
    return **(QuestAfterAction_Command_array ***)(v11 + 184);
  }
  else
  {
    if ( !actionVals
      || (v13 = sub_B17014(
                  QuestAfterAction_Command___TypeInfo,
                  (unsigned int)((signed int)actionVals->max_length / 2),
                  v5)) == 0 )
    {
LABEL_28:
      sub_B170D4();
    }
    v12 = (QuestAfterAction_Command_array *)v13;
    if ( *(int *)(v13 + 24) >= 1 )
    {
      v18 = 0LL;
      v19 = 0LL;
      v20 = v13 + 32;
      v21 = 1;
      do
      {
        v22 = sub_B170CC(QuestAfterAction_Command_TypeInfo, v14, v15, v16, v17);
        QuestAfterAction_Command___ctor((QuestAfterAction_Command_o *)v22, 0LL);
        if ( v21 - 1 >= actionVals->max_length )
          goto LABEL_27;
        v23 = System_Int32__Parse(actionVals->m_Items[v21 - 1], 0LL);
        if ( !v22 )
          goto LABEL_28;
        *(_DWORD *)(v22 + 16) = v23;
        if ( v21 >= actionVals->max_length )
          goto LABEL_27;
        v31 = (System_Int32_array **)actionVals->m_Items[v21];
        *(_QWORD *)(v22 + 24) = v31;
        sub_B16F98((BattleServantConfConponent_o *)(v22 + 24), v31, v25, v26, v27, v28, v29, v30);
        v23 = sub_B170BC(v22, v12->obj.klass->_1.element_class);
        if ( !v23 )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
        if ( v19 >= v12->max_length )
        {
LABEL_27:
          sub_B17100(v23, v24, v25);
          sub_B170A0();
        }
        *(_QWORD *)(v20 + 8 * v19) = v22;
        sub_B16F98(
          (BattleServantConfConponent_o *)(v20 + v18),
          (System_Int32_array **)v22,
          v25,
          v32,
          v33,
          v34,
          v35,
          v36);
        ++v19;
        v21 += 2;
        v18 += 8LL;
      }
      while ( (__int64)v19 < (int)v12->max_length );
    }
  }
  return v12;
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall QuestAfterAction__GetAfterAction(
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  QuestPhaseDetailAddMaster_o *MasterData_WarQuestSelectionMaster; // x22
  TerminalPramsManager_c *v14; // x0
  int32_t QuestId_k__BackingField; // w23
  System_String_array *result; // x0
  WebViewManager_o *v17; // x0
  QuestPhaseDetailMaster_o *v18; // x0
  WebViewManager_o *v19; // x0
  __int64 v20; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v21; // x20
  TerminalPramsManager_c *v22; // x0
  System_String_array *v23; // x19

  if ( (byte_40FA0CE & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&phase);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_string___, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v10);
    byte_40FA0CE = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = (QuestPhaseDetailAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6057 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v12);
    byte_40F6057 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v14->static_fields->_QuestId_k__BackingField;
  if ( !byte_40F6058 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v12);
    v14 = TerminalPramsManager_TypeInfo;
    byte_40F6058 = 1;
  }
  if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_37;
  result = QuestPhaseDetailAddMaster__GetAfterAction(
             MasterData_WarQuestSelectionMaster,
             QuestId_k__BackingField,
             v14->static_fields->_PhaseCnt_k__BackingField + 1,
             0LL);
  if ( result )
    return result;
  v17 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v17 )
    goto LABEL_37;
  v18 = (QuestPhaseDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)v17,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !v18 )
    goto LABEL_37;
  result = QuestPhaseDetailMaster__GetAfterAction(v18, questId, phase, 0LL);
  if ( result )
    return result;
  v19 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v19 )
    goto LABEL_37;
  v21 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v19,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6057 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v20);
    byte_40F6057 = 1;
  }
  v22 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v22 = TerminalPramsManager_TypeInfo;
  }
  if ( !v21 )
LABEL_37:
    sub_B170D4();
  result = (System_String_array *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v21,
                                    v22->static_fields->_QuestId_k__BackingField,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( result )
  {
    v23 = result;
    if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result->m_Items[8],
           (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_string___) )
    {
      return (System_String_array *)v23->m_Items[8];
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_String_array *__fastcall QuestAfterAction__GetBeforeAction(
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  WebViewManager_o *Instance; // x0
  __int64 v12; // x1
  QuestPhaseDetailAddMaster_o *MasterData_WarQuestSelectionMaster; // x22
  TerminalPramsManager_c *v14; // x0
  int32_t QuestId_k__BackingField; // w23
  System_String_array *result; // x0
  WebViewManager_o *v17; // x0
  QuestPhaseDetailMaster_o *v18; // x0
  WebViewManager_o *v19; // x0
  __int64 v20; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v21; // x20
  TerminalPramsManager_c *v22; // x0
  System_String_array *v23; // x19

  if ( (byte_40FA0CD & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&phase);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Any_string___, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v10);
    byte_40FA0CD = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = (QuestPhaseDetailAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        (DataManager_o *)Instance,
                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6057 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v12);
    byte_40F6057 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v14->static_fields->_QuestId_k__BackingField;
  if ( !byte_40F6058 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v12);
    v14 = TerminalPramsManager_TypeInfo;
    byte_40F6058 = 1;
  }
  if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v14);
    v14 = TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_37;
  result = QuestPhaseDetailAddMaster__GetBeforeAction(
             MasterData_WarQuestSelectionMaster,
             QuestId_k__BackingField,
             v14->static_fields->_PhaseCnt_k__BackingField + 1,
             0LL);
  if ( result )
    return result;
  v17 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v17 )
    goto LABEL_37;
  v18 = (QuestPhaseDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      (DataManager_o *)v17,
                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !v18 )
    goto LABEL_37;
  result = QuestPhaseDetailMaster__GetBeforeAction(v18, questId, phase, 0LL);
  if ( result )
    return result;
  v19 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !v19 )
    goto LABEL_37;
  v21 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         (DataManager_o *)v19,
                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6057 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v20);
    byte_40F6057 = 1;
  }
  v22 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v22 = TerminalPramsManager_TypeInfo;
  }
  if ( !v21 )
LABEL_37:
    sub_B170D4();
  result = (System_String_array *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v21,
                                    v22->static_fields->_QuestId_k__BackingField,
                                    (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( result )
  {
    v23 = result;
    if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result->m_Items[7],
           (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_string___) )
    {
      return (System_String_array *)v23->m_Items[7];
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


int32_t __fastcall QuestAfterAction__GetCommandType(
        QuestAfterAction_o *this,
        int32_t commandId,
        const MethodInfo *method)
{
  if ( commandId <= 113 )
  {
    if ( (unsigned int)(commandId - 100) < 0xE )
      return dword_3135EE0[commandId - 100];
    return -1;
  }
  if ( (unsigned int)(commandId - 200) < 6 )
    return 1;
  if ( (unsigned int)(commandId - 400) >= 0xA )
  {
    if ( commandId == 550 )
      return 3;
    return -1;
  }
  return 2;
}


SrcSpotBasePrefab_o *__fastcall QuestAfterAction__GetLastDispSpot(QuestAfterAction_o *this, const MethodInfo *method)
{
  return this->fields.lastDispSpot;
}


// local variable allocation has failed, the output may be wrong!
srcLineSprite_o *__fastcall QuestAfterAction__GetMapComponent_srcLineSprite_(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        QuestAfterAction_StateMain_o *state,
        const MethodInfo_19E0B48 *method)
{
  UnityEngine_Object_o *MapGameObject; // x20

  if ( (byte_40FB083 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&comType);
    byte_40FB083 = 1;
  }
  if ( !this )
    goto LABEL_11;
  MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(this, comType, id, state, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(MapGameObject, 0LL, 0LL) )
    return 0LL;
  if ( !MapGameObject )
LABEL_11:
    sub_B170D4();
  return (srcLineSprite_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *))method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_->methodPointer)(MapGameObject);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall QuestAfterAction__GetMapGameObject(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        QuestAfterAction_StateMain_o *state,
        const MethodInfo *method)
{
  __int64 v9; // x1
  UnityEngine_GameObject_o *subSpotRoot; // x0
  UnityEngine_GameObject_o *SubGimmickRoot; // x0
  UnityEngine_GameObject_o *subRoadRoot; // x0
  UnityEngine_Object_o *v13; // x23
  UnityEngine_Transform_o *transform; // x23
  System_String_o *GobjName; // x0
  _BOOL8 v16; // x0
  const MethodInfo *v17; // x1
  bool IsMapChangeable; // w0
  const MethodInfo *v19; // x3

  if ( (byte_40FA0C9 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&comType);
    sub_B16FFC(&SrcSpotBasePrefab_TypeInfo, v9);
    byte_40FA0C9 = 1;
  }
  switch ( comType )
  {
    case 2:
      if ( !state )
        goto LABEL_42;
      if ( state->fields.IsMapModel )
      {
        SubGimmickRoot = QuestAfterAction_StateMain__get_SubGimmickRoot(state, 0LL);
        if ( !SubGimmickRoot )
          goto LABEL_42;
      }
      else
      {
        SubGimmickRoot = this->fields.mGimmickRoot;
        if ( !SubGimmickRoot )
          goto LABEL_42;
      }
      transform = UnityEngine_GameObject__get_transform(SubGimmickRoot, 0LL);
      GobjName = MapGimmickComponent__GetGobjName(id, 0LL);
      if ( !transform )
LABEL_42:
        sub_B170D4();
      goto LABEL_30;
    case 1:
      if ( !state )
        goto LABEL_42;
      if ( state->fields.IsMapModel )
      {
        subRoadRoot = this->fields.subRoadRoot;
        if ( !subRoadRoot )
          goto LABEL_42;
      }
      else
      {
        subRoadRoot = this->fields.mRoadRoot;
        if ( !subRoadRoot )
          goto LABEL_42;
      }
      transform = UnityEngine_GameObject__get_transform(subRoadRoot, 0LL);
      GobjName = srcLineSprite__GetGobjName(id, 0LL);
      if ( !transform )
        goto LABEL_42;
LABEL_30:
      v13 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, GobjName, 0LL);
      goto LABEL_31;
    case 0:
      if ( !state )
        goto LABEL_42;
      if ( state->fields.IsMapModel )
      {
        subSpotRoot = this->fields.subSpotRoot;
        if ( !subSpotRoot )
          goto LABEL_42;
      }
      else
      {
        subSpotRoot = this->fields.mSpotRoot;
        if ( !subSpotRoot )
          goto LABEL_42;
      }
      transform = UnityEngine_GameObject__get_transform(subSpotRoot, 0LL);
      if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
      }
      GobjName = SrcSpotBasePrefab__GetGobjName(id, 0LL);
      if ( !transform )
        goto LABEL_42;
      goto LABEL_30;
  }
  v13 = 0LL;
LABEL_31:
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v16 = UnityEngine_Object__op_Equality(v13, 0LL, 0LL);
  if ( v16 )
  {
    IsMapChangeable = QuestAfterAction__IsMapChangeable((QuestAfterAction_o *)v16, v17);
    if ( !state )
      goto LABEL_42;
    if ( IsMapChangeable )
    {
      state->fields.IsAnimDoing = 0;
      QuestAfterAction__RequestMapChange(this, comType, id, v19);
    }
    else
    {
      ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))state->klass->vtable._14_EndAnim.method)(
        state,
        state->klass->vtable._15_onEnd.methodPtr);
    }
    return 0LL;
  }
  else
  {
    if ( !v13 )
      goto LABEL_42;
    return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestAfterAction__GetMapGimmickId(
        QuestAfterAction_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_int__o *v12; // x20
  WebViewManager_o *Instance; // x0
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x0
  WarQuestSelectionEntity_array *Entitys_WarQuestSelectionEntity; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  int max_length; // w8
  WarQuestSelectionEntity_array *v19; // x21
  unsigned int v20; // w23
  Il2CppClass **v21; // x8
  Il2CppClass *v22; // x22

  if ( (byte_40FA0B9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_MapGimmickMaster___, *(_QWORD *)&spotId);
    sub_B16FFC(&Method_DataMasterBase_getEntitys_MapGimmickEntity___, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Add__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40FA0B9 = 1;
  }
  v12 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&spotId,
                                                    method,
                                                    v3,
                                                    v4);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_16;
  Entitys_WarQuestSelectionEntity = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
                                      MasterData_WarQuestSelectionMaster,
                                      (const MethodInfo_18C3B58 *)Method_DataMasterBase_getEntitys_MapGimmickEntity___);
  if ( !Entitys_WarQuestSelectionEntity )
    goto LABEL_16;
  max_length = Entitys_WarQuestSelectionEntity->max_length;
  v19 = Entitys_WarQuestSelectionEntity;
  if ( max_length >= 1 )
  {
    v20 = 0;
    while ( 1 )
    {
      if ( v20 >= max_length )
      {
        sub_B17100(Entitys_WarQuestSelectionEntity, v16, v17);
        sub_B170A0();
      }
      v21 = &v19->obj.klass + (int)v20;
      v22 = v21[4];
      if ( !v22 )
        break;
      Entitys_WarQuestSelectionEntity = (WarQuestSelectionEntity_array *)MapGimmickEntity__GetRaidDispSpotIdFromScript(
                                                                           (MapGimmickEntity_o *)v21[4],
                                                                           0LL);
      if ( (_DWORD)Entitys_WarQuestSelectionEntity == spotId )
      {
        if ( !v12 )
          break;
        System_Collections_Generic_List_int___Add(
          v12,
          (int32_t)v22->_1.name,
          (const MethodInfo_2F104F0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      max_length = v19->max_length;
      if ( (int)++v20 >= max_length )
        goto LABEL_14;
    }
LABEL_16:
    sub_B170D4();
  }
LABEL_14:
  if ( !v12 )
    goto LABEL_16;
  return System_Collections_Generic_List_int___ToArray(
           v12,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall QuestAfterAction__GetState(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  if ( (byte_40FA0C7 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestAfterAction__getState__, method);
    byte_40FA0C7 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B170D4();
  return fsm->fields.m_state;
}


void __fastcall QuestAfterAction__Init(QuestAfterAction_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
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
  __int64 v17; // x1
  __int64 v18; // x1
  struct CStateManager_QuestAfterAction__o **p_fsm; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v20; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct CStateManager_QuestAfterAction__o *fsm; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  QuestAfterAction_StateNone_o *v32; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v33; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  QuestAfterAction_StateMain_o *v38; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v39; // x21
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  QuestAfterAction_StateAdditional_o *v44; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v45; // x20
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  QuestAfterAction_StateInstant_o *v50; // x21
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  unsigned int v57; // w25
  struct System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *commandTypeIds; // x0
  int32_t v59; // w20
  bool v60; // w0
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *v65; // x21
  System_String_o *Item; // x0
  System_Collections_Generic_List_int__o *v67; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  struct UnityEngine_BoxCollider_o *Component_srcLineSprite; // x0
  System_String_array **v70; // x2
  System_String_array **v71; // x3
  System_Boolean_array **v72; // x4
  System_Int32_array **v73; // x5
  System_Int32_array *v74; // x6
  System_Int32_array *v75; // x7
  UnityEngine_Collider_o *screenCollider; // x0
  struct SrcSpotBasePrefab_o **p_lastDispSpot; // x19
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x3
  __int64 v87; // x4
  System_Collections_Generic_List_int__o *v88; // x20
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7

  if ( (byte_40FA0B6 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestAfterAction___ctor__, method);
    sub_B16FFC(&Method_CStateManager_QuestAfterAction__add__, v6);
    sub_B16FFC(&CStateManager_QuestAfterAction__TypeInfo, v7);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__,
      v8);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__, v10);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Clear__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_B16FFC(&QuestAfterAction_StateAdditional_TypeInfo, v15);
    sub_B16FFC(&QuestAfterAction_StateInstant_TypeInfo, v16);
    sub_B16FFC(&QuestAfterAction_StateMain_TypeInfo, v17);
    sub_B16FFC(&QuestAfterAction_StateNone_TypeInfo, v18);
    byte_40FA0B6 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v20 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B170CC(
                                                                CStateManager_QuestAfterAction__TypeInfo,
                                                                method,
                                                                v2,
                                                                v3,
                                                                v4);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v20,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2907EF0 *)Method_CStateManager_QuestAfterAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestAfterAction__o *)v20;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.fsm,
      (System_Int32_array **)v20,
      v21,
      v22,
      v23,
      v24,
      v25,
      v26);
    fsm = this->fields.fsm;
    v32 = (QuestAfterAction_StateNone_o *)sub_B170CC(QuestAfterAction_StateNone_TypeInfo, v28, v29, v30, v31);
    QuestAfterAction_StateNone___ctor(v32, 0LL);
    if ( !fsm )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      0,
      (IState_T__o *)v32,
      (const MethodInfo_2907FBC *)Method_CStateManager_QuestAfterAction__add__);
    v33 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v38 = (QuestAfterAction_StateMain_o *)sub_B170CC(QuestAfterAction_StateMain_TypeInfo, v34, v35, v36, v37);
    QuestAfterAction_StateMain___ctor(v38, 0LL);
    if ( !v33 )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v33,
      1,
      (IState_T__o *)v38,
      (const MethodInfo_2907FBC *)Method_CStateManager_QuestAfterAction__add__);
    v39 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v44 = (QuestAfterAction_StateAdditional_o *)sub_B170CC(
                                                  QuestAfterAction_StateAdditional_TypeInfo,
                                                  v40,
                                                  v41,
                                                  v42,
                                                  v43);
    QuestAfterAction_StateAdditional___ctor(v44, 0LL);
    if ( !v39 )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v39,
      2,
      (IState_T__o *)v44,
      (const MethodInfo_2907FBC *)Method_CStateManager_QuestAfterAction__add__);
    v45 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v50 = (QuestAfterAction_StateInstant_o *)sub_B170CC(QuestAfterAction_StateInstant_TypeInfo, v46, v47, v48, v49);
    QuestAfterAction_StateInstant___ctor(v50, 0LL);
    if ( !v45 )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v45,
      3,
      (IState_T__o *)v50,
      (const MethodInfo_2907FBC *)Method_CStateManager_QuestAfterAction__add__);
  }
  QuestAfterAction__SetState(this, 0, v2);
  this->fields.commandBuf = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.commandBuf, 0LL, v51, v52, v53, v54, v55, v56);
  this->fields.commandIdx = 0;
  v57 = -1;
  do
  {
    commandTypeIds = this->fields.commandTypeIds;
    if ( !commandTypeIds )
      goto LABEL_21;
    v59 = v57 + 1;
    v60 = System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
            (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)commandTypeIds,
            v57 + 1,
            (const MethodInfo_2DFFEC8 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    v65 = this->fields.commandTypeIds;
    if ( v60 )
    {
      if ( !v65 )
        goto LABEL_21;
      Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
               (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.commandTypeIds,
               v59,
               (const MethodInfo_2DFFB90 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( !Item )
        goto LABEL_21;
      System_Collections_Generic_List_int___Clear(
        (System_Collections_Generic_List_int__o *)Item,
        (const MethodInfo_2F108FC *)Method_System_Collections_Generic_List_int__Clear__);
    }
    else
    {
      v67 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v61,
                                                        v62,
                                                        v63,
                                                        v64);
      System_Collections_Generic_List_int____ctor(
        v67,
        (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v65 )
        goto LABEL_21;
      System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____set_Item(
        v65,
        v59,
        v67,
        (const MethodInfo_2DFFC2C *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
    }
    ++v57;
  }
  while ( v57 < 3 );
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (Component_srcLineSprite = (struct UnityEngine_BoxCollider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        gameObject,
                                                                        (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.screenCollider = Component_srcLineSprite,
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.screenCollider,
          (System_Int32_array **)Component_srcLineSprite,
          v70,
          v71,
          v72,
          v73,
          v74,
          v75),
        (screenCollider = (UnityEngine_Collider_o *)this->fields.screenCollider) == 0LL) )
  {
LABEL_21:
    sub_B170D4();
  }
  UnityEngine_Collider__set_enabled(screenCollider, 0, 0LL);
  this->fields.lastDispSpot = 0LL;
  p_lastDispSpot = &this->fields.lastDispSpot;
  sub_B16F98((BattleServantConfConponent_o *)p_lastDispSpot, 0LL, v78, v79, v80, v81, v82, v83);
  v88 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v84,
                                                    v85,
                                                    v86,
                                                    v87);
  System_Collections_Generic_List_int____ctor(
    v88,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  *(p_lastDispSpot - 18) = (struct SrcSpotBasePrefab_o *)v88;
  sub_B16F98(
    (BattleServantConfConponent_o *)(p_lastDispSpot - 18),
    (System_Int32_array **)v88,
    v89,
    v90,
    v91,
    v92,
    v93,
    v94);
  *((_WORD *)p_lastDispSpot + 4) = 0;
}


bool __fastcall QuestAfterAction__IsActiveCommand(QuestAfterAction_o *this, const MethodInfo *method)
{
  return this->fields.commandBuf != 0LL;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestAfterAction__IsExistCommand(
        QuestAfterAction_o *this,
        int32_t commandType,
        int32_t commandTypeId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *commandTypeIds; // x0
  struct System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *v10; // x0
  System_String_o *Item; // x0

  if ( (byte_40FA0BC & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__,
      *(_QWORD *)&commandType);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v8);
    byte_40FA0BC = 1;
  }
  commandTypeIds = this->fields.commandTypeIds;
  if ( !commandTypeIds )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
         (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)commandTypeIds,
         commandType,
         (const MethodInfo_2DFFEC8 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__) )
  {
    v10 = this->fields.commandTypeIds;
    if ( v10 )
    {
      Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
               (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v10,
               commandType,
               (const MethodInfo_2DFFB90 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( Item )
        return System_Collections_Generic_List_int___Contains(
                 (System_Collections_Generic_List_int__o *)Item,
                 commandTypeId,
                 (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_9:
    sub_B170D4();
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall QuestAfterAction__IsExistSpotReveal(QuestAfterAction_o *this, int32_t spotId, const MethodInfo *method)
{
  struct QuestAfterAction_Command_array *commandBuf; // x8
  QuestAfterAction_o *v4; // x19
  __int64 v6; // x21
  int max_length; // w9
  QuestAfterAction_Command_o *v8; // x9
  int32_t id; // w10

  commandBuf = this->fields.commandBuf;
  if ( commandBuf )
  {
    v4 = this;
    v6 = 0LL;
    while ( 1 )
    {
      max_length = commandBuf->max_length;
      if ( (int)v6 >= max_length )
        break;
      if ( (unsigned int)v6 >= max_length )
      {
        sub_B17100(this, *(_QWORD *)&spotId, method);
        sub_B170A0();
      }
      v8 = commandBuf->m_Items[v6];
      if ( !v8 )
LABEL_11:
        sub_B170D4();
      id = v8->fields.id;
      if ( id == 112 || id == 102 )
      {
        this = (QuestAfterAction_o *)System_Int32__Parse(v8->fields.param, 0LL);
        if ( (_DWORD)this == spotId )
          return 1;
        commandBuf = v4->fields.commandBuf;
      }
      ++v6;
      if ( !commandBuf )
        goto LABEL_11;
    }
  }
  return 0;
}


bool __fastcall QuestAfterAction__IsMapChangeable(QuestAfterAction_o *this, const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  ScrTerminalMap_o *mTerminalMap; // x0

  if ( (byte_40FA0CC & 1) == 0 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, method);
    byte_40FA0CC = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, method);
    byte_40F6042 = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v2->static_fields->mInstance;
  if ( !mInstance || (mTerminalMap = mInstance->fields.mTerminalMap) == 0LL )
    sub_B170D4();
  return ScrTerminalMap__IsMapChangeable(mTerminalMap, 0LL);
}


bool __fastcall QuestAfterAction__IsPlaying(QuestAfterAction_o *this, const MethodInfo *method)
{
  return QuestAfterAction__GetState(this, method) == 1;
}


bool __fastcall QuestAfterAction__IsQuickCommand(int32_t cmd, const MethodInfo *method)
{
  bool result; // w0

  if ( cmd > 205 )
    return (cmd & 0xFFFFFFFE) == 402;
  result = 1;
  if ( (unsigned int)(cmd - 110) >= 5 && (unsigned int)(cmd - 203) >= 3 )
    return 0;
  return result;
}


bool __fastcall QuestAfterAction__IsSpotChangeDispQuicklyCommand(int32_t cmd, const MethodInfo *method)
{
  return cmd == 110 || (unsigned int)(cmd - 111) < 2;
}


bool __fastcall QuestAfterAction__IsSpotDispCommand(int32_t cmd, const MethodInfo *method)
{
  return cmd == 102 || cmd == 112;
}


bool __fastcall QuestAfterAction__IsSpotGrayCommand(int32_t cmd, const MethodInfo *method)
{
  return cmd == 101 || cmd == 111;
}


bool __fastcall QuestAfterAction__IsSpotHideCommand(int32_t cmd, const MethodInfo *method)
{
  return cmd == 100 || cmd == 110;
}


void __fastcall QuestAfterAction__LoadTerminalTransitionInfo(QuestAfterAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  TerminalTransitionInfo_o *TerminalTransitionInfoData; // x0
  __int64 v21; // x1
  TerminalTransitionInfo_o *v22; // x19
  TerminalSceneComponent_c *v23; // x0
  TerminalSceneComponent_o *mInstance; // x20
  WebViewManager_o *Instance; // x0
  DataManager_o *v26; // x22
  EventMissionActionAddMaster_o *MasterData_WarQuestSelectionMaster; // x0
  EventMissionActionAddEntity_o *EntityFromIdProgressTypeAndActionType; // x0
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  EventMissionActionAddEntity_o *v33; // x23
  EventMissionActionInfo_o *v34; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  WarEntity_o *Entity; // x0
  WarEntity_o *v37; // x21
  DataMasterBase_WarMaster__WarEntity__int__o *v38; // x0
  EventEntity_o *v39; // x0
  ShopActionMaster_o *v40; // x0
  System_Collections_Generic_List_ShopActionEntity__o *EntityList; // x0
  __int64 v42; // x1
  Il2CppObject *current; // x21
  TerminalPramsManager_c *v44; // x0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x0
  System_Int32_array **klass; // x1
  struct TerminalTransitionInfo_o *v53; // x8
  EventMissionActionMaster_o *v54; // x0
  EventMissionActionEntity_o *v55; // x0
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  __int64 v59; // x4
  EventMissionActionEntity_o *v60; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v61; // x0
  WarEntity_o *v62; // x0
  WarEntity_o *v63; // x23
  DataMasterBase_WarMaster__WarEntity__int__o *v64; // x0
  EventEntity_o *v65; // x0
  __int64 v66; // x1
  TerminalPramsManager_c *v67; // x0
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  struct TerminalTransitionInfo_o *v74; // x0
  System_Int32_array **vals; // x1
  struct TerminalTransitionInfo_o *v76; // x8
  System_Collections_Generic_List_Enumerator_T__o v77; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v78; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_40FA0C0 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, v2);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v3);
    sub_B16FFC(&Method_DataManager_GetMasterData_EventMissionMaster___, v4);
    sub_B16FFC(&Method_DataManager_GetMaster_EventMaster___, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_ShopActionMaster___, v6);
    sub_B16FFC(&Method_DataManager_GetMaster_ShopMaster___, v7);
    sub_B16FFC(&DataManager_TypeInfo, v8);
    sub_B16FFC(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v9);
    sub_B16FFC(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v10);
    sub_B16FFC(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__get_Current__, v14);
    sub_B16FFC(&EventMissionActionInfo_TypeInfo, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__, v16);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v18);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v19);
    byte_40FA0C0 = 1;
  }
  memset(&v78, 0, sizeof(v78));
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalTransitionInfoData = TerminalPramsManager__Load_TerminalTransitionInfoData(0LL);
  if ( !TerminalTransitionInfoData )
    return;
  v22 = TerminalTransitionInfoData;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v21);
    byte_40F6042 = 1;
  }
  v23 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v23 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v23->static_fields->mInstance;
  if ( !mInstance )
    goto LABEL_77;
  if ( mInstance->fields._TransitionInfo_k__BackingField )
    return;
  if ( v22->fields.missionId < 1 )
  {
    if ( v22->fields.shopId >= 1 )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_77;
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 Master_WarQuestSelectionMaster,
                 v22->fields.shopId,
                 (const MethodInfo_266F388 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( Entity )
      {
        v37 = Entity;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        v38 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_EventMaster___);
        if ( !v38 )
          goto LABEL_77;
        v39 = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 v38,
                                 (int32_t)v37->fields.age,
                                 (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !v39 || !EventEntity__IsEventPeriod(v39, 0LL, 0LL) )
          goto LABEL_76;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        v40 = (ShopActionMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ShopActionMaster___);
        if ( !v40 )
          goto LABEL_77;
        EntityList = ShopActionMaster__GetEntityList(v40, v37->fields.id, 0LL);
        if ( !EntityList )
          goto LABEL_77;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v77,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)EntityList,
          (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
        v78 = v77;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v78,
                  (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__) )
        {
          current = v78.fields.current;
          if ( !v78.fields.current )
            sub_B170D4();
          if ( LODWORD(v78.fields.current[1].monitor) == 4 )
          {
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            }
            if ( !byte_40F6097 )
            {
              sub_B16FFC(&TerminalPramsManager_TypeInfo, v42);
              byte_40F6097 = 1;
            }
            v44 = TerminalPramsManager_TypeInfo;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v44 = TerminalPramsManager_TypeInfo;
            }
            v44->static_fields->meSceneStatus = 2;
            TerminalSceneComponent__CreateTransitionInfo(mInstance, v22, 0LL);
            TransitionInfo_k__BackingField = mInstance->fields._TransitionInfo_k__BackingField;
            if ( !TransitionInfo_k__BackingField )
              sub_B170D4();
            klass = (System_Int32_array **)current[2].klass;
            TransitionInfo_k__BackingField->fields.afterActionVals = (struct System_String_array *)klass;
            sub_B16F98(
              (BattleServantConfConponent_o *)&TransitionInfo_k__BackingField->fields.afterActionVals,
              klass,
              v45,
              v46,
              v47,
              v48,
              v49,
              v50);
            v53 = mInstance->fields._TransitionInfo_k__BackingField;
            if ( !v53 )
              sub_B170D4();
            v53->fields.optionId = (int32_t)current[2].monitor;
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v78,
          (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__);
      }
    }
  }
  else
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_77;
    v26 = (DataManager_o *)Instance;
    MasterData_WarQuestSelectionMaster = (EventMissionActionAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                            (DataManager_o *)Instance,
                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    if ( !MasterData_WarQuestSelectionMaster )
      goto LABEL_77;
    EntityFromIdProgressTypeAndActionType = EventMissionActionAddMaster__GetEntityFromIdProgressTypeAndActionType(
                                              MasterData_WarQuestSelectionMaster,
                                              v22->fields.missionId,
                                              5,
                                              4,
                                              0LL);
    if ( EntityFromIdProgressTypeAndActionType )
    {
      v33 = EntityFromIdProgressTypeAndActionType;
      v34 = (EventMissionActionInfo_o *)sub_B170CC(EventMissionActionInfo_TypeInfo, v29, v30, v31, v32);
      EventMissionActionInfo___ctor_22515852(v34, v33, 0LL);
    }
    else
    {
      v54 = (EventMissionActionMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            v26,
                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
      if ( !v54 )
        goto LABEL_77;
      v55 = EventMissionActionMaster__getEntityFromIdProgressTypeAndActionType(v54, v22->fields.missionId, 5, 4, 0LL);
      if ( !v55 )
        return;
      v60 = v55;
      v34 = (EventMissionActionInfo_o *)sub_B170CC(EventMissionActionInfo_TypeInfo, v56, v57, v58, v59);
      EventMissionActionInfo___ctor(v34, v60, 0LL);
    }
    v61 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                           v26,
                                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !v61 )
      goto LABEL_77;
    v62 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
            v61,
            v22->fields.missionId,
            (const MethodInfo_266F388 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( v62 )
    {
      v63 = v62;
      v64 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             v26,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !v64 )
        goto LABEL_77;
      v65 = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                               v64,
                               HIDWORD(v63->fields.age),
                               (const MethodInfo_266F388 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !v65 )
        goto LABEL_77;
      if ( EventEntity__IsEventPeriod(v65, 0LL, 0LL) )
      {
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_40F6097 )
        {
          sub_B16FFC(&TerminalPramsManager_TypeInfo, v66);
          byte_40F6097 = 1;
        }
        v67 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v67 = TerminalPramsManager_TypeInfo;
        }
        v67->static_fields->meSceneStatus = 2;
        TerminalSceneComponent__CreateTransitionInfo(mInstance, v22, 0LL);
        if ( v34 )
        {
          v74 = mInstance->fields._TransitionInfo_k__BackingField;
          if ( v74 )
          {
            vals = (System_Int32_array **)v34->fields.vals;
            v74->fields.afterActionVals = (struct System_String_array *)vals;
            sub_B16F98((BattleServantConfConponent_o *)&v74->fields.afterActionVals, vals, v68, v69, v70, v71, v72, v73);
            v76 = mInstance->fields._TransitionInfo_k__BackingField;
            if ( v76 )
            {
              v76->fields.optionId = v34->fields.optionId;
              return;
            }
          }
        }
LABEL_77:
        sub_B170D4();
      }
LABEL_76:
      TerminalSceneComponent__ClearTransitionInfo(mInstance, 0LL);
    }
  }
}


void __fastcall QuestAfterAction__LoadVoice(
        QuestAfterAction_o *this,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *svtVoices; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v13; // x22
  const MethodInfo *v14; // x3

  if ( (byte_40FA0BD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__, endAct);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__, v5);
    sub_B16FFC(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo, v6);
    byte_40FA0BD = 1;
  }
  if ( this->fields.isLoadedVoice )
  {
    ActionExtensions__Call(endAct, 0LL);
  }
  else
  {
    svtVoices = this->fields.svtVoices;
    this->fields.isLoadedVoice = 1;
    if ( !svtVoices )
      sub_B170D4();
    Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
               svtVoices,
               (const MethodInfo_2DE9160 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    v13 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                            System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo,
                                                                            v9,
                                                                            v10,
                                                                            v11,
                                                                            v12);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v13,
      (System_Collections_Generic_IEnumerable_T__o *)Values,
      (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    QuestAfterAction__LoadVoice_25288944(
      this,
      (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)v13,
      endAct,
      v14);
  }
}


void __fastcall QuestAfterAction__LoadVoice_25288944(
        QuestAfterAction_o *this,
        System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *svtVInfos,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v4; // x4
  System_Action_o *v5; // x20
  System_Collections_Generic_List_XWeaponTrail_Element__o *v6; // x22
  System_Collections_Generic_List_XWeaponTrail_Element__o *v8; // x20
  XWeaponTrail_Element_o *v9; // x8
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x28
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_List_XWeaponTrail_Element__o **v25; // x27
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Action_o **v32; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  CommonUI_o *Instance; // x0
  CommonUI_o *v40; // x0
  System_Collections_Generic_List_XWeaponTrail_Element__o *v41; // x19
  XWeaponTrail_Element_o *v42; // x8
  int32_t x_low; // w19
  System_String_o *VoiceAssetName_30033140; // x19
  SoundManager_o *v45; // x20
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  System_Action_o *v50; // x21

  v5 = endAct;
  v6 = (System_Collections_Generic_List_XWeaponTrail_Element__o *)svtVInfos;
  while ( 1 )
  {
    if ( (byte_40FA0BE & 1) == 0 )
    {
      sub_B16FFC(&System_Action_TypeInfo, svtVInfos);
      sub_B16FFC(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___, v10);
      sub_B16FFC(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__, v11);
      sub_B16FFC(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__, v12);
      sub_B16FFC(&ServantVoiceEntity_TypeInfo, v13);
      sub_B16FFC(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v14);
      sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
      sub_B16FFC(&Method_QuestAfterAction___c__DisplayClass64_0__LoadVoice_b__0__, v16);
      sub_B16FFC(&QuestAfterAction___c__DisplayClass64_0_TypeInfo, v17);
      byte_40FA0BE = 1;
    }
    v18 = sub_B170CC(QuestAfterAction___c__DisplayClass64_0_TypeInfo, svtVInfos, endAct, method, v4);
    QuestAfterAction___c__DisplayClass64_0___ctor((QuestAfterAction___c__DisplayClass64_0_o *)v18, 0LL);
    if ( !v18 )
      goto LABEL_25;
    *(_QWORD *)(v18 + 16) = v6;
    v25 = (System_Collections_Generic_List_XWeaponTrail_Element__o **)(v18 + 16);
    sub_B16F98((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)v6, v19, v20, v21, v22, v23, v24);
    *(_QWORD *)(v18 + 24) = this;
    sub_B16F98((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)this, v26, v27, v28, v29, v30, v31);
    *(_QWORD *)(v18 + 32) = v5;
    v32 = (System_Action_o **)(v18 + 32);
    sub_B16F98((BattleServantConfConponent_o *)(v18 + 32), (System_Int32_array **)v5, v33, v34, v35, v36, v37, v38);
    if ( !System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
            *(System_Collections_Generic_IEnumerable_TSource__o **)(v18 + 16),
            (const MethodInfo_18C7E58 *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, 0, 0LL);
        ActionExtensions__Call(*v32, 0LL);
        return;
      }
LABEL_25:
      sub_B170D4();
    }
    v8 = *v25;
    if ( !*v25 )
      goto LABEL_25;
    if ( !v8->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
    v9 = v8->fields._items->m_Items[0];
    if ( !v9 )
      goto LABEL_25;
    if ( LODWORD(v9->fields.PointStart.fields.x) )
      break;
    if ( !*v25 )
      goto LABEL_25;
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      *v25,
      0,
      (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    v6 = *v25;
    v5 = *v32;
  }
  v40 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !v40 )
    goto LABEL_25;
  CommonUI__SetLoadMode(v40, 1, 0LL);
  v41 = *v25;
  if ( !*v25 )
    goto LABEL_25;
  if ( !v41->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
  v42 = v41->fields._items->m_Items[0];
  if ( !v42 )
    goto LABEL_25;
  x_low = LODWORD(v42->fields.PointStart.fields.x);
  if ( (BYTE3(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantVoiceEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceEntity_TypeInfo);
  }
  VoiceAssetName_30033140 = ServantVoiceEntity__getVoiceAssetName_30033140(x_low, 0LL);
  v45 = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v50 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v46, v47, v48, v49);
  System_Action___ctor(v50, (Il2CppObject *)v18, Method_QuestAfterAction___c__DisplayClass64_0__LoadVoice_b__0__, 0LL);
  if ( !v45 )
    goto LABEL_25;
  SoundManager__LoadAudioAssetStorage(v45, VoiceAssetName_30033140, v50, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestAfterAction__MapObjName(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v6; // x1

  if ( (byte_40FA0CB & 1) == 0 )
  {
    sub_B16FFC(&SrcSpotBasePrefab_TypeInfo, *(_QWORD *)&comType);
    sub_B16FFC(&StringLiteral_1, v6);
    byte_40FA0CB = 1;
  }
  if ( comType )
  {
    if ( comType == 1 )
    {
      return srcLineSprite__GetGobjName(id, 0LL);
    }
    else if ( comType == 2 )
    {
      return MapGimmickComponent__GetGobjName(id, 0LL);
    }
    else
    {
      return (System_String_o *)StringLiteral_1;
    }
  }
  else
  {
    if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
    }
    return SrcSpotBasePrefab__GetGobjName(id, 0LL);
  }
}


void __fastcall QuestAfterAction__OnEnd(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_Action_o *endAct; // x0
  UnityEngine_Collider_o *screenCollider; // x0
  System_Collections_Generic_List_int__o *invalidMapGimmickIdList; // x0
  const MethodInfo *v6; // x1

  if ( (byte_40FA0C5 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Clear__, method);
    byte_40FA0C5 = 1;
  }
  endAct = this->fields.endAct;
  this->fields.isKeepingMainStateButFinished = 1;
  *(_QWORD *)&this->fields.ActionMapTargetType = -1LL;
  ActionExtensions__Call(endAct, 0LL);
  screenCollider = (UnityEngine_Collider_o *)this->fields.screenCollider;
  if ( !screenCollider
    || (UnityEngine_Collider__set_enabled(screenCollider, 0, 0LL),
        (invalidMapGimmickIdList = this->fields.invalidMapGimmickIdList) == 0LL) )
  {
    sub_B170D4();
  }
  System_Collections_Generic_List_int___Clear(
    invalidMapGimmickIdList,
    (const MethodInfo_2F108FC *)Method_System_Collections_Generic_List_int__Clear__);
  QuestAfterAction__Init(this, v6);
  this->fields.isKeepingMainStateButFinished = 0;
}


void __fastcall QuestAfterAction__Play(QuestAfterAction_o *this, System_Action_o *endAct, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  MissionNotifyManager_o *v18; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Action_o *v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  const MethodInfo *v30; // x2

  if ( (byte_40FA0C2 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, endAct);
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v8);
    sub_B16FFC(&Method_QuestAfterAction___c__DisplayClass68_0__Play_b__0__, v9);
    sub_B16FFC(&QuestAfterAction___c__DisplayClass68_0_TypeInfo, v10);
    byte_40FA0C2 = 1;
  }
  v11 = sub_B170CC(QuestAfterAction___c__DisplayClass68_0_TypeInfo, endAct, method, v3, v4);
  QuestAfterAction___c__DisplayClass68_0___ctor((QuestAfterAction___c__DisplayClass68_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_11;
  *(_QWORD *)(v11 + 16) = endAct;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)endAct, v12, v13, v14, v15, v16, v17);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v18 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v18 )
LABEL_11:
    sub_B170D4();
  MissionNotifyManager__StartPause(v18, 0LL);
  v23 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v19, v20, v21, v22);
  System_Action___ctor(v23, (Il2CppObject *)v11, Method_QuestAfterAction___c__DisplayClass68_0__Play_b__0__, 0LL);
  this->fields.endAct = v23;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.endAct,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  if ( this->fields.commandBuf )
    QuestAfterAction__SetState(this, 1, v30);
  else
    ActionExtensions__Call(this->fields.endAct, 0LL);
}


void __fastcall QuestAfterAction__PlaySpecifiedAction(
        QuestAfterAction_o *this,
        System_String_array *actionVals,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x1
  struct QuestAfterAction_Command_array *CommandBuf; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  MissionNotifyManager_o *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_Action_o *v39; // x21
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  System_Action_o *v50; // x21
  const MethodInfo *v51; // x2
  System_Collections_IEnumerator_o *v52; // x1

  if ( (byte_40FA0C3 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, actionVals);
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v8);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v9);
    sub_B16FFC(&Method_QuestAfterAction___c__DisplayClass69_0__PlaySpecifiedAction_b__0__, v10);
    sub_B16FFC(&Method_QuestAfterAction___c__DisplayClass69_0__PlaySpecifiedAction_b__1__, v11);
    sub_B16FFC(&QuestAfterAction___c__DisplayClass69_0_TypeInfo, v12);
    byte_40FA0C3 = 1;
  }
  v13 = sub_B170CC(QuestAfterAction___c__DisplayClass69_0_TypeInfo, actionVals, finishCallback, method, v4);
  QuestAfterAction___c__DisplayClass69_0___ctor((QuestAfterAction___c__DisplayClass69_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_11;
  *(_QWORD *)(v13 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v13 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v13 + 24) = finishCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v13 + 24),
    (System_Int32_array **)finishCallback,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v13 + 24), 0LL);
    return;
  }
  CommandBuf = QuestAfterAction__GenerateCommandBuf(actionVals, v26);
  this->fields.temporaryCommandBuf = CommandBuf;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.temporaryCommandBuf,
    (System_Int32_array **)CommandBuf,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v34 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v34 )
LABEL_11:
    sub_B170D4();
  MissionNotifyManager__StartPause(v34, 0LL);
  v39 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v35, v36, v37, v38);
  System_Action___ctor(
    v39,
    (Il2CppObject *)v13,
    Method_QuestAfterAction___c__DisplayClass69_0__PlaySpecifiedAction_b__0__,
    0LL);
  this->fields.endAct = v39;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.endAct,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v50 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v46, v47, v48, v49);
  System_Action___ctor(
    v50,
    (Il2CppObject *)v13,
    Method_QuestAfterAction___c__DisplayClass69_0__PlaySpecifiedAction_b__1__,
    0LL);
  v52 = QuestAfterAction__WaitWhileMainStateFinished(this, v50, v51);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, v52, 0LL);
}


void __fastcall QuestAfterAction__PlaySpecifiedActionInstantly(
        QuestAfterAction_o *this,
        System_String_array *actionVals,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  struct QuestAfterAction_Command_array *CommandBuf; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Action_o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x2

  if ( (byte_40FA0C4 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, actionVals);
    sub_B16FFC(&Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__70_0__, v5);
    byte_40FA0C4 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL) )
  {
    CommandBuf = QuestAfterAction__GenerateCommandBuf(actionVals, v6);
    this->fields.temporaryCommandBuf = CommandBuf;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.temporaryCommandBuf,
      (System_Int32_array **)CommandBuf,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    v18 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
    System_Action___ctor(
      v18,
      (Il2CppObject *)this,
      Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__70_0__,
      0LL);
    this->fields.endAct = v18;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.endAct,
      (System_Int32_array **)v18,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    QuestAfterAction__SetState(this, 3, v25);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestAfterAction__RequestMapChange(
        QuestAfterAction_o *this,
        int32_t cType,
        int32_t cTarget,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  TerminalPramsManager_c *v9; // x0
  TerminalSceneComponent_c *v10; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  ScrTerminalMap_o *mTerminalMap; // x0

  if ( (byte_40FA0CA & 1) == 0 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, *(_QWORD *)&cType);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v7);
    byte_40FA0CA = 1;
  }
  this->fields.ActionMapTargetType = cType;
  this->fields.ActionMapTargetId = cTarget;
  QuestAfterAction__SetState(this, 0, *(const MethodInfo **)&cTarget);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F604D )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v8);
    byte_40F604D = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v9->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v8);
    byte_40F6042 = 1;
  }
  v10 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v10 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v10->static_fields->mInstance;
  if ( !mInstance || (mTerminalMap = mInstance->fields.mTerminalMap) == 0LL )
    sub_B170D4();
  ScrTerminalMap__RequestMapChange(mTerminalMap, 0, -1, -1, 0LL);
}


void __fastcall QuestAfterAction__SetActionMap(
        QuestAfterAction_o *this,
        QuestAfterAction_Command_o *com,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t id; // w8
  int32_t v9; // w8
  unsigned int v10; // w8
  unsigned int v11; // w8
  System_String_o *v12; // x20
  Il2CppClass *v13; // x0
  System_String_array *v14; // x0
  __int64 v15; // x2
  System_String_array *v16; // x1
  int max_length; // w8
  System_String_o *v18; // x0
  int32_t SpotId; // w0
  System_String_o *param; // x20
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_o *v23; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v24; // x20
  int32_t v25; // w0
  QuestEntity_o *Entity; // x0

  if ( (byte_40FA0BB & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, com);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, v5);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40FA0BB = 1;
  }
  if ( this->fields.ActionMapTargetType == -1 )
  {
    if ( !com )
      goto LABEL_46;
    id = com->fields.id;
    if ( id > 307 )
    {
      if ( id > 500 )
      {
        if ( id == 510 )
        {
          this->fields.ActionMapTargetType = 0;
          param = com->fields.param;
          v14 = (System_String_array *)sub_B17014(char___TypeInfo, 1LL, method);
          if ( v14 )
          {
            v16 = v14;
            if ( !v14->max_length )
              goto LABEL_47;
            LOWORD(v14->m_Items[0]) = 44;
            if ( param )
            {
              v14 = System_String__Split(param, (System_Char_array *)v14, 0LL);
              if ( v14 )
              {
                max_length = v14->max_length;
                if ( max_length >= 2 )
                {
                  v18 = v14->m_Items[1];
                  goto LABEL_31;
                }
                goto LABEL_29;
              }
            }
          }
LABEL_46:
          sub_B170D4();
        }
        if ( id == 550 )
        {
          v9 = 3;
LABEL_23:
          this->fields.ActionMapTargetType = v9;
          v12 = com->fields.param;
          v13 = char___TypeInfo;
          goto LABEL_24;
        }
LABEL_45:
        SpotId = -1;
        this->fields.ActionMapTargetType = -1;
        goto LABEL_32;
      }
      if ( (unsigned int)(id - 400) > 9 )
      {
        if ( id == 500 )
        {
          this->fields.ActionMapTargetType = 0;
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( Instance )
          {
            MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)Instance,
                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
            v23 = com->fields.param;
            v24 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
            v25 = System_Int32__Parse(v23, 0LL);
            if ( v24 )
            {
              Entity = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                          v24,
                                          v25,
                                          (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
              if ( Entity )
              {
                SpotId = QuestEntity__getSpotId(Entity, 0LL);
                goto LABEL_32;
              }
            }
          }
          goto LABEL_46;
        }
        goto LABEL_45;
      }
LABEL_18:
      v9 = 2;
      goto LABEL_23;
    }
    if ( id <= 113 )
    {
      v11 = id - 100;
      if ( v11 > 0xD || ((1 << v11) & 0x3C1F) == 0 )
        goto LABEL_45;
    }
    else
    {
      if ( (unsigned int)(id - 200) < 6 )
        goto LABEL_22;
      v10 = id - 300;
      if ( v10 > 7 )
        goto LABEL_45;
      if ( ((1 << v10) & 0x21) == 0 )
      {
        if ( ((1 << v10) & 0x42) == 0 )
        {
          if ( ((1 << v10) & 0x84) == 0 )
            goto LABEL_45;
          goto LABEL_18;
        }
LABEL_22:
        v9 = 1;
        goto LABEL_23;
      }
    }
    this->fields.ActionMapTargetType = 0;
    v12 = com->fields.param;
    v13 = char___TypeInfo;
LABEL_24:
    v14 = (System_String_array *)sub_B17014(v13, 1LL, method);
    if ( v14 )
    {
      v16 = v14;
      if ( !v14->max_length )
        goto LABEL_47;
      LOWORD(v14->m_Items[0]) = 44;
      if ( v12 )
      {
        v14 = System_String__Split(v12, (System_Char_array *)v14, 0LL);
        if ( v14 )
        {
          max_length = v14->max_length;
LABEL_29:
          if ( max_length )
          {
            v18 = v14->m_Items[0];
LABEL_31:
            SpotId = System_Int32__Parse(v18, 0LL);
LABEL_32:
            this->fields.ActionMapTargetId = SpotId;
            return;
          }
LABEL_47:
          sub_B17100(v14, v16, v15);
          sub_B170A0();
        }
      }
    }
    goto LABEL_46;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestAfterAction__SetState(QuestAfterAction_o *this, int32_t state, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x0

  if ( (byte_40FA0C8 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestAfterAction__setState__, *(_QWORD *)&state);
    byte_40FA0C8 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B170D4();
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
    state,
    (const MethodInfo_2908060 *)Method_CStateManager_QuestAfterAction__setState__);
}


void __fastcall QuestAfterAction__SkipToNextAction(QuestAfterAction_o *this, const MethodInfo *method)
{
  this->fields.isSkippedNext = 1;
}


void __fastcall QuestAfterAction__Update(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x0

  if ( (byte_40FA0C1 & 1) == 0 )
  {
    sub_B16FFC(&Method_CStateManager_QuestAfterAction__update__, method);
    byte_40FA0C1 = 1;
  }
  fsm = this->fields.fsm;
  if ( fsm )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      (const MethodInfo_2908038 *)Method_CStateManager_QuestAfterAction__update__);
}


System_Collections_IEnumerator_o *__fastcall QuestAfterAction__WaitWhileMainStateFinished(
        QuestAfterAction_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x21
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7

  if ( (byte_40FA0C6 & 1) == 0 )
  {
    sub_B16FFC(&QuestAfterAction__WaitWhileMainStateFinished_d__73_TypeInfo, action);
    byte_40FA0C6 = 1;
  }
  v7 = sub_B170CC(QuestAfterAction__WaitWhileMainStateFinished_d__73_TypeInfo, action, method, v3, v4);
  QuestAfterAction__WaitWhileMainStateFinished_d__73___ctor(
    (QuestAfterAction__WaitWhileMainStateFinished_d__73_o *)v7,
    0,
    0LL);
  if ( !v7 )
    sub_B170D4();
  *(_QWORD *)(v7 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = action;
  sub_B16F98((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)action, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall QuestAfterAction___PlaySpecifiedActionInstantly_b__70_0(
        QuestAfterAction_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  const MethodInfo *v15; // x2

  this->fields.endAct = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.endAct, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.temporaryCommandBuf = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.temporaryCommandBuf, 0LL, v9, v10, v11, v12, v13, v14);
  QuestAfterAction__SetState(this, 0, v15);
}


System_Int32_array *__fastcall QuestAfterAction__getMapGmkOffIdList(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *invalidMapGimmickIdList; // x0

  if ( (byte_40FA0BA & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, method);
    byte_40FA0BA = 1;
  }
  invalidMapGimmickIdList = this->fields.invalidMapGimmickIdList;
  if ( !invalidMapGimmickIdList )
    sub_B170D4();
  return System_Collections_Generic_List_int___ToArray(
           invalidMapGimmickIdList,
           (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
}


BlankEarthQuestAfterAction_o *__fastcall QuestAfterAction__get_BlankEarthQuestAfterAction(
        QuestAfterAction_o *this,
        const MethodInfo *method)
{
  return this->fields._BlankEarthQuestAfterAction_k__BackingField;
}


bool __fastcall QuestAfterAction__get_HasFadeCommand(QuestAfterAction_o *this, const MethodInfo *method)
{
  return this->fields.hasFadeCommand;
}


bool __fastcall QuestAfterAction__get_IsRequestedStopBgm(QuestAfterAction_o *this, const MethodInfo *method)
{
  return this->fields.isRequestedStopBgm;
}


QuestAfterAction_TitleInfoControlCallback_o *__fastcall QuestAfterAction__get_TitleInfoCtrlCallback(
        QuestAfterAction_o *this,
        const MethodInfo *method)
{
  return this->fields._TitleInfoCtrlCallback_k__BackingField;
}


void __fastcall QuestAfterAction__releaseVoice(QuestAfterAction_o *this, const MethodInfo *method)
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
  System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *svtVoices; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x21
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v18; // x20
  int32_t klass; // w20
  System_String_o *VoiceAssetName_30033140; // x20
  struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *v21; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40FA0BF & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__, v8);
    sub_B16FFC(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo, v9);
    sub_B16FFC(&ServantVoiceEntity_TypeInfo, v10);
    sub_B16FFC(&SoundManager_TypeInfo, v11);
    byte_40FA0BF = 1;
  }
  memset(&v22, 0, sizeof(v22));
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
    goto LABEL_18;
  Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
             svtVoices,
             (const MethodInfo_2DE9160 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
  v18 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                          System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo,
                                                                          v14,
                                                                          v15,
                                                                          v16,
                                                                          v17);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v18,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
  if ( !v18 )
    goto LABEL_18;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v22,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v18,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v22,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__) )
  {
    if ( !v22.fields.current )
      sub_B170D4();
    klass = (int32_t)v22.fields.current[1].klass;
    if ( (BYTE3(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantVoiceEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantVoiceEntity_TypeInfo);
    }
    VoiceAssetName_30033140 = ServantVoiceEntity__getVoiceAssetName_30033140(klass, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__releaseAudioAssetStorage(VoiceAssetName_30033140, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v22,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
  v21 = this->fields.svtVoices;
  if ( !v21 )
LABEL_18:
    sub_B170D4();
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)v21,
    (const MethodInfo_2DE9598 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
  this->fields.isLoadedVoice = 0;
}


void __fastcall QuestAfterAction__set_HasFadeCommand(QuestAfterAction_o *this, bool value, const MethodInfo *method)
{
  this->fields.hasFadeCommand = value;
}


void __fastcall QuestAfterAction__set_IsRequestedStopBgm(
        QuestAfterAction_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields.isRequestedStopBgm = value;
}


void __fastcall QuestAfterAction_Command___ctor(QuestAfterAction_Command_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_String_o *__fastcall QuestAfterAction_Command__GetAvailableRandomVoice(
        QuestAfterAction_Command_o *this,
        int32_t *svtId,
        const MethodInfo *method)
{
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
  System_String_o *param; // x21
  __int64 v17; // x0
  __int64 v18; // x2
  __int64 v19; // x1
  System_String_array *v20; // x0
  __int64 v21; // x2
  System_Collections_Generic_IEnumerable_T__o *v22; // x22
  WebViewManager_o *Instance; // x0
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Random_o *v34; // x22
  __int64 size; // x1
  unsigned int v36; // w0
  __int64 v37; // x2
  int32_t v38; // w24
  System_String_o *v39; // x25
  System_String_array *v40; // x0
  __int64 v41; // x1
  il2cpp_array_size_t max_length; // w8
  System_String_array *v43; // x25
  System_String_o *v44; // x25
  TerminalSceneComponent_c *v45; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x8
  System_String_o *voiceAssetName; // x26
  int32_t SvtIdfromVoiceAssetName; // w0
  int32_t v50; // w1
  System_String_o *v51; // x0
  System_String_o *v52; // x21
  System_String_array *v53; // x0
  il2cpp_array_size_t v54; // w8
  System_String_array *v55; // x21
  int32_t result; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_40FA2E0 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, svtId);
    sub_B16FFC(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__RemoveAt__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor___66746720, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Count__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__get_Item__, v9);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v10);
    sub_B16FFC(&System_Random_TypeInfo, v11);
    sub_B16FFC(&ServantVoiceEntity_TypeInfo, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v14);
    sub_B16FFC(&StringLiteral_15842, v15);
    byte_40FA2E0 = 1;
  }
  result = 0;
  *svtId = 0;
  if ( this->fields.id != 800 )
    return 0LL;
  param = this->fields.param;
  v17 = sub_B17014(char___TypeInfo, 1LL, method);
  if ( !v17 )
    goto LABEL_56;
  v19 = v17;
  if ( !*(_DWORD *)(v17 + 24) )
    goto LABEL_57;
  *(_WORD *)(v17 + 32) = 44;
  if ( !param )
    goto LABEL_56;
  v20 = System_String__Split(param, (System_Char_array *)v17, 0LL);
  if ( !v20 )
    goto LABEL_56;
  v22 = (System_Collections_Generic_IEnumerable_T__o *)v20;
  if ( (int)v20->max_length > 1 )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
      v29 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                              System_Collections_Generic_List_string__TypeInfo,
                                                                              v25,
                                                                              v26,
                                                                              v27,
                                                                              v28);
      System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
        v29,
        v22,
        (const MethodInfo_2F2520C *)Method_System_Collections_Generic_List_string___ctor___66746720);
      result = 0;
      v34 = (System_Random_o *)sub_B170CC(System_Random_TypeInfo, v30, v31, v32, v33);
      System_Random___ctor(v34, 0LL);
      if ( v29 )
      {
        if ( v34 )
        {
          size = (unsigned int)v29->fields._size;
          while ( 1 )
          {
            v36 = ((__int64 (__fastcall *)(System_Random_o *, __int64, Il2CppMethodPointer))v34->klass->vtable._7_Next.method)(
                    v34,
                    size,
                    v34->klass->vtable._8_NextDouble.methodPtr);
            result = 0;
            v38 = v36;
            if ( v29->fields._size <= v36 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            v39 = (System_String_o *)v29->fields._items->m_Items[v36];
            v17 = sub_B17014(char___TypeInfo, 1LL, v37);
            if ( !v17 )
              break;
            v19 = v17;
            if ( !*(_DWORD *)(v17 + 24) )
              goto LABEL_57;
            *(_WORD *)(v17 + 32) = 95;
            if ( !v39 )
              break;
            v40 = System_String__Split(v39, (System_Char_array *)v17, 0LL);
            if ( !v40 )
              break;
            max_length = v40->max_length;
            v43 = v40;
            if ( max_length == 3 )
            {
              v17 = System_Int32__TryParse(v40->m_Items[0], &result, 0LL);
              if ( v43->max_length < 3 )
                goto LABEL_57;
              v51 = System_String__Concat_43746016(
                      v43->m_Items[1],
                      (System_String_o *)StringLiteral_15842,
                      v43->m_Items[2],
                      0LL);
              if ( !MasterData_WarQuestSelectionMaster )
                break;
              v50 = result;
              v44 = v51;
            }
            else
            {
              if ( max_length != 2 )
                goto LABEL_42;
              result = 0;
              if ( v29->fields._size <= (unsigned int)v38 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
              v44 = (System_String_o *)v29->fields._items->m_Items[v38];
              if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              }
              if ( !byte_40F6042 )
              {
                sub_B16FFC(&TerminalSceneComponent_TypeInfo, v41);
                byte_40F6042 = 1;
              }
              v45 = TerminalSceneComponent_TypeInfo;
              if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                v45 = TerminalSceneComponent_TypeInfo;
              }
              mInstance = v45->static_fields->mInstance;
              if ( !mInstance )
                break;
              TransitionInfo_k__BackingField = mInstance->fields._TransitionInfo_k__BackingField;
              if ( !TransitionInfo_k__BackingField )
                break;
              voiceAssetName = TransitionInfo_k__BackingField->fields.voiceAssetName;
              if ( (BYTE3(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ServantVoiceEntity_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantVoiceEntity_TypeInfo);
              }
              SvtIdfromVoiceAssetName = ServantVoiceEntity__getSvtIdfromVoiceAssetName(voiceAssetName, 0LL);
              if ( !MasterData_WarQuestSelectionMaster )
                break;
              v50 = SvtIdfromVoiceAssetName;
            }
            if ( VoicePlayCondMaster__isVoicePlay(MasterData_WarQuestSelectionMaster, v50, v44, 0LL, -1LL, -1, 0LL) )
            {
              *svtId = result;
              return v44;
            }
LABEL_42:
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              (System_Collections_Generic_List_XWeaponTrail_Element__o *)v29,
              v38,
              (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_string__RemoveAt__);
            size = (unsigned int)v29->fields._size;
            if ( !(_DWORD)size )
            {
              v44 = 0LL;
              *svtId = 0;
              return v44;
            }
          }
        }
      }
    }
LABEL_56:
    sub_B170D4();
  }
  v52 = this->fields.param;
  v17 = sub_B17014(char___TypeInfo, 1LL, v21);
  if ( !v17 )
    goto LABEL_56;
  v19 = v17;
  if ( !*(_DWORD *)(v17 + 24) )
  {
LABEL_57:
    sub_B17100(v17, v19, v18);
    sub_B170A0();
  }
  *(_WORD *)(v17 + 32) = 95;
  if ( !v52 )
    goto LABEL_56;
  v53 = System_String__Split(v52, (System_Char_array *)v17, 0LL);
  if ( !v53 )
    goto LABEL_56;
  v54 = v53->max_length;
  v55 = v53;
  if ( v54 == 3 )
  {
    v17 = System_Int32__TryParse(v53->m_Items[0], svtId, 0LL);
    if ( v55->max_length >= 3 )
      return System_String__Concat_43746016(
               v55->m_Items[1],
               (System_String_o *)StringLiteral_15842,
               v55->m_Items[2],
               0LL);
    goto LABEL_57;
  }
  if ( v54 != 2 )
    return 0LL;
  return this->fields.param;
}


System_String_o *__fastcall QuestAfterAction_Command__GetBgmName(
        QuestAfterAction_Command_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *v5; // x0
  bool v6; // w8
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *v9; // [xsp+0h] [xbp-20h] BYREF
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FA2E3 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_BgmMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FA2E3 = 1;
  }
  result = 0;
  v9 = 0LL;
  v5 = 0LL;
  if ( this->fields.id == 851 )
  {
    v6 = System_Int32__TryParse(this->fields.param, &result, 0LL);
    v5 = 0LL;
    if ( v6 )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_12;
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)Instance,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_BgmMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_12;
      if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
             MasterData_WarQuestSelectionMaster,
             &v9,
             result,
             (const MethodInfo_266F3E4 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__) )
      {
        if ( v9 )
          return v9->fields.age;
LABEL_12:
        sub_B170D4();
      }
      return 0LL;
    }
  }
  return v5;
}


int32_t __fastcall QuestAfterAction_Command__GetSvtId(
        QuestAfterAction_Command_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  int32_t v5; // w0
  System_Char_array *v6; // x0
  __int64 v7; // x2
  System_String_array *v8; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FA2E1 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, str);
    byte_40FA2E1 = 1;
  }
  result = 0;
  v5 = 0;
  if ( this->fields.id == 800 )
  {
    v6 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, method);
    if ( !v6 )
      goto LABEL_14;
    if ( !v6->max_length )
    {
      sub_B17100(v6, v6, v7);
      sub_B170A0();
    }
    v6->m_Items[2] = 95;
    if ( !str || (v8 = System_String__Split(str, v6, 0LL)) == 0LL )
LABEL_14:
      sub_B170D4();
    if ( v8->max_length == 3 )
    {
      result = 0;
      if ( System_Int32__TryParse(v8->m_Items[0], &result, 0LL) )
        return result;
      else
        return 0;
    }
    else
    {
      return 0;
    }
  }
  return v5;
}


System_String_o *__fastcall QuestAfterAction_Command__GetVoiceId(
        QuestAfterAction_Command_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  System_String_o *v3; // x19
  __int64 v5; // x1
  System_Char_array *v6; // x0
  __int64 v7; // x2
  System_String_array *v8; // x0
  il2cpp_array_size_t max_length; // w8

  v3 = str;
  if ( (byte_40FA2E2 & 1) == 0 )
  {
    sub_B16FFC(&char___TypeInfo, str);
    sub_B16FFC(&StringLiteral_15842, v5);
    byte_40FA2E2 = 1;
  }
  if ( this->fields.id == 800 )
  {
    v6 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, method);
    if ( !v6 )
      goto LABEL_13;
    if ( !v6->max_length )
    {
      sub_B17100(v6, v6, v7);
      sub_B170A0();
    }
    v6->m_Items[2] = 95;
    if ( !v3 || (v8 = System_String__Split(v3, v6, 0LL)) == 0LL )
LABEL_13:
      sub_B170D4();
    max_length = v8->max_length;
    if ( max_length == 2 )
      return v3;
    if ( max_length == 3 )
      return System_String__Concat_43746016(v8->m_Items[1], (System_String_o *)StringLiteral_15842, v8->m_Items[2], 0LL);
  }
  return 0LL;
}


void __fastcall QuestAfterAction_StateAdditional___ctor(
        QuestAfterAction_StateAdditional_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateAdditionalBase___ctor(
        QuestAfterAction_StateAdditionalBase_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateAdditionalBase__begin(
        QuestAfterAction_StateAdditionalBase_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  QuestAfterAction_StateMain__begin((QuestAfterAction_StateMain_o *)this, that, method);
  ((void (__fastcall *)(QuestAfterAction_StateAdditionalBase_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_CommandIndex.method)(
    this,
    0LL,
    this->klass->vtable._13_UpdateAnim.methodPtr);
}


QuestAfterAction_Command_array *__fastcall QuestAfterAction_StateAdditionalBase__get_CommandBuf(
        QuestAfterAction_StateAdditionalBase_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_B170D4();
  return that->fields.temporaryCommandBuf;
}


int32_t __fastcall QuestAfterAction_StateAdditionalBase__get_CommandIndex(
        QuestAfterAction_StateAdditionalBase_o *this,
        const MethodInfo *method)
{
  return this->fields._CommandIndex_k__BackingField;
}


void __fastcall QuestAfterAction_StateAdditionalBase__onEnd(
        QuestAfterAction_StateAdditionalBase_o *this,
        bool deleteKey,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8
  UnityEngine_Collider_o *screenCollider; // x0
  QuestAfterAction_o *v6; // x0

  ((void (__fastcall *)(QuestAfterAction_StateAdditionalBase_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_CommandIndex.method)(
    this,
    0LL,
    this->klass->vtable._13_UpdateAnim.methodPtr);
  that = this->fields.that;
  if ( !that
    || (screenCollider = (UnityEngine_Collider_o *)that->fields.screenCollider) == 0LL
    || (UnityEngine_Collider__set_enabled(screenCollider, 0, 0LL), (v6 = this->fields.that) == 0LL) )
  {
    sub_B170D4();
  }
  QuestAfterAction__CallEndAct(v6, 0LL);
}


void __fastcall QuestAfterAction_StateAdditionalBase__set_CommandIndex(
        QuestAfterAction_StateAdditionalBase_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._CommandIndex_k__BackingField = value;
}


void __fastcall QuestAfterAction_StateInstant___ctor(QuestAfterAction_StateInstant_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateInstant__EndAnim(QuestAfterAction_StateInstant_o *this, const MethodInfo *method)
{
  if ( !this->fields.completed )
  {
    QuestAfterAction_StateMain__EndAnim((QuestAfterAction_StateMain_o *)this, method);
    ((void (__fastcall *)(QuestAfterAction_StateInstant_o *, struct QuestAfterAction_o *, Il2CppMethodPointer))this->klass->vtable._13_UpdateAnim.method)(
      this,
      this->fields.that,
      this->klass->vtable._14_EndAnim.methodPtr);
  }
}


bool __fastcall QuestAfterAction_StateInstant__IsUsableCommand(
        QuestAfterAction_StateInstant_o *this,
        QuestAfterAction_Command_o *cmd,
        const MethodInfo *method)
{
  if ( !cmd )
    sub_B170D4();
  return QuestAfterAction__IsQuickCommand(cmd->fields.id, 0LL);
}


void __fastcall QuestAfterAction_StateInstant__UpdateAnim(
        QuestAfterAction_StateInstant_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  if ( !this->fields.completed )
    QuestAfterAction_StateMain__UpdateAnim((QuestAfterAction_StateMain_o *)this, that, method);
}


void __fastcall QuestAfterAction_StateInstant__begin(
        QuestAfterAction_StateInstant_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  QuestAfterAction_StateInstant_c *klass; // x8

  QuestAfterAction_StateMain__begin((QuestAfterAction_StateMain_o *)this, that, method);
  ((void (__fastcall *)(QuestAfterAction_StateInstant_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_CommandIndex.method)(
    this,
    0LL,
    this->klass->vtable._13_UpdateAnim.methodPtr);
  klass = this->klass;
  this->fields.completed = 0;
  ((void (__fastcall *)(QuestAfterAction_StateInstant_o *, QuestAfterAction_o *, Il2CppMethodPointer))klass->vtable._13_UpdateAnim.method)(
    this,
    that,
    klass->vtable._14_EndAnim.methodPtr);
}


void __fastcall QuestAfterAction_StateInstant__onEnd(
        QuestAfterAction_StateInstant_o *this,
        bool deleteKey,
        const MethodInfo *method)
{
  this->fields.completed = 1;
  QuestAfterAction_StateAdditionalBase__onEnd((QuestAfterAction_StateAdditionalBase_o *)this, 0, method);
}


void __fastcall QuestAfterAction_StateInstant__update(
        QuestAfterAction_StateInstant_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestAfterAction_StateMain___ctor(QuestAfterAction_StateMain_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain__EndAnim(QuestAfterAction_StateMain_o *this, const MethodInfo *method)
{
  QuestAfterAction_StateMain_c *klass; // x8
  int v4; // w0
  int v5; // w20
  __int64 v6; // x0

  klass = this->klass;
  this->fields.IsAnimDoing = 0;
  v4 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))klass->vtable._11_get_CommandIndex.method)(
         this,
         klass->vtable._12_set_CommandIndex.methodPtr);
  ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_CommandIndex.method)(
    this,
    (unsigned int)(v4 + 1),
    this->klass->vtable._13_UpdateAnim.methodPtr);
  v5 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._11_get_CommandIndex.method)(
         this,
         this->klass->vtable._12_set_CommandIndex.methodPtr);
  v6 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._10_get_CommandBuf.method)(
         this,
         this->klass->vtable._11_get_CommandIndex.methodPtr);
  if ( !v6 )
    sub_B170D4();
  if ( v5 >= *(_DWORD *)(v6 + 24) )
    ((void (__fastcall *)(QuestAfterAction_StateMain_o *, __int64, void *))this->klass->vtable._15_onEnd.method)(
      this,
      1LL,
      this->klass[1]._1.image);
}


void __fastcall QuestAfterAction_StateMain__ForceEndAnim(
        QuestAfterAction_StateMain_o *this,
        bool deleteKey,
        const MethodInfo *method)
{
  QuestAfterAction_StateMain_c *klass; // x8
  __int64 v6; // x0

  klass = this->klass;
  this->fields.IsAnimDoing = 0;
  v6 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer, const MethodInfo *))klass->vtable._10_get_CommandBuf.method)(
         this,
         klass->vtable._11_get_CommandIndex.methodPtr,
         method);
  if ( !v6 )
    sub_B170D4();
  ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_CommandIndex.method)(
    this,
    *(unsigned int *)(v6 + 24),
    this->klass->vtable._13_UpdateAnim.methodPtr);
  ((void (__fastcall *)(QuestAfterAction_StateMain_o *, bool, void *))this->klass->vtable._15_onEnd.method)(
    this,
    deleteKey,
    this->klass[1]._1.image);
}


bool __fastcall QuestAfterAction_StateMain__IsUsableCommand(
        QuestAfterAction_StateMain_o *this,
        QuestAfterAction_Command_o *cmd,
        const MethodInfo *method)
{
  return 1;
}


void __fastcall QuestAfterAction_StateMain__StartMapGimmick(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct QuestAfterAction_o *that; // x8
  System_Collections_Generic_List_int__o *invalidMapGimmickIdList; // x0
  System_Int32_array *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x8
  System_Int32_array *v14; // x20
  unsigned __int64 v15; // x22
  struct QuestAfterAction_o *v16; // x8
  System_Collections_Generic_List_int__o *v17; // x0
  int32_t v18; // w21
  QuestAfterAction_o *v19; // x0
  srcLineSprite_o *MapComponent_srcLineSprite; // x21
  QuestTree_o *v21; // x0
  struct UIAtlas_o *mcAtlasP; // x8

  if ( (byte_40FA2E8 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Remove__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v4);
    sub_B16FFC(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___, v5);
    sub_B16FFC(&Method_SingletonTemplate_QuestTree__get_Instance__, v6);
    sub_B16FFC(&SingletonTemplate_QuestTree__TypeInfo, v7);
    byte_40FA2E8 = 1;
  }
  that = this->fields.that;
  if ( !that )
    goto LABEL_26;
  invalidMapGimmickIdList = that->fields.invalidMapGimmickIdList;
  if ( !invalidMapGimmickIdList )
    goto LABEL_26;
  v10 = System_Collections_Generic_List_int___ToArray(
          invalidMapGimmickIdList,
          (const MethodInfo_2F125FC *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !v10 )
    goto LABEL_26;
  v13 = *(_QWORD *)&v10->max_length;
  v14 = v10;
  if ( (int)v13 >= 1 )
  {
    v15 = 0LL;
    while ( 1 )
    {
      if ( v15 >= (unsigned int)v13 )
      {
        sub_B17100(v10, v11, v12);
        sub_B170A0();
      }
      v16 = this->fields.that;
      if ( !v16 )
        break;
      v17 = v16->fields.invalidMapGimmickIdList;
      if ( !v17 )
        break;
      v18 = v14->m_Items[v15 + 1];
      System_Collections_Generic_List_int___Remove(
        v17,
        v18,
        (const MethodInfo_2F11E6C *)Method_System_Collections_Generic_List_int__Remove__);
      v19 = this->fields.that;
      if ( !v19 )
        break;
      MapComponent_srcLineSprite = QuestAfterAction__GetMapComponent_srcLineSprite_(
                                     v19,
                                     2,
                                     v18,
                                     this,
                                     (const MethodInfo_19E0B48 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v10 = (System_Int32_array *)UnityEngine_Object__op_Inequality(
                                    (UnityEngine_Object_o *)MapComponent_srcLineSprite,
                                    0LL,
                                    0LL);
      if ( ((unsigned __int8)v10 & 1) != 0 )
      {
        if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
        }
        v21 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapComponent_srcLineSprite || !v21 )
          break;
        v10 = (System_Int32_array *)QuestTree__CheckMapGimmickCond_21527492(
                                      v21,
                                      (MapControl_MapGimmickInfo_o *)MapComponent_srcLineSprite->fields.mcAtlasP,
                                      0LL);
        if ( ((unsigned __int8)v10 & 1) != 0 )
        {
          mcAtlasP = MapComponent_srcLineSprite->fields.mcAtlasP;
          if ( !mcAtlasP )
            break;
          mcAtlasP->fields.m_CachedPtr = 1;
          MapGimmickComponent__SetDispAnim((MapGimmickComponent_o *)MapComponent_srcLineSprite, 1, 0LL);
        }
      }
      LODWORD(v13) = v14->max_length;
      if ( (__int64)++v15 >= (int)v13 )
        return;
    }
LABEL_26:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestAfterAction_StateMain__UpdateAnim(
        QuestAfterAction_StateMain_o *this,
        QuestAfterAction_o *that,
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
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x1
  __int64 v61; // x1
  __int64 v62; // x1
  __int64 v63; // x1
  __int64 v64; // x1
  __int64 v65; // x1
  __int64 v66; // x1
  __int64 v67; // x1
  __int64 v68; // x1
  __int64 v69; // x1
  __int64 v70; // x1
  __int64 v71; // x1
  __int64 v72; // x1
  __int64 v73; // x1
  __int64 v74; // x1
  __int64 v75; // x1
  __int64 v76; // x1
  __int64 v77; // x1
  __int64 v78; // x1
  __int64 v79; // x1
  __int64 v80; // x1
  __int64 v81; // x1
  __int64 v82; // x1
  __int64 v83; // x1
  __int64 v84; // x1
  __int64 v85; // x1
  __int64 v86; // x1
  __int64 v87; // x1
  __int64 v88; // x1
  __int64 v89; // x1
  __int64 v90; // x1
  __int64 v91; // x1
  __int64 v92; // x1
  __int64 v93; // x1
  __int64 v94; // x1
  __int64 v95; // x1
  __int64 v96; // x1
  __int64 v97; // x1
  __int64 v98; // x1
  __int64 v99; // x1
  __int64 v100; // x1
  __int64 v101; // x1
  __int64 v102; // x1
  __int64 v103; // x21
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  QuestAfterAction_o **v110; // x20
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  QuestAfterAction_StateMain_c *klass; // x8
  __int64 v118; // x22
  __int64 IsUnderVista; // x0
  __int64 v120; // x1
  const MethodInfo_29CF778 *v121; // x2
  QuestAfterAction_Command_o *v122; // x22
  __int64 v123; // x1
  __int64 v124; // x2
  __int64 v125; // x3
  __int64 v126; // x4
  QuestAfterAction_o *v127; // x23
  BlankEarthQuestAfterAction_o *BlankEarthQuestAfterAction_k__BackingField; // x24
  System_Action_o *v129; // x25
  const MethodInfo *v130; // x1
  __int64 v131; // x2
  __int64 v132; // x3
  __int64 v133; // x4
  int id; // w8
  float v135; // s0
  __int64 v136; // x1
  __int64 v137; // x2
  __int64 v138; // x3
  __int64 v139; // x4
  float DEFAULT_FADE_TIME; // s8
  AvalonSceneManager_c *v141; // x0
  TerminalSceneComponent_c *v142; // x0
  TerminalSceneComponent_o *v143; // x19
  System_Action_o *v144; // x20
  TerminalSceneComponent_o *v145; // x0
  float v146; // s0
  System_Action_o *v147; // x1
  System_String_o *v148; // x19
  System_String_o *v149; // x20
  System_String_o *v150; // x20
  CommonUI_o *Instance; // x22
  __int64 v152; // x1
  __int64 v153; // x2
  __int64 v154; // x3
  __int64 v155; // x4
  System_Action_o *v156; // x23
  System_String_o *v157; // x23
  __int64 v158; // x8
  __int64 v159; // x24
  float v160; // s8
  System_String_o *v161; // x21
  __int64 v162; // x20
  System_String_array **v163; // x2
  System_String_array **v164; // x3
  System_Boolean_array **v165; // x4
  System_Int32_array **v166; // x5
  System_Int32_array *v167; // x6
  System_Int32_array *v168; // x7
  __int64 v169; // x23
  System_String_o *v170; // x21
  __int64 v171; // x2
  void *ComponentInChildren_Dropdown_DropdownItem; // x0
  System_String_array **v173; // x2
  System_Int32_array **v174; // x1
  __int64 v175; // x8
  System_String_o **v176; // x22
  int32_t v177; // w21
  _BOOL4 v178; // w24
  bool v179; // w25
  System_String_o *v180; // x21
  System_String_array *v181; // x0
  System_String_array **v182; // x2
  System_Int32_array **v183; // x1
  System_String_array *v184; // x23
  __int64 v185; // x1
  int32_t v186; // w21
  int32_t v187; // w22
  int32_t v188; // w23
  __int64 v189; // x20
  System_String_array **v190; // x2
  System_String_array **v191; // x3
  System_Boolean_array **v192; // x4
  System_Int32_array **v193; // x5
  System_Int32_array *v194; // x6
  System_Int32_array *v195; // x7
  __int64 v196; // x8
  QuestAfterAction_o *v197; // x21
  int32_t v198; // w0
  System_Int32_array **v199; // x0
  System_String_array **v200; // x2
  System_String_array **v201; // x3
  System_Boolean_array **v202; // x4
  System_Int32_array **v203; // x5
  System_Int32_array *v204; // x6
  System_Int32_array *v205; // x7
  UnityEngine_Object_o *v206; // x19
  __int64 v207; // x1
  __int64 v208; // x2
  __int64 v209; // x3
  __int64 v210; // x4
  SrcSpotBasePrefab_o *v211; // x19
  System_Action_o *v212; // x21
  int32_t v213; // w1
  __int64 v214; // x20
  System_String_array **v215; // x2
  System_String_array **v216; // x3
  System_Boolean_array **v217; // x4
  System_Int32_array **v218; // x5
  System_Int32_array *v219; // x6
  System_Int32_array *v220; // x7
  __int64 v221; // x8
  QuestAfterAction_o *v222; // x21
  int32_t v223; // w0
  System_Int32_array **v224; // x0
  System_String_array **v225; // x2
  System_String_array **v226; // x3
  System_Boolean_array **v227; // x4
  System_Int32_array **v228; // x5
  System_Int32_array *v229; // x6
  System_Int32_array *v230; // x7
  UnityEngine_Object_o *v231; // x19
  __int64 v232; // x1
  __int64 v233; // x2
  __int64 v234; // x3
  __int64 v235; // x4
  ModelLineComponent_o *v236; // x19
  System_Action_o *v237; // x21
  int32_t v238; // w1
  System_String_o *v239; // x21
  __int64 v240; // x3
  __int64 v241; // x4
  __int64 v242; // x8
  QuestAfterAction_o *v243; // x9
  QuestAfterAction_TitleInfoControlCallback_o *TitleInfoCtrlCallback_k__BackingField; // x20
  int32_t v245; // w20
  WebViewManager_o *v246; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  QuestEntity_o *v248; // x22
  QuestTree_o *v249; // x0
  MapControl_QuestInfo_o *QuestInfo; // x0
  const MethodInfo *v251; // x2
  MapControl_QuestInfo_o *v252; // x21
  __int64 v253; // x1
  TerminalPramsManager_c *v254; // x0
  int32_t questPhase; // w20
  __int64 v256; // x1
  __int64 v257; // x2
  __int64 v258; // x3
  __int64 v259; // x4
  clsQuestCheck_o *v260; // x19
  QuestAfterAction_StateMain___c_c *v261; // x8
  struct QuestAfterAction_StateMain___c_StaticFields *v262; // x9
  System_Action_o *_9__16_33; // x20
  Il2CppObject *v264; // x21
  struct QuestAfterAction_StateMain___c_StaticFields *v265; // x0
  System_String_array **v266; // x2
  System_String_array **v267; // x3
  System_Boolean_array **v268; // x4
  System_Int32_array **v269; // x5
  System_Int32_array *v270; // x6
  System_Int32_array *v271; // x7
  TerminalSceneComponent_c *v272; // x0
  TerminalSceneComponent_o *v273; // x21
  System_String_o *BgmName; // x0
  System_String_o *param; // x21
  System_String_o **v276; // x22
  int v277; // w23
  float v278; // s8
  int32_t v279; // w21
  QuestAfterAction_o *v280; // x8
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *svtVoices; // x0
  AutomatedAction_o *v282; // x0
  __int64 v283; // x1
  TerminalSceneComponent_c *v284; // x0
  struct TerminalSceneComponent_o *v285; // x8
  TerminalSceneComponent_c *v286; // x0
  struct TerminalSceneComponent_o *v287; // x8
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x8
  int optionId; // w20
  System_String_o *VoiceAssetName_30033140; // x0
  System_String_o *v291; // x20
  System_String_o *v292; // x21
  SeManager_c *v293; // x0
  float DEFAULT_VOLUME; // s8
  TerminalSceneComponent_c *v295; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  ScrTerminalListTop_o *mTerminalList; // x0
  PlayMakerFSM_o *MyFsmP; // x0
  PlayMakerFSM_o *v299; // x20
  System_String_o *ActiveStateName; // x0
  __int64 v301; // x1
  __int64 v302; // x2
  __int64 v303; // x3
  __int64 v304; // x4
  TerminalSceneComponent_c *v305; // x0
  struct TerminalSceneComponent_o *v306; // x8
  struct ScrTerminalListTop_o *v307; // x8
  QuestBoardListViewManager_o *mQuestBoardListViewManager; // x21
  QuestAfterAction_StateMain___c_c *v309; // x0
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x8
  System_Action_o *_9__16_31; // x22
  Il2CppObject *v312; // x23
  struct QuestAfterAction_StateMain___c_StaticFields *v313; // x0
  System_String_array **v314; // x2
  System_String_array **v315; // x3
  System_Boolean_array **v316; // x4
  System_Int32_array **v317; // x5
  System_Int32_array *v318; // x6
  System_Int32_array *v319; // x7
  __int64 v320; // x1
  TerminalSceneComponent_c *v321; // x0
  TerminalSceneComponent_o *v322; // x0
  System_String_o *v323; // x20
  System_String_array *v324; // x21
  __int64 v325; // x1
  __int64 v326; // x2
  __int64 v327; // x3
  __int64 v328; // x4
  int32_t v329; // w20
  int32_t v330; // w22
  System_String_o *v331; // x23
  __int64 v332; // x8
  __int64 v333; // x24
  System_String_o *v334; // x23
  System_String_array *v335; // x0
  System_String_array *v336; // x23
  float v337; // s0
  float v338; // s8
  int32_t v339; // w19
  __int64 v340; // x8
  ScrTerminalMap_o *v341; // x24
  float v342; // s0
  float v343; // s9
  float v344; // s0
  __int64 v345; // x1
  const MethodInfo_29CF778 *v346; // x2
  __int64 v347; // x3
  __int64 v348; // x4
  float v349; // s0
  float v350; // s1
  float v351; // s2
  float v352; // s10
  float v353; // s9
  float v354; // s11
  MapCamera_o *v355; // x20
  System_Action_o *v356; // x22
  System_String_o *v357; // x23
  __int64 v358; // x8
  __int64 v359; // x24
  System_String_o *v360; // x20
  System_String_array *v361; // x0
  System_String_array *v362; // x22
  int32_t v363; // w0
  __int64 v364; // x1
  __int64 v365; // x2
  __int64 v366; // x3
  __int64 v367; // x4
  int32_t v368; // w20
  float v369; // s8
  int32_t v370; // w19
  TerminalPramsManager_c *v371; // x0
  TerminalSceneComponent_c *v372; // x0
  struct TerminalSceneComponent_o *v373; // x8
  ScrTerminalMap_o *v374; // x0
  __int64 v375; // x1
  TerminalPramsManager_c *v376; // x0
  __int64 v377; // x1
  int32_t v378; // w21
  TerminalPramsManager_c *v379; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  QuestAfterAction_o *v381; // x20
  int32_t SpotId; // w0
  UnityEngine_Object_o *v383; // x20
  System_String_o *v384; // x19
  System_String_o *v385; // x20
  System_String_o *v386; // x20
  CommonUI_o *v387; // x22
  __int64 v388; // x1
  __int64 v389; // x2
  __int64 v390; // x3
  __int64 v391; // x4
  System_Action_o *v392; // x23
  System_String_o *v393; // x19
  System_String_o *v394; // x20
  System_String_o *v395; // x20
  CommonUI_o *v396; // x22
  __int64 v397; // x1
  __int64 v398; // x2
  __int64 v399; // x3
  __int64 v400; // x4
  System_Action_o *v401; // x23
  System_String_o *v402; // x23
  __int64 v403; // x0
  System_String_array **v404; // x3
  System_Boolean_array **v405; // x4
  System_Int32_array **v406; // x5
  System_Int32_array *v407; // x6
  System_Int32_array *v408; // x7
  System_String_array *v409; // x20
  System_String_o *v410; // x23
  __int64 v411; // x0
  System_String_array **v412; // x3
  System_Boolean_array **v413; // x4
  System_Int32_array **v414; // x5
  System_Int32_array *v415; // x6
  System_Int32_array *v416; // x7
  System_String_array *v417; // x20
  UnityEngine_Object_o *MapComponent_srcLineSprite; // x22
  __int64 v419; // x1
  UnityEngine_Component_o *v420; // x20
  TerminalSceneComponent_c *v421; // x0
  struct TerminalSceneComponent_o *v422; // x8
  ScrTerminalMap_o *mTerminalMap; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  TerminalSceneComponent_c *v425; // x0
  struct TerminalSceneComponent_o *v426; // x8
  ScrTerminalMap_o *v427; // x20
  UnityEngine_GameObject_o *v428; // x22
  __int64 v429; // x1
  __int64 v430; // x2
  __int64 v431; // x3
  __int64 v432; // x4
  System_Action_o *v433; // x23
  SceneJumpInfo_o *v434; // x21
  AvalonSceneManager_o *v435; // x0
  System_String_o *v436; // x22
  System_String_array *v437; // x0
  int max_length; // w23
  System_String_array *v439; // x22
  float v440; // s0
  float v441; // s8
  __int64 v442; // x3
  __int64 v443; // x4
  float v444; // s0
  MapCamera_o *v445; // x19
  float v446; // s0
  float v447; // s9
  int32_t v448; // w20
  System_String_o *v449; // x23
  System_String_array *v450; // x0
  System_String_array *v451; // x23
  float v452; // s0
  float v453; // s9
  float v454; // s0
  float v455; // s10
  float v456; // s0
  float v457; // s11
  float v458; // s0
  float v459; // s8
  __int64 v460; // x1
  TerminalSceneComponent_c *v461; // x0
  struct TerminalSceneComponent_o *v462; // x8
  ScrTerminalMap_o *v463; // x0
  __int64 v464; // x1
  const MethodInfo_29CF778 *v465; // x2
  __int64 v466; // x3
  __int64 v467; // x4
  float v468; // s0
  float v469; // s1
  float v470; // s2
  MapCamera_o *v471; // x0
  float v472; // s0
  float v473; // s1
  float v474; // s2
  float v475; // s3
  int32_t v476; // w1
  System_Action_o *v477; // x2
  System_String_o *v478; // x22
  System_String_array *v479; // x0
  System_String_array *v480; // x22
  float v481; // s0
  QuestAfterAction_o *v482; // x20
  float v483; // s8
  int32_t v484; // w0
  UnityEngine_Object_o *v485; // x19
  __int64 v486; // x8
  ScrTerminalMap_o *v487; // x20
  float v488; // s0
  float v489; // s9
  float v490; // s0
  float v491; // s0
  float v492; // s1
  float v493; // s2
  float v494; // s9
  float v495; // s10
  float v496; // s11
  int32_t v497; // w20
  __int64 v498; // x1
  __int64 v499; // x2
  __int64 v500; // x3
  __int64 v501; // x4
  System_Action_o *v502; // x22
  System_String_o *v503; // x21
  __int64 v504; // x8
  System_String_o **v505; // x22
  int32_t v506; // w21
  bool v507; // w22
  System_String_o *v508; // x21
  __int64 v509; // x8
  System_String_o **v510; // x22
  int32_t v511; // w21
  bool v512; // w22
  System_String_o *v513; // x21
  __int64 v514; // x8
  System_String_o **v515; // x22
  int32_t v516; // w21
  bool v517; // w22
  System_String_o *v518; // x21
  void *v519; // x21
  QuestAfterAction_o *v520; // x20
  int32_t v521; // w0
  UnityEngine_Object_o *v522; // x20
  UnityEngine_GameObject_o *v523; // x0
  UIWidget_o *v524; // x20
  __int64 v525; // x20
  System_String_array **v526; // x2
  System_String_array **v527; // x3
  System_Boolean_array **v528; // x4
  System_Int32_array **v529; // x5
  System_Int32_array *v530; // x6
  System_Int32_array *v531; // x7
  __int64 v532; // x23
  System_String_o *v533; // x21
  __int64 v534; // x2
  __int64 v535; // x8
  System_String_o **v536; // x22
  int32_t v537; // w21
  _BOOL4 v538; // w24
  bool v539; // w25
  __int64 v540; // x20
  System_String_array **v541; // x2
  System_String_array **v542; // x3
  System_Boolean_array **v543; // x4
  System_Int32_array **v544; // x5
  System_Int32_array *v545; // x6
  System_Int32_array *v546; // x7
  __int64 v547; // x8
  QuestAfterAction_o *v548; // x21
  int32_t v549; // w0
  System_Int32_array **v550; // x0
  System_String_array **v551; // x2
  System_String_array **v552; // x3
  System_Boolean_array **v553; // x4
  System_Int32_array **v554; // x5
  System_Int32_array *v555; // x6
  System_Int32_array *v556; // x7
  UnityEngine_Object_o *v557; // x19
  __int64 v558; // x1
  __int64 v559; // x2
  __int64 v560; // x3
  __int64 v561; // x4
  MapGimmickComponent_o *v562; // x19
  System_Action_o *v563; // x21
  __int64 v564; // x1
  TerminalSceneComponent_c *v565; // x0
  TerminalSceneComponent_o *v566; // x19
  __int64 v567; // x20
  System_String_array **v568; // x2
  System_String_array **v569; // x3
  System_Boolean_array **v570; // x4
  System_Int32_array **v571; // x5
  System_Int32_array *v572; // x6
  System_Int32_array *v573; // x7
  System_String_o *v574; // x21
  __int64 v575; // x2
  System_Int32_array **v576; // x0
  __int64 *v577; // x21
  System_String_array **v578; // x2
  System_String_array **v579; // x3
  System_Boolean_array **v580; // x4
  System_Int32_array **v581; // x5
  System_Int32_array *v582; // x6
  System_Int32_array *v583; // x7
  __int64 v584; // x8
  __int64 v585; // x9
  QuestAfterAction_o *v586; // x21
  int32_t v587; // w0
  System_Int32_array **v588; // x0
  System_String_array **v589; // x2
  System_String_array **v590; // x3
  System_Boolean_array **v591; // x4
  System_Int32_array **v592; // x5
  System_Int32_array *v593; // x6
  System_Int32_array *v594; // x7
  UnityEngine_Object_o *v595; // x19
  __int64 v596; // x1
  __int64 v597; // x2
  __int64 v598; // x3
  __int64 v599; // x4
  MapGimmickComponent_o *v600; // x19
  System_Action_o *v601; // x0
  __int64 *v602; // x8
  System_Action_o *v603; // x21
  System_String_array **v604; // x2
  System_String_array **v605; // x3
  System_Boolean_array **v606; // x4
  System_Int32_array **v607; // x5
  System_Int32_array *v608; // x6
  System_Int32_array *v609; // x7
  __int64 v610; // x8
  QuestAfterAction_o *v611; // x21
  int32_t v612; // w0
  System_Int32_array **v613; // x0
  __int64 v614; // x19
  System_String_array **v615; // x2
  System_String_array **v616; // x3
  System_Boolean_array **v617; // x4
  System_Int32_array **v618; // x5
  System_Int32_array *v619; // x6
  System_Int32_array *v620; // x7
  UnityEngine_Object_o *v621; // x21
  QuestTree_o *v622; // x0
  bool v623; // w0
  bool v624; // w22
  __int64 v625; // x1
  __int64 v626; // x2
  __int64 v627; // x3
  __int64 v628; // x4
  int32_t v629; // w1
  System_String_o *v630; // x21
  System_String_array *v631; // x0
  System_String_array *v632; // x21
  QuestAfterAction_o *v633; // x22
  int32_t v634; // w0
  srcLineSprite_o *v635; // x22
  int32_t v636; // w0
  __int64 v637; // x23
  System_String_array **v638; // x2
  System_String_array **v639; // x3
  System_Boolean_array **v640; // x4
  System_Int32_array **v641; // x5
  System_Int32_array *v642; // x6
  System_Int32_array *v643; // x7
  __int64 v644; // x20
  QuestAfterAction_o *v645; // x21
  int32_t v646; // w0
  System_Int32_array **v647; // x0
  System_Int32_array ***v648; // x19
  System_String_array **v649; // x2
  System_String_array **v650; // x3
  System_Boolean_array **v651; // x4
  System_Int32_array **v652; // x5
  System_Int32_array *v653; // x6
  System_Int32_array *v654; // x7
  UnityEngine_Object_o *v655; // x21
  __int64 v656; // x1
  __int64 v657; // x2
  __int64 v658; // x3
  __int64 v659; // x4
  SrcSpotBasePrefab_o *v660; // x21
  System_Action_o *v661; // x22
  System_String_array **v662; // x2
  System_String_array **v663; // x3
  System_Boolean_array **v664; // x4
  System_Int32_array **v665; // x5
  System_Int32_array *v666; // x6
  System_Int32_array *v667; // x7
  __int64 v668; // x0
  System_Int32_array **v669; // x1
  BattleServantConfConponent_o *p_lastDispSpot; // x0
  System_String_o *v671; // x21
  System_String_array *v672; // x0
  System_String_array *v673; // x22
  QuestAfterAction_o *v674; // x21
  int32_t v675; // w0
  srcLineSprite_o *v676; // x21
  int32_t v677; // w0
  __int64 v678; // x1
  __int64 v679; // x2
  __int64 v680; // x3
  __int64 v681; // x4
  System_Action_o *v682; // x22
  QuestAfterAction_o *v683; // x0
  QuestAfterAction_o *v684; // x21
  int32_t v685; // w0
  UnityEngine_Object_o *v686; // x21
  _DWORD *monitor; // x8
  SrcSpotBasePrefab_o *v688; // x0
  int32_t v689; // w1
  __int64 v690; // x20
  System_String_array **v691; // x2
  System_String_array **v692; // x3
  System_Boolean_array **v693; // x4
  System_Int32_array **v694; // x5
  System_Int32_array *v695; // x6
  System_Int32_array *v696; // x7
  __int64 v697; // x8
  QuestAfterAction_o *v698; // x21
  int32_t v699; // w0
  System_Int32_array **v700; // x0
  System_String_array **v701; // x2
  System_String_array **v702; // x3
  System_Boolean_array **v703; // x4
  System_Int32_array **v704; // x5
  System_Int32_array *v705; // x6
  System_Int32_array *v706; // x7
  UnityEngine_Object_o *v707; // x19
  __int64 v708; // x1
  __int64 v709; // x2
  __int64 v710; // x3
  __int64 v711; // x4
  QuestAfterAction_o *v712; // x21
  int32_t v713; // w0
  UnityEngine_Object_o *v714; // x21
  _DWORD *v715; // x8
  QuestAfterAction_o *v716; // x21
  int32_t v717; // w0
  _DWORD *v718; // x8
  System_Action_o *v719; // x21
  const MethodInfo *v720; // x2
  _BOOL4 v721; // w23
  QuestAfterAction_o *v722; // x21
  int32_t v723; // w0
  srcLineSprite_o *v724; // x21
  _DWORD *mcTweenScaleP; // x8
  __int64 v726; // x20
  System_String_array **v727; // x2
  System_String_array **v728; // x3
  System_Boolean_array **v729; // x4
  System_Int32_array **v730; // x5
  System_Int32_array *v731; // x6
  System_Int32_array *v732; // x7
  __int64 v733; // x8
  QuestAfterAction_o *v734; // x21
  int32_t v735; // w0
  System_Int32_array **v736; // x0
  System_String_array **v737; // x2
  System_String_array **v738; // x3
  System_Boolean_array **v739; // x4
  System_Int32_array **v740; // x5
  System_Int32_array *v741; // x6
  System_Int32_array *v742; // x7
  UnityEngine_Object_o *v743; // x19
  __int64 v744; // x1
  __int64 v745; // x2
  __int64 v746; // x3
  __int64 v747; // x4
  _BOOL4 IsMapModel; // w23
  QuestAfterAction_o *v749; // x21
  int32_t v750; // w0
  srcLineSprite_o *v751; // x21
  _DWORD *mcAtlasP; // x8
  __int64 v753; // x20
  System_String_array **v754; // x2
  System_String_array **v755; // x3
  System_Boolean_array **v756; // x4
  System_Int32_array **v757; // x5
  System_Int32_array *v758; // x6
  System_Int32_array *v759; // x7
  __int64 v760; // x8
  QuestAfterAction_o *v761; // x21
  int32_t v762; // w0
  System_Int32_array **v763; // x0
  System_String_array **v764; // x2
  System_String_array **v765; // x3
  System_Boolean_array **v766; // x4
  System_Int32_array **v767; // x5
  System_Int32_array *v768; // x6
  System_Int32_array *v769; // x7
  UnityEngine_Object_o *v770; // x19
  __int64 v771; // x1
  __int64 v772; // x2
  __int64 v773; // x3
  __int64 v774; // x4
  _BOOL4 v775; // w23
  QuestAfterAction_o *v776; // x21
  int32_t v777; // w0
  srcLineSprite_o *v778; // x21
  float v779; // s0
  int v780; // w23
  QuestAfterAction_o *v781; // x25
  int32_t v782; // w0
  UnityEngine_Object_o *v783; // x25
  __int64 v784; // x1
  const MethodInfo_29CF778 *v785; // x2
  __int64 v786; // x3
  __int64 v787; // x4
  float x; // s10
  float y; // s9
  float z; // s11
  TerminalSceneComponent_c *v791; // x0
  struct TerminalSceneComponent_o *v792; // x8
  ScrTerminalMap_o *v793; // x0
  MapCamera_o *mMapCamera; // x19
  System_Action_o *v795; // x0
  __int64 *v796; // x8
  float v797; // s0
  float v798; // s0
  QuestAfterAction_o *v799; // x25
  int32_t v800; // w0
  UnityEngine_Object_o *MapGameObject; // x25
  __int64 v802; // x1
  TerminalSceneComponent_c *v803; // x0
  struct TerminalSceneComponent_o *v804; // x8
  ScrTerminalMap_o *v805; // x0
  __int64 v806; // x3
  __int64 v807; // x4
  System_String_o *v808; // x19
  QuestAfterAction_o *v809; // x25
  int32_t v810; // w0
  UnityEngine_Object_o *v811; // x25
  srcLineSprite_o *Component_srcLineSprite; // x0
  __int64 v813; // x1
  float v814; // s9
  float v815; // s10
  float v816; // s11
  TerminalSceneComponent_c *v817; // x0
  struct TerminalSceneComponent_o *v818; // x8
  ScrTerminalMap_o *v819; // x0
  float v820; // s0
  float v821; // s1
  float v822; // s2
  System_String_o *v823; // x0
  System_String_array *v824; // x0
  int v825; // w8
  System_String_o *v826; // x19
  System_String_o *v827; // x20
  System_String_o *v828; // x0
  System_String_array *v829; // x0
  int v830; // w8
  System_String_o *v831; // x19
  System_String_o *v832; // x20
  System_String_o *v833; // x20
  CommonUI_o *v834; // x22
  __int64 v835; // x1
  __int64 v836; // x2
  __int64 v837; // x3
  __int64 v838; // x4
  System_Action_o *v839; // x23
  CommonUI_o *v840; // x22
  __int64 v841; // x1
  __int64 v842; // x2
  __int64 v843; // x3
  __int64 v844; // x4
  System_Action_o *v845; // x23
  srcLineSprite_o *v846; // x21
  struct UIAtlas_o *v847; // x8
  QuestAfterAction_StateMain_c *v848; // x8
  int v849; // w0
  srcLineSprite_o *v850; // x21
  srcLineSprite_o *v851; // x21
  struct UIAtlas_o *v852; // x8
  QuestAfterAction_o *v853; // x0
  System_Int32_array **v854; // x0
  MapGimmickComponent_o **v855; // x21
  System_String_array **v856; // x2
  System_String_array **v857; // x3
  System_Boolean_array **v858; // x4
  System_Int32_array **v859; // x5
  System_Int32_array *v860; // x6
  System_Int32_array *v861; // x7
  UnityEngine_Object_o *v862; // x22
  __int64 v863; // x1
  __int64 v864; // x2
  __int64 v865; // x3
  __int64 v866; // x4
  MapGimmickComponent_o *v867; // x21
  System_Action_o *v868; // x0
  System_Action_o *v869; // x22
  int32_t v870; // w1
  QuestAfterAction_o *v871; // x0
  System_Int32_array **v872; // x0
  MapGimmickComponent_o **v873; // x21
  System_String_array **v874; // x2
  System_String_array **v875; // x3
  System_Boolean_array **v876; // x4
  System_Int32_array **v877; // x5
  System_Int32_array *v878; // x6
  System_Int32_array *v879; // x7
  UnityEngine_Object_o *v880; // x22
  __int64 v881; // x1
  __int64 v882; // x2
  __int64 v883; // x3
  __int64 v884; // x4
  System_Action_o *v885; // x0
  UnityEngine_Object_o *v886; // x21
  int v887; // w9
  __int64 v888; // x20
  System_String_array **v889; // x2
  System_String_array **v890; // x3
  System_Boolean_array **v891; // x4
  System_Int32_array **v892; // x5
  System_Int32_array *v893; // x6
  System_Int32_array *v894; // x7
  __int64 v895; // x8
  QuestAfterAction_o *v896; // x21
  int32_t v897; // w0
  System_Int32_array **v898; // x0
  System_String_array **v899; // x2
  System_String_array **v900; // x3
  System_Boolean_array **v901; // x4
  System_Int32_array **v902; // x5
  System_Int32_array *v903; // x6
  System_Int32_array *v904; // x7
  UnityEngine_Object_o *v905; // x19
  __int64 v906; // x1
  __int64 v907; // x2
  __int64 v908; // x3
  __int64 v909; // x4
  srcLineSprite_o *v910; // x19
  System_Action_o *v911; // x21
  int32_t v912; // w1
  __int64 v913; // x20
  System_String_array **v914; // x2
  System_String_array **v915; // x3
  System_Boolean_array **v916; // x4
  System_Int32_array **v917; // x5
  System_Int32_array *v918; // x6
  System_Int32_array *v919; // x7
  __int64 v920; // x8
  QuestAfterAction_o *v921; // x21
  int32_t v922; // w0
  System_Int32_array **v923; // x0
  System_String_array **v924; // x2
  System_String_array **v925; // x3
  System_Boolean_array **v926; // x4
  System_Int32_array **v927; // x5
  System_Int32_array *v928; // x6
  System_Int32_array *v929; // x7
  UnityEngine_Object_o *v930; // x19
  __int64 v931; // x1
  __int64 v932; // x2
  __int64 v933; // x3
  __int64 v934; // x4
  __int64 v935; // x20
  System_String_array **v936; // x2
  System_String_array **v937; // x3
  System_Boolean_array **v938; // x4
  System_Int32_array **v939; // x5
  System_Int32_array *v940; // x6
  System_Int32_array *v941; // x7
  __int64 v942; // x8
  QuestAfterAction_o *v943; // x21
  int32_t v944; // w0
  System_Int32_array **v945; // x0
  System_String_array **v946; // x2
  System_String_array **v947; // x3
  System_Boolean_array **v948; // x4
  System_Int32_array **v949; // x5
  System_Int32_array *v950; // x6
  System_Int32_array *v951; // x7
  UnityEngine_Object_o *v952; // x19
  __int64 v953; // x1
  __int64 v954; // x2
  __int64 v955; // x3
  __int64 v956; // x4
  UnityEngine_Object_o *v957; // x21
  UnityEngine_Object_o *v958; // x21
  System_Action_o *v959; // x22
  float v960; // s9
  float v961; // s11
  float v962; // s10
  __int64 v963; // x3
  __int64 v964; // x4
  System_String_o *v965; // x19
  MapGimmickComponent_o *v966; // x0
  System_Action_o *v967; // x2
  TerminalSceneComponent_c *v968; // x0
  struct TerminalSceneComponent_o *v969; // x8
  ScrTerminalMap_o *v970; // x22
  System_Action_o *v971; // x23
  MapCamera_o *v972; // x19
  float v973; // s0
  __int64 v974; // x1
  __int64 v975; // x2
  __int64 v976; // x3
  __int64 v977; // x4
  System_Action_o *v978; // x0
  __int64 *v979; // x8
  System_Action_o *v980; // x20
  float v981; // s0
  __int64 v982; // x1
  __int64 v983; // x2
  __int64 v984; // x3
  __int64 v985; // x4
  MapCamera_o *v986; // x19
  float v987; // s0
  __int64 v988; // x1
  __int64 v989; // x2
  __int64 v990; // x3
  __int64 v991; // x4
  System_Action_o *v992; // x20
  MapCamera_o *v993; // x0
  float v994; // s0
  int32_t v995; // w4
  System_Action_o *v996; // x5
  MapCamera_o *v997; // x20
  float v998; // s0
  __int64 v999; // x1
  __int64 v1000; // x2
  __int64 v1001; // x3
  __int64 v1002; // x4
  System_Action_o *v1003; // x22
  float v1004; // s0
  __int64 v1005; // x1
  __int64 v1006; // x2
  __int64 v1007; // x3
  __int64 v1008; // x4
  System_Nullable_float__o size; // [xsp+30h] [xbp-A0h] BYREF
  System_Nullable_Vector3__o v1010; // [xsp+38h] [xbp-98h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+48h] [xbp-88h] BYREF
  UnityEngine_Color_o color; // [xsp+50h] [xbp-80h] BYREF
  WarEntity_o *entity; // [xsp+88h] [xbp-48h] BYREF
  System_Nullable_float__o v1014; // 0:x0.8
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v1016; // 0:x0.8
  System_Nullable_float__o v1017; // 0:x0.8
  System_Nullable_float__o v1018; // 0:x0.8
  System_Nullable_float__o v1019; // 0:x3.8
  System_Nullable_Vector3__o v1020; // 0:x0.16
  System_Nullable_Vector3__o v1021; // 0:x0.16
  System_Nullable_Vector3__o v1022; // 0:x0.16
  System_Nullable_Vector3__o v1023; // 0:x0.16
  System_Nullable_Vector3__o v1024; // 0:x0.16
  System_Nullable_Vector3__o v1025; // 0:x1.16
  UnityEngine_Vector3_o v1026; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1027; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1028; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1029; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1030; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1032; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1033; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1035; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1036; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1037; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v1038; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FA2E6 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, that);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v7);
    sub_B16FFC(&char___TypeInfo, v8);
    sub_B16FFC(&Method_DataManager_GetMasterData_QuestMaster___, v9);
    sub_B16FFC(&Method_DataManager_GetMaster_QuestMaster___, v10);
    sub_B16FFC(&DataManager_TypeInfo, v11);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v12);
    sub_B16FFC(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__, v14);
    sub_B16FFC(&FSUtility_TypeInfo, v15);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v16);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___, v17);
    sub_B16FFC(&LocalizationManager_TypeInfo, v18);
    sub_B16FFC(&Method_System_Nullable_float___ctor__, v19);
    sub_B16FFC(&Method_System_Nullable_Vector3___ctor__, v20);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v21);
    sub_B16FFC(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___, v22);
    sub_B16FFC(&Method_QuestAfterAction_GetMapComponent_ModelLineComponent___, v23);
    sub_B16FFC(&Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___, v24);
    sub_B16FFC(&Method_QuestAfterAction_GetMapComponent_srcLineSprite___, v25);
    sub_B16FFC(&SceneJumpInfo_TypeInfo, v26);
    sub_B16FFC(&SeManager_TypeInfo, v27);
    sub_B16FFC(&ServantVoiceEntity_TypeInfo, v28);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v29);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v30);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v31);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v32);
    sub_B16FFC(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v33);
    sub_B16FFC(&Method_SingletonTemplate_QuestTree__get_Instance__, v34);
    sub_B16FFC(&SingletonTemplate_QuestTree__TypeInfo, v35);
    sub_B16FFC(&SingletonTemplate_clsQuestCheck__TypeInfo, v36);
    sub_B16FFC(&SoundManager_TypeInfo, v37);
    sub_B16FFC(&string___TypeInfo, v38);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v39);
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v40);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_31__, v41);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_33__, v42);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__, v43);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__, v44);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__, v45);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__13__, v46);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__14__, v47);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__15__, v48);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__16__, v49);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__17__, v50);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__18__, v51);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__19__, v52);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__20__, v53);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__25__, v54);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__, v55);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__36__, v56);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__37__, v57);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__38__, v58);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__39__, v59);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__40__, v60);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__, v61);
    sub_B16FFC(&QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo, v62);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__21__, v63);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__22__, v64);
    sub_B16FFC(&QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo, v65);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__23__, v66);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__24__, v67);
    sub_B16FFC(&QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo, v68);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__26__, v69);
    sub_B16FFC(&QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo, v70);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__27__, v71);
    sub_B16FFC(&QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo, v72);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__29__, v73);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__30__, v74);
    sub_B16FFC(&QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo, v75);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__, v76);
    sub_B16FFC(&QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo, v77);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__, v78);
    sub_B16FFC(&QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo, v79);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__, v80);
    sub_B16FFC(&QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo, v81);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__, v82);
    sub_B16FFC(&QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo, v83);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__, v84);
    sub_B16FFC(&QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo, v85);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__, v86);
    sub_B16FFC(&QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo, v87);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__, v88);
    sub_B16FFC(&QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo, v89);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__, v90);
    sub_B16FFC(&QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo, v91);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__, v92);
    sub_B16FFC(&QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo, v93);
    sub_B16FFC(&QuestAfterAction_StateMain___c_TypeInfo, v94);
    sub_B16FFC(&StringLiteral_68, v95);
    sub_B16FFC(&StringLiteral_1154, v96);
    sub_B16FFC(&StringLiteral_10851, v97);
    sub_B16FFC(&StringLiteral_1155, v98);
    sub_B16FFC(&StringLiteral_1093, v99);
    sub_B16FFC(&StringLiteral_2915, v100);
    sub_B16FFC(&StringLiteral_1, v101);
    sub_B16FFC(&StringLiteral_18982, v102);
    byte_40FA2E6 = 1;
  }
  *(_QWORD *)&color.fields.b = 0LL;
  value = 0LL;
  *(_QWORD *)&color.fields.r = 0LL;
  entity = 0LL;
  v103 = sub_B170CC(QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo, that, method, v3, v4);
  QuestAfterAction_StateMain___c__DisplayClass16_0___ctor(
    (QuestAfterAction_StateMain___c__DisplayClass16_0_o *)v103,
    0LL);
  if ( !v103 )
    goto LABEL_1012;
  *(_QWORD *)(v103 + 16) = this;
  sub_B16F98(
    (BattleServantConfConponent_o *)(v103 + 16),
    (System_Int32_array **)this,
    v104,
    v105,
    v106,
    v107,
    v108,
    v109);
  *(_QWORD *)(v103 + 24) = that;
  v110 = (QuestAfterAction_o **)(v103 + 24);
  sub_B16F98(
    (BattleServantConfConponent_o *)(v103 + 24),
    (System_Int32_array **)that,
    v111,
    v112,
    v113,
    v114,
    v115,
    v116);
  if ( this->fields.IsAnimDoing
    || !((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._10_get_CommandBuf.method)(
          this,
          this->klass->vtable._11_get_CommandIndex.methodPtr) )
  {
    return;
  }
  if ( !*v110 )
    goto LABEL_1012;
  if ( (*v110)->fields.isSkippedNext )
  {
    ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
      this,
      this->klass->vtable._15_onEnd.methodPtr);
    if ( *v110 )
    {
      (*v110)->fields.isSkippedNext = 0;
      return;
    }
LABEL_1012:
    sub_B170D4();
  }
  klass = this->klass;
  this->fields.IsAnimDoing = 1;
  v118 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))klass->vtable._10_get_CommandBuf.method)(
           this,
           klass->vtable._11_get_CommandIndex.methodPtr);
  IsUnderVista = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._11_get_CommandIndex.method)(
                   this,
                   this->klass->vtable._12_set_CommandIndex.methodPtr);
  if ( !v118 )
    goto LABEL_1012;
  if ( (unsigned int)IsUnderVista >= *(_DWORD *)(v118 + 24) )
  {
LABEL_1018:
    sub_B17100(IsUnderVista, v120, v121);
    sub_B170A0();
  }
  v122 = *(QuestAfterAction_Command_o **)(v118 + 8LL * (int)IsUnderVista + 32);
  if ( (((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_Command_o *, Il2CppMethodPointer))this->klass->vtable._9_IsUsableCommand.method)(
          this,
          v122,
          this->klass->vtable._10_get_CommandBuf.methodPtr) & 1) == 0 )
    goto LABEL_443;
  v127 = *v110;
  if ( !*v110 )
    goto LABEL_1012;
  BlankEarthQuestAfterAction_k__BackingField = v127->fields._BlankEarthQuestAfterAction_k__BackingField;
  v129 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v123, v124, v125, v126);
  System_Action___ctor(v129, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
  if ( !BlankEarthQuestAfterAction_k__BackingField )
    goto LABEL_1012;
  if ( BlankEarthQuestAfterAction__UpdateAnim(BlankEarthQuestAfterAction_k__BackingField, v127, v122, v129, 0LL) )
    return;
  if ( !v122 )
    goto LABEL_1012;
  id = v122->fields.id;
  if ( id <= 520 )
  {
    if ( id > 352 )
    {
      if ( id > 500 )
      {
        if ( id == 501 )
        {
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_40F6042 )
          {
            sub_B16FFC(&TerminalSceneComponent_TypeInfo, v130);
            byte_40F6042 = 1;
          }
          v295 = TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v295 = TerminalSceneComponent_TypeInfo;
          }
          mInstance = v295->static_fields->mInstance;
          if ( mInstance )
          {
            mTerminalList = mInstance->fields.mTerminalList;
            if ( mTerminalList )
            {
              MyFsmP = ScrTerminalListTop__mfGetMyFsmP(mTerminalList, 0LL);
              if ( MyFsmP )
              {
                v299 = MyFsmP;
                ActiveStateName = PlayMakerFSM__get_ActiveStateName(MyFsmP, 0LL);
                if ( !System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_2915, 0LL) )
                  goto LABEL_443;
                if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                }
                if ( !byte_40F6042 )
                {
                  sub_B16FFC(&TerminalSceneComponent_TypeInfo, v301);
                  byte_40F6042 = 1;
                }
                v305 = TerminalSceneComponent_TypeInfo;
                if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  v305 = TerminalSceneComponent_TypeInfo;
                }
                v306 = v305->static_fields->mInstance;
                if ( v306 )
                {
                  v307 = v306->fields.mTerminalList;
                  if ( v307 )
                  {
                    mQuestBoardListViewManager = v307->fields.mQuestBoardListViewManager;
                    v309 = QuestAfterAction_StateMain___c_TypeInfo;
                    if ( (BYTE3(QuestAfterAction_StateMain___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
                      v309 = QuestAfterAction_StateMain___c_TypeInfo;
                    }
                    static_fields = v309->static_fields;
                    _9__16_31 = static_fields->__9__16_31;
                    if ( !_9__16_31 )
                    {
                      if ( (BYTE3(v309->vtable._0_Equals.methodPtr) & 4) != 0 && !v309->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(v309);
                        static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
                      }
                      v312 = (Il2CppObject *)static_fields->__9;
                      _9__16_31 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v301, v302, v303, v304);
                      System_Action___ctor(
                        _9__16_31,
                        v312,
                        Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_31__,
                        0LL);
                      v313 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
                      v313->__9__16_31 = _9__16_31;
                      sub_B16F98(
                        (BattleServantConfConponent_o *)&v313->__9__16_31,
                        (System_Int32_array **)_9__16_31,
                        v314,
                        v315,
                        v316,
                        v317,
                        v318,
                        v319);
                    }
                    if ( mQuestBoardListViewManager )
                    {
                      QuestBoardListViewManager__SetMode(mQuestBoardListViewManager, 4, _9__16_31, 0, 0, 0LL);
                      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                      }
                      if ( !byte_40F6042 )
                      {
                        sub_B16FFC(&TerminalSceneComponent_TypeInfo, v320);
                        byte_40F6042 = 1;
                      }
                      v321 = TerminalSceneComponent_TypeInfo;
                      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                        v321 = TerminalSceneComponent_TypeInfo;
                      }
                      v322 = v321->static_fields->mInstance;
                      if ( v322 )
                      {
                        TerminalSceneComponent__CallQuestInformationClose(v322, 0LL);
                        PlayMakerFSM__SendEvent(v299, (System_String_o *)StringLiteral_18982, 0LL);
                        goto LABEL_443;
                      }
                    }
                  }
                }
              }
            }
          }
          goto LABEL_1019;
        }
        if ( id != 510 )
        {
          if ( id != 520 )
            return;
          DEFAULT_FADE_TIME = System_Single__Parse(v122->fields.param, 0LL);
          if ( DEFAULT_FADE_TIME <= 0.0 )
          {
            v141 = AvalonSceneManager_TypeInfo;
            if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
              v141 = AvalonSceneManager_TypeInfo;
            }
            DEFAULT_FADE_TIME = v141->static_fields->DEFAULT_FADE_TIME;
          }
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_40F6042 )
          {
            sub_B16FFC(&TerminalSceneComponent_TypeInfo, v136);
            byte_40F6042 = 1;
          }
          v142 = TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v142 = TerminalSceneComponent_TypeInfo;
          }
          v143 = v142->static_fields->mInstance;
          v144 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v136, v137, v138, v139);
          System_Action___ctor(
            v144,
            (Il2CppObject *)v103,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__,
            0LL);
          if ( v143 )
          {
            v145 = v143;
            v146 = DEFAULT_FADE_TIME;
            v147 = v144;
LABEL_46:
            TerminalSceneComponent__Fadein_MapDisp(v145, v146, v147, 0LL);
            return;
          }
          goto LABEL_1019;
        }
        param = v122->fields.param;
        ComponentInChildren_Dropdown_DropdownItem = (void *)sub_B17014(char___TypeInfo, 1LL, v131);
        if ( !ComponentInChildren_Dropdown_DropdownItem )
          goto LABEL_1019;
        v174 = (System_Int32_array **)ComponentInChildren_Dropdown_DropdownItem;
        if ( *((_DWORD *)ComponentInChildren_Dropdown_DropdownItem + 6) )
        {
          *((_WORD *)ComponentInChildren_Dropdown_DropdownItem + 16) = 44;
          if ( !param )
            goto LABEL_1019;
          ComponentInChildren_Dropdown_DropdownItem = System_String__Split(
                                                        param,
                                                        (System_Char_array *)ComponentInChildren_Dropdown_DropdownItem,
                                                        0LL);
          if ( !ComponentInChildren_Dropdown_DropdownItem )
            goto LABEL_1019;
          v276 = (System_String_o **)ComponentInChildren_Dropdown_DropdownItem;
          if ( *((_DWORD *)ComponentInChildren_Dropdown_DropdownItem + 6) )
          {
            v277 = System_Int32__Parse(*((System_String_o **)ComponentInChildren_Dropdown_DropdownItem + 4), 0LL);
            v278 = 0.5;
            if ( *((int *)v276 + 6) >= 2 )
            {
              v279 = System_Int32__Parse(v276[5], 0LL);
              if ( *((int *)v276 + 6) >= 3 )
                v278 = System_Single__Parse(v276[6], 0LL);
            }
            else
            {
              v279 = v277;
              v277 = -1;
            }
            if ( *v110 )
            {
              MapComponent_srcLineSprite = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                                     *v110,
                                                                     0,
                                                                     v279,
                                                                     this,
                                                                     (const MethodInfo_19E0B48 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Equality(MapComponent_srcLineSprite, 0LL, 0LL) )
                return;
              if ( v277 >= 1 )
              {
                if ( !*v110 )
                  goto LABEL_1019;
                v420 = (UnityEngine_Component_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                    *v110,
                                                    0,
                                                    v277,
                                                    this,
                                                    (const MethodInfo_19E0B48 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v420, 0LL, 0LL) )
                {
                  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  }
                  if ( !byte_40F6042 )
                  {
                    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v419);
                    byte_40F6042 = 1;
                  }
                  v421 = TerminalSceneComponent_TypeInfo;
                  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    v421 = TerminalSceneComponent_TypeInfo;
                  }
                  v422 = v421->static_fields->mInstance;
                  if ( !v422 )
                    goto LABEL_1019;
                  if ( !v420 )
                    goto LABEL_1019;
                  mTerminalMap = v422->fields.mTerminalMap;
                  gameObject = UnityEngine_Component__get_gameObject(v420, 0LL);
                  if ( !mTerminalMap )
                    goto LABEL_1019;
                  ScrTerminalMap__SetPlayerIcon(mTerminalMap, gameObject, 0LL);
                }
              }
              if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              }
              if ( !byte_40F6042 )
              {
                sub_B16FFC(&TerminalSceneComponent_TypeInfo, v419);
                byte_40F6042 = 1;
              }
              v425 = TerminalSceneComponent_TypeInfo;
              if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                v425 = TerminalSceneComponent_TypeInfo;
              }
              v426 = v425->static_fields->mInstance;
              if ( v426 )
              {
                if ( MapComponent_srcLineSprite )
                {
                  v427 = v426->fields.mTerminalMap;
                  v428 = UnityEngine_Component__get_gameObject(
                           (UnityEngine_Component_o *)MapComponent_srcLineSprite,
                           0LL);
                  v433 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v429, v430, v431, v432);
                  System_Action___ctor(
                    v433,
                    (Il2CppObject *)this,
                    (intptr_t)this->klass->vtable._15_onEnd.methodPtr,
                    0LL);
                  if ( v427 )
                  {
                    ScrTerminalMap__MovePlayerIcon(v427, v428, v279, v433, v278, 0LL);
                    return;
                  }
                }
              }
            }
LABEL_1019:
            sub_B170D4();
          }
        }
LABEL_1021:
        sub_B17100(ComponentInChildren_Dropdown_DropdownItem, v174, v173);
        sub_B170A0();
      }
      switch ( id )
      {
        case 400:
          v162 = sub_B170CC(QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo, v130, v131, v132, v133);
          QuestAfterAction_StateMain___c__DisplayClass16_10___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_10_o *)v162,
            0LL);
          if ( !v162 )
            goto LABEL_1019;
          *(_QWORD *)(v162 + 24) = v103;
          v169 = v162 + 24;
          sub_B16F98(
            (BattleServantConfConponent_o *)(v162 + 24),
            (System_Int32_array **)v103,
            v163,
            v164,
            v165,
            v166,
            v167,
            v168);
          v170 = v122->fields.param;
          ComponentInChildren_Dropdown_DropdownItem = (void *)sub_B17014(char___TypeInfo, 1LL, v171);
          if ( !ComponentInChildren_Dropdown_DropdownItem )
            goto LABEL_1019;
          v174 = (System_Int32_array **)ComponentInChildren_Dropdown_DropdownItem;
          if ( !*((_DWORD *)ComponentInChildren_Dropdown_DropdownItem + 6) )
            goto LABEL_1021;
          *((_WORD *)ComponentInChildren_Dropdown_DropdownItem + 16) = 44;
          if ( !v170 )
            goto LABEL_1019;
          ComponentInChildren_Dropdown_DropdownItem = System_String__Split(
                                                        v170,
                                                        (System_Char_array *)ComponentInChildren_Dropdown_DropdownItem,
                                                        0LL);
          if ( !ComponentInChildren_Dropdown_DropdownItem )
            goto LABEL_1019;
          v175 = *((_QWORD *)ComponentInChildren_Dropdown_DropdownItem + 3);
          v176 = (System_String_o **)ComponentInChildren_Dropdown_DropdownItem;
          if ( v175 )
          {
            if ( !(_DWORD)v175 )
              goto LABEL_1021;
            v177 = System_Int32__Parse(*((System_String_o **)ComponentInChildren_Dropdown_DropdownItem + 4), 0LL);
            if ( *((int *)v176 + 6) < 2 )
            {
              v178 = 0;
            }
            else
            {
              v178 = System_Int32__Parse(v176[5], 0LL) > 0;
              if ( *((int *)v176 + 6) >= 3 )
              {
                v179 = System_Int32__Parse(v176[6], 0LL) > 0;
LABEL_871:
                if ( !*(_QWORD *)v169 )
                  goto LABEL_1019;
                v853 = *(QuestAfterAction_o **)(*(_QWORD *)v169 + 24LL);
                if ( !v853 )
                  goto LABEL_1019;
                v854 = (System_Int32_array **)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                v853,
                                                2,
                                                v177,
                                                this,
                                                (const MethodInfo_19E0B48 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
                *(_QWORD *)(v162 + 16) = v854;
                v855 = (MapGimmickComponent_o **)(v162 + 16);
                sub_B16F98((BattleServantConfConponent_o *)(v162 + 16), v854, v856, v857, v858, v859, v860, v861);
                v862 = *(UnityEngine_Object_o **)(v162 + 16);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Equality(v862, 0LL, 0LL) )
                  return;
                if ( !*v855 )
                  goto LABEL_1019;
                (*v855)->fields.isForceNotActive = v179;
                v867 = *v855;
                v868 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v863, v864, v865, v866);
                v869 = v868;
                if ( v178 )
                {
                  System_Action___ctor(
                    v868,
                    (Il2CppObject *)v162,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__21__,
                    0LL);
                  if ( !v867 )
                    goto LABEL_1019;
                  v870 = 2;
                  goto LABEL_894;
                }
                System_Action___ctor(
                  v868,
                  (Il2CppObject *)v162,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__22__,
                  0LL);
                if ( !v867 )
                  goto LABEL_1019;
                v629 = 2;
                goto LABEL_966;
              }
            }
          }
          else
          {
            v178 = 0;
            v177 = 0;
          }
          v179 = 0;
          goto LABEL_871;
        case 401:
          v525 = sub_B170CC(QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo, v130, v131, v132, v133);
          QuestAfterAction_StateMain___c__DisplayClass16_11___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_11_o *)v525,
            0LL);
          if ( !v525 )
            goto LABEL_1019;
          *(_QWORD *)(v525 + 24) = v103;
          v532 = v525 + 24;
          sub_B16F98(
            (BattleServantConfConponent_o *)(v525 + 24),
            (System_Int32_array **)v103,
            v526,
            v527,
            v528,
            v529,
            v530,
            v531);
          v533 = v122->fields.param;
          ComponentInChildren_Dropdown_DropdownItem = (void *)sub_B17014(char___TypeInfo, 1LL, v534);
          if ( !ComponentInChildren_Dropdown_DropdownItem )
            goto LABEL_1019;
          v174 = (System_Int32_array **)ComponentInChildren_Dropdown_DropdownItem;
          if ( !*((_DWORD *)ComponentInChildren_Dropdown_DropdownItem + 6) )
            goto LABEL_1021;
          *((_WORD *)ComponentInChildren_Dropdown_DropdownItem + 16) = 44;
          if ( !v533 )
            goto LABEL_1019;
          ComponentInChildren_Dropdown_DropdownItem = System_String__Split(
                                                        v533,
                                                        (System_Char_array *)ComponentInChildren_Dropdown_DropdownItem,
                                                        0LL);
          if ( !ComponentInChildren_Dropdown_DropdownItem )
            goto LABEL_1019;
          v535 = *((_QWORD *)ComponentInChildren_Dropdown_DropdownItem + 3);
          v536 = (System_String_o **)ComponentInChildren_Dropdown_DropdownItem;
          if ( v535 )
          {
            if ( !(_DWORD)v535 )
              goto LABEL_1021;
            v537 = System_Int32__Parse(*((System_String_o **)ComponentInChildren_Dropdown_DropdownItem + 4), 0LL);
            if ( *((int *)v536 + 6) < 2 )
            {
              v538 = 0;
            }
            else
            {
              v538 = System_Int32__Parse(v536[5], 0LL) > 0;
              if ( *((int *)v536 + 6) >= 3 )
              {
                v539 = System_Int32__Parse(v536[6], 0LL) > 0;
LABEL_883:
                if ( !*(_QWORD *)v532 )
                  goto LABEL_1019;
                v871 = *(QuestAfterAction_o **)(*(_QWORD *)v532 + 24LL);
                if ( !v871 )
                  goto LABEL_1019;
                v872 = (System_Int32_array **)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                v871,
                                                2,
                                                v537,
                                                this,
                                                (const MethodInfo_19E0B48 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
                *(_QWORD *)(v525 + 16) = v872;
                v873 = (MapGimmickComponent_o **)(v525 + 16);
                sub_B16F98((BattleServantConfConponent_o *)(v525 + 16), v872, v874, v875, v876, v877, v878, v879);
                v880 = *(UnityEngine_Object_o **)(v525 + 16);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Equality(v880, 0LL, 0LL) )
                  return;
                if ( !*v873 )
                  goto LABEL_1019;
                (*v873)->fields.isForceLoop = v539;
                if ( !*v873 )
                  goto LABEL_1019;
                (*v873)->fields.isForceNotActive = 0;
                v867 = *v873;
                v885 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v881, v882, v883, v884);
                v869 = v885;
                if ( v538 )
                {
                  System_Action___ctor(
                    v885,
                    (Il2CppObject *)v525,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__23__,
                    0LL);
                  if ( !v867 )
                    goto LABEL_1019;
                  v870 = 3;
LABEL_894:
                  MapGimmickComponent__SetState(v867, v870, v869, 0LL);
                  goto LABEL_443;
                }
                System_Action___ctor(
                  v885,
                  (Il2CppObject *)v525,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__24__,
                  0LL);
                if ( !v867 )
                  goto LABEL_1019;
                v629 = 3;
LABEL_966:
                v966 = v867;
                v967 = v869;
LABEL_967:
                MapGimmickComponent__SetState(v966, v629, v967, 0LL);
                return;
              }
            }
          }
          else
          {
            v538 = 0;
            v537 = 0;
          }
          v539 = 0;
          goto LABEL_883;
        case 402:
          v508 = v122->fields.param;
          ComponentInChildren_Dropdown_DropdownItem = (void *)sub_B17014(char___TypeInfo, 1LL, v131);
          if ( !ComponentInChildren_Dropdown_DropdownItem )
            goto LABEL_1019;
          v174 = (System_Int32_array **)ComponentInChildren_Dropdown_DropdownItem;
          if ( !*((_DWORD *)ComponentInChildren_Dropdown_DropdownItem + 6) )
            goto LABEL_1021;
          *((_WORD *)ComponentInChildren_Dropdown_DropdownItem + 16) = 44;
          if ( !v508 )
            goto LABEL_1019;
          ComponentInChildren_Dropdown_DropdownItem = System_String__Split(
                                                        v508,
                                                        (System_Char_array *)ComponentInChildren_Dropdown_DropdownItem,
                                                        0LL);
          if ( !ComponentInChildren_Dropdown_DropdownItem )
            goto LABEL_1019;
          v509 = *((_QWORD *)ComponentInChildren_Dropdown_DropdownItem + 3);
          v510 = (System_String_o **)ComponentInChildren_Dropdown_DropdownItem;
          if ( v509 )
          {
            if ( !(_DWORD)v509 )
              goto LABEL_1021;
            v511 = System_Int32__Parse(*((System_String_o **)ComponentInChildren_Dropdown_DropdownItem + 4), 0LL);
            if ( *((int *)v510 + 6) >= 2 )
            {
              v512 = System_Int32__Parse(v510[5], 0LL) > 0;
LABEL_849:
              if ( *v110 )
              {
                v850 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         *v110,
                         2,
                         v511,
                         this,
                         (const MethodInfo_19E0B48 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v850, 0LL, 0LL) )
                  return;
                if ( v850 )
                {
                  BYTE1(v850->fields.mcTo.fields.y) = v512;
                  MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)v850, 0, 0LL);
                  mcAtlasP = v850->fields.mcAtlasP;
                  if ( mcAtlasP )
                  {
LABEL_936:
                    mcAtlasP[4] = 0;
                    goto LABEL_945;
                  }
                }
              }
              goto LABEL_1019;
            }
          }
          else
          {
            v511 = 0;
          }
          v512 = 0;
          goto LABEL_849;
        case 403:
          v513 = v122->fields.param;
          ComponentInChildren_Dropdown_DropdownItem = (void *)sub_B17014(char___TypeInfo, 1LL, v131);
          if ( !ComponentInChildren_Dropdown_DropdownItem )
            goto LABEL_1019;
          v174 = (System_Int32_array **)ComponentInChildren_Dropdown_DropdownItem;
          if ( !*((_DWORD *)ComponentInChildren_Dropdown_DropdownItem + 6) )
            goto LABEL_1021;
          *((_WORD *)ComponentInChildren_Dropdown_DropdownItem + 16) = 44;
          if ( !v513 )
            goto LABEL_1019;
          ComponentInChildren_Dropdown_DropdownItem = System_String__Split(
                                                        v513,
                                                        (System_Char_array *)ComponentInChildren_Dropdown_DropdownItem,
                                                        0LL);
          if ( !ComponentInChildren_Dropdown_DropdownItem )
            goto LABEL_1019;
          v514 = *((_QWORD *)ComponentInChildren_Dropdown_DropdownItem + 3);
          v515 = (System_String_o **)ComponentInChildren_Dropdown_DropdownItem;
          if ( v514 )
          {
            if ( !(_DWORD)v514 )
              goto LABEL_1021;
            v516 = System_Int32__Parse(*((System_String_o **)ComponentInChildren_Dropdown_DropdownItem + 4), 0LL);
            if ( *((int *)v515 + 6) >= 2 )
            {
              v517 = System_Int32__Parse(v515[5], 0LL) > 0;
LABEL_859:
              if ( *v110 )
              {
                v851 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         *v110,
                         2,
                         v516,
                         this,
                         (const MethodInfo_19E0B48 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v851, 0LL, 0LL) )
                  return;
                if ( v851 )
                {
                  LOBYTE(v851->fields.mcTo.fields.y) = v517;
                  BYTE1(v851->fields.mcTo.fields.y) = 0;
                  MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)v851, 1, 0LL);
                  v852 = v851->fields.mcAtlasP;
                  if ( v852 )
                  {
                    v852->fields.m_CachedPtr = 1;
                    goto LABEL_945;
                  }
                }
              }
              goto LABEL_1019;
            }
          }
          else
          {
            v516 = 0;
          }
          v517 = 0;
          goto LABEL_859;
        case 404:
          v478 = v122->fields.param;
          ComponentInChildren_Dropdown_DropdownItem = (void *)sub_B17014(char___TypeInfo, 1LL, v131);
          if ( !ComponentInChildren_Dropdown_DropdownItem )
            goto LABEL_1019;
          v174 = (System_Int32_array **)ComponentInChildren_Dropdown_DropdownItem;
          if ( !*((_DWORD *)ComponentInChildren_Dropdown_DropdownItem + 6) )
            goto LABEL_1021;
          *((_WORD *)ComponentInChildren_Dropdown_DropdownItem + 16) = 44;
          if ( !v478 )
            goto LABEL_1019;
          v479 = System_String__Split(v478, (System_Char_array *)ComponentInChildren_Dropdown_DropdownItem, 0LL);
          if ( !v479 )
            goto LABEL_1019;
          v480 = v479;
          if ( (int)v479->max_length <= 4 )
            goto LABEL_443;
          v481 = System_Single__Parse(v479->m_Items[3], 0LL);
          if ( !v480->max_length )
            goto LABEL_1021;
          v482 = *v110;
          v483 = v481;
          v484 = System_Int32__Parse(v480->m_Items[0], 0LL);
          if ( !v482 )
            goto LABEL_1019;
          v485 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                           v482,
                                           2,
                                           v484,
                                           this,
                                           (const MethodInfo_19E0B48 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v485, 0LL, 0LL) )
            return;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_40F6042 )
          {
            sub_B16FFC(&TerminalSceneComponent_TypeInfo, v174);
            byte_40F6042 = 1;
          }
          ComponentInChildren_Dropdown_DropdownItem = TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            ComponentInChildren_Dropdown_DropdownItem = TerminalSceneComponent_TypeInfo;
          }
          v486 = **((_QWORD **)ComponentInChildren_Dropdown_DropdownItem + 23);
          if ( !v486 )
            goto LABEL_1019;
          if ( v480->max_length <= 1 )
            goto LABEL_1021;
          v487 = *(ScrTerminalMap_o **)(v486 + 256);
          v488 = System_Single__Parse(v480->m_Items[1], 0LL);
          if ( v480->max_length <= 2 )
            goto LABEL_1021;
          v489 = v488;
          v490 = System_Single__Parse(v480->m_Items[2], 0LL);
          if ( !v487 )
            goto LABEL_1019;
          *(UnityEngine_Vector3_o *)&v491 = ScrTerminalMap__LocalPosFromCoord(v487, v489, v490, 0.0, 0.0, 0LL);
          if ( v480->max_length <= 4 )
            goto LABEL_1021;
          v494 = v491;
          v495 = v492;
          v496 = v493;
          v497 = System_Int32__Parse(v480->m_Items[4], 0LL);
          v502 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v498, v499, v500, v501);
          System_Action___ctor(
            v502,
            (Il2CppObject *)v103,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__25__,
            0LL);
          if ( !v485 )
            goto LABEL_1019;
          v1027.fields.y = v495;
          v1027.fields.z = v496;
          v1027.fields.x = v494;
          MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v485, v1027, v483 * 0.001, v497, v502, 0LL);
          return;
        case 405:
          v540 = sub_B170CC(QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo, v130, v131, v132, v133);
          QuestAfterAction_StateMain___c__DisplayClass16_12___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_12_o *)v540,
            0LL);
          if ( !v540 )
            goto LABEL_1019;
          *(_QWORD *)(v540 + 24) = v103;
          sub_B16F98(
            (BattleServantConfConponent_o *)(v540 + 24),
            (System_Int32_array **)v103,
            v541,
            v542,
            v543,
            v544,
            v545,
            v546);
          v547 = *(_QWORD *)(v540 + 24);
          if ( !v547 )
            goto LABEL_1019;
          v548 = *(QuestAfterAction_o **)(v547 + 24);
          v549 = System_Int32__Parse(v122->fields.param, 0LL);
          if ( !v548 )
            goto LABEL_1019;
          v550 = (System_Int32_array **)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                          v548,
                                          2,
                                          v549,
                                          this,
                                          (const MethodInfo_19E0B48 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          *(_QWORD *)(v540 + 16) = v550;
          sub_B16F98((BattleServantConfConponent_o *)(v540 + 16), v550, v551, v552, v553, v554, v555, v556);
          v557 = *(UnityEngine_Object_o **)(v540 + 16);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v557, 0LL, 0LL) )
            return;
          v562 = *(MapGimmickComponent_o **)(v540 + 16);
          v563 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v558, v559, v560, v561);
          System_Action___ctor(
            v563,
            (Il2CppObject *)v540,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__26__,
            0LL);
          if ( !v562 )
            goto LABEL_1019;
          MapGimmickComponent__SetState(v562, 3, v563, 0LL);
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_40F6042 )
          {
            sub_B16FFC(&TerminalSceneComponent_TypeInfo, v564);
            byte_40F6042 = 1;
          }
          v565 = TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v565 = TerminalSceneComponent_TypeInfo;
          }
          v566 = v565->static_fields->mInstance;
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          }
          if ( !v566 )
            goto LABEL_1019;
          v145 = v566;
          v147 = 0LL;
          v146 = AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME;
          goto LABEL_46;
        case 406:
          v567 = sub_B170CC(QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo, v130, v131, v132, v133);
          QuestAfterAction_StateMain___c__DisplayClass16_13___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_13_o *)v567,
            0LL);
          if ( !v567 )
            goto LABEL_1019;
          *(_QWORD *)(v567 + 32) = v103;
          sub_B16F98(
            (BattleServantConfConponent_o *)(v567 + 32),
            (System_Int32_array **)v103,
            v568,
            v569,
            v570,
            v571,
            v572,
            v573);
          v574 = v122->fields.param;
          ComponentInChildren_Dropdown_DropdownItem = (void *)sub_B17014(char___TypeInfo, 1LL, v575);
          if ( !ComponentInChildren_Dropdown_DropdownItem )
            goto LABEL_1019;
          v174 = (System_Int32_array **)ComponentInChildren_Dropdown_DropdownItem;
          if ( !*((_DWORD *)ComponentInChildren_Dropdown_DropdownItem + 6) )
            goto LABEL_1021;
          *((_WORD *)ComponentInChildren_Dropdown_DropdownItem + 16) = 44;
          if ( !v574 )
            goto LABEL_1019;
          v576 = (System_Int32_array **)System_String__Split(
                                          v574,
                                          (System_Char_array *)ComponentInChildren_Dropdown_DropdownItem,
                                          0LL);
          *(_QWORD *)(v567 + 24) = v576;
          v577 = (__int64 *)(v567 + 24);
          sub_B16F98((BattleServantConfConponent_o *)(v567 + 24), v576, v578, v579, v580, v581, v582, v583);
          v584 = *(_QWORD *)(v567 + 32);
          if ( !v584 )
            goto LABEL_1019;
          v585 = *v577;
          if ( !*v577 )
            goto LABEL_1019;
          if ( !*(_DWORD *)(v585 + 24) )
            goto LABEL_1021;
          v586 = *(QuestAfterAction_o **)(v584 + 24);
          v587 = System_Int32__Parse(*(System_String_o **)(v585 + 32), 0LL);
          if ( !v586 )
            goto LABEL_1019;
          v588 = (System_Int32_array **)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                          v586,
                                          2,
                                          v587,
                                          this,
                                          (const MethodInfo_19E0B48 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          *(_QWORD *)(v567 + 16) = v588;
          sub_B16F98((BattleServantConfConponent_o *)(v567 + 16), v588, v589, v590, v591, v592, v593, v594);
          v595 = *(UnityEngine_Object_o **)(v567 + 16);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v595, 0LL, 0LL) )
            return;
          v600 = *(MapGimmickComponent_o **)(v567 + 16);
          v601 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v596, v597, v598, v599);
          v602 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__27__;
          v603 = v601;
          goto LABEL_605;
        case 407:
          v518 = v122->fields.param;
          ComponentInChildren_Dropdown_DropdownItem = (void *)sub_B17014(char___TypeInfo, 1LL, v131);
          if ( !ComponentInChildren_Dropdown_DropdownItem )
            goto LABEL_1019;
          v174 = (System_Int32_array **)ComponentInChildren_Dropdown_DropdownItem;
          if ( !*((_DWORD *)ComponentInChildren_Dropdown_DropdownItem + 6) )
            goto LABEL_1021;
          *((_WORD *)ComponentInChildren_Dropdown_DropdownItem + 16) = 44;
          if ( !v518 )
            goto LABEL_1019;
          ComponentInChildren_Dropdown_DropdownItem = System_String__Split(
                                                        v518,
                                                        (System_Char_array *)ComponentInChildren_Dropdown_DropdownItem,
                                                        0LL);
          if ( !ComponentInChildren_Dropdown_DropdownItem )
            goto LABEL_1019;
          v519 = ComponentInChildren_Dropdown_DropdownItem;
          if ( !*((_DWORD *)ComponentInChildren_Dropdown_DropdownItem + 6) )
            goto LABEL_1021;
          v520 = *v110;
          v521 = System_Int32__Parse(*((System_String_o **)ComponentInChildren_Dropdown_DropdownItem + 4), 0LL);
          if ( !v520 )
            goto LABEL_1019;
          v522 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                           v520,
                                           2,
                                           v521,
                                           this,
                                           (const MethodInfo_19E0B48 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v522, 0LL, 0LL) )
            return;
          if ( !v522 )
            goto LABEL_1019;
          v523 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v522, 0LL);
          if ( !v523 )
            goto LABEL_1019;
          ComponentInChildren_Dropdown_DropdownItem = UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                        v523,
                                                        (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
          if ( *((_DWORD *)v519 + 6) <= 1u )
            goto LABEL_1021;
          v524 = (UIWidget_o *)ComponentInChildren_Dropdown_DropdownItem;
          UnityEngine_ColorUtility__TryParseHtmlString(*((System_String_o **)v519 + 5), &color, 0LL);
          if ( !v524 )
            goto LABEL_1019;
          UIWidget__set_color(v524, color, 0LL);
          goto LABEL_443;
        case 408:
          v567 = sub_B170CC(QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo, v130, v131, v132, v133);
          QuestAfterAction_StateMain___c__DisplayClass16_15___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_15_o *)v567,
            0LL);
          if ( !v567 )
            goto LABEL_1019;
          *(_QWORD *)(v567 + 24) = v103;
          sub_B16F98(
            (BattleServantConfConponent_o *)(v567 + 24),
            (System_Int32_array **)v103,
            v604,
            v605,
            v606,
            v607,
            v608,
            v609);
          v610 = *(_QWORD *)(v567 + 24);
          if ( !v610 )
            goto LABEL_1019;
          v611 = *(QuestAfterAction_o **)(v610 + 24);
          v612 = System_Int32__Parse(v122->fields.param, 0LL);
          if ( !v611 )
            goto LABEL_1019;
          v613 = (System_Int32_array **)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                          v611,
                                          2,
                                          v612,
                                          this,
                                          (const MethodInfo_19E0B48 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          *(_QWORD *)(v567 + 16) = v613;
          v614 = v567 + 16;
          sub_B16F98((BattleServantConfConponent_o *)(v567 + 16), v613, v615, v616, v617, v618, v619, v620);
          v621 = *(UnityEngine_Object_o **)(v567 + 16);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v621, 0LL, 0LL) )
            return;
          if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
          }
          v622 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !*(_QWORD *)v614 || !v622 )
            goto LABEL_1019;
          v623 = QuestTree__CheckMapGimmickCond_21527492(
                   v622,
                   *(MapControl_MapGimmickInfo_o **)(*(_QWORD *)v614 + 104LL),
                   0LL);
          v600 = *(MapGimmickComponent_o **)v614;
          v624 = v623;
          v601 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v625, v626, v627, v628);
          v603 = v601;
          if ( v624 )
          {
            v602 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__29__;
LABEL_605:
            System_Action___ctor(v601, (Il2CppObject *)v567, *v602, 0LL);
            if ( !v600 )
              goto LABEL_1019;
            v629 = 3;
          }
          else
          {
            System_Action___ctor(
              v601,
              (Il2CppObject *)v567,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__30__,
              0LL);
            if ( !v600 )
              goto LABEL_1019;
            v629 = 2;
          }
          v966 = v600;
          v967 = v603;
          goto LABEL_967;
        case 409:
          v503 = v122->fields.param;
          ComponentInChildren_Dropdown_DropdownItem = (void *)sub_B17014(char___TypeInfo, 1LL, v131);
          if ( !ComponentInChildren_Dropdown_DropdownItem )
            goto LABEL_1019;
          v174 = (System_Int32_array **)ComponentInChildren_Dropdown_DropdownItem;
          if ( !*((_DWORD *)ComponentInChildren_Dropdown_DropdownItem + 6) )
            goto LABEL_1021;
          *((_WORD *)ComponentInChildren_Dropdown_DropdownItem + 16) = 44;
          if ( !v503 )
            goto LABEL_1019;
          ComponentInChildren_Dropdown_DropdownItem = System_String__Split(
                                                        v503,
                                                        (System_Char_array *)ComponentInChildren_Dropdown_DropdownItem,
                                                        0LL);
          if ( !ComponentInChildren_Dropdown_DropdownItem )
            goto LABEL_1019;
          v504 = *((_QWORD *)ComponentInChildren_Dropdown_DropdownItem + 3);
          v505 = (System_String_o **)ComponentInChildren_Dropdown_DropdownItem;
          if ( v504 )
          {
            if ( !(_DWORD)v504 )
              goto LABEL_1021;
            v506 = System_Int32__Parse(*((System_String_o **)ComponentInChildren_Dropdown_DropdownItem + 4), 0LL);
            if ( *((int *)v505 + 6) >= 2 )
            {
              v507 = System_Int32__Parse(v505[5], 0LL) > 0;
              goto LABEL_839;
            }
          }
          else
          {
            v506 = 0;
          }
          v507 = 0;
LABEL_839:
          if ( *v110 )
          {
            v846 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                     *v110,
                     2,
                     v506,
                     this,
                     (const MethodInfo_19E0B48 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v846, 0LL, 0LL) )
              return;
            if ( v846 )
            {
              LOBYTE(v846->fields.mcTo.fields.y) = v507;
              BYTE1(v846->fields.mcTo.fields.y) = 0;
              MapGimmickComponent__SetDispAnim((MapGimmickComponent_o *)v846, 1, 0LL);
              v847 = v846->fields.mcAtlasP;
              if ( v847 )
              {
                v847->fields.m_CachedPtr = 1;
                v848 = this->klass;
                this->fields.IsAnimDoing = 0;
                v849 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))v848->vtable._11_get_CommandIndex.method)(
                         this,
                         v848->vtable._12_set_CommandIndex.methodPtr);
                ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_CommandIndex.method)(
                  this,
                  (unsigned int)(v849 + 1),
                  this->klass->vtable._13_UpdateAnim.methodPtr);
LABEL_946:
                ((void (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_o *, Il2CppMethodPointer))this->klass->vtable._13_UpdateAnim.method)(
                  this,
                  *v110,
                  this->klass->vtable._14_EndAnim.methodPtr);
                return;
              }
            }
          }
          goto LABEL_1019;
        default:
          if ( id != 500 )
            return;
          v378 = System_Int32__Parse(v122->fields.param, 0LL);
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_40F6090 )
          {
            sub_B16FFC(&TerminalPramsManager_TypeInfo, v377);
            byte_40F6090 = 1;
          }
          v379 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v379 = TerminalPramsManager_TypeInfo;
          }
          v379->static_fields->_AfterActionFocusQuestId_k__BackingField = v378;
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_QuestMaster___);
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_1019;
          if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                  Master_WarQuestSelectionMaster,
                  &entity,
                  v378,
                  (const MethodInfo_266F3E4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
            goto LABEL_443;
          if ( !entity )
            goto LABEL_1019;
          v381 = *v110;
          SpotId = QuestEntity__getSpotId((QuestEntity_o *)entity, 0LL);
          if ( !v381 )
            goto LABEL_1019;
          v383 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                           v381,
                                           0,
                                           SpotId,
                                           this,
                                           (const MethodInfo_19E0B48 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( !UnityEngine_Object__op_Inequality(v383, 0LL, 0LL) )
            goto LABEL_443;
          if ( !v383 )
            goto LABEL_1019;
          SrcSpotBasePrefab__SelectSpot((SrcSpotBasePrefab_o *)v383, 0, 0LL);
          goto LABEL_443;
      }
    }
    if ( id <= 205 )
    {
      switch ( id )
      {
        case 'd':
          v189 = sub_B170CC(QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo, v130, v131, v132, v133);
          QuestAfterAction_StateMain___c__DisplayClass16_1___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_1_o *)v189,
            0LL);
          if ( !v189 )
            goto LABEL_1012;
          *(_QWORD *)(v189 + 24) = v103;
          sub_B16F98(
            (BattleServantConfConponent_o *)(v189 + 24),
            (System_Int32_array **)v103,
            v190,
            v191,
            v192,
            v193,
            v194,
            v195);
          v196 = *(_QWORD *)(v189 + 24);
          if ( !v196 )
            goto LABEL_1012;
          v197 = *(QuestAfterAction_o **)(v196 + 24);
          v198 = System_Int32__Parse(v122->fields.param, 0LL);
          if ( !v197 )
            goto LABEL_1012;
          v199 = (System_Int32_array **)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                          v197,
                                          0,
                                          v198,
                                          this,
                                          (const MethodInfo_19E0B48 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v189 + 16) = v199;
          sub_B16F98((BattleServantConfConponent_o *)(v189 + 16), v199, v200, v201, v202, v203, v204, v205);
          v206 = *(UnityEngine_Object_o **)(v189 + 16);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v206, 0LL, 0LL) )
            return;
          v211 = *(SrcSpotBasePrefab_o **)(v189 + 16);
          v212 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v207, v208, v209, v210);
          System_Action___ctor(
            v212,
            (Il2CppObject *)v189,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__,
            0LL);
          if ( !v211 )
            goto LABEL_1012;
          v213 = 2;
          goto LABEL_663;
        case 'e':
          v690 = sub_B170CC(QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo, v130, v131, v132, v133);
          QuestAfterAction_StateMain___c__DisplayClass16_2___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_2_o *)v690,
            0LL);
          if ( !v690 )
            goto LABEL_1012;
          *(_QWORD *)(v690 + 24) = v103;
          sub_B16F98(
            (BattleServantConfConponent_o *)(v690 + 24),
            (System_Int32_array **)v103,
            v691,
            v692,
            v693,
            v694,
            v695,
            v696);
          v697 = *(_QWORD *)(v690 + 24);
          if ( !v697 )
            goto LABEL_1012;
          v698 = *(QuestAfterAction_o **)(v697 + 24);
          v699 = System_Int32__Parse(v122->fields.param, 0LL);
          if ( !v698 )
            goto LABEL_1012;
          v700 = (System_Int32_array **)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                          v698,
                                          0,
                                          v699,
                                          this,
                                          (const MethodInfo_19E0B48 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v690 + 16) = v700;
          sub_B16F98((BattleServantConfConponent_o *)(v690 + 16), v700, v701, v702, v703, v704, v705, v706);
          v707 = *(UnityEngine_Object_o **)(v690 + 16);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v707, 0LL, 0LL) )
            return;
          v211 = *(SrcSpotBasePrefab_o **)(v690 + 16);
          v212 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v708, v709, v710, v711);
          System_Action___ctor(
            v212,
            (Il2CppObject *)v690,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__,
            0LL);
          if ( !v211 )
            goto LABEL_1012;
          v213 = 3;
LABEL_663:
          SrcSpotBasePrefab__SetState(v211, v213, v212, 0LL);
          return;
        case 'f':
          v637 = sub_B170CC(QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo, v130, v131, v132, v133);
          QuestAfterAction_StateMain___c__DisplayClass16_3___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_3_o *)v637,
            0LL);
          if ( !v637 )
            goto LABEL_1012;
          *(_QWORD *)(v637 + 24) = v103;
          v644 = v637 + 24;
          sub_B16F98(
            (BattleServantConfConponent_o *)(v637 + 24),
            (System_Int32_array **)v103,
            v638,
            v639,
            v640,
            v641,
            v642,
            v643);
          if ( !*(_QWORD *)(v637 + 24) )
            goto LABEL_1012;
          v645 = *(QuestAfterAction_o **)(*(_QWORD *)(v637 + 24) + 24LL);
          v646 = System_Int32__Parse(v122->fields.param, 0LL);
          if ( !v645 )
            goto LABEL_1012;
          v647 = (System_Int32_array **)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                          v645,
                                          0,
                                          v646,
                                          this,
                                          (const MethodInfo_19E0B48 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v637 + 16) = v647;
          v648 = (System_Int32_array ***)(v637 + 16);
          sub_B16F98((BattleServantConfConponent_o *)(v637 + 16), v647, v649, v650, v651, v652, v653, v654);
          v655 = *(UnityEngine_Object_o **)(v637 + 16);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v655, 0LL, 0LL) )
            return;
          v660 = *(SrcSpotBasePrefab_o **)(v637 + 16);
          v661 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v656, v657, v658, v659);
          System_Action___ctor(
            v661,
            (Il2CppObject *)v637,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__,
            0LL);
          if ( !v660 )
            goto LABEL_1012;
          SrcSpotBasePrefab__SetState(v660, 4, v661, 0LL);
          if ( !*(_QWORD *)v644 )
            goto LABEL_1012;
          v668 = *(_QWORD *)(*(_QWORD *)v644 + 24LL);
          if ( !v668 )
            goto LABEL_1012;
          v669 = *v648;
          *(_QWORD *)(v668 + 168) = *v648;
          p_lastDispSpot = (BattleServantConfConponent_o *)(v668 + 168);
          goto LABEL_645;
        case 'g':
          v671 = v122->fields.param;
          IsUnderVista = sub_B17014(char___TypeInfo, 1LL, v131);
          if ( !IsUnderVista )
            goto LABEL_1012;
          v120 = IsUnderVista;
          if ( !*(_DWORD *)(IsUnderVista + 24) )
            goto LABEL_1018;
          *(_WORD *)(IsUnderVista + 32) = 44;
          if ( !v671 )
            goto LABEL_1012;
          v672 = System_String__Split(v671, (System_Char_array *)IsUnderVista, 0LL);
          if ( !v672 )
            goto LABEL_1012;
          v673 = v672;
          if ( (int)v672->max_length <= 1 )
            goto LABEL_443;
          v674 = *v110;
          v675 = System_Int32__Parse(v672->m_Items[0], 0LL);
          if ( !v674 )
            goto LABEL_1012;
          v676 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                   v674,
                   0,
                   v675,
                   this,
                   (const MethodInfo_19E0B48 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          IsUnderVista = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v676, 0LL, 0LL);
          if ( (IsUnderVista & 1) != 0 )
            return;
          if ( v673->max_length <= 1 )
            goto LABEL_1018;
          v677 = System_Int32__Parse(v673->m_Items[1], 0LL);
          if ( !v676 )
            goto LABEL_1012;
          v676[1].fields.miLineH = v677;
          v682 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v678, v679, v680, v681);
          System_Action___ctor(v682, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          SrcSpotBasePrefab__SetState((SrcSpotBasePrefab_o *)v676, 5, v682, 0LL);
          v683 = *v110;
          if ( !*v110 )
            goto LABEL_1012;
          v683->fields.lastDispSpot = (struct SrcSpotBasePrefab_o *)v676;
          p_lastDispSpot = (BattleServantConfConponent_o *)&v683->fields.lastDispSpot;
          v669 = (System_Int32_array **)v676;
LABEL_645:
          sub_B16F98(p_lastDispSpot, v669, v662, v663, v664, v665, v666, v667);
          return;
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
          return;
        case 'n':
          v684 = *v110;
          v685 = System_Int32__Parse(v122->fields.param, 0LL);
          if ( !v684 )
            goto LABEL_1012;
          v686 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                           v684,
                                           0,
                                           v685,
                                           this,
                                           (const MethodInfo_19E0B48 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v686, 0LL, 0LL) )
            return;
          if ( !v686 )
            goto LABEL_1012;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v686, 0, 0LL);
          monitor = v686[9].monitor;
          if ( !monitor )
            goto LABEL_1012;
          monitor[5] = 0;
          v688 = (SrcSpotBasePrefab_o *)v686;
          v689 = 0;
          goto LABEL_681;
        case 'o':
          v716 = *v110;
          v717 = System_Int32__Parse(v122->fields.param, 0LL);
          if ( !v716 )
            goto LABEL_1012;
          v714 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                           v716,
                                           0,
                                           v717,
                                           this,
                                           (const MethodInfo_19E0B48 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v714, 0LL, 0LL) )
            return;
          if ( !v714 )
            goto LABEL_1012;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v714, 1, 0LL);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v714, 0, 0LL);
          v718 = v714[9].monitor;
          if ( !v718 )
            goto LABEL_1012;
          v718[5] = 2;
          goto LABEL_680;
        case 'p':
          v712 = *v110;
          v713 = System_Int32__Parse(v122->fields.param, 0LL);
          if ( !v712 )
            goto LABEL_1012;
          v714 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                           v712,
                                           0,
                                           v713,
                                           this,
                                           (const MethodInfo_19E0B48 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v714, 0LL, 0LL) )
            return;
          if ( !v714 )
            goto LABEL_1012;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v714, 1, 0LL);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v714, 1, 0LL);
          v715 = v714[9].monitor;
          if ( !v715 )
            goto LABEL_1012;
          v715[5] = 1;
LABEL_680:
          v689 = 1;
          v688 = (SrcSpotBasePrefab_o *)v714;
LABEL_681:
          SrcSpotBasePrefab__SetTouchType(v688, v689, 0LL);
          goto LABEL_945;
        case 'q':
          v630 = v122->fields.param;
          IsUnderVista = sub_B17014(char___TypeInfo, 1LL, v131);
          if ( !IsUnderVista )
            goto LABEL_1012;
          v120 = IsUnderVista;
          if ( !*(_DWORD *)(IsUnderVista + 24) )
            goto LABEL_1018;
          *(_WORD *)(IsUnderVista + 32) = 44;
          if ( !v630 )
            goto LABEL_1012;
          v631 = System_String__Split(v630, (System_Char_array *)IsUnderVista, 0LL);
          if ( !v631 )
            goto LABEL_1012;
          v632 = v631;
          if ( (int)v631->max_length <= 1 )
            goto LABEL_443;
          v633 = *v110;
          v634 = System_Int32__Parse(v631->m_Items[0], 0LL);
          if ( !v633 )
            goto LABEL_1012;
          v635 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                   v633,
                   0,
                   v634,
                   this,
                   (const MethodInfo_19E0B48 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          IsUnderVista = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v635, 0LL, 0LL);
          if ( (IsUnderVista & 1) != 0 )
            return;
          if ( v632->max_length <= 1 )
            goto LABEL_1018;
          v636 = System_Int32__Parse(v632->m_Items[1], 0LL);
          if ( !v635 )
            goto LABEL_1012;
          v635[1].fields.miLineH = v636;
          SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)v635, 1, 0LL);
          goto LABEL_945;
        default:
          switch ( id )
          {
            case 200:
              if ( this->fields.IsMapModel )
              {
                v214 = sub_B170CC(QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo, v130, v131, v132, v133);
                QuestAfterAction_StateMain___c__DisplayClass16_4___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_4_o *)v214,
                  0LL);
                if ( !v214 )
                  goto LABEL_1012;
                *(_QWORD *)(v214 + 24) = v103;
                sub_B16F98(
                  (BattleServantConfConponent_o *)(v214 + 24),
                  (System_Int32_array **)v103,
                  v215,
                  v216,
                  v217,
                  v218,
                  v219,
                  v220);
                v221 = *(_QWORD *)(v214 + 24);
                if ( !v221 )
                  goto LABEL_1012;
                v222 = *(QuestAfterAction_o **)(v221 + 24);
                v223 = System_Int32__Parse(v122->fields.param, 0LL);
                if ( !v222 )
                  goto LABEL_1012;
                v224 = (System_Int32_array **)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                v222,
                                                1,
                                                v223,
                                                this,
                                                (const MethodInfo_19E0B48 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                *(_QWORD *)(v214 + 16) = v224;
                sub_B16F98((BattleServantConfConponent_o *)(v214 + 16), v224, v225, v226, v227, v228, v229, v230);
                v231 = *(UnityEngine_Object_o **)(v214 + 16);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Equality(v231, 0LL, 0LL) )
                {
                  v236 = *(ModelLineComponent_o **)(v214 + 16);
                  v237 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v232, v233, v234, v235);
                  System_Action___ctor(
                    v237,
                    (Il2CppObject *)v214,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__,
                    0LL);
                  if ( !v236 )
                    goto LABEL_1012;
                  v238 = 2;
                  goto LABEL_722;
                }
              }
              else
              {
                v913 = sub_B170CC(QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo, v130, v131, v132, v133);
                QuestAfterAction_StateMain___c__DisplayClass16_5___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_5_o *)v913,
                  0LL);
                if ( !v913 )
                  goto LABEL_1012;
                *(_QWORD *)(v913 + 24) = v103;
                sub_B16F98(
                  (BattleServantConfConponent_o *)(v913 + 24),
                  (System_Int32_array **)v103,
                  v914,
                  v915,
                  v916,
                  v917,
                  v918,
                  v919);
                v920 = *(_QWORD *)(v913 + 24);
                if ( !v920 )
                  goto LABEL_1012;
                v921 = *(QuestAfterAction_o **)(v920 + 24);
                v922 = System_Int32__Parse(v122->fields.param, 0LL);
                if ( !v921 )
                  goto LABEL_1012;
                v923 = (System_Int32_array **)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                v921,
                                                1,
                                                v922,
                                                this,
                                                (const MethodInfo_19E0B48 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                *(_QWORD *)(v913 + 16) = v923;
                sub_B16F98((BattleServantConfConponent_o *)(v913 + 16), v923, v924, v925, v926, v927, v928, v929);
                v930 = *(UnityEngine_Object_o **)(v913 + 16);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Equality(v930, 0LL, 0LL) )
                {
                  v910 = *(srcLineSprite_o **)(v913 + 16);
                  v911 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v931, v932, v933, v934);
                  System_Action___ctor(
                    v911,
                    (Il2CppObject *)v913,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__,
                    0LL);
                  if ( !v910 )
                    goto LABEL_1012;
                  v912 = 2;
                  goto LABEL_929;
                }
              }
              return;
            case 201:
              if ( this->fields.IsMapModel )
              {
                v753 = sub_B170CC(QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo, v130, v131, v132, v133);
                QuestAfterAction_StateMain___c__DisplayClass16_6___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_6_o *)v753,
                  0LL);
                if ( !v753 )
                  goto LABEL_1012;
                *(_QWORD *)(v753 + 24) = v103;
                sub_B16F98(
                  (BattleServantConfConponent_o *)(v753 + 24),
                  (System_Int32_array **)v103,
                  v754,
                  v755,
                  v756,
                  v757,
                  v758,
                  v759);
                v760 = *(_QWORD *)(v753 + 24);
                if ( !v760 )
                  goto LABEL_1012;
                v761 = *(QuestAfterAction_o **)(v760 + 24);
                v762 = System_Int32__Parse(v122->fields.param, 0LL);
                if ( !v761 )
                  goto LABEL_1012;
                v763 = (System_Int32_array **)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                v761,
                                                1,
                                                v762,
                                                this,
                                                (const MethodInfo_19E0B48 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                *(_QWORD *)(v753 + 16) = v763;
                sub_B16F98((BattleServantConfConponent_o *)(v753 + 16), v763, v764, v765, v766, v767, v768, v769);
                v770 = *(UnityEngine_Object_o **)(v753 + 16);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Equality(v770, 0LL, 0LL) )
                {
                  v236 = *(ModelLineComponent_o **)(v753 + 16);
                  v237 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v771, v772, v773, v774);
                  System_Action___ctor(
                    v237,
                    (Il2CppObject *)v753,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__,
                    0LL);
                  if ( !v236 )
                    goto LABEL_1012;
                  v238 = 3;
                  goto LABEL_722;
                }
              }
              else
              {
                v935 = sub_B170CC(QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo, v130, v131, v132, v133);
                QuestAfterAction_StateMain___c__DisplayClass16_7___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_7_o *)v935,
                  0LL);
                if ( !v935 )
                  goto LABEL_1012;
                *(_QWORD *)(v935 + 24) = v103;
                sub_B16F98(
                  (BattleServantConfConponent_o *)(v935 + 24),
                  (System_Int32_array **)v103,
                  v936,
                  v937,
                  v938,
                  v939,
                  v940,
                  v941);
                v942 = *(_QWORD *)(v935 + 24);
                if ( !v942 )
                  goto LABEL_1012;
                v943 = *(QuestAfterAction_o **)(v942 + 24);
                v944 = System_Int32__Parse(v122->fields.param, 0LL);
                if ( !v943 )
                  goto LABEL_1012;
                v945 = (System_Int32_array **)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                v943,
                                                1,
                                                v944,
                                                this,
                                                (const MethodInfo_19E0B48 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                *(_QWORD *)(v935 + 16) = v945;
                sub_B16F98((BattleServantConfConponent_o *)(v935 + 16), v945, v946, v947, v948, v949, v950, v951);
                v952 = *(UnityEngine_Object_o **)(v935 + 16);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Equality(v952, 0LL, 0LL) )
                {
                  v910 = *(srcLineSprite_o **)(v935 + 16);
                  v911 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v953, v954, v955, v956);
                  System_Action___ctor(
                    v911,
                    (Il2CppObject *)v935,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__,
                    0LL);
                  if ( !v910 )
                    goto LABEL_1012;
                  v912 = 3;
                  goto LABEL_929;
                }
              }
              return;
            case 202:
              if ( this->fields.IsMapModel )
              {
                v726 = sub_B170CC(QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo, v130, v131, v132, v133);
                QuestAfterAction_StateMain___c__DisplayClass16_8___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_8_o *)v726,
                  0LL);
                if ( !v726 )
                  goto LABEL_1012;
                *(_QWORD *)(v726 + 24) = v103;
                sub_B16F98(
                  (BattleServantConfConponent_o *)(v726 + 24),
                  (System_Int32_array **)v103,
                  v727,
                  v728,
                  v729,
                  v730,
                  v731,
                  v732);
                v733 = *(_QWORD *)(v726 + 24);
                if ( !v733 )
                  goto LABEL_1012;
                v734 = *(QuestAfterAction_o **)(v733 + 24);
                v735 = System_Int32__Parse(v122->fields.param, 0LL);
                if ( !v734 )
                  goto LABEL_1012;
                v736 = (System_Int32_array **)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                v734,
                                                1,
                                                v735,
                                                this,
                                                (const MethodInfo_19E0B48 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                *(_QWORD *)(v726 + 16) = v736;
                sub_B16F98((BattleServantConfConponent_o *)(v726 + 16), v736, v737, v738, v739, v740, v741, v742);
                v743 = *(UnityEngine_Object_o **)(v726 + 16);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Equality(v743, 0LL, 0LL) )
                {
                  v236 = *(ModelLineComponent_o **)(v726 + 16);
                  v237 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v744, v745, v746, v747);
                  System_Action___ctor(
                    v237,
                    (Il2CppObject *)v726,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__,
                    0LL);
                  if ( !v236 )
                    goto LABEL_1012;
                  v238 = 4;
LABEL_722:
                  ModelLineComponent__SetState(v236, v238, v237, 0LL);
                }
              }
              else
              {
                v888 = sub_B170CC(QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo, v130, v131, v132, v133);
                QuestAfterAction_StateMain___c__DisplayClass16_9___ctor(
                  (QuestAfterAction_StateMain___c__DisplayClass16_9_o *)v888,
                  0LL);
                if ( !v888 )
                  goto LABEL_1012;
                *(_QWORD *)(v888 + 24) = v103;
                sub_B16F98(
                  (BattleServantConfConponent_o *)(v888 + 24),
                  (System_Int32_array **)v103,
                  v889,
                  v890,
                  v891,
                  v892,
                  v893,
                  v894);
                v895 = *(_QWORD *)(v888 + 24);
                if ( !v895 )
                  goto LABEL_1012;
                v896 = *(QuestAfterAction_o **)(v895 + 24);
                v897 = System_Int32__Parse(v122->fields.param, 0LL);
                if ( !v896 )
                  goto LABEL_1012;
                v898 = (System_Int32_array **)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                v896,
                                                1,
                                                v897,
                                                this,
                                                (const MethodInfo_19E0B48 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                *(_QWORD *)(v888 + 16) = v898;
                sub_B16F98((BattleServantConfConponent_o *)(v888 + 16), v898, v899, v900, v901, v902, v903, v904);
                v905 = *(UnityEngine_Object_o **)(v888 + 16);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Equality(v905, 0LL, 0LL) )
                {
                  v910 = *(srcLineSprite_o **)(v888 + 16);
                  v911 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v906, v907, v908, v909);
                  System_Action___ctor(
                    v911,
                    (Il2CppObject *)v888,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__,
                    0LL);
                  if ( !v910 )
                    goto LABEL_1012;
                  v912 = 4;
LABEL_929:
                  srcLineSprite__SetState(v910, v912, v911, 0LL);
                }
              }
              return;
            case 203:
              IsMapModel = this->fields.IsMapModel;
              v749 = *v110;
              v750 = System_Int32__Parse(v122->fields.param, 0LL);
              if ( !v749 )
                goto LABEL_1012;
              if ( IsMapModel )
              {
                v751 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         v749,
                         1,
                         v750,
                         this,
                         (const MethodInfo_19E0B48 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v751, 0LL, 0LL) )
                  return;
                if ( !v751 )
                  goto LABEL_1012;
                ModelLineComponent__SetQuestAfterActionScaleAnimQuick((ModelLineComponent_o *)v751, 0, 0LL);
                mcAtlasP = v751->fields.mcTweenScaleP;
                if ( !mcAtlasP )
                  goto LABEL_1012;
              }
              else
              {
                v957 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                 v749,
                                                 1,
                                                 v750,
                                                 this,
                                                 (const MethodInfo_19E0B48 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Equality(v957, 0LL, 0LL) )
                  return;
                if ( !v957 )
                  goto LABEL_1012;
                srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v957, 0, 0LL);
                mcAtlasP = v957[5].klass;
                if ( !mcAtlasP )
                  goto LABEL_1012;
              }
              goto LABEL_936;
            case 204:
              v721 = this->fields.IsMapModel;
              v722 = *v110;
              v723 = System_Int32__Parse(v122->fields.param, 0LL);
              if ( !v722 )
                goto LABEL_1012;
              if ( v721 )
              {
                v724 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         v722,
                         1,
                         v723,
                         this,
                         (const MethodInfo_19E0B48 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v724, 0LL, 0LL) )
                  return;
                if ( !v724 )
                  goto LABEL_1012;
                ModelLineComponent__SetQuestAfterActionScaleAnimQuick((ModelLineComponent_o *)v724, 1, 0LL);
                ModelLineComponent__SetQuestAfterActionColorAnimQuick((ModelLineComponent_o *)v724, 0, 0LL);
                mcTweenScaleP = v724->fields.mcTweenScaleP;
                if ( !mcTweenScaleP )
                  goto LABEL_1012;
              }
              else
              {
                v886 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                 v722,
                                                 1,
                                                 v723,
                                                 this,
                                                 (const MethodInfo_19E0B48 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Equality(v886, 0LL, 0LL) )
                  return;
                if ( !v886 )
                  goto LABEL_1012;
                srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v886, 1, 0LL);
                srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v886, 0, 0LL);
                mcTweenScaleP = v886[5].klass;
                if ( !mcTweenScaleP )
                  goto LABEL_1012;
              }
              v887 = 2;
              goto LABEL_944;
            case 205:
              v775 = this->fields.IsMapModel;
              v776 = *v110;
              v777 = System_Int32__Parse(v122->fields.param, 0LL);
              if ( !v776 )
                goto LABEL_1012;
              if ( v775 )
              {
                v778 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         v776,
                         1,
                         v777,
                         this,
                         (const MethodInfo_19E0B48 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v778, 0LL, 0LL) )
                  return;
                if ( !v778 )
                  goto LABEL_1012;
                ModelLineComponent__SetQuestAfterActionScaleAnimQuick((ModelLineComponent_o *)v778, 1, 0LL);
                ModelLineComponent__SetQuestAfterActionColorAnimQuick((ModelLineComponent_o *)v778, 1, 0LL);
                mcTweenScaleP = v778->fields.mcTweenScaleP;
                if ( !mcTweenScaleP )
                  goto LABEL_1012;
              }
              else
              {
                v958 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                 v776,
                                                 1,
                                                 v777,
                                                 this,
                                                 (const MethodInfo_19E0B48 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Equality(v958, 0LL, 0LL) )
                  return;
                if ( !v958 )
                  goto LABEL_1012;
                srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v958, 1, 0LL);
                srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v958, 1, 0LL);
                mcTweenScaleP = v958[5].klass;
                if ( !mcTweenScaleP )
                  goto LABEL_1012;
              }
              v887 = 1;
LABEL_944:
              mcTweenScaleP[4] = v887;
              goto LABEL_945;
            default:
              return;
          }
      }
    }
    switch ( id )
    {
      case 300:
      case 305:
        v157 = v122->fields.param;
        IsUnderVista = sub_B17014(char___TypeInfo, 1LL, v131);
        if ( !IsUnderVista )
          goto LABEL_1012;
        v120 = IsUnderVista;
        if ( !*(_DWORD *)(IsUnderVista + 24) )
          goto LABEL_1018;
        *(_WORD *)(IsUnderVista + 32) = 44;
        if ( !v157 )
          goto LABEL_1012;
        IsUnderVista = (__int64)System_String__Split(v157, (System_Char_array *)IsUnderVista, 0LL);
        if ( !IsUnderVista )
          goto LABEL_1012;
        v158 = *(_QWORD *)(IsUnderVista + 24);
        v159 = IsUnderVista;
        if ( (int)v158 <= 0 )
          goto LABEL_443;
        if ( (int)v158 > 2 )
        {
          v797 = System_Single__Parse(*(System_String_o **)(IsUnderVista + 48), 0LL);
          v158 = *(_QWORD *)(v159 + 24);
          v160 = v797 * 0.001;
        }
        else
        {
          v160 = 0.5;
        }
        if ( (int)v158 >= 2 )
        {
          IsUnderVista = System_Int32__Parse(*(System_String_o **)(v159 + 40), 0LL);
          v780 = IsUnderVista;
          if ( !(unsigned int)*(_QWORD *)(v159 + 24) )
            goto LABEL_1018;
        }
        else
        {
          v780 = 15;
          if ( !(_DWORD)v158 )
            goto LABEL_1018;
        }
        v799 = *v110;
        v800 = System_Int32__Parse(*(System_String_o **)(v159 + 32), 0LL);
        if ( !v799 )
          goto LABEL_1012;
        MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v799, 0, v800, this, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(MapGameObject, 0LL, 0LL) )
          return;
        LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)MapGameObject, 0LL);
        x = LocalPosition.fields.x;
        y = LocalPosition.fields.y;
        z = LocalPosition.fields.z;
        if ( this->fields.IsMapModel )
        {
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_40F6042 )
          {
            sub_B16FFC(&TerminalSceneComponent_TypeInfo, v802);
            byte_40F6042 = 1;
          }
          v803 = TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v803 = TerminalSceneComponent_TypeInfo;
          }
          v804 = v803->static_fields->mInstance;
          if ( !v804 )
            goto LABEL_1012;
          v805 = v804->fields.mTerminalMap;
          if ( !v805 )
            goto LABEL_1012;
          v1032.fields.x = x;
          v1032.fields.y = y;
          v1032.fields.z = z;
          v1033 = ScrTerminalMap__ConvertLocalToScreenPosition(v805, v1032, 0LL);
          x = v1033.fields.x;
          y = v1033.fields.y;
          z = v1033.fields.z;
        }
        if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        IsUnderVista = FSUtility__IsUnderVista(0LL);
        if ( (IsUnderVista & 1) == 0 )
        {
          if ( !*(_DWORD *)(v159 + 24) )
            goto LABEL_1018;
          v808 = *(System_String_o **)(v159 + 32);
          if ( v808 )
          {
            if ( System_String__op_Equality(
                   *(System_String_o **)(v159 + 32),
                   (System_String_o *)StringLiteral_1093,
                   0LL) )
            {
              y = y + -50.0;
            }
            else if ( System_String__op_Equality(v808, (System_String_o *)StringLiteral_1154, 0LL) )
            {
              y = y + -50.0;
            }
          }
        }
        if ( v122->fields.id != 305 || *(int *)(v159 + 24) < 4 )
        {
          if ( !*v110 )
            goto LABEL_1012;
          mMapCamera = (*v110)->fields.mMapCamera;
          v795 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v120, v121, v806, v807);
          v796 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__;
          goto LABEL_990;
        }
        if ( !*v110 )
          goto LABEL_1012;
        v972 = (*v110)->fields.mMapCamera;
        *(_QWORD *)&v1021.fields.value.fields.x = &v1010;
        v1037.fields.x = x;
        v1037.fields.y = y;
        *(_QWORD *)&v1021.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
        v1037.fields.z = z;
        *(_QWORD *)&v1010.fields.value.fields.x = 0LL;
        *(_QWORD *)&v1010.fields.value.fields.z = 0LL;
        System_Nullable_Vector3____ctor(v1021, v1037, v121);
        if ( *(_DWORD *)(v159 + 24) <= 3u )
          goto LABEL_1018;
        v981 = System_Single__Parse(*(System_String_o **)(v159 + 56), 0LL);
        p_size = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(p_size, v981, (const MethodInfo_296A23C *)Method_System_Nullable_float___ctor__);
        v978 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v982, v983, v984, v985);
        v979 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__;
        goto LABEL_1007;
      case 301:
      case 306:
        v357 = v122->fields.param;
        IsUnderVista = sub_B17014(char___TypeInfo, 1LL, v131);
        if ( !IsUnderVista )
          goto LABEL_1012;
        v120 = IsUnderVista;
        if ( !*(_DWORD *)(IsUnderVista + 24) )
          goto LABEL_1018;
        *(_WORD *)(IsUnderVista + 32) = 44;
        if ( !v357 )
          goto LABEL_1012;
        IsUnderVista = (__int64)System_String__Split(v357, (System_Char_array *)IsUnderVista, 0LL);
        if ( !IsUnderVista )
          goto LABEL_1012;
        v358 = *(_QWORD *)(IsUnderVista + 24);
        v359 = IsUnderVista;
        if ( (int)v358 <= 0 )
          goto LABEL_443;
        if ( (int)v358 > 2 )
        {
          v798 = System_Single__Parse(*(System_String_o **)(IsUnderVista + 48), 0LL);
          v358 = *(_QWORD *)(v359 + 24);
          v160 = v798 * 0.001;
        }
        else
        {
          v160 = 0.5;
        }
        if ( (int)v358 >= 2 )
        {
          IsUnderVista = System_Int32__Parse(*(System_String_o **)(v359 + 40), 0LL);
          v780 = IsUnderVista;
          if ( !(unsigned int)*(_QWORD *)(v359 + 24) )
            goto LABEL_1018;
        }
        else
        {
          v780 = 15;
          if ( !(_DWORD)v358 )
            goto LABEL_1018;
        }
        v809 = *v110;
        v810 = System_Int32__Parse(*(System_String_o **)(v359 + 32), 0LL);
        if ( !v809 )
          goto LABEL_1012;
        v811 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v809, 1, v810, this, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(v811, 0LL, 0LL) )
          return;
        if ( this->fields.IsMapModel )
        {
          if ( !v811 )
            goto LABEL_1012;
          Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                      (UnityEngine_GameObject_o *)v811,
                                      (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
          if ( !Component_srcLineSprite )
            goto LABEL_1012;
          Position = GameObjectExtensions__GetPosition(
                       (UnityEngine_GameObject_o *)Component_srcLineSprite->fields.mFSM,
                       0LL);
          v814 = Position.fields.x;
          v815 = Position.fields.y;
          v816 = Position.fields.z;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_40F6042 )
          {
            sub_B16FFC(&TerminalSceneComponent_TypeInfo, v813);
            byte_40F6042 = 1;
          }
          v817 = TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v817 = TerminalSceneComponent_TypeInfo;
          }
          v818 = v817->static_fields->mInstance;
          if ( !v818 )
            goto LABEL_1012;
          v819 = v818->fields.mTerminalMap;
          if ( !v819 )
            goto LABEL_1012;
          v1035.fields.x = v814;
          v1035.fields.y = v815;
          v1035.fields.z = v816;
          *(UnityEngine_Vector3_o *)&v820 = ScrTerminalMap__ConvertWorldToScreenPosition(v819, v1035, 0LL);
        }
        else
        {
          *(UnityEngine_Vector3_o *)&v820 = GameObjectExtensions__GetLocalPosition(
                                              (UnityEngine_GameObject_o *)v811,
                                              0LL);
        }
        v960 = v820;
        v961 = v821;
        v962 = v822;
        if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        IsUnderVista = FSUtility__IsUnderVista(0LL);
        if ( (IsUnderVista & 1) == 0 )
        {
          if ( !*(_DWORD *)(v359 + 24) )
            goto LABEL_1018;
          v965 = *(System_String_o **)(v359 + 32);
          if ( v965 )
          {
            if ( System_String__op_Equality(
                   *(System_String_o **)(v359 + 32),
                   (System_String_o *)StringLiteral_1093,
                   0LL) )
            {
              v961 = v961 + -95.0;
            }
            else if ( System_String__op_Equality(v965, (System_String_o *)StringLiteral_1155, 0LL) )
            {
              v961 = v961 + 45.0;
            }
          }
        }
        if ( v122->fields.id != 306 || *(int *)(v359 + 24) < 4 )
        {
          if ( !*v110 )
            goto LABEL_1012;
          v986 = (*v110)->fields.mMapCamera;
          v980 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v120, v121, v963, v964);
          System_Action___ctor(
            v980,
            (Il2CppObject *)v103,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__,
            0LL);
          if ( !v986 )
            goto LABEL_1012;
          v471 = v986;
          v472 = v960;
          v473 = v961;
          v474 = v962;
          goto LABEL_1002;
        }
        if ( !*v110 )
          goto LABEL_1012;
        v972 = (*v110)->fields.mMapCamera;
        *(_QWORD *)&v1022.fields.value.fields.x = &v1010;
        v1038.fields.x = v960;
        v1038.fields.y = v961;
        *(_QWORD *)&v1022.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
        v1038.fields.z = v962;
        *(_QWORD *)&v1010.fields.value.fields.x = 0LL;
        *(_QWORD *)&v1010.fields.value.fields.z = 0LL;
        System_Nullable_Vector3____ctor(v1022, v1038, v121);
        if ( *(_DWORD *)(v359 + 24) <= 3u )
          goto LABEL_1018;
        v987 = System_Single__Parse(*(System_String_o **)(v359 + 56), 0LL);
        v1016 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v1016, v987, (const MethodInfo_296A23C *)Method_System_Nullable_float___ctor__);
        v978 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v988, v989, v990, v991);
        v979 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__;
LABEL_1007:
        v992 = v978;
        System_Action___ctor(v978, (Il2CppObject *)v103, *v979, 0LL);
        if ( !v972 )
          goto LABEL_1012;
        v1025 = v1010;
        v1019 = size;
        v993 = v972;
        v994 = v160;
        v995 = v780;
        v996 = v992;
        goto LABEL_1017;
      case 302:
      case 307:
        v331 = v122->fields.param;
        IsUnderVista = sub_B17014(char___TypeInfo, 1LL, v131);
        if ( !IsUnderVista )
          goto LABEL_1012;
        v120 = IsUnderVista;
        if ( !*(_DWORD *)(IsUnderVista + 24) )
          goto LABEL_1018;
        *(_WORD *)(IsUnderVista + 32) = 44;
        if ( !v331 )
          goto LABEL_1012;
        IsUnderVista = (__int64)System_String__Split(v331, (System_Char_array *)IsUnderVista, 0LL);
        if ( !IsUnderVista )
          goto LABEL_1012;
        v332 = *(_QWORD *)(IsUnderVista + 24);
        v333 = IsUnderVista;
        if ( (int)v332 <= 0 )
          goto LABEL_443;
        if ( (int)v332 > 2 )
        {
          v779 = System_Single__Parse(*(System_String_o **)(IsUnderVista + 48), 0LL);
          v332 = *(_QWORD *)(v333 + 24);
          v160 = v779 * 0.001;
        }
        else
        {
          v160 = 0.5;
        }
        if ( (int)v332 >= 2 )
        {
          IsUnderVista = System_Int32__Parse(*(System_String_o **)(v333 + 40), 0LL);
          v780 = IsUnderVista;
          if ( !(unsigned int)*(_QWORD *)(v333 + 24) )
            goto LABEL_1018;
        }
        else
        {
          v780 = 15;
          if ( !(_DWORD)v332 )
            goto LABEL_1018;
        }
        v781 = *v110;
        v782 = System_Int32__Parse(*(System_String_o **)(v333 + 32), 0LL);
        if ( !v781 )
          goto LABEL_1012;
        v783 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v781, 2, v782, this, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(v783, 0LL, 0LL) )
          return;
        v1028 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v783, 0LL);
        x = v1028.fields.x;
        y = v1028.fields.y;
        z = v1028.fields.z;
        if ( this->fields.IsMapModel )
        {
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_40F6042 )
          {
            sub_B16FFC(&TerminalSceneComponent_TypeInfo, v784);
            byte_40F6042 = 1;
          }
          v791 = TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v791 = TerminalSceneComponent_TypeInfo;
          }
          v792 = v791->static_fields->mInstance;
          if ( !v792 )
            goto LABEL_1012;
          v793 = v792->fields.mTerminalMap;
          if ( !v793 )
            goto LABEL_1012;
          v1029.fields.x = x;
          v1029.fields.y = y;
          v1029.fields.z = z;
          v1030 = ScrTerminalMap__ConvertLocalToScreenPosition(v793, v1029, 0LL);
          x = v1030.fields.x;
          y = v1030.fields.y;
          z = v1030.fields.z;
        }
        if ( v122->fields.id != 307 || *(int *)(v333 + 24) < 4 )
        {
          if ( !*v110 )
            goto LABEL_1012;
          mMapCamera = (*v110)->fields.mMapCamera;
          v795 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v784, v785, v786, v787);
          v796 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__14__;
LABEL_990:
          v980 = v795;
          System_Action___ctor(v795, (Il2CppObject *)v103, *v796, 0LL);
          if ( !mMapCamera )
            goto LABEL_1012;
          v471 = mMapCamera;
          v472 = x;
          v473 = y;
          v474 = z;
LABEL_1002:
          v475 = v160;
          v476 = v780;
          v477 = v980;
          goto LABEL_1003;
        }
        if ( !*v110 )
          goto LABEL_1012;
        v972 = (*v110)->fields.mMapCamera;
        *(_QWORD *)&v1020.fields.value.fields.x = &v1010;
        v1036.fields.x = x;
        v1036.fields.y = y;
        *(_QWORD *)&v1020.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
        v1036.fields.z = z;
        *(_QWORD *)&v1010.fields.value.fields.x = 0LL;
        *(_QWORD *)&v1010.fields.value.fields.z = 0LL;
        System_Nullable_Vector3____ctor(v1020, v1036, v785);
        if ( *(_DWORD *)(v333 + 24) <= 3u )
          goto LABEL_1018;
        v973 = System_Single__Parse(*(System_String_o **)(v333 + 56), 0LL);
        v1014 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v1014, v973, (const MethodInfo_296A23C *)Method_System_Nullable_float___ctor__);
        v978 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v974, v975, v976, v977);
        v979 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__13__;
        goto LABEL_1007;
      case 303:
      case 308:
        v334 = v122->fields.param;
        IsUnderVista = sub_B17014(char___TypeInfo, 1LL, v131);
        if ( !IsUnderVista )
          goto LABEL_1012;
        v120 = IsUnderVista;
        if ( !*(_DWORD *)(IsUnderVista + 24) )
          goto LABEL_1018;
        *(_WORD *)(IsUnderVista + 32) = 44;
        if ( !v334 )
          goto LABEL_1012;
        v335 = System_String__Split(v334, (System_Char_array *)IsUnderVista, 0LL);
        if ( !v335 )
          goto LABEL_1012;
        v336 = v335;
        if ( (int)v335->max_length < 4 )
          goto LABEL_443;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_40F98B3 )
        {
          sub_B16FFC(&TerminalPramsManager_TypeInfo, v120);
          byte_40F98B3 = 1;
        }
        IsUnderVista = (__int64)TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          IsUnderVista = (__int64)TerminalPramsManager_TypeInfo;
        }
        if ( *(_BYTE *)(*(_QWORD *)(IsUnderVista + 184) + 88LL) )
          goto LABEL_443;
        if ( v336->max_length <= 2 )
          goto LABEL_1018;
        v337 = System_Single__Parse(v336->m_Items[2], 0LL) * 0.001;
        v338 = v337 >= 0.0 ? v337 : 0.5;
        if ( v336->max_length <= 3 )
          goto LABEL_1018;
        v339 = System_Int32__Parse(v336->m_Items[3], 0LL);
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_40F6042 )
        {
          sub_B16FFC(&TerminalSceneComponent_TypeInfo, v120);
          byte_40F6042 = 1;
        }
        IsUnderVista = (__int64)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          IsUnderVista = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v340 = **(_QWORD **)(IsUnderVista + 184);
        if ( !v340 )
          goto LABEL_1012;
        if ( !v336->max_length )
          goto LABEL_1018;
        v341 = *(ScrTerminalMap_o **)(v340 + 256);
        v342 = System_Single__Parse(v336->m_Items[0], 0LL);
        if ( v336->max_length <= 1 )
          goto LABEL_1018;
        v343 = v342;
        v344 = System_Single__Parse(v336->m_Items[1], 0LL);
        if ( !v341 )
          goto LABEL_1012;
        *(UnityEngine_Vector3_o *)&v349 = ScrTerminalMap__LocalPosFromCoord(v341, v343, v344, 0.0, 0.0, 0LL);
        v352 = v349;
        v353 = v350;
        v354 = v351;
        if ( v122->fields.id != 308 || (int)v336->max_length < 5 )
        {
          if ( !*v110 )
            goto LABEL_1012;
          v355 = (*v110)->fields.mMapCamera;
          v356 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v345, v346, v347, v348);
          System_Action___ctor(
            v356,
            (Il2CppObject *)v103,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__16__,
            0LL);
          if ( !v355 )
            goto LABEL_1012;
LABEL_481:
          v471 = v355;
          v472 = v352;
          v473 = v353;
          v474 = v354;
          v475 = v338;
          v476 = v339;
          v477 = v356;
LABEL_1003:
          MapCamera__StartAutoMove(v471, *(UnityEngine_Vector3_o *)&v472, v475, v476, v477, 0LL);
          return;
        }
        if ( !*v110 )
          goto LABEL_1012;
        v997 = (*v110)->fields.mMapCamera;
        *(_QWORD *)&v1023.fields.value.fields.x = &v1010;
        *(_QWORD *)&v1023.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
        v1010 = (System_Nullable_Vector3__o)0LL;
        System_Nullable_Vector3____ctor(v1023, *(UnityEngine_Vector3_o *)&v349, v346);
        if ( v336->max_length <= 4 )
          goto LABEL_1018;
        v998 = System_Single__Parse(v336->m_Items[4], 0LL);
        v1017 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v1017, v998, (const MethodInfo_296A23C *)Method_System_Nullable_float___ctor__);
        v1003 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v999, v1000, v1001, v1002);
        System_Action___ctor(
          v1003,
          (Il2CppObject *)v103,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__15__,
          0LL);
        if ( !v997 )
          goto LABEL_1012;
LABEL_1016:
        v1025 = v1010;
        v1019 = size;
        v993 = v997;
        v994 = v338;
        v995 = v339;
        v996 = v1003;
LABEL_1017:
        MapCamera__StartAutoWork(v993, v994, v1025, v1019, v995, v996, 0LL);
        return;
      case 304:
        v436 = v122->fields.param;
        IsUnderVista = sub_B17014(char___TypeInfo, 1LL, v131);
        if ( !IsUnderVista )
          goto LABEL_1012;
        v120 = IsUnderVista;
        if ( !*(_DWORD *)(IsUnderVista + 24) )
          goto LABEL_1018;
        *(_WORD *)(IsUnderVista + 32) = 44;
        if ( !v436 )
          goto LABEL_1012;
        v437 = System_String__Split(v436, (System_Char_array *)IsUnderVista, 0LL);
        if ( !v437 )
          goto LABEL_1012;
        max_length = v437->max_length;
        v439 = v437;
        if ( max_length <= 1 )
          goto LABEL_443;
        v440 = System_Single__Parse(v437->m_Items[0], 0LL);
        if ( v439->max_length <= 1 )
          goto LABEL_1018;
        v441 = v440;
        v444 = System_Single__Parse(v439->m_Items[1], 0LL);
        if ( !*v110 )
          goto LABEL_1012;
        v445 = (*v110)->fields.mMapCamera;
        v446 = v444 * 0.001;
        if ( v446 >= 0.0 )
          v447 = v446;
        else
          v447 = 0.5;
        if ( max_length < 3 )
        {
          v448 = 5;
        }
        else
        {
          if ( v439->max_length <= 2 )
            goto LABEL_1018;
          v448 = System_Int32__Parse(v439->m_Items[2], 0LL);
        }
        v959 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v120, v121, v442, v443);
        System_Action___ctor(
          v959,
          (Il2CppObject *)v103,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__17__,
          0LL);
        if ( v445 )
        {
          MapCamera__StartAutoZoom(v445, v441, v447, v448, v959, 0LL);
          return;
        }
        goto LABEL_1019;
      default:
        if ( id == 350 )
        {
          v360 = v122->fields.param;
          ComponentInChildren_Dropdown_DropdownItem = (void *)sub_B17014(char___TypeInfo, 1LL, v131);
          if ( !ComponentInChildren_Dropdown_DropdownItem )
            goto LABEL_1019;
          v174 = (System_Int32_array **)ComponentInChildren_Dropdown_DropdownItem;
          if ( *((_DWORD *)ComponentInChildren_Dropdown_DropdownItem + 6) )
          {
            *((_WORD *)ComponentInChildren_Dropdown_DropdownItem + 16) = 44;
            if ( v360 )
            {
              v361 = System_String__Split(v360, (System_Char_array *)ComponentInChildren_Dropdown_DropdownItem, 0LL);
              if ( v361 )
              {
                v362 = v361;
                if ( (int)v361->max_length <= 0 )
                  goto LABEL_443;
                v363 = System_Int32__Parse(v361->m_Items[0], 0LL);
                if ( v363 < 1 )
                  goto LABEL_443;
                v368 = v363;
                v369 = 0.5;
                if ( (int)v362->max_length > 1 )
                {
                  v370 = System_Int32__Parse(v362->m_Items[1], 0LL);
                  if ( (int)v362->max_length >= 3 )
                    v369 = System_Single__Parse(v362->m_Items[2], 0LL) * 0.001;
                }
                else
                {
                  v370 = 15;
                }
                if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                }
                if ( !byte_40F6042 )
                {
                  sub_B16FFC(&TerminalSceneComponent_TypeInfo, v364);
                  byte_40F6042 = 1;
                }
                v968 = TerminalSceneComponent_TypeInfo;
                if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  v968 = TerminalSceneComponent_TypeInfo;
                }
                v969 = v968->static_fields->mInstance;
                if ( v969 )
                {
                  v970 = v969->fields.mTerminalMap;
                  v971 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v364, v365, v366, v367);
                  System_Action___ctor(
                    v971,
                    (Il2CppObject *)v103,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__18__,
                    0LL);
                  if ( v970 )
                  {
                    ScrTerminalMap__RequestMapMove_24155032(v970, v368, v369, v370, v971, 0LL);
                    return;
                  }
                }
              }
            }
            goto LABEL_1019;
          }
          goto LABEL_1021;
        }
        if ( (unsigned int)(id - 351) >= 2 )
          return;
        v449 = v122->fields.param;
        ComponentInChildren_Dropdown_DropdownItem = (void *)sub_B17014(char___TypeInfo, 1LL, v131);
        if ( !ComponentInChildren_Dropdown_DropdownItem )
          goto LABEL_1019;
        v174 = (System_Int32_array **)ComponentInChildren_Dropdown_DropdownItem;
        if ( !*((_DWORD *)ComponentInChildren_Dropdown_DropdownItem + 6) )
          goto LABEL_1021;
        *((_WORD *)ComponentInChildren_Dropdown_DropdownItem + 16) = 44;
        if ( !v449 )
          goto LABEL_1019;
        v450 = System_String__Split(v449, (System_Char_array *)ComponentInChildren_Dropdown_DropdownItem, 0LL);
        if ( !v450 )
          goto LABEL_1019;
        v451 = v450;
        if ( (int)v450->max_length <= 4 )
          goto LABEL_443;
        v452 = System_Single__Parse(v450->m_Items[0], 0LL);
        if ( v451->max_length <= 1 )
          goto LABEL_1021;
        v453 = v452;
        v454 = System_Single__Parse(v451->m_Items[1], 0LL);
        if ( v451->max_length <= 2 )
          goto LABEL_1021;
        v455 = v454;
        v456 = System_Single__Parse(v451->m_Items[2], 0LL);
        if ( v451->max_length <= 3 )
          goto LABEL_1021;
        v457 = v456;
        v458 = System_Single__Parse(v451->m_Items[3], 0LL);
        if ( v451->max_length <= 4 )
          goto LABEL_1021;
        v459 = v458;
        v339 = System_Int32__Parse(v451->m_Items[4], 0LL);
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_40F6042 )
        {
          sub_B16FFC(&TerminalSceneComponent_TypeInfo, v460);
          byte_40F6042 = 1;
        }
        v461 = TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v461 = TerminalSceneComponent_TypeInfo;
        }
        v462 = v461->static_fields->mInstance;
        if ( !v462 )
          goto LABEL_1019;
        v463 = v462->fields.mTerminalMap;
        if ( !v463 )
          goto LABEL_1019;
        v1026.fields.y = v455;
        v1026.fields.z = v457;
        v338 = v459 * 0.001;
        v1026.fields.x = v453;
        *(UnityEngine_Vector3_o *)&v468 = ScrTerminalMap__ConvertLocalToScreenPosition(v463, v1026, 0LL);
        v352 = v468;
        v353 = v469;
        v354 = v470;
        if ( v122->fields.id != 352 || (int)v451->max_length < 6 )
        {
          if ( !*v110 )
            goto LABEL_1019;
          v355 = (*v110)->fields.mMapCamera;
          v356 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v464, v465, v466, v467);
          System_Action___ctor(
            v356,
            (Il2CppObject *)v103,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__20__,
            0LL);
          if ( !v355 )
            goto LABEL_1019;
          goto LABEL_481;
        }
        if ( !*v110 )
          goto LABEL_1019;
        v997 = (*v110)->fields.mMapCamera;
        *(_QWORD *)&v1024.fields.value.fields.x = &v1010;
        *(_QWORD *)&v1024.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
        v1010 = (System_Nullable_Vector3__o)0LL;
        System_Nullable_Vector3____ctor(v1024, *(UnityEngine_Vector3_o *)&v468, v465);
        if ( v451->max_length <= 5 )
          goto LABEL_1021;
        v1004 = System_Single__Parse(v451->m_Items[5], 0LL);
        v1018 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v1018, v1004, (const MethodInfo_296A23C *)Method_System_Nullable_float___ctor__);
        v1003 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v1005, v1006, v1007, v1008);
        System_Action___ctor(
          v1003,
          (Il2CppObject *)v103,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__19__,
          0LL);
        if ( !v997 )
          goto LABEL_1019;
        goto LABEL_1016;
    }
  }
  if ( id <= 604 )
  {
    if ( id > 540 )
    {
      switch ( id )
      {
        case 600:
          v148 = (System_String_o *)StringLiteral_1;
          v149 = System_String__Concat_43743732((System_String_o *)StringLiteral_10851, v122->fields.param, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v150 = LocalizationManager__Get(v149, 0LL);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v156 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v152, v153, v154, v155);
          System_Action___ctor(
            v156,
            (Il2CppObject *)v103,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__36__,
            0LL);
          if ( !Instance )
            goto LABEL_1019;
          CommonUI__OpenNotificationDialog(Instance, v148, v150, v156, 210, 0, 0, 0, 1, 0, 0, 0, 0LL, 0LL);
          return;
        case 601:
          v410 = (System_String_o *)StringLiteral_1;
          v411 = sub_B17014(string___TypeInfo, 1LL, v131);
          if ( !v411 )
            goto LABEL_1019;
          v417 = (System_String_array *)v411;
          ComponentInChildren_Dropdown_DropdownItem = (void *)StringLiteral_68;
          if ( StringLiteral_68 )
          {
            ComponentInChildren_Dropdown_DropdownItem = (void *)sub_B170BC(
                                                                  StringLiteral_68,
                                                                  v417->obj.klass->_1.element_class);
            if ( !ComponentInChildren_Dropdown_DropdownItem )
            {
              sub_B170F4(0LL);
              sub_B170A0();
            }
            v174 = (System_Int32_array **)StringLiteral_68;
          }
          else
          {
            v174 = 0LL;
          }
          if ( !v417->max_length )
            goto LABEL_1021;
          v417->m_Items[0] = (System_String_o *)v174;
          sub_B16F98((BattleServantConfConponent_o *)v417->m_Items, v174, v173, v412, v413, v414, v415, v416);
          v828 = v122->fields.param;
          if ( !v828 )
            goto LABEL_1019;
          v829 = System_String__Split_43806352(v828, v417, 0, 0LL);
          if ( !v829 )
            goto LABEL_1019;
          v830 = v829->max_length;
          if ( v830 <= 0 )
            goto LABEL_443;
          v831 = v829->m_Items[0];
          if ( v830 == 1 )
          {
            v832 = v829->m_Items[0];
            v831 = v410;
          }
          else
          {
            v832 = v829->m_Items[1];
          }
          v840 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v845 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v841, v842, v843, v844);
          System_Action___ctor(
            v845,
            (Il2CppObject *)v103,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__37__,
            0LL);
          if ( !v840 )
            goto LABEL_1020;
          CommonUI__OpenNotificationDialog(v840, v831, v832, v845, 210, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
          return;
        case 602:
          v393 = (System_String_o *)StringLiteral_1;
          v394 = System_String__Concat_43743732((System_String_o *)StringLiteral_10851, v122->fields.param, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v395 = LocalizationManager__Get(v394, 0LL);
          v396 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v401 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v397, v398, v399, v400);
          System_Action___ctor(
            v401,
            (Il2CppObject *)v103,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__38__,
            0LL);
          if ( !v396 )
            goto LABEL_1020;
          CommonUI__OpenNotificationDialog_18238444(
            v396,
            v393,
            v395,
            v401,
            40.0,
            -162.5,
            210,
            0,
            0,
            0,
            1,
            28,
            0,
            0,
            0LL);
          return;
        case 603:
          v402 = (System_String_o *)StringLiteral_1;
          v403 = sub_B17014(string___TypeInfo, 1LL, v131);
          if ( !v403 )
            goto LABEL_1020;
          v409 = (System_String_array *)v403;
          v181 = (System_String_array *)StringLiteral_68;
          if ( StringLiteral_68 )
          {
            v181 = (System_String_array *)sub_B170BC(StringLiteral_68, v409->obj.klass->_1.element_class);
            if ( !v181 )
            {
              sub_B170F4(0LL);
              sub_B170A0();
            }
            v183 = (System_Int32_array **)StringLiteral_68;
          }
          else
          {
            v183 = 0LL;
          }
          if ( !v409->max_length )
            goto LABEL_1022;
          v409->m_Items[0] = (System_String_o *)v183;
          sub_B16F98((BattleServantConfConponent_o *)v409->m_Items, v183, v182, v404, v405, v406, v407, v408);
          v823 = v122->fields.param;
          if ( !v823 )
            goto LABEL_1020;
          v824 = System_String__Split_43806352(v823, v409, 0, 0LL);
          if ( !v824 )
            goto LABEL_1020;
          v825 = v824->max_length;
          if ( v825 <= 0 )
            goto LABEL_443;
          v826 = v824->m_Items[0];
          if ( v825 == 1 )
          {
            v827 = v824->m_Items[0];
            v826 = v402;
          }
          else
          {
            v827 = v824->m_Items[1];
          }
          v834 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v839 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v835, v836, v837, v838);
          System_Action___ctor(
            v839,
            (Il2CppObject *)v103,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__39__,
            0LL);
          if ( !v834 )
            goto LABEL_1020;
          CommonUI__OpenNotificationDialog_18238444(
            v834,
            v826,
            v827,
            v839,
            40.0,
            -162.5,
            210,
            0,
            0,
            0,
            1,
            28,
            1,
            0,
            0LL);
          return;
        case 604:
          v384 = (System_String_o *)StringLiteral_1;
          v385 = System_String__Concat_43743732((System_String_o *)StringLiteral_10851, v122->fields.param, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v386 = LocalizationManager__Get(v385, 0LL);
          v387 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v392 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v388, v389, v390, v391);
          System_Action___ctor(
            v392,
            (Il2CppObject *)v103,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__40__,
            0LL);
          if ( !v387 )
            goto LABEL_1020;
          CommonUI__OpenNotificationDialog_18238444(
            v387,
            v384,
            v386,
            v392,
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
            0LL);
          return;
        default:
          if ( id == 550 )
            goto LABEL_945;
          if ( id != 560 )
            return;
          v239 = v122->fields.param;
          v181 = (System_String_array *)sub_B17014(char___TypeInfo, 1LL, v131);
          if ( !v181 )
            goto LABEL_1020;
          v183 = (System_Int32_array **)v181;
          if ( !v181->max_length )
            goto LABEL_1022;
          LOWORD(v181->m_Items[0]) = 44;
          if ( !v239 )
            goto LABEL_1020;
          v181 = System_String__Split(v239, (System_Char_array *)v181, 0LL);
          if ( !v181 )
            goto LABEL_1020;
          v242 = *(_QWORD *)&v181->max_length;
          if ( !v242 )
            goto LABEL_121;
          if ( !(_DWORD)v242 )
            goto LABEL_1022;
          LODWORD(v242) = System_Int32__Parse(v181->m_Items[0], 0LL) > 0;
LABEL_121:
          if ( !*v110 )
            goto LABEL_1020;
          v243 = *v110;
          TitleInfoCtrlCallback_k__BackingField = (*v110)->fields._TitleInfoCtrlCallback_k__BackingField;
          if ( !(_DWORD)v242 )
          {
            v719 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v183, v182, v240, v241);
            System_Action___ctor(v719, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( TitleInfoCtrlCallback_k__BackingField )
            {
              QuestAfterAction_TitleInfoControlCallback__Start(TitleInfoCtrlCallback_k__BackingField, v719, v720);
              return;
            }
            goto LABEL_1020;
          }
          if ( !TitleInfoCtrlCallback_k__BackingField )
            goto LABEL_1020;
          QuestAfterAction_TitleInfoControlCallback__Start(
            v243->fields._TitleInfoCtrlCallback_k__BackingField,
            0LL,
            (const MethodInfo *)v182);
          break;
      }
      goto LABEL_443;
    }
    if ( id != 530 )
    {
      if ( id != 540 )
        return;
      v180 = v122->fields.param;
      v181 = (System_String_array *)sub_B17014(char___TypeInfo, 1LL, v131);
      if ( !v181 )
        goto LABEL_1020;
      v183 = (System_Int32_array **)v181;
      if ( !v181->max_length )
        goto LABEL_1022;
      LOWORD(v181->m_Items[0]) = 44;
      if ( !v180 )
        goto LABEL_1020;
      v181 = System_String__Split(v180, (System_Char_array *)v181, 0LL);
      if ( !v181 )
        goto LABEL_1020;
      v184 = v181;
      if ( !v181->max_length )
        goto LABEL_1022;
      v186 = System_Int32__Parse(v181->m_Items[0], 0LL);
      if ( (int)v184->max_length < 2 )
      {
        v187 = -1;
      }
      else
      {
        v187 = System_Int32__Parse(v184->m_Items[1], 0LL);
        if ( (int)v184->max_length >= 3 )
        {
          v188 = System_Int32__Parse(v184->m_Items[2], 0LL);
LABEL_333:
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_40F604D )
          {
            sub_B16FFC(&TerminalPramsManager_TypeInfo, v185);
            byte_40F604D = 1;
          }
          v371 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v371 = TerminalPramsManager_TypeInfo;
          }
          v371->static_fields->_IsAutoResume_k__BackingField = 1;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_40F6042 )
          {
            sub_B16FFC(&TerminalSceneComponent_TypeInfo, v185);
            byte_40F6042 = 1;
          }
          v372 = TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v372 = TerminalSceneComponent_TypeInfo;
          }
          v373 = v372->static_fields->mInstance;
          if ( v373 )
          {
            v374 = v373->fields.mTerminalMap;
            if ( v374 )
            {
              if ( !ScrTerminalMap__RequestMapChange(v374, v186, v187, v188, 0LL) )
              {
                if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                }
                if ( !byte_40F604D )
                {
                  sub_B16FFC(&TerminalPramsManager_TypeInfo, v375);
                  byte_40F604D = 1;
                }
                v376 = TerminalPramsManager_TypeInfo;
                if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v376 = TerminalPramsManager_TypeInfo;
                }
                v376->static_fields->_IsAutoResume_k__BackingField = 0;
                goto LABEL_945;
              }
              ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                this,
                this->klass->vtable._15_onEnd.methodPtr);
              if ( *v110 )
              {
                QuestAfterAction__SetState(*v110, 0, 0LL);
                return;
              }
            }
          }
          goto LABEL_1020;
        }
      }
      v188 = -1;
      goto LABEL_333;
    }
    v245 = System_Int32__Parse(v122->fields.param, 0LL);
    v246 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( v246 )
    {
      MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                            (DataManager_o *)v246,
                                                                                            (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( MasterData_WarQuestSelectionMaster )
      {
        v248 = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  MasterData_WarQuestSelectionMaster,
                                  v245,
                                  (const MethodInfo_266F388 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
        }
        v249 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( v249 )
        {
          QuestInfo = QuestTree__GetQuestInfo(v249, v245, 0LL);
          if ( QuestInfo )
          {
            v252 = QuestInfo;
            if ( QuestInfo->fields.dispType != 1 )
            {
              QuestAfterAction_StateMain__ForceEndAnim(this, 1, v251);
              return;
            }
            if ( v248 )
            {
              if ( !QuestEntity__HasFlag(v248, 2LL, 0LL) )
                return;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              }
              if ( !byte_40F6048 )
              {
                sub_B16FFC(&TerminalPramsManager_TypeInfo, v253);
                byte_40F6048 = 1;
              }
              v254 = TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v254 = TerminalPramsManager_TypeInfo;
              }
              v254->static_fields->_QuestId_k__BackingField = v245;
              questPhase = v252->fields.questPhase;
              if ( !byte_40F6049 )
              {
                sub_B16FFC(&TerminalPramsManager_TypeInfo, v253);
                v254 = TerminalPramsManager_TypeInfo;
                byte_40F6049 = 1;
              }
              if ( (BYTE3(v254->vtable._0_Equals.methodPtr) & 4) != 0 && !v254->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v254);
                v254 = TerminalPramsManager_TypeInfo;
              }
              v254->static_fields->_PhaseCnt_k__BackingField = questPhase;
              if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
              }
              v260 = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
              v261 = QuestAfterAction_StateMain___c_TypeInfo;
              if ( (BYTE3(QuestAfterAction_StateMain___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
                v261 = QuestAfterAction_StateMain___c_TypeInfo;
              }
              v262 = v261->static_fields;
              _9__16_33 = v262->__9__16_33;
              if ( !_9__16_33 )
              {
                if ( (BYTE3(v261->vtable._0_Equals.methodPtr) & 4) != 0 && !v261->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v261);
                  v262 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
                }
                v264 = (Il2CppObject *)v262->__9;
                _9__16_33 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v256, v257, v258, v259);
                System_Action___ctor(_9__16_33, v264, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_33__, 0LL);
                v265 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
                v265->__9__16_33 = _9__16_33;
                sub_B16F98(
                  (BattleServantConfConponent_o *)&v265->__9__16_33,
                  (System_Int32_array **)_9__16_33,
                  v266,
                  v267,
                  v268,
                  v269,
                  v270,
                  v271);
              }
              if ( v260 )
              {
                clsQuestCheck__PlayQuestStartAction(v260, _9__16_33, 0LL);
                return;
              }
            }
          }
        }
      }
    }
    goto LABEL_1019;
  }
  if ( id <= 801 )
  {
    if ( id != 700 )
    {
      if ( id != 800 )
      {
        if ( id != 801 )
          return;
        v161 = v122->fields.param;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSe(v161, 0LL);
LABEL_945:
        ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
          this,
          this->klass->vtable._15_onEnd.methodPtr);
        goto LABEL_946;
      }
      v280 = *v110;
      if ( !*v110
        || (svtVoices = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)v280->fields.svtVoices) == 0LL )
      {
LABEL_1020:
        sub_B170D4();
      }
      if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
             svtVoices,
             v280->fields.commandIdx,
             &value,
             (const MethodInfo_2DEB0E0 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__) )
      {
        v282 = (AutomatedAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
        if ( !v282 )
          goto LABEL_1020;
        AutomatedAction__TerminateMissionAction(v282, 0LL);
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_40F6042 )
        {
          sub_B16FFC(&TerminalSceneComponent_TypeInfo, v283);
          byte_40F6042 = 1;
        }
        v284 = TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v284 = TerminalSceneComponent_TypeInfo;
        }
        v285 = v284->static_fields->mInstance;
        if ( !v285 )
          goto LABEL_1020;
        if ( !v285->fields._TransitionInfo_k__BackingField )
          goto LABEL_204;
        if ( (BYTE3(v284->vtable._0_Equals.methodPtr) & 4) != 0 && !v284->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v284);
        if ( !byte_40F6042 )
        {
          sub_B16FFC(&TerminalSceneComponent_TypeInfo, v283);
          byte_40F6042 = 1;
        }
        v286 = TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          v286 = TerminalSceneComponent_TypeInfo;
        }
        v287 = v286->static_fields->mInstance;
        if ( !v287 )
          goto LABEL_1020;
        TransitionInfo_k__BackingField = v287->fields._TransitionInfo_k__BackingField;
        if ( !TransitionInfo_k__BackingField )
          goto LABEL_1020;
        optionId = TransitionInfo_k__BackingField->fields.optionId;
        if ( !optionId )
        {
LABEL_204:
          if ( !value )
            goto LABEL_1020;
          optionId = value->fields.viewpoint;
        }
        if ( optionId < 1 )
        {
          if ( !value )
            goto LABEL_1020;
          v833 = *(System_String_o **)&value->fields.eval;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playVoice(v833, 0LL);
        }
        else
        {
          if ( (BYTE3(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantVoiceEntity_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantVoiceEntity_TypeInfo);
          }
          VoiceAssetName_30033140 = ServantVoiceEntity__getVoiceAssetName_30033140(optionId, 0LL);
          if ( !value )
            goto LABEL_1020;
          v291 = VoiceAssetName_30033140;
          v292 = *(System_String_o **)&value->fields.eval;
          v293 = SeManager_TypeInfo;
          if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SeManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
            v293 = SeManager_TypeInfo;
          }
          DEFAULT_VOLUME = v293->static_fields->DEFAULT_VOLUME;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playVoice_24824004(v291, v292, DEFAULT_VOLUME, 0LL, 0LL);
        }
      }
LABEL_443:
      ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
        this,
        this->klass->vtable._15_onEnd.methodPtr);
      return;
    }
    v323 = v122->fields.param;
    v181 = (System_String_array *)sub_B17014(char___TypeInfo, 1LL, v131);
    if ( !v181 )
      goto LABEL_1020;
    v183 = (System_Int32_array **)v181;
    if ( v181->max_length )
    {
      LOWORD(v181->m_Items[0]) = 44;
      if ( !v323 )
        goto LABEL_1020;
      v181 = System_String__Split(v323, (System_Char_array *)v181, 0LL);
      if ( !v181 )
        goto LABEL_1020;
      v324 = v181;
      if ( v181->max_length )
      {
        v329 = System_Int32__Parse(v181->m_Items[0], 0LL);
        if ( (int)v324->max_length >= 2 )
          v330 = System_Int32__Parse(v324->m_Items[1], 0LL) + 1;
        else
          v330 = 0;
        v434 = (SceneJumpInfo_o *)sub_B170CC(SceneJumpInfo_TypeInfo, v325, v326, v327, v328);
        SceneJumpInfo___ctor_29748100(v434, (System_String_o *)StringLiteral_1, v329, v330, 0LL);
        v435 = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !v435 )
          goto LABEL_1020;
        AvalonSceneManager__transitionScene(v435, 72, 1, (Il2CppObject *)v434, 0LL);
        goto LABEL_443;
      }
    }
LABEL_1022:
    sub_B17100(v181, v183, v182);
    sub_B170A0();
  }
  switch ( id )
  {
    case 850:
      if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__stopBgm(0LL);
      if ( *v110 )
      {
        (*v110)->fields.isRequestedStopBgm = 1;
        goto LABEL_945;
      }
      goto LABEL_1020;
    case 851:
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_40F6042 )
      {
        sub_B16FFC(&TerminalSceneComponent_TypeInfo, v130);
        byte_40F6042 = 1;
      }
      v272 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v272 = TerminalSceneComponent_TypeInfo;
      }
      v273 = v272->static_fields->mInstance;
      BgmName = QuestAfterAction_Command__GetBgmName(v122, v130);
      if ( v273 )
      {
        TerminalSceneComponent__playBgm(v273, BgmName, 0LL);
        if ( *v110 )
        {
          (*v110)->fields.isRequestedStopBgm = 0;
          goto LABEL_945;
        }
      }
      goto LABEL_1020;
    case 900:
      v135 = (float)System_Int32__Parse(v122->fields.param, 0LL) / 1000.0;
      if ( v135 > 0.0 )
      {
        this->fields.waitTime = v135;
        this->fields.waitStartTime = UnityEngine_Time__get_realtimeSinceStartup(0LL);
        return;
      }
      goto LABEL_945;
  }
}


void __fastcall QuestAfterAction_StateMain__Wait(QuestAfterAction_StateMain_o *this, const MethodInfo *method)
{
  QuestAfterAction_StateMain_c *klass; // x8

  if ( this->fields.waitTime > 0.0
    && (float)(UnityEngine_Time__get_realtimeSinceStartup(0LL) - this->fields.waitStartTime) >= this->fields.waitTime )
  {
    klass = this->klass;
    this->fields.waitTime = 0.0;
    ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))klass->vtable._14_EndAnim.method)(
      this,
      klass->vtable._15_onEnd.methodPtr);
  }
}


void __fastcall QuestAfterAction_StateMain__begin(
        QuestAfterAction_StateMain_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct QuestAfterAction_o *v10; // x8
  UnityEngine_Collider_o *screenCollider; // x0
  __int64 v12; // x1
  TerminalSceneComponent_c *v13; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  ScrTerminalMap_o *mTerminalMap; // x0

  if ( (byte_40FA2E5 & 1) == 0 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, that);
    byte_40FA2E5 = 1;
  }
  this->fields.that = that;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)that,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = this->fields.that;
  if ( !v10 )
    goto LABEL_16;
  screenCollider = (UnityEngine_Collider_o *)v10->fields.screenCollider;
  if ( !screenCollider )
    goto LABEL_16;
  UnityEngine_Collider__set_enabled(screenCollider, 1, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, v12);
    byte_40F6042 = 1;
  }
  v13 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v13 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v13->static_fields->mInstance;
  if ( !mInstance || (mTerminalMap = mInstance->fields.mTerminalMap) == 0LL )
LABEL_16:
    sub_B170D4();
  this->fields.IsMapModel = ScrTerminalMap__IsMapModel(mTerminalMap, 0LL);
}


void __fastcall QuestAfterAction_StateMain__end(
        QuestAfterAction_StateMain_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  ;
}


QuestAfterAction_Command_array *__fastcall QuestAfterAction_StateMain__get_CommandBuf(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_B170D4();
  return that->fields.commandBuf;
}


int32_t __fastcall QuestAfterAction_StateMain__get_CommandIndex(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_B170D4();
  return that->fields.commandIdx;
}


UnityEngine_GameObject_o *__fastcall QuestAfterAction_StateMain__get_SubGimmickRoot(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  if ( (byte_40FA2E4 & 1) == 0 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, method);
    byte_40FA2E4 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, method);
    byte_40F6042 = 1;
  }
  v2 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v2->static_fields->mInstance;
  if ( !mInstance || (mTerminalMap = mInstance->fields.mTerminalMap) == 0LL )
    sub_B170D4();
  return mTerminalMap->fields.rootEffectP;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestAfterAction_StateMain__onEnd(
        QuestAfterAction_StateMain_o *this,
        bool deleteKey,
        const MethodInfo *method)
{
  __int64 v5; // x1
  TerminalSceneComponent_c *v6; // x0
  TerminalSceneComponent_o *mInstance; // x0
  const MethodInfo *v8; // x1
  QuestAfterAction_o *that; // x0

  if ( (byte_40FA2E7 & 1) == 0 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, deleteKey);
    sub_B16FFC(&StringLiteral_16222, v5);
    byte_40FA2E7 = 1;
  }
  if ( deleteKey )
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16222, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_40F6042 )
  {
    sub_B16FFC(&TerminalSceneComponent_TypeInfo, deleteKey);
    byte_40F6042 = 1;
  }
  v6 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v6 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v6->static_fields->mInstance;
  if ( !mInstance
    || (TerminalSceneComponent__ClearTransitionInfo(mInstance, 0LL),
        QuestAfterAction_StateMain__StartMapGimmick(this, v8),
        (that = this->fields.that) == 0LL) )
  {
    sub_B170D4();
  }
  QuestAfterAction__OnEnd(that, 0LL);
}


void __fastcall QuestAfterAction_StateMain__set_CommandIndex(
        QuestAfterAction_StateMain_o *this,
        int32_t value,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_B170D4();
  that->fields.commandIdx = value;
}


void __fastcall QuestAfterAction_StateMain__update(
        QuestAfterAction_StateMain_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1

  ((void (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_o *, Il2CppMethodPointer))this->klass->vtable._13_UpdateAnim.method)(
    this,
    that,
    this->klass->vtable._14_EndAnim.methodPtr);
  QuestAfterAction_StateMain__Wait(this, v4);
}


void __fastcall QuestAfterAction_StateMain___c___cctor(const MethodInfo *method)
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

  if ( (byte_40F7900 & 1) == 0 )
  {
    sub_B16FFC(&QuestAfterAction_StateMain___c_TypeInfo, v1);
    byte_40F7900 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(QuestAfterAction_StateMain___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestAfterAction_StateMain___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall QuestAfterAction_StateMain___c___ctor(QuestAfterAction_StateMain___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c___UpdateAnim_b__16_31(
        QuestAfterAction_StateMain___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestAfterAction_StateMain___c___UpdateAnim_b__16_33(
        QuestAfterAction_StateMain___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  TerminalPramsManager_c *v9; // x0
  int32_t WarId_k__BackingField; // w19
  int32_t QuestId_k__BackingField; // w20
  QuestAfterAction_StateMain___c_c *v12; // x8
  int32_t PhaseCnt_k__BackingField; // w21
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x9
  int32_t v15; // w21
  ScriptManager_CallbackFunc_o *_9__16_34; // x22
  Il2CppObject *v17; // x23
  struct QuestAfterAction_StateMain___c_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_40F7901 & 1) == 0 )
  {
    sub_B16FFC(&ScriptManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&ScriptManager_TypeInfo, v5);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v6);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_34__, v7);
    sub_B16FFC(&QuestAfterAction_StateMain___c_TypeInfo, v8);
    byte_40F7901 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6044 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    byte_40F6044 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v9->static_fields->_WarId_k__BackingField;
  if ( !byte_40F6057 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
    byte_40F6057 = 1;
  }
  if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v9->static_fields->_QuestId_k__BackingField;
  if ( !byte_40F6058 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, method);
    v9 = TerminalPramsManager_TypeInfo;
    byte_40F6058 = 1;
  }
  if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  v12 = QuestAfterAction_StateMain___c_TypeInfo;
  PhaseCnt_k__BackingField = v9->static_fields->_PhaseCnt_k__BackingField;
  if ( (BYTE3(QuestAfterAction_StateMain___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
    v12 = QuestAfterAction_StateMain___c_TypeInfo;
  }
  static_fields = v12->static_fields;
  v15 = PhaseCnt_k__BackingField + 1;
  _9__16_34 = static_fields->__9__16_34;
  if ( !_9__16_34 )
  {
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    }
    v17 = (Il2CppObject *)static_fields->__9;
    _9__16_34 = (ScriptManager_CallbackFunc_o *)sub_B170CC(ScriptManager_CallbackFunc_TypeInfo, method, v2, v3, v4);
    ScriptManager_CallbackFunc___ctor(_9__16_34, v17, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_34__, 0LL);
    v18 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    v18->__9__16_34 = _9__16_34;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v18->__9__16_34,
      (System_Int32_array **)_9__16_34,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayBattleStart(
    WarId_k__BackingField,
    QuestId_k__BackingField,
    v15,
    _9__16_34,
    0,
    0LL,
    -1,
    0,
    0,
    0LL,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestAfterAction_StateMain___c___UpdateAnim_b__16_34(
        QuestAfterAction_StateMain___c_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  QuestAfterAction_StateMain___c_c *v11; // x0
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x8
  NetworkManager_ResultCallbackFunc_o *_9__16_35; // x19
  Il2CppObject *v14; // x20
  struct QuestAfterAction_StateMain___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  __int64 v22; // x1
  BattleScenarioRequest_o *Request_WarBoardWallAttackRequest; // x19
  TerminalPramsManager_c *v24; // x0
  int32_t QuestId_k__BackingField; // w21
  int32_t PhaseCnt_k__BackingField; // w20
  System_Int32_array *SelectRouteArray; // x0

  if ( (byte_40F7902 & 1) == 0 )
  {
    sub_B16FFC(&Method_NetworkManager_getRequest_BattleScenarioRequest___, isExit);
    sub_B16FFC(&NetworkManager_TypeInfo, v5);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v6);
    sub_B16FFC(&ScriptManager_TypeInfo, v7);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v8);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_35__, v9);
    sub_B16FFC(&QuestAfterAction_StateMain___c_TypeInfo, v10);
    byte_40F7902 = 1;
  }
  v11 = QuestAfterAction_StateMain___c_TypeInfo;
  if ( (BYTE3(QuestAfterAction_StateMain___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
    v11 = QuestAfterAction_StateMain___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__16_35 = static_fields->__9__16_35;
  if ( !_9__16_35 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__16_35 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                         NetworkManager_ResultCallbackFunc_TypeInfo,
                                                         isExit,
                                                         method,
                                                         v3,
                                                         v4);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__16_35,
      v14,
      Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_35__,
      0LL);
    v15 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    v15->__9__16_35 = _9__16_35;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v15->__9__16_35,
      (System_Int32_array **)_9__16_35,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (BattleScenarioRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   _9__16_35,
                                                                   (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_40F6057 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v22);
    byte_40F6057 = 1;
  }
  v24 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v24 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v24->static_fields->_QuestId_k__BackingField;
  if ( !byte_40F6058 )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v22);
    v24 = TerminalPramsManager_TypeInfo;
    byte_40F6058 = 1;
  }
  if ( (BYTE3(v24->vtable._0_Equals.methodPtr) & 4) != 0 && !v24->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v24);
    v24 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v24->static_fields->_PhaseCnt_k__BackingField;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  SelectRouteArray = ScriptManager__GetSelectRouteArray(0LL);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B170D4();
  BattleScenarioRequest__beginRequest(
    Request_WarBoardWallAttackRequest,
    QuestId_k__BackingField,
    PhaseCnt_k__BackingField + 1,
    SelectRouteArray,
    0LL);
}


void __fastcall QuestAfterAction_StateMain___c___UpdateAnim_b__16_35(
        QuestAfterAction_StateMain___c_o *this,
        System_String_o *jsonstr,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *v11; // x19
  BattleResultComponent_resultData_array *v12; // x19
  __int64 v13; // x1
  TerminalPramsManager_c *v14; // x0
  AvalonSceneManager_o *Instance; // x0

  if ( (byte_40F7903 & 1) == 0 )
  {
    sub_B16FFC(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___, jsonstr);
    sub_B16FFC(&JsonManager_TypeInfo, v4);
    sub_B16FFC(&ScriptManager_TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_16222, v8);
    sub_B16FFC(&StringLiteral_15571, v9);
    sub_B16FFC(&StringLiteral_15807, v10);
    byte_40F7903 = 1;
  }
  v11 = (Il2CppObject *)System_String__Concat_43746016(
                          (System_String_o *)StringLiteral_15571,
                          jsonstr,
                          (System_String_o *)StringLiteral_15807,
                          0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v12 = (BattleResultComponent_resultData_array *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                    v11,
                                                    (const MethodInfo_19D67B8 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16222, 0LL);
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__ClearSelectRouteArray(0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalPramsManager__ReceiveQuestEndResultInfo(v12, 1, 0LL);
  if ( !byte_40F604D )
  {
    sub_B16FFC(&TerminalPramsManager_TypeInfo, v13);
    byte_40F604D = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v14->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, 0LL, 0, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__10(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__11(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__12(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__13(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__14(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__15(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__16(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__17(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__18(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__19(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__20(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__25(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__32(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0
  struct QuestAfterAction_StateMain_o *v4; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
          _4__this,
          _4__this->klass->vtable._15_onEnd.methodPtr),
        (v4 = this->fields.__4__this) == 0LL) )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, struct QuestAfterAction_o *, Il2CppMethodPointer))v4->klass->vtable._13_UpdateAnim.method)(
    v4,
    this->fields.that,
    v4->klass->vtable._14_EndAnim.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__36(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__37(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__38(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__39(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__40(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__9(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_1___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_1___UpdateAnim_b__0(
        QuestAfterAction_StateMain___c__DisplayClass16_1_o *this,
        const MethodInfo *method)
{
  struct SrcSpotBasePrefab_o *spot; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  SrcSpotBasePrefab_o *v5; // x0
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals1; // x8
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  spot = this->fields.spot;
  if ( !spot
    || (mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo) == 0LL
    || (mMapCtrl_SpotInfo->fields.dispType = 0, (v5 = this->fields.spot) == 0LL)
    || (SrcSpotBasePrefab__SetTouchType(v5, 0, 0LL), (CS___8__locals1 = this->fields.CS___8__locals1) == 0LL)
    || (_4__this = CS___8__locals1->fields.__4__this) == 0LL )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_10___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_10_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_10___UpdateAnim_b__21(
        QuestAfterAction_StateMain___c__DisplayClass16_10_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0LL )
    sub_B170D4();
  mMapCtrl_MapGimmickInfo->fields.dispType = 0;
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_10___UpdateAnim_b__22(
        QuestAfterAction_StateMain___c__DisplayClass16_10_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals10; // x8
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick
    || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0LL
    || (mMapCtrl_MapGimmickInfo->fields.dispType = 0, (CS___8__locals10 = this->fields.CS___8__locals10) == 0LL)
    || (_4__this = CS___8__locals10->fields.__4__this) == 0LL )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_11___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_11_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_11___UpdateAnim_b__23(
        QuestAfterAction_StateMain___c__DisplayClass16_11_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0LL )
    sub_B170D4();
  mMapCtrl_MapGimmickInfo->fields.dispType = 1;
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_11___UpdateAnim_b__24(
        QuestAfterAction_StateMain___c__DisplayClass16_11_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals11; // x8
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick
    || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0LL
    || (mMapCtrl_MapGimmickInfo->fields.dispType = 1, (CS___8__locals11 = this->fields.CS___8__locals11) == 0LL)
    || (_4__this = CS___8__locals11->fields.__4__this) == 0LL )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_12___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_12_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_12___UpdateAnim_b__26(
        QuestAfterAction_StateMain___c__DisplayClass16_12_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals12; // x8
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick
    || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0LL
    || (mMapCtrl_MapGimmickInfo->fields.dispType = 1, (CS___8__locals12 = this->fields.CS___8__locals12) == 0LL)
    || (_4__this = CS___8__locals12->fields.__4__this) == 0LL )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_13___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_13_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_13___UpdateAnim_b__27(
        QuestAfterAction_StateMain___c__DisplayClass16_13_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x19
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_Component_o *mapGimmick; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Component_o *ComponentInChildren_Dropdown_DropdownItem; // x0
  UnityEngine_Component_o *v20; // x22
  UnityEngine_GameObject_o *v21; // x0
  System_Int32_array **v22; // x0
  UITweener_o **v23; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  _BOOL8 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  struct System_String_array *paramsStr; // x8
  struct System_String_array *v34; // x8
  UITweener_o *v35; // x20
  float v36; // s0
  UITweener_o *v37; // x20
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  EventDelegate_Callback_o *v42; // x21
  unsigned __int128 v43; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_40F7904 & 1) == 0 )
  {
    sub_B16FFC(&EventDelegate_Callback_TypeInfo, method);
    sub_B16FFC(&Method_UnityEngine_GameObject_AddComponent_TweenColor___, v6);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v7);
    sub_B16FFC(&Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__28__, v8);
    sub_B16FFC(&QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo, v9);
    byte_40F7904 = 1;
  }
  v43 = 0uLL;
  v10 = sub_B170CC(QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo, method, v2, v3, v4);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_18;
  *(_QWORD *)(v10 + 24) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 24), (System_Int32_array **)this, v11, v12, v13, v14, v15, v16);
  mapGimmick = (UnityEngine_Component_o *)this->fields.mapGimmick;
  if ( !mapGimmick )
    goto LABEL_18;
  gameObject = UnityEngine_Component__get_gameObject(mapGimmick, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  ComponentInChildren_Dropdown_DropdownItem = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                                                           gameObject,
                                                                           (const MethodInfo_19D158C *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !ComponentInChildren_Dropdown_DropdownItem )
    goto LABEL_18;
  v20 = ComponentInChildren_Dropdown_DropdownItem;
  v21 = UnityEngine_Component__get_gameObject(ComponentInChildren_Dropdown_DropdownItem, 0LL);
  if ( !v21 )
    goto LABEL_18;
  v22 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                 v21,
                                 (const MethodInfo_19D13E4 *)Method_UnityEngine_GameObject_AddComponent_TweenColor___);
  *(_QWORD *)(v10 + 16) = v22;
  v23 = (UITweener_o **)(v10 + 16);
  sub_B16F98((BattleServantConfConponent_o *)(v10 + 16), v22, v24, v25, v26, v27, v28, v29);
  paramsStr = this->fields.paramsStr;
  if ( !paramsStr )
    goto LABEL_18;
  if ( paramsStr->max_length <= 1 )
    goto LABEL_19;
  v30 = UnityEngine_ColorUtility__TryParseHtmlString(paramsStr->m_Items[1], (UnityEngine_Color_o *)&v43, 0LL);
  if ( !*v23
    || (*(_OWORD *)&(*v23)[1].klass = *(_OWORD *)(&v20[5].fields + 1), !*v23)
    || (*(_OWORD *)&(*v23)[1].fields.m_CachedPtr = v43, (v34 = this->fields.paramsStr) == 0LL) )
  {
LABEL_18:
    sub_B170D4();
  }
  if ( v34->max_length <= 2 )
  {
LABEL_19:
    sub_B17100(v30, v31, v32);
    sub_B170A0();
  }
  v35 = *v23;
  v36 = System_Single__Parse(v34->m_Items[2], 0LL);
  if ( !v35 )
    goto LABEL_18;
  v35->fields.duration = v36;
  if ( !*v23 )
    goto LABEL_18;
  UITweener__PlayForward(*v23, 0LL);
  v37 = *(UITweener_o **)(v10 + 16);
  v42 = (EventDelegate_Callback_o *)sub_B170CC(EventDelegate_Callback_TypeInfo, v38, v39, v40, v41);
  EventDelegate_Callback___ctor(
    v42,
    (Il2CppObject *)v10,
    Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__28__,
    0LL);
  if ( !v37 )
    goto LABEL_18;
  UITweener__SetOnFinished(v37, v42, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_14___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_14_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_14___UpdateAnim_b__28(
        QuestAfterAction_StateMain___c__DisplayClass16_14_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *tween; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_13_o *CS___8__locals14; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals13; // x8
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  if ( (byte_40F7905 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F7905 = 1;
  }
  tween = (UnityEngine_Object_o *)this->fields.tween;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464(tween, 0LL);
  CS___8__locals14 = this->fields.CS___8__locals14;
  if ( !CS___8__locals14
    || (CS___8__locals13 = CS___8__locals14->fields.CS___8__locals13) == 0LL
    || (_4__this = CS___8__locals13->fields.__4__this) == 0LL )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_15___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_15_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_15___UpdateAnim_b__29(
        QuestAfterAction_StateMain___c__DisplayClass16_15_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals15; // x8
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick
    || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0LL
    || (mMapCtrl_MapGimmickInfo->fields.dispType = 1, (CS___8__locals15 = this->fields.CS___8__locals15) == 0LL)
    || (_4__this = CS___8__locals15->fields.__4__this) == 0LL )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_15___UpdateAnim_b__30(
        QuestAfterAction_StateMain___c__DisplayClass16_15_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals15; // x8
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick
    || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0LL
    || (mMapCtrl_MapGimmickInfo->fields.dispType = 0, (CS___8__locals15 = this->fields.CS___8__locals15) == 0LL)
    || (_4__this = CS___8__locals15->fields.__4__this) == 0LL )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_2___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_2___UpdateAnim_b__1(
        QuestAfterAction_StateMain___c__DisplayClass16_2_o *this,
        const MethodInfo *method)
{
  struct SrcSpotBasePrefab_o *spot; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  SrcSpotBasePrefab_o *v5; // x0
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals2; // x8
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  spot = this->fields.spot;
  if ( !spot
    || (mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo) == 0LL
    || (mMapCtrl_SpotInfo->fields.dispType = 2, (v5 = this->fields.spot) == 0LL)
    || (SrcSpotBasePrefab__SetTouchType(v5, 1, 0LL), (CS___8__locals2 = this->fields.CS___8__locals2) == 0LL)
    || (_4__this = CS___8__locals2->fields.__4__this) == 0LL )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_3___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_3___UpdateAnim_b__2(
        QuestAfterAction_StateMain___c__DisplayClass16_3_o *this,
        const MethodInfo *method)
{
  struct SrcSpotBasePrefab_o *spot; // x8
  struct MapControl_SpotInfo_o *mMapCtrl_SpotInfo; // x8
  SrcSpotBasePrefab_o *v5; // x0
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals3; // x8
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  spot = this->fields.spot;
  if ( !spot
    || (mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo) == 0LL
    || (mMapCtrl_SpotInfo->fields.dispType = 1, (v5 = this->fields.spot) == 0LL)
    || (SrcSpotBasePrefab__SetTouchType(v5, 1, 0LL), (CS___8__locals3 = this->fields.CS___8__locals3) == 0LL)
    || (_4__this = CS___8__locals3->fields.__4__this) == 0LL )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_4___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_4_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_4___UpdateAnim_b__3(
        QuestAfterAction_StateMain___c__DisplayClass16_4_o *this,
        const MethodInfo *method)
{
  struct ModelLineComponent_o *roadModel; // x8
  struct MapControl_SpotRoadInfo_o *SpotRoadInfo_k__BackingField; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals4; // x8
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  roadModel = this->fields.roadModel;
  if ( !roadModel
    || (SpotRoadInfo_k__BackingField = roadModel->fields._SpotRoadInfo_k__BackingField) == 0LL
    || (SpotRoadInfo_k__BackingField->fields.dispType = 0, (CS___8__locals4 = this->fields.CS___8__locals4) == 0LL)
    || (_4__this = CS___8__locals4->fields.__4__this) == 0LL )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_5___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_5_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_5___UpdateAnim_b__4(
        QuestAfterAction_StateMain___c__DisplayClass16_5_o *this,
        const MethodInfo *method)
{
  struct srcLineSprite_o *roadSprite; // x8
  struct MapControl_SpotRoadInfo_o *mMapCtrl_SpotRoadInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals5; // x8
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  roadSprite = this->fields.roadSprite;
  if ( !roadSprite
    || (mMapCtrl_SpotRoadInfo = roadSprite->fields.mMapCtrl_SpotRoadInfo) == 0LL
    || (mMapCtrl_SpotRoadInfo->fields.dispType = 0, (CS___8__locals5 = this->fields.CS___8__locals5) == 0LL)
    || (_4__this = CS___8__locals5->fields.__4__this) == 0LL )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_6___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_6_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_6___UpdateAnim_b__5(
        QuestAfterAction_StateMain___c__DisplayClass16_6_o *this,
        const MethodInfo *method)
{
  struct ModelLineComponent_o *roadModel; // x8
  struct MapControl_SpotRoadInfo_o *SpotRoadInfo_k__BackingField; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals6; // x8
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  roadModel = this->fields.roadModel;
  if ( !roadModel
    || (SpotRoadInfo_k__BackingField = roadModel->fields._SpotRoadInfo_k__BackingField) == 0LL
    || (SpotRoadInfo_k__BackingField->fields.dispType = 2, (CS___8__locals6 = this->fields.CS___8__locals6) == 0LL)
    || (_4__this = CS___8__locals6->fields.__4__this) == 0LL )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_7___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_7_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_7___UpdateAnim_b__6(
        QuestAfterAction_StateMain___c__DisplayClass16_7_o *this,
        const MethodInfo *method)
{
  struct srcLineSprite_o *roadSprite; // x8
  struct MapControl_SpotRoadInfo_o *mMapCtrl_SpotRoadInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals7; // x8
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  roadSprite = this->fields.roadSprite;
  if ( !roadSprite
    || (mMapCtrl_SpotRoadInfo = roadSprite->fields.mMapCtrl_SpotRoadInfo) == 0LL
    || (mMapCtrl_SpotRoadInfo->fields.dispType = 2, (CS___8__locals7 = this->fields.CS___8__locals7) == 0LL)
    || (_4__this = CS___8__locals7->fields.__4__this) == 0LL )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_8___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_8_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_8___UpdateAnim_b__7(
        QuestAfterAction_StateMain___c__DisplayClass16_8_o *this,
        const MethodInfo *method)
{
  struct ModelLineComponent_o *roadModel; // x8
  struct MapControl_SpotRoadInfo_o *SpotRoadInfo_k__BackingField; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals8; // x8
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  roadModel = this->fields.roadModel;
  if ( !roadModel
    || (SpotRoadInfo_k__BackingField = roadModel->fields._SpotRoadInfo_k__BackingField) == 0LL
    || (SpotRoadInfo_k__BackingField->fields.dispType = 1, (CS___8__locals8 = this->fields.CS___8__locals8) == 0LL)
    || (_4__this = CS___8__locals8->fields.__4__this) == 0LL )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_9___ctor(
        QuestAfterAction_StateMain___c__DisplayClass16_9_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_9___UpdateAnim_b__8(
        QuestAfterAction_StateMain___c__DisplayClass16_9_o *this,
        const MethodInfo *method)
{
  struct srcLineSprite_o *roadSprite; // x8
  struct MapControl_SpotRoadInfo_o *mMapCtrl_SpotRoadInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals9; // x8
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  roadSprite = this->fields.roadSprite;
  if ( !roadSprite
    || (mMapCtrl_SpotRoadInfo = roadSprite->fields.mMapCtrl_SpotRoadInfo) == 0LL
    || (mMapCtrl_SpotRoadInfo->fields.dispType = 1, (CS___8__locals9 = this->fields.CS___8__locals9) == 0LL)
    || (_4__this = CS___8__locals9->fields.__4__this) == 0LL )
  {
    sub_B170D4();
  }
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateNone___ctor(QuestAfterAction_StateNone_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_StateNone__begin(
        QuestAfterAction_StateNone_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestAfterAction_StateNone__end(
        QuestAfterAction_StateNone_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestAfterAction_StateNone__update(
        QuestAfterAction_StateNone_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestAfterAction_TitleInfoControlCallback___ctor(
        QuestAfterAction_TitleInfoControlCallback_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction_TitleInfoControlCallback__End(
        QuestAfterAction_TitleInfoControlCallback_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *end; // x0
  BattleServantConfConponent_o *p_end; // x19

  p_end = (BattleServantConfConponent_o *)&this->fields.end;
  end = this->fields.end;
  if ( end )
    System_Action__Invoke(end, 0LL);
  p_end->klass = 0LL;
  sub_B16F98(p_end, 0LL, v2, v3, v4, v5, v6, v7);
}


bool __fastcall QuestAfterAction_TitleInfoControlCallback__HasStartCallback(
        QuestAfterAction_TitleInfoControlCallback_o *this,
        const MethodInfo *method)
{
  return this->fields.start != 0LL;
}


void __fastcall QuestAfterAction_TitleInfoControlCallback__SetStartCallback(
        QuestAfterAction_TitleInfoControlCallback_o *this,
        System_Action_o *startCallback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.start = startCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)startCallback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall QuestAfterAction_TitleInfoControlCallback__Start(
        QuestAfterAction_TitleInfoControlCallback_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *end; // x0
  struct System_Action_o **p_end; // x20
  const MethodInfo *v12; // x1
  System_Action_o *start; // x0

  p_end = &this->fields.end;
  end = this->fields.end;
  if ( end )
    System_Action__Invoke(end, 0LL);
  this->fields.end = endCallback;
  sub_B16F98(
    (BattleServantConfConponent_o *)p_end,
    (System_Int32_array **)endCallback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  start = this->fields.start;
  if ( start )
    System_Action__Invoke(start, 0LL);
  else
    QuestAfterAction_TitleInfoControlCallback__End(this, v12);
}


void __fastcall QuestAfterAction_VoiceInfo___ctor(
        QuestAfterAction_VoiceInfo_o *this,
        int32_t sId,
        System_String_o *vName,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *v6; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  v6 = (BattleServantConfConponent_o *)this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields._closeBtnObject = (struct UnityEngine_GameObject_o *)vName;
  v6 = (BattleServantConfConponent_o *)((char *)v6 + 24);
  *(_DWORD *)&v6[-1].fields.isOpenAfter = sId;
  sub_B16F98(v6, (System_Int32_array **)vName, v7, v8, v9, v10, v11, v12);
}


void __fastcall QuestAfterAction__WaitWhileMainStateFinished_d__73___ctor(
        QuestAfterAction__WaitWhileMainStateFinished_d__73_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall QuestAfterAction__WaitWhileMainStateFinished_d__73__MoveNext(
        QuestAfterAction__WaitWhileMainStateFinished_d__73_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct QuestAfterAction_o *_4__this; // x8
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( this->fields.__1__state < 2u )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_B170D4();
    if ( _4__this->fields.isKeepingMainStateButFinished )
    {
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    ActionExtensions__Call(this->fields.action, 0LL);
  }
  return 0;
}


Il2CppObject *__fastcall QuestAfterAction__WaitWhileMainStateFinished_d__73__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestAfterAction__WaitWhileMainStateFinished_d__73_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestAfterAction__WaitWhileMainStateFinished_d__73__System_Collections_IEnumerator_Reset(
        QuestAfterAction__WaitWhileMainStateFinished_d__73_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0
  __int64 v8; // x1

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo, method);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_QuestAfterAction__WaitWhileMainStateFinished_d__73_System_Collections_IEnumerator_Reset__, v8);
  sub_B170A0();
}


Il2CppObject *__fastcall QuestAfterAction__WaitWhileMainStateFinished_d__73__System_Collections_IEnumerator_get_Current(
        QuestAfterAction__WaitWhileMainStateFinished_d__73_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall QuestAfterAction__WaitWhileMainStateFinished_d__73__System_IDisposable_Dispose(
        QuestAfterAction__WaitWhileMainStateFinished_d__73_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestAfterAction___c__DisplayClass64_0___ctor(
        QuestAfterAction___c__DisplayClass64_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass64_0___LoadVoice_b__0(
        QuestAfterAction___c__DisplayClass64_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_XWeaponTrail_Element__o *svtVInfos; // x0
  QuestAfterAction_o *_4__this; // x0

  if ( (byte_40FA2DD & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__, method);
    byte_40FA2DD = 1;
  }
  svtVInfos = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.svtVInfos;
  if ( !svtVInfos
    || (System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          svtVInfos,
          0,
          (const MethodInfo_2F279C8 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_B170D4();
  }
  QuestAfterAction__LoadVoice_25288944(_4__this, this->fields.svtVInfos, this->fields.endAct, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass68_0___ctor(
        QuestAfterAction___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass68_0___Play_b__0(
        QuestAfterAction___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  MissionNotifyManager_o *v4; // x0

  if ( (byte_40FA2DE & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v3);
    byte_40FA2DE = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v4 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v4 )
    sub_B170D4();
  MissionNotifyManager__EndPause(v4, 0LL);
  ActionExtensions__Call(this->fields.endAct, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass69_0___ctor(
        QuestAfterAction___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass69_0___PlaySpecifiedAction_b__0(
        QuestAfterAction___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  struct QuestAfterAction_o *_4__this; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct QuestAfterAction_o *v17; // x0
  MissionNotifyManager_o *v18; // x0
  QuestAfterAction_o *v19; // x0

  if ( (byte_40FA2DF & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B16FFC(&SingletonTemplate_MissionNotifyManager__TypeInfo, v9);
    byte_40FA2DF = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  _4__this->fields.endAct = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&_4__this->fields.endAct, 0LL, v2, v3, v4, v5, v6, v7);
  v17 = this->fields.__4__this;
  if ( !v17 )
    goto LABEL_11;
  v17->fields.temporaryCommandBuf = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&v17->fields.temporaryCommandBuf, 0LL, v11, v12, v13, v14, v15, v16);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v18 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v18 || (MissionNotifyManager__EndPause(v18, 0LL), (v19 = this->fields.__4__this) == 0LL) )
LABEL_11:
    sub_B170D4();
  QuestAfterAction__SetState(v19, 0, 0LL);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass69_0___PlaySpecifiedAction_b__1(
        QuestAfterAction___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  QuestAfterAction_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  QuestAfterAction__SetState(_4__this, 2, 0LL);
}