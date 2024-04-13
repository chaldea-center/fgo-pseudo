void __fastcall QuestAfterAction___ctor(QuestAfterAction_o *this, const MethodInfo *method)
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
  QuestAfterAction_TitleInfoControlCallback_o *v23; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  BlankEarthQuestAfterAction_o *v30; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v37; // x20
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v44; // x20
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7

  if ( (byte_42E8897 & 1) == 0 )
  {
    sub_B5D5C4(&BlankEarthQuestAfterAction_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__,
      v5,
      v6,
      v7);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo, v11, v12, v13);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_QuestAfterAction___ctor__, v17, v18, v19);
    sub_B5D5C4(&QuestAfterAction_TitleInfoControlCallback_TypeInfo, v20, v21, v22);
    byte_42E8897 = 1;
  }
  v23 = (QuestAfterAction_TitleInfoControlCallback_o *)sub_B5D694(QuestAfterAction_TitleInfoControlCallback_TypeInfo);
  QuestAfterAction_TitleInfoControlCallback___ctor(v23, 0LL);
  this->fields._TitleInfoCtrlCallback_k__BackingField = v23;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._TitleInfoCtrlCallback_k__BackingField,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (BlankEarthQuestAfterAction_o *)sub_B5D694(BlankEarthQuestAfterAction_TypeInfo);
  BlankEarthQuestAfterAction___ctor(v30, 0LL);
  this->fields._BlankEarthQuestAfterAction_k__BackingField = v30;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields._BlankEarthQuestAfterAction_k__BackingField,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B5D694(System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v37,
    (const MethodInfo_2F48DA8 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
  this->fields.commandTypeIds = (struct System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *)v37;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.commandTypeIds,
    (System_Int32_array **)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  v44 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B5D694(System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v44,
    (const MethodInfo_2F31510 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
  this->fields.svtVoices = (struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v44;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.svtVoices,
    (System_Int32_array **)v44,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  this->fields.MapMoveBeforeFocusSpotId = -1;
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A301CC *)Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
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
  sub_B5D560(p_endAct, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(endAct, 0LL);
}


QuestAfterAction_Command_array *__fastcall QuestAfterAction__ConvertValsToCommand(
        QuestAfterAction_o *this,
        System_String_array *actionVals,
        const MethodInfo *method)
{
  return QuestAfterAction__GenerateCommandBuf(actionVals, (const MethodInfo *)actionVals);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestAfterAction__CreateCommandBuf(
        QuestAfterAction_o *this,
        bool isBeforeAction,
        const MethodInfo *method)
{
  __int64 v3; // x3
  QuestAfterAction_o *v5; // x19
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
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  int v87; // w1
  int v88; // w2
  __int64 v89; // x3
  const MethodInfo *v90; // x1
  const MethodInfo *v91; // x2
  __int64 v92; // x3
  TerminalPramsManager_c *v93; // x0
  int32_t QuestId_k__BackingField; // w21
  System_String_array *v95; // x27
  __int64 v96; // x1
  int v97; // w2
  __int64 v98; // x3
  WebViewManager_o *Instance; // x20
  __int64 Master_WarQuestSelectionMaster; // x0
  __int64 v101; // x8
  __int64 v102; // x8
  __int64 v103; // x8
  int32_t v104; // w23
  __int64 v105; // x8
  __int64 v106; // x8
  int32_t v107; // w24
  __int64 v108; // x8
  __int64 v109; // x8
  int32_t v110; // w23
  __int64 v111; // x8
  __int64 v112; // x8
  int v113; // w2
  __int64 v114; // x3
  int32_t v115; // w22
  TerminalPramsManager_c *v116; // x0
  TerminalSceneComponent_c *v117; // x0
  TerminalPramsManager_c *v118; // x0
  System_String_o *String_35648228; // x22
  __int64 v120; // x22
  int v121; // w1
  int v122; // w2
  __int64 v123; // x3
  int32_t v124; // w23
  int v125; // w1
  int v126; // w2
  __int64 v127; // x3
  int32_t v128; // w23
  System_String_o *v129; // x23
  int v130; // w1
  int v131; // w2
  __int64 v132; // x3
  bool v133; // w23
  bool v134; // w22
  int v135; // w2
  __int64 v136; // x3
  WarMaster_o *MasterData_WarQuestSelectionMaster; // x22
  WarEntity_o *QuestId; // x0
  WarEntity_o *v139; // x22
  TerminalPramsManager_c *v140; // x0
  int32_t id; // w23
  bool v142; // w22
  TerminalPramsManager_c *v143; // x0
  TerminalPramsManager_c *v144; // x0
  int v145; // w2
  __int64 v146; // x3
  QuestPhaseDetailAddMaster_o *v147; // x22
  int32_t v148; // w23
  int v149; // w2
  __int64 v150; // x3
  QuestPhaseDetailMaster_o *v151; // x22
  int32_t v152; // w23
  TerminalPramsManager_c *v153; // x0
  int v154; // w2
  __int64 v155; // x3
  int32_t v156; // w21
  WarEntity_o *v157; // x0
  int v158; // w2
  __int64 v159; // x3
  QuestBehaviorMaster_o *v160; // x21
  int32_t v161; // w23
  bool IsOpenQuestBehaviorCond; // w0
  __int64 v163; // x8
  System_Int32_array **v164; // x0
  unsigned int **p_commandBuf; // x21
  System_String_array **v166; // x2
  System_String_array **v167; // x3
  System_Boolean_array **v168; // x4
  System_Int32_array **v169; // x5
  System_Int32_array *v170; // x6
  System_Int32_array *v171; // x7
  int v172; // w2
  __int64 v173; // x3
  int *commandBuf; // x8
  unsigned __int64 v175; // x23
  il2cpp_array_size_t v176; // w22
  __int64 v177; // x24
  System_String_array **v178; // x2
  System_String_array **v179; // x3
  System_Boolean_array **v180; // x4
  System_Int32_array **v181; // x5
  System_Int32_array *v182; // x6
  System_Int32_array *v183; // x7
  __int64 v184; // x8
  System_Int32_array **v185; // x1
  System_String_o **v186; // x20
  const MethodInfo *v187; // x2
  int v188; // w8
  System_String_o *v189; // x26
  int v190; // w8
  unsigned int **v191; // x25
  QuestAfterAction_o *v192; // x21
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *svtVoices; // x26
  System_String_o *v194; // x28
  System_String_array *v195; // x19
  QuestAfterAction_VoiceInfo_o *v196; // x27
  int v197; // w8
  unsigned int v198; // w8
  System_String_o *Item; // x26
  const MethodInfo *v200; // x1
  QuestAfterAction_o *v201; // x0
  const MethodInfo *v202; // x2
  __int64 v203; // x8
  __int64 v204; // x25
  unsigned __int64 v205; // x20
  unsigned int *v206; // x20
  System_String_array **v207; // x2
  System_String_array **v208; // x3
  System_Boolean_array **v209; // x4
  System_Int32_array **v210; // x5
  System_Int32_array *v211; // x6
  System_Int32_array *v212; // x7
  unsigned int *v213; // x0
  TerminalPramsManager_c *v214; // x0
  int v215; // w2
  __int64 v216; // x3
  QuestMaster_o *v217; // x19
  TerminalPramsManager_c *v218; // x0
  BalanceConfig_c *v219; // x8
  int32_t WarId_k__BackingField; // w19
  int32_t v221; // w19
  TerminalPramsManager_c *v222; // x0
  TerminalPramsManager_c *v223; // x0
  TerminalPramsManager_c *v224; // x0
  BalanceConfig_c *v225; // x8
  int32_t v226; // w20
  TerminalPramsManager_c *v227; // x0
  TerminalPramsManager_c *v228; // x0
  TerminalPramsManager_c *v229; // x0
  __int64 v230; // x0
  __int64 v231; // x0
  int32_t sId; // [xsp+8h] [xbp-68h]
  int32_t svtId; // [xsp+Ch] [xbp-64h] BYREF
  WarEntity_o *v234; // [xsp+10h] [xbp-60h] BYREF
  QuestEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  v5 = this;
  if ( (byte_42E887D & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, isBeforeAction, (_DWORD)method, v3);
    sub_B5D5C4(&bool_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&char___TypeInfo, v9, v10, v11);
    sub_B5D5C4(&QuestAfterAction_Command___TypeInfo, v12, v13, v14);
    sub_B5D5C4(&QuestAfterAction_Command_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, v21, v22, v23);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v24, v25, v26);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v27, v28, v29);
    sub_B5D5C4(&Method_DataManager_GetMasterData_WarMaster___, v30, v31, v32);
    sub_B5D5C4(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v33, v34, v35);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestBehaviorMaster___, v36, v37, v38);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestMaster___, v39, v40, v41);
    sub_B5D5C4(&Method_DataManager_GetMaster_ShopMaster___, v42, v43, v44);
    sub_B5D5C4(&Method_DataManager_GetMaster_WarMaster___, v45, v46, v47);
    sub_B5D5C4(&DataManager_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v51, v52, v53);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v54, v55, v56);
    sub_B5D5C4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v57, v58, v59);
    sub_B5D5C4(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v60, v61, v62);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__, v63, v64, v65);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__,
      v66,
      v67,
      v68);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____, v69, v70, v71);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v72, v73, v74);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v75, v76, v77);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v78, v79, v80);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v81, v82, v83);
    sub_B5D5C4(&QuestAfterAction_VoiceInfo_TypeInfo, v84, v85, v86);
    this = (QuestAfterAction_o *)sub_B5D5C4(&StringLiteral_16485/*"afterActionBk"*/, v87, v88, v89);
    byte_42E887D = 1;
  }
  v234 = 0LL;
  entity = 0LL;
  svtId = 0;
  *(_QWORD *)&v5->fields.ActionMapTargetType = -1LL;
  *(_WORD *)&v5->fields.isLoadedVoice = 0;
  if ( isBeforeAction )
  {
    if ( System_Linq_Enumerable__Any_KeyValuePair_int__QuestAfterAction_VoiceInfo__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v5->fields.svtVoices,
           (const MethodInfo_1C981A4 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____) )
    {
      QuestAfterAction__releaseVoice(v5, v90);
    }
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B33 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)v90, (_DWORD)v91, v92);
      byte_42E4B33 = 1;
    }
    v93 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v93 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v93->static_fields->_QuestId_k__BackingField;
    if ( !byte_42E4B34 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)v90, (_DWORD)v91, v92);
      v93 = TerminalPramsManager_TypeInfo;
      byte_42E4B34 = 1;
    }
    if ( (BYTE3(v93->vtable._0_Equals.methodPtr) & 4) != 0 && !v93->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v93);
      v93 = TerminalPramsManager_TypeInfo;
    }
    v95 = QuestAfterAction__GetBeforeAction(
            QuestId_k__BackingField,
            v93->static_fields->_PhaseCnt_k__BackingField + 1,
            v91);
    goto LABEL_261;
  }
  QuestAfterAction__LoadTerminalTransitionInfo(this, (const MethodInfo *)isBeforeAction);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v96, v97, v98);
    byte_42E4B1E = 1;
  }
  Master_WarQuestSelectionMaster = (__int64)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)TerminalSceneComponent_TypeInfo;
  }
  v101 = **(_QWORD **)(Master_WarQuestSelectionMaster + 184);
  if ( !v101 )
    goto LABEL_338;
  if ( *(_QWORD *)(v101 + 448) )
  {
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
    }
    if ( !byte_42E4B1E )
    {
      sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v96, v97, v98);
      byte_42E4B1E = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalSceneComponent_TypeInfo;
    }
    v102 = **(_QWORD **)(Master_WarQuestSelectionMaster + 184);
    if ( !v102 )
      goto LABEL_338;
    v103 = *(_QWORD *)(v102 + 448);
    if ( !v103 )
      goto LABEL_338;
    v104 = *(_DWORD *)(v103 + 20);
    if ( !byte_42E4B1E )
    {
      sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v96, v97, v98);
      Master_WarQuestSelectionMaster = (__int64)TerminalSceneComponent_TypeInfo;
      byte_42E4B1E = 1;
    }
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      Master_WarQuestSelectionMaster = (__int64)TerminalSceneComponent_TypeInfo;
    }
    v105 = **(_QWORD **)(Master_WarQuestSelectionMaster + 184);
    if ( !v105 )
      goto LABEL_338;
    v106 = *(_QWORD *)(v105 + 448);
    if ( !v106 )
      goto LABEL_338;
    v107 = *(_DWORD *)(v106 + 16);
    if ( v107 < 1 )
    {
      if ( v104 < 1 )
        goto LABEL_96;
      if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
        && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
      {
        j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      }
      if ( !byte_42E4B1E )
      {
        sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v96, v97, v98);
        byte_42E4B1E = 1;
      }
      Master_WarQuestSelectionMaster = (__int64)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Master_WarQuestSelectionMaster = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v111 = **(_QWORD **)(Master_WarQuestSelectionMaster + 184);
      if ( !v111 )
        goto LABEL_338;
      v112 = *(_QWORD *)(v111 + 448);
      if ( !v112 )
        goto LABEL_338;
      v95 = *(System_String_array **)(v112 + 32);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_338;
      Master_WarQuestSelectionMaster = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                  v104,
                                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_338;
      v110 = *(_DWORD *)(Master_WarQuestSelectionMaster + 24);
      Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_WarMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_338;
    }
    else
    {
      if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
        && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
      {
        j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      }
      if ( !byte_42E4B1E )
      {
        sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v96, v97, v98);
        byte_42E4B1E = 1;
      }
      Master_WarQuestSelectionMaster = (__int64)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Master_WarQuestSelectionMaster = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v108 = **(_QWORD **)(Master_WarQuestSelectionMaster + 184);
      if ( !v108 )
        goto LABEL_338;
      v109 = *(_QWORD *)(v108 + 448);
      if ( !v109 )
        goto LABEL_338;
      if ( !Instance )
        goto LABEL_338;
      v95 = *(System_String_array **)(v109 + 32);
      Master_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)Instance,
                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_338;
      Master_WarQuestSelectionMaster = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                  v107,
                                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_338;
      v110 = *(_DWORD *)(Master_WarQuestSelectionMaster + 28);
      Master_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)Instance,
                                                  (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_338;
    }
    Master_WarQuestSelectionMaster = (__int64)WarMaster__getByEventId(
                                                (WarMaster_o *)Master_WarQuestSelectionMaster,
                                                v110,
                                                0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_338;
    v115 = *(_DWORD *)(Master_WarQuestSelectionMaster + 16);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B22 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v96, v113, v114);
      byte_42E4B22 = 1;
    }
    v116 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v116 = TerminalPramsManager_TypeInfo;
    }
    v116->static_fields->_WarId_k__BackingField = v115;
    if ( !byte_42E4B1E )
    {
      sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v96, v113, v114);
      byte_42E4B1E = 1;
    }
    v117 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v117 = TerminalSceneComponent_TypeInfo;
    }
    Master_WarQuestSelectionMaster = (__int64)v117->static_fields->mInstance;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_338;
    TerminalSceneComponent__CallQuestInformationCloseAtAll(
      (TerminalSceneComponent_o *)Master_WarQuestSelectionMaster,
      0,
      0LL);
    if ( v95 )
      goto LABEL_261;
  }
LABEL_96:
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B35 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v96, v97, v98);
    byte_42E4B35 = 1;
  }
  v118 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v118 = TerminalPramsManager_TypeInfo;
  }
  if ( !v118->static_fields->_IsPhaseClear_k__BackingField
    && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_16485/*"afterActionBk"*/, 0LL) )
  {
    String_35648228 = UnityEngine_PlayerPrefs__GetString_35648228((System_String_o *)StringLiteral_16485/*"afterActionBk"*/, 0LL);
    Master_WarQuestSelectionMaster = sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_338;
    v96 = Master_WarQuestSelectionMaster;
    if ( !*(_DWORD *)(Master_WarQuestSelectionMaster + 24) )
      goto LABEL_453;
    *(_WORD *)(Master_WarQuestSelectionMaster + 32) = 44;
    if ( !String_35648228 )
      goto LABEL_338;
    Master_WarQuestSelectionMaster = (__int64)System_String__Split(
                                                String_35648228,
                                                (System_Char_array *)Master_WarQuestSelectionMaster,
                                                0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_338;
    v120 = Master_WarQuestSelectionMaster;
    if ( !*(_DWORD *)(Master_WarQuestSelectionMaster + 24) )
      goto LABEL_453;
    v124 = System_Int32__Parse(*(System_String_o **)(Master_WarQuestSelectionMaster + 32), 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B24 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v121, v122, v123);
      byte_42E4B24 = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 16LL) = v124;
    if ( *(_DWORD *)(v120 + 24) <= 1u )
      goto LABEL_453;
    v128 = System_Int32__Parse(*(System_String_o **)(v120 + 40), 0LL);
    if ( !byte_42E4B25 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v125, v126, v127);
      byte_42E4B25 = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 20LL) = v128;
    if ( *(_DWORD *)(v120 + 24) <= 2u )
      goto LABEL_453;
    v129 = *(System_String_o **)(v120 + 48);
    if ( (BYTE3(bool_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !bool_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
    v133 = System_Boolean__Parse(v129, 0LL);
    if ( !byte_42E4B4E )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v130, v131, v132);
      byte_42E4B4E = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    *(_BYTE *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 100LL) = v133;
    if ( *(_DWORD *)(v120 + 24) <= 3u )
      goto LABEL_453;
    v134 = System_Boolean__Parse(*(System_String_o **)(v120 + 56), 0LL);
    if ( !byte_42E4B4F )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v96, v97, v98);
      byte_42E4B4F = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    *(_BYTE *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 101LL) = v134;
    if ( !byte_42E4B45 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v96, v97, v98);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
      byte_42E4B45 = 1;
    }
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( *(_BYTE *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 100LL) )
    {
      if ( !Instance )
        goto LABEL_338;
      MasterData_WarQuestSelectionMaster = (WarMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_WarMaster___);
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E4B33 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v96, v135, v136);
        byte_42E4B33 = 1;
      }
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
      }
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_338;
      QuestId = WarMaster__getByLastQuestId(
                  MasterData_WarQuestSelectionMaster,
                  *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 16LL),
                  0LL);
      if ( QuestId )
      {
        v139 = QuestId;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_42E4B3B )
        {
          sub_B5D5C4(&TerminalPramsManager_TypeInfo, v96, v97, v98);
          byte_42E4B3B = 1;
        }
        v140 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v140 = TerminalPramsManager_TypeInfo;
        }
        v140->static_fields->_IsWarClear_k__BackingField = 1;
        id = v139->fields.id;
        if ( !byte_42E4B22 )
        {
          sub_B5D5C4(&TerminalPramsManager_TypeInfo, v96, v97, v98);
          v140 = TerminalPramsManager_TypeInfo;
          byte_42E4B22 = 1;
        }
        if ( (BYTE3(v140->vtable._0_Equals.methodPtr) & 4) != 0 && !v140->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v140);
          v140 = TerminalPramsManager_TypeInfo;
        }
        v140->static_fields->_WarId_k__BackingField = id;
        v142 = TerminalPramsManager__CheckIsOrdealCallWarClear(v139, 0LL);
        if ( !byte_42E4B6D )
        {
          sub_B5D5C4(&TerminalPramsManager_TypeInfo, v96, v97, v98);
          byte_42E4B6D = 1;
        }
        v143 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v143 = TerminalPramsManager_TypeInfo;
        }
        v143->static_fields->_IsOrdealCallWarClear_k__BackingField = v142;
      }
    }
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B39 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v96, v97, v98);
    byte_42E4B39 = 1;
  }
  v144 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v144 = TerminalPramsManager_TypeInfo;
  }
  if ( v144->static_fields->_IsWarClear_k__BackingField )
  {
    if ( (BYTE3(v144->vtable._0_Equals.methodPtr) & 4) != 0 && !v144->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v144);
    if ( !byte_42E4B3A )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v96, v97, v98);
      byte_42E4B3A = 1;
    }
    v144 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v144 = TerminalPramsManager_TypeInfo;
    }
    if ( !v144->static_fields->_IsOrdealCallWarClear_k__BackingField )
      goto LABEL_260;
  }
  if ( (BYTE3(v144->vtable._0_Equals.methodPtr) & 4) != 0 && !v144->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v144);
  if ( !byte_42E4B35 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v96, v97, v98);
    byte_42E4B35 = 1;
  }
  Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 101LL) )
  {
    if ( !Instance )
      goto LABEL_338;
    v147 = (QuestPhaseDetailAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B33 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v96, v145, v146);
      byte_42E4B33 = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    v148 = *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 16LL);
    if ( !byte_42E4B34 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v96, v145, v146);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
      byte_42E4B34 = 1;
    }
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !v147 )
      goto LABEL_338;
    v95 = QuestPhaseDetailAddMaster__GetAfterAction(
            v147,
            v148,
            *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 20LL) + 1,
            0LL);
    if ( v95 )
      goto LABEL_261;
    v151 = (QuestPhaseDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B33 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v96, v149, v150);
      byte_42E4B33 = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    v152 = *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 16LL);
    if ( !byte_42E4B34 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v96, v149, v150);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
      byte_42E4B34 = 1;
    }
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !v151 )
      goto LABEL_338;
    v95 = QuestPhaseDetailMaster__GetAfterAction(
            v151,
            v152,
            *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 20LL) + 1,
            0LL);
    if ( v95 )
      goto LABEL_261;
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0 && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
  if ( !byte_42E4B45 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v96, v97, v98);
    byte_42E4B45 = 1;
  }
  v153 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v153 = TerminalPramsManager_TypeInfo;
  }
  if ( !v153->static_fields->_IsQuestClear_k__BackingField )
    goto LABEL_260;
  if ( (BYTE3(v153->vtable._0_Equals.methodPtr) & 4) != 0 && !v153->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v153);
  v95 = 0LL;
  if ( TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL) )
    goto LABEL_261;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B33 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v96, v154, v155);
    byte_42E4B33 = 1;
  }
  Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_338;
  v156 = *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 16LL);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_338;
  v157 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
           (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
           v156,
           (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( v157 )
    v95 = *(System_String_array **)&v157->fields.eventId;
  else
LABEL_260:
    v95 = 0LL;
LABEL_261:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v160 = (QuestBehaviorMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B33 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v96, v158, v159);
    byte_42E4B33 = 1;
  }
  Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
  }
  v161 = *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 16LL);
  if ( !byte_42E4B34 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v96, v158, v159);
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    byte_42E4B34 = 1;
  }
  if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0 && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
  {
    j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !v160 )
    goto LABEL_338;
  IsOpenQuestBehaviorCond = QuestBehaviorMaster__IsOpenQuestBehaviorCond(
                              v160,
                              v161,
                              *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 20LL) + 1,
                              7,
                              0LL);
  if ( !v95 || IsOpenQuestBehaviorCond || (v163 = *(_QWORD *)&v95->max_length, (int)v163 < 2) || (v163 & 1) != 0 )
  {
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16485/*"afterActionBk"*/, 0LL);
    return;
  }
  v164 = (System_Int32_array **)sub_B5D5DC(QuestAfterAction_Command___TypeInfo, (unsigned int)v163 >> 1);
  v5->fields.commandBuf = (struct QuestAfterAction_Command_array *)v164;
  p_commandBuf = (unsigned int **)&v5->fields.commandBuf;
  sub_B5D560((BattleServantConfConponent_o *)&v5->fields.commandBuf, v164, v166, v167, v168, v169, v170, v171);
  commandBuf = (int *)v5->fields.commandBuf;
  if ( !commandBuf )
    goto LABEL_338;
  v175 = 0LL;
  v176 = 0;
  while ( (__int64)v175 < commandBuf[6] )
  {
    v177 = sub_B5D694(QuestAfterAction_Command_TypeInfo);
    QuestAfterAction_Command___ctor((QuestAfterAction_Command_o *)v177, 0LL);
    if ( v176 >= v95->max_length )
      goto LABEL_453;
    Master_WarQuestSelectionMaster = System_Int32__Parse(v95->m_Items[v176], 0LL);
    if ( !v177 )
      goto LABEL_338;
    *(_DWORD *)(v177 + 16) = Master_WarQuestSelectionMaster;
    v184 = (int)v176 | 1LL;
    if ( (unsigned int)v184 >= v95->max_length )
      goto LABEL_453;
    v185 = (System_Int32_array **)v95->m_Items[v184];
    *(_QWORD *)(v177 + 24) = v185;
    v186 = (System_String_o **)(v177 + 24);
    sub_B5D560((BattleServantConfConponent_o *)(v177 + 24), v185, v178, v179, v180, v181, v182, v183);
    if ( !v5->fields.hasFadeCommand )
    {
      v188 = *(_DWORD *)(v177 + 16);
      if ( v188 == 520 || v188 == 405 )
        v5->fields.hasFadeCommand = 1;
    }
    if ( !v176 && !v5->fields.isRequestedStopBgm && *(_DWORD *)(v177 + 16) == 850 )
      v5->fields.isRequestedStopBgm = 1;
    if ( (v5->fields.MapMoveBeforeFocusSpotId & 0x80000000) != 0 && *(_DWORD *)(v177 + 16) == 350 )
    {
      v189 = *v186;
      Master_WarQuestSelectionMaster = sub_B5D5DC(char___TypeInfo, 1LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_338;
      v96 = Master_WarQuestSelectionMaster;
      if ( !*(_DWORD *)(Master_WarQuestSelectionMaster + 24) )
        goto LABEL_453;
      *(_WORD *)(Master_WarQuestSelectionMaster + 32) = 44;
      if ( !v189 )
        goto LABEL_338;
      Master_WarQuestSelectionMaster = (__int64)System_String__Split(
                                                  v189,
                                                  (System_Char_array *)Master_WarQuestSelectionMaster,
                                                  0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_338;
      if ( *(int *)(Master_WarQuestSelectionMaster + 24) >= 4 )
      {
        Master_WarQuestSelectionMaster = System_Int32__Parse(
                                           *(System_String_o **)(Master_WarQuestSelectionMaster + 56),
                                           0LL);
        v5->fields.MapMoveBeforeFocusSpotId = Master_WarQuestSelectionMaster;
      }
    }
    if ( v5->fields.IsMoveToEventRewardShop )
      goto LABEL_307;
    v190 = *(_DWORD *)(v177 + 16);
    if ( v190 == 700 )
    {
      v5->fields.IsMoveToEventRewardShop = 1;
LABEL_307:
      v190 = *(_DWORD *)(v177 + 16);
    }
    if ( v190 == 800 )
    {
      Master_WarQuestSelectionMaster = (__int64)QuestAfterAction_Command__GetAvailableRandomVoice(
                                                  (QuestAfterAction_Command_o *)v177,
                                                  &svtId,
                                                  0LL);
      if ( Master_WarQuestSelectionMaster )
      {
        v191 = p_commandBuf;
        v192 = v5;
        svtVoices = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v5->fields.svtVoices;
        v194 = (System_String_o *)Master_WarQuestSelectionMaster;
        v195 = v95;
        sId = svtId;
        v196 = (QuestAfterAction_VoiceInfo_o *)sub_B5D694(QuestAfterAction_VoiceInfo_TypeInfo);
        QuestAfterAction_VoiceInfo___ctor(v196, sId, v194, 0LL);
        if ( !svtVoices )
          goto LABEL_338;
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
          svtVoices,
          v175,
          (WarBoardEvalValueSquare_EvalValueSquare_o *)v196,
          (const MethodInfo_2F320C4 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__);
        v95 = v195;
        v5 = v192;
        p_commandBuf = v191;
      }
    }
    v197 = *(_DWORD *)(v177 + 16);
    if ( v197 <= 114 )
    {
      v198 = v197 - 100;
      if ( v198 >= 0xF || ((0x7C1Fu >> v198) & 1) == 0 )
        goto LABEL_325;
      v96 = 0LL;
    }
    else if ( (unsigned int)(v197 - 200) < 6 )
    {
      v96 = 1LL;
    }
    else if ( (unsigned int)(v197 - 400) < 0xA )
    {
      v96 = 2LL;
    }
    else
    {
      if ( v197 != 550 )
        goto LABEL_325;
      v96 = 3LL;
    }
    Master_WarQuestSelectionMaster = (__int64)v5->fields.commandTypeIds;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_338;
    Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
             (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)Master_WarQuestSelectionMaster,
             v96,
             (const MethodInfo_2F49898 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    Master_WarQuestSelectionMaster = QuestAfterAction__ExtractCommandTargetId((QuestAfterAction_Command_o *)v177, v200);
    if ( !Item )
      goto LABEL_338;
    System_Collections_Generic_List_int___Add(
      (System_Collections_Generic_List_int__o *)Item,
      Master_WarQuestSelectionMaster,
      (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
LABEL_325:
    if ( v5->fields.ActionMapTargetId <= 0 )
      QuestAfterAction__SetActionMap(v5, (QuestAfterAction_Command_o *)v177, v187);
    if ( *(_DWORD *)(v177 + 16) == 102 )
    {
      v201 = (QuestAfterAction_o *)System_Int32__Parse(*v186, 0LL);
      Master_WarQuestSelectionMaster = (__int64)QuestAfterAction__GetMapGimmickId(v201, (int32_t)v201, v202);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_338;
      v203 = *(_QWORD *)(Master_WarQuestSelectionMaster + 24);
      v204 = Master_WarQuestSelectionMaster;
      if ( (int)v203 >= 1 )
      {
        v205 = 0LL;
        while ( v205 < (unsigned int)v203 )
        {
          Master_WarQuestSelectionMaster = (__int64)v5->fields.invalidMapGimmickIdList;
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_338;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)Master_WarQuestSelectionMaster,
            *(_DWORD *)(v204 + 32 + 4 * v205),
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
          LODWORD(v203) = *(_DWORD *)(v204 + 24);
          if ( (__int64)++v205 >= (int)v203 )
            goto LABEL_334;
        }
LABEL_453:
        v230 = sub_B5D6C8(Master_WarQuestSelectionMaster);
        sub_B5D668(v230, 0LL);
      }
    }
LABEL_334:
    v206 = *p_commandBuf;
    if ( !*p_commandBuf )
      goto LABEL_338;
    Master_WarQuestSelectionMaster = sub_B5D684(v177, *(_QWORD *)(*(_QWORD *)v206 + 64LL));
    if ( !Master_WarQuestSelectionMaster )
    {
      v231 = sub_B5D6BC(0LL);
      sub_B5D668(v231, 0LL);
    }
    if ( v175 >= v206[6] )
      goto LABEL_453;
    v213 = &v206[2 * v175];
    *((_QWORD *)v213 + 4) = v177;
    sub_B5D560(
      (BattleServantConfConponent_o *)(v213 + 8),
      (System_Int32_array **)v177,
      v207,
      v208,
      v209,
      v210,
      v211,
      v212);
    commandBuf = (int *)*p_commandBuf;
    v176 += 2;
    ++v175;
    if ( !*p_commandBuf )
      goto LABEL_338;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B35 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v96, v172, v173);
    byte_42E4B35 = 1;
  }
  v214 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v214 = TerminalPramsManager_TypeInfo;
  }
  if ( v214->static_fields->_IsPhaseClear_k__BackingField )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v217 = (QuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestMaster___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42E4B33 )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v96, v215, v216);
      byte_42E4B33 = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !v217 )
      goto LABEL_338;
    if ( QuestMaster__TryGetQuestEntity(
           v217,
           &entity,
           *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 16LL),
           0LL) )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E4B20 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v96, v172, v173);
        byte_42E4B20 = 1;
      }
      v218 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v218 = TerminalPramsManager_TypeInfo;
      }
      v219 = BalanceConfig_TypeInfo;
      WarId_k__BackingField = v218->static_fields->_WarId_k__BackingField;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v219 = BalanceConfig_TypeInfo;
      }
      if ( WarId_k__BackingField == v219->static_fields->OrdealCallWarId )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
        if ( entity && Master_WarQuestSelectionMaster )
        {
          Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                             &v234,
                                             entity->fields.spotId,
                                             (const MethodInfo_23FAE6C *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
          if ( (Master_WarQuestSelectionMaster & 1) == 0 )
            goto LABEL_390;
          if ( v234 )
          {
            v221 = v234->fields.id;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            }
            if ( !byte_42E61C4 )
            {
              sub_B5D5C4(&TerminalPramsManager_TypeInfo, v96, v172, v173);
              byte_42E61C4 = 1;
            }
            v222 = TerminalPramsManager_TypeInfo;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v222 = TerminalPramsManager_TypeInfo;
            }
            v222->static_fields->_BlankEarthAfterActionFocusSpotId_k__BackingField = v221;
            goto LABEL_390;
          }
        }
LABEL_338:
        sub_B5D69C(Master_WarQuestSelectionMaster, v96);
      }
    }
  }
LABEL_390:
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B29 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v96, v172, v173);
    byte_42E4B29 = 1;
  }
  v223 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v223 = TerminalPramsManager_TypeInfo;
  }
  v223->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_42E4B28 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v96, v172, v173);
    v223 = TerminalPramsManager_TypeInfo;
    byte_42E4B28 = 1;
  }
  if ( (BYTE3(v223->vtable._0_Equals.methodPtr) & 4) != 0 && !v223->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v223);
    v223 = TerminalPramsManager_TypeInfo;
  }
  v223->static_fields->_DispState_k__BackingField = 2;
  if ( !byte_42E4B20 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v96, v172, v173);
    byte_42E4B20 = 1;
  }
  v224 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v224 = TerminalPramsManager_TypeInfo;
  }
  v225 = BalanceConfig_TypeInfo;
  v226 = v224->static_fields->_WarId_k__BackingField;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v225 = BalanceConfig_TypeInfo;
  }
  v227 = TerminalPramsManager_TypeInfo;
  if ( v226 == v225->static_fields->OrdealCallWarId )
    goto LABEL_457;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B3A )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v96, v172, v173);
    byte_42E4B3A = 1;
  }
  v227 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v227 = TerminalPramsManager_TypeInfo;
  }
  if ( v227->static_fields->_IsOrdealCallWarClear_k__BackingField )
  {
LABEL_457:
    if ( (BYTE3(v227->vtable._0_Equals.methodPtr) & 4) != 0 && !v227->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v227);
    if ( !byte_42E5CAB )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v96, v172, v173);
      byte_42E5CAB = 1;
    }
    v227 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v227 = TerminalPramsManager_TypeInfo;
    }
    v227->static_fields->_BlankEarthSpotId_k__BackingField = 0;
    if ( !byte_42E4B3A )
    {
      sub_B5D5C4(&TerminalPramsManager_TypeInfo, v96, v172, v173);
      v227 = TerminalPramsManager_TypeInfo;
      byte_42E4B3A = 1;
    }
    if ( (BYTE3(v227->vtable._0_Equals.methodPtr) & 4) != 0 && !v227->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v227);
      v227 = TerminalPramsManager_TypeInfo;
    }
    if ( !v227->static_fields->_IsOrdealCallWarClear_k__BackingField )
    {
      if ( (BYTE3(v227->vtable._0_Equals.methodPtr) & 4) != 0 && !v227->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v227);
      if ( !byte_42E4B28 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, v96, v172, v173);
        byte_42E4B28 = 1;
      }
      v228 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v228 = TerminalPramsManager_TypeInfo;
      }
      v228->static_fields->_DispState_k__BackingField = 3;
      v227 = TerminalPramsManager_TypeInfo;
    }
  }
  if ( (BYTE3(v227->vtable._0_Equals.methodPtr) & 4) != 0 && !v227->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v227);
  if ( !byte_42E4B55 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v96, v172, v173);
    byte_42E4B55 = 1;
  }
  v229 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v229 = TerminalPramsManager_TypeInfo;
  }
  v229->static_fields->_SpotId_k__BackingField = -1;
}


void __fastcall QuestAfterAction__DeleteContinueData(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E887B & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_16485/*"afterActionBk"*/, v1, v2, v3);
    byte_42E887B = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16485/*"afterActionBk"*/, 0LL);
}


int32_t __fastcall QuestAfterAction__ExtractCommandTargetId(
        QuestAfterAction_Command_o *command,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  QuestAfterAction_Command_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  bool v8; // w0
  System_String_o *param; // x19
  __int64 v11; // x0

  v4 = command;
  if ( (byte_42E887E & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)method, v2, v3);
    command = (QuestAfterAction_Command_o *)sub_B5D5C4(&StringLiteral_707/*","*/, v5, v6, v7);
    byte_42E887E = 1;
  }
  if ( !v4 )
    goto LABEL_13;
  command = (QuestAfterAction_Command_o *)v4->fields.param;
  if ( !command )
    goto LABEL_13;
  v8 = System_String__Contains((System_String_o *)command, (System_String_o *)StringLiteral_707/*","*/, 0LL);
  param = v4->fields.param;
  if ( v8 )
  {
    command = (QuestAfterAction_Command_o *)sub_B5D5DC(char___TypeInfo, 1LL);
    if ( command )
    {
      method = (const MethodInfo *)command;
      if ( !LODWORD(command->fields.param) )
        goto LABEL_14;
      LOWORD(command[1].klass) = 44;
      if ( param )
      {
        command = (QuestAfterAction_Command_o *)System_String__Split(param, (System_Char_array *)command, 0LL);
        if ( command )
        {
          if ( LODWORD(command->fields.param) )
          {
            param = (System_String_o *)command[1].klass;
            return System_Int32__Parse(param, 0LL);
          }
LABEL_14:
          v11 = sub_B5D6C8(command);
          sub_B5D668(v11, 0LL);
        }
      }
    }
LABEL_13:
    sub_B5D69C(command, method);
  }
  return System_Int32__Parse(param, 0LL);
}


System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved(
        QuestAfterAction_o *this,
        System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *commandEnumerable,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42E888B & 1) == 0 )
  {
    sub_B5D5C4(
      &QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_TypeInfo,
      (_DWORD)commandEnumerable,
      (_DWORD)method,
      v3);
    byte_42E888B = 1;
  }
  v6 = sub_B5D694(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_TypeInfo);
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74___ctor(
    (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *)v6,
    -2,
    0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 56) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 56), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 48) = commandEnumerable;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v6 + 48),
    (System_Int32_array **)commandEnumerable,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  return (System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *)v6;
}


QuestAfterAction_Command_array *__fastcall QuestAfterAction__GenerateCommandBuf(
        System_String_array *actionVals,
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
  __int64 IsNullOrEmpty; // x0
  __int64 v12; // x1
  _QWORD **v13; // x20
  __int64 v14; // x19
  __int16 v15; // w8
  __int64 v16; // x19
  __int64 v17; // x19
  __int64 v18; // x19
  QuestAfterAction_Command_array *v19; // x20
  __int64 v20; // x22
  unsigned __int64 v21; // x23
  __int64 v22; // x24
  il2cpp_array_size_t v23; // w25
  __int64 v24; // x21
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Int32_array **v31; // x1
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  __int64 v39; // x0
  __int64 v40; // x0

  if ( (byte_42E887F & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_QuestAfterAction_Command___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&QuestAfterAction_Command___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&QuestAfterAction_Command_TypeInfo, v8, v9, v10);
    byte_42E887F = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v13 = (_QWORD **)Method_System_Array_Empty_QuestAfterAction_Command___;
    v14 = **((_QWORD **)Method_System_Array_Empty_QuestAfterAction_Command___ + 6);
    v15 = *(_WORD *)(v14 + 306);
    if ( (v15 & 1) == 0 )
    {
      sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_QuestAfterAction_Command___ + 6));
      v15 = *(_WORD *)(v14 + 306);
    }
    if ( (v15 & 0x400) != 0 )
    {
      v16 = *v13[6];
      if ( (*(_BYTE *)(v16 + 306) & 1) == 0 )
        sub_AF52C4(*v13[6]);
      if ( !*(_DWORD *)(v16 + 224) )
      {
        v17 = *v13[6];
        if ( (*(_BYTE *)(v17 + 306) & 1) == 0 )
          sub_AF52C4(*v13[6]);
        j_il2cpp_runtime_class_init_0(v17);
      }
    }
    v18 = *v13[6];
    if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
      sub_AF52C4(*v13[6]);
    return **(QuestAfterAction_Command_array ***)(v18 + 184);
  }
  else
  {
    if ( !actionVals
      || (IsNullOrEmpty = sub_B5D5DC(
                            QuestAfterAction_Command___TypeInfo,
                            (unsigned int)((signed int)actionVals->max_length / 2))) == 0 )
    {
LABEL_28:
      sub_B5D69C(IsNullOrEmpty, v12);
    }
    v19 = (QuestAfterAction_Command_array *)IsNullOrEmpty;
    if ( *(int *)(IsNullOrEmpty + 24) >= 1 )
    {
      v20 = 0LL;
      v21 = 0LL;
      v22 = IsNullOrEmpty + 32;
      v23 = 1;
      do
      {
        v24 = sub_B5D694(QuestAfterAction_Command_TypeInfo);
        QuestAfterAction_Command___ctor((QuestAfterAction_Command_o *)v24, 0LL);
        if ( v23 - 1 >= actionVals->max_length )
          goto LABEL_27;
        IsNullOrEmpty = System_Int32__Parse(actionVals->m_Items[v23 - 1], 0LL);
        if ( !v24 )
          goto LABEL_28;
        *(_DWORD *)(v24 + 16) = IsNullOrEmpty;
        if ( v23 >= actionVals->max_length )
          goto LABEL_27;
        v31 = (System_Int32_array **)actionVals->m_Items[v23];
        *(_QWORD *)(v24 + 24) = v31;
        sub_B5D560((BattleServantConfConponent_o *)(v24 + 24), v31, v25, v26, v27, v28, v29, v30);
        IsNullOrEmpty = sub_B5D684(v24, v19->obj.klass->_1.element_class);
        if ( !IsNullOrEmpty )
        {
          v40 = sub_B5D6BC(0LL);
          sub_B5D668(v40, 0LL);
        }
        if ( v21 >= v19->max_length )
        {
LABEL_27:
          v39 = sub_B5D6C8(IsNullOrEmpty);
          sub_B5D668(v39, 0LL);
        }
        *(_QWORD *)(v22 + 8 * v21) = v24;
        sub_B5D560(
          (BattleServantConfConponent_o *)(v22 + v20),
          (System_Int32_array **)v24,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37);
        ++v21;
        v23 += 2;
        v20 += 8LL;
      }
      while ( (__int64)v21 < (int)v19->max_length );
    }
  }
  return v19;
}


System_String_array *__fastcall QuestAfterAction__GetAfterAction(
        int32_t questId,
        int32_t phase,
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  int v26; // w2
  __int64 v27; // x3
  QuestPhaseDetailAddMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int32_t items; // w23
  System_String_array *result; // x0
  int v31; // w2
  __int64 v32; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *v33; // x20
  System_String_array *v34; // x19

  if ( (byte_42E8896 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, phase, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_string___, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v21, v22, v23);
    byte_42E8896 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = (QuestPhaseDetailAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        Instance,
                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B33 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v25, v26, v27);
    byte_42E4B33 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  items = (int32_t)Instance[1].fields.saveNameList->fields._items;
  if ( !byte_42E4B34 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v25, v26, v27);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_42E4B34 = 1;
  }
  if ( (BYTE3(Instance[2].fields.lookup) & 4) != 0 && !Instance[1].fields.nowLoadCount )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_37;
  result = QuestPhaseDetailAddMaster__GetAfterAction(
             MasterData_WarQuestSelectionMaster,
             items,
             HIDWORD(Instance[1].fields.saveNameList->fields._items) + 1,
             0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_37;
  result = QuestPhaseDetailMaster__GetAfterAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  v33 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         Instance,
                                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B33 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v25, v31, v32);
    byte_42E4B33 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v33 )
LABEL_37:
    sub_B5D69C(Instance, v25);
  result = (System_String_array *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v33,
                                    (int32_t)Instance[1].fields.saveNameList->fields._items,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( result )
  {
    v34 = result;
    if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result->m_Items[8],
           (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_string___) )
    {
      return (System_String_array *)v34->m_Items[8];
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


System_String_array *__fastcall QuestAfterAction__GetBeforeAction(
        int32_t questId,
        int32_t phase,
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
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  DataManager_o *Instance; // x0
  __int64 v25; // x1
  int v26; // w2
  __int64 v27; // x3
  QuestPhaseDetailAddMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int32_t items; // w23
  System_String_array *result; // x0
  int v31; // w2
  __int64 v32; // x3
  DataMasterBase_WarMaster__WarEntity__int__o *v33; // x20
  System_String_array *v34; // x19

  if ( (byte_42E8895 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, phase, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Any_string___, v15, v16, v17);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v18, v19, v20);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v21, v22, v23);
    byte_42E8895 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = (QuestPhaseDetailAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        Instance,
                                                                        (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B33 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v25, v26, v27);
    byte_42E4B33 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  items = (int32_t)Instance[1].fields.saveNameList->fields._items;
  if ( !byte_42E4B34 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v25, v26, v27);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_42E4B34 = 1;
  }
  if ( (BYTE3(Instance[2].fields.lookup) & 4) != 0 && !Instance[1].fields.nowLoadCount )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_37;
  result = QuestPhaseDetailAddMaster__GetBeforeAction(
             MasterData_WarQuestSelectionMaster,
             items,
             HIDWORD(Instance[1].fields.saveNameList->fields._items) + 1,
             0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_37;
  result = QuestPhaseDetailMaster__GetBeforeAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  v33 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         Instance,
                                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B33 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v25, v31, v32);
    byte_42E4B33 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v33 )
LABEL_37:
    sub_B5D69C(Instance, v25);
  result = (System_String_array *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v33,
                                    (int32_t)Instance[1].fields.saveNameList->fields._items,
                                    (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( result )
  {
    v34 = result;
    if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result->m_Items[7],
           (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_string___) )
    {
      return (System_String_array *)v34->m_Items[7];
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
  if ( commandId <= 114 )
  {
    if ( (unsigned int)(commandId - 100) < 0xF )
      return dword_32A2E60[commandId - 100];
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
        const MethodInfo_1E68CF8 *method)
{
  QuestAfterAction_o *v9; // x23
  UnityEngine_Object_o *MapGameObject; // x20

  v9 = this;
  if ( (byte_42EC231 & 1) == 0 )
  {
    this = (QuestAfterAction_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, comType, id, state);
    byte_42EC231 = 1;
  }
  if ( !v9 )
    goto LABEL_11;
  MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v9, comType, id, state, 0LL);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (QuestAfterAction_o *)UnityEngine_Object__op_Equality(MapGameObject, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    return 0LL;
  if ( !MapGameObject )
LABEL_11:
    sub_B5D69C(this, *(_QWORD *)&comType);
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
  QuestAfterAction_o *v8; // x22
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  UnityEngine_Object_o *v12; // x23
  UnityEngine_Transform_o *transform; // x23
  const MethodInfo *v14; // x3

  v8 = this;
  if ( (byte_42E8891 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, comType, id, state);
    this = (QuestAfterAction_o *)sub_B5D5C4(&SrcSpotBasePrefab_TypeInfo, v9, v10, v11);
    byte_42E8891 = 1;
  }
  switch ( comType )
  {
    case 2:
      if ( !state )
        goto LABEL_42;
      if ( state->fields.IsMapModel )
      {
        this = (QuestAfterAction_o *)QuestAfterAction_StateMain__get_SubGimmickRoot(state, 0LL);
        if ( !this )
          goto LABEL_42;
      }
      else
      {
        this = (QuestAfterAction_o *)v8->fields.mGimmickRoot;
        if ( !this )
          goto LABEL_42;
      }
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      this = (QuestAfterAction_o *)MapGimmickComponent__GetGobjName(id, 0LL);
      if ( !transform )
LABEL_42:
        sub_B5D69C(this, *(_QWORD *)&comType);
      goto LABEL_30;
    case 1:
      if ( !state )
        goto LABEL_42;
      if ( state->fields.IsMapModel )
      {
        this = (QuestAfterAction_o *)v8->fields.subRoadRoot;
        if ( !this )
          goto LABEL_42;
      }
      else
      {
        this = (QuestAfterAction_o *)v8->fields.mRoadRoot;
        if ( !this )
          goto LABEL_42;
      }
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      this = (QuestAfterAction_o *)srcLineSprite__GetGobjName(id, 0LL);
      if ( !transform )
        goto LABEL_42;
LABEL_30:
      v12 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)this, 0LL);
      goto LABEL_31;
    case 0:
      if ( !state )
        goto LABEL_42;
      if ( state->fields.IsMapModel )
      {
        this = (QuestAfterAction_o *)v8->fields.subSpotRoot;
        if ( !this )
          goto LABEL_42;
      }
      else
      {
        this = (QuestAfterAction_o *)v8->fields.mSpotRoot;
        if ( !this )
          goto LABEL_42;
      }
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( (BYTE3(SrcSpotBasePrefab_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SrcSpotBasePrefab_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SrcSpotBasePrefab_TypeInfo);
      }
      this = (QuestAfterAction_o *)SrcSpotBasePrefab__GetGobjName(id, 0LL);
      if ( !transform )
        goto LABEL_42;
      goto LABEL_30;
  }
  v12 = 0LL;
LABEL_31:
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (QuestAfterAction_o *)UnityEngine_Object__op_Equality(v12, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (QuestAfterAction_o *)QuestAfterAction__IsMapChangeable(this, *(const MethodInfo **)&comType);
    if ( !state )
      goto LABEL_42;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      state->fields.IsAnimDoing = 0;
      QuestAfterAction__RequestMapChange(v8, comType, id, v14);
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
    if ( !v12 )
      goto LABEL_42;
    return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0LL);
  }
}


System_Int32_array *__fastcall QuestAfterAction__GetMapGimmickId(
        QuestAfterAction_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_int__o *v23; // x20
  void *Instance; // x0
  __int64 v25; // x1
  int v26; // w8
  _DWORD *v27; // x21
  unsigned int v28; // w23
  char *v29; // x8
  __int64 v30; // x22
  __int64 v32; // x0

  if ( (byte_42E8880 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_MapGimmickMaster___, spotId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataMasterBase_getEntitys_MapGimmickEntity___, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v20, v21, v22);
    byte_42E8880 = 1;
  }
  v23 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_MapGimmickMaster___);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
               (DataMasterBase_o *)Instance,
               (const MethodInfo_1AE4B20 *)Method_DataMasterBase_getEntitys_MapGimmickEntity___);
  if ( !Instance )
    goto LABEL_16;
  v26 = *((_DWORD *)Instance + 6);
  v27 = Instance;
  if ( v26 >= 1 )
  {
    v28 = 0;
    while ( 1 )
    {
      if ( v28 >= v26 )
      {
        v32 = sub_B5D6C8(Instance);
        sub_B5D668(v32, 0LL);
      }
      v29 = (char *)&v27[2 * v28];
      v30 = *((_QWORD *)v29 + 4);
      if ( !v30 )
        break;
      Instance = (void *)MapGimmickEntity__GetRaidDispSpotIdFromScript(*((MapGimmickEntity_o **)v29 + 4), 0LL);
      if ( (_DWORD)Instance == spotId )
      {
        if ( !v23 )
          break;
        System_Collections_Generic_List_int___Add(
          v23,
          *(_DWORD *)(v30 + 16),
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      }
      v26 = v27[6];
      if ( (int)++v28 >= v26 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B5D69C(Instance, v25);
  }
LABEL_14:
  if ( !v23 )
    goto LABEL_16;
  return System_Collections_Generic_List_int___ToArray(
           v23,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall QuestAfterAction__GetState(QuestAfterAction_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  QuestAfterAction_o *v4; // x19
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  v4 = this;
  if ( (byte_42E888F & 1) == 0 )
  {
    this = (QuestAfterAction_o *)sub_B5D5C4(&Method_CStateManager_QuestAfterAction__getState__, (_DWORD)method, v2, v3);
    byte_42E888F = 1;
  }
  fsm = v4->fields.fsm;
  if ( !fsm )
    sub_B5D69C(this, method);
  return fsm->fields.m_state;
}


void __fastcall QuestAfterAction__Init(QuestAfterAction_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
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
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  struct CStateManager_QuestAfterAction__o **p_fsm; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v45; // x21
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct CStateManager_QuestAfterAction__o *fsm; // x21
  QuestAfterAction_StateNone_o *v53; // x22
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *commandTypeIds; // x0
  __int64 v55; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v56; // x21
  QuestAfterAction_StateMain_o *v57; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v58; // x21
  QuestAfterAction_StateAdditional_o *v59; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v60; // x20
  QuestAfterAction_StateInstant_o *v61; // x21
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  unsigned int v68; // w25
  int32_t v69; // w20
  System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *v70; // x21
  System_Collections_Generic_List_int__o *v71; // x22
  struct UnityEngine_BoxCollider_o *Component_srcLineSprite; // x0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  struct SrcSpotBasePrefab_o **p_lastDispSpot; // x19
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_Collections_Generic_List_int__o *v86; // x20
  System_String_array **v87; // x2
  System_String_array **v88; // x3
  System_Boolean_array **v89; // x4
  System_Int32_array **v90; // x5
  System_Int32_array *v91; // x6
  System_Int32_array *v92; // x7

  if ( (byte_42E887C & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_QuestAfterAction___ctor__, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_CStateManager_QuestAfterAction__add__, v5, v6, v7);
    sub_B5D5C4(&CStateManager_QuestAfterAction__TypeInfo, v8, v9, v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__,
      v14,
      v15,
      v16);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__,
      v17,
      v18,
      v19);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Clear__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v26, v27, v28);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v29, v30, v31);
    sub_B5D5C4(&QuestAfterAction_StateAdditional_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&QuestAfterAction_StateInstant_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&QuestAfterAction_StateMain_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&QuestAfterAction_StateNone_TypeInfo, v41, v42, v43);
    byte_42E887C = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v45 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B5D694(CStateManager_QuestAfterAction__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v45,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2BB2630 *)Method_CStateManager_QuestAfterAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestAfterAction__o *)v45;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.fsm,
      (System_Int32_array **)v45,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
    fsm = this->fields.fsm;
    v53 = (QuestAfterAction_StateNone_o *)sub_B5D694(QuestAfterAction_StateNone_TypeInfo);
    QuestAfterAction_StateNone___ctor(v53, 0LL);
    if ( !fsm )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      0,
      (IState_T__o *)v53,
      (const MethodInfo_2BB26FC *)Method_CStateManager_QuestAfterAction__add__);
    v56 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v57 = (QuestAfterAction_StateMain_o *)sub_B5D694(QuestAfterAction_StateMain_TypeInfo);
    QuestAfterAction_StateMain___ctor(v57, 0LL);
    if ( !v56 )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v56,
      1,
      (IState_T__o *)v57,
      (const MethodInfo_2BB26FC *)Method_CStateManager_QuestAfterAction__add__);
    v58 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v59 = (QuestAfterAction_StateAdditional_o *)sub_B5D694(QuestAfterAction_StateAdditional_TypeInfo);
    QuestAfterAction_StateAdditional___ctor(v59, 0LL);
    if ( !v58 )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v58,
      2,
      (IState_T__o *)v59,
      (const MethodInfo_2BB26FC *)Method_CStateManager_QuestAfterAction__add__);
    v60 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v61 = (QuestAfterAction_StateInstant_o *)sub_B5D694(QuestAfterAction_StateInstant_TypeInfo);
    QuestAfterAction_StateInstant___ctor(v61, 0LL);
    if ( !v60 )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v60,
      3,
      (IState_T__o *)v61,
      (const MethodInfo_2BB26FC *)Method_CStateManager_QuestAfterAction__add__);
  }
  QuestAfterAction__SetState(this, 0, v2);
  this->fields.commandBuf = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.commandBuf, 0LL, v62, v63, v64, v65, v66, v67);
  this->fields.commandIdx = 0;
  v68 = -1;
  do
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.commandTypeIds;
    if ( !commandTypeIds )
      goto LABEL_21;
    v69 = v68 + 1;
    commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
                                                                                        commandTypeIds,
                                                                                        v68 + 1,
                                                                                        (const MethodInfo_2F49BD0 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    v70 = this->fields.commandTypeIds;
    if ( ((unsigned __int8)commandTypeIds & 1) != 0 )
    {
      if ( !v70 )
        goto LABEL_21;
      commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
                                                                                          (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.commandTypeIds,
                                                                                          v69,
                                                                                          (const MethodInfo_2F49898 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( !commandTypeIds )
        goto LABEL_21;
      System_Collections_Generic_List_int___Clear(
        (System_Collections_Generic_List_int__o *)commandTypeIds,
        (const MethodInfo_3084818 *)Method_System_Collections_Generic_List_int__Clear__);
    }
    else
    {
      v71 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v71,
        (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
      if ( !v70 )
        goto LABEL_21;
      System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____set_Item(
        v70,
        v69,
        v71,
        (const MethodInfo_2F49934 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
    }
    ++v68;
  }
  while ( v68 < 3 );
  commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)UnityEngine_Component__get_gameObject(
                                                                                      (UnityEngine_Component_o *)this,
                                                                                      0LL);
  if ( !commandTypeIds
    || (Component_srcLineSprite = (struct UnityEngine_BoxCollider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        (UnityEngine_GameObject_o *)commandTypeIds,
                                                                        (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.screenCollider = Component_srcLineSprite,
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.screenCollider,
          (System_Int32_array **)Component_srcLineSprite,
          v73,
          v74,
          v75,
          v76,
          v77,
          v78),
        (commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.screenCollider) == 0LL) )
  {
LABEL_21:
    sub_B5D69C(commandTypeIds, v55);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)commandTypeIds, 0, 0LL);
  this->fields.lastDispSpot = 0LL;
  p_lastDispSpot = &this->fields.lastDispSpot;
  sub_B5D560((BattleServantConfConponent_o *)p_lastDispSpot, 0LL, v80, v81, v82, v83, v84, v85);
  v86 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v86,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  *(p_lastDispSpot - 18) = (struct SrcSpotBasePrefab_o *)v86;
  sub_B5D560(
    (BattleServantConfConponent_o *)(p_lastDispSpot - 18),
    (System_Int32_array **)v86,
    v87,
    v88,
    v89,
    v90,
    v91,
    v92);
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
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *commandTypeIds; // x0

  if ( (byte_42E8883 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__,
      commandType,
      commandTypeId,
      method);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__,
      v7,
      v8,
      v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v10, v11, v12);
    byte_42E8883 = 1;
  }
  commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.commandTypeIds;
  if ( !commandTypeIds )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
         commandTypeIds,
         commandType,
         (const MethodInfo_2F49BD0 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__) )
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.commandTypeIds;
    if ( commandTypeIds )
    {
      commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
                                                                                          commandTypeIds,
                                                                                          commandType,
                                                                                          (const MethodInfo_2F49898 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( commandTypeIds )
        return System_Collections_Generic_List_int___Contains(
                 (System_Collections_Generic_List_int__o *)commandTypeIds,
                 commandTypeId,
                 (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_9:
    sub_B5D69C(commandTypeIds, *(_QWORD *)&commandType);
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
  __int64 v11; // x0

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
        v11 = sub_B5D6C8(this);
        sub_B5D668(v11, 0LL);
      }
      v8 = commandBuf->m_Items[v6];
      if ( !v8 )
LABEL_11:
        sub_B5D69C(this, *(_QWORD *)&spotId);
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


bool __fastcall QuestAfterAction__IsGimmickDispCommand(int32_t cmd, const MethodInfo *method)
{
  return (cmd | 2) == 403;
}


bool __fastcall QuestAfterAction__IsMapChangeable(QuestAfterAction_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  ScrTerminalMap_o *v4; // x0
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_42E8894 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E8894 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4B1E = 1;
  }
  v4 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v4 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v4->fields.pfbLineP->klass;
  if ( !klass || (v4 = *(ScrTerminalMap_o **)&klass->_2.static_fields_size) == 0LL )
    sub_B5D69C(v4, method);
  return ScrTerminalMap__IsMapChangeable(v4, 0LL);
}


bool __fastcall QuestAfterAction__IsNoWaitCommand(int32_t cmd, const MethodInfo *method)
{
  bool result; // w0

  if ( cmd > 205 )
    return (cmd & 0xFFFFFFFE) == 402;
  result = 1;
  if ( (unsigned int)(cmd - 110) >= 5 && (unsigned int)(cmd - 203) >= 3 )
    return 0;
  return result;
}


bool __fastcall QuestAfterAction__IsPlaying(QuestAfterAction_o *this, const MethodInfo *method)
{
  return QuestAfterAction__GetState(this, method) == 1;
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
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
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
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  TerminalTransitionInfo_o *TerminalTransitionInfoData; // x0
  __int64 v59; // x1
  int v60; // w2
  __int64 v61; // x3
  TerminalTransitionInfo_o *v62; // x19
  char *Master_WarQuestSelectionMaster; // x0
  TerminalSceneComponent_o *v64; // x20
  DataManager_o *v65; // x22
  EventMissionActionAddEntity_o *EntityFromIdProgressTypeAndActionType; // x0
  EventMissionActionAddEntity_o *v67; // x23
  EventMissionActionInfo_o *v68; // x21
  WarEntity_o *Entity; // x0
  WarEntity_o *v70; // x21
  EventEntity_o *v71; // x0
  _BOOL8 v72; // x0
  __int64 v73; // x1
  int v74; // w2
  __int64 v75; // x3
  Il2CppObject *current; // x21
  TerminalPramsManager_c *v77; // x0
  __int64 v78; // x1
  System_String_array **v79; // x2
  System_String_array **v80; // x3
  System_Boolean_array **v81; // x4
  System_Int32_array **v82; // x5
  System_Int32_array *v83; // x6
  System_Int32_array *v84; // x7
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x0
  System_Int32_array **klass; // x1
  __int64 v87; // x0
  __int64 v88; // x1
  struct TerminalTransitionInfo_o *v89; // x8
  EventMissionActionEntity_o *v90; // x0
  EventMissionActionEntity_o *v91; // x23
  WarEntity_o *v92; // x0
  WarEntity_o *v93; // x23
  int v94; // w1
  int v95; // w2
  __int64 v96; // x3
  TerminalPramsManager_c *v97; // x0
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  System_Int32_array **vals; // x1
  struct TerminalTransitionInfo_o *v105; // x8
  System_Collections_Generic_List_Enumerator_T__o v106; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v107; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_42E8887 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, v4, v5, v6);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventMissionMaster___, v10, v11, v12);
    sub_B5D5C4(&Method_DataManager_GetMaster_EventMaster___, v13, v14, v15);
    sub_B5D5C4(&Method_DataManager_GetMaster_ShopActionMaster___, v16, v17, v18);
    sub_B5D5C4(&Method_DataManager_GetMaster_ShopMaster___, v19, v20, v21);
    sub_B5D5C4(&DataManager_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v25, v26, v27);
    sub_B5D5C4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v28, v29, v30);
    sub_B5D5C4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__, v34, v35, v36);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__, v37, v38, v39);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__get_Current__, v40, v41, v42);
    sub_B5D5C4(&EventMissionActionInfo_TypeInfo, v43, v44, v45);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__, v46, v47, v48);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v49, v50, v51);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v52, v53, v54);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v55, v56, v57);
    byte_42E8887 = 1;
  }
  memset(&v107, 0, sizeof(v107));
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalTransitionInfoData = TerminalPramsManager__Load_TerminalTransitionInfoData(0LL);
  if ( !TerminalTransitionInfoData )
    return;
  v62 = TerminalTransitionInfoData;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v59, v60, v61);
    byte_42E4B1E = 1;
  }
  Master_WarQuestSelectionMaster = (char *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Master_WarQuestSelectionMaster = (char *)TerminalSceneComponent_TypeInfo;
  }
  v64 = (TerminalSceneComponent_o *)**((_QWORD **)Master_WarQuestSelectionMaster + 23);
  if ( !v64 )
    goto LABEL_77;
  if ( v64->fields._TransitionInfo_k__BackingField )
    return;
  if ( v62->fields.missionId < 1 )
  {
    if ( v62->fields.shopId >= 1 )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (char *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_77;
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                 v62->fields.shopId,
                 (const MethodInfo_23FAE10 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( Entity )
      {
        v70 = Entity;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (char *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_EventMaster___);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_77;
        v71 = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                 (int32_t)v70->fields.age,
                                 (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !v71 || !EventEntity__IsEventPeriod(v71, 0LL, 0LL) )
          goto LABEL_76;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (char *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ShopActionMaster___);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_77;
        Master_WarQuestSelectionMaster = (char *)ShopActionMaster__GetEntityList(
                                                   (ShopActionMaster_o *)Master_WarQuestSelectionMaster,
                                                   v70->fields.id,
                                                   0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_77;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v106,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Master_WarQuestSelectionMaster,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
        v107 = v106;
        while ( 1 )
        {
          v72 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v107,
                  (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__);
          if ( !v72 )
            break;
          current = v107.fields.current;
          if ( !v107.fields.current )
            sub_B5D69C(v72, v73);
          if ( LODWORD(v107.fields.current[1].monitor) == 4 )
          {
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            }
            if ( !byte_42E4B76 )
            {
              sub_B5D5C4(&TerminalPramsManager_TypeInfo, v73, v74, v75);
              byte_42E4B76 = 1;
            }
            v77 = TerminalPramsManager_TypeInfo;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v77 = TerminalPramsManager_TypeInfo;
            }
            v77->static_fields->meSceneStatus = 2;
            TerminalSceneComponent__CreateTransitionInfo(v64, v62, 0LL);
            TransitionInfo_k__BackingField = v64->fields._TransitionInfo_k__BackingField;
            if ( !TransitionInfo_k__BackingField )
              sub_B5D69C(0LL, v78);
            klass = (System_Int32_array **)current[2].klass;
            TransitionInfo_k__BackingField->fields.afterActionVals = (struct System_String_array *)klass;
            sub_B5D560(
              (BattleServantConfConponent_o *)&TransitionInfo_k__BackingField->fields.afterActionVals,
              klass,
              v79,
              v80,
              v81,
              v82,
              v83,
              v84);
            v89 = v64->fields._TransitionInfo_k__BackingField;
            if ( !v89 )
              sub_B5D69C(v87, v88);
            v89->fields.optionId = (int32_t)current[2].monitor;
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v107,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__);
      }
    }
  }
  else
  {
    Master_WarQuestSelectionMaster = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_77;
    v65 = (DataManager_o *)Master_WarQuestSelectionMaster;
    Master_WarQuestSelectionMaster = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Master_WarQuestSelectionMaster,
                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_77;
    EntityFromIdProgressTypeAndActionType = EventMissionActionAddMaster__GetEntityFromIdProgressTypeAndActionType(
                                              (EventMissionActionAddMaster_o *)Master_WarQuestSelectionMaster,
                                              v62->fields.missionId,
                                              5,
                                              4,
                                              0LL);
    if ( EntityFromIdProgressTypeAndActionType )
    {
      v67 = EntityFromIdProgressTypeAndActionType;
      v68 = (EventMissionActionInfo_o *)sub_B5D694(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_27154404(v68, v67, 0LL);
    }
    else
    {
      Master_WarQuestSelectionMaster = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 v65,
                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_77;
      v90 = EventMissionActionMaster__getEntityFromIdProgressTypeAndActionType(
              (EventMissionActionMaster_o *)Master_WarQuestSelectionMaster,
              v62->fields.missionId,
              5,
              4,
              0LL);
      if ( !v90 )
        return;
      v91 = v90;
      v68 = (EventMissionActionInfo_o *)sub_B5D694(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v68, v91, 0LL);
    }
    Master_WarQuestSelectionMaster = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               v65,
                                               (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_77;
    v92 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
            (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
            v62->fields.missionId,
            (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( v92 )
    {
      v93 = v92;
      Master_WarQuestSelectionMaster = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 v65,
                                                 (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_77;
      Master_WarQuestSelectionMaster = (char *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                 (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                 HIDWORD(v93->fields.age),
                                                 (const MethodInfo_23FAE10 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_77;
      if ( EventEntity__IsEventPeriod((EventEntity_o *)Master_WarQuestSelectionMaster, 0LL, 0LL) )
      {
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_42E4B76 )
        {
          sub_B5D5C4(&TerminalPramsManager_TypeInfo, v94, v95, v96);
          byte_42E4B76 = 1;
        }
        v97 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v97 = TerminalPramsManager_TypeInfo;
        }
        v97->static_fields->meSceneStatus = 2;
        TerminalSceneComponent__CreateTransitionInfo(v64, v62, 0LL);
        if ( v68 )
        {
          Master_WarQuestSelectionMaster = (char *)v64->fields._TransitionInfo_k__BackingField;
          if ( Master_WarQuestSelectionMaster )
          {
            vals = (System_Int32_array **)v68->fields.vals;
            *((_QWORD *)Master_WarQuestSelectionMaster + 4) = vals;
            sub_B5D560(
              (BattleServantConfConponent_o *)(Master_WarQuestSelectionMaster + 32),
              vals,
              v98,
              v99,
              v100,
              v101,
              v102,
              v103);
            v105 = v64->fields._TransitionInfo_k__BackingField;
            if ( v105 )
            {
              v105->fields.optionId = v68->fields.optionId;
              return;
            }
          }
        }
LABEL_77:
        sub_B5D69C(Master_WarQuestSelectionMaster, v59);
      }
LABEL_76:
      TerminalSceneComponent__ClearTransitionInfo(v64, 0LL);
    }
  }
}


void __fastcall QuestAfterAction__LoadVoice(
        QuestAfterAction_o *this,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *svtVoices; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x21
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v14; // x22
  const MethodInfo *v15; // x3

  if ( (byte_42E8884 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__,
      (_DWORD)endAct,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo, v9, v10, v11);
    byte_42E8884 = 1;
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
      sub_B5D69C(0LL, endAct);
    Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
               svtVoices,
               (const MethodInfo_2F31E68 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    v14 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v14,
      (System_Collections_Generic_IEnumerable_T__o *)Values,
      (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    QuestAfterAction__LoadVoice_25170396(
      this,
      (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)v14,
      endAct,
      v15);
  }
}


void __fastcall QuestAfterAction__LoadVoice_25170396(
        QuestAfterAction_o *this,
        System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *svtVInfos,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  System_Action_o *v4; // x19
  System_Int32_array **v5; // x21
  System_Int32_array **v7; // x19
  __int64 v8; // x8
  CommonUI_o *Instance; // x0
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
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  __int64 v31; // x27
  __int64 v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Int32_array ***v39; // x28
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Action_o **v46; // x20
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Int32_array **v53; // x19
  __int64 v54; // x8
  System_String_o *VoiceAssetName_31472176; // x19
  SoundManager_o *v56; // x20
  System_Action_o *v57; // x21

  v4 = endAct;
  v5 = (System_Int32_array **)svtVInfos;
  while ( 1 )
  {
    if ( (byte_42E8885 & 1) == 0 )
    {
      sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)svtVInfos, (_DWORD)endAct, method);
      sub_B5D5C4(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___, v10, v11, v12);
      sub_B5D5C4(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__, v13, v14, v15);
      sub_B5D5C4(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__, v16, v17, v18);
      sub_B5D5C4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v19, v20, v21);
      sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v22, v23, v24);
      sub_B5D5C4(&Method_QuestAfterAction___c__DisplayClass67_0__LoadVoice_b__0__, v25, v26, v27);
      sub_B5D5C4(&QuestAfterAction___c__DisplayClass67_0_TypeInfo, v28, v29, v30);
      byte_42E8885 = 1;
    }
    v31 = sub_B5D694(QuestAfterAction___c__DisplayClass67_0_TypeInfo);
    QuestAfterAction___c__DisplayClass67_0___ctor((QuestAfterAction___c__DisplayClass67_0_o *)v31, 0LL);
    if ( !v31 )
      goto LABEL_22;
    *(_QWORD *)(v31 + 16) = v5;
    v39 = (System_Int32_array ***)(v31 + 16);
    sub_B5D560((BattleServantConfConponent_o *)(v31 + 16), v5, v33, v34, v35, v36, v37, v38);
    *(_QWORD *)(v31 + 24) = this;
    sub_B5D560((BattleServantConfConponent_o *)(v31 + 24), (System_Int32_array **)this, v40, v41, v42, v43, v44, v45);
    *(_QWORD *)(v31 + 32) = v4;
    v46 = (System_Action_o **)(v31 + 32);
    sub_B5D560((BattleServantConfConponent_o *)(v31 + 32), (System_Int32_array **)v4, v47, v48, v49, v50, v51, v52);
    Instance = (CommonUI_o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                               *(System_Collections_Generic_IEnumerable_TSource__o **)(v31 + 16),
                               (const MethodInfo_1C98BF4 *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, 0, 0LL);
        ActionExtensions__Call(*v46, 0LL);
        return;
      }
LABEL_22:
      sub_B5D69C(Instance, v32);
    }
    v7 = *v39;
    if ( !*v39 )
      goto LABEL_22;
    if ( !*((_DWORD *)v7 + 6) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v8 = *(_QWORD *)&v7[2]->m_Items[1];
    if ( !v8 )
      goto LABEL_22;
    if ( *(_DWORD *)(v8 + 16) )
      break;
    Instance = (CommonUI_o *)*v39;
    if ( !*v39 )
      goto LABEL_22;
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)Instance,
      0,
      (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    v5 = *v39;
    v4 = *v46;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v53 = *v39;
  if ( !*v39 )
    goto LABEL_22;
  if ( !*((_DWORD *)v53 + 6) )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
  v54 = *(_QWORD *)&v53[2]->m_Items[1];
  if ( !v54 )
    goto LABEL_22;
  VoiceAssetName_31472176 = ServantVoiceEntity__getVoiceAssetName_31472176(*(_DWORD *)(v54 + 16), 0LL);
  v56 = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v57 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v57, (Il2CppObject *)v31, Method_QuestAfterAction___c__DisplayClass67_0__LoadVoice_b__0__, 0LL);
  if ( !v56 )
    goto LABEL_22;
  SoundManager__LoadAudioAssetStorage(v56, VoiceAssetName_31472176, v57, 1, 0LL);
}


System_String_o *__fastcall QuestAfterAction__MapObjName(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3

  if ( (byte_42E8893 & 1) == 0 )
  {
    sub_B5D5C4(&SrcSpotBasePrefab_TypeInfo, comType, id, method);
    sub_B5D5C4(&StringLiteral_1/*""*/, v6, v7, v8);
    byte_42E8893 = 1;
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
      return (System_String_o *)StringLiteral_1/*""*/;
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
  int v2; // w2
  __int64 v3; // x3
  System_Action_o *endAct; // x0
  __int64 v6; // x1
  UnityEngine_Collider_o *screenCollider; // x0
  const MethodInfo *v8; // x1

  if ( (byte_42E888D & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Clear__, (_DWORD)method, v2, v3);
    byte_42E888D = 1;
  }
  endAct = this->fields.endAct;
  this->fields.isKeepingMainStateButFinished = 1;
  *(_QWORD *)&this->fields.ActionMapTargetType = -1LL;
  ActionExtensions__Call(endAct, 0LL);
  screenCollider = (UnityEngine_Collider_o *)this->fields.screenCollider;
  if ( !screenCollider
    || (UnityEngine_Collider__set_enabled(screenCollider, 0, 0LL),
        (screenCollider = (UnityEngine_Collider_o *)this->fields.invalidMapGimmickIdList) == 0LL) )
  {
    sub_B5D69C(screenCollider, v6);
  }
  System_Collections_Generic_List_int___Clear(
    (System_Collections_Generic_List_int__o *)screenCollider,
    (const MethodInfo_3084818 *)Method_System_Collections_Generic_List_int__Clear__);
  QuestAfterAction__Init(this, v8);
  this->fields.isKeepingMainStateButFinished = 0;
}


void __fastcall QuestAfterAction__Play(QuestAfterAction_o *this, System_Action_o *endAct, const MethodInfo *method)
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
  __int64 v18; // x20
  MissionNotifyManager_o *v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Action_o *v27; // x21
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  const MethodInfo *v34; // x2

  if ( (byte_42E8889 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)endAct, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_QuestAfterAction___c__DisplayClass71_0__Play_b__0__, v12, v13, v14);
    sub_B5D5C4(&QuestAfterAction___c__DisplayClass71_0_TypeInfo, v15, v16, v17);
    byte_42E8889 = 1;
  }
  v18 = sub_B5D694(QuestAfterAction___c__DisplayClass71_0_TypeInfo);
  QuestAfterAction___c__DisplayClass71_0___ctor((QuestAfterAction___c__DisplayClass71_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_11;
  *(_QWORD *)(v18 + 16) = endAct;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)endAct, v21, v22, v23, v24, v25, v26);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v19 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v19 )
LABEL_11:
    sub_B5D69C(v19, v20);
  MissionNotifyManager__StartPause(v19, 0LL);
  v27 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)v18, Method_QuestAfterAction___c__DisplayClass71_0__Play_b__0__, 0LL);
  this->fields.endAct = v27;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endAct,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  if ( this->fields.commandBuf )
    QuestAfterAction__SetState(this, 1, v34);
  else
    ActionExtensions__Call(this->fields.endAct, 0LL);
}


void __fastcall QuestAfterAction__PlaySpecifiedAction(
        QuestAfterAction_o *this,
        System_String_array *actionVals,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
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
  __int64 v22; // x20
  MissionNotifyManager_o *v23; // x0
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  const MethodInfo *v37; // x1
  struct QuestAfterAction_Command_array *CommandBuf; // x0
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  System_Action_o *v45; // x21
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Action_o *v52; // x21
  const MethodInfo *v53; // x2
  System_Collections_IEnumerator_o *v54; // x1

  if ( (byte_42E888A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)actionVals, (_DWORD)finishCallback, method);
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7, v8, v9);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_QuestAfterAction___c__DisplayClass72_0__PlaySpecifiedAction_b__0__, v13, v14, v15);
    sub_B5D5C4(&Method_QuestAfterAction___c__DisplayClass72_0__PlaySpecifiedAction_b__1__, v16, v17, v18);
    sub_B5D5C4(&QuestAfterAction___c__DisplayClass72_0_TypeInfo, v19, v20, v21);
    byte_42E888A = 1;
  }
  v22 = sub_B5D694(QuestAfterAction___c__DisplayClass72_0_TypeInfo);
  QuestAfterAction___c__DisplayClass72_0___ctor((QuestAfterAction___c__DisplayClass72_0_o *)v22, 0LL);
  if ( !v22 )
    goto LABEL_11;
  *(_QWORD *)(v22 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v22 + 16), (System_Int32_array **)this, v25, v26, v27, v28, v29, v30);
  *(_QWORD *)(v22 + 24) = finishCallback;
  sub_B5D560(
    (BattleServantConfConponent_o *)(v22 + 24),
    (System_Int32_array **)finishCallback,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v22 + 24), 0LL);
    return;
  }
  CommandBuf = QuestAfterAction__GenerateCommandBuf(actionVals, v37);
  this->fields.temporaryCommandBuf = CommandBuf;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.temporaryCommandBuf,
    (System_Int32_array **)CommandBuf,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v23 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v23 )
LABEL_11:
    sub_B5D69C(v23, v24);
  MissionNotifyManager__StartPause(v23, 0LL);
  v45 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v45,
    (Il2CppObject *)v22,
    Method_QuestAfterAction___c__DisplayClass72_0__PlaySpecifiedAction_b__0__,
    0LL);
  this->fields.endAct = v45;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.endAct,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v52 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v52,
    (Il2CppObject *)v22,
    Method_QuestAfterAction___c__DisplayClass72_0__PlaySpecifiedAction_b__1__,
    0LL);
  v54 = QuestAfterAction__WaitWhileMainStateFinished(this, v52, v53);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, v54, 0LL);
}


void __fastcall QuestAfterAction__PlaySpecifiedActionInstantly(
        QuestAfterAction_o *this,
        QuestAfterAction_Command_array *commandArray,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Action_o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x2

  if ( (byte_42E888C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)commandArray, (_DWORD)method, v3);
    sub_B5D5C4(&Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__75_0__, v6, v7, v8);
    byte_42E888C = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)commandArray, 0LL) )
  {
    this->fields.temporaryCommandBuf = commandArray;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.temporaryCommandBuf,
      (System_Int32_array **)commandArray,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    v15 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v15,
      (Il2CppObject *)this,
      Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__75_0__,
      0LL);
    this->fields.endAct = v15;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.endAct,
      (System_Int32_array **)v15,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    QuestAfterAction__SetState(this, 3, v22);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestAfterAction__RequestMapChange(
        QuestAfterAction_o *this,
        int32_t cType,
        int32_t cTarget,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  __int64 v10; // x1
  int v11; // w2
  __int64 v12; // x3
  TerminalPramsManager_c *v13; // x0
  ScrTerminalMap_o *v14; // x0
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_42E8892 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, cType, cTarget, method);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v7, v8, v9);
    byte_42E8892 = 1;
  }
  this->fields.ActionMapTargetType = cType;
  this->fields.ActionMapTargetId = cTarget;
  QuestAfterAction__SetState(this, 0, *(const MethodInfo **)&cTarget);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B29 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v10, v11, v12);
    byte_42E4B29 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  v13->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v10, v11, v12);
    byte_42E4B1E = 1;
  }
  v14 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v14 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v14->fields.pfbLineP->klass;
  if ( !klass || (v14 = *(ScrTerminalMap_o **)&klass->_2.static_fields_size) == 0LL )
    sub_B5D69C(v14, v10);
  ScrTerminalMap__RequestMapChange(v14, 0, -1, -1, 0LL);
}


void __fastcall QuestAfterAction__SetActionMap(
        QuestAfterAction_o *this,
        QuestAfterAction_Command_o *com,
        const MethodInfo *method)
{
  __int64 v3; // x3
  QuestAfterAction_Command_o *v4; // x20
  QuestAfterAction_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int id; // w8
  int v16; // w8
  unsigned int v17; // w8
  unsigned int v18; // w8
  System_String_o *v19; // x20
  Il2CppClass *v20; // x0
  int invalidMapGimmickIdList; // w8
  System_String_o *BlankEarthQuestAfterAction_k__BackingField; // x0
  int32_t SpotId; // w0
  System_String_o *param; // x20
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_o *v26; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v27; // x20
  __int64 v28; // x0

  v4 = com;
  v5 = this;
  if ( (byte_42E8882 & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)com, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v9, v10, v11);
    this = (QuestAfterAction_o *)sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12, v13, v14);
    byte_42E8882 = 1;
  }
  if ( v5->fields.ActionMapTargetType == -1 )
  {
    if ( !v4 )
      goto LABEL_46;
    id = v4->fields.id;
    if ( id > 307 )
    {
      if ( id > 500 )
      {
        if ( id == 510 )
        {
          v5->fields.ActionMapTargetType = 0;
          param = v4->fields.param;
          this = (QuestAfterAction_o *)sub_B5D5DC(char___TypeInfo, 1LL);
          if ( this )
          {
            com = (QuestAfterAction_Command_o *)this;
            if ( !LODWORD(this->fields.invalidMapGimmickIdList) )
              goto LABEL_47;
            LOWORD(this->fields._TitleInfoCtrlCallback_k__BackingField) = 44;
            if ( param )
            {
              this = (QuestAfterAction_o *)System_String__Split(param, (System_Char_array *)this, 0LL);
              if ( this )
              {
                invalidMapGimmickIdList = (int)this->fields.invalidMapGimmickIdList;
                if ( invalidMapGimmickIdList >= 2 )
                {
                  BlankEarthQuestAfterAction_k__BackingField = (System_String_o *)this->fields._BlankEarthQuestAfterAction_k__BackingField;
                  goto LABEL_31;
                }
                goto LABEL_29;
              }
            }
          }
LABEL_46:
          sub_B5D69C(this, com);
        }
        if ( id == 550 )
        {
          v16 = 3;
LABEL_23:
          v5->fields.ActionMapTargetType = v16;
          v19 = v4->fields.param;
          v20 = char___TypeInfo;
          goto LABEL_24;
        }
LABEL_45:
        SpotId = -1;
        v5->fields.ActionMapTargetType = -1;
        goto LABEL_32;
      }
      if ( (unsigned int)(id - 400) > 9 )
      {
        if ( id == 500 )
        {
          v5->fields.ActionMapTargetType = 0;
          this = (QuestAfterAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
            v26 = v4->fields.param;
            v27 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
            this = (QuestAfterAction_o *)System_Int32__Parse(v26, 0LL);
            if ( v27 )
            {
              this = (QuestAfterAction_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             v27,
                                             (int32_t)this,
                                             (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
              if ( this )
              {
                SpotId = QuestEntity__getSpotId((QuestEntity_o *)this, 0LL);
                goto LABEL_32;
              }
            }
          }
          goto LABEL_46;
        }
        goto LABEL_45;
      }
LABEL_18:
      v16 = 2;
      goto LABEL_23;
    }
    if ( id <= 113 )
    {
      v18 = id - 100;
      if ( v18 > 0xD || ((1 << v18) & 0x3C1F) == 0 )
        goto LABEL_45;
    }
    else
    {
      if ( (unsigned int)(id - 200) < 6 )
        goto LABEL_22;
      v17 = id - 300;
      if ( v17 > 7 )
        goto LABEL_45;
      if ( ((1 << v17) & 0x21) == 0 )
      {
        if ( ((1 << v17) & 0x42) == 0 )
        {
          if ( ((1 << v17) & 0x84) == 0 )
            goto LABEL_45;
          goto LABEL_18;
        }
LABEL_22:
        v16 = 1;
        goto LABEL_23;
      }
    }
    v5->fields.ActionMapTargetType = 0;
    v19 = v4->fields.param;
    v20 = char___TypeInfo;
LABEL_24:
    this = (QuestAfterAction_o *)sub_B5D5DC(v20, 1LL);
    if ( this )
    {
      com = (QuestAfterAction_Command_o *)this;
      if ( !LODWORD(this->fields.invalidMapGimmickIdList) )
        goto LABEL_47;
      LOWORD(this->fields._TitleInfoCtrlCallback_k__BackingField) = 44;
      if ( v19 )
      {
        this = (QuestAfterAction_o *)System_String__Split(v19, (System_Char_array *)this, 0LL);
        if ( this )
        {
          invalidMapGimmickIdList = (int)this->fields.invalidMapGimmickIdList;
LABEL_29:
          if ( invalidMapGimmickIdList )
          {
            BlankEarthQuestAfterAction_k__BackingField = (System_String_o *)this->fields._TitleInfoCtrlCallback_k__BackingField;
LABEL_31:
            SpotId = System_Int32__Parse(BlankEarthQuestAfterAction_k__BackingField, 0LL);
LABEL_32:
            v5->fields.ActionMapTargetId = SpotId;
            return;
          }
LABEL_47:
          v28 = sub_B5D6C8(this);
          sub_B5D668(v28, 0LL);
        }
      }
    }
    goto LABEL_46;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestAfterAction__SetState(QuestAfterAction_o *this, int32_t state, const MethodInfo *method)
{
  __int64 v3; // x3
  struct CStateManager_QuestAfterAction__o *fsm; // x0

  if ( (byte_42E8890 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_QuestAfterAction__setState__, state, (_DWORD)method, v3);
    byte_42E8890 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B5D69C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
    state,
    (const MethodInfo_2BB27A0 *)Method_CStateManager_QuestAfterAction__setState__);
}


void __fastcall QuestAfterAction__SkipToNextAction(QuestAfterAction_o *this, const MethodInfo *method)
{
  this->fields.isSkippedNext = 1;
}


void __fastcall QuestAfterAction__Update(QuestAfterAction_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct CStateManager_QuestAfterAction__o *fsm; // x0

  if ( (byte_42E8888 & 1) == 0 )
  {
    sub_B5D5C4(&Method_CStateManager_QuestAfterAction__update__, (_DWORD)method, v2, v3);
    byte_42E8888 = 1;
  }
  fsm = this->fields.fsm;
  if ( fsm )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      (const MethodInfo_2BB2778 *)Method_CStateManager_QuestAfterAction__update__);
}


System_Collections_IEnumerator_o *__fastcall QuestAfterAction__WaitWhileMainStateFinished(
        QuestAfterAction_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  if ( (byte_42E888E & 1) == 0 )
  {
    sub_B5D5C4(&QuestAfterAction__WaitWhileMainStateFinished_d__78_TypeInfo, (_DWORD)action, (_DWORD)method, v3);
    byte_42E888E = 1;
  }
  v6 = sub_B5D694(QuestAfterAction__WaitWhileMainStateFinished_d__78_TypeInfo);
  QuestAfterAction__WaitWhileMainStateFinished_d__78___ctor(
    (QuestAfterAction__WaitWhileMainStateFinished_d__78_o *)v6,
    0,
    0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  *(_QWORD *)(v6 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v6 + 40) = action;
  sub_B5D560((BattleServantConfConponent_o *)(v6 + 40), (System_Int32_array **)action, v15, v16, v17, v18, v19, v20);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall QuestAfterAction___PlaySpecifiedActionInstantly_b__75_0(
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
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.endAct, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.temporaryCommandBuf = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.temporaryCommandBuf, 0LL, v9, v10, v11, v12, v13, v14);
  QuestAfterAction__SetState(this, 0, v15);
}


System_Int32_array *__fastcall QuestAfterAction__getMapGmkOffIdList(QuestAfterAction_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Collections_Generic_List_int__o *invalidMapGimmickIdList; // x0

  if ( (byte_42E8881 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, (_DWORD)method, v2, v3);
    byte_42E8881 = 1;
  }
  invalidMapGimmickIdList = this->fields.invalidMapGimmickIdList;
  if ( !invalidMapGimmickIdList )
    sub_B5D69C(0LL, method);
  return System_Collections_Generic_List_int___ToArray(
           invalidMapGimmickIdList,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *svtVoices; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x21
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v31; // x20
  _BOOL8 v32; // x0
  __int64 v33; // x1
  System_String_o *VoiceAssetName_31472176; // x20
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E8886 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__, v11, v12, v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__get_Current__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__, v20, v21, v22);
    sub_B5D5C4(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo, v23, v24, v25);
    sub_B5D5C4(&SoundManager_TypeInfo, v26, v27, v28);
    byte_42E8886 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
    goto LABEL_15;
  Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
             svtVoices,
             (const MethodInfo_2F31E68 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
  v31 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v31,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
  if ( !v31 )
    goto LABEL_15;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v35,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v31,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
  while ( 1 )
  {
    v32 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v35,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__);
    if ( !v32 )
      break;
    if ( !v35.fields.current )
      sub_B5D69C(v32, v33);
    VoiceAssetName_31472176 = ServantVoiceEntity__getVoiceAssetName_31472176((int32_t)v35.fields.current[1].klass, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__releaseAudioAssetStorage(VoiceAssetName_31472176, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v35,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
LABEL_15:
    sub_B5D69C(svtVoices, method);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)svtVoices,
    (const MethodInfo_2F322A0 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
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
  System_String_o *param; // x21
  __int64 Instance; // x0
  __int64 v38; // x1
  System_Collections_Generic_IEnumerable_T__o *v39; // x22
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v41; // x21
  System_Random_o *v42; // x22
  __int64 size; // x1
  unsigned int v44; // w0
  int32_t v45; // w24
  System_String_o *v46; // x25
  int v47; // w2
  __int64 v48; // x3
  int v49; // w8
  __int64 v50; // x25
  System_String_o *v51; // x25
  __int64 v52; // x8
  __int64 v53; // x8
  int32_t v54; // w1
  System_String_o *v55; // x21
  int v56; // w8
  __int64 v57; // x21
  __int64 v59; // x0
  int32_t result; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42E5ADA & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)svtId, (_DWORD)method, v3);
    sub_B5D5C4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__RemoveAt__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor___68749856, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Item__, v18, v19, v20);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v21, v22, v23);
    sub_B5D5C4(&System_Random_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v27, v28, v29);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, v33, v34, v35);
    byte_42E5ADA = 1;
  }
  result = 0;
  *svtId = 0;
  if ( this->fields.id != 800 )
    return 0LL;
  param = this->fields.param;
  Instance = sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_53;
  v38 = Instance;
  if ( !*(_DWORD *)(Instance + 24) )
    goto LABEL_54;
  *(_WORD *)(Instance + 32) = 44;
  if ( !param )
    goto LABEL_53;
  Instance = (__int64)System_String__Split(param, (System_Char_array *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_53;
  v39 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
  if ( *(int *)(Instance + 24) > 1 )
  {
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
      v41 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
        v41,
        v39,
        (const MethodInfo_30564F4 *)Method_System_Collections_Generic_List_string___ctor___68749856);
      result = 0;
      v42 = (System_Random_o *)sub_B5D694(System_Random_TypeInfo);
      System_Random___ctor(v42, 0LL);
      if ( v41 )
      {
        if ( v42 )
        {
          size = (unsigned int)v41->fields._size;
          while ( 1 )
          {
            v44 = ((__int64 (__fastcall *)(System_Random_o *, __int64, Il2CppMethodPointer))v42->klass->vtable._7_Next.method)(
                    v42,
                    size,
                    v42->klass->vtable._8_NextDouble.methodPtr);
            result = 0;
            v45 = v44;
            if ( v41->fields._size <= v44 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
            v46 = (System_String_o *)v41->fields._items->m_Items[v44];
            Instance = sub_B5D5DC(char___TypeInfo, 1LL);
            if ( !Instance )
              break;
            v38 = Instance;
            if ( !*(_DWORD *)(Instance + 24) )
              goto LABEL_54;
            *(_WORD *)(Instance + 32) = 95;
            if ( !v46 )
              break;
            Instance = (__int64)System_String__Split(v46, (System_Char_array *)Instance, 0LL);
            if ( !Instance )
              break;
            v49 = *(_DWORD *)(Instance + 24);
            v50 = Instance;
            if ( v49 == 3 )
            {
              Instance = System_Int32__TryParse(*(System_String_o **)(Instance + 32), &result, 0LL);
              if ( *(_DWORD *)(v50 + 24) < 3u )
                goto LABEL_54;
              Instance = (__int64)System_String__Concat_44580072(
                                    *(System_String_o **)(v50 + 40),
                                    (System_String_o *)StringLiteral_16096/*"_"*/,
                                    *(System_String_o **)(v50 + 48),
                                    0LL);
              if ( !MasterData_WarQuestSelectionMaster )
                break;
              v54 = result;
              v51 = (System_String_o *)Instance;
            }
            else
            {
              if ( v49 != 2 )
                goto LABEL_39;
              result = 0;
              if ( v41->fields._size <= (unsigned int)v45 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
              v51 = (System_String_o *)v41->fields._items->m_Items[v45];
              if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              }
              if ( !byte_42E4B1E )
              {
                sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v38, v47, v48);
                byte_42E4B1E = 1;
              }
              Instance = (__int64)TerminalSceneComponent_TypeInfo;
              if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                Instance = (__int64)TerminalSceneComponent_TypeInfo;
              }
              v52 = **(_QWORD **)(Instance + 184);
              if ( !v52 )
                break;
              v53 = *(_QWORD *)(v52 + 448);
              if ( !v53 )
                break;
              Instance = ServantVoiceEntity__getSvtIdfromVoiceAssetName(*(System_String_o **)(v53 + 40), 0LL);
              if ( !MasterData_WarQuestSelectionMaster )
                break;
              v54 = Instance;
            }
            if ( VoicePlayCondMaster__isVoicePlay(MasterData_WarQuestSelectionMaster, v54, v51, 0LL, -1LL, -1, 0LL) )
            {
              *svtId = result;
              return v51;
            }
LABEL_39:
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              (System_Collections_Generic_List_XWeaponTrail_Element__o *)v41,
              v45,
              (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_string__RemoveAt__);
            size = (unsigned int)v41->fields._size;
            if ( !(_DWORD)size )
            {
              v51 = 0LL;
              *svtId = 0;
              return v51;
            }
          }
        }
      }
    }
LABEL_53:
    sub_B5D69C(Instance, v38);
  }
  v55 = this->fields.param;
  Instance = sub_B5D5DC(char___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_53;
  v38 = Instance;
  if ( !*(_DWORD *)(Instance + 24) )
  {
LABEL_54:
    v59 = sub_B5D6C8(Instance);
    sub_B5D668(v59, 0LL);
  }
  *(_WORD *)(Instance + 32) = 95;
  if ( !v55 )
    goto LABEL_53;
  Instance = (__int64)System_String__Split(v55, (System_Char_array *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_53;
  v56 = *(_DWORD *)(Instance + 24);
  v57 = Instance;
  if ( v56 == 3 )
  {
    Instance = System_Int32__TryParse(*(System_String_o **)(Instance + 32), svtId, 0LL);
    if ( *(_DWORD *)(v57 + 24) >= 3u )
      return System_String__Concat_44580072(
               *(System_String_o **)(v57 + 40),
               (System_String_o *)StringLiteral_16096/*"_"*/,
               *(System_String_o **)(v57 + 48),
               0LL);
    goto LABEL_54;
  }
  if ( v56 != 2 )
    return 0LL;
  return this->fields.param;
}


System_String_o *__fastcall QuestAfterAction_Command__GetBgmName(
        QuestAfterAction_Command_o *this,
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
  System_String_o *v11; // x0
  bool v12; // w8
  DataManager_o *Instance; // x0
  __int64 v14; // x1
  WarEntity_o *v15; // [xsp+0h] [xbp-20h] BYREF
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E5ADD & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_BgmMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E5ADD = 1;
  }
  result = 0;
  v15 = 0LL;
  v11 = 0LL;
  if ( this->fields.id == 851 )
  {
    v12 = System_Int32__TryParse(this->fields.param, &result, 0LL);
    v11 = 0LL;
    if ( v12 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_12;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_BgmMaster___);
      if ( !Instance )
        goto LABEL_12;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    &v15,
                                    result,
                                    (const MethodInfo_23FAE6C *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( v15 )
          return v15->fields.age;
LABEL_12:
        sub_B5D69C(Instance, v14);
      }
      return 0LL;
    }
  }
  return v11;
}


int32_t __fastcall QuestAfterAction_Command__GetSvtId(
        QuestAfterAction_Command_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int32_t v6; // w0
  System_String_array *v7; // x0
  System_String_array *v8; // x1
  __int64 v9; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E5ADB & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)str, (_DWORD)method, v3);
    byte_42E5ADB = 1;
  }
  result = 0;
  v6 = 0;
  if ( this->fields.id == 800 )
  {
    v7 = (System_String_array *)sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !v7 )
      goto LABEL_14;
    v8 = v7;
    if ( !v7->max_length )
    {
      v9 = sub_B5D6C8(v7);
      sub_B5D668(v9, 0LL);
    }
    LOWORD(v7->m_Items[0]) = 95;
    if ( !str || (v7 = System_String__Split(str, (System_Char_array *)v7, 0LL)) == 0LL )
LABEL_14:
      sub_B5D69C(v7, v8);
    if ( v7->max_length == 3 )
    {
      result = 0;
      if ( System_Int32__TryParse(v7->m_Items[0], &result, 0LL) )
        return result;
      else
        return 0;
    }
    else
    {
      return 0;
    }
  }
  return v6;
}


System_String_o *__fastcall QuestAfterAction_Command__GetVoiceId(
        QuestAfterAction_Command_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v4; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_String_array *v9; // x0
  System_String_array *v10; // x1
  il2cpp_array_size_t max_length; // w8
  __int64 v13; // x0

  v4 = str;
  if ( (byte_42E5ADC & 1) == 0 )
  {
    sub_B5D5C4(&char___TypeInfo, (_DWORD)str, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_16096/*"_"*/, v6, v7, v8);
    byte_42E5ADC = 1;
  }
  if ( this->fields.id == 800 )
  {
    v9 = (System_String_array *)sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !v9 )
      goto LABEL_13;
    v10 = v9;
    if ( !v9->max_length )
    {
      v13 = sub_B5D6C8(v9);
      sub_B5D668(v13, 0LL);
    }
    LOWORD(v9->m_Items[0]) = 95;
    if ( !v4 || (v9 = System_String__Split(v4, (System_Char_array *)v9, 0LL)) == 0LL )
LABEL_13:
      sub_B5D69C(v9, v10);
    max_length = v9->max_length;
    if ( max_length == 2 )
      return v4;
    if ( max_length == 3 )
      return System_String__Concat_44580072(v9->m_Items[1], (System_String_o *)StringLiteral_16096/*"_"*/, v9->m_Items[2], 0LL);
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
    sub_B5D69C(this, method);
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
  UnityEngine_Collider_o *screenCollider; // x0
  __int64 v5; // x1
  struct QuestAfterAction_o *that; // x8

  screenCollider = (UnityEngine_Collider_o *)((__int64 (__fastcall *)(QuestAfterAction_StateAdditionalBase_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_CommandIndex.method)(
                                               this,
                                               0LL,
                                               this->klass->vtable._13_UpdateAnim.methodPtr);
  that = this->fields.that;
  if ( !that
    || (screenCollider = (UnityEngine_Collider_o *)that->fields.screenCollider) == 0LL
    || (UnityEngine_Collider__set_enabled(screenCollider, 0, 0LL),
        (screenCollider = (UnityEngine_Collider_o *)this->fields.that) == 0LL) )
  {
    sub_B5D69C(screenCollider, v5);
  }
  QuestAfterAction__CallEndAct((QuestAfterAction_o *)screenCollider, 0LL);
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
    sub_B5D69C(this, 0LL);
  return QuestAfterAction__IsNoWaitCommand(cmd->fields.id, 0LL);
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
  __int64 v7; // x1

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
    sub_B5D69C(0LL, v7);
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
  __int64 v7; // x1

  klass = this->klass;
  this->fields.IsAnimDoing = 0;
  v6 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer, const MethodInfo *))klass->vtable._10_get_CommandBuf.method)(
         this,
         klass->vtable._11_get_CommandIndex.methodPtr,
         method);
  if ( !v6 )
    sub_B5D69C(0LL, v7);
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
  int v2; // w2
  __int64 v3; // x3
  QuestAfterAction_StateMain_o *v4; // x19
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
  struct QuestAfterAction_o *that; // x8
  __int64 v21; // x8
  QuestAfterAction_StateMain_o *v22; // x20
  unsigned __int64 v23; // x22
  struct QuestAfterAction_o *v24; // x8
  int32_t v25; // w21
  srcLineSprite_o *MapComponent_srcLineSprite; // x21
  struct UIAtlas_o *mcAtlasP; // x8
  __int64 v28; // x0

  v4 = this;
  if ( (byte_42E5AE2 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Remove__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, v14, v15, v16);
    this = (QuestAfterAction_StateMain_o *)sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v17, v18, v19);
    byte_42E5AE2 = 1;
  }
  that = v4->fields.that;
  if ( !that )
    goto LABEL_26;
  this = (QuestAfterAction_StateMain_o *)that->fields.invalidMapGimmickIdList;
  if ( !this )
    goto LABEL_26;
  this = (QuestAfterAction_StateMain_o *)System_Collections_Generic_List_int___ToArray(
                                           (System_Collections_Generic_List_int__o *)this,
                                           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !this )
    goto LABEL_26;
  v21 = *(_QWORD *)&this->fields.IsAnimDoing;
  v22 = this;
  if ( (int)v21 >= 1 )
  {
    v23 = 0LL;
    while ( 1 )
    {
      if ( v23 >= (unsigned int)v21 )
      {
        v28 = sub_B5D6C8(this);
        sub_B5D668(v28, 0LL);
      }
      v24 = v4->fields.that;
      if ( !v24 )
        break;
      this = (QuestAfterAction_StateMain_o *)v24->fields.invalidMapGimmickIdList;
      if ( !this )
        break;
      v25 = *((_DWORD *)&v22->fields.waitTime + v23);
      System_Collections_Generic_List_int___Remove(
        (System_Collections_Generic_List_int__o *)this,
        v25,
        (const MethodInfo_3085D88 *)Method_System_Collections_Generic_List_int__Remove__);
      this = (QuestAfterAction_StateMain_o *)v4->fields.that;
      if ( !this )
        break;
      MapComponent_srcLineSprite = QuestAfterAction__GetMapComponent_srcLineSprite_(
                                     (QuestAfterAction_o *)this,
                                     2,
                                     v25,
                                     v4,
                                     (const MethodInfo_1E68CF8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      this = (QuestAfterAction_StateMain_o *)UnityEngine_Object__op_Inequality(
                                               (UnityEngine_Object_o *)MapComponent_srcLineSprite,
                                               0LL,
                                               0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
        }
        this = (QuestAfterAction_StateMain_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapComponent_srcLineSprite || !this )
          break;
        this = (QuestAfterAction_StateMain_o *)QuestTree__CheckMapGimmickCond_22302164(
                                                 (QuestTree_o *)this,
                                                 (MapControl_MapGimmickInfo_o *)MapComponent_srcLineSprite->fields.mcAtlasP,
                                                 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          mcAtlasP = MapComponent_srcLineSprite->fields.mcAtlasP;
          if ( !mcAtlasP )
            break;
          mcAtlasP->fields.m_CachedPtr = 1;
          MapGimmickComponent__SetDispAnim((MapGimmickComponent_o *)MapComponent_srcLineSprite, 1, 0LL);
        }
      }
      LODWORD(v21) = *(_DWORD *)&v22->fields.IsAnimDoing;
      if ( (__int64)++v23 >= (int)v21 )
        return;
    }
LABEL_26:
    sub_B5D69C(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestAfterAction_StateMain__UpdateAnim(
        QuestAfterAction_StateMain_o *this,
        QuestAfterAction_o *that,
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
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  int v60; // w1
  int v61; // w2
  __int64 v62; // x3
  int v63; // w1
  int v64; // w2
  __int64 v65; // x3
  int v66; // w1
  int v67; // w2
  __int64 v68; // x3
  int v69; // w1
  int v70; // w2
  __int64 v71; // x3
  int v72; // w1
  int v73; // w2
  __int64 v74; // x3
  int v75; // w1
  int v76; // w2
  __int64 v77; // x3
  int v78; // w1
  int v79; // w2
  __int64 v80; // x3
  int v81; // w1
  int v82; // w2
  __int64 v83; // x3
  int v84; // w1
  int v85; // w2
  __int64 v86; // x3
  int v87; // w1
  int v88; // w2
  __int64 v89; // x3
  int v90; // w1
  int v91; // w2
  __int64 v92; // x3
  int v93; // w1
  int v94; // w2
  __int64 v95; // x3
  int v96; // w1
  int v97; // w2
  __int64 v98; // x3
  int v99; // w1
  int v100; // w2
  __int64 v101; // x3
  int v102; // w1
  int v103; // w2
  __int64 v104; // x3
  int v105; // w1
  int v106; // w2
  __int64 v107; // x3
  int v108; // w1
  int v109; // w2
  __int64 v110; // x3
  int v111; // w1
  int v112; // w2
  __int64 v113; // x3
  int v114; // w1
  int v115; // w2
  __int64 v116; // x3
  int v117; // w1
  int v118; // w2
  __int64 v119; // x3
  int v120; // w1
  int v121; // w2
  __int64 v122; // x3
  int v123; // w1
  int v124; // w2
  __int64 v125; // x3
  int v126; // w1
  int v127; // w2
  __int64 v128; // x3
  int v129; // w1
  int v130; // w2
  __int64 v131; // x3
  int v132; // w1
  int v133; // w2
  __int64 v134; // x3
  int v135; // w1
  int v136; // w2
  __int64 v137; // x3
  int v138; // w1
  int v139; // w2
  __int64 v140; // x3
  int v141; // w1
  int v142; // w2
  __int64 v143; // x3
  int v144; // w1
  int v145; // w2
  __int64 v146; // x3
  int v147; // w1
  int v148; // w2
  __int64 v149; // x3
  int v150; // w1
  int v151; // w2
  __int64 v152; // x3
  int v153; // w1
  int v154; // w2
  __int64 v155; // x3
  int v156; // w1
  int v157; // w2
  __int64 v158; // x3
  int v159; // w1
  int v160; // w2
  __int64 v161; // x3
  int v162; // w1
  int v163; // w2
  __int64 v164; // x3
  int v165; // w1
  int v166; // w2
  __int64 v167; // x3
  int v168; // w1
  int v169; // w2
  __int64 v170; // x3
  int v171; // w1
  int v172; // w2
  __int64 v173; // x3
  int v174; // w1
  int v175; // w2
  __int64 v176; // x3
  int v177; // w1
  int v178; // w2
  __int64 v179; // x3
  int v180; // w1
  int v181; // w2
  __int64 v182; // x3
  int v183; // w1
  int v184; // w2
  __int64 v185; // x3
  int v186; // w1
  int v187; // w2
  __int64 v188; // x3
  int v189; // w1
  int v190; // w2
  __int64 v191; // x3
  int v192; // w1
  int v193; // w2
  __int64 v194; // x3
  int v195; // w1
  int v196; // w2
  __int64 v197; // x3
  int v198; // w1
  int v199; // w2
  __int64 v200; // x3
  int v201; // w1
  int v202; // w2
  __int64 v203; // x3
  int v204; // w1
  int v205; // w2
  __int64 v206; // x3
  int v207; // w1
  int v208; // w2
  __int64 v209; // x3
  int v210; // w1
  int v211; // w2
  __int64 v212; // x3
  int v213; // w1
  int v214; // w2
  __int64 v215; // x3
  int v216; // w1
  int v217; // w2
  __int64 v218; // x3
  int v219; // w1
  int v220; // w2
  __int64 v221; // x3
  int v222; // w1
  int v223; // w2
  __int64 v224; // x3
  int v225; // w1
  int v226; // w2
  __int64 v227; // x3
  int v228; // w1
  int v229; // w2
  __int64 v230; // x3
  int v231; // w1
  int v232; // w2
  __int64 v233; // x3
  int v234; // w1
  int v235; // w2
  __int64 v236; // x3
  int v237; // w1
  int v238; // w2
  __int64 v239; // x3
  int v240; // w1
  int v241; // w2
  __int64 v242; // x3
  int v243; // w1
  int v244; // w2
  __int64 v245; // x3
  int v246; // w1
  int v247; // w2
  __int64 v248; // x3
  int v249; // w1
  int v250; // w2
  __int64 v251; // x3
  int v252; // w1
  int v253; // w2
  __int64 v254; // x3
  int v255; // w1
  int v256; // w2
  __int64 v257; // x3
  int v258; // w1
  int v259; // w2
  __int64 v260; // x3
  int v261; // w1
  int v262; // w2
  __int64 v263; // x3
  int v264; // w1
  int v265; // w2
  __int64 v266; // x3
  int v267; // w1
  int v268; // w2
  __int64 v269; // x3
  int v270; // w1
  int v271; // w2
  __int64 v272; // x3
  int v273; // w1
  int v274; // w2
  __int64 v275; // x3
  int v276; // w1
  int v277; // w2
  __int64 v278; // x3
  int v279; // w1
  int v280; // w2
  __int64 v281; // x3
  int v282; // w1
  int v283; // w2
  __int64 v284; // x3
  int v285; // w1
  int v286; // w2
  __int64 v287; // x3
  int v288; // w1
  int v289; // w2
  __int64 v290; // x3
  QuestAfterAction_StateMain___c__DisplayClass16_0_o *v291; // x21
  __int64 updated; // x0
  const MethodInfo *v293; // x1
  QuestAfterAction_o **p_that; // x20
  long double v295; // q0
  QuestAfterAction_StateMain_c *klass; // x8
  __int64 v297; // x22
  QuestAfterAction_Command_o *v298; // x22
  QuestAfterAction_o *v299; // x23
  BlankEarthQuestAfterAction_o *BlankEarthQuestAfterAction_k__BackingField; // x24
  System_Action_o *v301; // x25
  int v302; // w2
  __int64 v303; // x3
  int id; // w8
  float v305; // s0
  int v306; // w1
  int v307; // w2
  __int64 v308; // x3
  float DEFAULT_FADE_TIME; // s8
  AvalonSceneManager_c *v310; // x0
  TerminalSceneComponent_c *v311; // x0
  TerminalSceneComponent_o *mInstance; // x19
  System_Action_o *v313; // x20
  __int64 MyFsmP; // x0
  TerminalSceneComponent_o *v315; // x0
  float v316; // s0
  System_Action_o *v317; // x1
  System_String_o *v318; // x19
  System_String_o *v319; // x20
  System_String_o *v320; // x20
  CommonUI_o *Instance; // x22
  System_Action_o *v322; // x23
  System_String_o *v323; // x23
  __int64 v324; // x8
  __int64 v325; // x24
  float v326; // s8
  System_String_o *v327; // x21
  QuestAfterAction_StateMain___c__DisplayClass16_10_o *v328; // x23
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o **p_CS___8__locals10; // x20
  System_String_o *v330; // x21
  __int64 v331; // x8
  __int64 v332; // x22
  int32_t v333; // w21
  _BOOL4 v334; // w24
  bool v335; // w25
  System_String_o *v336; // x21
  __int64 v337; // x23
  int v338; // w2
  __int64 v339; // x3
  int32_t v340; // w21
  int32_t v341; // w22
  int32_t v342; // w23
  QuestAfterAction_StateMain___c__DisplayClass16_1_o *v343; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals1; // x8
  QuestAfterAction_o *v345; // x21
  UnityEngine_Object_o *spot; // x19
  SrcSpotBasePrefab_o *v347; // x19
  System_Action_o *v348; // x21
  int32_t v349; // w1
  QuestAfterAction_StateMain___c__DisplayClass16_4_o *v350; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals4; // x8
  QuestAfterAction_o *v352; // x21
  UnityEngine_Object_o *roadModel; // x19
  ModelLineComponent_o *v354; // x19
  System_Action_o *v355; // x21
  int32_t v356; // w1
  System_String_o *v357; // x21
  __int64 v358; // x8
  QuestAfterAction_TitleInfoControlCallback_o *TitleInfoCtrlCallback_k__BackingField; // x21
  int32_t v360; // w20
  QuestEntity_o *v361; // x22
  const MethodInfo *v362; // x2
  __int64 v363; // x21
  int v364; // w1
  int v365; // w2
  __int64 v366; // x3
  TerminalPramsManager_c *v367; // x0
  int32_t v368; // w20
  clsQuestCheck_o *v369; // x19
  QuestAfterAction_StateMain___c_c *v370; // x8
  struct QuestAfterAction_StateMain___c_StaticFields *v371; // x9
  System_Action_o *_9__16_33; // x20
  Il2CppObject *v373; // x21
  struct QuestAfterAction_StateMain___c_StaticFields *v374; // x0
  TerminalSceneComponent_c *v375; // x0
  TerminalSceneComponent_o *v376; // x21
  System_String_o *param; // x21
  __int64 v378; // x22
  int v379; // w23
  float v380; // s8
  int32_t v381; // w21
  QuestAfterAction_o *v382; // x8
  int v383; // w2
  __int64 v384; // x3
  __int64 v385; // x8
  __int64 v386; // x8
  __int64 v387; // x8
  System_String_o *v388; // x20
  System_String_o *v389; // x21
  SeManager_c *v390; // x0
  float DEFAULT_VOLUME; // s8
  __int64 v392; // x8
  PlayMakerFSM_o *v393; // x20
  System_String_o *ActiveStateName; // x0
  int v395; // w2
  __int64 v396; // x3
  __int64 v397; // x8
  __int64 v398; // x8
  QuestBoardListViewManager_o *v399; // x21
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x8
  System_Action_o *_9__16_31; // x22
  Il2CppObject *v402; // x23
  struct QuestAfterAction_StateMain___c_StaticFields *v403; // x0
  int v404; // w2
  __int64 v405; // x3
  TerminalSceneComponent_c *v406; // x0
  System_String_o *v407; // x20
  __int64 v408; // x21
  int32_t v409; // w20
  int32_t v410; // w22
  System_String_o *v411; // x23
  __int64 v412; // x8
  __int64 v413; // x24
  System_String_o *v414; // x23
  int v415; // w2
  __int64 v416; // x3
  __int64 v417; // x23
  float v418; // s0
  float v419; // s8
  int v420; // w2
  __int64 v421; // x3
  int32_t v422; // w19
  __int64 v423; // x8
  ScrTerminalMap_o *v424; // x24
  float v425; // s0
  float v426; // s9
  float v427; // s0
  const MethodInfo_234ED3C *v428; // x2
  float v429; // s0
  float v430; // s1
  float v431; // s2
  float v432; // s10
  float v433; // s9
  float v434; // s11
  MapCamera_o *v435; // x20
  System_Action_o *v436; // x22
  System_String_o *v437; // x23
  __int64 v438; // x8
  __int64 v439; // x24
  System_String_o *v440; // x20
  __int64 v441; // x22
  int32_t v442; // w0
  int v443; // w2
  __int64 v444; // x3
  int32_t v445; // w20
  float v446; // s8
  int32_t v447; // w19
  TerminalPramsManager_c *v448; // x0
  __int64 v449; // x8
  int v450; // w1
  int v451; // w2
  __int64 v452; // x3
  TerminalPramsManager_c *v453; // x0
  int v454; // w1
  int v455; // w2
  __int64 v456; // x3
  int32_t v457; // w21
  TerminalPramsManager_c *v458; // x0
  QuestAfterAction_o *v459; // x20
  UnityEngine_Object_o *v460; // x20
  System_String_o *v461; // x19
  System_String_o *v462; // x20
  System_String_o *v463; // x20
  CommonUI_o *v464; // x22
  System_Action_o *v465; // x23
  System_String_o *v466; // x19
  System_String_o *v467; // x20
  System_String_o *v468; // x20
  CommonUI_o *v469; // x22
  System_Action_o *v470; // x23
  System_String_o *v471; // x23
  System_String_array *v472; // x20
  __int64 v473; // x1
  System_String_o *v474; // x23
  System_String_array *v475; // x20
  __int64 v476; // x1
  UnityEngine_Object_o *MapComponent_srcLineSprite; // x22
  int v478; // w2
  __int64 v479; // x3
  UnityEngine_Component_o *v480; // x20
  __int64 v481; // x8
  ScrTerminalMap_o *v482; // x23
  __int64 v483; // x8
  ScrTerminalMap_o *v484; // x20
  UnityEngine_GameObject_o *gameObject; // x22
  System_Action_o *v486; // x23
  SceneJumpInfo_o *v487; // x21
  System_String_o *v488; // x22
  int v489; // w23
  __int64 v490; // x22
  float v491; // s0
  float v492; // s8
  float v493; // s0
  MapCamera_o *v494; // x19
  float v495; // s0
  float v496; // s9
  int32_t v497; // w20
  System_String_o *v498; // x23
  __int64 v499; // x23
  float v500; // s0
  float v501; // s9
  float v502; // s0
  float v503; // s10
  float v504; // s0
  float v505; // s11
  float v506; // s0
  float v507; // s8
  int v508; // w2
  __int64 v509; // x3
  __int64 v510; // x8
  const MethodInfo_234ED3C *v511; // x2
  float v512; // s0
  float v513; // s1
  float v514; // s2
  MapCamera_o *v515; // x0
  float v516; // s0
  float v517; // s1
  float v518; // s2
  float v519; // s3
  int32_t v520; // w1
  System_Action_o *v521; // x2
  System_String_o *v522; // x22
  __int64 v523; // x22
  float v524; // s0
  QuestAfterAction_o *v525; // x20
  float v526; // s8
  UnityEngine_Object_o *v527; // x19
  int v528; // w2
  __int64 v529; // x3
  __int64 v530; // x8
  ScrTerminalMap_o *v531; // x20
  float v532; // s0
  float v533; // s9
  float v534; // s0
  float v535; // s0
  float v536; // s1
  float v537; // s2
  float v538; // s9
  float v539; // s10
  float v540; // s11
  int32_t v541; // w20
  System_Action_o *v542; // x22
  System_String_o *v543; // x21
  __int64 v544; // x8
  __int64 v545; // x22
  int32_t v546; // w21
  bool v547; // w22
  System_String_o *v548; // x21
  __int64 v549; // x8
  __int64 v550; // x22
  int32_t v551; // w21
  bool v552; // w22
  System_String_o *v553; // x21
  __int64 v554; // x8
  __int64 v555; // x22
  int32_t v556; // w21
  bool v557; // w22
  System_String_o *v558; // x21
  __int64 v559; // x21
  QuestAfterAction_o *v560; // x20
  UnityEngine_Object_o *v561; // x20
  UIWidget_o *v562; // x20
  QuestAfterAction_StateMain___c__DisplayClass16_11_o *v563; // x23
  System_String_o *v564; // x21
  __int64 v565; // x8
  __int64 v566; // x22
  int32_t v567; // w21
  _BOOL4 v568; // w24
  bool v569; // w25
  QuestAfterAction_StateMain___c__DisplayClass16_12_o *v570; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals12; // x8
  QuestAfterAction_o *v572; // x21
  UnityEngine_Object_o *v573; // x19
  MapGimmickComponent_o *v574; // x19
  System_Action_o *v575; // x21
  int v576; // w2
  __int64 v577; // x3
  TerminalSceneComponent_o *v578; // x19
  QuestAfterAction_StateMain___c__DisplayClass16_13_o *v579; // x20
  System_String_o *v580; // x21
  struct System_String_array **p_paramsStr; // x21
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals13; // x8
  struct System_String_array *v583; // x9
  QuestAfterAction_o *v584; // x21
  UnityEngine_Object_o *v585; // x19
  MapGimmickComponent_o *v586; // x19
  System_Action_o *v587; // x0
  __int64 *v588; // x8
  System_Action_o *v589; // x21
  struct System_String_array *paramsStr; // x8
  QuestAfterAction_o *v591; // x21
  QuestAfterAction_StateMain___c__DisplayClass16_13_Fields *v592; // x19
  UnityEngine_Object_o *v593; // x21
  bool v594; // w0
  bool v595; // w22
  int32_t v596; // w1
  System_String_o *v597; // x21
  __int64 v598; // x21
  QuestAfterAction_o *v599; // x22
  srcLineSprite_o *v600; // x22
  QuestAfterAction_StateMain___c__DisplayClass16_3_o *v601; // x23
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o **p_CS___8__locals3; // x20
  QuestAfterAction_o *v603; // x21
  UnityEngine_Object_o *v604; // x21
  SrcSpotBasePrefab_o *v605; // x21
  System_Action_o *v606; // x22
  __int64 v607; // x0
  System_String_o *v608; // x21
  __int64 v609; // x22
  QuestAfterAction_o *v610; // x21
  srcLineSprite_o *v611; // x21
  System_Action_o *v612; // x22
  QuestAfterAction_o *v613; // x21
  UnityEngine_Object_o *v614; // x21
  _DWORD *monitor; // x8
  SrcSpotBasePrefab_o *v616; // x0
  int32_t v617; // w1
  QuestAfterAction_StateMain___c__DisplayClass16_2_o *v618; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals2; // x8
  QuestAfterAction_o *v620; // x21
  UnityEngine_Object_o *v621; // x19
  QuestAfterAction_o *v622; // x21
  UnityEngine_Object_o *v623; // x21
  _DWORD *v624; // x8
  QuestAfterAction_o *v625; // x21
  _DWORD *v626; // x8
  System_Action_o *v627; // x20
  _BOOL4 v628; // w23
  QuestAfterAction_o *v629; // x21
  srcLineSprite_o *v630; // x21
  _DWORD *mcTweenScaleP; // x8
  QuestAfterAction_StateMain___c__DisplayClass16_8_o *v632; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals8; // x8
  QuestAfterAction_o *v634; // x21
  UnityEngine_Object_o *v635; // x19
  _BOOL4 IsMapModel; // w23
  QuestAfterAction_o *v637; // x21
  srcLineSprite_o *v638; // x21
  _DWORD *mcAtlasP; // x8
  QuestAfterAction_StateMain___c__DisplayClass16_6_o *v640; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals6; // x8
  QuestAfterAction_o *v642; // x21
  UnityEngine_Object_o *v643; // x19
  _BOOL4 v644; // w23
  QuestAfterAction_o *v645; // x21
  srcLineSprite_o *v646; // x21
  float v647; // s0
  int v648; // w23
  QuestAfterAction_o *v649; // x25
  UnityEngine_Object_o *v650; // x25
  const MethodInfo_234ED3C *v651; // x2
  __int64 v652; // x3
  float x; // s10
  float y; // s9
  float z; // s11
  __int64 v656; // x8
  MapCamera_o *mMapCamera; // x19
  System_Action_o *v658; // x0
  __int64 *v659; // x8
  float v660; // s0
  float v661; // s0
  QuestAfterAction_o *v662; // x25
  UnityEngine_Object_o *MapGameObject; // x25
  int v664; // w2
  __int64 v665; // x3
  __int64 v666; // x8
  const MethodInfo_234ED3C *v667; // x2
  System_String_o *v668; // x19
  QuestAfterAction_o *v669; // x25
  UnityEngine_Object_o *v670; // x25
  int v671; // w2
  __int64 v672; // x3
  float v673; // s9
  float v674; // s10
  float v675; // s11
  __int64 v676; // x8
  float v677; // s0
  float v678; // s1
  float v679; // s2
  int v680; // w8
  System_String_o *v681; // x19
  System_String_o *v682; // x20
  int v683; // w8
  System_String_o *v684; // x19
  System_String_o *v685; // x20
  System_String_o *v686; // x20
  CommonUI_o *v687; // x22
  System_Action_o *v688; // x23
  CommonUI_o *v689; // x22
  System_Action_o *v690; // x23
  srcLineSprite_o *v691; // x21
  struct UIAtlas_o *v692; // x8
  QuestAfterAction_StateMain_c *v693; // x8
  int v694; // w0
  srcLineSprite_o *v695; // x21
  srcLineSprite_o *v696; // x21
  struct UIAtlas_o *v697; // x8
  QuestAfterAction_StateMain___c__DisplayClass16_10_Fields *p_fields; // x21
  UnityEngine_Object_o *mapGimmick; // x22
  MapGimmickComponent_o *v700; // x21
  System_Action_o *v701; // x0
  System_Action_o *v702; // x22
  int32_t v703; // w1
  QuestAfterAction_StateMain___c__DisplayClass16_11_Fields *v704; // x21
  UnityEngine_Object_o *v705; // x22
  System_Action_o *v706; // x0
  UnityEngine_Object_o *v707; // x21
  int v708; // w9
  QuestAfterAction_StateMain___c__DisplayClass16_9_o *v709; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals9; // x8
  QuestAfterAction_o *v711; // x21
  UnityEngine_Object_o *v712; // x19
  srcLineSprite_o *v713; // x19
  System_Action_o *v714; // x21
  int32_t v715; // w1
  QuestAfterAction_StateMain___c__DisplayClass16_5_o *v716; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals5; // x8
  QuestAfterAction_o *v718; // x21
  UnityEngine_Object_o *roadSprite; // x19
  QuestAfterAction_StateMain___c__DisplayClass16_7_o *v720; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals7; // x8
  QuestAfterAction_o *v722; // x21
  UnityEngine_Object_o *v723; // x19
  UnityEngine_Object_o *v724; // x21
  UnityEngine_Object_o *v725; // x21
  System_Action_o *v726; // x22
  float v727; // s9
  float v728; // s11
  float v729; // s10
  const MethodInfo_234ED3C *v730; // x2
  System_String_o *v731; // x19
  MapGimmickComponent_o *v732; // x0
  System_Action_o *v733; // x2
  __int64 v734; // x8
  ScrTerminalMap_o *v735; // x22
  System_Action_o *v736; // x23
  MapCamera_o *v737; // x19
  float v738; // s0
  System_Action_o *v739; // x0
  __int64 *v740; // x8
  System_Action_o *v741; // x20
  float v742; // s0
  MapCamera_o *v743; // x19
  float v744; // s0
  System_Action_o *v745; // x20
  MapCamera_o *v746; // x0
  float v747; // s0
  int32_t v748; // w4
  System_Action_o *v749; // x5
  MapCamera_o *v750; // x20
  float v751; // s0
  System_Action_o *v752; // x22
  float v753; // s0
  __int64 v754; // x0
  __int64 v755; // x0
  __int64 v756; // x0
  __int64 v757; // x0
  __int64 v758; // x0
  System_Nullable_float__o size; // [xsp+38h] [xbp-A8h] BYREF
  System_Nullable_Vector3__o v760; // [xsp+40h] [xbp-A0h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+50h] [xbp-90h] BYREF
  WarEntity_o *entity; // [xsp+58h] [xbp-88h] BYREF
  UnityEngine_Color_o color; // [xsp+60h] [xbp-80h] BYREF
  bool isQuickUpdate; // [xsp+9Ch] [xbp-44h] BYREF
  System_Nullable_float__o v765; // 0:x0.8
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v767; // 0:x0.8
  System_Nullable_float__o v768; // 0:x0.8
  System_Nullable_float__o v769; // 0:x0.8
  System_Nullable_float__o v770; // 0:x3.8
  System_Nullable_Vector3__o v771; // 0:x0.16
  System_Nullable_Vector3__o v772; // 0:x0.16
  System_Nullable_Vector3__o v773; // 0:x0.16
  System_Nullable_Vector3__o v774; // 0:x0.16
  System_Nullable_Vector3__o v775; // 0:x0.16
  System_Nullable_Vector3__o v776; // 0:x1.16
  UnityEngine_Vector3_o v777; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v778; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v779; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v780; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v781; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v783; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v784; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v786; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v787; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v788; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v789; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E5AE0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&char___TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMaster_QuestMaster___, v15, v16, v17);
    sub_B5D5C4(&DataManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v21, v22, v23);
    sub_B5D5C4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v24, v25, v26);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__,
      v27,
      v28,
      v29);
    sub_B5D5C4(&FSUtility_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v33, v34, v35);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___, v36, v37, v38);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_System_Nullable_float___ctor__, v42, v43, v44);
    sub_B5D5C4(&Method_System_Nullable_Vector3___ctor__, v45, v46, v47);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___, v51, v52, v53);
    sub_B5D5C4(&Method_QuestAfterAction_GetMapComponent_ModelLineComponent___, v54, v55, v56);
    sub_B5D5C4(&Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___, v57, v58, v59);
    sub_B5D5C4(&Method_QuestAfterAction_GetMapComponent_srcLineSprite___, v60, v61, v62);
    sub_B5D5C4(&SceneJumpInfo_TypeInfo, v63, v64, v65);
    sub_B5D5C4(&SeManager_TypeInfo, v66, v67, v68);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v69, v70, v71);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v72, v73, v74);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v75, v76, v77);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v78, v79, v80);
    sub_B5D5C4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v81, v82, v83);
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, v84, v85, v86);
    sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v87, v88, v89);
    sub_B5D5C4(&SingletonTemplate_clsQuestCheck__TypeInfo, v90, v91, v92);
    sub_B5D5C4(&SoundManager_TypeInfo, v93, v94, v95);
    sub_B5D5C4(&string___TypeInfo, v96, v97, v98);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v99, v100, v101);
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v102, v103, v104);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_31__, v105, v106, v107);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_33__, v108, v109, v110);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__, v111, v112, v113);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__, v114, v115, v116);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__, v117, v118, v119);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__13__, v120, v121, v122);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__14__, v123, v124, v125);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__15__, v126, v127, v128);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__16__, v129, v130, v131);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__17__, v132, v133, v134);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__18__, v135, v136, v137);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__19__, v138, v139, v140);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__20__, v141, v142, v143);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__25__, v144, v145, v146);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__, v147, v148, v149);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__36__, v150, v151, v152);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__37__, v153, v154, v155);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__38__, v156, v157, v158);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__39__, v159, v160, v161);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__40__, v162, v163, v164);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__, v165, v166, v167);
    sub_B5D5C4(&QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo, v168, v169, v170);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__21__, v171, v172, v173);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__22__, v174, v175, v176);
    sub_B5D5C4(&QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo, v177, v178, v179);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__23__, v180, v181, v182);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__24__, v183, v184, v185);
    sub_B5D5C4(&QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo, v186, v187, v188);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__26__, v189, v190, v191);
    sub_B5D5C4(&QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo, v192, v193, v194);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__27__, v195, v196, v197);
    sub_B5D5C4(&QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo, v198, v199, v200);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__29__, v201, v202, v203);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__30__, v204, v205, v206);
    sub_B5D5C4(&QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo, v207, v208, v209);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__, v210, v211, v212);
    sub_B5D5C4(&QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo, v213, v214, v215);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__, v216, v217, v218);
    sub_B5D5C4(&QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo, v219, v220, v221);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__, v222, v223, v224);
    sub_B5D5C4(&QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo, v225, v226, v227);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__, v228, v229, v230);
    sub_B5D5C4(&QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo, v231, v232, v233);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__, v234, v235, v236);
    sub_B5D5C4(&QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo, v237, v238, v239);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__, v240, v241, v242);
    sub_B5D5C4(&QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo, v243, v244, v245);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__, v246, v247, v248);
    sub_B5D5C4(&QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo, v249, v250, v251);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__, v252, v253, v254);
    sub_B5D5C4(&QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo, v255, v256, v257);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__, v258, v259, v260);
    sub_B5D5C4(&QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo, v261, v262, v263);
    sub_B5D5C4(&QuestAfterAction_StateMain___c_TypeInfo, v264, v265, v266);
    sub_B5D5C4(&StringLiteral_69/*"\r\n"*/, v267, v268, v269);
    sub_B5D5C4(&StringLiteral_1177/*"30101"*/, v270, v271, v272);
    sub_B5D5C4(&StringLiteral_11017/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v273, v274, v275);
    sub_B5D5C4(&StringLiteral_1178/*"30102"*/, v276, v277, v278);
    sub_B5D5C4(&StringLiteral_1115/*"10703"*/, v279, v280, v281);
    sub_B5D5C4(&StringLiteral_2983/*"CAPTER WAIT"*/, v282, v283, v284);
    sub_B5D5C4(&StringLiteral_1/*""*/, v285, v286, v287);
    sub_B5D5C4(&StringLiteral_19293/*"gevINFOBAR_BACK"*/, v288, v289, v290);
    byte_42E5AE0 = 1;
  }
  isQuickUpdate = 0;
  *(_QWORD *)&color.fields.b = 0LL;
  entity = 0LL;
  *(_QWORD *)&color.fields.r = 0LL;
  value = 0LL;
  v291 = (QuestAfterAction_StateMain___c__DisplayClass16_0_o *)sub_B5D694(QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo);
  QuestAfterAction_StateMain___c__DisplayClass16_0___ctor(v291, 0LL);
  if ( !v291 )
    goto LABEL_1011;
  v291->fields.__4__this = this;
  sub_B5D560(&v291->fields);
  v291->fields.that = that;
  p_that = &v291->fields.that;
  *(__n128 *)&v295 = sub_B5D560(&v291->fields.that);
  if ( this->fields.IsAnimDoing )
    return;
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer, long double))this->klass->vtable._10_get_CommandBuf.method)(
              this,
              this->klass->vtable._11_get_CommandIndex.methodPtr,
              v295);
  if ( !updated )
    return;
  if ( !*p_that )
    goto LABEL_1011;
  if ( (*p_that)->fields.isSkippedNext )
  {
    updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                this,
                this->klass->vtable._15_onEnd.methodPtr);
    if ( *p_that )
    {
      (*p_that)->fields.isSkippedNext = 0;
      return;
    }
LABEL_1011:
    sub_B5D69C(updated, v293);
  }
  klass = this->klass;
  this->fields.IsAnimDoing = 1;
  v297 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))klass->vtable._10_get_CommandBuf.method)(
           this,
           klass->vtable._11_get_CommandIndex.methodPtr);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._11_get_CommandIndex.method)(
              this,
              this->klass->vtable._12_set_CommandIndex.methodPtr);
  if ( !v297 )
    goto LABEL_1011;
  if ( (unsigned int)updated >= *(_DWORD *)(v297 + 24) )
  {
LABEL_1017:
    v754 = sub_B5D6C8(updated);
    sub_B5D668(v754, 0LL);
  }
  v298 = *(QuestAfterAction_Command_o **)(v297 + 8LL * (int)updated + 32);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_Command_o *, Il2CppMethodPointer))this->klass->vtable._9_IsUsableCommand.method)(
              this,
              v298,
              this->klass->vtable._10_get_CommandBuf.methodPtr);
  if ( (updated & 1) == 0 )
    goto LABEL_443;
  v299 = *p_that;
  if ( !*p_that )
    goto LABEL_1011;
  BlankEarthQuestAfterAction_k__BackingField = v299->fields._BlankEarthQuestAfterAction_k__BackingField;
  v301 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v301, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
  if ( !BlankEarthQuestAfterAction_k__BackingField )
    goto LABEL_1011;
  updated = BlankEarthQuestAfterAction__UpdateAnim(
              BlankEarthQuestAfterAction_k__BackingField,
              v299,
              v298,
              v301,
              &isQuickUpdate,
              0LL);
  if ( (updated & 1) != 0 )
  {
    if ( isQuickUpdate )
    {
LABEL_18:
      ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
        this,
        this->klass->vtable._15_onEnd.methodPtr);
LABEL_19:
      ((void (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_o *, Il2CppMethodPointer))this->klass->vtable._13_UpdateAnim.method)(
        this,
        *p_that,
        this->klass->vtable._14_EndAnim.methodPtr);
      return;
    }
    return;
  }
  if ( !v298 )
    goto LABEL_1011;
  id = v298->fields.id;
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
          if ( !byte_42E4B1E )
          {
            sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)v293, v302, v303);
            byte_42E4B1E = 1;
          }
          MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v392 = **(_QWORD **)(MyFsmP + 184);
          if ( v392 )
          {
            MyFsmP = *(_QWORD *)(v392 + 248);
            if ( MyFsmP )
            {
              MyFsmP = (__int64)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)MyFsmP, 0LL);
              if ( MyFsmP )
              {
                v393 = (PlayMakerFSM_o *)MyFsmP;
                ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)MyFsmP, 0LL);
                if ( !System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_2983/*"CAPTER WAIT"*/, 0LL) )
                  goto LABEL_443;
                if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                }
                if ( !byte_42E4B1E )
                {
                  sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)v293, v395, v396);
                  byte_42E4B1E = 1;
                }
                MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
                if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v397 = **(_QWORD **)(MyFsmP + 184);
                if ( v397 )
                {
                  v398 = *(_QWORD *)(v397 + 248);
                  if ( v398 )
                  {
                    v399 = *(QuestBoardListViewManager_o **)(v398 + 288);
                    MyFsmP = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
                    if ( (BYTE3(QuestAfterAction_StateMain___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
                      MyFsmP = (__int64)QuestAfterAction_StateMain___c_TypeInfo;
                    }
                    static_fields = *(struct QuestAfterAction_StateMain___c_StaticFields **)(MyFsmP + 184);
                    _9__16_31 = static_fields->__9__16_31;
                    if ( !_9__16_31 )
                    {
                      if ( (*(_BYTE *)(MyFsmP + 307) & 4) != 0 && !*(_DWORD *)(MyFsmP + 224) )
                      {
                        j_il2cpp_runtime_class_init_0(MyFsmP);
                        static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
                      }
                      v402 = (Il2CppObject *)static_fields->__9;
                      _9__16_31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                      System_Action___ctor(
                        _9__16_31,
                        v402,
                        Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_31__,
                        0LL);
                      v403 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
                      v403->__9__16_31 = _9__16_31;
                      sub_B5D560(&v403->__9__16_31);
                    }
                    if ( v399 )
                    {
                      QuestBoardListViewManager__SetMode(v399, 4, _9__16_31, 0, 0, 0LL);
                      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                      }
                      if ( !byte_42E4B1E )
                      {
                        sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)v293, v404, v405);
                        byte_42E4B1E = 1;
                      }
                      v406 = TerminalSceneComponent_TypeInfo;
                      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                        v406 = TerminalSceneComponent_TypeInfo;
                      }
                      MyFsmP = (__int64)v406->static_fields->mInstance;
                      if ( MyFsmP )
                      {
                        TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)MyFsmP, 0LL);
                        PlayMakerFSM__SendEvent(v393, (System_String_o *)StringLiteral_19293/*"gevINFOBAR_BACK"*/, 0LL);
                        goto LABEL_443;
                      }
                    }
                  }
                }
              }
            }
          }
          goto LABEL_1018;
        }
        if ( id != 510 )
        {
          if ( id != 520 )
            return;
          DEFAULT_FADE_TIME = System_Single__Parse(v298->fields.param, 0LL);
          if ( DEFAULT_FADE_TIME <= 0.0 )
          {
            v310 = AvalonSceneManager_TypeInfo;
            if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
              v310 = AvalonSceneManager_TypeInfo;
            }
            DEFAULT_FADE_TIME = v310->static_fields->DEFAULT_FADE_TIME;
          }
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_42E4B1E )
          {
            sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v306, v307, v308);
            byte_42E4B1E = 1;
          }
          v311 = TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v311 = TerminalSceneComponent_TypeInfo;
          }
          mInstance = v311->static_fields->mInstance;
          v313 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v313,
            (Il2CppObject *)v291,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__,
            0LL);
          if ( mInstance )
          {
            v315 = mInstance;
            v316 = DEFAULT_FADE_TIME;
            v317 = v313;
LABEL_49:
            TerminalSceneComponent__Fadein_MapDisp(v315, v316, v317, 0LL);
            return;
          }
          goto LABEL_1018;
        }
        param = v298->fields.param;
        MyFsmP = sub_B5D5DC(char___TypeInfo, 1LL);
        if ( !MyFsmP )
          goto LABEL_1018;
        v293 = (const MethodInfo *)MyFsmP;
        if ( *(_DWORD *)(MyFsmP + 24) )
        {
          *(_WORD *)(MyFsmP + 32) = 44;
          if ( !param )
            goto LABEL_1018;
          MyFsmP = (__int64)System_String__Split(param, (System_Char_array *)MyFsmP, 0LL);
          if ( !MyFsmP )
            goto LABEL_1018;
          v378 = MyFsmP;
          if ( *(_DWORD *)(MyFsmP + 24) )
          {
            v379 = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
            v380 = 0.5;
            if ( *(int *)(v378 + 24) >= 2 )
            {
              v381 = System_Int32__Parse(*(System_String_o **)(v378 + 40), 0LL);
              if ( *(int *)(v378 + 24) >= 3 )
                v380 = System_Single__Parse(*(System_String_o **)(v378 + 48), 0LL);
            }
            else
            {
              v381 = v379;
              v379 = -1;
            }
            MyFsmP = (__int64)*p_that;
            if ( *p_that )
            {
              MapComponent_srcLineSprite = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                                     (QuestAfterAction_o *)MyFsmP,
                                                                     0,
                                                                     v381,
                                                                     this,
                                                                     (const MethodInfo_1E68CF8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Equality(MapComponent_srcLineSprite, 0LL, 0LL) )
                return;
              if ( v379 >= 1 )
              {
                MyFsmP = (__int64)*p_that;
                if ( !*p_that )
                  goto LABEL_1018;
                v480 = (UnityEngine_Component_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                    (QuestAfterAction_o *)MyFsmP,
                                                    0,
                                                    v379,
                                                    this,
                                                    (const MethodInfo_1E68CF8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v480, 0LL, 0LL) )
                {
                  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  }
                  if ( !byte_42E4B1E )
                  {
                    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)v293, v478, v479);
                    byte_42E4B1E = 1;
                  }
                  MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
                  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
                  }
                  v481 = **(_QWORD **)(MyFsmP + 184);
                  if ( !v481 )
                    goto LABEL_1018;
                  if ( !v480 )
                    goto LABEL_1018;
                  v482 = *(ScrTerminalMap_o **)(v481 + 256);
                  MyFsmP = (__int64)UnityEngine_Component__get_gameObject(v480, 0LL);
                  if ( !v482 )
                    goto LABEL_1018;
                  ScrTerminalMap__SetPlayerIcon(v482, (UnityEngine_GameObject_o *)MyFsmP, 0LL);
                }
              }
              if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              }
              if ( !byte_42E4B1E )
              {
                sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)v293, v478, v479);
                byte_42E4B1E = 1;
              }
              MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
              if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
              }
              v483 = **(_QWORD **)(MyFsmP + 184);
              if ( v483 )
              {
                if ( MapComponent_srcLineSprite )
                {
                  v484 = *(ScrTerminalMap_o **)(v483 + 256);
                  gameObject = UnityEngine_Component__get_gameObject(
                                 (UnityEngine_Component_o *)MapComponent_srcLineSprite,
                                 0LL);
                  v486 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                  System_Action___ctor(
                    v486,
                    (Il2CppObject *)this,
                    (intptr_t)this->klass->vtable._15_onEnd.methodPtr,
                    0LL);
                  if ( v484 )
                  {
                    ScrTerminalMap__MovePlayerIcon(v484, gameObject, v381, v486, v380, 0LL);
                    return;
                  }
                }
              }
            }
LABEL_1018:
            sub_B5D69C(MyFsmP, v293);
          }
        }
LABEL_1020:
        v755 = sub_B5D6C8(MyFsmP);
        sub_B5D668(v755, 0LL);
      }
      switch ( id )
      {
        case 400:
          v328 = (QuestAfterAction_StateMain___c__DisplayClass16_10_o *)sub_B5D694(QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_10___ctor(v328, 0LL);
          if ( !v328 )
            goto LABEL_1018;
          v328->fields.CS___8__locals10 = v291;
          p_CS___8__locals10 = &v328->fields.CS___8__locals10;
          sub_B5D560(&v328->fields.CS___8__locals10);
          v330 = v298->fields.param;
          MyFsmP = sub_B5D5DC(char___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1018;
          v293 = (const MethodInfo *)MyFsmP;
          if ( !*(_DWORD *)(MyFsmP + 24) )
            goto LABEL_1020;
          *(_WORD *)(MyFsmP + 32) = 44;
          if ( !v330 )
            goto LABEL_1018;
          MyFsmP = (__int64)System_String__Split(v330, (System_Char_array *)MyFsmP, 0LL);
          if ( !MyFsmP )
            goto LABEL_1018;
          v331 = *(_QWORD *)(MyFsmP + 24);
          v332 = MyFsmP;
          if ( v331 )
          {
            if ( !(_DWORD)v331 )
              goto LABEL_1020;
            MyFsmP = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
            v333 = MyFsmP;
            if ( *(int *)(v332 + 24) < 2 )
            {
              v334 = 0;
            }
            else
            {
              MyFsmP = System_Int32__Parse(*(System_String_o **)(v332 + 40), 0LL);
              v334 = (int)MyFsmP > 0;
              if ( *(int *)(v332 + 24) >= 3 )
              {
                MyFsmP = System_Int32__Parse(*(System_String_o **)(v332 + 48), 0LL);
                v335 = (int)MyFsmP > 0;
LABEL_871:
                if ( !*p_CS___8__locals10 )
                  goto LABEL_1018;
                MyFsmP = (__int64)(*p_CS___8__locals10)->fields.that;
                if ( !MyFsmP )
                  goto LABEL_1018;
                v328->fields.mapGimmick = (struct MapGimmickComponent_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                                            (QuestAfterAction_o *)MyFsmP,
                                                                            2,
                                                                            v333,
                                                                            this,
                                                                            (const MethodInfo_1E68CF8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
                p_fields = &v328->fields;
                sub_B5D560(&v328->fields);
                mapGimmick = (UnityEngine_Object_o *)v328->fields.mapGimmick;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                MyFsmP = UnityEngine_Object__op_Equality(mapGimmick, 0LL, 0LL);
                if ( (MyFsmP & 1) != 0 )
                  return;
                if ( !p_fields->mapGimmick )
                  goto LABEL_1018;
                p_fields->mapGimmick->fields.isForceNotActive = v335;
                v700 = p_fields->mapGimmick;
                v701 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                v702 = v701;
                if ( v334 )
                {
                  System_Action___ctor(
                    v701,
                    (Il2CppObject *)v328,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__21__,
                    0LL);
                  if ( !v700 )
                    goto LABEL_1018;
                  v703 = 2;
LABEL_894:
                  MapGimmickComponent__SetState(v700, v703, v702, 0LL);
                  MyFsmP = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                             this,
                             this->klass->vtable._15_onEnd.methodPtr);
                  if ( *p_CS___8__locals10 )
                  {
                    ((void (__fastcall *)(QuestAfterAction_StateMain_o *, struct QuestAfterAction_o *, Il2CppMethodPointer))this->klass->vtable._13_UpdateAnim.method)(
                      this,
                      (*p_CS___8__locals10)->fields.that,
                      this->klass->vtable._14_EndAnim.methodPtr);
                    return;
                  }
                  goto LABEL_1018;
                }
                System_Action___ctor(
                  v701,
                  (Il2CppObject *)v328,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__22__,
                  0LL);
                if ( !v700 )
                  goto LABEL_1018;
                v596 = 2;
                goto LABEL_965;
              }
            }
          }
          else
          {
            v334 = 0;
            v333 = 0;
          }
          v335 = 0;
          goto LABEL_871;
        case 401:
          v563 = (QuestAfterAction_StateMain___c__DisplayClass16_11_o *)sub_B5D694(QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_11___ctor(v563, 0LL);
          if ( !v563 )
            goto LABEL_1018;
          v563->fields.CS___8__locals11 = v291;
          p_CS___8__locals10 = &v563->fields.CS___8__locals11;
          sub_B5D560(&v563->fields.CS___8__locals11);
          v564 = v298->fields.param;
          MyFsmP = sub_B5D5DC(char___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1018;
          v293 = (const MethodInfo *)MyFsmP;
          if ( !*(_DWORD *)(MyFsmP + 24) )
            goto LABEL_1020;
          *(_WORD *)(MyFsmP + 32) = 44;
          if ( !v564 )
            goto LABEL_1018;
          MyFsmP = (__int64)System_String__Split(v564, (System_Char_array *)MyFsmP, 0LL);
          if ( !MyFsmP )
            goto LABEL_1018;
          v565 = *(_QWORD *)(MyFsmP + 24);
          v566 = MyFsmP;
          if ( v565 )
          {
            if ( !(_DWORD)v565 )
              goto LABEL_1020;
            MyFsmP = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
            v567 = MyFsmP;
            if ( *(int *)(v566 + 24) < 2 )
            {
              v568 = 0;
            }
            else
            {
              MyFsmP = System_Int32__Parse(*(System_String_o **)(v566 + 40), 0LL);
              v568 = (int)MyFsmP > 0;
              if ( *(int *)(v566 + 24) >= 3 )
              {
                MyFsmP = System_Int32__Parse(*(System_String_o **)(v566 + 48), 0LL);
                v569 = (int)MyFsmP > 0;
LABEL_883:
                if ( !*p_CS___8__locals10 )
                  goto LABEL_1018;
                MyFsmP = (__int64)(*p_CS___8__locals10)->fields.that;
                if ( !MyFsmP )
                  goto LABEL_1018;
                v563->fields.mapGimmick = (struct MapGimmickComponent_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                                            (QuestAfterAction_o *)MyFsmP,
                                                                            2,
                                                                            v567,
                                                                            this,
                                                                            (const MethodInfo_1E68CF8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
                v704 = &v563->fields;
                sub_B5D560(&v563->fields);
                v705 = (UnityEngine_Object_o *)v563->fields.mapGimmick;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                MyFsmP = UnityEngine_Object__op_Equality(v705, 0LL, 0LL);
                if ( (MyFsmP & 1) != 0 )
                  return;
                if ( !v704->mapGimmick )
                  goto LABEL_1018;
                v704->mapGimmick->fields.isForceLoop = v569;
                if ( !v704->mapGimmick )
                  goto LABEL_1018;
                v704->mapGimmick->fields.isForceNotActive = 0;
                v700 = v704->mapGimmick;
                v706 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                v702 = v706;
                if ( v568 )
                {
                  System_Action___ctor(
                    v706,
                    (Il2CppObject *)v563,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__23__,
                    0LL);
                  if ( !v700 )
                    goto LABEL_1018;
                  v703 = 3;
                  goto LABEL_894;
                }
                System_Action___ctor(
                  v706,
                  (Il2CppObject *)v563,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__24__,
                  0LL);
                if ( !v700 )
                  goto LABEL_1018;
                v596 = 3;
LABEL_965:
                v732 = v700;
                v733 = v702;
LABEL_966:
                MapGimmickComponent__SetState(v732, v596, v733, 0LL);
                return;
              }
            }
          }
          else
          {
            v568 = 0;
            v567 = 0;
          }
          v569 = 0;
          goto LABEL_883;
        case 402:
          v548 = v298->fields.param;
          MyFsmP = sub_B5D5DC(char___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1018;
          v293 = (const MethodInfo *)MyFsmP;
          if ( !*(_DWORD *)(MyFsmP + 24) )
            goto LABEL_1020;
          *(_WORD *)(MyFsmP + 32) = 44;
          if ( !v548 )
            goto LABEL_1018;
          MyFsmP = (__int64)System_String__Split(v548, (System_Char_array *)MyFsmP, 0LL);
          if ( !MyFsmP )
            goto LABEL_1018;
          v549 = *(_QWORD *)(MyFsmP + 24);
          v550 = MyFsmP;
          if ( v549 )
          {
            if ( !(_DWORD)v549 )
              goto LABEL_1020;
            v551 = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
            if ( *(int *)(v550 + 24) >= 2 )
            {
              v552 = System_Int32__Parse(*(System_String_o **)(v550 + 40), 0LL) > 0;
              goto LABEL_849;
            }
          }
          else
          {
            v551 = 0;
          }
          v552 = 0;
LABEL_849:
          MyFsmP = (__int64)*p_that;
          if ( *p_that )
          {
            v695 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                     (QuestAfterAction_o *)MyFsmP,
                     2,
                     v551,
                     this,
                     (const MethodInfo_1E68CF8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            MyFsmP = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v695, 0LL, 0LL);
            if ( (MyFsmP & 1) != 0 )
              return;
            if ( v695 )
            {
              BYTE1(v695->fields.mcTo.fields.y) = v552;
              MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)v695, 0, 0LL);
              mcAtlasP = v695->fields.mcAtlasP;
              if ( mcAtlasP )
              {
LABEL_937:
                mcAtlasP[4] = 0;
                goto LABEL_18;
              }
            }
          }
          goto LABEL_1018;
        case 403:
          v553 = v298->fields.param;
          MyFsmP = sub_B5D5DC(char___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1018;
          v293 = (const MethodInfo *)MyFsmP;
          if ( !*(_DWORD *)(MyFsmP + 24) )
            goto LABEL_1020;
          *(_WORD *)(MyFsmP + 32) = 44;
          if ( !v553 )
            goto LABEL_1018;
          MyFsmP = (__int64)System_String__Split(v553, (System_Char_array *)MyFsmP, 0LL);
          if ( !MyFsmP )
            goto LABEL_1018;
          v554 = *(_QWORD *)(MyFsmP + 24);
          v555 = MyFsmP;
          if ( v554 )
          {
            if ( !(_DWORD)v554 )
              goto LABEL_1020;
            v556 = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
            if ( *(int *)(v555 + 24) >= 2 )
            {
              v557 = System_Int32__Parse(*(System_String_o **)(v555 + 40), 0LL) > 0;
              goto LABEL_859;
            }
          }
          else
          {
            v556 = 0;
          }
          v557 = 0;
LABEL_859:
          MyFsmP = (__int64)*p_that;
          if ( *p_that )
          {
            v696 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                     (QuestAfterAction_o *)MyFsmP,
                     2,
                     v556,
                     this,
                     (const MethodInfo_1E68CF8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            MyFsmP = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v696, 0LL, 0LL);
            if ( (MyFsmP & 1) != 0 )
              return;
            if ( v696 )
            {
              LOBYTE(v696->fields.mcTo.fields.y) = v557;
              BYTE1(v696->fields.mcTo.fields.y) = 0;
              MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)v696, 1, 0LL);
              v697 = v696->fields.mcAtlasP;
              if ( v697 )
              {
                v697->fields.m_CachedPtr = 1;
                goto LABEL_18;
              }
            }
          }
          goto LABEL_1018;
        case 404:
          v522 = v298->fields.param;
          MyFsmP = sub_B5D5DC(char___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1018;
          v293 = (const MethodInfo *)MyFsmP;
          if ( !*(_DWORD *)(MyFsmP + 24) )
            goto LABEL_1020;
          *(_WORD *)(MyFsmP + 32) = 44;
          if ( !v522 )
            goto LABEL_1018;
          MyFsmP = (__int64)System_String__Split(v522, (System_Char_array *)MyFsmP, 0LL);
          if ( !MyFsmP )
            goto LABEL_1018;
          v523 = MyFsmP;
          if ( *(int *)(MyFsmP + 24) <= 4 )
            goto LABEL_443;
          v524 = System_Single__Parse(*(System_String_o **)(MyFsmP + 56), 0LL);
          if ( !*(_DWORD *)(v523 + 24) )
            goto LABEL_1020;
          v525 = *p_that;
          v526 = v524;
          MyFsmP = System_Int32__Parse(*(System_String_o **)(v523 + 32), 0LL);
          if ( !v525 )
            goto LABEL_1018;
          v527 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                           v525,
                                           2,
                                           MyFsmP,
                                           this,
                                           (const MethodInfo_1E68CF8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v527, 0LL, 0LL) )
            return;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_42E4B1E )
          {
            sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)v293, v528, v529);
            byte_42E4B1E = 1;
          }
          MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v530 = **(_QWORD **)(MyFsmP + 184);
          if ( !v530 )
            goto LABEL_1018;
          if ( *(_DWORD *)(v523 + 24) <= 1u )
            goto LABEL_1020;
          v531 = *(ScrTerminalMap_o **)(v530 + 256);
          v532 = System_Single__Parse(*(System_String_o **)(v523 + 40), 0LL);
          if ( *(_DWORD *)(v523 + 24) <= 2u )
            goto LABEL_1020;
          v533 = v532;
          v534 = System_Single__Parse(*(System_String_o **)(v523 + 48), 0LL);
          if ( !v531 )
            goto LABEL_1018;
          *(UnityEngine_Vector3_o *)&v535 = ScrTerminalMap__LocalPosFromCoord(v531, v533, v534, 0.0, 0.0, 0LL);
          if ( *(_DWORD *)(v523 + 24) <= 4u )
            goto LABEL_1020;
          v538 = v535;
          v539 = v536;
          v540 = v537;
          v541 = System_Int32__Parse(*(System_String_o **)(v523 + 64), 0LL);
          v542 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v542,
            (Il2CppObject *)v291,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__25__,
            0LL);
          if ( !v527 )
            goto LABEL_1018;
          v778.fields.y = v539;
          v778.fields.z = v540;
          v778.fields.x = v538;
          MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v527, v778, v526 * 0.001, v541, v542, 0LL);
          return;
        case 405:
          v570 = (QuestAfterAction_StateMain___c__DisplayClass16_12_o *)sub_B5D694(QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_12___ctor(v570, 0LL);
          if ( !v570 )
            goto LABEL_1018;
          v570->fields.CS___8__locals12 = v291;
          sub_B5D560(&v570->fields.CS___8__locals12);
          CS___8__locals12 = v570->fields.CS___8__locals12;
          if ( !CS___8__locals12 )
            goto LABEL_1018;
          v572 = CS___8__locals12->fields.that;
          MyFsmP = System_Int32__Parse(v298->fields.param, 0LL);
          if ( !v572 )
            goto LABEL_1018;
          v570->fields.mapGimmick = (struct MapGimmickComponent_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                                      v572,
                                                                      2,
                                                                      MyFsmP,
                                                                      this,
                                                                      (const MethodInfo_1E68CF8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          sub_B5D560(&v570->fields);
          v573 = (UnityEngine_Object_o *)v570->fields.mapGimmick;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v573, 0LL, 0LL) )
            return;
          v574 = v570->fields.mapGimmick;
          v575 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v575,
            (Il2CppObject *)v570,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__26__,
            0LL);
          if ( !v574 )
            goto LABEL_1018;
          MapGimmickComponent__SetState(v574, 3, v575, 0LL);
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_42E4B1E )
          {
            sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)v293, v576, v577);
            byte_42E4B1E = 1;
          }
          MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v578 = **(TerminalSceneComponent_o ***)(MyFsmP + 184);
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          }
          if ( !v578 )
            goto LABEL_1018;
          v315 = v578;
          v317 = 0LL;
          v316 = AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME;
          goto LABEL_49;
        case 406:
          v579 = (QuestAfterAction_StateMain___c__DisplayClass16_13_o *)sub_B5D694(QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_13___ctor(v579, 0LL);
          if ( !v579 )
            goto LABEL_1018;
          v579->fields.CS___8__locals13 = v291;
          sub_B5D560(&v579->fields.CS___8__locals13);
          v580 = v298->fields.param;
          MyFsmP = sub_B5D5DC(char___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1018;
          v293 = (const MethodInfo *)MyFsmP;
          if ( !*(_DWORD *)(MyFsmP + 24) )
            goto LABEL_1020;
          *(_WORD *)(MyFsmP + 32) = 44;
          if ( !v580 )
            goto LABEL_1018;
          v579->fields.paramsStr = System_String__Split(v580, (System_Char_array *)MyFsmP, 0LL);
          p_paramsStr = &v579->fields.paramsStr;
          sub_B5D560(&v579->fields.paramsStr);
          CS___8__locals13 = v579->fields.CS___8__locals13;
          if ( !CS___8__locals13 )
            goto LABEL_1018;
          v583 = *p_paramsStr;
          if ( !*p_paramsStr )
            goto LABEL_1018;
          if ( !v583->max_length )
            goto LABEL_1020;
          v584 = CS___8__locals13->fields.that;
          MyFsmP = System_Int32__Parse(v583->m_Items[0], 0LL);
          if ( !v584 )
            goto LABEL_1018;
          v579->fields.mapGimmick = (struct MapGimmickComponent_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                                      v584,
                                                                      2,
                                                                      MyFsmP,
                                                                      this,
                                                                      (const MethodInfo_1E68CF8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          sub_B5D560(&v579->fields);
          v585 = (UnityEngine_Object_o *)v579->fields.mapGimmick;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v585, 0LL, 0LL) )
            return;
          v586 = v579->fields.mapGimmick;
          v587 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          v588 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__27__;
          v589 = v587;
          goto LABEL_605;
        case 407:
          v558 = v298->fields.param;
          MyFsmP = sub_B5D5DC(char___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1018;
          v293 = (const MethodInfo *)MyFsmP;
          if ( !*(_DWORD *)(MyFsmP + 24) )
            goto LABEL_1020;
          *(_WORD *)(MyFsmP + 32) = 44;
          if ( !v558 )
            goto LABEL_1018;
          MyFsmP = (__int64)System_String__Split(v558, (System_Char_array *)MyFsmP, 0LL);
          if ( !MyFsmP )
            goto LABEL_1018;
          v559 = MyFsmP;
          if ( !*(_DWORD *)(MyFsmP + 24) )
            goto LABEL_1020;
          v560 = *p_that;
          MyFsmP = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
          if ( !v560 )
            goto LABEL_1018;
          v561 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                           v560,
                                           2,
                                           MyFsmP,
                                           this,
                                           (const MethodInfo_1E68CF8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          MyFsmP = UnityEngine_Object__op_Equality(v561, 0LL, 0LL);
          if ( (MyFsmP & 1) != 0 )
            return;
          if ( !v561 )
            goto LABEL_1018;
          MyFsmP = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v561, 0LL);
          if ( !MyFsmP )
            goto LABEL_1018;
          MyFsmP = (__int64)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                              (UnityEngine_GameObject_o *)MyFsmP,
                              (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
          if ( *(_DWORD *)(v559 + 24) <= 1u )
            goto LABEL_1020;
          v562 = (UIWidget_o *)MyFsmP;
          MyFsmP = UnityEngine_ColorUtility__TryParseHtmlString(*(System_String_o **)(v559 + 40), &color, 0LL);
          if ( !v562 )
            goto LABEL_1018;
          UIWidget__set_color(v562, color, 0LL);
          goto LABEL_443;
        case 408:
          v579 = (QuestAfterAction_StateMain___c__DisplayClass16_13_o *)sub_B5D694(QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_15___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_15_o *)v579,
            0LL);
          if ( !v579 )
            goto LABEL_1018;
          v579->fields.paramsStr = (struct System_String_array *)v291;
          sub_B5D560(&v579->fields.paramsStr);
          paramsStr = v579->fields.paramsStr;
          if ( !paramsStr )
            goto LABEL_1018;
          v591 = *(QuestAfterAction_o **)&paramsStr->max_length;
          MyFsmP = System_Int32__Parse(v298->fields.param, 0LL);
          if ( !v591 )
            goto LABEL_1018;
          v579->fields.mapGimmick = (struct MapGimmickComponent_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                                      v591,
                                                                      2,
                                                                      MyFsmP,
                                                                      this,
                                                                      (const MethodInfo_1E68CF8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          v592 = &v579->fields;
          sub_B5D560(&v579->fields);
          v593 = (UnityEngine_Object_o *)v579->fields.mapGimmick;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v593, 0LL, 0LL) )
            return;
          if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
          }
          MyFsmP = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !v592->mapGimmick || !MyFsmP )
            goto LABEL_1018;
          v594 = QuestTree__CheckMapGimmickCond_22302164(
                   (QuestTree_o *)MyFsmP,
                   v592->mapGimmick->fields.mMapCtrl_MapGimmickInfo,
                   0LL);
          v586 = v592->mapGimmick;
          v595 = v594;
          v587 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          v589 = v587;
          if ( v595 )
          {
            v588 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__29__;
LABEL_605:
            System_Action___ctor(v587, (Il2CppObject *)v579, *v588, 0LL);
            if ( !v586 )
              goto LABEL_1018;
            v596 = 3;
          }
          else
          {
            System_Action___ctor(
              v587,
              (Il2CppObject *)v579,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__30__,
              0LL);
            if ( !v586 )
              goto LABEL_1018;
            v596 = 2;
          }
          v732 = v586;
          v733 = v589;
          goto LABEL_966;
        case 409:
          v543 = v298->fields.param;
          MyFsmP = sub_B5D5DC(char___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1018;
          v293 = (const MethodInfo *)MyFsmP;
          if ( !*(_DWORD *)(MyFsmP + 24) )
            goto LABEL_1020;
          *(_WORD *)(MyFsmP + 32) = 44;
          if ( !v543 )
            goto LABEL_1018;
          MyFsmP = (__int64)System_String__Split(v543, (System_Char_array *)MyFsmP, 0LL);
          if ( !MyFsmP )
            goto LABEL_1018;
          v544 = *(_QWORD *)(MyFsmP + 24);
          v545 = MyFsmP;
          if ( v544 )
          {
            if ( !(_DWORD)v544 )
              goto LABEL_1020;
            v546 = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
            if ( *(int *)(v545 + 24) >= 2 )
            {
              v547 = System_Int32__Parse(*(System_String_o **)(v545 + 40), 0LL) > 0;
              goto LABEL_839;
            }
          }
          else
          {
            v546 = 0;
          }
          v547 = 0;
LABEL_839:
          MyFsmP = (__int64)*p_that;
          if ( *p_that )
          {
            v691 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                     (QuestAfterAction_o *)MyFsmP,
                     2,
                     v546,
                     this,
                     (const MethodInfo_1E68CF8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            MyFsmP = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v691, 0LL, 0LL);
            if ( (MyFsmP & 1) != 0 )
              return;
            if ( v691 )
            {
              LOBYTE(v691->fields.mcTo.fields.y) = v547;
              BYTE1(v691->fields.mcTo.fields.y) = 0;
              MapGimmickComponent__SetDispAnim((MapGimmickComponent_o *)v691, 1, 0LL);
              v692 = v691->fields.mcAtlasP;
              if ( v692 )
              {
                v692->fields.m_CachedPtr = 1;
                v693 = this->klass;
                this->fields.IsAnimDoing = 0;
                v694 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))v693->vtable._11_get_CommandIndex.method)(
                         this,
                         v693->vtable._12_set_CommandIndex.methodPtr);
                ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_CommandIndex.method)(
                  this,
                  (unsigned int)(v694 + 1),
                  this->klass->vtable._13_UpdateAnim.methodPtr);
                goto LABEL_19;
              }
            }
          }
          goto LABEL_1018;
        default:
          if ( id != 500 )
            return;
          v457 = System_Int32__Parse(v298->fields.param, 0LL);
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_42E4B6F )
          {
            sub_B5D5C4(&TerminalPramsManager_TypeInfo, v454, v455, v456);
            byte_42E4B6F = 1;
          }
          v458 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v458 = TerminalPramsManager_TypeInfo;
          }
          v458->static_fields->_AfterActionFocusQuestId_k__BackingField = v457;
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          MyFsmP = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_QuestMaster___);
          if ( !MyFsmP )
            goto LABEL_1018;
          if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                  (DataMasterBase_WarMaster__WarEntity__int__o *)MyFsmP,
                  &entity,
                  v457,
                  (const MethodInfo_23FAE6C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
            goto LABEL_443;
          MyFsmP = (__int64)entity;
          if ( !entity )
            goto LABEL_1018;
          v459 = *p_that;
          MyFsmP = QuestEntity__getSpotId((QuestEntity_o *)entity, 0LL);
          if ( !v459 )
            goto LABEL_1018;
          v460 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                           v459,
                                           0,
                                           MyFsmP,
                                           this,
                                           (const MethodInfo_1E68CF8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          MyFsmP = UnityEngine_Object__op_Inequality(v460, 0LL, 0LL);
          if ( (MyFsmP & 1) == 0 )
            goto LABEL_443;
          if ( !v460 )
            goto LABEL_1018;
          SrcSpotBasePrefab__SelectSpot((SrcSpotBasePrefab_o *)v460, 0, 0LL);
          goto LABEL_443;
      }
    }
    if ( id <= 205 )
    {
      switch ( id )
      {
        case 'd':
          v343 = (QuestAfterAction_StateMain___c__DisplayClass16_1_o *)sub_B5D694(QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_1___ctor(v343, 0LL);
          if ( !v343 )
            goto LABEL_1011;
          v343->fields.CS___8__locals1 = v291;
          sub_B5D560(&v343->fields.CS___8__locals1);
          CS___8__locals1 = v343->fields.CS___8__locals1;
          if ( !CS___8__locals1 )
            goto LABEL_1011;
          v345 = CS___8__locals1->fields.that;
          updated = System_Int32__Parse(v298->fields.param, 0LL);
          if ( !v345 )
            goto LABEL_1011;
          v343->fields.spot = (struct SrcSpotBasePrefab_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                              v345,
                                                              0,
                                                              updated,
                                                              this,
                                                              (const MethodInfo_1E68CF8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          sub_B5D560(&v343->fields);
          spot = (UnityEngine_Object_o *)v343->fields.spot;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(spot, 0LL, 0LL) )
            return;
          v347 = v343->fields.spot;
          v348 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v348,
            (Il2CppObject *)v343,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__,
            0LL);
          if ( !v347 )
            goto LABEL_1011;
          v349 = 2;
          goto LABEL_663;
        case 'e':
          v618 = (QuestAfterAction_StateMain___c__DisplayClass16_2_o *)sub_B5D694(QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_2___ctor(v618, 0LL);
          if ( !v618 )
            goto LABEL_1011;
          v618->fields.CS___8__locals2 = v291;
          sub_B5D560(&v618->fields.CS___8__locals2);
          CS___8__locals2 = v618->fields.CS___8__locals2;
          if ( !CS___8__locals2 )
            goto LABEL_1011;
          v620 = CS___8__locals2->fields.that;
          updated = System_Int32__Parse(v298->fields.param, 0LL);
          if ( !v620 )
            goto LABEL_1011;
          v618->fields.spot = (struct SrcSpotBasePrefab_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                              v620,
                                                              0,
                                                              updated,
                                                              this,
                                                              (const MethodInfo_1E68CF8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          sub_B5D560(&v618->fields);
          v621 = (UnityEngine_Object_o *)v618->fields.spot;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v621, 0LL, 0LL) )
            return;
          v347 = v618->fields.spot;
          v348 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v348,
            (Il2CppObject *)v618,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__,
            0LL);
          if ( !v347 )
            goto LABEL_1011;
          v349 = 3;
LABEL_663:
          SrcSpotBasePrefab__SetState(v347, v349, v348, 0LL);
          return;
        case 'f':
          v601 = (QuestAfterAction_StateMain___c__DisplayClass16_3_o *)sub_B5D694(QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_3___ctor(v601, 0LL);
          if ( !v601 )
            goto LABEL_1011;
          v601->fields.CS___8__locals3 = v291;
          p_CS___8__locals3 = &v601->fields.CS___8__locals3;
          sub_B5D560(&v601->fields.CS___8__locals3);
          if ( !v601->fields.CS___8__locals3 )
            goto LABEL_1011;
          v603 = v601->fields.CS___8__locals3->fields.that;
          updated = System_Int32__Parse(v298->fields.param, 0LL);
          if ( !v603 )
            goto LABEL_1011;
          v601->fields.spot = (struct SrcSpotBasePrefab_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                              v603,
                                                              0,
                                                              updated,
                                                              this,
                                                              (const MethodInfo_1E68CF8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          sub_B5D560(&v601->fields);
          v604 = (UnityEngine_Object_o *)v601->fields.spot;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v604, 0LL, 0LL) )
            return;
          v605 = v601->fields.spot;
          v606 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v606,
            (Il2CppObject *)v601,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__,
            0LL);
          if ( !v605 )
            goto LABEL_1011;
          SrcSpotBasePrefab__SetState(v605, 4, v606, 0LL);
          if ( !*p_CS___8__locals3 )
            goto LABEL_1011;
          updated = (__int64)(*p_CS___8__locals3)->fields.that;
          if ( !updated )
            goto LABEL_1011;
          *(_QWORD *)(updated + 168) = v601->fields.spot;
          v607 = updated + 168;
          goto LABEL_645;
        case 'g':
          v608 = v298->fields.param;
          updated = sub_B5D5DC(char___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_1011;
          v293 = (const MethodInfo *)updated;
          if ( !*(_DWORD *)(updated + 24) )
            goto LABEL_1017;
          *(_WORD *)(updated + 32) = 44;
          if ( !v608 )
            goto LABEL_1011;
          updated = (__int64)System_String__Split(v608, (System_Char_array *)updated, 0LL);
          if ( !updated )
            goto LABEL_1011;
          v609 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_443;
          v610 = *p_that;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v610 )
            goto LABEL_1011;
          v611 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                   v610,
                   0,
                   updated,
                   this,
                   (const MethodInfo_1E68CF8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v611, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v609 + 24) <= 1u )
            goto LABEL_1017;
          updated = System_Int32__Parse(*(System_String_o **)(v609 + 40), 0LL);
          if ( !v611 )
            goto LABEL_1011;
          v611[1].fields.miLineH = updated;
          v612 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(v612, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          SrcSpotBasePrefab__SetState((SrcSpotBasePrefab_o *)v611, 5, v612, 0LL);
          updated = (__int64)*p_that;
          if ( !*p_that )
            goto LABEL_1011;
          *(_QWORD *)(updated + 168) = v611;
          v607 = updated + 168;
LABEL_645:
          sub_B5D560(v607);
          return;
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
          return;
        case 'n':
          v613 = *p_that;
          updated = System_Int32__Parse(v298->fields.param, 0LL);
          if ( !v613 )
            goto LABEL_1011;
          v614 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                           v613,
                                           0,
                                           updated,
                                           this,
                                           (const MethodInfo_1E68CF8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          updated = UnityEngine_Object__op_Equality(v614, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v614 )
            goto LABEL_1011;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v614, 0, 0LL);
          monitor = v614[9].monitor;
          if ( !monitor )
            goto LABEL_1011;
          monitor[5] = 0;
          v616 = (SrcSpotBasePrefab_o *)v614;
          v617 = 0;
          goto LABEL_681;
        case 'o':
          v625 = *p_that;
          updated = System_Int32__Parse(v298->fields.param, 0LL);
          if ( !v625 )
            goto LABEL_1011;
          v623 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                           v625,
                                           0,
                                           updated,
                                           this,
                                           (const MethodInfo_1E68CF8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          updated = UnityEngine_Object__op_Equality(v623, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v623 )
            goto LABEL_1011;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v623, 1, 0LL);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v623, 0, 0LL);
          v626 = v623[9].monitor;
          if ( !v626 )
            goto LABEL_1011;
          v626[5] = 2;
          goto LABEL_680;
        case 'p':
          v622 = *p_that;
          updated = System_Int32__Parse(v298->fields.param, 0LL);
          if ( !v622 )
            goto LABEL_1011;
          v623 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                           v622,
                                           0,
                                           updated,
                                           this,
                                           (const MethodInfo_1E68CF8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          updated = UnityEngine_Object__op_Equality(v623, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v623 )
            goto LABEL_1011;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v623, 1, 0LL);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v623, 1, 0LL);
          v624 = v623[9].monitor;
          if ( !v624 )
            goto LABEL_1011;
          v624[5] = 1;
LABEL_680:
          v617 = 1;
          v616 = (SrcSpotBasePrefab_o *)v623;
LABEL_681:
          SrcSpotBasePrefab__SetTouchType(v616, v617, 0LL);
          goto LABEL_18;
        case 'q':
          v597 = v298->fields.param;
          updated = sub_B5D5DC(char___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_1011;
          v293 = (const MethodInfo *)updated;
          if ( !*(_DWORD *)(updated + 24) )
            goto LABEL_1017;
          *(_WORD *)(updated + 32) = 44;
          if ( !v597 )
            goto LABEL_1011;
          updated = (__int64)System_String__Split(v597, (System_Char_array *)updated, 0LL);
          if ( !updated )
            goto LABEL_1011;
          v598 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_443;
          v599 = *p_that;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v599 )
            goto LABEL_1011;
          v600 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                   v599,
                   0,
                   updated,
                   this,
                   (const MethodInfo_1E68CF8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v600, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v598 + 24) <= 1u )
            goto LABEL_1017;
          updated = System_Int32__Parse(*(System_String_o **)(v598 + 40), 0LL);
          if ( !v600 )
            goto LABEL_1011;
          v600[1].fields.miLineH = updated;
          SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)v600, 1, 0LL);
          goto LABEL_18;
        default:
          switch ( id )
          {
            case 200:
              if ( this->fields.IsMapModel )
              {
                v350 = (QuestAfterAction_StateMain___c__DisplayClass16_4_o *)sub_B5D694(QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_4___ctor(v350, 0LL);
                if ( !v350 )
                  goto LABEL_1011;
                v350->fields.CS___8__locals4 = v291;
                sub_B5D560(&v350->fields.CS___8__locals4);
                CS___8__locals4 = v350->fields.CS___8__locals4;
                if ( !CS___8__locals4 )
                  goto LABEL_1011;
                v352 = CS___8__locals4->fields.that;
                updated = System_Int32__Parse(v298->fields.param, 0LL);
                if ( !v352 )
                  goto LABEL_1011;
                v350->fields.roadModel = (struct ModelLineComponent_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                                          v352,
                                                                          1,
                                                                          updated,
                                                                          this,
                                                                          (const MethodInfo_1E68CF8 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                sub_B5D560(&v350->fields);
                roadModel = (UnityEngine_Object_o *)v350->fields.roadModel;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Equality(roadModel, 0LL, 0LL) )
                {
                  v354 = v350->fields.roadModel;
                  v355 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                  System_Action___ctor(
                    v355,
                    (Il2CppObject *)v350,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__,
                    0LL);
                  if ( !v354 )
                    goto LABEL_1011;
                  v356 = 2;
                  goto LABEL_722;
                }
              }
              else
              {
                v716 = (QuestAfterAction_StateMain___c__DisplayClass16_5_o *)sub_B5D694(QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_5___ctor(v716, 0LL);
                if ( !v716 )
                  goto LABEL_1011;
                v716->fields.CS___8__locals5 = v291;
                sub_B5D560(&v716->fields.CS___8__locals5);
                CS___8__locals5 = v716->fields.CS___8__locals5;
                if ( !CS___8__locals5 )
                  goto LABEL_1011;
                v718 = CS___8__locals5->fields.that;
                updated = System_Int32__Parse(v298->fields.param, 0LL);
                if ( !v718 )
                  goto LABEL_1011;
                v716->fields.roadSprite = QuestAfterAction__GetMapComponent_srcLineSprite_(
                                            v718,
                                            1,
                                            updated,
                                            this,
                                            (const MethodInfo_1E68CF8 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                sub_B5D560(&v716->fields);
                roadSprite = (UnityEngine_Object_o *)v716->fields.roadSprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Equality(roadSprite, 0LL, 0LL) )
                {
                  v713 = v716->fields.roadSprite;
                  v714 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                  System_Action___ctor(
                    v714,
                    (Il2CppObject *)v716,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__,
                    0LL);
                  if ( !v713 )
                    goto LABEL_1011;
                  v715 = 2;
                  goto LABEL_930;
                }
              }
              return;
            case 201:
              if ( this->fields.IsMapModel )
              {
                v640 = (QuestAfterAction_StateMain___c__DisplayClass16_6_o *)sub_B5D694(QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_6___ctor(v640, 0LL);
                if ( !v640 )
                  goto LABEL_1011;
                v640->fields.CS___8__locals6 = v291;
                sub_B5D560(&v640->fields.CS___8__locals6);
                CS___8__locals6 = v640->fields.CS___8__locals6;
                if ( !CS___8__locals6 )
                  goto LABEL_1011;
                v642 = CS___8__locals6->fields.that;
                updated = System_Int32__Parse(v298->fields.param, 0LL);
                if ( !v642 )
                  goto LABEL_1011;
                v640->fields.roadModel = (struct ModelLineComponent_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                                          v642,
                                                                          1,
                                                                          updated,
                                                                          this,
                                                                          (const MethodInfo_1E68CF8 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                sub_B5D560(&v640->fields);
                v643 = (UnityEngine_Object_o *)v640->fields.roadModel;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Equality(v643, 0LL, 0LL) )
                {
                  v354 = v640->fields.roadModel;
                  v355 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                  System_Action___ctor(
                    v355,
                    (Il2CppObject *)v640,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__,
                    0LL);
                  if ( !v354 )
                    goto LABEL_1011;
                  v356 = 3;
                  goto LABEL_722;
                }
              }
              else
              {
                v720 = (QuestAfterAction_StateMain___c__DisplayClass16_7_o *)sub_B5D694(QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_7___ctor(v720, 0LL);
                if ( !v720 )
                  goto LABEL_1011;
                v720->fields.CS___8__locals7 = v291;
                sub_B5D560(&v720->fields.CS___8__locals7);
                CS___8__locals7 = v720->fields.CS___8__locals7;
                if ( !CS___8__locals7 )
                  goto LABEL_1011;
                v722 = CS___8__locals7->fields.that;
                updated = System_Int32__Parse(v298->fields.param, 0LL);
                if ( !v722 )
                  goto LABEL_1011;
                v720->fields.roadSprite = QuestAfterAction__GetMapComponent_srcLineSprite_(
                                            v722,
                                            1,
                                            updated,
                                            this,
                                            (const MethodInfo_1E68CF8 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                sub_B5D560(&v720->fields);
                v723 = (UnityEngine_Object_o *)v720->fields.roadSprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Equality(v723, 0LL, 0LL) )
                {
                  v713 = v720->fields.roadSprite;
                  v714 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                  System_Action___ctor(
                    v714,
                    (Il2CppObject *)v720,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__,
                    0LL);
                  if ( !v713 )
                    goto LABEL_1011;
                  v715 = 3;
                  goto LABEL_930;
                }
              }
              return;
            case 202:
              if ( this->fields.IsMapModel )
              {
                v632 = (QuestAfterAction_StateMain___c__DisplayClass16_8_o *)sub_B5D694(QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_8___ctor(v632, 0LL);
                if ( !v632 )
                  goto LABEL_1011;
                v632->fields.CS___8__locals8 = v291;
                sub_B5D560(&v632->fields.CS___8__locals8);
                CS___8__locals8 = v632->fields.CS___8__locals8;
                if ( !CS___8__locals8 )
                  goto LABEL_1011;
                v634 = CS___8__locals8->fields.that;
                updated = System_Int32__Parse(v298->fields.param, 0LL);
                if ( !v634 )
                  goto LABEL_1011;
                v632->fields.roadModel = (struct ModelLineComponent_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                                          v634,
                                                                          1,
                                                                          updated,
                                                                          this,
                                                                          (const MethodInfo_1E68CF8 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                sub_B5D560(&v632->fields);
                v635 = (UnityEngine_Object_o *)v632->fields.roadModel;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Equality(v635, 0LL, 0LL) )
                {
                  v354 = v632->fields.roadModel;
                  v355 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                  System_Action___ctor(
                    v355,
                    (Il2CppObject *)v632,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__,
                    0LL);
                  if ( !v354 )
                    goto LABEL_1011;
                  v356 = 4;
LABEL_722:
                  ModelLineComponent__SetState(v354, v356, v355, 0LL);
                }
              }
              else
              {
                v709 = (QuestAfterAction_StateMain___c__DisplayClass16_9_o *)sub_B5D694(QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_9___ctor(v709, 0LL);
                if ( !v709 )
                  goto LABEL_1011;
                v709->fields.CS___8__locals9 = v291;
                sub_B5D560(&v709->fields.CS___8__locals9);
                CS___8__locals9 = v709->fields.CS___8__locals9;
                if ( !CS___8__locals9 )
                  goto LABEL_1011;
                v711 = CS___8__locals9->fields.that;
                updated = System_Int32__Parse(v298->fields.param, 0LL);
                if ( !v711 )
                  goto LABEL_1011;
                v709->fields.roadSprite = QuestAfterAction__GetMapComponent_srcLineSprite_(
                                            v711,
                                            1,
                                            updated,
                                            this,
                                            (const MethodInfo_1E68CF8 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                sub_B5D560(&v709->fields);
                v712 = (UnityEngine_Object_o *)v709->fields.roadSprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Equality(v712, 0LL, 0LL) )
                {
                  v713 = v709->fields.roadSprite;
                  v714 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                  System_Action___ctor(
                    v714,
                    (Il2CppObject *)v709,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__,
                    0LL);
                  if ( !v713 )
                    goto LABEL_1011;
                  v715 = 4;
LABEL_930:
                  srcLineSprite__SetState(v713, v715, v714, 0LL);
                }
              }
              return;
            case 203:
              IsMapModel = this->fields.IsMapModel;
              v637 = *p_that;
              updated = System_Int32__Parse(v298->fields.param, 0LL);
              if ( !v637 )
                goto LABEL_1011;
              if ( IsMapModel )
              {
                v638 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         v637,
                         1,
                         updated,
                         this,
                         (const MethodInfo_1E68CF8 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v638, 0LL, 0LL);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v638 )
                  goto LABEL_1011;
                ModelLineComponent__SetQuestAfterActionScaleAnimQuick((ModelLineComponent_o *)v638, 0, 0LL);
                mcAtlasP = v638->fields.mcTweenScaleP;
                if ( !mcAtlasP )
                  goto LABEL_1011;
              }
              else
              {
                v724 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                 v637,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_1E68CF8 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                updated = UnityEngine_Object__op_Equality(v724, 0LL, 0LL);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v724 )
                  goto LABEL_1011;
                srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v724, 0, 0LL);
                mcAtlasP = v724[5].klass;
                if ( !mcAtlasP )
                  goto LABEL_1011;
              }
              goto LABEL_937;
            case 204:
              v628 = this->fields.IsMapModel;
              v629 = *p_that;
              updated = System_Int32__Parse(v298->fields.param, 0LL);
              if ( !v629 )
                goto LABEL_1011;
              if ( v628 )
              {
                v630 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         v629,
                         1,
                         updated,
                         this,
                         (const MethodInfo_1E68CF8 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v630, 0LL, 0LL);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v630 )
                  goto LABEL_1011;
                ModelLineComponent__SetQuestAfterActionScaleAnimQuick((ModelLineComponent_o *)v630, 1, 0LL);
                ModelLineComponent__SetQuestAfterActionColorAnimQuick((ModelLineComponent_o *)v630, 0, 0LL);
                mcTweenScaleP = v630->fields.mcTweenScaleP;
                if ( !mcTweenScaleP )
                  goto LABEL_1011;
              }
              else
              {
                v707 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                 v629,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_1E68CF8 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                updated = UnityEngine_Object__op_Equality(v707, 0LL, 0LL);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v707 )
                  goto LABEL_1011;
                srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v707, 1, 0LL);
                srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v707, 0, 0LL);
                mcTweenScaleP = v707[5].klass;
                if ( !mcTweenScaleP )
                  goto LABEL_1011;
              }
              v708 = 2;
              goto LABEL_945;
            case 205:
              v644 = this->fields.IsMapModel;
              v645 = *p_that;
              updated = System_Int32__Parse(v298->fields.param, 0LL);
              if ( !v645 )
                goto LABEL_1011;
              if ( v644 )
              {
                v646 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         v645,
                         1,
                         updated,
                         this,
                         (const MethodInfo_1E68CF8 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v646, 0LL, 0LL);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v646 )
                  goto LABEL_1011;
                ModelLineComponent__SetQuestAfterActionScaleAnimQuick((ModelLineComponent_o *)v646, 1, 0LL);
                ModelLineComponent__SetQuestAfterActionColorAnimQuick((ModelLineComponent_o *)v646, 1, 0LL);
                mcTweenScaleP = v646->fields.mcTweenScaleP;
                if ( !mcTweenScaleP )
                  goto LABEL_1011;
              }
              else
              {
                v725 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                 v645,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_1E68CF8 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                updated = UnityEngine_Object__op_Equality(v725, 0LL, 0LL);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v725 )
                  goto LABEL_1011;
                srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v725, 1, 0LL);
                srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v725, 1, 0LL);
                mcTweenScaleP = v725[5].klass;
                if ( !mcTweenScaleP )
                  goto LABEL_1011;
              }
              v708 = 1;
LABEL_945:
              mcTweenScaleP[4] = v708;
              goto LABEL_18;
            default:
              return;
          }
      }
    }
    switch ( id )
    {
      case 300:
      case 305:
        v323 = v298->fields.param;
        updated = sub_B5D5DC(char___TypeInfo, 1LL);
        if ( !updated )
          goto LABEL_1011;
        v293 = (const MethodInfo *)updated;
        if ( !*(_DWORD *)(updated + 24) )
          goto LABEL_1017;
        *(_WORD *)(updated + 32) = 44;
        if ( !v323 )
          goto LABEL_1011;
        updated = (__int64)System_String__Split(v323, (System_Char_array *)updated, 0LL);
        if ( !updated )
          goto LABEL_1011;
        v324 = *(_QWORD *)(updated + 24);
        v325 = updated;
        if ( (int)v324 <= 0 )
          goto LABEL_443;
        if ( (int)v324 > 2 )
        {
          v660 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v324 = *(_QWORD *)(v325 + 24);
          v326 = v660 * 0.001;
        }
        else
        {
          v326 = 0.5;
        }
        if ( (int)v324 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v325 + 40), 0LL);
          v648 = updated;
          if ( !(unsigned int)*(_QWORD *)(v325 + 24) )
            goto LABEL_1017;
        }
        else
        {
          v648 = 15;
          if ( !(_DWORD)v324 )
            goto LABEL_1017;
        }
        v662 = *p_that;
        updated = System_Int32__Parse(*(System_String_o **)(v325 + 32), 0LL);
        if ( !v662 )
          goto LABEL_1011;
        MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v662, 0, updated, this, 0LL);
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
          if ( !byte_42E4B1E )
          {
            sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)v293, v664, v665);
            byte_42E4B1E = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v666 = **(_QWORD **)(updated + 184);
          if ( !v666 )
            goto LABEL_1011;
          updated = *(_QWORD *)(v666 + 256);
          if ( !updated )
            goto LABEL_1011;
          v783.fields.x = x;
          v783.fields.y = y;
          v783.fields.z = z;
          v784 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v783, 0LL);
          x = v784.fields.x;
          y = v784.fields.y;
          z = v784.fields.z;
        }
        if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0LL);
        if ( (updated & 1) == 0 )
        {
          if ( !*(_DWORD *)(v325 + 24) )
            goto LABEL_1017;
          v668 = *(System_String_o **)(v325 + 32);
          if ( v668 )
          {
            updated = System_String__op_Equality(
                        *(System_String_o **)(v325 + 32),
                        (System_String_o *)StringLiteral_1115/*"10703"*/,
                        0LL);
            if ( (updated & 1) != 0 )
            {
              y = y + -50.0;
            }
            else
            {
              updated = System_String__op_Equality(v668, (System_String_o *)StringLiteral_1177/*"30101"*/, 0LL);
              if ( (updated & 1) != 0 )
                y = y + -50.0;
            }
          }
        }
        if ( v298->fields.id != 305 || *(int *)(v325 + 24) < 4 )
        {
          if ( !*p_that )
            goto LABEL_1011;
          mMapCamera = (*p_that)->fields.mMapCamera;
          v658 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          v659 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__;
          goto LABEL_989;
        }
        if ( !*p_that )
          goto LABEL_1011;
        v737 = (*p_that)->fields.mMapCamera;
        *(_QWORD *)&v772.fields.value.fields.x = &v760;
        v788.fields.x = x;
        v788.fields.y = y;
        *(_QWORD *)&v772.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
        v788.fields.z = z;
        *(_QWORD *)&v760.fields.value.fields.x = 0LL;
        *(_QWORD *)&v760.fields.value.fields.z = 0LL;
        System_Nullable_Vector3____ctor(v772, v788, v667);
        if ( *(_DWORD *)(v325 + 24) <= 3u )
          goto LABEL_1017;
        v742 = System_Single__Parse(*(System_String_o **)(v325 + 56), 0LL);
        p_size = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(p_size, v742, (const MethodInfo_234CDB0 *)Method_System_Nullable_float___ctor__);
        v739 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        v740 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__;
        goto LABEL_1006;
      case 301:
      case 306:
        v437 = v298->fields.param;
        updated = sub_B5D5DC(char___TypeInfo, 1LL);
        if ( !updated )
          goto LABEL_1011;
        v293 = (const MethodInfo *)updated;
        if ( !*(_DWORD *)(updated + 24) )
          goto LABEL_1017;
        *(_WORD *)(updated + 32) = 44;
        if ( !v437 )
          goto LABEL_1011;
        updated = (__int64)System_String__Split(v437, (System_Char_array *)updated, 0LL);
        if ( !updated )
          goto LABEL_1011;
        v438 = *(_QWORD *)(updated + 24);
        v439 = updated;
        if ( (int)v438 <= 0 )
          goto LABEL_443;
        if ( (int)v438 > 2 )
        {
          v661 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v438 = *(_QWORD *)(v439 + 24);
          v326 = v661 * 0.001;
        }
        else
        {
          v326 = 0.5;
        }
        if ( (int)v438 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v439 + 40), 0LL);
          v648 = updated;
          if ( !(unsigned int)*(_QWORD *)(v439 + 24) )
            goto LABEL_1017;
        }
        else
        {
          v648 = 15;
          if ( !(_DWORD)v438 )
            goto LABEL_1017;
        }
        v669 = *p_that;
        updated = System_Int32__Parse(*(System_String_o **)(v439 + 32), 0LL);
        if ( !v669 )
          goto LABEL_1011;
        v670 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v669, 1, updated, this, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        updated = UnityEngine_Object__op_Equality(v670, 0LL, 0LL);
        if ( (updated & 1) != 0 )
          return;
        if ( this->fields.IsMapModel )
        {
          if ( !v670 )
            goto LABEL_1011;
          updated = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               (UnityEngine_GameObject_o *)v670,
                               (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
          if ( !updated )
            goto LABEL_1011;
          Position = GameObjectExtensions__GetPosition((UnityEngine_GameObject_o *)*(_QWORD *)(updated + 24), 0LL);
          v673 = Position.fields.x;
          v674 = Position.fields.y;
          v675 = Position.fields.z;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_42E4B1E )
          {
            sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)v293, v671, v672);
            byte_42E4B1E = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v676 = **(_QWORD **)(updated + 184);
          if ( !v676 )
            goto LABEL_1011;
          updated = *(_QWORD *)(v676 + 256);
          if ( !updated )
            goto LABEL_1011;
          v786.fields.x = v673;
          v786.fields.y = v674;
          v786.fields.z = v675;
          *(UnityEngine_Vector3_o *)&v677 = ScrTerminalMap__ConvertWorldToScreenPosition(
                                              (ScrTerminalMap_o *)updated,
                                              v786,
                                              0LL);
        }
        else
        {
          *(UnityEngine_Vector3_o *)&v677 = GameObjectExtensions__GetLocalPosition(
                                              (UnityEngine_GameObject_o *)v670,
                                              0LL);
        }
        v727 = v677;
        v728 = v678;
        v729 = v679;
        if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0LL);
        if ( (updated & 1) == 0 )
        {
          if ( !*(_DWORD *)(v439 + 24) )
            goto LABEL_1017;
          v731 = *(System_String_o **)(v439 + 32);
          if ( v731 )
          {
            updated = System_String__op_Equality(
                        *(System_String_o **)(v439 + 32),
                        (System_String_o *)StringLiteral_1115/*"10703"*/,
                        0LL);
            if ( (updated & 1) != 0 )
            {
              v728 = v728 + -95.0;
            }
            else
            {
              updated = System_String__op_Equality(v731, (System_String_o *)StringLiteral_1178/*"30102"*/, 0LL);
              if ( (updated & 1) != 0 )
                v728 = v728 + 45.0;
            }
          }
        }
        if ( v298->fields.id != 306 || *(int *)(v439 + 24) < 4 )
        {
          if ( !*p_that )
            goto LABEL_1011;
          v743 = (*p_that)->fields.mMapCamera;
          v741 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v741,
            (Il2CppObject *)v291,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__,
            0LL);
          if ( !v743 )
            goto LABEL_1011;
          v515 = v743;
          v516 = v727;
          v517 = v728;
          v518 = v729;
          goto LABEL_1001;
        }
        if ( !*p_that )
          goto LABEL_1011;
        v737 = (*p_that)->fields.mMapCamera;
        *(_QWORD *)&v773.fields.value.fields.x = &v760;
        v789.fields.x = v727;
        v789.fields.y = v728;
        *(_QWORD *)&v773.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
        v789.fields.z = v729;
        *(_QWORD *)&v760.fields.value.fields.x = 0LL;
        *(_QWORD *)&v760.fields.value.fields.z = 0LL;
        System_Nullable_Vector3____ctor(v773, v789, v730);
        if ( *(_DWORD *)(v439 + 24) <= 3u )
          goto LABEL_1017;
        v744 = System_Single__Parse(*(System_String_o **)(v439 + 56), 0LL);
        v767 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v767, v744, (const MethodInfo_234CDB0 *)Method_System_Nullable_float___ctor__);
        v739 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        v740 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__;
LABEL_1006:
        v745 = v739;
        System_Action___ctor(v739, (Il2CppObject *)v291, *v740, 0LL);
        if ( !v737 )
          goto LABEL_1011;
        v776 = v760;
        v770 = size;
        v746 = v737;
        v747 = v326;
        v748 = v648;
        v749 = v745;
        goto LABEL_1016;
      case 302:
      case 307:
        v411 = v298->fields.param;
        updated = sub_B5D5DC(char___TypeInfo, 1LL);
        if ( !updated )
          goto LABEL_1011;
        v293 = (const MethodInfo *)updated;
        if ( !*(_DWORD *)(updated + 24) )
          goto LABEL_1017;
        *(_WORD *)(updated + 32) = 44;
        if ( !v411 )
          goto LABEL_1011;
        updated = (__int64)System_String__Split(v411, (System_Char_array *)updated, 0LL);
        if ( !updated )
          goto LABEL_1011;
        v412 = *(_QWORD *)(updated + 24);
        v413 = updated;
        if ( (int)v412 <= 0 )
          goto LABEL_443;
        if ( (int)v412 > 2 )
        {
          v647 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v412 = *(_QWORD *)(v413 + 24);
          v326 = v647 * 0.001;
        }
        else
        {
          v326 = 0.5;
        }
        if ( (int)v412 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v413 + 40), 0LL);
          v648 = updated;
          if ( !(unsigned int)*(_QWORD *)(v413 + 24) )
            goto LABEL_1017;
        }
        else
        {
          v648 = 15;
          if ( !(_DWORD)v412 )
            goto LABEL_1017;
        }
        v649 = *p_that;
        updated = System_Int32__Parse(*(System_String_o **)(v413 + 32), 0LL);
        if ( !v649 )
          goto LABEL_1011;
        v650 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v649, 2, updated, this, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(v650, 0LL, 0LL) )
          return;
        v779 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v650, 0LL);
        x = v779.fields.x;
        y = v779.fields.y;
        z = v779.fields.z;
        if ( this->fields.IsMapModel )
        {
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_42E4B1E )
          {
            sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)v293, (_DWORD)v651, v652);
            byte_42E4B1E = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v656 = **(_QWORD **)(updated + 184);
          if ( !v656 )
            goto LABEL_1011;
          updated = *(_QWORD *)(v656 + 256);
          if ( !updated )
            goto LABEL_1011;
          v780.fields.x = x;
          v780.fields.y = y;
          v780.fields.z = z;
          v781 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v780, 0LL);
          x = v781.fields.x;
          y = v781.fields.y;
          z = v781.fields.z;
        }
        if ( v298->fields.id != 307 || *(int *)(v413 + 24) < 4 )
        {
          if ( !*p_that )
            goto LABEL_1011;
          mMapCamera = (*p_that)->fields.mMapCamera;
          v658 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          v659 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__14__;
LABEL_989:
          v741 = v658;
          System_Action___ctor(v658, (Il2CppObject *)v291, *v659, 0LL);
          if ( !mMapCamera )
            goto LABEL_1011;
          v515 = mMapCamera;
          v516 = x;
          v517 = y;
          v518 = z;
LABEL_1001:
          v519 = v326;
          v520 = v648;
          v521 = v741;
          goto LABEL_1002;
        }
        if ( !*p_that )
          goto LABEL_1011;
        v737 = (*p_that)->fields.mMapCamera;
        *(_QWORD *)&v771.fields.value.fields.x = &v760;
        v787.fields.x = x;
        v787.fields.y = y;
        *(_QWORD *)&v771.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
        v787.fields.z = z;
        *(_QWORD *)&v760.fields.value.fields.x = 0LL;
        *(_QWORD *)&v760.fields.value.fields.z = 0LL;
        System_Nullable_Vector3____ctor(v771, v787, v651);
        if ( *(_DWORD *)(v413 + 24) <= 3u )
          goto LABEL_1017;
        v738 = System_Single__Parse(*(System_String_o **)(v413 + 56), 0LL);
        v765 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v765, v738, (const MethodInfo_234CDB0 *)Method_System_Nullable_float___ctor__);
        v739 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        v740 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__13__;
        goto LABEL_1006;
      case 303:
      case 308:
        v414 = v298->fields.param;
        updated = sub_B5D5DC(char___TypeInfo, 1LL);
        if ( !updated )
          goto LABEL_1011;
        v293 = (const MethodInfo *)updated;
        if ( !*(_DWORD *)(updated + 24) )
          goto LABEL_1017;
        *(_WORD *)(updated + 32) = 44;
        if ( !v414 )
          goto LABEL_1011;
        updated = (__int64)System_String__Split(v414, (System_Char_array *)updated, 0LL);
        if ( !updated )
          goto LABEL_1011;
        v417 = updated;
        if ( *(int *)(updated + 24) < 4 )
          goto LABEL_443;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_42E5AE7 )
        {
          sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)v293, v415, v416);
          byte_42E5AE7 = 1;
        }
        updated = (__int64)TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          updated = (__int64)TerminalPramsManager_TypeInfo;
        }
        if ( *(_BYTE *)(*(_QWORD *)(updated + 184) + 104LL) )
          goto LABEL_443;
        if ( *(_DWORD *)(v417 + 24) <= 2u )
          goto LABEL_1017;
        v418 = System_Single__Parse(*(System_String_o **)(v417 + 48), 0LL) * 0.001;
        v419 = v418 >= 0.0 ? v418 : 0.5;
        if ( *(_DWORD *)(v417 + 24) <= 3u )
          goto LABEL_1017;
        v422 = System_Int32__Parse(*(System_String_o **)(v417 + 56), 0LL);
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_42E4B1E )
        {
          sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)v293, v420, v421);
          byte_42E4B1E = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v423 = **(_QWORD **)(updated + 184);
        if ( !v423 )
          goto LABEL_1011;
        if ( !*(_DWORD *)(v417 + 24) )
          goto LABEL_1017;
        v424 = *(ScrTerminalMap_o **)(v423 + 256);
        v425 = System_Single__Parse(*(System_String_o **)(v417 + 32), 0LL);
        if ( *(_DWORD *)(v417 + 24) <= 1u )
          goto LABEL_1017;
        v426 = v425;
        v427 = System_Single__Parse(*(System_String_o **)(v417 + 40), 0LL);
        if ( !v424 )
          goto LABEL_1011;
        *(UnityEngine_Vector3_o *)&v429 = ScrTerminalMap__LocalPosFromCoord(v424, v426, v427, 0.0, 0.0, 0LL);
        v432 = v429;
        v433 = v430;
        v434 = v431;
        if ( v298->fields.id != 308 || *(int *)(v417 + 24) < 5 )
        {
          if ( !*p_that )
            goto LABEL_1011;
          v435 = (*p_that)->fields.mMapCamera;
          v436 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v436,
            (Il2CppObject *)v291,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__16__,
            0LL);
          if ( !v435 )
            goto LABEL_1011;
LABEL_481:
          v515 = v435;
          v516 = v432;
          v517 = v433;
          v518 = v434;
          v519 = v419;
          v520 = v422;
          v521 = v436;
LABEL_1002:
          MapCamera__StartAutoMove(v515, *(UnityEngine_Vector3_o *)&v516, v519, v520, v521, 0LL);
          return;
        }
        if ( !*p_that )
          goto LABEL_1011;
        v750 = (*p_that)->fields.mMapCamera;
        *(_QWORD *)&v774.fields.value.fields.x = &v760;
        *(_QWORD *)&v774.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
        v760 = (System_Nullable_Vector3__o)0LL;
        System_Nullable_Vector3____ctor(v774, *(UnityEngine_Vector3_o *)&v429, v428);
        if ( *(_DWORD *)(v417 + 24) <= 4u )
          goto LABEL_1017;
        v751 = System_Single__Parse(*(System_String_o **)(v417 + 64), 0LL);
        v768 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v768, v751, (const MethodInfo_234CDB0 *)Method_System_Nullable_float___ctor__);
        v752 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(
          v752,
          (Il2CppObject *)v291,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__15__,
          0LL);
        if ( !v750 )
          goto LABEL_1011;
LABEL_1015:
        v776 = v760;
        v770 = size;
        v746 = v750;
        v747 = v419;
        v748 = v422;
        v749 = v752;
LABEL_1016:
        MapCamera__StartAutoWork(v746, v747, v776, v770, v748, v749, 0LL);
        return;
      case 304:
        v488 = v298->fields.param;
        updated = sub_B5D5DC(char___TypeInfo, 1LL);
        if ( !updated )
          goto LABEL_1011;
        v293 = (const MethodInfo *)updated;
        if ( !*(_DWORD *)(updated + 24) )
          goto LABEL_1017;
        *(_WORD *)(updated + 32) = 44;
        if ( !v488 )
          goto LABEL_1011;
        updated = (__int64)System_String__Split(v488, (System_Char_array *)updated, 0LL);
        if ( !updated )
          goto LABEL_1011;
        v489 = *(_DWORD *)(updated + 24);
        v490 = updated;
        if ( v489 <= 1 )
          goto LABEL_443;
        v491 = System_Single__Parse(*(System_String_o **)(updated + 32), 0LL);
        if ( *(_DWORD *)(v490 + 24) <= 1u )
          goto LABEL_1017;
        v492 = v491;
        v493 = System_Single__Parse(*(System_String_o **)(v490 + 40), 0LL);
        if ( !*p_that )
          goto LABEL_1011;
        v494 = (*p_that)->fields.mMapCamera;
        v495 = v493 * 0.001;
        if ( v495 >= 0.0 )
          v496 = v495;
        else
          v496 = 0.5;
        if ( v489 < 3 )
        {
          v497 = 5;
        }
        else
        {
          if ( *(_DWORD *)(v490 + 24) <= 2u )
            goto LABEL_1017;
          v497 = System_Int32__Parse(*(System_String_o **)(v490 + 48), 0LL);
        }
        v726 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(
          v726,
          (Il2CppObject *)v291,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__17__,
          0LL);
        if ( v494 )
        {
          MapCamera__StartAutoZoom(v494, v492, v496, v497, v726, 0LL);
          return;
        }
        goto LABEL_1018;
      default:
        if ( id == 350 )
        {
          v440 = v298->fields.param;
          MyFsmP = sub_B5D5DC(char___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1018;
          v293 = (const MethodInfo *)MyFsmP;
          if ( *(_DWORD *)(MyFsmP + 24) )
          {
            *(_WORD *)(MyFsmP + 32) = 44;
            if ( v440 )
            {
              MyFsmP = (__int64)System_String__Split(v440, (System_Char_array *)MyFsmP, 0LL);
              if ( MyFsmP )
              {
                v441 = MyFsmP;
                if ( *(int *)(MyFsmP + 24) <= 0 )
                  goto LABEL_443;
                v442 = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
                if ( v442 < 1 )
                  goto LABEL_443;
                v445 = v442;
                v446 = 0.5;
                if ( *(int *)(v441 + 24) > 1 )
                {
                  v447 = System_Int32__Parse(*(System_String_o **)(v441 + 40), 0LL);
                  if ( *(int *)(v441 + 24) >= 3 )
                    v446 = System_Single__Parse(*(System_String_o **)(v441 + 48), 0LL) * 0.001;
                }
                else
                {
                  v447 = 15;
                }
                if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                }
                if ( !byte_42E4B1E )
                {
                  sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)v293, v443, v444);
                  byte_42E4B1E = 1;
                }
                MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
                if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v734 = **(_QWORD **)(MyFsmP + 184);
                if ( v734 )
                {
                  v735 = *(ScrTerminalMap_o **)(v734 + 256);
                  v736 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                  System_Action___ctor(
                    v736,
                    (Il2CppObject *)v291,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__18__,
                    0LL);
                  if ( v735 )
                  {
                    ScrTerminalMap__RequestMapMove_24298156(v735, v445, v446, v447, v736, 0LL);
                    return;
                  }
                }
              }
            }
            goto LABEL_1018;
          }
          goto LABEL_1020;
        }
        if ( (unsigned int)(id - 351) >= 2 )
          return;
        v498 = v298->fields.param;
        MyFsmP = sub_B5D5DC(char___TypeInfo, 1LL);
        if ( !MyFsmP )
          goto LABEL_1018;
        v293 = (const MethodInfo *)MyFsmP;
        if ( !*(_DWORD *)(MyFsmP + 24) )
          goto LABEL_1020;
        *(_WORD *)(MyFsmP + 32) = 44;
        if ( !v498 )
          goto LABEL_1018;
        MyFsmP = (__int64)System_String__Split(v498, (System_Char_array *)MyFsmP, 0LL);
        if ( !MyFsmP )
          goto LABEL_1018;
        v499 = MyFsmP;
        if ( *(int *)(MyFsmP + 24) <= 4 )
          goto LABEL_443;
        v500 = System_Single__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
        if ( *(_DWORD *)(v499 + 24) <= 1u )
          goto LABEL_1020;
        v501 = v500;
        v502 = System_Single__Parse(*(System_String_o **)(v499 + 40), 0LL);
        if ( *(_DWORD *)(v499 + 24) <= 2u )
          goto LABEL_1020;
        v503 = v502;
        v504 = System_Single__Parse(*(System_String_o **)(v499 + 48), 0LL);
        if ( *(_DWORD *)(v499 + 24) <= 3u )
          goto LABEL_1020;
        v505 = v504;
        v506 = System_Single__Parse(*(System_String_o **)(v499 + 56), 0LL);
        if ( *(_DWORD *)(v499 + 24) <= 4u )
          goto LABEL_1020;
        v507 = v506;
        v422 = System_Int32__Parse(*(System_String_o **)(v499 + 64), 0LL);
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_42E4B1E )
        {
          sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)v293, v508, v509);
          byte_42E4B1E = 1;
        }
        MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v510 = **(_QWORD **)(MyFsmP + 184);
        if ( !v510 )
          goto LABEL_1018;
        MyFsmP = *(_QWORD *)(v510 + 256);
        if ( !MyFsmP )
          goto LABEL_1018;
        v777.fields.y = v503;
        v777.fields.z = v505;
        v419 = v507 * 0.001;
        v777.fields.x = v501;
        *(UnityEngine_Vector3_o *)&v512 = ScrTerminalMap__ConvertLocalToScreenPosition(
                                            (ScrTerminalMap_o *)MyFsmP,
                                            v777,
                                            0LL);
        v432 = v512;
        v433 = v513;
        v434 = v514;
        if ( v298->fields.id != 352 || *(int *)(v499 + 24) < 6 )
        {
          if ( !*p_that )
            goto LABEL_1018;
          v435 = (*p_that)->fields.mMapCamera;
          v436 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v436,
            (Il2CppObject *)v291,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__20__,
            0LL);
          if ( !v435 )
            goto LABEL_1018;
          goto LABEL_481;
        }
        if ( !*p_that )
          goto LABEL_1018;
        v750 = (*p_that)->fields.mMapCamera;
        *(_QWORD *)&v775.fields.value.fields.x = &v760;
        *(_QWORD *)&v775.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
        v760 = (System_Nullable_Vector3__o)0LL;
        System_Nullable_Vector3____ctor(v775, *(UnityEngine_Vector3_o *)&v512, v511);
        if ( *(_DWORD *)(v499 + 24) <= 5u )
          goto LABEL_1020;
        v753 = System_Single__Parse(*(System_String_o **)(v499 + 72), 0LL);
        v769 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v769, v753, (const MethodInfo_234CDB0 *)Method_System_Nullable_float___ctor__);
        v752 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
        System_Action___ctor(
          v752,
          (Il2CppObject *)v291,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__19__,
          0LL);
        if ( !v750 )
          goto LABEL_1018;
        goto LABEL_1015;
    }
  }
  if ( id <= 604 )
  {
    if ( id > 540 )
    {
      switch ( id )
      {
        case 600:
          v318 = (System_String_o *)StringLiteral_1/*""*/;
          v319 = System_String__Concat_44577788((System_String_o *)StringLiteral_11017/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v298->fields.param, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v320 = LocalizationManager__Get(v319, 0LL);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v322 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v322,
            (Il2CppObject *)v291,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__36__,
            0LL);
          if ( !Instance )
            goto LABEL_1018;
          CommonUI__OpenNotificationDialog(Instance, v318, v320, v322, 210, 0, 0, 0, 1, 0, 0, 0, 0LL, 0LL);
          return;
        case 601:
          v474 = (System_String_o *)StringLiteral_1/*""*/;
          MyFsmP = sub_B5D5DC(string___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1018;
          v475 = (System_String_array *)MyFsmP;
          MyFsmP = StringLiteral_69/*"\r\n"*/;
          if ( StringLiteral_69/*"\r\n"*/ )
          {
            MyFsmP = sub_B5D684(StringLiteral_69/*"\r\n"*/, v475->obj.klass->_1.element_class);
            if ( !MyFsmP )
            {
              v758 = sub_B5D6BC();
              sub_B5D668(v758, 0LL);
            }
            v476 = StringLiteral_69/*"\r\n"*/;
          }
          else
          {
            v476 = 0LL;
          }
          if ( !v475->max_length )
            goto LABEL_1020;
          v475->m_Items[0] = (System_String_o *)v476;
          sub_B5D560(v475->m_Items);
          updated = (__int64)v298->fields.param;
          if ( !updated )
            goto LABEL_1019;
          updated = (__int64)System_String__Split_44640408((System_String_o *)updated, v475, 0, 0LL);
          if ( !updated )
            goto LABEL_1019;
          v683 = *(_DWORD *)(updated + 24);
          if ( v683 <= 0 )
            goto LABEL_443;
          v684 = *(System_String_o **)(updated + 32);
          if ( v683 == 1 )
          {
            v685 = *(System_String_o **)(updated + 32);
            v684 = v474;
          }
          else
          {
            v685 = *(System_String_o **)(updated + 40);
          }
          v689 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v690 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v690,
            (Il2CppObject *)v291,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__37__,
            0LL);
          if ( !v689 )
            goto LABEL_1019;
          CommonUI__OpenNotificationDialog(v689, v684, v685, v690, 210, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
          return;
        case 602:
          v466 = (System_String_o *)StringLiteral_1/*""*/;
          v467 = System_String__Concat_44577788((System_String_o *)StringLiteral_11017/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v298->fields.param, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v468 = LocalizationManager__Get(v467, 0LL);
          v469 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v470 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v470,
            (Il2CppObject *)v291,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__38__,
            0LL);
          if ( !v469 )
            goto LABEL_1019;
          CommonUI__OpenNotificationDialog_18202968(
            v469,
            v466,
            v468,
            v470,
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
          v471 = (System_String_o *)StringLiteral_1/*""*/;
          updated = sub_B5D5DC(string___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_1019;
          v472 = (System_String_array *)updated;
          updated = StringLiteral_69/*"\r\n"*/;
          if ( StringLiteral_69/*"\r\n"*/ )
          {
            updated = sub_B5D684(StringLiteral_69/*"\r\n"*/, v472->obj.klass->_1.element_class);
            if ( !updated )
            {
              v757 = sub_B5D6BC();
              sub_B5D668(v757, 0LL);
            }
            v473 = StringLiteral_69/*"\r\n"*/;
          }
          else
          {
            v473 = 0LL;
          }
          if ( !v472->max_length )
            goto LABEL_1021;
          v472->m_Items[0] = (System_String_o *)v473;
          sub_B5D560(v472->m_Items);
          updated = (__int64)v298->fields.param;
          if ( !updated )
            goto LABEL_1019;
          updated = (__int64)System_String__Split_44640408((System_String_o *)updated, v472, 0, 0LL);
          if ( !updated )
            goto LABEL_1019;
          v680 = *(_DWORD *)(updated + 24);
          if ( v680 <= 0 )
            goto LABEL_443;
          v681 = *(System_String_o **)(updated + 32);
          if ( v680 == 1 )
          {
            v682 = *(System_String_o **)(updated + 32);
            v681 = v471;
          }
          else
          {
            v682 = *(System_String_o **)(updated + 40);
          }
          v687 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v688 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v688,
            (Il2CppObject *)v291,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__39__,
            0LL);
          if ( !v687 )
            goto LABEL_1019;
          CommonUI__OpenNotificationDialog_18202968(
            v687,
            v681,
            v682,
            v688,
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
          v461 = (System_String_o *)StringLiteral_1/*""*/;
          v462 = System_String__Concat_44577788((System_String_o *)StringLiteral_11017/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v298->fields.param, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v463 = LocalizationManager__Get(v462, 0LL);
          v464 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v465 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            v465,
            (Il2CppObject *)v291,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__40__,
            0LL);
          if ( !v464 )
            goto LABEL_1019;
          CommonUI__OpenNotificationDialog_18202968(
            v464,
            v461,
            v463,
            v465,
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
            goto LABEL_18;
          if ( id != 560 )
            return;
          v357 = v298->fields.param;
          updated = sub_B5D5DC(char___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_1019;
          v293 = (const MethodInfo *)updated;
          if ( !*(_DWORD *)(updated + 24) )
            goto LABEL_1021;
          *(_WORD *)(updated + 32) = 44;
          if ( !v357 )
            goto LABEL_1019;
          updated = (__int64)System_String__Split(v357, (System_Char_array *)updated, 0LL);
          if ( !updated )
            goto LABEL_1019;
          v358 = *(_QWORD *)(updated + 24);
          if ( !v358 )
            goto LABEL_124;
          if ( !(_DWORD)v358 )
            goto LABEL_1021;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          LODWORD(v358) = (int)updated > 0;
LABEL_124:
          if ( !*p_that )
            goto LABEL_1019;
          TitleInfoCtrlCallback_k__BackingField = (*p_that)->fields._TitleInfoCtrlCallback_k__BackingField;
          if ( (_DWORD)v358 )
          {
            if ( TitleInfoCtrlCallback_k__BackingField )
            {
              QuestAfterAction_TitleInfoControlCallback__Start(
                (*p_that)->fields._TitleInfoCtrlCallback_k__BackingField,
                0LL,
                0LL);
              goto LABEL_18;
            }
          }
          else
          {
            v627 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
            System_Action___ctor(v627, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( TitleInfoCtrlCallback_k__BackingField )
            {
              QuestAfterAction_TitleInfoControlCallback__Start(TitleInfoCtrlCallback_k__BackingField, v627, 0LL);
              return;
            }
          }
          break;
      }
      goto LABEL_1019;
    }
    if ( id != 530 )
    {
      if ( id != 540 )
        return;
      v336 = v298->fields.param;
      updated = sub_B5D5DC(char___TypeInfo, 1LL);
      if ( !updated )
        goto LABEL_1019;
      v293 = (const MethodInfo *)updated;
      if ( !*(_DWORD *)(updated + 24) )
        goto LABEL_1021;
      *(_WORD *)(updated + 32) = 44;
      if ( !v336 )
        goto LABEL_1019;
      updated = (__int64)System_String__Split(v336, (System_Char_array *)updated, 0LL);
      if ( !updated )
        goto LABEL_1019;
      v337 = updated;
      if ( !*(_DWORD *)(updated + 24) )
        goto LABEL_1021;
      v340 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
      if ( *(int *)(v337 + 24) < 2 )
      {
        v341 = -1;
      }
      else
      {
        v341 = System_Int32__Parse(*(System_String_o **)(v337 + 40), 0LL);
        if ( *(int *)(v337 + 24) >= 3 )
        {
          v342 = System_Int32__Parse(*(System_String_o **)(v337 + 48), 0LL);
          goto LABEL_333;
        }
      }
      v342 = -1;
LABEL_333:
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42E4B29 )
      {
        sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)v293, v338, v339);
        byte_42E4B29 = 1;
      }
      v448 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v448 = TerminalPramsManager_TypeInfo;
      }
      v448->static_fields->_IsAutoResume_k__BackingField = 1;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_42E4B1E )
      {
        sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)v293, v338, v339);
        byte_42E4B1E = 1;
      }
      updated = (__int64)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        updated = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v449 = **(_QWORD **)(updated + 184);
      if ( v449 )
      {
        updated = *(_QWORD *)(v449 + 256);
        if ( updated )
        {
          if ( !ScrTerminalMap__RequestMapChange((ScrTerminalMap_o *)updated, v340, v341, v342, 0LL) )
          {
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            }
            if ( !byte_42E4B29 )
            {
              sub_B5D5C4(&TerminalPramsManager_TypeInfo, v450, v451, v452);
              byte_42E4B29 = 1;
            }
            v453 = TerminalPramsManager_TypeInfo;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v453 = TerminalPramsManager_TypeInfo;
            }
            v453->static_fields->_IsAutoResume_k__BackingField = 0;
            goto LABEL_18;
          }
          ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
            this,
            this->klass->vtable._15_onEnd.methodPtr);
          updated = (__int64)*p_that;
          if ( *p_that )
          {
            QuestAfterAction__SetState((QuestAfterAction_o *)updated, 0, 0LL);
            return;
          }
        }
      }
      goto LABEL_1019;
    }
    v360 = System_Int32__Parse(v298->fields.param, 0LL);
    MyFsmP = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( MyFsmP )
    {
      MyFsmP = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)MyFsmP,
                          (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( MyFsmP )
      {
        v361 = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)MyFsmP,
                                  v360,
                                  (const MethodInfo_23FAE10 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
        }
        MyFsmP = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( MyFsmP )
        {
          MyFsmP = (__int64)QuestTree__GetQuestInfo((QuestTree_o *)MyFsmP, v360, 0LL);
          if ( MyFsmP )
          {
            v363 = MyFsmP;
            if ( *(_DWORD *)(MyFsmP + 32) != 1 )
            {
              QuestAfterAction_StateMain__ForceEndAnim(this, 1, v362);
              return;
            }
            if ( v361 )
            {
              if ( !QuestEntity__HasFlag(v361, 2LL, 0LL) )
                return;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              }
              if ( !byte_42E4B24 )
              {
                sub_B5D5C4(&TerminalPramsManager_TypeInfo, v364, v365, v366);
                byte_42E4B24 = 1;
              }
              v367 = TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v367 = TerminalPramsManager_TypeInfo;
              }
              v367->static_fields->_QuestId_k__BackingField = v360;
              v368 = *(_DWORD *)(v363 + 44);
              if ( !byte_42E4B25 )
              {
                sub_B5D5C4(&TerminalPramsManager_TypeInfo, v364, v365, v366);
                v367 = TerminalPramsManager_TypeInfo;
                byte_42E4B25 = 1;
              }
              if ( (BYTE3(v367->vtable._0_Equals.methodPtr) & 4) != 0 && !v367->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v367);
                v367 = TerminalPramsManager_TypeInfo;
              }
              v367->static_fields->_PhaseCnt_k__BackingField = v368;
              if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
              }
              MyFsmP = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
              v369 = (clsQuestCheck_o *)MyFsmP;
              v370 = QuestAfterAction_StateMain___c_TypeInfo;
              if ( (BYTE3(QuestAfterAction_StateMain___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
                v370 = QuestAfterAction_StateMain___c_TypeInfo;
              }
              v371 = v370->static_fields;
              _9__16_33 = v371->__9__16_33;
              if ( !_9__16_33 )
              {
                if ( (BYTE3(v370->vtable._0_Equals.methodPtr) & 4) != 0 && !v370->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v370);
                  v371 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
                }
                v373 = (Il2CppObject *)v371->__9;
                _9__16_33 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
                System_Action___ctor(_9__16_33, v373, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_33__, 0LL);
                v374 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
                v374->__9__16_33 = _9__16_33;
                sub_B5D560(&v374->__9__16_33);
              }
              if ( v369 )
              {
                clsQuestCheck__PlayQuestStartAction(v369, _9__16_33, 0LL);
                return;
              }
            }
          }
        }
      }
    }
    goto LABEL_1018;
  }
  if ( id <= 801 )
  {
    if ( id != 700 )
    {
      if ( id != 800 )
      {
        if ( id == 801 )
        {
          v327 = v298->fields.param;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSe(v327, 0LL);
          goto LABEL_18;
        }
        return;
      }
      v382 = *p_that;
      if ( *p_that )
      {
        updated = (__int64)v382->fields.svtVoices;
        if ( updated )
        {
          if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                 (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)updated,
                 v382->fields.commandIdx,
                 &value,
                 (const MethodInfo_2F33DE8 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__) )
          {
            updated = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
            if ( !updated )
              goto LABEL_1019;
            AutomatedAction__TerminateMissionAction((AutomatedAction_o *)updated, 0LL);
            if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            }
            if ( !byte_42E4B1E )
            {
              sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)v293, v383, v384);
              byte_42E4B1E = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v385 = **(_QWORD **)(updated + 184);
            if ( !v385 )
              goto LABEL_1019;
            if ( !*(_QWORD *)(v385 + 448) )
              goto LABEL_207;
            if ( (*(_BYTE *)(updated + 307) & 4) != 0 && !*(_DWORD *)(updated + 224) )
              j_il2cpp_runtime_class_init_0(updated);
            if ( !byte_42E4B1E )
            {
              sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)v293, v383, v384);
              byte_42E4B1E = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v386 = **(_QWORD **)(updated + 184);
            if ( !v386 )
              goto LABEL_1019;
            v387 = *(_QWORD *)(v386 + 448);
            if ( !v387 )
              goto LABEL_1019;
            updated = *(unsigned int *)(v387 + 48);
            if ( !(_DWORD)updated )
            {
LABEL_207:
              if ( !value )
                goto LABEL_1019;
              updated = (unsigned int)value->fields.viewpoint;
            }
            if ( (int)updated < 1 )
            {
              if ( !value )
                goto LABEL_1019;
              v686 = *(System_String_o **)&value->fields.eval;
              if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SoundManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
              }
              SoundManager__playVoice(v686, 0LL);
            }
            else
            {
              updated = (__int64)ServantVoiceEntity__getVoiceAssetName_31472176(updated, 0LL);
              if ( !value )
                goto LABEL_1019;
              v388 = (System_String_o *)updated;
              v389 = *(System_String_o **)&value->fields.eval;
              v390 = SeManager_TypeInfo;
              if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SeManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
                v390 = SeManager_TypeInfo;
              }
              DEFAULT_VOLUME = v390->static_fields->DEFAULT_VOLUME;
              if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SoundManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
              }
              SoundManager__playVoice_23391328(v388, v389, DEFAULT_VOLUME, 0LL, 0LL);
            }
          }
LABEL_443:
          ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
            this,
            this->klass->vtable._15_onEnd.methodPtr);
          return;
        }
      }
LABEL_1019:
      sub_B5D69C(updated, v293);
    }
    v407 = v298->fields.param;
    updated = sub_B5D5DC(char___TypeInfo, 1LL);
    if ( !updated )
      goto LABEL_1019;
    v293 = (const MethodInfo *)updated;
    if ( *(_DWORD *)(updated + 24) )
    {
      *(_WORD *)(updated + 32) = 44;
      if ( !v407 )
        goto LABEL_1019;
      updated = (__int64)System_String__Split(v407, (System_Char_array *)updated, 0LL);
      if ( !updated )
        goto LABEL_1019;
      v408 = updated;
      if ( *(_DWORD *)(updated + 24) )
      {
        v409 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
        if ( *(int *)(v408 + 24) >= 2 )
          v410 = System_Int32__Parse(*(System_String_o **)(v408 + 40), 0LL) + 1;
        else
          v410 = 0;
        v487 = (SceneJumpInfo_o *)sub_B5D694(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_17509152(v487, (System_String_o *)StringLiteral_1/*""*/, v409, v410, 0LL);
        updated = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !updated )
          goto LABEL_1019;
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)updated, 72, 1, (Il2CppObject *)v487, 0LL);
        goto LABEL_443;
      }
    }
LABEL_1021:
    v756 = sub_B5D6C8(updated);
    sub_B5D668(v756, 0LL);
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
      if ( *p_that )
      {
        (*p_that)->fields.isRequestedStopBgm = 1;
        goto LABEL_18;
      }
      goto LABEL_1019;
    case 851:
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_42E4B1E )
      {
        sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)v293, v302, v303);
        byte_42E4B1E = 1;
      }
      v375 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v375 = TerminalSceneComponent_TypeInfo;
      }
      v376 = v375->static_fields->mInstance;
      updated = (__int64)QuestAfterAction_Command__GetBgmName(v298, v293);
      if ( v376 )
      {
        TerminalSceneComponent__playBgm(v376, (System_String_o *)updated, 0LL);
        if ( *p_that )
        {
          (*p_that)->fields.isRequestedStopBgm = 0;
          goto LABEL_18;
        }
      }
      goto LABEL_1019;
    case 900:
      v305 = (float)System_Int32__Parse(v298->fields.param, 0LL) / 1000.0;
      if ( v305 <= 0.0 )
        goto LABEL_18;
      this->fields.waitTime = v305;
      this->fields.waitStartTime = UnityEngine_Time__get_realtimeSinceStartup(0LL);
      break;
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
  __int64 v3; // x3
  TerminalSceneComponent_c *screenCollider; // x0
  __int64 v7; // x1
  struct QuestAfterAction_o *v8; // x8
  int v9; // w2
  __int64 v10; // x3
  struct TerminalSceneComponent_o *mInstance; // x8

  if ( (byte_42E5ADF & 1) == 0 )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)that, (_DWORD)method, v3);
    byte_42E5ADF = 1;
  }
  this->fields.that = that;
  sub_B5D560(&this->fields);
  v8 = this->fields.that;
  if ( !v8 )
    goto LABEL_16;
  screenCollider = (TerminalSceneComponent_c *)v8->fields.screenCollider;
  if ( !screenCollider )
    goto LABEL_16;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)screenCollider, 1, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, v7, v9, v10);
    byte_42E4B1E = 1;
  }
  screenCollider = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    screenCollider = TerminalSceneComponent_TypeInfo;
  }
  mInstance = screenCollider->static_fields->mInstance;
  if ( !mInstance || (screenCollider = (TerminalSceneComponent_c *)mInstance->fields.mTerminalMap) == 0LL )
LABEL_16:
    sub_B5D69C(screenCollider, v7);
  this->fields.IsMapModel = ScrTerminalMap__IsMapModel((ScrTerminalMap_o *)screenCollider, 0LL);
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
    sub_B5D69C(this, method);
  return that->fields.commandBuf;
}


int32_t __fastcall QuestAfterAction_StateMain__get_CommandIndex(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_B5D69C(this, method);
  return that->fields.commandIdx;
}


UnityEngine_GameObject_o *__fastcall QuestAfterAction_StateMain__get_SubGimmickRoot(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  TerminalSceneComponent_c *v4; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  if ( (byte_42E5ADE & 1) == 0 )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5ADE = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4B1E = 1;
  }
  v4 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v4 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v4->static_fields->mInstance;
  if ( !mInstance || (mTerminalMap = mInstance->fields.mTerminalMap) == 0LL )
    sub_B5D69C(v4, method);
  return mTerminalMap->fields.rootEffectP;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestAfterAction_StateMain__onEnd(
        QuestAfterAction_StateMain_o *this,
        bool deleteKey,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  TerminalSceneComponent_c *v9; // x0
  TerminalSceneComponent_o *mInstance; // x0
  const MethodInfo *v11; // x1

  if ( (byte_42E5AE1 & 1) == 0 )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, deleteKey, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_16485/*"afterActionBk"*/, v6, v7, v8);
    byte_42E5AE1 = 1;
  }
  if ( deleteKey )
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16485/*"afterActionBk"*/, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42E4B1E )
  {
    sub_B5D5C4(&TerminalSceneComponent_TypeInfo, deleteKey, (_DWORD)method, v3);
    byte_42E4B1E = 1;
  }
  v9 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v9 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v9->static_fields->mInstance;
  if ( !mInstance
    || (TerminalSceneComponent__ClearTransitionInfo(mInstance, 0LL),
        QuestAfterAction_StateMain__StartMapGimmick(this, v11),
        (mInstance = (TerminalSceneComponent_o *)this->fields.that) == 0LL) )
  {
    sub_B5D69C(mInstance, deleteKey);
  }
  QuestAfterAction__OnEnd((QuestAfterAction_o *)mInstance, 0LL);
}


void __fastcall QuestAfterAction_StateMain__set_CommandIndex(
        QuestAfterAction_StateMain_o *this,
        int32_t value,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_B5D69C(this, value);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0

  if ( (byte_42E6065 & 1) == 0 )
  {
    sub_B5D5C4(&QuestAfterAction_StateMain___c_TypeInfo, v1, v2, v3);
    byte_42E6065 = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(QuestAfterAction_StateMain___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
  static_fields->__9 = (struct QuestAfterAction_StateMain___c_o *)v4;
  sub_B5D560(static_fields);
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
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  TerminalPramsManager_c *v16; // x0
  int32_t WarId_k__BackingField; // w19
  int32_t QuestId_k__BackingField; // w20
  QuestAfterAction_StateMain___c_c *v19; // x8
  int32_t PhaseCnt_k__BackingField; // w21
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x9
  int32_t v22; // w21
  ScriptManager_CallbackFunc_o *_9__16_34; // x22
  Il2CppObject *v24; // x23
  struct QuestAfterAction_StateMain___c_StaticFields *v25; // x0

  if ( (byte_42E6066 & 1) == 0 )
  {
    sub_B5D5C4(&ScriptManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ScriptManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_34__, v10, v11, v12);
    sub_B5D5C4(&QuestAfterAction_StateMain___c_TypeInfo, v13, v14, v15);
    byte_42E6066 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B20 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E4B20 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v16->static_fields->_WarId_k__BackingField;
  if ( !byte_42E4B33 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    v16 = TerminalPramsManager_TypeInfo;
    byte_42E4B33 = 1;
  }
  if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v16->static_fields->_QuestId_k__BackingField;
  if ( !byte_42E4B34 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, (_DWORD)method, v2, v3);
    v16 = TerminalPramsManager_TypeInfo;
    byte_42E4B34 = 1;
  }
  if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  v19 = QuestAfterAction_StateMain___c_TypeInfo;
  PhaseCnt_k__BackingField = v16->static_fields->_PhaseCnt_k__BackingField;
  if ( (BYTE3(QuestAfterAction_StateMain___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
    v19 = QuestAfterAction_StateMain___c_TypeInfo;
  }
  static_fields = v19->static_fields;
  v22 = PhaseCnt_k__BackingField + 1;
  _9__16_34 = static_fields->__9__16_34;
  if ( !_9__16_34 )
  {
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    }
    v24 = (Il2CppObject *)static_fields->__9;
    _9__16_34 = (ScriptManager_CallbackFunc_o *)sub_B5D694(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(_9__16_34, v24, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_34__, 0LL);
    v25 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    v25->__9__16_34 = _9__16_34;
    sub_B5D560(&v25->__9__16_34);
  }
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayBattleStart(
    WarId_k__BackingField,
    QuestId_k__BackingField,
    v22,
    _9__16_34,
    0,
    0LL,
    -1,
    0,
    0,
    0LL,
    0LL);
}


void __fastcall QuestAfterAction_StateMain___c___UpdateAnim_b__16_34(
        QuestAfterAction_StateMain___c_o *this,
        bool isExit,
        const MethodInfo *method)
{
  __int64 v3; // x3
  char v4; // w1
  int v5; // w2
  __int64 v6; // x3
  char v7; // w1
  int v8; // w2
  __int64 v9; // x3
  char v10; // w1
  int v11; // w2
  __int64 v12; // x3
  char v13; // w1
  int v14; // w2
  __int64 v15; // x3
  char v16; // w1
  int v17; // w2
  __int64 v18; // x3
  char v19; // w1
  int v20; // w2
  __int64 v21; // x3
  QuestAfterAction_StateMain___c_c *v22; // x0
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x8
  NetworkManager_ResultCallbackFunc_o *_9__16_35; // x19
  Il2CppObject *v25; // x20
  struct QuestAfterAction_StateMain___c_StaticFields *v26; // x0
  char v27; // w1
  int v28; // w2
  __int64 v29; // x3
  BattleScenarioRequest_o *Request_WarBoardWallAttackRequest; // x19
  TerminalPramsManager_c *v31; // x0
  int32_t QuestId_k__BackingField; // w21
  int32_t PhaseCnt_k__BackingField; // w20
  System_Int32_array *SelectRouteArray; // x0
  __int64 v35; // x1

  if ( (byte_42E6067 & 1) == 0 )
  {
    sub_B5D5C4(&Method_NetworkManager_getRequest_BattleScenarioRequest___, isExit, (_DWORD)method, v3);
    sub_B5D5C4(&NetworkManager_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&ScriptManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_35__, v16, v17, v18);
    sub_B5D5C4(&QuestAfterAction_StateMain___c_TypeInfo, v19, v20, v21);
    byte_42E6067 = 1;
  }
  v22 = QuestAfterAction_StateMain___c_TypeInfo;
  if ( (BYTE3(QuestAfterAction_StateMain___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
    v22 = QuestAfterAction_StateMain___c_TypeInfo;
  }
  static_fields = v22->static_fields;
  _9__16_35 = static_fields->__9__16_35;
  if ( !_9__16_35 )
  {
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    }
    v25 = (Il2CppObject *)static_fields->__9;
    _9__16_35 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__16_35,
      v25,
      Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_35__,
      0LL);
    v26 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    v26->__9__16_35 = _9__16_35;
    sub_B5D560(&v26->__9__16_35);
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (BattleScenarioRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   _9__16_35,
                                                                   (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B33 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v27, v28, v29);
    byte_42E4B33 = 1;
  }
  v31 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v31 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v31->static_fields->_QuestId_k__BackingField;
  if ( !byte_42E4B34 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v27, v28, v29);
    v31 = TerminalPramsManager_TypeInfo;
    byte_42E4B34 = 1;
  }
  if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v31);
    v31 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v31->static_fields->_PhaseCnt_k__BackingField;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  SelectRouteArray = ScriptManager__GetSelectRouteArray(0LL);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B5D69C(SelectRouteArray, v35);
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
  Il2CppObject *v26; // x19
  BattleResultComponent_resultData_array *v27; // x19
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  TerminalPramsManager_c *v31; // x0
  AvalonSceneManager_o *Instance; // x0
  __int64 v33; // x1

  if ( (byte_42E6068 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___,
      (_DWORD)jsonstr,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&JsonManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&ScriptManager_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_16485/*"afterActionBk"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_16061/*"]"*/, v23, v24, v25);
    byte_42E6068 = 1;
  }
  v26 = (Il2CppObject *)System_String__Concat_44580072(
                          (System_String_o *)StringLiteral_15824/*"["*/,
                          jsonstr,
                          (System_String_o *)StringLiteral_16061/*"]"*/,
                          0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v27 = (BattleResultComponent_resultData_array *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                    v26,
                                                    (const MethodInfo_1E5E1D0 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16485/*"afterActionBk"*/, 0LL);
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
  TerminalPramsManager__ReceiveQuestEndResultInfo(v27, 1, 0LL);
  if ( !byte_42E4B29 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v28, v29, v30);
    byte_42E4B29 = 1;
  }
  v31 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v31 = TerminalPramsManager_TypeInfo;
  }
  v31->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v33);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
    _4__this,
    _4__this->klass->vtable._15_onEnd.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__32(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, Il2CppMethodPointer))_4__this->klass->vtable._14_EndAnim.method)(
          _4__this,
          _4__this->klass->vtable._15_onEnd.methodPtr),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_B5D69C(_4__this, method);
  }
  ((void (__fastcall *)(struct QuestAfterAction_StateMain_o *, struct QuestAfterAction_o *, Il2CppMethodPointer))_4__this->klass->vtable._13_UpdateAnim.method)(
    _4__this,
    this->fields.that,
    _4__this->klass->vtable._14_EndAnim.methodPtr);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_0___UpdateAnim_b__36(
        QuestAfterAction_StateMain___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_StateMain_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
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
    sub_B5D69C(0LL, method);
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
  QuestAfterAction_StateMain___c__DisplayClass16_1_o *v4; // x19
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals1; // x8

  spot = this->fields.spot;
  if ( !spot
    || (mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo) == 0LL
    || (mMapCtrl_SpotInfo->fields.dispType = 0,
        v4 = this,
        (this = (QuestAfterAction_StateMain___c__DisplayClass16_1_o *)this->fields.spot) == 0LL)
    || (SrcSpotBasePrefab__SetTouchType((SrcSpotBasePrefab_o *)this, 0, 0LL),
        (CS___8__locals1 = v4->fields.CS___8__locals1) == 0LL)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_1_o *)CS___8__locals1->fields.__4__this) == 0LL )
  {
    sub_B5D69C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_1_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    this->klass[1]._1.interfaceOffsets);
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
    sub_B5D69C(this, method);
  mMapCtrl_MapGimmickInfo->fields.dispType = 0;
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_10___UpdateAnim_b__22(
        QuestAfterAction_StateMain___c__DisplayClass16_10_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals10; // x8

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick
    || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0LL
    || (mMapCtrl_MapGimmickInfo->fields.dispType = 0, (CS___8__locals10 = this->fields.CS___8__locals10) == 0LL)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_10_o *)CS___8__locals10->fields.__4__this) == 0LL )
  {
    sub_B5D69C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_10_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    this->klass[1]._1.interfaceOffsets);
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
    sub_B5D69C(this, method);
  mMapCtrl_MapGimmickInfo->fields.dispType = 1;
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_11___UpdateAnim_b__24(
        QuestAfterAction_StateMain___c__DisplayClass16_11_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals11; // x8

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick
    || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0LL
    || (mMapCtrl_MapGimmickInfo->fields.dispType = 1, (CS___8__locals11 = this->fields.CS___8__locals11) == 0LL)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_11_o *)CS___8__locals11->fields.__4__this) == 0LL )
  {
    sub_B5D69C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_11_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    this->klass[1]._1.interfaceOffsets);
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

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick
    || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0LL
    || (mMapCtrl_MapGimmickInfo->fields.dispType = 1, (CS___8__locals12 = this->fields.CS___8__locals12) == 0LL)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_12_o *)CS___8__locals12->fields.__4__this) == 0LL )
  {
    sub_B5D69C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_12_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    this->klass[1]._1.interfaceOffsets);
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
  Il2CppObject *v17; // x19
  UnityEngine_Component_o *mapGimmick; // x0
  __int64 v19; // x1
  UnityEngine_Component_o *v20; // x22
  Il2CppObject *v21; // x21
  struct System_String_array *paramsStr; // x8
  struct System_String_array *v23; // x8
  Il2CppClass *klass; // x20
  float v25; // s0
  UITweener_o *v26; // x20
  EventDelegate_Callback_o *v27; // x21
  __int64 v28; // x0
  unsigned __int128 v29; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_42E6069 & 1) == 0 )
  {
    sub_B5D5C4(&EventDelegate_Callback_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_AddComponent_TweenColor___, v5, v6, v7);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v8, v9, v10);
    sub_B5D5C4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__28__, v11, v12, v13);
    sub_B5D5C4(&QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo, v14, v15, v16);
    byte_42E6069 = 1;
  }
  v29 = 0uLL;
  v17 = (Il2CppObject *)sub_B5D694(QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo);
  System_Object___ctor(v17, 0LL);
  if ( !v17 )
    goto LABEL_18;
  v17[1].monitor = this;
  sub_B5D560(&v17[1].monitor);
  mapGimmick = (UnityEngine_Component_o *)this->fields.mapGimmick;
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0LL);
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                            (UnityEngine_GameObject_o *)mapGimmick,
                                            (const MethodInfo_1CC4448 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !mapGimmick )
    goto LABEL_18;
  v20 = mapGimmick;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0LL);
  if ( !mapGimmick )
    goto LABEL_18;
  v17[1].klass = (Il2CppClass *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                  (UnityEngine_GameObject_o *)mapGimmick,
                                  (const MethodInfo_1CC42A0 *)Method_UnityEngine_GameObject_AddComponent_TweenColor___);
  v21 = v17 + 1;
  sub_B5D560(&v17[1]);
  paramsStr = this->fields.paramsStr;
  if ( !paramsStr )
    goto LABEL_18;
  if ( paramsStr->max_length <= 1 )
    goto LABEL_19;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                            paramsStr->m_Items[1],
                                            (UnityEngine_Color_o *)&v29,
                                            0LL);
  if ( !v21->klass
    || (*(_OWORD *)&v21->klass->_1.klass = *(_OWORD *)(&v20[5].fields + 1), !v21->klass)
    || (*(_OWORD *)&v21->klass->_1.events = v29, (v23 = this->fields.paramsStr) == 0LL) )
  {
LABEL_18:
    sub_B5D69C(mapGimmick, v19);
  }
  if ( v23->max_length <= 2 )
  {
LABEL_19:
    v28 = sub_B5D6C8(mapGimmick);
    sub_B5D668(v28, 0LL);
  }
  klass = v21->klass;
  v25 = System_Single__Parse(v23->m_Items[2], 0LL);
  if ( !klass )
    goto LABEL_18;
  *(float *)&klass->_1.this_arg.data = v25;
  mapGimmick = (UnityEngine_Component_o *)v21->klass;
  if ( !v21->klass )
    goto LABEL_18;
  UITweener__PlayForward((UITweener_o *)mapGimmick, 0LL);
  v26 = (UITweener_o *)v17[1].klass;
  v27 = (EventDelegate_Callback_o *)sub_B5D694(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v27,
    v17,
    Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__28__,
    0LL);
  if ( !v26 )
    goto LABEL_18;
  UITweener__SetOnFinished(v26, v27, 0LL);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *tween; // x20
  struct QuestAfterAction_StateMain_o *_4__this; // x0
  __int64 v7; // x1
  struct QuestAfterAction_StateMain___c__DisplayClass16_13_o *CS___8__locals14; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals13; // x8

  if ( (byte_42E606A & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E606A = 1;
  }
  tween = (UnityEngine_Object_o *)this->fields.tween;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236(tween, 0LL);
  CS___8__locals14 = this->fields.CS___8__locals14;
  if ( !CS___8__locals14
    || (CS___8__locals13 = CS___8__locals14->fields.CS___8__locals13) == 0LL
    || (_4__this = CS___8__locals13->fields.__4__this) == 0LL )
  {
    sub_B5D69C(_4__this, v7);
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

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick
    || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0LL
    || (mMapCtrl_MapGimmickInfo->fields.dispType = 1, (CS___8__locals15 = this->fields.CS___8__locals15) == 0LL)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_15_o *)CS___8__locals15->fields.__4__this) == 0LL )
  {
    sub_B5D69C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_15_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    this->klass[1]._1.interfaceOffsets);
}


void __fastcall QuestAfterAction_StateMain___c__DisplayClass16_15___UpdateAnim_b__30(
        QuestAfterAction_StateMain___c__DisplayClass16_15_o *this,
        const MethodInfo *method)
{
  struct MapGimmickComponent_o *mapGimmick; // x8
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals15; // x8

  mapGimmick = this->fields.mapGimmick;
  if ( !mapGimmick
    || (mMapCtrl_MapGimmickInfo = mapGimmick->fields.mMapCtrl_MapGimmickInfo) == 0LL
    || (mMapCtrl_MapGimmickInfo->fields.dispType = 0, (CS___8__locals15 = this->fields.CS___8__locals15) == 0LL)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_15_o *)CS___8__locals15->fields.__4__this) == 0LL )
  {
    sub_B5D69C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_15_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    this->klass[1]._1.interfaceOffsets);
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
  QuestAfterAction_StateMain___c__DisplayClass16_2_o *v4; // x19
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals2; // x8

  spot = this->fields.spot;
  if ( !spot
    || (mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo) == 0LL
    || (mMapCtrl_SpotInfo->fields.dispType = 2,
        v4 = this,
        (this = (QuestAfterAction_StateMain___c__DisplayClass16_2_o *)this->fields.spot) == 0LL)
    || (SrcSpotBasePrefab__SetTouchType((SrcSpotBasePrefab_o *)this, 1, 0LL),
        (CS___8__locals2 = v4->fields.CS___8__locals2) == 0LL)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_2_o *)CS___8__locals2->fields.__4__this) == 0LL )
  {
    sub_B5D69C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_2_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    this->klass[1]._1.interfaceOffsets);
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
  QuestAfterAction_StateMain___c__DisplayClass16_3_o *v4; // x19
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals3; // x8

  spot = this->fields.spot;
  if ( !spot
    || (mMapCtrl_SpotInfo = spot->fields.mMapCtrl_SpotInfo) == 0LL
    || (mMapCtrl_SpotInfo->fields.dispType = 1,
        v4 = this,
        (this = (QuestAfterAction_StateMain___c__DisplayClass16_3_o *)this->fields.spot) == 0LL)
    || (SrcSpotBasePrefab__SetTouchType((SrcSpotBasePrefab_o *)this, 1, 0LL),
        (CS___8__locals3 = v4->fields.CS___8__locals3) == 0LL)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_3_o *)CS___8__locals3->fields.__4__this) == 0LL )
  {
    sub_B5D69C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_3_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    this->klass[1]._1.interfaceOffsets);
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

  roadModel = this->fields.roadModel;
  if ( !roadModel
    || (SpotRoadInfo_k__BackingField = roadModel->fields._SpotRoadInfo_k__BackingField) == 0LL
    || (SpotRoadInfo_k__BackingField->fields.dispType = 0, (CS___8__locals4 = this->fields.CS___8__locals4) == 0LL)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_4_o *)CS___8__locals4->fields.__4__this) == 0LL )
  {
    sub_B5D69C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_4_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    this->klass[1]._1.interfaceOffsets);
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

  roadSprite = this->fields.roadSprite;
  if ( !roadSprite
    || (mMapCtrl_SpotRoadInfo = roadSprite->fields.mMapCtrl_SpotRoadInfo) == 0LL
    || (mMapCtrl_SpotRoadInfo->fields.dispType = 0, (CS___8__locals5 = this->fields.CS___8__locals5) == 0LL)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_5_o *)CS___8__locals5->fields.__4__this) == 0LL )
  {
    sub_B5D69C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_5_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    this->klass[1]._1.interfaceOffsets);
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

  roadModel = this->fields.roadModel;
  if ( !roadModel
    || (SpotRoadInfo_k__BackingField = roadModel->fields._SpotRoadInfo_k__BackingField) == 0LL
    || (SpotRoadInfo_k__BackingField->fields.dispType = 2, (CS___8__locals6 = this->fields.CS___8__locals6) == 0LL)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_6_o *)CS___8__locals6->fields.__4__this) == 0LL )
  {
    sub_B5D69C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_6_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    this->klass[1]._1.interfaceOffsets);
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

  roadSprite = this->fields.roadSprite;
  if ( !roadSprite
    || (mMapCtrl_SpotRoadInfo = roadSprite->fields.mMapCtrl_SpotRoadInfo) == 0LL
    || (mMapCtrl_SpotRoadInfo->fields.dispType = 2, (CS___8__locals7 = this->fields.CS___8__locals7) == 0LL)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_7_o *)CS___8__locals7->fields.__4__this) == 0LL )
  {
    sub_B5D69C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_7_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    this->klass[1]._1.interfaceOffsets);
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

  roadModel = this->fields.roadModel;
  if ( !roadModel
    || (SpotRoadInfo_k__BackingField = roadModel->fields._SpotRoadInfo_k__BackingField) == 0LL
    || (SpotRoadInfo_k__BackingField->fields.dispType = 1, (CS___8__locals8 = this->fields.CS___8__locals8) == 0LL)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_8_o *)CS___8__locals8->fields.__4__this) == 0LL )
  {
    sub_B5D69C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_8_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    this->klass[1]._1.interfaceOffsets);
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

  roadSprite = this->fields.roadSprite;
  if ( !roadSprite
    || (mMapCtrl_SpotRoadInfo = roadSprite->fields.mMapCtrl_SpotRoadInfo) == 0LL
    || (mMapCtrl_SpotRoadInfo->fields.dispType = 1, (CS___8__locals9 = this->fields.CS___8__locals9) == 0LL)
    || (this = (QuestAfterAction_StateMain___c__DisplayClass16_9_o *)CS___8__locals9->fields.__4__this) == 0LL )
  {
    sub_B5D69C(this, method);
  }
  ((void (__fastcall *)(QuestAfterAction_StateMain___c__DisplayClass16_9_o *, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
    this,
    this->klass[1]._1.interfaceOffsets);
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
  sub_B5D560(p_end, 0LL, v2, v3, v4, v5, v6, v7);
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
  sub_B5D560(
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
  sub_B5D560(
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
  sub_B5D560(v6, (System_Int32_array **)vName, v7, v8, v9, v10, v11, v12);
}


void __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74___ctor(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74__MoveNext(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int32_t _1__state; // w8
  QuestAfterAction_o *_4__this; // x20
  struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *commandEnumerable; // x21
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__c *klass; // x8
  unsigned __int64 v15; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o **p__7__wrap1; // x21
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *v19; // x22
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *v20; // x8
  unsigned __int64 v21; // x10
  int *v22; // x11
  __int64 v23; // x0
  __int64 v24; // x0
  const MethodInfo *v25; // x1
  __int64 v26; // x3
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *v27; // x22
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *v28; // x8
  unsigned __int64 v29; // x10
  int *v30; // x11
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x1
  QuestAfterAction_Command_o *v34; // x22
  int32_t CommandType; // w23
  int32_t CommandTargetId; // w2
  bool result; // w0

  v4 = this;
  if ( (byte_42E5AD7 & 1) == 0 )
  {
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo, v5, v6, v7);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *)sub_B5D5C4(
                                                                                    &System_Collections_IEnumerator_TypeInfo,
                                                                                    v8,
                                                                                    v9,
                                                                                    v10);
    byte_42E5AD7 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    p__7__wrap1 = &v4->fields.__7__wrap1;
  }
  else
  {
    if ( _1__state )
      return 0;
    commandEnumerable = v4->fields.commandEnumerable;
    v4->fields.__1__state = -1;
    if ( !commandEnumerable )
      sub_B5D69C(this, method);
    klass = commandEnumerable->klass;
    if ( *(_WORD *)&commandEnumerable->klass->_2.bitflags1 )
    {
      v15 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_QuestAfterAction_Command__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo )
      {
        ++v15;
        p_offset += 4;
        if ( v15 >= *(unsigned __int16 *)&commandEnumerable->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AF54C0(
                   commandEnumerable,
                   System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo,
                   0LL,
                   v3);
    }
    v4->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *, _QWORD))p_method)(commandEnumerable, *(_QWORD *)(p_method + 8));
    p__7__wrap1 = &v4->fields.__7__wrap1;
    sub_B5D560(&v4->fields.__7__wrap1);
  }
  v4->fields.__1__state = -3;
  while ( 1 )
  {
    v19 = *p__7__wrap1;
    if ( !*p__7__wrap1 )
      sub_B5D69C(this, method);
    v20 = v19->klass;
    if ( *(_WORD *)&v19->klass->_2.bitflags1 )
    {
      v21 = 0LL;
      v22 = &v20->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v22 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v21;
        v22 += 4;
        if ( v21 >= *(unsigned __int16 *)&v19->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v23 = (__int64)&v20->vtable[*v22].method;
    }
    else
    {
LABEL_20:
      v23 = sub_AF54C0(*p__7__wrap1, System_Collections_IEnumerator_TypeInfo, 0LL, v3);
    }
    v24 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v23)(
            v19,
            *(_QWORD *)(v23 + 8));
    if ( (v24 & 1) == 0 )
      break;
    v27 = *p__7__wrap1;
    if ( !*p__7__wrap1 )
      sub_B5D69C(v24, v25);
    v28 = v27->klass;
    if ( *(_WORD *)&v27->klass->_2.bitflags1 )
    {
      v29 = 0LL;
      v30 = &v28->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c **)v30 - 1) != System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo )
      {
        ++v29;
        v30 += 4;
        if ( v29 >= *(unsigned __int16 *)&v27->klass->_2.bitflags1 )
          goto LABEL_28;
      }
      v31 = (__int64)&v28->vtable[*v30].method;
    }
    else
    {
LABEL_28:
      v31 = sub_AF54C0(
              *p__7__wrap1,
              System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo,
              0LL,
              v26);
    }
    v32 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v31)(
            v27,
            *(_QWORD *)(v31 + 8));
    v34 = (QuestAfterAction_Command_o *)v32;
    if ( !v32 )
      sub_B5D69C(0LL, v33);
    if ( !_4__this )
      sub_B5D69C(v32, v33);
    CommandType = QuestAfterAction__GetCommandType(_4__this, *(_DWORD *)(v32 + 16), 0LL);
    CommandTargetId = QuestAfterAction__ExtractCommandTargetId(v34, 0LL);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *)QuestAfterAction__IsExistCommand(
                                                                                    _4__this,
                                                                                    CommandType,
                                                                                    CommandTargetId,
                                                                                    0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v4->fields.__2__current = v34;
      sub_B5D560(&v4->fields.__2__current);
      result = 1;
      v4->fields.__1__state = 1;
      return result;
    }
  }
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74____m__Finally1(v4, v25);
  *p__7__wrap1 = 0LL;
  sub_B5D560(p__7__wrap1);
  return 0;
}


System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74__System_Collections_Generic_IEnumerable_QuestAfterAction_Command__GetEnumerator(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t l__initialThreadId; // w20
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *v6; // x20
  __int64 CurrentManagedThreadId; // x0
  __int64 v8; // x1

  if ( (byte_42E5AD9 & 1) == 0 )
  {
    sub_B5D5C4(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5AD9 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v6 = this;
  }
  else
  {
    v6 = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *)sub_B5D694(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    v6->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    v6->fields.__l__initialThreadId = CurrentManagedThreadId;
    if ( !v6 )
      sub_B5D69C(CurrentManagedThreadId, v8);
    v6->fields.__4__this = this->fields.__4__this;
    sub_B5D560(&v6->fields.__4__this);
  }
  v6->fields.commandEnumerable = this->fields.__3__commandEnumerable;
  sub_B5D560(&v6->fields.commandEnumerable);
  return (System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)v6;
}


QuestAfterAction_Command_o *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74__System_Collections_Generic_IEnumerator_QuestAfterAction_Command__get_Current(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74__System_Collections_IEnumerator_Reset(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74__System_Collections_IEnumerator_get_Current(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74__System_IDisposable_Dispose(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74____m__Finally1(this, method);
}


void __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74____m__Finally1(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *klass; // x8
  unsigned __int64 v7; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_42E5AD8 & 1) == 0 )
  {
    sub_B5D5C4(&System_IDisposable_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E5AD8 = 1;
  }
  _7__wrap1 = this->fields.__7__wrap1;
  this->fields.__1__state = -1;
  if ( _7__wrap1 )
  {
    klass = _7__wrap1->klass;
    if ( *(_WORD *)&_7__wrap1->klass->_2.bitflags1 )
    {
      v7 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v7;
        p_offset += 4;
        if ( v7 >= *(unsigned __int16 *)&_7__wrap1->klass->_2.bitflags1 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_8:
      p_method = sub_AF54C0(_7__wrap1, System_IDisposable_TypeInfo, 0LL, v3);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))p_method)(
      _7__wrap1,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall QuestAfterAction__WaitWhileMainStateFinished_d__78___ctor(
        QuestAfterAction__WaitWhileMainStateFinished_d__78_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall QuestAfterAction__WaitWhileMainStateFinished_d__78__MoveNext(
        QuestAfterAction__WaitWhileMainStateFinished_d__78_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *_4__this; // x8
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( this->fields.__1__state < 2u )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_B5D69C(this, method);
    if ( _4__this->fields.isKeepingMainStateButFinished )
    {
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_B5D560(&this->fields.__2__current);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    ActionExtensions__Call(this->fields.action, 0LL);
  }
  return 0;
}


Il2CppObject *__fastcall QuestAfterAction__WaitWhileMainStateFinished_d__78__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestAfterAction__WaitWhileMainStateFinished_d__78_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestAfterAction__WaitWhileMainStateFinished_d__78__System_Collections_IEnumerator_Reset(
        QuestAfterAction__WaitWhileMainStateFinished_d__78_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_QuestAfterAction__WaitWhileMainStateFinished_d__78_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall QuestAfterAction__WaitWhileMainStateFinished_d__78__System_Collections_IEnumerator_get_Current(
        QuestAfterAction__WaitWhileMainStateFinished_d__78_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall QuestAfterAction__WaitWhileMainStateFinished_d__78__System_IDisposable_Dispose(
        QuestAfterAction__WaitWhileMainStateFinished_d__78_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestAfterAction___c__DisplayClass67_0___ctor(
        QuestAfterAction___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass67_0___LoadVoice_b__0(
        QuestAfterAction___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Collections_Generic_List_XWeaponTrail_Element__o *svtVInfos; // x0

  if ( (byte_42E5AD4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__, (_DWORD)method, v2, v3);
    byte_42E5AD4 = 1;
  }
  svtVInfos = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.svtVInfos;
  if ( !svtVInfos
    || (System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          svtVInfos,
          0,
          (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__),
        (svtVInfos = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.__4__this) == 0LL) )
  {
    sub_B5D69C(svtVInfos, method);
  }
  QuestAfterAction__LoadVoice_25170396(
    (QuestAfterAction_o *)svtVInfos,
    this->fields.svtVInfos,
    this->fields.endAct,
    0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass71_0___ctor(
        QuestAfterAction___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass71_0___Play_b__0(
        QuestAfterAction___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  MissionNotifyManager_o *v8; // x0
  __int64 v9; // x1

  if ( (byte_42E5AD5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v5, v6, v7);
    byte_42E5AD5 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v8 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v8 )
    sub_B5D69C(0LL, v9);
  MissionNotifyManager__EndPause(v8, 0LL);
  ActionExtensions__Call(this->fields.endAct, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass72_0___ctor(
        QuestAfterAction___c__DisplayClass72_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass72_0___PlaySpecifiedAction_b__0(
        QuestAfterAction___c__DisplayClass72_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  MissionNotifyManager_o *_4__this; // x0

  if ( (byte_42E5AD6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v5, v6, v7);
    byte_42E5AD6 = 1;
  }
  _4__this = (MissionNotifyManager_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  _4__this[2].klass = 0LL;
  sub_B5D560(&_4__this[2]);
  _4__this = (MissionNotifyManager_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  *(_QWORD *)&_4__this->fields.dispInfosIndex = 0LL;
  sub_B5D560(&_4__this->fields.dispInfosIndex);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  _4__this = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !_4__this
    || (MissionNotifyManager__EndPause(_4__this, 0LL),
        (_4__this = (MissionNotifyManager_o *)this->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_B5D69C(_4__this, method);
  }
  QuestAfterAction__SetState((QuestAfterAction_o *)_4__this, 0, 0LL);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass72_0___PlaySpecifiedAction_b__1(
        QuestAfterAction___c__DisplayClass72_0_o *this,
        const MethodInfo *method)
{
  QuestAfterAction_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B5D69C(0LL, method);
  QuestAfterAction__SetState(_4__this, 2, 0LL);
}