void __fastcall QuestAfterAction___ctor(QuestAfterAction_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  QuestAfterAction_TitleInfoControlCallback_o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  BlankEarthQuestAfterAction_o *v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  __int64 v26; // x1
  __int64 v27; // x2
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v28; // x20
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  __int64 v35; // x1
  __int64 v36; // x2
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v37; // x20
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7

  if ( (byte_421456D & 1) == 0 )
  {
    sub_B0D8A4(&BlankEarthQuestAfterAction_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo, v6);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_QuestAfterAction___ctor__, v8);
    sub_B0D8A4(&QuestAfterAction_TitleInfoControlCallback_TypeInfo, v9);
    byte_421456D = 1;
  }
  v10 = (QuestAfterAction_TitleInfoControlCallback_o *)sub_B0D974(
                                                         QuestAfterAction_TitleInfoControlCallback_TypeInfo,
                                                         method,
                                                         v2);
  QuestAfterAction_TitleInfoControlCallback___ctor(v10, 0LL);
  this->fields._TitleInfoCtrlCallback_k__BackingField = v10;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._TitleInfoCtrlCallback_k__BackingField,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v19 = (BlankEarthQuestAfterAction_o *)sub_B0D974(BlankEarthQuestAfterAction_TypeInfo, v17, v18);
  BlankEarthQuestAfterAction___ctor(v19, 0LL);
  this->fields._BlankEarthQuestAfterAction_k__BackingField = v19;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields._BlankEarthQuestAfterAction_k__BackingField,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v28 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B0D974(
                                                                           System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo,
                                                                           v26,
                                                                           v27);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v28,
    (const MethodInfo_2EA610C *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
  this->fields.commandTypeIds = (struct System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *)v28;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.commandTypeIds,
    (System_Int32_array **)v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  v37 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B0D974(
                                                                                                   System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo,
                                                                                                   v35,
                                                                                                   v36);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v37,
    (const MethodInfo_2E8F874 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
  this->fields.svtVoices = (struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v37;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.svtVoices,
    (System_Int32_array **)v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  this->fields.MapMoveBeforeFocusSpotId = -1;
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A713D0 *)Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
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
  sub_B0D840(p_endAct, 0LL, v2, v3, v4, v5, v6, v7);
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
  System_String_array *v38; // x27
  __int64 v39; // x1
  WebViewManager_o *Instance; // x20
  __int64 Master_WarQuestSelectionMaster; // x0
  __int64 v42; // x8
  __int64 v43; // x8
  __int64 v44; // x8
  int32_t v45; // w23
  __int64 v46; // x8
  __int64 v47; // x8
  int32_t v48; // w24
  __int64 v49; // x8
  __int64 v50; // x8
  int32_t v51; // w23
  __int64 v52; // x8
  __int64 v53; // x8
  __int64 v54; // x1
  int32_t v55; // w22
  TerminalPramsManager_c *v56; // x0
  TerminalSceneComponent_c *v57; // x0
  TerminalPramsManager_c *v58; // x0
  System_String_o *String_34963268; // x22
  __int64 v60; // x22
  __int64 v61; // x1
  int32_t v62; // w23
  __int64 v63; // x1
  int32_t v64; // w23
  System_String_o *v65; // x23
  __int64 v66; // x1
  bool v67; // w23
  bool v68; // w22
  __int64 v69; // x1
  WarMaster_o *MasterData_WarQuestSelectionMaster; // x22
  WarEntity_o *QuestId; // x0
  WarEntity_o *v72; // x22
  TerminalPramsManager_c *v73; // x0
  int32_t id; // w23
  bool v75; // w22
  TerminalPramsManager_c *v76; // x0
  TerminalPramsManager_c *v77; // x0
  __int64 v78; // x1
  QuestPhaseDetailAddMaster_o *v79; // x22
  int32_t v80; // w23
  __int64 v81; // x1
  QuestPhaseDetailMaster_o *v82; // x22
  int32_t v83; // w23
  TerminalPramsManager_c *v84; // x0
  __int64 v85; // x1
  int32_t v86; // w21
  WarEntity_o *v87; // x0
  __int64 v88; // x1
  QuestBehaviorMaster_o *v89; // x21
  int32_t v90; // w23
  bool IsOpenQuestBehaviorCond; // w0
  __int64 v92; // x8
  System_Int32_array **v93; // x0
  System_String_array **v94; // x2
  System_String_array **v95; // x3
  System_Boolean_array **v96; // x4
  System_Int32_array **v97; // x5
  System_Int32_array *v98; // x6
  System_Int32_array *v99; // x7
  __int64 v100; // x1
  __int64 v101; // x2
  int *commandBuf; // x8
  unsigned __int64 v103; // x23
  il2cpp_array_size_t v104; // w21
  __int64 v105; // x24
  System_String_array **v106; // x2
  System_String_array **v107; // x3
  System_Boolean_array **v108; // x4
  System_Int32_array **v109; // x5
  System_Int32_array *v110; // x6
  System_Int32_array *v111; // x7
  __int64 v112; // x8
  System_Int32_array **v113; // x1
  System_String_o **v114; // x25
  const MethodInfo *v115; // x2
  int v116; // w8
  int v117; // w8
  QuestAfterAction_o *v118; // x19
  __int64 v119; // x1
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *svtVoices; // x26
  int32_t v121; // w20
  System_String_o *v122; // x28
  QuestAfterAction_VoiceInfo_o *v123; // x27
  int v124; // w8
  int32_t v125; // w26
  unsigned int v126; // w8
  System_String_o *v127; // x26
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *commandTypeIds; // x8
  char v129; // w28
  System_String_o *Item; // x0
  System_String_o *v131; // x27
  System_Collections_Generic_List_int__o *v132; // x26
  QuestAfterAction_o *v133; // x0
  const MethodInfo *v134; // x2
  __int64 v135; // x8
  __int64 v136; // x25
  unsigned __int64 v137; // x20
  unsigned int *v138; // x20
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  unsigned int *v145; // x0
  TerminalPramsManager_c *v146; // x0
  __int64 v147; // x1
  QuestMaster_o *v148; // x19
  TerminalPramsManager_c *v149; // x0
  BalanceConfig_c *v150; // x8
  int32_t WarId_k__BackingField; // w19
  int32_t v152; // w19
  TerminalPramsManager_c *v153; // x0
  TerminalPramsManager_c *v154; // x0
  TerminalPramsManager_c *v155; // x0
  BalanceConfig_c *v156; // x8
  int32_t v157; // w20
  TerminalPramsManager_c *v158; // x0
  TerminalPramsManager_c *v159; // x0
  TerminalPramsManager_c *v160; // x0
  __int64 v161; // x0
  __int64 v162; // x0
  System_String_array *v163; // [xsp+8h] [xbp-78h]
  unsigned int **p_commandBuf; // [xsp+10h] [xbp-70h]
  int32_t svtId; // [xsp+1Ch] [xbp-64h] BYREF
  WarEntity_o *v166; // [xsp+20h] [xbp-60h] BYREF
  QuestEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  v4 = this;
  if ( (byte_4214555 & 1) == 0 )
  {
    sub_B0D8A4(&BalanceConfig_TypeInfo, isBeforeAction);
    sub_B0D8A4(&bool_TypeInfo, v5);
    sub_B0D8A4(&char___TypeInfo, v6);
    sub_B0D8A4(&QuestAfterAction_Command___TypeInfo, v7);
    sub_B0D8A4(&QuestAfterAction_Command_TypeInfo, v8);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionMaster___, v9);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, v10);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v11);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v12);
    sub_B0D8A4(&Method_DataManager_GetMasterData_WarMaster___, v13);
    sub_B0D8A4(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v14);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestBehaviorMaster___, v15);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestMaster___, v16);
    sub_B0D8A4(&Method_DataManager_GetMaster_ShopMaster___, v17);
    sub_B0D8A4(&Method_DataManager_GetMaster_WarMaster___, v18);
    sub_B0D8A4(&DataManager_TypeInfo, v19);
    sub_B0D8A4(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v20);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v21);
    sub_B0D8A4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v22);
    sub_B0D8A4(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v23);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__, v24);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v25);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____, v26);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v27);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v29);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v30);
    sub_B0D8A4(&QuestAfterAction_VoiceInfo_TypeInfo, v31);
    sub_B0D8A4(&StringLiteral_16336/*"afterActionBk"*/, v32);
    this = (QuestAfterAction_o *)sub_B0D8A4(&StringLiteral_705/*","*/, v33);
    byte_4214555 = 1;
  }
  v166 = 0LL;
  entity = 0LL;
  svtId = 0;
  *(_QWORD *)&v4->fields.ActionMapTargetType = -1LL;
  *(_WORD *)&v4->fields.isLoadedVoice = 0;
  if ( isBeforeAction )
  {
    if ( System_Linq_Enumerable__Any_KeyValuePair_int__QuestAfterAction_VoiceInfo__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.svtVoices,
           (const MethodInfo_1718A60 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____) )
    {
      QuestAfterAction__releaseVoice(v4, v34);
    }
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4210852 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v34);
      byte_4210852 = 1;
    }
    v36 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v36 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v36->static_fields->_QuestId_k__BackingField;
    if ( !byte_4210853 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v34);
      v36 = TerminalPramsManager_TypeInfo;
      byte_4210853 = 1;
    }
    if ( (BYTE3(v36->vtable._0_Equals.methodPtr) & 4) != 0 && !v36->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v36);
      v36 = TerminalPramsManager_TypeInfo;
    }
    v38 = QuestAfterAction__GetBeforeAction(
            QuestId_k__BackingField,
            v36->static_fields->_PhaseCnt_k__BackingField + 1,
            v35);
    goto LABEL_261;
  }
  QuestAfterAction__LoadTerminalTransitionInfo(this, (const MethodInfo *)isBeforeAction);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v39);
    byte_421083D = 1;
  }
  Master_WarQuestSelectionMaster = (__int64)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)TerminalSceneComponent_TypeInfo;
  }
  v42 = **(_QWORD **)(Master_WarQuestSelectionMaster + 184);
  if ( !v42 )
    goto LABEL_344;
  if ( *(_QWORD *)(v42 + 448) )
  {
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
    }
    if ( !byte_421083D )
    {
      sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v39);
      byte_421083D = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalSceneComponent_TypeInfo;
    }
    v43 = **(_QWORD **)(Master_WarQuestSelectionMaster + 184);
    if ( !v43 )
      goto LABEL_344;
    v44 = *(_QWORD *)(v43 + 448);
    if ( !v44 )
      goto LABEL_344;
    v45 = *(_DWORD *)(v44 + 20);
    if ( !byte_421083D )
    {
      sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v39);
      Master_WarQuestSelectionMaster = (__int64)TerminalSceneComponent_TypeInfo;
      byte_421083D = 1;
    }
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      Master_WarQuestSelectionMaster = (__int64)TerminalSceneComponent_TypeInfo;
    }
    v46 = **(_QWORD **)(Master_WarQuestSelectionMaster + 184);
    if ( !v46 )
      goto LABEL_344;
    v47 = *(_QWORD *)(v46 + 448);
    if ( !v47 )
      goto LABEL_344;
    v48 = *(_DWORD *)(v47 + 16);
    if ( v48 < 1 )
    {
      if ( v45 < 1 )
        goto LABEL_96;
      if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
        && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
      {
        j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      }
      if ( !byte_421083D )
      {
        sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v39);
        byte_421083D = 1;
      }
      Master_WarQuestSelectionMaster = (__int64)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Master_WarQuestSelectionMaster = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v52 = **(_QWORD **)(Master_WarQuestSelectionMaster + 184);
      if ( !v52 )
        goto LABEL_344;
      v53 = *(_QWORD *)(v52 + 448);
      if ( !v53 )
        goto LABEL_344;
      v38 = *(System_String_array **)(v53 + 32);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_344;
      Master_WarQuestSelectionMaster = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                  v45,
                                                  (const MethodInfo_2669BD4 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_344;
      v51 = *(_DWORD *)(Master_WarQuestSelectionMaster + 24);
      Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_344;
    }
    else
    {
      if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
        && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
      {
        j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      }
      if ( !byte_421083D )
      {
        sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v39);
        byte_421083D = 1;
      }
      Master_WarQuestSelectionMaster = (__int64)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Master_WarQuestSelectionMaster = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v49 = **(_QWORD **)(Master_WarQuestSelectionMaster + 184);
      if ( !v49 )
        goto LABEL_344;
      v50 = *(_QWORD *)(v49 + 448);
      if ( !v50 )
        goto LABEL_344;
      if ( !Instance )
        goto LABEL_344;
      v38 = *(System_String_array **)(v50 + 32);
      Master_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)Instance,
                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_344;
      Master_WarQuestSelectionMaster = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                  v48,
                                                  (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_344;
      v51 = *(_DWORD *)(Master_WarQuestSelectionMaster + 28);
      Master_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)Instance,
                                                  (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_344;
    }
    Master_WarQuestSelectionMaster = (__int64)WarMaster__getByEventId(
                                                (WarMaster_o *)Master_WarQuestSelectionMaster,
                                                v51,
                                                0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_344;
    v55 = *(_DWORD *)(Master_WarQuestSelectionMaster + 16);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4210841 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v54);
      byte_4210841 = 1;
    }
    v56 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v56 = TerminalPramsManager_TypeInfo;
    }
    v56->static_fields->_WarId_k__BackingField = v55;
    if ( !byte_421083D )
    {
      sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v54);
      byte_421083D = 1;
    }
    v57 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v57 = TerminalSceneComponent_TypeInfo;
    }
    Master_WarQuestSelectionMaster = (__int64)v57->static_fields->mInstance;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_344;
    TerminalSceneComponent__CallQuestInformationCloseAtAll(
      (TerminalSceneComponent_o *)Master_WarQuestSelectionMaster,
      0,
      0LL);
    if ( v38 )
      goto LABEL_261;
  }
LABEL_96:
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210854 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v39);
    byte_4210854 = 1;
  }
  v58 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v58 = TerminalPramsManager_TypeInfo;
  }
  if ( !v58->static_fields->_IsPhaseClear_k__BackingField
    && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_16336/*"afterActionBk"*/, 0LL) )
  {
    String_34963268 = UnityEngine_PlayerPrefs__GetString_34963268((System_String_o *)StringLiteral_16336/*"afterActionBk"*/, 0LL);
    Master_WarQuestSelectionMaster = sub_B0D8BC(char___TypeInfo, 1LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_344;
    if ( !*(_DWORD *)(Master_WarQuestSelectionMaster + 24) )
      goto LABEL_459;
    *(_WORD *)(Master_WarQuestSelectionMaster + 32) = 44;
    if ( !String_34963268 )
      goto LABEL_344;
    Master_WarQuestSelectionMaster = (__int64)System_String__Split(
                                                String_34963268,
                                                (System_Char_array *)Master_WarQuestSelectionMaster,
                                                0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_344;
    v60 = Master_WarQuestSelectionMaster;
    if ( !*(_DWORD *)(Master_WarQuestSelectionMaster + 24) )
      goto LABEL_459;
    v62 = System_Int32__Parse(*(System_String_o **)(Master_WarQuestSelectionMaster + 32), 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4210843 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v61);
      byte_4210843 = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 16LL) = v62;
    if ( *(_DWORD *)(v60 + 24) <= 1u )
      goto LABEL_459;
    v64 = System_Int32__Parse(*(System_String_o **)(v60 + 40), 0LL);
    if ( !byte_4210844 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v63);
      byte_4210844 = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 20LL) = v64;
    if ( *(_DWORD *)(v60 + 24) <= 2u )
      goto LABEL_459;
    v65 = *(System_String_o **)(v60 + 48);
    if ( (BYTE3(bool_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !bool_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
    v67 = System_Boolean__Parse(v65, 0LL);
    if ( !byte_421086D )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v66);
      byte_421086D = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    *(_BYTE *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 84LL) = v67;
    if ( *(_DWORD *)(v60 + 24) <= 3u )
      goto LABEL_459;
    v68 = System_Boolean__Parse(*(System_String_o **)(v60 + 56), 0LL);
    if ( !byte_421086E )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v39);
      byte_421086E = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    *(_BYTE *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 85LL) = v68;
    if ( !byte_4210864 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v39);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
      byte_4210864 = 1;
    }
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( *(_BYTE *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 84LL) )
    {
      if ( !Instance )
        goto LABEL_344;
      MasterData_WarQuestSelectionMaster = (WarMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4210852 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v69);
        byte_4210852 = 1;
      }
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
      }
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_344;
      QuestId = WarMaster__getByLastQuestId(
                  MasterData_WarQuestSelectionMaster,
                  *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 16LL),
                  0LL);
      if ( QuestId )
      {
        v72 = QuestId;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_421085A )
        {
          sub_B0D8A4(&TerminalPramsManager_TypeInfo, v39);
          byte_421085A = 1;
        }
        v73 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v73 = TerminalPramsManager_TypeInfo;
        }
        v73->static_fields->_IsWarClear_k__BackingField = 1;
        id = v72->fields.id;
        if ( !byte_4210841 )
        {
          sub_B0D8A4(&TerminalPramsManager_TypeInfo, v39);
          v73 = TerminalPramsManager_TypeInfo;
          byte_4210841 = 1;
        }
        if ( (BYTE3(v73->vtable._0_Equals.methodPtr) & 4) != 0 && !v73->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v73);
          v73 = TerminalPramsManager_TypeInfo;
        }
        v73->static_fields->_WarId_k__BackingField = id;
        v75 = TerminalPramsManager__CheckIsOrdealCallWarClear(v72, 0LL);
        if ( !byte_4210889 )
        {
          sub_B0D8A4(&TerminalPramsManager_TypeInfo, v39);
          byte_4210889 = 1;
        }
        v76 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v76 = TerminalPramsManager_TypeInfo;
        }
        v76->static_fields->_IsOrdealCallWarClear_k__BackingField = v75;
      }
    }
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210858 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v39);
    byte_4210858 = 1;
  }
  v77 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v77 = TerminalPramsManager_TypeInfo;
  }
  if ( v77->static_fields->_IsWarClear_k__BackingField )
  {
    if ( (BYTE3(v77->vtable._0_Equals.methodPtr) & 4) != 0 && !v77->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v77);
    if ( !byte_4210859 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v39);
      byte_4210859 = 1;
    }
    v77 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v77 = TerminalPramsManager_TypeInfo;
    }
    if ( !v77->static_fields->_IsOrdealCallWarClear_k__BackingField )
      goto LABEL_260;
  }
  if ( (BYTE3(v77->vtable._0_Equals.methodPtr) & 4) != 0 && !v77->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v77);
  if ( !byte_4210854 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v39);
    byte_4210854 = 1;
  }
  Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( *(_BYTE *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 85LL) )
  {
    if ( !Instance )
      goto LABEL_344;
    v79 = (QuestPhaseDetailAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4210852 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v78);
      byte_4210852 = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    v80 = *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 16LL);
    if ( !byte_4210853 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v78);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
      byte_4210853 = 1;
    }
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !v79 )
      goto LABEL_344;
    v38 = QuestPhaseDetailAddMaster__GetAfterAction(
            v79,
            v80,
            *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 20LL) + 1,
            0LL);
    if ( v38 )
      goto LABEL_261;
    v82 = (QuestPhaseDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4210852 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v81);
      byte_4210852 = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    v83 = *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 16LL);
    if ( !byte_4210853 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v81);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
      byte_4210853 = 1;
    }
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !v82 )
      goto LABEL_344;
    v38 = QuestPhaseDetailMaster__GetAfterAction(
            v82,
            v83,
            *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 20LL) + 1,
            0LL);
    if ( v38 )
      goto LABEL_261;
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0 && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
  if ( !byte_4210864 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v39);
    byte_4210864 = 1;
  }
  v84 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v84 = TerminalPramsManager_TypeInfo;
  }
  if ( !v84->static_fields->_IsQuestClear_k__BackingField )
    goto LABEL_260;
  if ( (BYTE3(v84->vtable._0_Equals.methodPtr) & 4) != 0 && !v84->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v84);
  v38 = 0LL;
  if ( TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL) )
    goto LABEL_261;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210852 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v85);
    byte_4210852 = 1;
  }
  Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_344;
  v86 = *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 16LL);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_344;
  v87 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
          v86,
          (const MethodInfo_2669BD4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( v87 )
    v38 = *(System_String_array **)&v87->fields.eventId;
  else
LABEL_260:
    v38 = 0LL;
LABEL_261:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v89 = (QuestBehaviorMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210852 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v88);
    byte_4210852 = 1;
  }
  Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
  }
  v90 = *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 16LL);
  if ( !byte_4210853 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v88);
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    byte_4210853 = 1;
  }
  if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0 && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
  {
    j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !v89 )
    goto LABEL_344;
  IsOpenQuestBehaviorCond = QuestBehaviorMaster__IsOpenQuestBehaviorCond(
                              v89,
                              v90,
                              *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 20LL) + 1,
                              7,
                              0LL);
  if ( !v38 || IsOpenQuestBehaviorCond || (v92 = *(_QWORD *)&v38->max_length, (int)v92 < 2) || (v92 & 1) != 0 )
  {
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16336/*"afterActionBk"*/, 0LL);
    return;
  }
  v93 = (System_Int32_array **)sub_B0D8BC(QuestAfterAction_Command___TypeInfo, (unsigned int)v92 >> 1);
  v4->fields.commandBuf = (struct QuestAfterAction_Command_array *)v93;
  sub_B0D840((BattleServantConfConponent_o *)&v4->fields.commandBuf, v93, v94, v95, v96, v97, v98, v99);
  commandBuf = (int *)v4->fields.commandBuf;
  if ( !commandBuf )
    goto LABEL_344;
  v103 = 0LL;
  v104 = 0;
  v163 = v38;
  p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
  while ( (__int64)v103 < commandBuf[6] )
  {
    v105 = sub_B0D974(QuestAfterAction_Command_TypeInfo, v100, v101);
    QuestAfterAction_Command___ctor((QuestAfterAction_Command_o *)v105, 0LL);
    if ( v104 >= v38->max_length )
      goto LABEL_459;
    Master_WarQuestSelectionMaster = System_Int32__Parse(v38->m_Items[v104], 0LL);
    if ( !v105 )
      goto LABEL_344;
    *(_DWORD *)(v105 + 16) = Master_WarQuestSelectionMaster;
    v112 = (int)v104 | 1LL;
    if ( (unsigned int)v112 >= v38->max_length )
      goto LABEL_459;
    v113 = (System_Int32_array **)v38->m_Items[v112];
    *(_QWORD *)(v105 + 24) = v113;
    v114 = (System_String_o **)(v105 + 24);
    sub_B0D840((BattleServantConfConponent_o *)(v105 + 24), v113, v106, v107, v108, v109, v110, v111);
    if ( !v4->fields.hasFadeCommand )
    {
      v116 = *(_DWORD *)(v105 + 16);
      if ( v116 == 520 || v116 == 405 )
        v4->fields.hasFadeCommand = 1;
    }
    if ( !v104 && !v4->fields.isRequestedStopBgm && *(_DWORD *)(v105 + 16) == 850 )
      v4->fields.isRequestedStopBgm = 1;
    if ( (v4->fields.MapMoveBeforeFocusSpotId & 0x80000000) != 0 )
    {
      v117 = *(_DWORD *)(v105 + 16);
      if ( v117 != 350 )
        goto LABEL_298;
      v127 = *v114;
      Master_WarQuestSelectionMaster = sub_B0D8BC(char___TypeInfo, 1LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_344;
      if ( !*(_DWORD *)(Master_WarQuestSelectionMaster + 24) )
        goto LABEL_459;
      *(_WORD *)(Master_WarQuestSelectionMaster + 32) = 44;
      if ( !v127 )
        goto LABEL_344;
      Master_WarQuestSelectionMaster = (__int64)System_String__Split(
                                                  v127,
                                                  (System_Char_array *)Master_WarQuestSelectionMaster,
                                                  0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_344;
      if ( *(int *)(Master_WarQuestSelectionMaster + 24) >= 4 )
      {
        Master_WarQuestSelectionMaster = System_Int32__Parse(
                                           *(System_String_o **)(Master_WarQuestSelectionMaster + 56),
                                           0LL);
        v4->fields.MapMoveBeforeFocusSpotId = Master_WarQuestSelectionMaster;
      }
    }
    v117 = *(_DWORD *)(v105 + 16);
LABEL_298:
    v118 = v4;
    if ( v117 == 800 )
    {
      Master_WarQuestSelectionMaster = (__int64)QuestAfterAction_Command__GetAvailableRandomVoice(
                                                  (QuestAfterAction_Command_o *)v105,
                                                  &svtId,
                                                  0LL);
      if ( Master_WarQuestSelectionMaster )
      {
        svtVoices = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v4->fields.svtVoices;
        v121 = svtId;
        v122 = (System_String_o *)Master_WarQuestSelectionMaster;
        v123 = (QuestAfterAction_VoiceInfo_o *)sub_B0D974(QuestAfterAction_VoiceInfo_TypeInfo, v119, v115);
        QuestAfterAction_VoiceInfo___ctor(v123, v121, v122, 0LL);
        if ( !svtVoices )
          goto LABEL_344;
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
          svtVoices,
          v103,
          (WarBoardEvalValueSquare_EvalValueSquare_o *)v123,
          (const MethodInfo_2E90428 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__);
        v38 = v163;
      }
    }
    v124 = *(_DWORD *)(v105 + 16);
    if ( v124 <= 113 )
    {
      v126 = v124 - 100;
      v4 = v118;
      if ( v126 >= 0xE || ((0x3C1Fu >> v126) & 1) == 0 )
        goto LABEL_331;
      v125 = 0;
    }
    else if ( (unsigned int)(v124 - 200) < 6 )
    {
      v125 = 1;
      v4 = v118;
    }
    else
    {
      v4 = v118;
      if ( (unsigned int)(v124 - 400) < 0xA )
      {
        v125 = 2;
      }
      else
      {
        if ( v124 != 550 )
          goto LABEL_331;
        v125 = 3;
      }
    }
    Master_WarQuestSelectionMaster = (__int64)*v114;
    if ( !*v114 )
      goto LABEL_344;
    Master_WarQuestSelectionMaster = System_String__Contains(
                                       (System_String_o *)Master_WarQuestSelectionMaster,
                                       (System_String_o *)StringLiteral_705/*","*/,
                                       0LL);
    commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v4->fields.commandTypeIds;
    if ( !commandTypeIds )
      goto LABEL_344;
    v129 = Master_WarQuestSelectionMaster;
    Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
             commandTypeIds,
             v125,
             (const MethodInfo_2EA6BFC *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    v131 = *v114;
    v132 = (System_Collections_Generic_List_int__o *)Item;
    if ( (v129 & 1) != 0 )
    {
      Master_WarQuestSelectionMaster = sub_B0D8BC(char___TypeInfo, 1LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_344;
      if ( !*(_DWORD *)(Master_WarQuestSelectionMaster + 24) )
        goto LABEL_459;
      *(_WORD *)(Master_WarQuestSelectionMaster + 32) = 44;
      if ( !v131 )
        goto LABEL_344;
      Master_WarQuestSelectionMaster = (__int64)System_String__Split(
                                                  v131,
                                                  (System_Char_array *)Master_WarQuestSelectionMaster,
                                                  0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_344;
      v38 = v163;
      if ( !*(_DWORD *)(Master_WarQuestSelectionMaster + 24) )
        goto LABEL_459;
      v4 = v118;
      Master_WarQuestSelectionMaster = System_Int32__Parse(
                                         *(System_String_o **)(Master_WarQuestSelectionMaster + 32),
                                         0LL);
      if ( !v132 )
        goto LABEL_344;
      System_Collections_Generic_List_int___Add(
        v132,
        Master_WarQuestSelectionMaster,
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
    }
    else
    {
      Master_WarQuestSelectionMaster = System_Int32__Parse(*v114, 0LL);
      if ( !v132 )
        goto LABEL_344;
      System_Collections_Generic_List_int___Add(
        v132,
        Master_WarQuestSelectionMaster,
        (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      v38 = v163;
      v4 = v118;
    }
LABEL_331:
    if ( v4->fields.ActionMapTargetId <= 0 )
      QuestAfterAction__SetActionMap(v4, (QuestAfterAction_Command_o *)v105, v115);
    if ( *(_DWORD *)(v105 + 16) == 102 )
    {
      v133 = (QuestAfterAction_o *)System_Int32__Parse(*v114, 0LL);
      Master_WarQuestSelectionMaster = (__int64)QuestAfterAction__GetMapGimmickId(v133, (int32_t)v133, v134);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_344;
      v135 = *(_QWORD *)(Master_WarQuestSelectionMaster + 24);
      v136 = Master_WarQuestSelectionMaster;
      if ( (int)v135 >= 1 )
      {
        v137 = 0LL;
        while ( v137 < (unsigned int)v135 )
        {
          Master_WarQuestSelectionMaster = (__int64)v4->fields.invalidMapGimmickIdList;
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_344;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)Master_WarQuestSelectionMaster,
            *(_DWORD *)(v136 + 32 + 4 * v137),
            (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
          LODWORD(v135) = *(_DWORD *)(v136 + 24);
          if ( (__int64)++v137 >= (int)v135 )
            goto LABEL_340;
        }
LABEL_459:
        v161 = sub_B0D9A8(Master_WarQuestSelectionMaster);
        sub_B0D948(v161, 0LL);
      }
    }
LABEL_340:
    v138 = *p_commandBuf;
    if ( !*p_commandBuf )
      goto LABEL_344;
    Master_WarQuestSelectionMaster = sub_B0D964(v105, *(_QWORD *)(*(_QWORD *)v138 + 64LL));
    if ( !Master_WarQuestSelectionMaster )
    {
      v162 = sub_B0D99C(0LL);
      sub_B0D948(v162, 0LL);
    }
    if ( v103 >= v138[6] )
      goto LABEL_459;
    v145 = &v138[2 * v103];
    *((_QWORD *)v145 + 4) = v105;
    sub_B0D840(
      (BattleServantConfConponent_o *)(v145 + 8),
      (System_Int32_array **)v105,
      v139,
      v140,
      v141,
      v142,
      v143,
      v144);
    commandBuf = (int *)*p_commandBuf;
    v104 += 2;
    ++v103;
    if ( !*p_commandBuf )
      goto LABEL_344;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210854 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v100);
    byte_4210854 = 1;
  }
  v146 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v146 = TerminalPramsManager_TypeInfo;
  }
  if ( v146->static_fields->_IsPhaseClear_k__BackingField )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v148 = (QuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4210852 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v147);
      byte_4210852 = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !v148 )
      goto LABEL_344;
    if ( QuestMaster__TryGetQuestEntity(
           v148,
           &entity,
           *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 16LL),
           0LL) )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_421083F )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v100);
        byte_421083F = 1;
      }
      v149 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v149 = TerminalPramsManager_TypeInfo;
      }
      v150 = BalanceConfig_TypeInfo;
      WarId_k__BackingField = v149->static_fields->_WarId_k__BackingField;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v150 = BalanceConfig_TypeInfo;
      }
      if ( WarId_k__BackingField == v150->static_fields->OrdealCallWarId )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
        if ( entity && Master_WarQuestSelectionMaster )
        {
          Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                             &v166,
                                             entity->fields.spotId,
                                             (const MethodInfo_2669C30 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
          if ( (Master_WarQuestSelectionMaster & 1) == 0 )
            goto LABEL_396;
          if ( v166 )
          {
            v152 = v166->fields.id;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            }
            if ( !byte_4212390 )
            {
              sub_B0D8A4(&TerminalPramsManager_TypeInfo, v100);
              byte_4212390 = 1;
            }
            v153 = TerminalPramsManager_TypeInfo;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v153 = TerminalPramsManager_TypeInfo;
            }
            v153->static_fields->_BlankEarthAfterActionFocusSpotId_k__BackingField = v152;
            goto LABEL_396;
          }
        }
LABEL_344:
        sub_B0D97C(Master_WarQuestSelectionMaster);
      }
    }
  }
LABEL_396:
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210848 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v100);
    byte_4210848 = 1;
  }
  v154 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v154 = TerminalPramsManager_TypeInfo;
  }
  v154->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_4210847 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v100);
    v154 = TerminalPramsManager_TypeInfo;
    byte_4210847 = 1;
  }
  if ( (BYTE3(v154->vtable._0_Equals.methodPtr) & 4) != 0 && !v154->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v154);
    v154 = TerminalPramsManager_TypeInfo;
  }
  v154->static_fields->_DispState_k__BackingField = 2;
  if ( !byte_421083F )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v100);
    byte_421083F = 1;
  }
  v155 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v155 = TerminalPramsManager_TypeInfo;
  }
  v156 = BalanceConfig_TypeInfo;
  v157 = v155->static_fields->_WarId_k__BackingField;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v156 = BalanceConfig_TypeInfo;
  }
  v158 = TerminalPramsManager_TypeInfo;
  if ( v157 == v156->static_fields->OrdealCallWarId )
    goto LABEL_463;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210859 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v100);
    byte_4210859 = 1;
  }
  v158 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v158 = TerminalPramsManager_TypeInfo;
  }
  if ( v158->static_fields->_IsOrdealCallWarClear_k__BackingField )
  {
LABEL_463:
    if ( (BYTE3(v158->vtable._0_Equals.methodPtr) & 4) != 0 && !v158->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v158);
    if ( !byte_4211AA9 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v100);
      byte_4211AA9 = 1;
    }
    v158 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v158 = TerminalPramsManager_TypeInfo;
    }
    v158->static_fields->_BlankEarthSpotId_k__BackingField = 0;
    if ( !byte_4210859 )
    {
      sub_B0D8A4(&TerminalPramsManager_TypeInfo, v100);
      v158 = TerminalPramsManager_TypeInfo;
      byte_4210859 = 1;
    }
    if ( (BYTE3(v158->vtable._0_Equals.methodPtr) & 4) != 0 && !v158->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v158);
      v158 = TerminalPramsManager_TypeInfo;
    }
    if ( !v158->static_fields->_IsOrdealCallWarClear_k__BackingField )
    {
      if ( (BYTE3(v158->vtable._0_Equals.methodPtr) & 4) != 0 && !v158->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v158);
      if ( !byte_4210847 )
      {
        sub_B0D8A4(&TerminalPramsManager_TypeInfo, v100);
        byte_4210847 = 1;
      }
      v159 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v159 = TerminalPramsManager_TypeInfo;
      }
      v159->static_fields->_DispState_k__BackingField = 3;
      v158 = TerminalPramsManager_TypeInfo;
    }
  }
  if ( (BYTE3(v158->vtable._0_Equals.methodPtr) & 4) != 0 && !v158->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v158);
  if ( !byte_4210874 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v100);
    byte_4210874 = 1;
  }
  v160 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v160 = TerminalPramsManager_TypeInfo;
  }
  v160->static_fields->_SpotId_k__BackingField = -1;
}


void __fastcall QuestAfterAction__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4214553 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_16336/*"afterActionBk"*/, v1);
    byte_4214553 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16336/*"afterActionBk"*/, 0LL);
}


QuestAfterAction_Command_array *__fastcall QuestAfterAction__GenerateCommandBuf(
        System_String_array *actionVals,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 IsNullOrEmpty; // x0
  _QWORD **v6; // x20
  __int64 v7; // x19
  __int16 v8; // w8
  __int64 v9; // x19
  __int64 v10; // x19
  __int64 v11; // x19
  QuestAfterAction_Command_array *v12; // x20
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x22
  unsigned __int64 v16; // x23
  __int64 v17; // x24
  il2cpp_array_size_t v18; // w25
  __int64 v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v34; // x0
  __int64 v35; // x0

  if ( (byte_4214556 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Array_Empty_QuestAfterAction_Command___, method);
    sub_B0D8A4(&QuestAfterAction_Command___TypeInfo, v3);
    sub_B0D8A4(&QuestAfterAction_Command_TypeInfo, v4);
    byte_4214556 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v6 = (_QWORD **)Method_System_Array_Empty_QuestAfterAction_Command___;
    v7 = **((_QWORD **)Method_System_Array_Empty_QuestAfterAction_Command___ + 6);
    v8 = *(_WORD *)(v7 + 306);
    if ( (v8 & 1) == 0 )
    {
      sub_AA65A4(**((_QWORD **)Method_System_Array_Empty_QuestAfterAction_Command___ + 6));
      v8 = *(_WORD *)(v7 + 306);
    }
    if ( (v8 & 0x400) != 0 )
    {
      v9 = *v6[6];
      if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
        sub_AA65A4(*v6[6]);
      if ( !*(_DWORD *)(v9 + 224) )
      {
        v10 = *v6[6];
        if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
          sub_AA65A4(*v6[6]);
        j_il2cpp_runtime_class_init_0(v10);
      }
    }
    v11 = *v6[6];
    if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
      sub_AA65A4(*v6[6]);
    return **(QuestAfterAction_Command_array ***)(v11 + 184);
  }
  else
  {
    if ( !actionVals
      || (IsNullOrEmpty = sub_B0D8BC(
                            QuestAfterAction_Command___TypeInfo,
                            (unsigned int)((signed int)actionVals->max_length / 2))) == 0 )
    {
LABEL_28:
      sub_B0D97C(IsNullOrEmpty);
    }
    v12 = (QuestAfterAction_Command_array *)IsNullOrEmpty;
    if ( *(int *)(IsNullOrEmpty + 24) >= 1 )
    {
      v15 = 0LL;
      v16 = 0LL;
      v17 = IsNullOrEmpty + 32;
      v18 = 1;
      do
      {
        v19 = sub_B0D974(QuestAfterAction_Command_TypeInfo, v13, v14);
        QuestAfterAction_Command___ctor((QuestAfterAction_Command_o *)v19, 0LL);
        if ( v18 - 1 >= actionVals->max_length )
          goto LABEL_27;
        IsNullOrEmpty = System_Int32__Parse(actionVals->m_Items[v18 - 1], 0LL);
        if ( !v19 )
          goto LABEL_28;
        *(_DWORD *)(v19 + 16) = IsNullOrEmpty;
        if ( v18 >= actionVals->max_length )
          goto LABEL_27;
        v26 = (System_Int32_array **)actionVals->m_Items[v18];
        *(_QWORD *)(v19 + 24) = v26;
        sub_B0D840((BattleServantConfConponent_o *)(v19 + 24), v26, v20, v21, v22, v23, v24, v25);
        IsNullOrEmpty = sub_B0D964(v19, v12->obj.klass->_1.element_class);
        if ( !IsNullOrEmpty )
        {
          v35 = sub_B0D99C(0LL);
          sub_B0D948(v35, 0LL);
        }
        if ( v16 >= v12->max_length )
        {
LABEL_27:
          v34 = sub_B0D9A8(IsNullOrEmpty);
          sub_B0D948(v34, 0LL);
        }
        *(_QWORD *)(v17 + 8 * v16) = v19;
        sub_B0D840(
          (BattleServantConfConponent_o *)(v17 + v15),
          (System_Int32_array **)v19,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
        ++v16;
        v18 += 2;
        v15 += 8LL;
      }
      while ( (__int64)v16 < (int)v12->max_length );
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
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  QuestPhaseDetailAddMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int32_t items; // w23
  System_String_array *result; // x0
  __int64 v16; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // x20
  System_String_array *v18; // x19

  if ( (byte_421456C & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&phase);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v6);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_string___, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v10);
    byte_421456C = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = (QuestPhaseDetailAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        Instance,
                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210852 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v12);
    byte_4210852 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  items = (int32_t)Instance[1].fields.saveNameList->fields._items;
  if ( !byte_4210853 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v12);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_4210853 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_37;
  result = QuestPhaseDetailMaster__GetAfterAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  v17 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         Instance,
                                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210852 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v16);
    byte_4210852 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v17 )
LABEL_37:
    sub_B0D97C(Instance);
  result = (System_String_array *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v17,
                                    (int32_t)Instance[1].fields.saveNameList->fields._items,
                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( result )
  {
    v18 = result;
    if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result->m_Items[8],
           (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_string___) )
    {
      return (System_String_array *)v18->m_Items[8];
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
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  QuestPhaseDetailAddMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int32_t items; // w23
  System_String_array *result; // x0
  __int64 v16; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // x20
  System_String_array *v18; // x19

  if ( (byte_421456B & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&phase);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v6);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Any_string___, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v10);
    byte_421456B = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = (QuestPhaseDetailAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        Instance,
                                                                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210852 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v12);
    byte_4210852 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  items = (int32_t)Instance[1].fields.saveNameList->fields._items;
  if ( !byte_4210853 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v12);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_4210853 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_37;
  result = QuestPhaseDetailMaster__GetBeforeAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  v17 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         Instance,
                                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210852 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v16);
    byte_4210852 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v17 )
LABEL_37:
    sub_B0D97C(Instance);
  result = (System_String_array *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v17,
                                    (int32_t)Instance[1].fields.saveNameList->fields._items,
                                    (const MethodInfo_2669BD4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( result )
  {
    v18 = result;
    if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result->m_Items[7],
           (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_string___) )
    {
      return (System_String_array *)v18->m_Items[7];
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
      return dword_32037E0[commandId - 100];
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
        const MethodInfo_204D3A4 *method)
{
  QuestAfterAction_o *v9; // x23
  UnityEngine_Object_o *MapGameObject; // x20

  v9 = this;
  if ( (byte_4219F3B & 1) == 0 )
  {
    this = (QuestAfterAction_o *)sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&comType);
    byte_4219F3B = 1;
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
    sub_B0D97C(this);
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
  __int64 v9; // x1
  UnityEngine_Object_o *v10; // x23
  UnityEngine_Transform_o *transform; // x23
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x3

  v8 = this;
  if ( (byte_4214567 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, *(_QWORD *)&comType);
    this = (QuestAfterAction_o *)sub_B0D8A4(&SrcSpotBasePrefab_TypeInfo, v9);
    byte_4214567 = 1;
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
        sub_B0D97C(this);
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
      v10 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)this, 0LL);
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
  v10 = 0LL;
LABEL_31:
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (QuestAfterAction_o *)UnityEngine_Object__op_Equality(v10, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (QuestAfterAction_o *)QuestAfterAction__IsMapChangeable(this, v12);
    if ( !state )
      goto LABEL_42;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      state->fields.IsAnimDoing = 0;
      QuestAfterAction__RequestMapChange(v8, comType, id, v13);
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
    if ( !v10 )
      goto LABEL_42;
    return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v10, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall QuestAfterAction__GetMapGimmickId(
        QuestAfterAction_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_int__o *v10; // x20
  void *Instance; // x0
  int v12; // w8
  _DWORD *v13; // x21
  unsigned int v14; // w23
  char *v15; // x8
  __int64 v16; // x22
  __int64 v18; // x0

  if ( (byte_4214557 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_MapGimmickMaster___, *(_QWORD *)&spotId);
    sub_B0D8A4(&Method_DataMasterBase_getEntitys_MapGimmickEntity___, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4214557 = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    *(_QWORD *)&spotId,
                                                    method);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
               (DataMasterBase_o *)Instance,
               (const MethodInfo_1714E7C *)Method_DataMasterBase_getEntitys_MapGimmickEntity___);
  if ( !Instance )
    goto LABEL_16;
  v12 = *((_DWORD *)Instance + 6);
  v13 = Instance;
  if ( v12 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= v12 )
      {
        v18 = sub_B0D9A8(Instance);
        sub_B0D948(v18, 0LL);
      }
      v15 = (char *)&v13[2 * v14];
      v16 = *((_QWORD *)v15 + 4);
      if ( !v16 )
        break;
      Instance = (void *)MapGimmickEntity__GetRaidDispSpotIdFromScript(*((MapGimmickEntity_o **)v15 + 4), 0LL);
      if ( (_DWORD)Instance == spotId )
      {
        if ( !v10 )
          break;
        System_Collections_Generic_List_int___Add(
          v10,
          *(_DWORD *)(v16 + 16),
          (const MethodInfo_2FAFF00 *)Method_System_Collections_Generic_List_int__Add__);
      }
      v12 = v13[6];
      if ( (int)++v14 >= v12 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B0D97C(Instance);
  }
LABEL_14:
  if ( !v10 )
    goto LABEL_16;
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall QuestAfterAction__GetState(QuestAfterAction_o *this, const MethodInfo *method)
{
  QuestAfterAction_o *v2; // x19
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  v2 = this;
  if ( (byte_4214565 & 1) == 0 )
  {
    this = (QuestAfterAction_o *)sub_B0D8A4(&Method_CStateManager_QuestAfterAction__getState__, method);
    byte_4214565 = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_B0D97C(this);
  return fsm->fields.m_state;
}


void __fastcall QuestAfterAction__Init(QuestAfterAction_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
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
  struct CStateManager_QuestAfterAction__o **p_fsm; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct CStateManager_QuestAfterAction__o *fsm; // x21
  __int64 v26; // x1
  __int64 v27; // x2
  QuestAfterAction_StateNone_o *v28; // x22
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *commandTypeIds; // x0
  CStateManager_QAASpotStateController_IMapSpot__o *v30; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  QuestAfterAction_StateMain_o *v33; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v34; // x21
  __int64 v35; // x1
  __int64 v36; // x2
  QuestAfterAction_StateAdditional_o *v37; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v38; // x20
  __int64 v39; // x1
  __int64 v40; // x2
  QuestAfterAction_StateInstant_o *v41; // x21
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  unsigned int v48; // w25
  int32_t v49; // w20
  __int64 v50; // x1
  __int64 v51; // x2
  System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *v52; // x21
  System_Collections_Generic_List_int__o *v53; // x22
  struct UnityEngine_BoxCollider_o *Component_srcLineSprite; // x0
  System_String_array **v55; // x2
  System_String_array **v56; // x3
  System_Boolean_array **v57; // x4
  System_Int32_array **v58; // x5
  System_Int32_array *v59; // x6
  System_Int32_array *v60; // x7
  struct SrcSpotBasePrefab_o **p_lastDispSpot; // x19
  System_String_array **v62; // x2
  System_String_array **v63; // x3
  System_Boolean_array **v64; // x4
  System_Int32_array **v65; // x5
  System_Int32_array *v66; // x6
  System_Int32_array *v67; // x7
  __int64 v68; // x1
  __int64 v69; // x2
  System_Collections_Generic_List_int__o *v70; // x20
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7

  if ( (byte_4214554 & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_QuestAfterAction___ctor__, method);
    sub_B0D8A4(&Method_CStateManager_QuestAfterAction__add__, v4);
    sub_B0D8A4(&CStateManager_QuestAfterAction__TypeInfo, v5);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__,
      v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__, v8);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Clear__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_B0D8A4(&QuestAfterAction_StateAdditional_TypeInfo, v13);
    sub_B0D8A4(&QuestAfterAction_StateInstant_TypeInfo, v14);
    sub_B0D8A4(&QuestAfterAction_StateMain_TypeInfo, v15);
    sub_B0D8A4(&QuestAfterAction_StateNone_TypeInfo, v16);
    byte_4214554 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v18 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B0D974(
                                                                CStateManager_QuestAfterAction__TypeInfo,
                                                                method,
                                                                v2);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v18,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2AAF784 *)Method_CStateManager_QuestAfterAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestAfterAction__o *)v18;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.fsm,
      (System_Int32_array **)v18,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    fsm = this->fields.fsm;
    v28 = (QuestAfterAction_StateNone_o *)sub_B0D974(QuestAfterAction_StateNone_TypeInfo, v26, v27);
    QuestAfterAction_StateNone___ctor(v28, 0LL);
    if ( !fsm )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      0,
      (IState_T__o *)v28,
      (const MethodInfo_2AAF850 *)Method_CStateManager_QuestAfterAction__add__);
    v30 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v33 = (QuestAfterAction_StateMain_o *)sub_B0D974(QuestAfterAction_StateMain_TypeInfo, v31, v32);
    QuestAfterAction_StateMain___ctor(v33, 0LL);
    if ( !v30 )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v30,
      1,
      (IState_T__o *)v33,
      (const MethodInfo_2AAF850 *)Method_CStateManager_QuestAfterAction__add__);
    v34 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v37 = (QuestAfterAction_StateAdditional_o *)sub_B0D974(QuestAfterAction_StateAdditional_TypeInfo, v35, v36);
    QuestAfterAction_StateAdditional___ctor(v37, 0LL);
    if ( !v34 )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v34,
      2,
      (IState_T__o *)v37,
      (const MethodInfo_2AAF850 *)Method_CStateManager_QuestAfterAction__add__);
    v38 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v41 = (QuestAfterAction_StateInstant_o *)sub_B0D974(QuestAfterAction_StateInstant_TypeInfo, v39, v40);
    QuestAfterAction_StateInstant___ctor(v41, 0LL);
    if ( !v38 )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v38,
      3,
      (IState_T__o *)v41,
      (const MethodInfo_2AAF850 *)Method_CStateManager_QuestAfterAction__add__);
  }
  QuestAfterAction__SetState(this, 0, v2);
  this->fields.commandBuf = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.commandBuf, 0LL, v42, v43, v44, v45, v46, v47);
  this->fields.commandIdx = 0;
  v48 = -1;
  do
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.commandTypeIds;
    if ( !commandTypeIds )
      goto LABEL_21;
    v49 = v48 + 1;
    commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
                                                                                        commandTypeIds,
                                                                                        v48 + 1,
                                                                                        (const MethodInfo_2EA6F34 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    v52 = this->fields.commandTypeIds;
    if ( ((unsigned __int8)commandTypeIds & 1) != 0 )
    {
      if ( !v52 )
        goto LABEL_21;
      commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
                                                                                          (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.commandTypeIds,
                                                                                          v49,
                                                                                          (const MethodInfo_2EA6BFC *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( !commandTypeIds )
        goto LABEL_21;
      System_Collections_Generic_List_int___Clear(
        (System_Collections_Generic_List_int__o *)commandTypeIds,
        (const MethodInfo_2FB030C *)Method_System_Collections_Generic_List_int__Clear__);
    }
    else
    {
      v53 = (System_Collections_Generic_List_int__o *)sub_B0D974(
                                                        System_Collections_Generic_List_int__TypeInfo,
                                                        v50,
                                                        v51);
      System_Collections_Generic_List_int____ctor(
        v53,
        (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v52 )
        goto LABEL_21;
      System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____set_Item(
        v52,
        v49,
        v53,
        (const MethodInfo_2EA6C98 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
    }
    ++v48;
  }
  while ( v48 < 3 );
  commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)UnityEngine_Component__get_gameObject(
                                                                                      (UnityEngine_Component_o *)this,
                                                                                      0LL);
  if ( !commandTypeIds
    || (Component_srcLineSprite = (struct UnityEngine_BoxCollider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        (UnityEngine_GameObject_o *)commandTypeIds,
                                                                        (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.screenCollider = Component_srcLineSprite,
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.screenCollider,
          (System_Int32_array **)Component_srcLineSprite,
          v55,
          v56,
          v57,
          v58,
          v59,
          v60),
        (commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.screenCollider) == 0LL) )
  {
LABEL_21:
    sub_B0D97C(commandTypeIds);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)commandTypeIds, 0, 0LL);
  this->fields.lastDispSpot = 0LL;
  p_lastDispSpot = &this->fields.lastDispSpot;
  sub_B0D840((BattleServantConfConponent_o *)p_lastDispSpot, 0LL, v62, v63, v64, v65, v66, v67);
  v70 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v68, v69);
  System_Collections_Generic_List_int____ctor(
    v70,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  *(p_lastDispSpot - 18) = (struct SrcSpotBasePrefab_o *)v70;
  sub_B0D840(
    (BattleServantConfConponent_o *)(p_lastDispSpot - 18),
    (System_Int32_array **)v70,
    v71,
    v72,
    v73,
    v74,
    v75,
    v76);
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
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *commandTypeIds; // x0

  if ( (byte_421455A & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__,
      *(_QWORD *)&commandType);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v8);
    byte_421455A = 1;
  }
  commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.commandTypeIds;
  if ( !commandTypeIds )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
         commandTypeIds,
         commandType,
         (const MethodInfo_2EA6F34 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__) )
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.commandTypeIds;
    if ( commandTypeIds )
    {
      commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
                                                                                          commandTypeIds,
                                                                                          commandType,
                                                                                          (const MethodInfo_2EA6BFC *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( commandTypeIds )
        return System_Collections_Generic_List_int___Contains(
                 (System_Collections_Generic_List_int__o *)commandTypeIds,
                 commandTypeId,
                 (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_9:
    sub_B0D97C(commandTypeIds);
  }
  return 0;
}


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
        v11 = sub_B0D9A8(this);
        sub_B0D948(v11, 0LL);
      }
      v8 = commandBuf->m_Items[v6];
      if ( !v8 )
LABEL_11:
        sub_B0D97C(this);
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
  ScrTerminalMap_o *v2; // x0
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_421456A & 1) == 0 )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, method);
    byte_421456A = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, method);
    byte_421083D = 1;
  }
  v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v2 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v2->fields.pfbLineP->klass;
  if ( !klass || (v2 = *(ScrTerminalMap_o **)&klass->_2.static_fields_size) == 0LL )
    sub_B0D97C(v2);
  return ScrTerminalMap__IsMapChangeable(v2, 0LL);
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
  char *Master_WarQuestSelectionMaster; // x0
  TerminalSceneComponent_o *v24; // x20
  DataManager_o *v25; // x22
  EventMissionActionAddEntity_o *EntityFromIdProgressTypeAndActionType; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  EventMissionActionAddEntity_o *v29; // x23
  EventMissionActionInfo_o *v30; // x21
  WarEntity_o *Entity; // x0
  WarEntity_o *v32; // x21
  EventEntity_o *v33; // x0
  _BOOL8 v34; // x0
  __int64 v35; // x1
  Il2CppObject *current; // x21
  TerminalPramsManager_c *v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x0
  System_Int32_array **klass; // x1
  __int64 v46; // x0
  struct TerminalTransitionInfo_o *v47; // x8
  EventMissionActionEntity_o *v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  EventMissionActionEntity_o *v51; // x23
  WarEntity_o *v52; // x0
  WarEntity_o *v53; // x23
  __int64 v54; // x1
  TerminalPramsManager_c *v55; // x0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  System_Int32_array **vals; // x1
  struct TerminalTransitionInfo_o *v63; // x8
  System_Collections_Generic_List_Enumerator_T__o v64; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v65; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_421455E & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, v2);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v3);
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventMissionMaster___, v4);
    sub_B0D8A4(&Method_DataManager_GetMaster_EventMaster___, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_ShopActionMaster___, v6);
    sub_B0D8A4(&Method_DataManager_GetMaster_ShopMaster___, v7);
    sub_B0D8A4(&DataManager_TypeInfo, v8);
    sub_B0D8A4(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v9);
    sub_B0D8A4(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v10);
    sub_B0D8A4(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__, v12);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__, v13);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__get_Current__, v14);
    sub_B0D8A4(&EventMissionActionInfo_TypeInfo, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__, v16);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v18);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v19);
    byte_421455E = 1;
  }
  memset(&v65, 0, sizeof(v65));
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
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v21);
    byte_421083D = 1;
  }
  Master_WarQuestSelectionMaster = (char *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Master_WarQuestSelectionMaster = (char *)TerminalSceneComponent_TypeInfo;
  }
  v24 = (TerminalSceneComponent_o *)**((_QWORD **)Master_WarQuestSelectionMaster + 23);
  if ( !v24 )
    goto LABEL_77;
  if ( v24->fields._TransitionInfo_k__BackingField )
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
      Master_WarQuestSelectionMaster = (char *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_77;
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                 v22->fields.shopId,
                 (const MethodInfo_2669BD4 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( Entity )
      {
        v32 = Entity;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (char *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_EventMaster___);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_77;
        v33 = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                 (int32_t)v32->fields.age,
                                 (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !v33 || !EventEntity__IsEventPeriod(v33, 0LL, 0LL) )
          goto LABEL_76;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (char *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_ShopActionMaster___);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_77;
        Master_WarQuestSelectionMaster = (char *)ShopActionMaster__GetEntityList(
                                                   (ShopActionMaster_o *)Master_WarQuestSelectionMaster,
                                                   v32->fields.id,
                                                   0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_77;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v64,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Master_WarQuestSelectionMaster,
          (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
        v65 = v64;
        while ( 1 )
        {
          v34 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v65,
                  (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__);
          if ( !v34 )
            break;
          current = v65.fields.current;
          if ( !v65.fields.current )
            sub_B0D97C(v34);
          if ( LODWORD(v65.fields.current[1].monitor) == 4 )
          {
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            }
            if ( !byte_4210892 )
            {
              sub_B0D8A4(&TerminalPramsManager_TypeInfo, v35);
              byte_4210892 = 1;
            }
            v37 = TerminalPramsManager_TypeInfo;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v37 = TerminalPramsManager_TypeInfo;
            }
            v37->static_fields->meSceneStatus = 2;
            TerminalSceneComponent__CreateTransitionInfo(v24, v22, 0LL);
            TransitionInfo_k__BackingField = v24->fields._TransitionInfo_k__BackingField;
            if ( !TransitionInfo_k__BackingField )
              sub_B0D97C(0LL);
            klass = (System_Int32_array **)current[2].klass;
            TransitionInfo_k__BackingField->fields.afterActionVals = (struct System_String_array *)klass;
            sub_B0D840(
              (BattleServantConfConponent_o *)&TransitionInfo_k__BackingField->fields.afterActionVals,
              klass,
              v38,
              v39,
              v40,
              v41,
              v42,
              v43);
            v47 = v24->fields._TransitionInfo_k__BackingField;
            if ( !v47 )
              sub_B0D97C(v46);
            v47->fields.optionId = (int32_t)current[2].monitor;
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v65,
          (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__);
      }
    }
  }
  else
  {
    Master_WarQuestSelectionMaster = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_77;
    v25 = (DataManager_o *)Master_WarQuestSelectionMaster;
    Master_WarQuestSelectionMaster = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Master_WarQuestSelectionMaster,
                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_77;
    EntityFromIdProgressTypeAndActionType = EventMissionActionAddMaster__GetEntityFromIdProgressTypeAndActionType(
                                              (EventMissionActionAddMaster_o *)Master_WarQuestSelectionMaster,
                                              v22->fields.missionId,
                                              5,
                                              4,
                                              0LL);
    if ( EntityFromIdProgressTypeAndActionType )
    {
      v29 = EntityFromIdProgressTypeAndActionType;
      v30 = (EventMissionActionInfo_o *)sub_B0D974(EventMissionActionInfo_TypeInfo, v27, v28);
      EventMissionActionInfo___ctor_26645076(v30, v29, 0LL);
    }
    else
    {
      Master_WarQuestSelectionMaster = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 v25,
                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_77;
      v48 = EventMissionActionMaster__getEntityFromIdProgressTypeAndActionType(
              (EventMissionActionMaster_o *)Master_WarQuestSelectionMaster,
              v22->fields.missionId,
              5,
              4,
              0LL);
      if ( !v48 )
        return;
      v51 = v48;
      v30 = (EventMissionActionInfo_o *)sub_B0D974(EventMissionActionInfo_TypeInfo, v49, v50);
      EventMissionActionInfo___ctor(v30, v51, 0LL);
    }
    Master_WarQuestSelectionMaster = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               v25,
                                               (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_77;
    v52 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
            (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
            v22->fields.missionId,
            (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( v52 )
    {
      v53 = v52;
      Master_WarQuestSelectionMaster = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 v25,
                                                 (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_77;
      Master_WarQuestSelectionMaster = (char *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                 (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                 HIDWORD(v53->fields.age),
                                                 (const MethodInfo_2669BD4 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_77;
      if ( EventEntity__IsEventPeriod((EventEntity_o *)Master_WarQuestSelectionMaster, 0LL, 0LL) )
      {
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_4210892 )
        {
          sub_B0D8A4(&TerminalPramsManager_TypeInfo, v54);
          byte_4210892 = 1;
        }
        v55 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v55 = TerminalPramsManager_TypeInfo;
        }
        v55->static_fields->meSceneStatus = 2;
        TerminalSceneComponent__CreateTransitionInfo(v24, v22, 0LL);
        if ( v30 )
        {
          Master_WarQuestSelectionMaster = (char *)v24->fields._TransitionInfo_k__BackingField;
          if ( Master_WarQuestSelectionMaster )
          {
            vals = (System_Int32_array **)v30->fields.vals;
            *((_QWORD *)Master_WarQuestSelectionMaster + 4) = vals;
            sub_B0D840(
              (BattleServantConfConponent_o *)(Master_WarQuestSelectionMaster + 32),
              vals,
              v56,
              v57,
              v58,
              v59,
              v60,
              v61);
            v63 = v24->fields._TransitionInfo_k__BackingField;
            if ( v63 )
            {
              v63->fields.optionId = v30->fields.optionId;
              return;
            }
          }
        }
LABEL_77:
        sub_B0D97C(Master_WarQuestSelectionMaster);
      }
LABEL_76:
      TerminalSceneComponent__ClearTransitionInfo(v24, 0LL);
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
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v11; // x22
  const MethodInfo *v12; // x3

  if ( (byte_421455B & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__, endAct);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__, v5);
    sub_B0D8A4(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo, v6);
    byte_421455B = 1;
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
      sub_B0D97C(0LL);
    Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
               svtVoices,
               (const MethodInfo_2E901CC *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    v11 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                            System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo,
                                                                            v9,
                                                                            v10);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v11,
      (System_Collections_Generic_IEnumerable_T__o *)Values,
      (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    QuestAfterAction__LoadVoice_24445172(
      this,
      (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)v11,
      endAct,
      v12);
  }
}


void __fastcall QuestAfterAction__LoadVoice_24445172(
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x27
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Int32_array ***v24; // x28
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Action_o **v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x19
  __int64 v39; // x8
  System_String_o *VoiceAssetName_29941680; // x19
  SoundManager_o *v41; // x20
  __int64 v42; // x1
  __int64 v43; // x2
  System_Action_o *v44; // x21

  v4 = endAct;
  v5 = (System_Int32_array **)svtVInfos;
  while ( 1 )
  {
    if ( (byte_421455C & 1) == 0 )
    {
      sub_B0D8A4(&System_Action_TypeInfo, svtVInfos);
      sub_B0D8A4(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___, v10);
      sub_B0D8A4(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__, v11);
      sub_B0D8A4(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__, v12);
      sub_B0D8A4(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v13);
      sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
      sub_B0D8A4(&Method_QuestAfterAction___c__DisplayClass64_0__LoadVoice_b__0__, v15);
      sub_B0D8A4(&QuestAfterAction___c__DisplayClass64_0_TypeInfo, v16);
      byte_421455C = 1;
    }
    v17 = sub_B0D974(QuestAfterAction___c__DisplayClass64_0_TypeInfo, svtVInfos, endAct);
    QuestAfterAction___c__DisplayClass64_0___ctor((QuestAfterAction___c__DisplayClass64_0_o *)v17, 0LL);
    if ( !v17 )
      goto LABEL_22;
    *(_QWORD *)(v17 + 16) = v5;
    v24 = (System_Int32_array ***)(v17 + 16);
    sub_B0D840((BattleServantConfConponent_o *)(v17 + 16), v5, v18, v19, v20, v21, v22, v23);
    *(_QWORD *)(v17 + 24) = this;
    sub_B0D840((BattleServantConfConponent_o *)(v17 + 24), (System_Int32_array **)this, v25, v26, v27, v28, v29, v30);
    *(_QWORD *)(v17 + 32) = v4;
    v31 = (System_Action_o **)(v17 + 32);
    sub_B0D840((BattleServantConfConponent_o *)(v17 + 32), (System_Int32_array **)v4, v32, v33, v34, v35, v36, v37);
    Instance = (CommonUI_o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                               *(System_Collections_Generic_IEnumerable_TSource__o **)(v17 + 16),
                               (const MethodInfo_17194B0 *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, 0, 0LL);
        ActionExtensions__Call(*v31, 0LL);
        return;
      }
LABEL_22:
      sub_B0D97C(Instance);
    }
    v7 = *v24;
    if ( !*v24 )
      goto LABEL_22;
    if ( !*((_DWORD *)v7 + 6) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
    v8 = *(_QWORD *)&v7[2]->m_Items[1];
    if ( !v8 )
      goto LABEL_22;
    if ( *(_DWORD *)(v8 + 16) )
      break;
    Instance = (CommonUI_o *)*v24;
    if ( !*v24 )
      goto LABEL_22;
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)Instance,
      0,
      (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    v5 = *v24;
    v4 = *v31;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v38 = *v24;
  if ( !*v24 )
    goto LABEL_22;
  if ( !*((_DWORD *)v38 + 6) )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
  v39 = *(_QWORD *)&v38[2]->m_Items[1];
  if ( !v39 )
    goto LABEL_22;
  VoiceAssetName_29941680 = ServantVoiceEntity__getVoiceAssetName_29941680(*(_DWORD *)(v39 + 16), 0LL);
  v41 = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v44 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v42, v43);
  System_Action___ctor(v44, (Il2CppObject *)v17, Method_QuestAfterAction___c__DisplayClass64_0__LoadVoice_b__0__, 0LL);
  if ( !v41 )
    goto LABEL_22;
  SoundManager__LoadAudioAssetStorage(v41, VoiceAssetName_29941680, v44, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestAfterAction__MapObjName(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v6; // x1

  if ( (byte_4214569 & 1) == 0 )
  {
    sub_B0D8A4(&SrcSpotBasePrefab_TypeInfo, *(_QWORD *)&comType);
    sub_B0D8A4(&StringLiteral_1/*""*/, v6);
    byte_4214569 = 1;
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
  System_Action_o *endAct; // x0
  UnityEngine_Collider_o *screenCollider; // x0
  const MethodInfo *v5; // x1

  if ( (byte_4214563 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Clear__, method);
    byte_4214563 = 1;
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
    sub_B0D97C(screenCollider);
  }
  System_Collections_Generic_List_int___Clear(
    (System_Collections_Generic_List_int__o *)screenCollider,
    (const MethodInfo_2FB030C *)Method_System_Collections_Generic_List_int__Clear__);
  QuestAfterAction__Init(this, v5);
  this->fields.isKeepingMainStateButFinished = 0;
}


void __fastcall QuestAfterAction__Play(QuestAfterAction_o *this, System_Action_o *endAct, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  MissionNotifyManager_o *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  System_Action_o *v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  const MethodInfo *v26; // x2

  if ( (byte_4214560 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, endAct);
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v5);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v6);
    sub_B0D8A4(&Method_QuestAfterAction___c__DisplayClass68_0__Play_b__0__, v7);
    sub_B0D8A4(&QuestAfterAction___c__DisplayClass68_0_TypeInfo, v8);
    byte_4214560 = 1;
  }
  v9 = sub_B0D974(QuestAfterAction___c__DisplayClass68_0_TypeInfo, endAct, method);
  QuestAfterAction___c__DisplayClass68_0___ctor((QuestAfterAction___c__DisplayClass68_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_11;
  *(_QWORD *)(v9 + 16) = endAct;
  sub_B0D840((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)endAct, v11, v12, v13, v14, v15, v16);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v10 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v10 )
LABEL_11:
    sub_B0D97C(v10);
  MissionNotifyManager__StartPause(v10, 0LL);
  v19 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v17, v18);
  System_Action___ctor(v19, (Il2CppObject *)v9, Method_QuestAfterAction___c__DisplayClass68_0__Play_b__0__, 0LL);
  this->fields.endAct = v19;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.endAct,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  if ( this->fields.commandBuf )
    QuestAfterAction__SetState(this, 1, v26);
  else
    ActionExtensions__Call(this->fields.endAct, 0LL);
}


void __fastcall QuestAfterAction__PlaySpecifiedAction(
        QuestAfterAction_o *this,
        System_String_array *actionVals,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  MissionNotifyManager_o *v13; // x0
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
  __int64 v34; // x1
  __int64 v35; // x2
  System_Action_o *v36; // x21
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  __int64 v43; // x1
  __int64 v44; // x2
  System_Action_o *v45; // x21
  const MethodInfo *v46; // x2
  System_Collections_IEnumerator_o *v47; // x1

  if ( (byte_4214561 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, actionVals);
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v8);
    sub_B0D8A4(&Method_QuestAfterAction___c__DisplayClass69_0__PlaySpecifiedAction_b__0__, v9);
    sub_B0D8A4(&Method_QuestAfterAction___c__DisplayClass69_0__PlaySpecifiedAction_b__1__, v10);
    sub_B0D8A4(&QuestAfterAction___c__DisplayClass69_0_TypeInfo, v11);
    byte_4214561 = 1;
  }
  v12 = sub_B0D974(QuestAfterAction___c__DisplayClass69_0_TypeInfo, actionVals, finishCallback);
  QuestAfterAction___c__DisplayClass69_0___ctor((QuestAfterAction___c__DisplayClass69_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_11;
  *(_QWORD *)(v12 + 16) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v12 + 24) = finishCallback;
  sub_B0D840(
    (BattleServantConfConponent_o *)(v12 + 24),
    (System_Int32_array **)finishCallback,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v12 + 24), 0LL);
    return;
  }
  CommandBuf = QuestAfterAction__GenerateCommandBuf(actionVals, v26);
  this->fields.temporaryCommandBuf = CommandBuf;
  sub_B0D840(
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
  v13 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v13 )
LABEL_11:
    sub_B0D97C(v13);
  MissionNotifyManager__StartPause(v13, 0LL);
  v36 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v34, v35);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v12,
    Method_QuestAfterAction___c__DisplayClass69_0__PlaySpecifiedAction_b__0__,
    0LL);
  this->fields.endAct = v36;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.endAct,
    (System_Int32_array **)v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42);
  v45 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v43, v44);
  System_Action___ctor(
    v45,
    (Il2CppObject *)v12,
    Method_QuestAfterAction___c__DisplayClass69_0__PlaySpecifiedAction_b__1__,
    0LL);
  v47 = QuestAfterAction__WaitWhileMainStateFinished(this, v45, v46);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, v47, 0LL);
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
  System_Action_o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x2

  if ( (byte_4214562 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, actionVals);
    sub_B0D8A4(&Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__70_0__, v5);
    byte_4214562 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL) )
  {
    CommandBuf = QuestAfterAction__GenerateCommandBuf(actionVals, v6);
    this->fields.temporaryCommandBuf = CommandBuf;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.temporaryCommandBuf,
      (System_Int32_array **)CommandBuf,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    v16 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v14, v15);
    System_Action___ctor(
      v16,
      (Il2CppObject *)this,
      Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__70_0__,
      0LL);
    this->fields.endAct = v16;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.endAct,
      (System_Int32_array **)v16,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    QuestAfterAction__SetState(this, 3, v23);
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
  ScrTerminalMap_o *v10; // x0
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_4214568 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, *(_QWORD *)&cType);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v7);
    byte_4214568 = 1;
  }
  this->fields.ActionMapTargetType = cType;
  this->fields.ActionMapTargetId = cTarget;
  QuestAfterAction__SetState(this, 0, *(const MethodInfo **)&cTarget);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210848 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v8);
    byte_4210848 = 1;
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
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v8);
    byte_421083D = 1;
  }
  v10 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v10 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v10->fields.pfbLineP->klass;
  if ( !klass || (v10 = *(ScrTerminalMap_o **)&klass->_2.static_fields_size) == 0LL )
    sub_B0D97C(v10);
  ScrTerminalMap__RequestMapChange(v10, 0, -1, -1, 0LL);
}


void __fastcall QuestAfterAction__SetActionMap(
        QuestAfterAction_o *this,
        QuestAfterAction_Command_o *com,
        const MethodInfo *method)
{
  QuestAfterAction_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t id; // w8
  int v9; // w8
  unsigned int v10; // w8
  unsigned int v11; // w8
  System_String_o *v12; // x20
  Il2CppClass *v13; // x0
  int invalidMapGimmickIdList; // w8
  System_String_o *BlankEarthQuestAfterAction_k__BackingField; // x0
  int32_t SpotId; // w0
  System_String_o *param; // x20
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_o *v19; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v20; // x20
  __int64 v21; // x0

  v4 = this;
  if ( (byte_4214559 & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, com);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, v5);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v6);
    this = (QuestAfterAction_o *)sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4214559 = 1;
  }
  if ( v4->fields.ActionMapTargetType == -1 )
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
          v4->fields.ActionMapTargetType = 0;
          param = com->fields.param;
          this = (QuestAfterAction_o *)sub_B0D8BC(char___TypeInfo, 1LL);
          if ( this )
          {
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
          sub_B0D97C(this);
        }
        if ( id == 550 )
        {
          v9 = 3;
LABEL_23:
          v4->fields.ActionMapTargetType = v9;
          v12 = com->fields.param;
          v13 = char___TypeInfo;
          goto LABEL_24;
        }
LABEL_45:
        SpotId = -1;
        v4->fields.ActionMapTargetType = -1;
        goto LABEL_32;
      }
      if ( (unsigned int)(id - 400) > 9 )
      {
        if ( id == 500 )
        {
          v4->fields.ActionMapTargetType = 0;
          this = (QuestAfterAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
            v19 = com->fields.param;
            v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
            this = (QuestAfterAction_o *)System_Int32__Parse(v19, 0LL);
            if ( v20 )
            {
              this = (QuestAfterAction_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             v20,
                                             (int32_t)this,
                                             (const MethodInfo_2669BD4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
    v4->fields.ActionMapTargetType = 0;
    v12 = com->fields.param;
    v13 = char___TypeInfo;
LABEL_24:
    this = (QuestAfterAction_o *)sub_B0D8BC(v13, 1LL);
    if ( this )
    {
      if ( !LODWORD(this->fields.invalidMapGimmickIdList) )
        goto LABEL_47;
      LOWORD(this->fields._TitleInfoCtrlCallback_k__BackingField) = 44;
      if ( v12 )
      {
        this = (QuestAfterAction_o *)System_String__Split(v12, (System_Char_array *)this, 0LL);
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
            v4->fields.ActionMapTargetId = SpotId;
            return;
          }
LABEL_47:
          v21 = sub_B0D9A8(this);
          sub_B0D948(v21, 0LL);
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

  if ( (byte_4214566 & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_QuestAfterAction__setState__, *(_QWORD *)&state);
    byte_4214566 = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B0D97C(0LL);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
    state,
    (const MethodInfo_2AAF8F4 *)Method_CStateManager_QuestAfterAction__setState__);
}


void __fastcall QuestAfterAction__SkipToNextAction(QuestAfterAction_o *this, const MethodInfo *method)
{
  this->fields.isSkippedNext = 1;
}


void __fastcall QuestAfterAction__Update(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x0

  if ( (byte_421455F & 1) == 0 )
  {
    sub_B0D8A4(&Method_CStateManager_QuestAfterAction__update__, method);
    byte_421455F = 1;
  }
  fsm = this->fields.fsm;
  if ( fsm )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      (const MethodInfo_2AAF8CC *)Method_CStateManager_QuestAfterAction__update__);
}


System_Collections_IEnumerator_o *__fastcall QuestAfterAction__WaitWhileMainStateFinished(
        QuestAfterAction_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_4214564 & 1) == 0 )
  {
    sub_B0D8A4(&QuestAfterAction__WaitWhileMainStateFinished_d__73_TypeInfo, action);
    byte_4214564 = 1;
  }
  v5 = sub_B0D974(QuestAfterAction__WaitWhileMainStateFinished_d__73_TypeInfo, action, method);
  QuestAfterAction__WaitWhileMainStateFinished_d__73___ctor(
    (QuestAfterAction__WaitWhileMainStateFinished_d__73_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B0D97C(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  *(_QWORD *)(v5 + 40) = action;
  sub_B0D840((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)action, v13, v14, v15, v16, v17, v18);
  return (System_Collections_IEnumerator_o *)v5;
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
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.endAct, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.temporaryCommandBuf = 0LL;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.temporaryCommandBuf, 0LL, v9, v10, v11, v12, v13, v14);
  QuestAfterAction__SetState(this, 0, v15);
}


System_Int32_array *__fastcall QuestAfterAction__getMapGmkOffIdList(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *invalidMapGimmickIdList; // x0

  if ( (byte_4214558 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, method);
    byte_4214558 = 1;
  }
  invalidMapGimmickIdList = this->fields.invalidMapGimmickIdList;
  if ( !invalidMapGimmickIdList )
    sub_B0D97C(0LL);
  return System_Collections_Generic_List_int___ToArray(
           invalidMapGimmickIdList,
           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *svtVoices; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v15; // x20
  _BOOL8 v16; // x0
  System_String_o *VoiceAssetName_29941680; // x20
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_421455D & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__get_Current__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__, v8);
    sub_B0D8A4(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo, v9);
    sub_B0D8A4(&SoundManager_TypeInfo, v10);
    byte_421455D = 1;
  }
  memset(&v18, 0, sizeof(v18));
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
    goto LABEL_15;
  Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
             svtVoices,
             (const MethodInfo_2E901CC *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
  v15 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                          System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo,
                                                                          v13,
                                                                          v14);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v15,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
  if ( !v15 )
    goto LABEL_15;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v15,
    (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__);
    if ( !v16 )
      break;
    if ( !v18.fields.current )
      sub_B0D97C(v16);
    VoiceAssetName_29941680 = ServantVoiceEntity__getVoiceAssetName_29941680((int32_t)v18.fields.current[1].klass, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__releaseAudioAssetStorage(VoiceAssetName_29941680, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
LABEL_15:
    sub_B0D97C(svtVoices);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)svtVoices,
    (const MethodInfo_2E90604 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
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
  System_String_o *param; // x21
  __int64 Instance; // x0
  System_Collections_Generic_IEnumerable_T__o *v17; // x22
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  System_Random_o *v24; // x22
  __int64 size; // x1
  unsigned int v26; // w0
  int32_t v27; // w24
  System_String_o *v28; // x25
  __int64 v29; // x1
  int v30; // w8
  __int64 v31; // x25
  System_String_o *v32; // x25
  __int64 v33; // x8
  __int64 v34; // x8
  int32_t v35; // w1
  System_String_o *v36; // x21
  int v37; // w8
  __int64 v38; // x21
  __int64 v40; // x0
  int32_t result; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_42121CC & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, svtId);
    sub_B0D8A4(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__RemoveAt__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string___ctor___67894584, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Count__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_string__get_Item__, v9);
    sub_B0D8A4(&System_Collections_Generic_List_string__TypeInfo, v10);
    sub_B0D8A4(&System_Random_TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v13);
    sub_B0D8A4(&StringLiteral_15952/*"_"*/, v14);
    byte_42121CC = 1;
  }
  result = 0;
  *svtId = 0;
  if ( this->fields.id != 800 )
    return 0LL;
  param = this->fields.param;
  Instance = sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_53;
  if ( !*(_DWORD *)(Instance + 24) )
    goto LABEL_54;
  *(_WORD *)(Instance + 32) = 44;
  if ( !param )
    goto LABEL_53;
  Instance = (__int64)System_String__Split(param, (System_Char_array *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_53;
  v17 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
  if ( *(int *)(Instance + 24) > 1 )
  {
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
      v21 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                              System_Collections_Generic_List_string__TypeInfo,
                                                                              v19,
                                                                              v20);
      System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
        v21,
        v17,
        (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_string___ctor___67894584);
      result = 0;
      v24 = (System_Random_o *)sub_B0D974(System_Random_TypeInfo, v22, v23);
      System_Random___ctor(v24, 0LL);
      if ( v21 )
      {
        if ( v24 )
        {
          size = (unsigned int)v21->fields._size;
          while ( 1 )
          {
            v26 = ((__int64 (__fastcall *)(System_Random_o *, __int64, Il2CppMethodPointer))v24->klass->vtable._7_Next.method)(
                    v24,
                    size,
                    v24->klass->vtable._8_NextDouble.methodPtr);
            result = 0;
            v27 = v26;
            if ( v21->fields._size <= v26 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
            v28 = (System_String_o *)v21->fields._items->m_Items[v26];
            Instance = sub_B0D8BC(char___TypeInfo, 1LL);
            if ( !Instance )
              break;
            if ( !*(_DWORD *)(Instance + 24) )
              goto LABEL_54;
            *(_WORD *)(Instance + 32) = 95;
            if ( !v28 )
              break;
            Instance = (__int64)System_String__Split(v28, (System_Char_array *)Instance, 0LL);
            if ( !Instance )
              break;
            v30 = *(_DWORD *)(Instance + 24);
            v31 = Instance;
            if ( v30 == 3 )
            {
              Instance = System_Int32__TryParse(*(System_String_o **)(Instance + 32), &result, 0LL);
              if ( *(_DWORD *)(v31 + 24) < 3u )
                goto LABEL_54;
              Instance = (__int64)System_String__Concat_43852188(
                                    *(System_String_o **)(v31 + 40),
                                    (System_String_o *)StringLiteral_15952/*"_"*/,
                                    *(System_String_o **)(v31 + 48),
                                    0LL);
              if ( !MasterData_WarQuestSelectionMaster )
                break;
              v35 = result;
              v32 = (System_String_o *)Instance;
            }
            else
            {
              if ( v30 != 2 )
                goto LABEL_39;
              result = 0;
              if ( v21->fields._size <= (unsigned int)v27 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
              v32 = (System_String_o *)v21->fields._items->m_Items[v27];
              if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              }
              if ( !byte_421083D )
              {
                sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v29);
                byte_421083D = 1;
              }
              Instance = (__int64)TerminalSceneComponent_TypeInfo;
              if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                Instance = (__int64)TerminalSceneComponent_TypeInfo;
              }
              v33 = **(_QWORD **)(Instance + 184);
              if ( !v33 )
                break;
              v34 = *(_QWORD *)(v33 + 448);
              if ( !v34 )
                break;
              Instance = ServantVoiceEntity__getSvtIdfromVoiceAssetName(*(System_String_o **)(v34 + 40), 0LL);
              if ( !MasterData_WarQuestSelectionMaster )
                break;
              v35 = Instance;
            }
            if ( VoicePlayCondMaster__isVoicePlay(MasterData_WarQuestSelectionMaster, v35, v32, 0LL, -1LL, -1, 0LL) )
            {
              *svtId = result;
              return v32;
            }
LABEL_39:
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              (System_Collections_Generic_List_XWeaponTrail_Element__o *)v21,
              v27,
              (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_string__RemoveAt__);
            size = (unsigned int)v21->fields._size;
            if ( !(_DWORD)size )
            {
              v32 = 0LL;
              *svtId = 0;
              return v32;
            }
          }
        }
      }
    }
LABEL_53:
    sub_B0D97C(Instance);
  }
  v36 = this->fields.param;
  Instance = sub_B0D8BC(char___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_53;
  if ( !*(_DWORD *)(Instance + 24) )
  {
LABEL_54:
    v40 = sub_B0D9A8(Instance);
    sub_B0D948(v40, 0LL);
  }
  *(_WORD *)(Instance + 32) = 95;
  if ( !v36 )
    goto LABEL_53;
  Instance = (__int64)System_String__Split(v36, (System_Char_array *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_53;
  v37 = *(_DWORD *)(Instance + 24);
  v38 = Instance;
  if ( v37 == 3 )
  {
    Instance = System_Int32__TryParse(*(System_String_o **)(Instance + 32), svtId, 0LL);
    if ( *(_DWORD *)(v38 + 24) >= 3u )
      return System_String__Concat_43852188(
               *(System_String_o **)(v38 + 40),
               (System_String_o *)StringLiteral_15952/*"_"*/,
               *(System_String_o **)(v38 + 48),
               0LL);
    goto LABEL_54;
  }
  if ( v37 != 2 )
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
  DataManager_o *Instance; // x0
  WarEntity_o *v8; // [xsp+0h] [xbp-20h] BYREF
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42121CF & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_BgmMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_42121CF = 1;
  }
  result = 0;
  v8 = 0LL;
  v5 = 0LL;
  if ( this->fields.id == 851 )
  {
    v6 = System_Int32__TryParse(this->fields.param, &result, 0LL);
    v5 = 0LL;
    if ( v6 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_12;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_BgmMaster___);
      if ( !Instance )
        goto LABEL_12;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    &v8,
                                    result,
                                    (const MethodInfo_2669C30 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( v8 )
          return v8->fields.age;
LABEL_12:
        sub_B0D97C(Instance);
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
  System_String_array *v6; // x0
  __int64 v7; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42121CD & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, str);
    byte_42121CD = 1;
  }
  result = 0;
  v5 = 0;
  if ( this->fields.id == 800 )
  {
    v6 = (System_String_array *)sub_B0D8BC(char___TypeInfo, 1LL);
    if ( !v6 )
      goto LABEL_14;
    if ( !v6->max_length )
    {
      v7 = sub_B0D9A8(v6);
      sub_B0D948(v7, 0LL);
    }
    LOWORD(v6->m_Items[0]) = 95;
    if ( !str || (v6 = System_String__Split(str, (System_Char_array *)v6, 0LL)) == 0LL )
LABEL_14:
      sub_B0D97C(v6);
    if ( v6->max_length == 3 )
    {
      result = 0;
      if ( System_Int32__TryParse(v6->m_Items[0], &result, 0LL) )
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
  System_String_array *v6; // x0
  il2cpp_array_size_t max_length; // w8
  __int64 v9; // x0

  v3 = str;
  if ( (byte_42121CE & 1) == 0 )
  {
    sub_B0D8A4(&char___TypeInfo, str);
    sub_B0D8A4(&StringLiteral_15952/*"_"*/, v5);
    byte_42121CE = 1;
  }
  if ( this->fields.id == 800 )
  {
    v6 = (System_String_array *)sub_B0D8BC(char___TypeInfo, 1LL);
    if ( !v6 )
      goto LABEL_13;
    if ( !v6->max_length )
    {
      v9 = sub_B0D9A8(v6);
      sub_B0D948(v9, 0LL);
    }
    LOWORD(v6->m_Items[0]) = 95;
    if ( !v3 || (v6 = System_String__Split(v3, (System_Char_array *)v6, 0LL)) == 0LL )
LABEL_13:
      sub_B0D97C(v6);
    max_length = v6->max_length;
    if ( max_length == 2 )
      return v3;
    if ( max_length == 3 )
      return System_String__Concat_43852188(v6->m_Items[1], (System_String_o *)StringLiteral_15952/*"_"*/, v6->m_Items[2], 0LL);
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
    sub_B0D97C(this);
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
    sub_B0D97C(screenCollider);
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
    sub_B0D97C(this);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
  QuestAfterAction_StateMain_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct QuestAfterAction_o *that; // x8
  __int64 v9; // x8
  QuestAfterAction_StateMain_o *v10; // x20
  unsigned __int64 v11; // x22
  struct QuestAfterAction_o *v12; // x8
  int32_t v13; // w21
  srcLineSprite_o *MapComponent_srcLineSprite; // x21
  struct UIAtlas_o *mcAtlasP; // x8
  __int64 v16; // x0

  v2 = this;
  if ( (byte_42121D4 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Remove__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    sub_B0D8A4(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___, v5);
    sub_B0D8A4(&Method_SingletonTemplate_QuestTree__get_Instance__, v6);
    this = (QuestAfterAction_StateMain_o *)sub_B0D8A4(&SingletonTemplate_QuestTree__TypeInfo, v7);
    byte_42121D4 = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_26;
  this = (QuestAfterAction_StateMain_o *)that->fields.invalidMapGimmickIdList;
  if ( !this )
    goto LABEL_26;
  this = (QuestAfterAction_StateMain_o *)System_Collections_Generic_List_int___ToArray(
                                           (System_Collections_Generic_List_int__o *)this,
                                           (const MethodInfo_2FB200C *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !this )
    goto LABEL_26;
  v9 = *(_QWORD *)&this->fields.IsAnimDoing;
  v10 = this;
  if ( (int)v9 >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v9 )
      {
        v16 = sub_B0D9A8(this);
        sub_B0D948(v16, 0LL);
      }
      v12 = v2->fields.that;
      if ( !v12 )
        break;
      this = (QuestAfterAction_StateMain_o *)v12->fields.invalidMapGimmickIdList;
      if ( !this )
        break;
      v13 = *((_DWORD *)&v10->fields.waitTime + v11);
      System_Collections_Generic_List_int___Remove(
        (System_Collections_Generic_List_int__o *)this,
        v13,
        (const MethodInfo_2FB187C *)Method_System_Collections_Generic_List_int__Remove__);
      this = (QuestAfterAction_StateMain_o *)v2->fields.that;
      if ( !this )
        break;
      MapComponent_srcLineSprite = QuestAfterAction__GetMapComponent_srcLineSprite_(
                                     (QuestAfterAction_o *)this,
                                     2,
                                     v13,
                                     v2,
                                     (const MethodInfo_204D3A4 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
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
        this = (QuestAfterAction_StateMain_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapComponent_srcLineSprite || !this )
          break;
        this = (QuestAfterAction_StateMain_o *)QuestTree__CheckMapGimmickCond_21487076(
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
      LODWORD(v9) = *(_DWORD *)&v10->fields.IsAnimDoing;
      if ( (__int64)++v11 >= (int)v9 )
        return;
    }
LABEL_26:
    sub_B0D97C(this);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestAfterAction_StateMain__UpdateAnim(
        QuestAfterAction_StateMain_o *this,
        QuestAfterAction_o *that,
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
  QuestAfterAction_StateMain___c__DisplayClass16_0_o *v100; // x21
  __int64 updated; // x0
  QuestAfterAction_o **p_that; // x20
  long double v103; // q0
  QuestAfterAction_StateMain_c *klass; // x8
  __int64 v105; // x22
  QuestAfterAction_Command_o *v106; // x22
  __int64 v107; // x1
  __int64 v108; // x2
  QuestAfterAction_o *v109; // x23
  BlankEarthQuestAfterAction_o *BlankEarthQuestAfterAction_k__BackingField; // x24
  System_Action_o *v111; // x25
  const MethodInfo *v112; // x1
  __int64 v113; // x2
  int id; // w8
  float v115; // s0
  __int64 v116; // x1
  __int64 v117; // x2
  float DEFAULT_FADE_TIME; // s8
  AvalonSceneManager_c *v119; // x0
  TerminalSceneComponent_c *v120; // x0
  TerminalSceneComponent_o *mInstance; // x19
  System_Action_o *v122; // x20
  __int64 MyFsmP; // x0
  TerminalSceneComponent_o *v124; // x0
  float v125; // s0
  System_Action_o *v126; // x1
  System_String_o *v127; // x19
  System_String_o *v128; // x20
  System_String_o *v129; // x20
  CommonUI_o *Instance; // x22
  __int64 v131; // x1
  __int64 v132; // x2
  System_Action_o *v133; // x23
  System_String_o *v134; // x23
  __int64 v135; // x8
  __int64 v136; // x24
  float v137; // s8
  System_String_o *v138; // x21
  QuestAfterAction_StateMain___c__DisplayClass16_10_o *v139; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o **p_CS___8__locals10; // x23
  System_String_o *v141; // x21
  __int64 v142; // x8
  __int64 v143; // x22
  int32_t v144; // w21
  _BOOL4 v145; // w24
  bool v146; // w25
  System_String_o *v147; // x21
  __int64 v148; // x23
  __int64 v149; // x1
  int32_t v150; // w21
  int32_t v151; // w22
  int32_t v152; // w23
  QuestAfterAction_StateMain___c__DisplayClass16_1_o *v153; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals1; // x8
  QuestAfterAction_o *v155; // x21
  srcLineSprite_o *v156; // x0
  UnityEngine_Object_o *spot; // x19
  __int64 v158; // x1
  __int64 v159; // x2
  SrcSpotBasePrefab_o *v160; // x19
  System_Action_o *v161; // x21
  int32_t v162; // w1
  QuestAfterAction_StateMain___c__DisplayClass16_4_o *v163; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals4; // x8
  QuestAfterAction_o *v165; // x21
  srcLineSprite_o *v166; // x0
  UnityEngine_Object_o *roadModel; // x19
  __int64 v168; // x1
  __int64 v169; // x2
  ModelLineComponent_o *v170; // x19
  System_Action_o *v171; // x21
  int32_t v172; // w1
  System_String_o *v173; // x21
  __int64 v174; // x1
  const MethodInfo *v175; // x2
  __int64 v176; // x8
  QuestAfterAction_o *v177; // x9
  QuestAfterAction_TitleInfoControlCallback_o *TitleInfoCtrlCallback_k__BackingField; // x20
  int32_t v179; // w20
  QuestEntity_o *v180; // x22
  const MethodInfo *v181; // x2
  __int64 v182; // x21
  __int64 v183; // x1
  TerminalPramsManager_c *v184; // x0
  int32_t v185; // w20
  __int64 v186; // x1
  __int64 v187; // x2
  clsQuestCheck_o *v188; // x19
  QuestAfterAction_StateMain___c_c *v189; // x8
  struct QuestAfterAction_StateMain___c_StaticFields *v190; // x9
  System_Action_o *_9__16_33; // x20
  Il2CppObject *v192; // x21
  struct QuestAfterAction_StateMain___c_StaticFields *v193; // x0
  TerminalSceneComponent_c *v194; // x0
  TerminalSceneComponent_o *v195; // x21
  System_String_o *param; // x21
  __int64 v197; // x22
  int v198; // w23
  float v199; // s8
  int32_t v200; // w21
  QuestAfterAction_o *v201; // x8
  __int64 v202; // x1
  __int64 v203; // x8
  __int64 v204; // x8
  __int64 v205; // x8
  System_String_o *v206; // x20
  System_String_o *v207; // x21
  SeManager_c *v208; // x0
  float DEFAULT_VOLUME; // s8
  __int64 v210; // x8
  PlayMakerFSM_o *v211; // x20
  System_String_o *ActiveStateName; // x0
  __int64 v213; // x1
  __int64 v214; // x2
  __int64 v215; // x8
  __int64 v216; // x8
  QuestBoardListViewManager_o *v217; // x21
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x8
  System_Action_o *_9__16_31; // x22
  Il2CppObject *v220; // x23
  struct QuestAfterAction_StateMain___c_StaticFields *v221; // x0
  __int64 v222; // x1
  TerminalSceneComponent_c *v223; // x0
  System_String_o *v224; // x20
  __int64 v225; // x21
  __int64 v226; // x1
  __int64 v227; // x2
  int32_t v228; // w20
  int32_t v229; // w22
  System_String_o *v230; // x23
  __int64 v231; // x8
  __int64 v232; // x24
  System_String_o *v233; // x23
  __int64 v234; // x1
  __int64 v235; // x23
  float v236; // s0
  float v237; // s8
  __int64 v238; // x1
  int32_t v239; // w19
  __int64 v240; // x8
  ScrTerminalMap_o *v241; // x24
  float v242; // s0
  float v243; // s9
  float v244; // s0
  __int64 v245; // x1
  const MethodInfo_299B944 *v246; // x2
  float v247; // s0
  float v248; // s1
  float v249; // s2
  float v250; // s10
  float v251; // s9
  float v252; // s11
  MapCamera_o *v253; // x20
  System_Action_o *v254; // x22
  System_String_o *v255; // x23
  __int64 v256; // x8
  __int64 v257; // x24
  System_String_o *v258; // x20
  __int64 v259; // x22
  int32_t v260; // w0
  __int64 v261; // x1
  __int64 v262; // x2
  int32_t v263; // w20
  float v264; // s8
  int32_t v265; // w19
  TerminalPramsManager_c *v266; // x0
  __int64 v267; // x8
  __int64 v268; // x1
  TerminalPramsManager_c *v269; // x0
  __int64 v270; // x1
  int32_t v271; // w21
  TerminalPramsManager_c *v272; // x0
  QuestAfterAction_o *v273; // x20
  UnityEngine_Object_o *v274; // x20
  System_String_o *v275; // x19
  System_String_o *v276; // x20
  System_String_o *v277; // x20
  CommonUI_o *v278; // x22
  __int64 v279; // x1
  __int64 v280; // x2
  System_Action_o *v281; // x23
  System_String_o *v282; // x19
  System_String_o *v283; // x20
  System_String_o *v284; // x20
  CommonUI_o *v285; // x22
  __int64 v286; // x1
  __int64 v287; // x2
  System_Action_o *v288; // x23
  System_String_o *v289; // x23
  System_String_array *v290; // x20
  __int64 v291; // x1
  System_String_o *v292; // x23
  System_String_array *v293; // x20
  __int64 v294; // x1
  UnityEngine_Object_o *MapComponent_srcLineSprite; // x22
  __int64 v296; // x1
  UnityEngine_Component_o *v297; // x20
  __int64 v298; // x8
  ScrTerminalMap_o *v299; // x23
  __int64 v300; // x8
  ScrTerminalMap_o *v301; // x20
  UnityEngine_GameObject_o *gameObject; // x22
  __int64 v303; // x1
  __int64 v304; // x2
  System_Action_o *v305; // x23
  SceneJumpInfo_o *v306; // x21
  System_String_o *v307; // x22
  int v308; // w23
  __int64 v309; // x22
  float v310; // s0
  float v311; // s8
  __int64 v312; // x1
  __int64 v313; // x2
  float v314; // s0
  MapCamera_o *v315; // x19
  float v316; // s0
  float v317; // s9
  int32_t v318; // w20
  System_String_o *v319; // x23
  __int64 v320; // x23
  float v321; // s0
  float v322; // s9
  float v323; // s0
  float v324; // s10
  float v325; // s0
  float v326; // s11
  float v327; // s0
  float v328; // s8
  __int64 v329; // x1
  __int64 v330; // x8
  __int64 v331; // x1
  const MethodInfo_299B944 *v332; // x2
  float v333; // s0
  float v334; // s1
  float v335; // s2
  MapCamera_o *v336; // x0
  float v337; // s0
  float v338; // s1
  float v339; // s2
  float v340; // s3
  int32_t v341; // w1
  System_Action_o *v342; // x2
  System_String_o *v343; // x22
  __int64 v344; // x22
  float v345; // s0
  QuestAfterAction_o *v346; // x20
  float v347; // s8
  UnityEngine_Object_o *v348; // x19
  __int64 v349; // x1
  __int64 v350; // x8
  ScrTerminalMap_o *v351; // x20
  float v352; // s0
  float v353; // s9
  float v354; // s0
  float v355; // s0
  float v356; // s1
  float v357; // s2
  float v358; // s9
  float v359; // s10
  float v360; // s11
  int32_t v361; // w20
  __int64 v362; // x1
  __int64 v363; // x2
  System_Action_o *v364; // x22
  System_String_o *v365; // x21
  __int64 v366; // x8
  __int64 v367; // x22
  int32_t v368; // w21
  bool v369; // w22
  System_String_o *v370; // x21
  __int64 v371; // x8
  __int64 v372; // x22
  int32_t v373; // w21
  bool v374; // w22
  System_String_o *v375; // x21
  __int64 v376; // x8
  __int64 v377; // x22
  int32_t v378; // w21
  bool v379; // w22
  System_String_o *v380; // x21
  __int64 v381; // x21
  QuestAfterAction_o *v382; // x20
  UnityEngine_Object_o *v383; // x20
  UIWidget_o *v384; // x20
  QuestAfterAction_StateMain___c__DisplayClass16_11_o *v385; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o **p_CS___8__locals11; // x23
  System_String_o *v387; // x21
  __int64 v388; // x8
  __int64 v389; // x22
  int32_t v390; // w21
  _BOOL4 v391; // w24
  bool v392; // w25
  QuestAfterAction_StateMain___c__DisplayClass16_12_o *v393; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals12; // x8
  QuestAfterAction_o *v395; // x21
  srcLineSprite_o *v396; // x0
  UnityEngine_Object_o *v397; // x19
  __int64 v398; // x1
  __int64 v399; // x2
  MapGimmickComponent_o *v400; // x19
  System_Action_o *v401; // x21
  __int64 v402; // x1
  TerminalSceneComponent_o *v403; // x19
  QuestAfterAction_StateMain___c__DisplayClass16_13_o *v404; // x20
  System_String_o *v405; // x21
  System_String_array *v406; // x0
  struct System_String_array **p_paramsStr; // x21
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals13; // x8
  struct System_String_array *v409; // x9
  QuestAfterAction_o *v410; // x21
  srcLineSprite_o *v411; // x0
  UnityEngine_Object_o *v412; // x19
  __int64 v413; // x1
  __int64 v414; // x2
  MapGimmickComponent_o *v415; // x19
  System_Action_o *v416; // x0
  __int64 *v417; // x8
  System_Action_o *v418; // x21
  struct System_String_array *paramsStr; // x8
  QuestAfterAction_o *v420; // x21
  srcLineSprite_o *v421; // x0
  QuestAfterAction_StateMain___c__DisplayClass16_13_Fields *v422; // x19
  UnityEngine_Object_o *v423; // x21
  bool v424; // w0
  bool v425; // w22
  __int64 v426; // x1
  __int64 v427; // x2
  int32_t v428; // w1
  System_String_o *v429; // x21
  __int64 v430; // x21
  QuestAfterAction_o *v431; // x22
  srcLineSprite_o *v432; // x22
  QuestAfterAction_StateMain___c__DisplayClass16_3_o *v433; // x23
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o **p_CS___8__locals3; // x20
  QuestAfterAction_o *v435; // x21
  srcLineSprite_o *v436; // x0
  QuestAfterAction_StateMain___c__DisplayClass16_3_Fields *v437; // x19
  UnityEngine_Object_o *v438; // x21
  __int64 v439; // x1
  __int64 v440; // x2
  SrcSpotBasePrefab_o *v441; // x21
  System_Action_o *v442; // x22
  srcLineSprite_o *v443; // x1
  __int64 v444; // x0
  System_String_o *v445; // x21
  __int64 v446; // x22
  QuestAfterAction_o *v447; // x21
  srcLineSprite_o *v448; // x21
  __int64 v449; // x1
  __int64 v450; // x2
  System_Action_o *v451; // x22
  QuestAfterAction_o *v452; // x21
  UnityEngine_Object_o *v453; // x21
  _DWORD *monitor; // x8
  SrcSpotBasePrefab_o *v455; // x0
  int32_t v456; // w1
  QuestAfterAction_StateMain___c__DisplayClass16_2_o *v457; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals2; // x8
  QuestAfterAction_o *v459; // x21
  srcLineSprite_o *v460; // x0
  UnityEngine_Object_o *v461; // x19
  __int64 v462; // x1
  __int64 v463; // x2
  QuestAfterAction_o *v464; // x21
  UnityEngine_Object_o *v465; // x21
  _DWORD *v466; // x8
  QuestAfterAction_o *v467; // x21
  _DWORD *v468; // x8
  System_Action_o *v469; // x21
  const MethodInfo *v470; // x2
  _BOOL4 v471; // w23
  QuestAfterAction_o *v472; // x21
  srcLineSprite_o *v473; // x21
  _DWORD *mcTweenScaleP; // x8
  QuestAfterAction_StateMain___c__DisplayClass16_8_o *v475; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals8; // x8
  QuestAfterAction_o *v477; // x21
  srcLineSprite_o *v478; // x0
  UnityEngine_Object_o *v479; // x19
  __int64 v480; // x1
  __int64 v481; // x2
  _BOOL4 IsMapModel; // w23
  QuestAfterAction_o *v483; // x21
  srcLineSprite_o *v484; // x21
  _DWORD *mcAtlasP; // x8
  QuestAfterAction_StateMain___c__DisplayClass16_6_o *v486; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals6; // x8
  QuestAfterAction_o *v488; // x21
  srcLineSprite_o *v489; // x0
  UnityEngine_Object_o *v490; // x19
  __int64 v491; // x1
  __int64 v492; // x2
  _BOOL4 v493; // w23
  QuestAfterAction_o *v494; // x21
  srcLineSprite_o *v495; // x21
  float v496; // s0
  int v497; // w23
  QuestAfterAction_o *v498; // x25
  UnityEngine_Object_o *v499; // x25
  __int64 v500; // x1
  const MethodInfo_299B944 *v501; // x2
  float x; // s10
  float y; // s9
  float z; // s11
  __int64 v505; // x8
  MapCamera_o *mMapCamera; // x19
  System_Action_o *v507; // x0
  __int64 *v508; // x8
  float v509; // s0
  float v510; // s0
  QuestAfterAction_o *v511; // x25
  UnityEngine_Object_o *MapGameObject; // x25
  __int64 v513; // x1
  __int64 v514; // x8
  __int64 v515; // x1
  const MethodInfo_299B944 *v516; // x2
  System_String_o *v517; // x19
  QuestAfterAction_o *v518; // x25
  UnityEngine_Object_o *v519; // x25
  __int64 v520; // x1
  float v521; // s9
  float v522; // s10
  float v523; // s11
  __int64 v524; // x8
  float v525; // s0
  float v526; // s1
  float v527; // s2
  int v528; // w8
  System_String_o *v529; // x19
  System_String_o *v530; // x20
  int v531; // w8
  System_String_o *v532; // x19
  System_String_o *v533; // x20
  System_String_o *v534; // x20
  CommonUI_o *v535; // x22
  __int64 v536; // x1
  __int64 v537; // x2
  System_Action_o *v538; // x23
  CommonUI_o *v539; // x22
  __int64 v540; // x1
  __int64 v541; // x2
  System_Action_o *v542; // x23
  srcLineSprite_o *v543; // x21
  struct UIAtlas_o *v544; // x8
  QuestAfterAction_StateMain_c *v545; // x8
  int v546; // w0
  srcLineSprite_o *v547; // x21
  srcLineSprite_o *v548; // x21
  struct UIAtlas_o *v549; // x8
  srcLineSprite_o *v550; // x0
  QuestAfterAction_StateMain___c__DisplayClass16_10_Fields *p_fields; // x21
  UnityEngine_Object_o *mapGimmick; // x22
  __int64 v553; // x1
  __int64 v554; // x2
  MapGimmickComponent_o *v555; // x21
  System_Action_o *v556; // x0
  System_Action_o *v557; // x22
  int32_t v558; // w1
  srcLineSprite_o *v559; // x0
  QuestAfterAction_StateMain___c__DisplayClass16_11_Fields *v560; // x21
  UnityEngine_Object_o *v561; // x22
  __int64 v562; // x1
  __int64 v563; // x2
  System_Action_o *v564; // x0
  UnityEngine_Object_o *v565; // x21
  int v566; // w9
  QuestAfterAction_StateMain___c__DisplayClass16_9_o *v567; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals9; // x8
  QuestAfterAction_o *v569; // x21
  srcLineSprite_o *v570; // x0
  UnityEngine_Object_o *v571; // x19
  __int64 v572; // x1
  __int64 v573; // x2
  srcLineSprite_o *v574; // x19
  System_Action_o *v575; // x21
  int32_t v576; // w1
  QuestAfterAction_StateMain___c__DisplayClass16_5_o *v577; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals5; // x8
  QuestAfterAction_o *v579; // x21
  srcLineSprite_o *v580; // x0
  UnityEngine_Object_o *roadSprite; // x19
  __int64 v582; // x1
  __int64 v583; // x2
  QuestAfterAction_StateMain___c__DisplayClass16_7_o *v584; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals7; // x8
  QuestAfterAction_o *v586; // x21
  srcLineSprite_o *v587; // x0
  UnityEngine_Object_o *v588; // x19
  __int64 v589; // x1
  __int64 v590; // x2
  UnityEngine_Object_o *v591; // x21
  UnityEngine_Object_o *v592; // x21
  System_Action_o *v593; // x22
  float v594; // s9
  float v595; // s11
  float v596; // s10
  __int64 v597; // x1
  const MethodInfo_299B944 *v598; // x2
  System_String_o *v599; // x19
  MapGimmickComponent_o *v600; // x0
  System_Action_o *v601; // x2
  __int64 v602; // x8
  ScrTerminalMap_o *v603; // x22
  System_Action_o *v604; // x23
  MapCamera_o *v605; // x19
  float v606; // s0
  __int64 v607; // x1
  __int64 v608; // x2
  System_Action_o *v609; // x0
  __int64 *v610; // x8
  System_Action_o *v611; // x20
  float v612; // s0
  __int64 v613; // x1
  __int64 v614; // x2
  MapCamera_o *v615; // x19
  float v616; // s0
  __int64 v617; // x1
  __int64 v618; // x2
  System_Action_o *v619; // x20
  MapCamera_o *v620; // x0
  float v621; // s0
  int32_t v622; // w4
  System_Action_o *v623; // x5
  MapCamera_o *v624; // x20
  float v625; // s0
  __int64 v626; // x1
  __int64 v627; // x2
  System_Action_o *v628; // x22
  float v629; // s0
  __int64 v630; // x1
  __int64 v631; // x2
  __int64 v632; // x0
  __int64 v633; // x0
  __int64 v634; // x0
  __int64 v635; // x0
  __int64 v636; // x0
  System_Nullable_float__o size; // [xsp+30h] [xbp-A0h] BYREF
  System_Nullable_Vector3__o v638; // [xsp+38h] [xbp-98h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+48h] [xbp-88h] BYREF
  UnityEngine_Color_o color; // [xsp+50h] [xbp-80h] BYREF
  WarEntity_o *entity; // [xsp+88h] [xbp-48h] BYREF
  System_Nullable_float__o v642; // 0:x0.8
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v644; // 0:x0.8
  System_Nullable_float__o v645; // 0:x0.8
  System_Nullable_float__o v646; // 0:x0.8
  System_Nullable_float__o v647; // 0:x3.8
  System_Nullable_Vector3__o v648; // 0:x0.16
  System_Nullable_Vector3__o v649; // 0:x0.16
  System_Nullable_Vector3__o v650; // 0:x0.16
  System_Nullable_Vector3__o v651; // 0:x0.16
  System_Nullable_Vector3__o v652; // 0:x0.16
  System_Nullable_Vector3__o v653; // 0:x1.16
  UnityEngine_Vector3_o v654; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v655; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v656; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v657; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v658; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v660; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v661; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v663; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v664; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v665; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v666; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42121D2 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, that);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v5);
    sub_B0D8A4(&char___TypeInfo, v6);
    sub_B0D8A4(&Method_DataManager_GetMasterData_QuestMaster___, v7);
    sub_B0D8A4(&Method_DataManager_GetMaster_QuestMaster___, v8);
    sub_B0D8A4(&DataManager_TypeInfo, v9);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v10);
    sub_B0D8A4(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v11);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__, v12);
    sub_B0D8A4(&FSUtility_TypeInfo, v13);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v14);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___, v15);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v16);
    sub_B0D8A4(&Method_System_Nullable_float___ctor__, v17);
    sub_B0D8A4(&Method_System_Nullable_Vector3___ctor__, v18);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v19);
    sub_B0D8A4(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___, v20);
    sub_B0D8A4(&Method_QuestAfterAction_GetMapComponent_ModelLineComponent___, v21);
    sub_B0D8A4(&Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___, v22);
    sub_B0D8A4(&Method_QuestAfterAction_GetMapComponent_srcLineSprite___, v23);
    sub_B0D8A4(&SceneJumpInfo_TypeInfo, v24);
    sub_B0D8A4(&SeManager_TypeInfo, v25);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v26);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v27);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v29);
    sub_B0D8A4(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v30);
    sub_B0D8A4(&Method_SingletonTemplate_QuestTree__get_Instance__, v31);
    sub_B0D8A4(&SingletonTemplate_QuestTree__TypeInfo, v32);
    sub_B0D8A4(&SingletonTemplate_clsQuestCheck__TypeInfo, v33);
    sub_B0D8A4(&SoundManager_TypeInfo, v34);
    sub_B0D8A4(&string___TypeInfo, v35);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v36);
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v37);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_31__, v38);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_33__, v39);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__, v40);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__, v41);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__, v42);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__13__, v43);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__14__, v44);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__15__, v45);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__16__, v46);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__17__, v47);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__18__, v48);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__19__, v49);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__20__, v50);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__25__, v51);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__, v52);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__36__, v53);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__37__, v54);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__38__, v55);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__39__, v56);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__40__, v57);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__, v58);
    sub_B0D8A4(&QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo, v59);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__21__, v60);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__22__, v61);
    sub_B0D8A4(&QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo, v62);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__23__, v63);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__24__, v64);
    sub_B0D8A4(&QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo, v65);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__26__, v66);
    sub_B0D8A4(&QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo, v67);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__27__, v68);
    sub_B0D8A4(&QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo, v69);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__29__, v70);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__30__, v71);
    sub_B0D8A4(&QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo, v72);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__, v73);
    sub_B0D8A4(&QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo, v74);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__, v75);
    sub_B0D8A4(&QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo, v76);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__, v77);
    sub_B0D8A4(&QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo, v78);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__, v79);
    sub_B0D8A4(&QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo, v80);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__, v81);
    sub_B0D8A4(&QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo, v82);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__, v83);
    sub_B0D8A4(&QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo, v84);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__, v85);
    sub_B0D8A4(&QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo, v86);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__, v87);
    sub_B0D8A4(&QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo, v88);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__, v89);
    sub_B0D8A4(&QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo, v90);
    sub_B0D8A4(&QuestAfterAction_StateMain___c_TypeInfo, v91);
    sub_B0D8A4(&StringLiteral_68/*"\r\n"*/, v92);
    sub_B0D8A4(&StringLiteral_1163/*"30101"*/, v93);
    sub_B0D8A4(&StringLiteral_10913/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v94);
    sub_B0D8A4(&StringLiteral_1164/*"30102"*/, v95);
    sub_B0D8A4(&StringLiteral_1102/*"10703"*/, v96);
    sub_B0D8A4(&StringLiteral_2936/*"CAPTER WAIT"*/, v97);
    sub_B0D8A4(&StringLiteral_1/*""*/, v98);
    sub_B0D8A4(&StringLiteral_19112/*"gevINFOBAR_BACK"*/, v99);
    byte_42121D2 = 1;
  }
  *(_QWORD *)&color.fields.b = 0LL;
  value = 0LL;
  *(_QWORD *)&color.fields.r = 0LL;
  entity = 0LL;
  v100 = (QuestAfterAction_StateMain___c__DisplayClass16_0_o *)sub_B0D974(
                                                                 QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo,
                                                                 that,
                                                                 method);
  QuestAfterAction_StateMain___c__DisplayClass16_0___ctor(v100, 0LL);
  if ( !v100 )
    goto LABEL_1009;
  v100->fields.__4__this = this;
  sub_B0D840(&v100->fields, this);
  v100->fields.that = that;
  p_that = &v100->fields.that;
  *(__n128 *)&v103 = sub_B0D840(&v100->fields.that, that);
  if ( this->fields.IsAnimDoing )
    return;
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer, long double))this->klass->vtable._10_get_CommandBuf.method)(
              this,
              this->klass->vtable._11_get_CommandIndex.methodPtr,
              v103);
  if ( !updated )
    return;
  if ( !*p_that )
    goto LABEL_1009;
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
LABEL_1009:
    sub_B0D97C(updated);
  }
  klass = this->klass;
  this->fields.IsAnimDoing = 1;
  v105 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))klass->vtable._10_get_CommandBuf.method)(
           this,
           klass->vtable._11_get_CommandIndex.methodPtr);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._11_get_CommandIndex.method)(
              this,
              this->klass->vtable._12_set_CommandIndex.methodPtr);
  if ( !v105 )
    goto LABEL_1009;
  if ( (unsigned int)updated >= *(_DWORD *)(v105 + 24) )
  {
LABEL_1015:
    v632 = sub_B0D9A8(updated);
    sub_B0D948(v632, 0LL);
  }
  v106 = *(QuestAfterAction_Command_o **)(v105 + 8LL * (int)updated + 32);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_Command_o *, Il2CppMethodPointer))this->klass->vtable._9_IsUsableCommand.method)(
              this,
              v106,
              this->klass->vtable._10_get_CommandBuf.methodPtr);
  if ( (updated & 1) == 0 )
    goto LABEL_440;
  v109 = *p_that;
  if ( !*p_that )
    goto LABEL_1009;
  BlankEarthQuestAfterAction_k__BackingField = v109->fields._BlankEarthQuestAfterAction_k__BackingField;
  v111 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v107, v108);
  System_Action___ctor(v111, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
  if ( !BlankEarthQuestAfterAction_k__BackingField )
    goto LABEL_1009;
  updated = BlankEarthQuestAfterAction__UpdateAnim(BlankEarthQuestAfterAction_k__BackingField, v109, v106, v111, 0LL);
  if ( (updated & 1) != 0 )
    return;
  if ( !v106 )
    goto LABEL_1009;
  id = v106->fields.id;
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
          if ( !byte_421083D )
          {
            sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v112);
            byte_421083D = 1;
          }
          MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v210 = **(_QWORD **)(MyFsmP + 184);
          if ( v210 )
          {
            MyFsmP = *(_QWORD *)(v210 + 248);
            if ( MyFsmP )
            {
              MyFsmP = (__int64)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)MyFsmP, 0LL);
              if ( MyFsmP )
              {
                v211 = (PlayMakerFSM_o *)MyFsmP;
                ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)MyFsmP, 0LL);
                if ( !System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_2936/*"CAPTER WAIT"*/, 0LL) )
                  goto LABEL_440;
                if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                }
                if ( !byte_421083D )
                {
                  sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v213);
                  byte_421083D = 1;
                }
                MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
                if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v215 = **(_QWORD **)(MyFsmP + 184);
                if ( v215 )
                {
                  v216 = *(_QWORD *)(v215 + 248);
                  if ( v216 )
                  {
                    v217 = *(QuestBoardListViewManager_o **)(v216 + 288);
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
                      v220 = (Il2CppObject *)static_fields->__9;
                      _9__16_31 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v213, v214);
                      System_Action___ctor(
                        _9__16_31,
                        v220,
                        Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_31__,
                        0LL);
                      v221 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
                      v221->__9__16_31 = _9__16_31;
                      sub_B0D840(&v221->__9__16_31, _9__16_31);
                    }
                    if ( v217 )
                    {
                      QuestBoardListViewManager__SetMode(v217, 4, _9__16_31, 0, 0, 0LL);
                      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                      }
                      if ( !byte_421083D )
                      {
                        sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v222);
                        byte_421083D = 1;
                      }
                      v223 = TerminalSceneComponent_TypeInfo;
                      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                        v223 = TerminalSceneComponent_TypeInfo;
                      }
                      MyFsmP = (__int64)v223->static_fields->mInstance;
                      if ( MyFsmP )
                      {
                        TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)MyFsmP, 0LL);
                        PlayMakerFSM__SendEvent(v211, (System_String_o *)StringLiteral_19112/*"gevINFOBAR_BACK"*/, 0LL);
                        goto LABEL_440;
                      }
                    }
                  }
                }
              }
            }
          }
          goto LABEL_1016;
        }
        if ( id != 510 )
        {
          if ( id != 520 )
            return;
          DEFAULT_FADE_TIME = System_Single__Parse(v106->fields.param, 0LL);
          if ( DEFAULT_FADE_TIME <= 0.0 )
          {
            v119 = AvalonSceneManager_TypeInfo;
            if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
              v119 = AvalonSceneManager_TypeInfo;
            }
            DEFAULT_FADE_TIME = v119->static_fields->DEFAULT_FADE_TIME;
          }
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_421083D )
          {
            sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v116);
            byte_421083D = 1;
          }
          v120 = TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v120 = TerminalSceneComponent_TypeInfo;
          }
          mInstance = v120->static_fields->mInstance;
          v122 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v116, v117);
          System_Action___ctor(
            v122,
            (Il2CppObject *)v100,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__,
            0LL);
          if ( mInstance )
          {
            v124 = mInstance;
            v125 = DEFAULT_FADE_TIME;
            v126 = v122;
LABEL_46:
            TerminalSceneComponent__Fadein_MapDisp(v124, v125, v126, 0LL);
            return;
          }
          goto LABEL_1016;
        }
        param = v106->fields.param;
        MyFsmP = sub_B0D8BC(char___TypeInfo, 1LL);
        if ( !MyFsmP )
          goto LABEL_1016;
        if ( *(_DWORD *)(MyFsmP + 24) )
        {
          *(_WORD *)(MyFsmP + 32) = 44;
          if ( !param )
            goto LABEL_1016;
          MyFsmP = (__int64)System_String__Split(param, (System_Char_array *)MyFsmP, 0LL);
          if ( !MyFsmP )
            goto LABEL_1016;
          v197 = MyFsmP;
          if ( *(_DWORD *)(MyFsmP + 24) )
          {
            v198 = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
            v199 = 0.5;
            if ( *(int *)(v197 + 24) >= 2 )
            {
              v200 = System_Int32__Parse(*(System_String_o **)(v197 + 40), 0LL);
              if ( *(int *)(v197 + 24) >= 3 )
                v199 = System_Single__Parse(*(System_String_o **)(v197 + 48), 0LL);
            }
            else
            {
              v200 = v198;
              v198 = -1;
            }
            MyFsmP = (__int64)*p_that;
            if ( *p_that )
            {
              MapComponent_srcLineSprite = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                                     (QuestAfterAction_o *)MyFsmP,
                                                                     0,
                                                                     v200,
                                                                     this,
                                                                     (const MethodInfo_204D3A4 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Equality(MapComponent_srcLineSprite, 0LL, 0LL) )
                return;
              if ( v198 >= 1 )
              {
                MyFsmP = (__int64)*p_that;
                if ( !*p_that )
                  goto LABEL_1016;
                v297 = (UnityEngine_Component_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                    (QuestAfterAction_o *)MyFsmP,
                                                    0,
                                                    v198,
                                                    this,
                                                    (const MethodInfo_204D3A4 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v297, 0LL, 0LL) )
                {
                  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  }
                  if ( !byte_421083D )
                  {
                    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v296);
                    byte_421083D = 1;
                  }
                  MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
                  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
                  }
                  v298 = **(_QWORD **)(MyFsmP + 184);
                  if ( !v298 )
                    goto LABEL_1016;
                  if ( !v297 )
                    goto LABEL_1016;
                  v299 = *(ScrTerminalMap_o **)(v298 + 256);
                  MyFsmP = (__int64)UnityEngine_Component__get_gameObject(v297, 0LL);
                  if ( !v299 )
                    goto LABEL_1016;
                  ScrTerminalMap__SetPlayerIcon(v299, (UnityEngine_GameObject_o *)MyFsmP, 0LL);
                }
              }
              if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              }
              if ( !byte_421083D )
              {
                sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v296);
                byte_421083D = 1;
              }
              MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
              if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
              }
              v300 = **(_QWORD **)(MyFsmP + 184);
              if ( v300 )
              {
                if ( MapComponent_srcLineSprite )
                {
                  v301 = *(ScrTerminalMap_o **)(v300 + 256);
                  gameObject = UnityEngine_Component__get_gameObject(
                                 (UnityEngine_Component_o *)MapComponent_srcLineSprite,
                                 0LL);
                  v305 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v303, v304);
                  System_Action___ctor(
                    v305,
                    (Il2CppObject *)this,
                    (intptr_t)this->klass->vtable._15_onEnd.methodPtr,
                    0LL);
                  if ( v301 )
                  {
                    ScrTerminalMap__MovePlayerIcon(v301, gameObject, v200, v305, v199, 0LL);
                    return;
                  }
                }
              }
            }
LABEL_1016:
            sub_B0D97C(MyFsmP);
          }
        }
LABEL_1018:
        v633 = sub_B0D9A8(MyFsmP);
        sub_B0D948(v633, 0LL);
      }
      switch ( id )
      {
        case 400:
          v139 = (QuestAfterAction_StateMain___c__DisplayClass16_10_o *)sub_B0D974(
                                                                          QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo,
                                                                          v112,
                                                                          v113);
          QuestAfterAction_StateMain___c__DisplayClass16_10___ctor(v139, 0LL);
          if ( !v139 )
            goto LABEL_1016;
          v139->fields.CS___8__locals10 = v100;
          p_CS___8__locals10 = &v139->fields.CS___8__locals10;
          sub_B0D840(&v139->fields.CS___8__locals10, v100);
          v141 = v106->fields.param;
          MyFsmP = sub_B0D8BC(char___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1016;
          if ( !*(_DWORD *)(MyFsmP + 24) )
            goto LABEL_1018;
          *(_WORD *)(MyFsmP + 32) = 44;
          if ( !v141 )
            goto LABEL_1016;
          MyFsmP = (__int64)System_String__Split(v141, (System_Char_array *)MyFsmP, 0LL);
          if ( !MyFsmP )
            goto LABEL_1016;
          v142 = *(_QWORD *)(MyFsmP + 24);
          v143 = MyFsmP;
          if ( v142 )
          {
            if ( !(_DWORD)v142 )
              goto LABEL_1018;
            MyFsmP = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
            v144 = MyFsmP;
            if ( *(int *)(v143 + 24) < 2 )
            {
              v145 = 0;
            }
            else
            {
              MyFsmP = System_Int32__Parse(*(System_String_o **)(v143 + 40), 0LL);
              v145 = (int)MyFsmP > 0;
              if ( *(int *)(v143 + 24) >= 3 )
              {
                MyFsmP = System_Int32__Parse(*(System_String_o **)(v143 + 48), 0LL);
                v146 = (int)MyFsmP > 0;
LABEL_868:
                if ( !*p_CS___8__locals10 )
                  goto LABEL_1016;
                MyFsmP = (__int64)(*p_CS___8__locals10)->fields.that;
                if ( !MyFsmP )
                  goto LABEL_1016;
                v550 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         (QuestAfterAction_o *)MyFsmP,
                         2,
                         v144,
                         this,
                         (const MethodInfo_204D3A4 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
                v139->fields.mapGimmick = (struct MapGimmickComponent_o *)v550;
                p_fields = &v139->fields;
                sub_B0D840(&v139->fields, v550);
                mapGimmick = (UnityEngine_Object_o *)v139->fields.mapGimmick;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                MyFsmP = UnityEngine_Object__op_Equality(mapGimmick, 0LL, 0LL);
                if ( (MyFsmP & 1) != 0 )
                  return;
                if ( !p_fields->mapGimmick )
                  goto LABEL_1016;
                p_fields->mapGimmick->fields.isForceNotActive = v146;
                v555 = p_fields->mapGimmick;
                v556 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v553, v554);
                v557 = v556;
                if ( v145 )
                {
                  System_Action___ctor(
                    v556,
                    (Il2CppObject *)v139,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__21__,
                    0LL);
                  if ( !v555 )
                    goto LABEL_1016;
                  v558 = 2;
                  goto LABEL_891;
                }
                System_Action___ctor(
                  v556,
                  (Il2CppObject *)v139,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__22__,
                  0LL);
                if ( !v555 )
                  goto LABEL_1016;
                v428 = 2;
                goto LABEL_963;
              }
            }
          }
          else
          {
            v145 = 0;
            v144 = 0;
          }
          v146 = 0;
          goto LABEL_868;
        case 401:
          v385 = (QuestAfterAction_StateMain___c__DisplayClass16_11_o *)sub_B0D974(
                                                                          QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo,
                                                                          v112,
                                                                          v113);
          QuestAfterAction_StateMain___c__DisplayClass16_11___ctor(v385, 0LL);
          if ( !v385 )
            goto LABEL_1016;
          v385->fields.CS___8__locals11 = v100;
          p_CS___8__locals11 = &v385->fields.CS___8__locals11;
          sub_B0D840(&v385->fields.CS___8__locals11, v100);
          v387 = v106->fields.param;
          MyFsmP = sub_B0D8BC(char___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1016;
          if ( !*(_DWORD *)(MyFsmP + 24) )
            goto LABEL_1018;
          *(_WORD *)(MyFsmP + 32) = 44;
          if ( !v387 )
            goto LABEL_1016;
          MyFsmP = (__int64)System_String__Split(v387, (System_Char_array *)MyFsmP, 0LL);
          if ( !MyFsmP )
            goto LABEL_1016;
          v388 = *(_QWORD *)(MyFsmP + 24);
          v389 = MyFsmP;
          if ( v388 )
          {
            if ( !(_DWORD)v388 )
              goto LABEL_1018;
            MyFsmP = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
            v390 = MyFsmP;
            if ( *(int *)(v389 + 24) < 2 )
            {
              v391 = 0;
            }
            else
            {
              MyFsmP = System_Int32__Parse(*(System_String_o **)(v389 + 40), 0LL);
              v391 = (int)MyFsmP > 0;
              if ( *(int *)(v389 + 24) >= 3 )
              {
                MyFsmP = System_Int32__Parse(*(System_String_o **)(v389 + 48), 0LL);
                v392 = (int)MyFsmP > 0;
LABEL_880:
                if ( !*p_CS___8__locals11 )
                  goto LABEL_1016;
                MyFsmP = (__int64)(*p_CS___8__locals11)->fields.that;
                if ( !MyFsmP )
                  goto LABEL_1016;
                v559 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         (QuestAfterAction_o *)MyFsmP,
                         2,
                         v390,
                         this,
                         (const MethodInfo_204D3A4 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
                v385->fields.mapGimmick = (struct MapGimmickComponent_o *)v559;
                v560 = &v385->fields;
                sub_B0D840(&v385->fields, v559);
                v561 = (UnityEngine_Object_o *)v385->fields.mapGimmick;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                MyFsmP = UnityEngine_Object__op_Equality(v561, 0LL, 0LL);
                if ( (MyFsmP & 1) != 0 )
                  return;
                if ( !v560->mapGimmick )
                  goto LABEL_1016;
                v560->mapGimmick->fields.isForceLoop = v392;
                if ( !v560->mapGimmick )
                  goto LABEL_1016;
                v560->mapGimmick->fields.isForceNotActive = 0;
                v555 = v560->mapGimmick;
                v564 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v562, v563);
                v557 = v564;
                if ( v391 )
                {
                  System_Action___ctor(
                    v564,
                    (Il2CppObject *)v385,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__23__,
                    0LL);
                  if ( !v555 )
                    goto LABEL_1016;
                  v558 = 3;
LABEL_891:
                  MapGimmickComponent__SetState(v555, v558, v557, 0LL);
                  goto LABEL_440;
                }
                System_Action___ctor(
                  v564,
                  (Il2CppObject *)v385,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__24__,
                  0LL);
                if ( !v555 )
                  goto LABEL_1016;
                v428 = 3;
LABEL_963:
                v600 = v555;
                v601 = v557;
LABEL_964:
                MapGimmickComponent__SetState(v600, v428, v601, 0LL);
                return;
              }
            }
          }
          else
          {
            v391 = 0;
            v390 = 0;
          }
          v392 = 0;
          goto LABEL_880;
        case 402:
          v370 = v106->fields.param;
          MyFsmP = sub_B0D8BC(char___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1016;
          if ( !*(_DWORD *)(MyFsmP + 24) )
            goto LABEL_1018;
          *(_WORD *)(MyFsmP + 32) = 44;
          if ( !v370 )
            goto LABEL_1016;
          MyFsmP = (__int64)System_String__Split(v370, (System_Char_array *)MyFsmP, 0LL);
          if ( !MyFsmP )
            goto LABEL_1016;
          v371 = *(_QWORD *)(MyFsmP + 24);
          v372 = MyFsmP;
          if ( v371 )
          {
            if ( !(_DWORD)v371 )
              goto LABEL_1018;
            v373 = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
            if ( *(int *)(v372 + 24) >= 2 )
            {
              v374 = System_Int32__Parse(*(System_String_o **)(v372 + 40), 0LL) > 0;
LABEL_846:
              MyFsmP = (__int64)*p_that;
              if ( *p_that )
              {
                v547 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         (QuestAfterAction_o *)MyFsmP,
                         2,
                         v373,
                         this,
                         (const MethodInfo_204D3A4 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                MyFsmP = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v547, 0LL, 0LL);
                if ( (MyFsmP & 1) != 0 )
                  return;
                if ( v547 )
                {
                  BYTE1(v547->fields.mcTo.fields.y) = v374;
                  MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)v547, 0, 0LL);
                  mcAtlasP = v547->fields.mcAtlasP;
                  if ( mcAtlasP )
                  {
LABEL_933:
                    mcAtlasP[4] = 0;
                    goto LABEL_942;
                  }
                }
              }
              goto LABEL_1016;
            }
          }
          else
          {
            v373 = 0;
          }
          v374 = 0;
          goto LABEL_846;
        case 403:
          v375 = v106->fields.param;
          MyFsmP = sub_B0D8BC(char___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1016;
          if ( !*(_DWORD *)(MyFsmP + 24) )
            goto LABEL_1018;
          *(_WORD *)(MyFsmP + 32) = 44;
          if ( !v375 )
            goto LABEL_1016;
          MyFsmP = (__int64)System_String__Split(v375, (System_Char_array *)MyFsmP, 0LL);
          if ( !MyFsmP )
            goto LABEL_1016;
          v376 = *(_QWORD *)(MyFsmP + 24);
          v377 = MyFsmP;
          if ( v376 )
          {
            if ( !(_DWORD)v376 )
              goto LABEL_1018;
            v378 = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
            if ( *(int *)(v377 + 24) >= 2 )
            {
              v379 = System_Int32__Parse(*(System_String_o **)(v377 + 40), 0LL) > 0;
LABEL_856:
              MyFsmP = (__int64)*p_that;
              if ( *p_that )
              {
                v548 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         (QuestAfterAction_o *)MyFsmP,
                         2,
                         v378,
                         this,
                         (const MethodInfo_204D3A4 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                MyFsmP = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v548, 0LL, 0LL);
                if ( (MyFsmP & 1) != 0 )
                  return;
                if ( v548 )
                {
                  LOBYTE(v548->fields.mcTo.fields.y) = v379;
                  BYTE1(v548->fields.mcTo.fields.y) = 0;
                  MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)v548, 1, 0LL);
                  v549 = v548->fields.mcAtlasP;
                  if ( v549 )
                  {
                    v549->fields.m_CachedPtr = 1;
                    goto LABEL_942;
                  }
                }
              }
              goto LABEL_1016;
            }
          }
          else
          {
            v378 = 0;
          }
          v379 = 0;
          goto LABEL_856;
        case 404:
          v343 = v106->fields.param;
          MyFsmP = sub_B0D8BC(char___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1016;
          if ( !*(_DWORD *)(MyFsmP + 24) )
            goto LABEL_1018;
          *(_WORD *)(MyFsmP + 32) = 44;
          if ( !v343 )
            goto LABEL_1016;
          MyFsmP = (__int64)System_String__Split(v343, (System_Char_array *)MyFsmP, 0LL);
          if ( !MyFsmP )
            goto LABEL_1016;
          v344 = MyFsmP;
          if ( *(int *)(MyFsmP + 24) <= 4 )
            goto LABEL_440;
          v345 = System_Single__Parse(*(System_String_o **)(MyFsmP + 56), 0LL);
          if ( !*(_DWORD *)(v344 + 24) )
            goto LABEL_1018;
          v346 = *p_that;
          v347 = v345;
          MyFsmP = System_Int32__Parse(*(System_String_o **)(v344 + 32), 0LL);
          if ( !v346 )
            goto LABEL_1016;
          v348 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                           v346,
                                           2,
                                           MyFsmP,
                                           this,
                                           (const MethodInfo_204D3A4 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v348, 0LL, 0LL) )
            return;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_421083D )
          {
            sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v349);
            byte_421083D = 1;
          }
          MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v350 = **(_QWORD **)(MyFsmP + 184);
          if ( !v350 )
            goto LABEL_1016;
          if ( *(_DWORD *)(v344 + 24) <= 1u )
            goto LABEL_1018;
          v351 = *(ScrTerminalMap_o **)(v350 + 256);
          v352 = System_Single__Parse(*(System_String_o **)(v344 + 40), 0LL);
          if ( *(_DWORD *)(v344 + 24) <= 2u )
            goto LABEL_1018;
          v353 = v352;
          v354 = System_Single__Parse(*(System_String_o **)(v344 + 48), 0LL);
          if ( !v351 )
            goto LABEL_1016;
          *(UnityEngine_Vector3_o *)&v355 = ScrTerminalMap__LocalPosFromCoord(v351, v353, v354, 0.0, 0.0, 0LL);
          if ( *(_DWORD *)(v344 + 24) <= 4u )
            goto LABEL_1018;
          v358 = v355;
          v359 = v356;
          v360 = v357;
          v361 = System_Int32__Parse(*(System_String_o **)(v344 + 64), 0LL);
          v364 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v362, v363);
          System_Action___ctor(
            v364,
            (Il2CppObject *)v100,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__25__,
            0LL);
          if ( !v348 )
            goto LABEL_1016;
          v655.fields.y = v359;
          v655.fields.z = v360;
          v655.fields.x = v358;
          MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v348, v655, v347 * 0.001, v361, v364, 0LL);
          return;
        case 405:
          v393 = (QuestAfterAction_StateMain___c__DisplayClass16_12_o *)sub_B0D974(
                                                                          QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo,
                                                                          v112,
                                                                          v113);
          QuestAfterAction_StateMain___c__DisplayClass16_12___ctor(v393, 0LL);
          if ( !v393 )
            goto LABEL_1016;
          v393->fields.CS___8__locals12 = v100;
          sub_B0D840(&v393->fields.CS___8__locals12, v100);
          CS___8__locals12 = v393->fields.CS___8__locals12;
          if ( !CS___8__locals12 )
            goto LABEL_1016;
          v395 = CS___8__locals12->fields.that;
          MyFsmP = System_Int32__Parse(v106->fields.param, 0LL);
          if ( !v395 )
            goto LABEL_1016;
          v396 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                   v395,
                   2,
                   MyFsmP,
                   this,
                   (const MethodInfo_204D3A4 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          v393->fields.mapGimmick = (struct MapGimmickComponent_o *)v396;
          sub_B0D840(&v393->fields, v396);
          v397 = (UnityEngine_Object_o *)v393->fields.mapGimmick;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v397, 0LL, 0LL) )
            return;
          v400 = v393->fields.mapGimmick;
          v401 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v398, v399);
          System_Action___ctor(
            v401,
            (Il2CppObject *)v393,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__26__,
            0LL);
          if ( !v400 )
            goto LABEL_1016;
          MapGimmickComponent__SetState(v400, 3, v401, 0LL);
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_421083D )
          {
            sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v402);
            byte_421083D = 1;
          }
          MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v403 = **(TerminalSceneComponent_o ***)(MyFsmP + 184);
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          }
          if ( !v403 )
            goto LABEL_1016;
          v124 = v403;
          v126 = 0LL;
          v125 = AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME;
          goto LABEL_46;
        case 406:
          v404 = (QuestAfterAction_StateMain___c__DisplayClass16_13_o *)sub_B0D974(
                                                                          QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo,
                                                                          v112,
                                                                          v113);
          QuestAfterAction_StateMain___c__DisplayClass16_13___ctor(v404, 0LL);
          if ( !v404 )
            goto LABEL_1016;
          v404->fields.CS___8__locals13 = v100;
          sub_B0D840(&v404->fields.CS___8__locals13, v100);
          v405 = v106->fields.param;
          MyFsmP = sub_B0D8BC(char___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1016;
          if ( !*(_DWORD *)(MyFsmP + 24) )
            goto LABEL_1018;
          *(_WORD *)(MyFsmP + 32) = 44;
          if ( !v405 )
            goto LABEL_1016;
          v406 = System_String__Split(v405, (System_Char_array *)MyFsmP, 0LL);
          v404->fields.paramsStr = v406;
          p_paramsStr = &v404->fields.paramsStr;
          sub_B0D840(&v404->fields.paramsStr, v406);
          CS___8__locals13 = v404->fields.CS___8__locals13;
          if ( !CS___8__locals13 )
            goto LABEL_1016;
          v409 = *p_paramsStr;
          if ( !*p_paramsStr )
            goto LABEL_1016;
          if ( !v409->max_length )
            goto LABEL_1018;
          v410 = CS___8__locals13->fields.that;
          MyFsmP = System_Int32__Parse(v409->m_Items[0], 0LL);
          if ( !v410 )
            goto LABEL_1016;
          v411 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                   v410,
                   2,
                   MyFsmP,
                   this,
                   (const MethodInfo_204D3A4 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          v404->fields.mapGimmick = (struct MapGimmickComponent_o *)v411;
          sub_B0D840(&v404->fields, v411);
          v412 = (UnityEngine_Object_o *)v404->fields.mapGimmick;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v412, 0LL, 0LL) )
            return;
          v415 = v404->fields.mapGimmick;
          v416 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v413, v414);
          v417 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__27__;
          v418 = v416;
          goto LABEL_602;
        case 407:
          v380 = v106->fields.param;
          MyFsmP = sub_B0D8BC(char___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1016;
          if ( !*(_DWORD *)(MyFsmP + 24) )
            goto LABEL_1018;
          *(_WORD *)(MyFsmP + 32) = 44;
          if ( !v380 )
            goto LABEL_1016;
          MyFsmP = (__int64)System_String__Split(v380, (System_Char_array *)MyFsmP, 0LL);
          if ( !MyFsmP )
            goto LABEL_1016;
          v381 = MyFsmP;
          if ( !*(_DWORD *)(MyFsmP + 24) )
            goto LABEL_1018;
          v382 = *p_that;
          MyFsmP = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
          if ( !v382 )
            goto LABEL_1016;
          v383 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                           v382,
                                           2,
                                           MyFsmP,
                                           this,
                                           (const MethodInfo_204D3A4 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          MyFsmP = UnityEngine_Object__op_Equality(v383, 0LL, 0LL);
          if ( (MyFsmP & 1) != 0 )
            return;
          if ( !v383 )
            goto LABEL_1016;
          MyFsmP = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v383, 0LL);
          if ( !MyFsmP )
            goto LABEL_1016;
          MyFsmP = (__int64)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                              (UnityEngine_GameObject_o *)MyFsmP,
                              (const MethodInfo_1B62C54 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
          if ( *(_DWORD *)(v381 + 24) <= 1u )
            goto LABEL_1018;
          v384 = (UIWidget_o *)MyFsmP;
          MyFsmP = UnityEngine_ColorUtility__TryParseHtmlString(*(System_String_o **)(v381 + 40), &color, 0LL);
          if ( !v384 )
            goto LABEL_1016;
          UIWidget__set_color(v384, color, 0LL);
          goto LABEL_440;
        case 408:
          v404 = (QuestAfterAction_StateMain___c__DisplayClass16_13_o *)sub_B0D974(
                                                                          QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo,
                                                                          v112,
                                                                          v113);
          QuestAfterAction_StateMain___c__DisplayClass16_15___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_15_o *)v404,
            0LL);
          if ( !v404 )
            goto LABEL_1016;
          v404->fields.paramsStr = (struct System_String_array *)v100;
          sub_B0D840(&v404->fields.paramsStr, v100);
          paramsStr = v404->fields.paramsStr;
          if ( !paramsStr )
            goto LABEL_1016;
          v420 = *(QuestAfterAction_o **)&paramsStr->max_length;
          MyFsmP = System_Int32__Parse(v106->fields.param, 0LL);
          if ( !v420 )
            goto LABEL_1016;
          v421 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                   v420,
                   2,
                   MyFsmP,
                   this,
                   (const MethodInfo_204D3A4 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          v404->fields.mapGimmick = (struct MapGimmickComponent_o *)v421;
          v422 = &v404->fields;
          sub_B0D840(&v404->fields, v421);
          v423 = (UnityEngine_Object_o *)v404->fields.mapGimmick;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v423, 0LL, 0LL) )
            return;
          if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
          }
          MyFsmP = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !v422->mapGimmick || !MyFsmP )
            goto LABEL_1016;
          v424 = QuestTree__CheckMapGimmickCond_21487076(
                   (QuestTree_o *)MyFsmP,
                   v422->mapGimmick->fields.mMapCtrl_MapGimmickInfo,
                   0LL);
          v415 = v422->mapGimmick;
          v425 = v424;
          v416 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v426, v427);
          v418 = v416;
          if ( v425 )
          {
            v417 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__29__;
LABEL_602:
            System_Action___ctor(v416, (Il2CppObject *)v404, *v417, 0LL);
            if ( !v415 )
              goto LABEL_1016;
            v428 = 3;
          }
          else
          {
            System_Action___ctor(
              v416,
              (Il2CppObject *)v404,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__30__,
              0LL);
            if ( !v415 )
              goto LABEL_1016;
            v428 = 2;
          }
          v600 = v415;
          v601 = v418;
          goto LABEL_964;
        case 409:
          v365 = v106->fields.param;
          MyFsmP = sub_B0D8BC(char___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1016;
          if ( !*(_DWORD *)(MyFsmP + 24) )
            goto LABEL_1018;
          *(_WORD *)(MyFsmP + 32) = 44;
          if ( !v365 )
            goto LABEL_1016;
          MyFsmP = (__int64)System_String__Split(v365, (System_Char_array *)MyFsmP, 0LL);
          if ( !MyFsmP )
            goto LABEL_1016;
          v366 = *(_QWORD *)(MyFsmP + 24);
          v367 = MyFsmP;
          if ( v366 )
          {
            if ( !(_DWORD)v366 )
              goto LABEL_1018;
            v368 = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
            if ( *(int *)(v367 + 24) >= 2 )
            {
              v369 = System_Int32__Parse(*(System_String_o **)(v367 + 40), 0LL) > 0;
              goto LABEL_836;
            }
          }
          else
          {
            v368 = 0;
          }
          v369 = 0;
LABEL_836:
          MyFsmP = (__int64)*p_that;
          if ( *p_that )
          {
            v543 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                     (QuestAfterAction_o *)MyFsmP,
                     2,
                     v368,
                     this,
                     (const MethodInfo_204D3A4 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            MyFsmP = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v543, 0LL, 0LL);
            if ( (MyFsmP & 1) != 0 )
              return;
            if ( v543 )
            {
              LOBYTE(v543->fields.mcTo.fields.y) = v369;
              BYTE1(v543->fields.mcTo.fields.y) = 0;
              MapGimmickComponent__SetDispAnim((MapGimmickComponent_o *)v543, 1, 0LL);
              v544 = v543->fields.mcAtlasP;
              if ( v544 )
              {
                v544->fields.m_CachedPtr = 1;
                v545 = this->klass;
                this->fields.IsAnimDoing = 0;
                v546 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))v545->vtable._11_get_CommandIndex.method)(
                         this,
                         v545->vtable._12_set_CommandIndex.methodPtr);
                ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_CommandIndex.method)(
                  this,
                  (unsigned int)(v546 + 1),
                  this->klass->vtable._13_UpdateAnim.methodPtr);
LABEL_943:
                ((void (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_o *, Il2CppMethodPointer))this->klass->vtable._13_UpdateAnim.method)(
                  this,
                  *p_that,
                  this->klass->vtable._14_EndAnim.methodPtr);
                return;
              }
            }
          }
          goto LABEL_1016;
        default:
          if ( id != 500 )
            return;
          v271 = System_Int32__Parse(v106->fields.param, 0LL);
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_421088B )
          {
            sub_B0D8A4(&TerminalPramsManager_TypeInfo, v270);
            byte_421088B = 1;
          }
          v272 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v272 = TerminalPramsManager_TypeInfo;
          }
          v272->static_fields->_AfterActionFocusQuestId_k__BackingField = v271;
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          MyFsmP = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_QuestMaster___);
          if ( !MyFsmP )
            goto LABEL_1016;
          if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                  (DataMasterBase_WarMaster__WarEntity__int__o *)MyFsmP,
                  &entity,
                  v271,
                  (const MethodInfo_2669C30 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
            goto LABEL_440;
          MyFsmP = (__int64)entity;
          if ( !entity )
            goto LABEL_1016;
          v273 = *p_that;
          MyFsmP = QuestEntity__getSpotId((QuestEntity_o *)entity, 0LL);
          if ( !v273 )
            goto LABEL_1016;
          v274 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                           v273,
                                           0,
                                           MyFsmP,
                                           this,
                                           (const MethodInfo_204D3A4 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          MyFsmP = UnityEngine_Object__op_Inequality(v274, 0LL, 0LL);
          if ( (MyFsmP & 1) == 0 )
            goto LABEL_440;
          if ( !v274 )
            goto LABEL_1016;
          SrcSpotBasePrefab__SelectSpot((SrcSpotBasePrefab_o *)v274, 0, 0LL);
          goto LABEL_440;
      }
    }
    if ( id <= 205 )
    {
      switch ( id )
      {
        case 'd':
          v153 = (QuestAfterAction_StateMain___c__DisplayClass16_1_o *)sub_B0D974(
                                                                         QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo,
                                                                         v112,
                                                                         v113);
          QuestAfterAction_StateMain___c__DisplayClass16_1___ctor(v153, 0LL);
          if ( !v153 )
            goto LABEL_1009;
          v153->fields.CS___8__locals1 = v100;
          sub_B0D840(&v153->fields.CS___8__locals1, v100);
          CS___8__locals1 = v153->fields.CS___8__locals1;
          if ( !CS___8__locals1 )
            goto LABEL_1009;
          v155 = CS___8__locals1->fields.that;
          updated = System_Int32__Parse(v106->fields.param, 0LL);
          if ( !v155 )
            goto LABEL_1009;
          v156 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                   v155,
                   0,
                   updated,
                   this,
                   (const MethodInfo_204D3A4 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          v153->fields.spot = (struct SrcSpotBasePrefab_o *)v156;
          sub_B0D840(&v153->fields, v156);
          spot = (UnityEngine_Object_o *)v153->fields.spot;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(spot, 0LL, 0LL) )
            return;
          v160 = v153->fields.spot;
          v161 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v158, v159);
          System_Action___ctor(
            v161,
            (Il2CppObject *)v153,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__,
            0LL);
          if ( !v160 )
            goto LABEL_1009;
          v162 = 2;
          goto LABEL_660;
        case 'e':
          v457 = (QuestAfterAction_StateMain___c__DisplayClass16_2_o *)sub_B0D974(
                                                                         QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo,
                                                                         v112,
                                                                         v113);
          QuestAfterAction_StateMain___c__DisplayClass16_2___ctor(v457, 0LL);
          if ( !v457 )
            goto LABEL_1009;
          v457->fields.CS___8__locals2 = v100;
          sub_B0D840(&v457->fields.CS___8__locals2, v100);
          CS___8__locals2 = v457->fields.CS___8__locals2;
          if ( !CS___8__locals2 )
            goto LABEL_1009;
          v459 = CS___8__locals2->fields.that;
          updated = System_Int32__Parse(v106->fields.param, 0LL);
          if ( !v459 )
            goto LABEL_1009;
          v460 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                   v459,
                   0,
                   updated,
                   this,
                   (const MethodInfo_204D3A4 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          v457->fields.spot = (struct SrcSpotBasePrefab_o *)v460;
          sub_B0D840(&v457->fields, v460);
          v461 = (UnityEngine_Object_o *)v457->fields.spot;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v461, 0LL, 0LL) )
            return;
          v160 = v457->fields.spot;
          v161 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v462, v463);
          System_Action___ctor(
            v161,
            (Il2CppObject *)v457,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__,
            0LL);
          if ( !v160 )
            goto LABEL_1009;
          v162 = 3;
LABEL_660:
          SrcSpotBasePrefab__SetState(v160, v162, v161, 0LL);
          return;
        case 'f':
          v433 = (QuestAfterAction_StateMain___c__DisplayClass16_3_o *)sub_B0D974(
                                                                         QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo,
                                                                         v112,
                                                                         v113);
          QuestAfterAction_StateMain___c__DisplayClass16_3___ctor(v433, 0LL);
          if ( !v433 )
            goto LABEL_1009;
          v433->fields.CS___8__locals3 = v100;
          p_CS___8__locals3 = &v433->fields.CS___8__locals3;
          sub_B0D840(&v433->fields.CS___8__locals3, v100);
          if ( !v433->fields.CS___8__locals3 )
            goto LABEL_1009;
          v435 = v433->fields.CS___8__locals3->fields.that;
          updated = System_Int32__Parse(v106->fields.param, 0LL);
          if ( !v435 )
            goto LABEL_1009;
          v436 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                   v435,
                   0,
                   updated,
                   this,
                   (const MethodInfo_204D3A4 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          v433->fields.spot = (struct SrcSpotBasePrefab_o *)v436;
          v437 = &v433->fields;
          sub_B0D840(&v433->fields, v436);
          v438 = (UnityEngine_Object_o *)v433->fields.spot;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v438, 0LL, 0LL) )
            return;
          v441 = v433->fields.spot;
          v442 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v439, v440);
          System_Action___ctor(
            v442,
            (Il2CppObject *)v433,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__,
            0LL);
          if ( !v441 )
            goto LABEL_1009;
          SrcSpotBasePrefab__SetState(v441, 4, v442, 0LL);
          if ( !*p_CS___8__locals3 )
            goto LABEL_1009;
          updated = (__int64)(*p_CS___8__locals3)->fields.that;
          if ( !updated )
            goto LABEL_1009;
          v443 = (srcLineSprite_o *)v437->spot;
          *(_QWORD *)(updated + 168) = v437->spot;
          v444 = updated + 168;
          goto LABEL_642;
        case 'g':
          v445 = v106->fields.param;
          updated = sub_B0D8BC(char___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_1009;
          if ( !*(_DWORD *)(updated + 24) )
            goto LABEL_1015;
          *(_WORD *)(updated + 32) = 44;
          if ( !v445 )
            goto LABEL_1009;
          updated = (__int64)System_String__Split(v445, (System_Char_array *)updated, 0LL);
          if ( !updated )
            goto LABEL_1009;
          v446 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_440;
          v447 = *p_that;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v447 )
            goto LABEL_1009;
          v448 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                   v447,
                   0,
                   updated,
                   this,
                   (const MethodInfo_204D3A4 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v448, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v446 + 24) <= 1u )
            goto LABEL_1015;
          updated = System_Int32__Parse(*(System_String_o **)(v446 + 40), 0LL);
          if ( !v448 )
            goto LABEL_1009;
          v448[1].fields.miLineH = updated;
          v451 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v449, v450);
          System_Action___ctor(v451, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          SrcSpotBasePrefab__SetState((SrcSpotBasePrefab_o *)v448, 5, v451, 0LL);
          updated = (__int64)*p_that;
          if ( !*p_that )
            goto LABEL_1009;
          *(_QWORD *)(updated + 168) = v448;
          v444 = updated + 168;
          v443 = v448;
LABEL_642:
          sub_B0D840(v444, v443);
          return;
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
          return;
        case 'n':
          v452 = *p_that;
          updated = System_Int32__Parse(v106->fields.param, 0LL);
          if ( !v452 )
            goto LABEL_1009;
          v453 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                           v452,
                                           0,
                                           updated,
                                           this,
                                           (const MethodInfo_204D3A4 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          updated = UnityEngine_Object__op_Equality(v453, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v453 )
            goto LABEL_1009;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v453, 0, 0LL);
          monitor = v453[9].monitor;
          if ( !monitor )
            goto LABEL_1009;
          monitor[5] = 0;
          v455 = (SrcSpotBasePrefab_o *)v453;
          v456 = 0;
          goto LABEL_678;
        case 'o':
          v467 = *p_that;
          updated = System_Int32__Parse(v106->fields.param, 0LL);
          if ( !v467 )
            goto LABEL_1009;
          v465 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                           v467,
                                           0,
                                           updated,
                                           this,
                                           (const MethodInfo_204D3A4 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          updated = UnityEngine_Object__op_Equality(v465, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v465 )
            goto LABEL_1009;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v465, 1, 0LL);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v465, 0, 0LL);
          v468 = v465[9].monitor;
          if ( !v468 )
            goto LABEL_1009;
          v468[5] = 2;
          goto LABEL_677;
        case 'p':
          v464 = *p_that;
          updated = System_Int32__Parse(v106->fields.param, 0LL);
          if ( !v464 )
            goto LABEL_1009;
          v465 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                           v464,
                                           0,
                                           updated,
                                           this,
                                           (const MethodInfo_204D3A4 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          updated = UnityEngine_Object__op_Equality(v465, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v465 )
            goto LABEL_1009;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v465, 1, 0LL);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v465, 1, 0LL);
          v466 = v465[9].monitor;
          if ( !v466 )
            goto LABEL_1009;
          v466[5] = 1;
LABEL_677:
          v456 = 1;
          v455 = (SrcSpotBasePrefab_o *)v465;
LABEL_678:
          SrcSpotBasePrefab__SetTouchType(v455, v456, 0LL);
          goto LABEL_942;
        case 'q':
          v429 = v106->fields.param;
          updated = sub_B0D8BC(char___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_1009;
          if ( !*(_DWORD *)(updated + 24) )
            goto LABEL_1015;
          *(_WORD *)(updated + 32) = 44;
          if ( !v429 )
            goto LABEL_1009;
          updated = (__int64)System_String__Split(v429, (System_Char_array *)updated, 0LL);
          if ( !updated )
            goto LABEL_1009;
          v430 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_440;
          v431 = *p_that;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v431 )
            goto LABEL_1009;
          v432 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                   v431,
                   0,
                   updated,
                   this,
                   (const MethodInfo_204D3A4 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v432, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v430 + 24) <= 1u )
            goto LABEL_1015;
          updated = System_Int32__Parse(*(System_String_o **)(v430 + 40), 0LL);
          if ( !v432 )
            goto LABEL_1009;
          v432[1].fields.miLineH = updated;
          SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)v432, 1, 0LL);
          goto LABEL_942;
        default:
          switch ( id )
          {
            case 200:
              if ( this->fields.IsMapModel )
              {
                v163 = (QuestAfterAction_StateMain___c__DisplayClass16_4_o *)sub_B0D974(
                                                                               QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo,
                                                                               v112,
                                                                               v113);
                QuestAfterAction_StateMain___c__DisplayClass16_4___ctor(v163, 0LL);
                if ( !v163 )
                  goto LABEL_1009;
                v163->fields.CS___8__locals4 = v100;
                sub_B0D840(&v163->fields.CS___8__locals4, v100);
                CS___8__locals4 = v163->fields.CS___8__locals4;
                if ( !CS___8__locals4 )
                  goto LABEL_1009;
                v165 = CS___8__locals4->fields.that;
                updated = System_Int32__Parse(v106->fields.param, 0LL);
                if ( !v165 )
                  goto LABEL_1009;
                v166 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         v165,
                         1,
                         updated,
                         this,
                         (const MethodInfo_204D3A4 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                v163->fields.roadModel = (struct ModelLineComponent_o *)v166;
                sub_B0D840(&v163->fields, v166);
                roadModel = (UnityEngine_Object_o *)v163->fields.roadModel;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Equality(roadModel, 0LL, 0LL) )
                {
                  v170 = v163->fields.roadModel;
                  v171 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v168, v169);
                  System_Action___ctor(
                    v171,
                    (Il2CppObject *)v163,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__,
                    0LL);
                  if ( !v170 )
                    goto LABEL_1009;
                  v172 = 2;
                  goto LABEL_719;
                }
              }
              else
              {
                v577 = (QuestAfterAction_StateMain___c__DisplayClass16_5_o *)sub_B0D974(
                                                                               QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo,
                                                                               v112,
                                                                               v113);
                QuestAfterAction_StateMain___c__DisplayClass16_5___ctor(v577, 0LL);
                if ( !v577 )
                  goto LABEL_1009;
                v577->fields.CS___8__locals5 = v100;
                sub_B0D840(&v577->fields.CS___8__locals5, v100);
                CS___8__locals5 = v577->fields.CS___8__locals5;
                if ( !CS___8__locals5 )
                  goto LABEL_1009;
                v579 = CS___8__locals5->fields.that;
                updated = System_Int32__Parse(v106->fields.param, 0LL);
                if ( !v579 )
                  goto LABEL_1009;
                v580 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         v579,
                         1,
                         updated,
                         this,
                         (const MethodInfo_204D3A4 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                v577->fields.roadSprite = v580;
                sub_B0D840(&v577->fields, v580);
                roadSprite = (UnityEngine_Object_o *)v577->fields.roadSprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Equality(roadSprite, 0LL, 0LL) )
                {
                  v574 = v577->fields.roadSprite;
                  v575 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v582, v583);
                  System_Action___ctor(
                    v575,
                    (Il2CppObject *)v577,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__,
                    0LL);
                  if ( !v574 )
                    goto LABEL_1009;
                  v576 = 2;
                  goto LABEL_926;
                }
              }
              return;
            case 201:
              if ( this->fields.IsMapModel )
              {
                v486 = (QuestAfterAction_StateMain___c__DisplayClass16_6_o *)sub_B0D974(
                                                                               QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo,
                                                                               v112,
                                                                               v113);
                QuestAfterAction_StateMain___c__DisplayClass16_6___ctor(v486, 0LL);
                if ( !v486 )
                  goto LABEL_1009;
                v486->fields.CS___8__locals6 = v100;
                sub_B0D840(&v486->fields.CS___8__locals6, v100);
                CS___8__locals6 = v486->fields.CS___8__locals6;
                if ( !CS___8__locals6 )
                  goto LABEL_1009;
                v488 = CS___8__locals6->fields.that;
                updated = System_Int32__Parse(v106->fields.param, 0LL);
                if ( !v488 )
                  goto LABEL_1009;
                v489 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         v488,
                         1,
                         updated,
                         this,
                         (const MethodInfo_204D3A4 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                v486->fields.roadModel = (struct ModelLineComponent_o *)v489;
                sub_B0D840(&v486->fields, v489);
                v490 = (UnityEngine_Object_o *)v486->fields.roadModel;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Equality(v490, 0LL, 0LL) )
                {
                  v170 = v486->fields.roadModel;
                  v171 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v491, v492);
                  System_Action___ctor(
                    v171,
                    (Il2CppObject *)v486,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__,
                    0LL);
                  if ( !v170 )
                    goto LABEL_1009;
                  v172 = 3;
                  goto LABEL_719;
                }
              }
              else
              {
                v584 = (QuestAfterAction_StateMain___c__DisplayClass16_7_o *)sub_B0D974(
                                                                               QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo,
                                                                               v112,
                                                                               v113);
                QuestAfterAction_StateMain___c__DisplayClass16_7___ctor(v584, 0LL);
                if ( !v584 )
                  goto LABEL_1009;
                v584->fields.CS___8__locals7 = v100;
                sub_B0D840(&v584->fields.CS___8__locals7, v100);
                CS___8__locals7 = v584->fields.CS___8__locals7;
                if ( !CS___8__locals7 )
                  goto LABEL_1009;
                v586 = CS___8__locals7->fields.that;
                updated = System_Int32__Parse(v106->fields.param, 0LL);
                if ( !v586 )
                  goto LABEL_1009;
                v587 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         v586,
                         1,
                         updated,
                         this,
                         (const MethodInfo_204D3A4 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                v584->fields.roadSprite = v587;
                sub_B0D840(&v584->fields, v587);
                v588 = (UnityEngine_Object_o *)v584->fields.roadSprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Equality(v588, 0LL, 0LL) )
                {
                  v574 = v584->fields.roadSprite;
                  v575 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v589, v590);
                  System_Action___ctor(
                    v575,
                    (Il2CppObject *)v584,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__,
                    0LL);
                  if ( !v574 )
                    goto LABEL_1009;
                  v576 = 3;
                  goto LABEL_926;
                }
              }
              return;
            case 202:
              if ( this->fields.IsMapModel )
              {
                v475 = (QuestAfterAction_StateMain___c__DisplayClass16_8_o *)sub_B0D974(
                                                                               QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo,
                                                                               v112,
                                                                               v113);
                QuestAfterAction_StateMain___c__DisplayClass16_8___ctor(v475, 0LL);
                if ( !v475 )
                  goto LABEL_1009;
                v475->fields.CS___8__locals8 = v100;
                sub_B0D840(&v475->fields.CS___8__locals8, v100);
                CS___8__locals8 = v475->fields.CS___8__locals8;
                if ( !CS___8__locals8 )
                  goto LABEL_1009;
                v477 = CS___8__locals8->fields.that;
                updated = System_Int32__Parse(v106->fields.param, 0LL);
                if ( !v477 )
                  goto LABEL_1009;
                v478 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         v477,
                         1,
                         updated,
                         this,
                         (const MethodInfo_204D3A4 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                v475->fields.roadModel = (struct ModelLineComponent_o *)v478;
                sub_B0D840(&v475->fields, v478);
                v479 = (UnityEngine_Object_o *)v475->fields.roadModel;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Equality(v479, 0LL, 0LL) )
                {
                  v170 = v475->fields.roadModel;
                  v171 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v480, v481);
                  System_Action___ctor(
                    v171,
                    (Il2CppObject *)v475,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__,
                    0LL);
                  if ( !v170 )
                    goto LABEL_1009;
                  v172 = 4;
LABEL_719:
                  ModelLineComponent__SetState(v170, v172, v171, 0LL);
                }
              }
              else
              {
                v567 = (QuestAfterAction_StateMain___c__DisplayClass16_9_o *)sub_B0D974(
                                                                               QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo,
                                                                               v112,
                                                                               v113);
                QuestAfterAction_StateMain___c__DisplayClass16_9___ctor(v567, 0LL);
                if ( !v567 )
                  goto LABEL_1009;
                v567->fields.CS___8__locals9 = v100;
                sub_B0D840(&v567->fields.CS___8__locals9, v100);
                CS___8__locals9 = v567->fields.CS___8__locals9;
                if ( !CS___8__locals9 )
                  goto LABEL_1009;
                v569 = CS___8__locals9->fields.that;
                updated = System_Int32__Parse(v106->fields.param, 0LL);
                if ( !v569 )
                  goto LABEL_1009;
                v570 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         v569,
                         1,
                         updated,
                         this,
                         (const MethodInfo_204D3A4 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                v567->fields.roadSprite = v570;
                sub_B0D840(&v567->fields, v570);
                v571 = (UnityEngine_Object_o *)v567->fields.roadSprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Equality(v571, 0LL, 0LL) )
                {
                  v574 = v567->fields.roadSprite;
                  v575 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v572, v573);
                  System_Action___ctor(
                    v575,
                    (Il2CppObject *)v567,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__,
                    0LL);
                  if ( !v574 )
                    goto LABEL_1009;
                  v576 = 4;
LABEL_926:
                  srcLineSprite__SetState(v574, v576, v575, 0LL);
                }
              }
              return;
            case 203:
              IsMapModel = this->fields.IsMapModel;
              v483 = *p_that;
              updated = System_Int32__Parse(v106->fields.param, 0LL);
              if ( !v483 )
                goto LABEL_1009;
              if ( IsMapModel )
              {
                v484 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         v483,
                         1,
                         updated,
                         this,
                         (const MethodInfo_204D3A4 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v484, 0LL, 0LL);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v484 )
                  goto LABEL_1009;
                ModelLineComponent__SetQuestAfterActionScaleAnimQuick((ModelLineComponent_o *)v484, 0, 0LL);
                mcAtlasP = v484->fields.mcTweenScaleP;
                if ( !mcAtlasP )
                  goto LABEL_1009;
              }
              else
              {
                v591 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                 v483,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_204D3A4 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                updated = UnityEngine_Object__op_Equality(v591, 0LL, 0LL);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v591 )
                  goto LABEL_1009;
                srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v591, 0, 0LL);
                mcAtlasP = v591[5].klass;
                if ( !mcAtlasP )
                  goto LABEL_1009;
              }
              goto LABEL_933;
            case 204:
              v471 = this->fields.IsMapModel;
              v472 = *p_that;
              updated = System_Int32__Parse(v106->fields.param, 0LL);
              if ( !v472 )
                goto LABEL_1009;
              if ( v471 )
              {
                v473 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         v472,
                         1,
                         updated,
                         this,
                         (const MethodInfo_204D3A4 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v473, 0LL, 0LL);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v473 )
                  goto LABEL_1009;
                ModelLineComponent__SetQuestAfterActionScaleAnimQuick((ModelLineComponent_o *)v473, 1, 0LL);
                ModelLineComponent__SetQuestAfterActionColorAnimQuick((ModelLineComponent_o *)v473, 0, 0LL);
                mcTweenScaleP = v473->fields.mcTweenScaleP;
                if ( !mcTweenScaleP )
                  goto LABEL_1009;
              }
              else
              {
                v565 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                 v472,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_204D3A4 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                updated = UnityEngine_Object__op_Equality(v565, 0LL, 0LL);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v565 )
                  goto LABEL_1009;
                srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v565, 1, 0LL);
                srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v565, 0, 0LL);
                mcTweenScaleP = v565[5].klass;
                if ( !mcTweenScaleP )
                  goto LABEL_1009;
              }
              v566 = 2;
              goto LABEL_941;
            case 205:
              v493 = this->fields.IsMapModel;
              v494 = *p_that;
              updated = System_Int32__Parse(v106->fields.param, 0LL);
              if ( !v494 )
                goto LABEL_1009;
              if ( v493 )
              {
                v495 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         v494,
                         1,
                         updated,
                         this,
                         (const MethodInfo_204D3A4 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v495, 0LL, 0LL);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v495 )
                  goto LABEL_1009;
                ModelLineComponent__SetQuestAfterActionScaleAnimQuick((ModelLineComponent_o *)v495, 1, 0LL);
                ModelLineComponent__SetQuestAfterActionColorAnimQuick((ModelLineComponent_o *)v495, 1, 0LL);
                mcTweenScaleP = v495->fields.mcTweenScaleP;
                if ( !mcTweenScaleP )
                  goto LABEL_1009;
              }
              else
              {
                v592 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                 v494,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_204D3A4 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                updated = UnityEngine_Object__op_Equality(v592, 0LL, 0LL);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v592 )
                  goto LABEL_1009;
                srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v592, 1, 0LL);
                srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v592, 1, 0LL);
                mcTweenScaleP = v592[5].klass;
                if ( !mcTweenScaleP )
                  goto LABEL_1009;
              }
              v566 = 1;
LABEL_941:
              mcTweenScaleP[4] = v566;
              goto LABEL_942;
            default:
              return;
          }
      }
    }
    switch ( id )
    {
      case 300:
      case 305:
        v134 = v106->fields.param;
        updated = sub_B0D8BC(char___TypeInfo, 1LL);
        if ( !updated )
          goto LABEL_1009;
        if ( !*(_DWORD *)(updated + 24) )
          goto LABEL_1015;
        *(_WORD *)(updated + 32) = 44;
        if ( !v134 )
          goto LABEL_1009;
        updated = (__int64)System_String__Split(v134, (System_Char_array *)updated, 0LL);
        if ( !updated )
          goto LABEL_1009;
        v135 = *(_QWORD *)(updated + 24);
        v136 = updated;
        if ( (int)v135 <= 0 )
          goto LABEL_440;
        if ( (int)v135 > 2 )
        {
          v509 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v135 = *(_QWORD *)(v136 + 24);
          v137 = v509 * 0.001;
        }
        else
        {
          v137 = 0.5;
        }
        if ( (int)v135 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v136 + 40), 0LL);
          v497 = updated;
          if ( !(unsigned int)*(_QWORD *)(v136 + 24) )
            goto LABEL_1015;
        }
        else
        {
          v497 = 15;
          if ( !(_DWORD)v135 )
            goto LABEL_1015;
        }
        v511 = *p_that;
        updated = System_Int32__Parse(*(System_String_o **)(v136 + 32), 0LL);
        if ( !v511 )
          goto LABEL_1009;
        MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v511, 0, updated, this, 0LL);
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
          if ( !byte_421083D )
          {
            sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v513);
            byte_421083D = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v514 = **(_QWORD **)(updated + 184);
          if ( !v514 )
            goto LABEL_1009;
          updated = *(_QWORD *)(v514 + 256);
          if ( !updated )
            goto LABEL_1009;
          v660.fields.x = x;
          v660.fields.y = y;
          v660.fields.z = z;
          v661 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v660, 0LL);
          x = v661.fields.x;
          y = v661.fields.y;
          z = v661.fields.z;
        }
        if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0LL);
        if ( (updated & 1) == 0 )
        {
          if ( !*(_DWORD *)(v136 + 24) )
            goto LABEL_1015;
          v517 = *(System_String_o **)(v136 + 32);
          if ( v517 )
          {
            updated = System_String__op_Equality(
                        *(System_String_o **)(v136 + 32),
                        (System_String_o *)StringLiteral_1102/*"10703"*/,
                        0LL);
            if ( (updated & 1) != 0 )
            {
              y = y + -50.0;
            }
            else
            {
              updated = System_String__op_Equality(v517, (System_String_o *)StringLiteral_1163/*"30101"*/, 0LL);
              if ( (updated & 1) != 0 )
                y = y + -50.0;
            }
          }
        }
        if ( v106->fields.id != 305 || *(int *)(v136 + 24) < 4 )
        {
          if ( !*p_that )
            goto LABEL_1009;
          mMapCamera = (*p_that)->fields.mMapCamera;
          v507 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v515, v516);
          v508 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__;
          goto LABEL_987;
        }
        if ( !*p_that )
          goto LABEL_1009;
        v605 = (*p_that)->fields.mMapCamera;
        *(_QWORD *)&v649.fields.value.fields.x = &v638;
        v665.fields.x = x;
        v665.fields.y = y;
        *(_QWORD *)&v649.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
        v665.fields.z = z;
        *(_QWORD *)&v638.fields.value.fields.x = 0LL;
        *(_QWORD *)&v638.fields.value.fields.z = 0LL;
        System_Nullable_Vector3____ctor(v649, v665, v516);
        if ( *(_DWORD *)(v136 + 24) <= 3u )
          goto LABEL_1015;
        v612 = System_Single__Parse(*(System_String_o **)(v136 + 56), 0LL);
        p_size = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(p_size, v612, (const MethodInfo_2981438 *)Method_System_Nullable_float___ctor__);
        v609 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v613, v614);
        v610 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__;
        goto LABEL_1004;
      case 301:
      case 306:
        v255 = v106->fields.param;
        updated = sub_B0D8BC(char___TypeInfo, 1LL);
        if ( !updated )
          goto LABEL_1009;
        if ( !*(_DWORD *)(updated + 24) )
          goto LABEL_1015;
        *(_WORD *)(updated + 32) = 44;
        if ( !v255 )
          goto LABEL_1009;
        updated = (__int64)System_String__Split(v255, (System_Char_array *)updated, 0LL);
        if ( !updated )
          goto LABEL_1009;
        v256 = *(_QWORD *)(updated + 24);
        v257 = updated;
        if ( (int)v256 <= 0 )
          goto LABEL_440;
        if ( (int)v256 > 2 )
        {
          v510 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v256 = *(_QWORD *)(v257 + 24);
          v137 = v510 * 0.001;
        }
        else
        {
          v137 = 0.5;
        }
        if ( (int)v256 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v257 + 40), 0LL);
          v497 = updated;
          if ( !(unsigned int)*(_QWORD *)(v257 + 24) )
            goto LABEL_1015;
        }
        else
        {
          v497 = 15;
          if ( !(_DWORD)v256 )
            goto LABEL_1015;
        }
        v518 = *p_that;
        updated = System_Int32__Parse(*(System_String_o **)(v257 + 32), 0LL);
        if ( !v518 )
          goto LABEL_1009;
        v519 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v518, 1, updated, this, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        updated = UnityEngine_Object__op_Equality(v519, 0LL, 0LL);
        if ( (updated & 1) != 0 )
          return;
        if ( this->fields.IsMapModel )
        {
          if ( !v519 )
            goto LABEL_1009;
          updated = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               (UnityEngine_GameObject_o *)v519,
                               (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
          if ( !updated )
            goto LABEL_1009;
          Position = GameObjectExtensions__GetPosition((UnityEngine_GameObject_o *)*(_QWORD *)(updated + 24), 0LL);
          v521 = Position.fields.x;
          v522 = Position.fields.y;
          v523 = Position.fields.z;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_421083D )
          {
            sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v520);
            byte_421083D = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v524 = **(_QWORD **)(updated + 184);
          if ( !v524 )
            goto LABEL_1009;
          updated = *(_QWORD *)(v524 + 256);
          if ( !updated )
            goto LABEL_1009;
          v663.fields.x = v521;
          v663.fields.y = v522;
          v663.fields.z = v523;
          *(UnityEngine_Vector3_o *)&v525 = ScrTerminalMap__ConvertWorldToScreenPosition(
                                              (ScrTerminalMap_o *)updated,
                                              v663,
                                              0LL);
        }
        else
        {
          *(UnityEngine_Vector3_o *)&v525 = GameObjectExtensions__GetLocalPosition(
                                              (UnityEngine_GameObject_o *)v519,
                                              0LL);
        }
        v594 = v525;
        v595 = v526;
        v596 = v527;
        if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0LL);
        if ( (updated & 1) == 0 )
        {
          if ( !*(_DWORD *)(v257 + 24) )
            goto LABEL_1015;
          v599 = *(System_String_o **)(v257 + 32);
          if ( v599 )
          {
            updated = System_String__op_Equality(
                        *(System_String_o **)(v257 + 32),
                        (System_String_o *)StringLiteral_1102/*"10703"*/,
                        0LL);
            if ( (updated & 1) != 0 )
            {
              v595 = v595 + -95.0;
            }
            else
            {
              updated = System_String__op_Equality(v599, (System_String_o *)StringLiteral_1164/*"30102"*/, 0LL);
              if ( (updated & 1) != 0 )
                v595 = v595 + 45.0;
            }
          }
        }
        if ( v106->fields.id != 306 || *(int *)(v257 + 24) < 4 )
        {
          if ( !*p_that )
            goto LABEL_1009;
          v615 = (*p_that)->fields.mMapCamera;
          v611 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v597, v598);
          System_Action___ctor(
            v611,
            (Il2CppObject *)v100,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__,
            0LL);
          if ( !v615 )
            goto LABEL_1009;
          v336 = v615;
          v337 = v594;
          v338 = v595;
          v339 = v596;
          goto LABEL_999;
        }
        if ( !*p_that )
          goto LABEL_1009;
        v605 = (*p_that)->fields.mMapCamera;
        *(_QWORD *)&v650.fields.value.fields.x = &v638;
        v666.fields.x = v594;
        v666.fields.y = v595;
        *(_QWORD *)&v650.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
        v666.fields.z = v596;
        *(_QWORD *)&v638.fields.value.fields.x = 0LL;
        *(_QWORD *)&v638.fields.value.fields.z = 0LL;
        System_Nullable_Vector3____ctor(v650, v666, v598);
        if ( *(_DWORD *)(v257 + 24) <= 3u )
          goto LABEL_1015;
        v616 = System_Single__Parse(*(System_String_o **)(v257 + 56), 0LL);
        v644 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v644, v616, (const MethodInfo_2981438 *)Method_System_Nullable_float___ctor__);
        v609 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v617, v618);
        v610 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__;
LABEL_1004:
        v619 = v609;
        System_Action___ctor(v609, (Il2CppObject *)v100, *v610, 0LL);
        if ( !v605 )
          goto LABEL_1009;
        v653 = v638;
        v647 = size;
        v620 = v605;
        v621 = v137;
        v622 = v497;
        v623 = v619;
        goto LABEL_1014;
      case 302:
      case 307:
        v230 = v106->fields.param;
        updated = sub_B0D8BC(char___TypeInfo, 1LL);
        if ( !updated )
          goto LABEL_1009;
        if ( !*(_DWORD *)(updated + 24) )
          goto LABEL_1015;
        *(_WORD *)(updated + 32) = 44;
        if ( !v230 )
          goto LABEL_1009;
        updated = (__int64)System_String__Split(v230, (System_Char_array *)updated, 0LL);
        if ( !updated )
          goto LABEL_1009;
        v231 = *(_QWORD *)(updated + 24);
        v232 = updated;
        if ( (int)v231 <= 0 )
          goto LABEL_440;
        if ( (int)v231 > 2 )
        {
          v496 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v231 = *(_QWORD *)(v232 + 24);
          v137 = v496 * 0.001;
        }
        else
        {
          v137 = 0.5;
        }
        if ( (int)v231 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v232 + 40), 0LL);
          v497 = updated;
          if ( !(unsigned int)*(_QWORD *)(v232 + 24) )
            goto LABEL_1015;
        }
        else
        {
          v497 = 15;
          if ( !(_DWORD)v231 )
            goto LABEL_1015;
        }
        v498 = *p_that;
        updated = System_Int32__Parse(*(System_String_o **)(v232 + 32), 0LL);
        if ( !v498 )
          goto LABEL_1009;
        v499 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v498, 2, updated, this, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(v499, 0LL, 0LL) )
          return;
        v656 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v499, 0LL);
        x = v656.fields.x;
        y = v656.fields.y;
        z = v656.fields.z;
        if ( this->fields.IsMapModel )
        {
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_421083D )
          {
            sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v500);
            byte_421083D = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v505 = **(_QWORD **)(updated + 184);
          if ( !v505 )
            goto LABEL_1009;
          updated = *(_QWORD *)(v505 + 256);
          if ( !updated )
            goto LABEL_1009;
          v657.fields.x = x;
          v657.fields.y = y;
          v657.fields.z = z;
          v658 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v657, 0LL);
          x = v658.fields.x;
          y = v658.fields.y;
          z = v658.fields.z;
        }
        if ( v106->fields.id != 307 || *(int *)(v232 + 24) < 4 )
        {
          if ( !*p_that )
            goto LABEL_1009;
          mMapCamera = (*p_that)->fields.mMapCamera;
          v507 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v500, v501);
          v508 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__14__;
LABEL_987:
          v611 = v507;
          System_Action___ctor(v507, (Il2CppObject *)v100, *v508, 0LL);
          if ( !mMapCamera )
            goto LABEL_1009;
          v336 = mMapCamera;
          v337 = x;
          v338 = y;
          v339 = z;
LABEL_999:
          v340 = v137;
          v341 = v497;
          v342 = v611;
          goto LABEL_1000;
        }
        if ( !*p_that )
          goto LABEL_1009;
        v605 = (*p_that)->fields.mMapCamera;
        *(_QWORD *)&v648.fields.value.fields.x = &v638;
        v664.fields.x = x;
        v664.fields.y = y;
        *(_QWORD *)&v648.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
        v664.fields.z = z;
        *(_QWORD *)&v638.fields.value.fields.x = 0LL;
        *(_QWORD *)&v638.fields.value.fields.z = 0LL;
        System_Nullable_Vector3____ctor(v648, v664, v501);
        if ( *(_DWORD *)(v232 + 24) <= 3u )
          goto LABEL_1015;
        v606 = System_Single__Parse(*(System_String_o **)(v232 + 56), 0LL);
        v642 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v642, v606, (const MethodInfo_2981438 *)Method_System_Nullable_float___ctor__);
        v609 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v607, v608);
        v610 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__13__;
        goto LABEL_1004;
      case 303:
      case 308:
        v233 = v106->fields.param;
        updated = sub_B0D8BC(char___TypeInfo, 1LL);
        if ( !updated )
          goto LABEL_1009;
        if ( !*(_DWORD *)(updated + 24) )
          goto LABEL_1015;
        *(_WORD *)(updated + 32) = 44;
        if ( !v233 )
          goto LABEL_1009;
        updated = (__int64)System_String__Split(v233, (System_Char_array *)updated, 0LL);
        if ( !updated )
          goto LABEL_1009;
        v235 = updated;
        if ( *(int *)(updated + 24) < 4 )
          goto LABEL_440;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_42121EB )
        {
          sub_B0D8A4(&TerminalPramsManager_TypeInfo, v234);
          byte_42121EB = 1;
        }
        updated = (__int64)TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          updated = (__int64)TerminalPramsManager_TypeInfo;
        }
        if ( *(_BYTE *)(*(_QWORD *)(updated + 184) + 88LL) )
          goto LABEL_440;
        if ( *(_DWORD *)(v235 + 24) <= 2u )
          goto LABEL_1015;
        v236 = System_Single__Parse(*(System_String_o **)(v235 + 48), 0LL) * 0.001;
        v237 = v236 >= 0.0 ? v236 : 0.5;
        if ( *(_DWORD *)(v235 + 24) <= 3u )
          goto LABEL_1015;
        v239 = System_Int32__Parse(*(System_String_o **)(v235 + 56), 0LL);
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_421083D )
        {
          sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v238);
          byte_421083D = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v240 = **(_QWORD **)(updated + 184);
        if ( !v240 )
          goto LABEL_1009;
        if ( !*(_DWORD *)(v235 + 24) )
          goto LABEL_1015;
        v241 = *(ScrTerminalMap_o **)(v240 + 256);
        v242 = System_Single__Parse(*(System_String_o **)(v235 + 32), 0LL);
        if ( *(_DWORD *)(v235 + 24) <= 1u )
          goto LABEL_1015;
        v243 = v242;
        v244 = System_Single__Parse(*(System_String_o **)(v235 + 40), 0LL);
        if ( !v241 )
          goto LABEL_1009;
        *(UnityEngine_Vector3_o *)&v247 = ScrTerminalMap__LocalPosFromCoord(v241, v243, v244, 0.0, 0.0, 0LL);
        v250 = v247;
        v251 = v248;
        v252 = v249;
        if ( v106->fields.id != 308 || *(int *)(v235 + 24) < 5 )
        {
          if ( !*p_that )
            goto LABEL_1009;
          v253 = (*p_that)->fields.mMapCamera;
          v254 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v245, v246);
          System_Action___ctor(
            v254,
            (Il2CppObject *)v100,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__16__,
            0LL);
          if ( !v253 )
            goto LABEL_1009;
LABEL_478:
          v336 = v253;
          v337 = v250;
          v338 = v251;
          v339 = v252;
          v340 = v237;
          v341 = v239;
          v342 = v254;
LABEL_1000:
          MapCamera__StartAutoMove(v336, *(UnityEngine_Vector3_o *)&v337, v340, v341, v342, 0LL);
          return;
        }
        if ( !*p_that )
          goto LABEL_1009;
        v624 = (*p_that)->fields.mMapCamera;
        *(_QWORD *)&v651.fields.value.fields.x = &v638;
        *(_QWORD *)&v651.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
        v638 = (System_Nullable_Vector3__o)0LL;
        System_Nullable_Vector3____ctor(v651, *(UnityEngine_Vector3_o *)&v247, v246);
        if ( *(_DWORD *)(v235 + 24) <= 4u )
          goto LABEL_1015;
        v625 = System_Single__Parse(*(System_String_o **)(v235 + 64), 0LL);
        v645 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v645, v625, (const MethodInfo_2981438 *)Method_System_Nullable_float___ctor__);
        v628 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v626, v627);
        System_Action___ctor(
          v628,
          (Il2CppObject *)v100,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__15__,
          0LL);
        if ( !v624 )
          goto LABEL_1009;
LABEL_1013:
        v653 = v638;
        v647 = size;
        v620 = v624;
        v621 = v237;
        v622 = v239;
        v623 = v628;
LABEL_1014:
        MapCamera__StartAutoWork(v620, v621, v653, v647, v622, v623, 0LL);
        return;
      case 304:
        v307 = v106->fields.param;
        updated = sub_B0D8BC(char___TypeInfo, 1LL);
        if ( !updated )
          goto LABEL_1009;
        if ( !*(_DWORD *)(updated + 24) )
          goto LABEL_1015;
        *(_WORD *)(updated + 32) = 44;
        if ( !v307 )
          goto LABEL_1009;
        updated = (__int64)System_String__Split(v307, (System_Char_array *)updated, 0LL);
        if ( !updated )
          goto LABEL_1009;
        v308 = *(_DWORD *)(updated + 24);
        v309 = updated;
        if ( v308 <= 1 )
          goto LABEL_440;
        v310 = System_Single__Parse(*(System_String_o **)(updated + 32), 0LL);
        if ( *(_DWORD *)(v309 + 24) <= 1u )
          goto LABEL_1015;
        v311 = v310;
        v314 = System_Single__Parse(*(System_String_o **)(v309 + 40), 0LL);
        if ( !*p_that )
          goto LABEL_1009;
        v315 = (*p_that)->fields.mMapCamera;
        v316 = v314 * 0.001;
        if ( v316 >= 0.0 )
          v317 = v316;
        else
          v317 = 0.5;
        if ( v308 < 3 )
        {
          v318 = 5;
        }
        else
        {
          if ( *(_DWORD *)(v309 + 24) <= 2u )
            goto LABEL_1015;
          v318 = System_Int32__Parse(*(System_String_o **)(v309 + 48), 0LL);
        }
        v593 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v312, v313);
        System_Action___ctor(
          v593,
          (Il2CppObject *)v100,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__17__,
          0LL);
        if ( v315 )
        {
          MapCamera__StartAutoZoom(v315, v311, v317, v318, v593, 0LL);
          return;
        }
        goto LABEL_1016;
      default:
        if ( id == 350 )
        {
          v258 = v106->fields.param;
          MyFsmP = sub_B0D8BC(char___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1016;
          if ( *(_DWORD *)(MyFsmP + 24) )
          {
            *(_WORD *)(MyFsmP + 32) = 44;
            if ( v258 )
            {
              MyFsmP = (__int64)System_String__Split(v258, (System_Char_array *)MyFsmP, 0LL);
              if ( MyFsmP )
              {
                v259 = MyFsmP;
                if ( *(int *)(MyFsmP + 24) <= 0 )
                  goto LABEL_440;
                v260 = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
                if ( v260 < 1 )
                  goto LABEL_440;
                v263 = v260;
                v264 = 0.5;
                if ( *(int *)(v259 + 24) > 1 )
                {
                  v265 = System_Int32__Parse(*(System_String_o **)(v259 + 40), 0LL);
                  if ( *(int *)(v259 + 24) >= 3 )
                    v264 = System_Single__Parse(*(System_String_o **)(v259 + 48), 0LL) * 0.001;
                }
                else
                {
                  v265 = 15;
                }
                if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                }
                if ( !byte_421083D )
                {
                  sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v261);
                  byte_421083D = 1;
                }
                MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
                if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v602 = **(_QWORD **)(MyFsmP + 184);
                if ( v602 )
                {
                  v603 = *(ScrTerminalMap_o **)(v602 + 256);
                  v604 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v261, v262);
                  System_Action___ctor(
                    v604,
                    (Il2CppObject *)v100,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__18__,
                    0LL);
                  if ( v603 )
                  {
                    ScrTerminalMap__RequestMapMove_23062952(v603, v263, v264, v265, v604, 0LL);
                    return;
                  }
                }
              }
            }
            goto LABEL_1016;
          }
          goto LABEL_1018;
        }
        if ( (unsigned int)(id - 351) >= 2 )
          return;
        v319 = v106->fields.param;
        MyFsmP = sub_B0D8BC(char___TypeInfo, 1LL);
        if ( !MyFsmP )
          goto LABEL_1016;
        if ( !*(_DWORD *)(MyFsmP + 24) )
          goto LABEL_1018;
        *(_WORD *)(MyFsmP + 32) = 44;
        if ( !v319 )
          goto LABEL_1016;
        MyFsmP = (__int64)System_String__Split(v319, (System_Char_array *)MyFsmP, 0LL);
        if ( !MyFsmP )
          goto LABEL_1016;
        v320 = MyFsmP;
        if ( *(int *)(MyFsmP + 24) <= 4 )
          goto LABEL_440;
        v321 = System_Single__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
        if ( *(_DWORD *)(v320 + 24) <= 1u )
          goto LABEL_1018;
        v322 = v321;
        v323 = System_Single__Parse(*(System_String_o **)(v320 + 40), 0LL);
        if ( *(_DWORD *)(v320 + 24) <= 2u )
          goto LABEL_1018;
        v324 = v323;
        v325 = System_Single__Parse(*(System_String_o **)(v320 + 48), 0LL);
        if ( *(_DWORD *)(v320 + 24) <= 3u )
          goto LABEL_1018;
        v326 = v325;
        v327 = System_Single__Parse(*(System_String_o **)(v320 + 56), 0LL);
        if ( *(_DWORD *)(v320 + 24) <= 4u )
          goto LABEL_1018;
        v328 = v327;
        v239 = System_Int32__Parse(*(System_String_o **)(v320 + 64), 0LL);
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_421083D )
        {
          sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v329);
          byte_421083D = 1;
        }
        MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v330 = **(_QWORD **)(MyFsmP + 184);
        if ( !v330 )
          goto LABEL_1016;
        MyFsmP = *(_QWORD *)(v330 + 256);
        if ( !MyFsmP )
          goto LABEL_1016;
        v654.fields.y = v324;
        v654.fields.z = v326;
        v237 = v328 * 0.001;
        v654.fields.x = v322;
        *(UnityEngine_Vector3_o *)&v333 = ScrTerminalMap__ConvertLocalToScreenPosition(
                                            (ScrTerminalMap_o *)MyFsmP,
                                            v654,
                                            0LL);
        v250 = v333;
        v251 = v334;
        v252 = v335;
        if ( v106->fields.id != 352 || *(int *)(v320 + 24) < 6 )
        {
          if ( !*p_that )
            goto LABEL_1016;
          v253 = (*p_that)->fields.mMapCamera;
          v254 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v331, v332);
          System_Action___ctor(
            v254,
            (Il2CppObject *)v100,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__20__,
            0LL);
          if ( !v253 )
            goto LABEL_1016;
          goto LABEL_478;
        }
        if ( !*p_that )
          goto LABEL_1016;
        v624 = (*p_that)->fields.mMapCamera;
        *(_QWORD *)&v652.fields.value.fields.x = &v638;
        *(_QWORD *)&v652.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
        v638 = (System_Nullable_Vector3__o)0LL;
        System_Nullable_Vector3____ctor(v652, *(UnityEngine_Vector3_o *)&v333, v332);
        if ( *(_DWORD *)(v320 + 24) <= 5u )
          goto LABEL_1018;
        v629 = System_Single__Parse(*(System_String_o **)(v320 + 72), 0LL);
        v646 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v646, v629, (const MethodInfo_2981438 *)Method_System_Nullable_float___ctor__);
        v628 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v630, v631);
        System_Action___ctor(
          v628,
          (Il2CppObject *)v100,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__19__,
          0LL);
        if ( !v624 )
          goto LABEL_1016;
        goto LABEL_1013;
    }
  }
  if ( id <= 604 )
  {
    if ( id > 540 )
    {
      switch ( id )
      {
        case 600:
          v127 = (System_String_o *)StringLiteral_1/*""*/;
          v128 = System_String__Concat_43849904((System_String_o *)StringLiteral_10913/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v106->fields.param, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v129 = LocalizationManager__Get(v128, 0LL);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v133 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v131, v132);
          System_Action___ctor(
            v133,
            (Il2CppObject *)v100,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__36__,
            0LL);
          if ( !Instance )
            goto LABEL_1016;
          CommonUI__OpenNotificationDialog(Instance, v127, v129, v133, 210, 0, 0, 0, 1, 0, 0, 0, 0LL, 0LL);
          return;
        case 601:
          v292 = (System_String_o *)StringLiteral_1/*""*/;
          MyFsmP = sub_B0D8BC(string___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1016;
          v293 = (System_String_array *)MyFsmP;
          MyFsmP = StringLiteral_68/*"\r\n"*/;
          if ( StringLiteral_68/*"\r\n"*/ )
          {
            MyFsmP = sub_B0D964(StringLiteral_68/*"\r\n"*/, v293->obj.klass->_1.element_class);
            if ( !MyFsmP )
            {
              v636 = sub_B0D99C();
              sub_B0D948(v636, 0LL);
            }
            v294 = StringLiteral_68/*"\r\n"*/;
          }
          else
          {
            v294 = 0LL;
          }
          if ( !v293->max_length )
            goto LABEL_1018;
          v293->m_Items[0] = (System_String_o *)v294;
          sub_B0D840(v293->m_Items, v294);
          MyFsmP = (__int64)v106->fields.param;
          if ( !MyFsmP )
            goto LABEL_1016;
          MyFsmP = (__int64)System_String__Split_43912524((System_String_o *)MyFsmP, v293, 0, 0LL);
          if ( !MyFsmP )
            goto LABEL_1016;
          v531 = *(_DWORD *)(MyFsmP + 24);
          if ( v531 <= 0 )
            goto LABEL_440;
          v532 = *(System_String_o **)(MyFsmP + 32);
          if ( v531 == 1 )
          {
            v533 = *(System_String_o **)(MyFsmP + 32);
            v532 = v292;
          }
          else
          {
            v533 = *(System_String_o **)(MyFsmP + 40);
          }
          v539 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v542 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v540, v541);
          System_Action___ctor(
            v542,
            (Il2CppObject *)v100,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__37__,
            0LL);
          if ( !v539 )
            goto LABEL_1017;
          CommonUI__OpenNotificationDialog(v539, v532, v533, v542, 210, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
          return;
        case 602:
          v282 = (System_String_o *)StringLiteral_1/*""*/;
          v283 = System_String__Concat_43849904((System_String_o *)StringLiteral_10913/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v106->fields.param, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v284 = LocalizationManager__Get(v283, 0LL);
          v285 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v288 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v286, v287);
          System_Action___ctor(
            v288,
            (Il2CppObject *)v100,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__38__,
            0LL);
          if ( !v285 )
            goto LABEL_1017;
          CommonUI__OpenNotificationDialog_17017780(
            v285,
            v282,
            v284,
            v288,
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
          v289 = (System_String_o *)StringLiteral_1/*""*/;
          updated = sub_B0D8BC(string___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_1017;
          v290 = (System_String_array *)updated;
          updated = StringLiteral_68/*"\r\n"*/;
          if ( StringLiteral_68/*"\r\n"*/ )
          {
            updated = sub_B0D964(StringLiteral_68/*"\r\n"*/, v290->obj.klass->_1.element_class);
            if ( !updated )
            {
              v635 = sub_B0D99C();
              sub_B0D948(v635, 0LL);
            }
            v291 = StringLiteral_68/*"\r\n"*/;
          }
          else
          {
            v291 = 0LL;
          }
          if ( !v290->max_length )
            goto LABEL_1019;
          v290->m_Items[0] = (System_String_o *)v291;
          sub_B0D840(v290->m_Items, v291);
          updated = (__int64)v106->fields.param;
          if ( !updated )
            goto LABEL_1017;
          updated = (__int64)System_String__Split_43912524((System_String_o *)updated, v290, 0, 0LL);
          if ( !updated )
            goto LABEL_1017;
          v528 = *(_DWORD *)(updated + 24);
          if ( v528 <= 0 )
            goto LABEL_440;
          v529 = *(System_String_o **)(updated + 32);
          if ( v528 == 1 )
          {
            v530 = *(System_String_o **)(updated + 32);
            v529 = v289;
          }
          else
          {
            v530 = *(System_String_o **)(updated + 40);
          }
          v535 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v538 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v536, v537);
          System_Action___ctor(
            v538,
            (Il2CppObject *)v100,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__39__,
            0LL);
          if ( !v535 )
            goto LABEL_1017;
          CommonUI__OpenNotificationDialog_17017780(
            v535,
            v529,
            v530,
            v538,
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
          v275 = (System_String_o *)StringLiteral_1/*""*/;
          v276 = System_String__Concat_43849904((System_String_o *)StringLiteral_10913/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v106->fields.param, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v277 = LocalizationManager__Get(v276, 0LL);
          v278 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v281 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v279, v280);
          System_Action___ctor(
            v281,
            (Il2CppObject *)v100,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__40__,
            0LL);
          if ( !v278 )
            goto LABEL_1017;
          CommonUI__OpenNotificationDialog_17017780(
            v278,
            v275,
            v277,
            v281,
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
            goto LABEL_942;
          if ( id != 560 )
            return;
          v173 = v106->fields.param;
          updated = sub_B0D8BC(char___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_1017;
          if ( !*(_DWORD *)(updated + 24) )
            goto LABEL_1019;
          *(_WORD *)(updated + 32) = 44;
          if ( !v173 )
            goto LABEL_1017;
          updated = (__int64)System_String__Split(v173, (System_Char_array *)updated, 0LL);
          if ( !updated )
            goto LABEL_1017;
          v176 = *(_QWORD *)(updated + 24);
          if ( !v176 )
            goto LABEL_121;
          if ( !(_DWORD)v176 )
            goto LABEL_1019;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          LODWORD(v176) = (int)updated > 0;
LABEL_121:
          if ( !*p_that )
            goto LABEL_1017;
          v177 = *p_that;
          TitleInfoCtrlCallback_k__BackingField = (*p_that)->fields._TitleInfoCtrlCallback_k__BackingField;
          if ( !(_DWORD)v176 )
          {
            v469 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v174, v175);
            System_Action___ctor(v469, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( TitleInfoCtrlCallback_k__BackingField )
            {
              QuestAfterAction_TitleInfoControlCallback__Start(TitleInfoCtrlCallback_k__BackingField, v469, v470);
              return;
            }
            goto LABEL_1017;
          }
          if ( !TitleInfoCtrlCallback_k__BackingField )
            goto LABEL_1017;
          QuestAfterAction_TitleInfoControlCallback__Start(
            v177->fields._TitleInfoCtrlCallback_k__BackingField,
            0LL,
            v175);
          break;
      }
      goto LABEL_440;
    }
    if ( id != 530 )
    {
      if ( id != 540 )
        return;
      v147 = v106->fields.param;
      updated = sub_B0D8BC(char___TypeInfo, 1LL);
      if ( !updated )
        goto LABEL_1017;
      if ( !*(_DWORD *)(updated + 24) )
        goto LABEL_1019;
      *(_WORD *)(updated + 32) = 44;
      if ( !v147 )
        goto LABEL_1017;
      updated = (__int64)System_String__Split(v147, (System_Char_array *)updated, 0LL);
      if ( !updated )
        goto LABEL_1017;
      v148 = updated;
      if ( !*(_DWORD *)(updated + 24) )
        goto LABEL_1019;
      v150 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
      if ( *(int *)(v148 + 24) < 2 )
      {
        v151 = -1;
      }
      else
      {
        v151 = System_Int32__Parse(*(System_String_o **)(v148 + 40), 0LL);
        if ( *(int *)(v148 + 24) >= 3 )
        {
          v152 = System_Int32__Parse(*(System_String_o **)(v148 + 48), 0LL);
LABEL_330:
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_4210848 )
          {
            sub_B0D8A4(&TerminalPramsManager_TypeInfo, v149);
            byte_4210848 = 1;
          }
          v266 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v266 = TerminalPramsManager_TypeInfo;
          }
          v266->static_fields->_IsAutoResume_k__BackingField = 1;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_421083D )
          {
            sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v149);
            byte_421083D = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v267 = **(_QWORD **)(updated + 184);
          if ( v267 )
          {
            updated = *(_QWORD *)(v267 + 256);
            if ( updated )
            {
              if ( !ScrTerminalMap__RequestMapChange((ScrTerminalMap_o *)updated, v150, v151, v152, 0LL) )
              {
                if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                }
                if ( !byte_4210848 )
                {
                  sub_B0D8A4(&TerminalPramsManager_TypeInfo, v268);
                  byte_4210848 = 1;
                }
                v269 = TerminalPramsManager_TypeInfo;
                if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v269 = TerminalPramsManager_TypeInfo;
                }
                v269->static_fields->_IsAutoResume_k__BackingField = 0;
                goto LABEL_942;
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
          goto LABEL_1017;
        }
      }
      v152 = -1;
      goto LABEL_330;
    }
    v179 = System_Int32__Parse(v106->fields.param, 0LL);
    MyFsmP = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( MyFsmP )
    {
      MyFsmP = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)MyFsmP,
                          (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( MyFsmP )
      {
        v180 = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)MyFsmP,
                                  v179,
                                  (const MethodInfo_2669BD4 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
        }
        MyFsmP = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( MyFsmP )
        {
          MyFsmP = (__int64)QuestTree__GetQuestInfo((QuestTree_o *)MyFsmP, v179, 0LL);
          if ( MyFsmP )
          {
            v182 = MyFsmP;
            if ( *(_DWORD *)(MyFsmP + 32) != 1 )
            {
              QuestAfterAction_StateMain__ForceEndAnim(this, 1, v181);
              return;
            }
            if ( v180 )
            {
              if ( !QuestEntity__HasFlag(v180, 2LL, 0LL) )
                return;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              }
              if ( !byte_4210843 )
              {
                sub_B0D8A4(&TerminalPramsManager_TypeInfo, v183);
                byte_4210843 = 1;
              }
              v184 = TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v184 = TerminalPramsManager_TypeInfo;
              }
              v184->static_fields->_QuestId_k__BackingField = v179;
              v185 = *(_DWORD *)(v182 + 44);
              if ( !byte_4210844 )
              {
                sub_B0D8A4(&TerminalPramsManager_TypeInfo, v183);
                v184 = TerminalPramsManager_TypeInfo;
                byte_4210844 = 1;
              }
              if ( (BYTE3(v184->vtable._0_Equals.methodPtr) & 4) != 0 && !v184->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v184);
                v184 = TerminalPramsManager_TypeInfo;
              }
              v184->static_fields->_PhaseCnt_k__BackingField = v185;
              if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
              }
              MyFsmP = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
              v188 = (clsQuestCheck_o *)MyFsmP;
              v189 = QuestAfterAction_StateMain___c_TypeInfo;
              if ( (BYTE3(QuestAfterAction_StateMain___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
                v189 = QuestAfterAction_StateMain___c_TypeInfo;
              }
              v190 = v189->static_fields;
              _9__16_33 = v190->__9__16_33;
              if ( !_9__16_33 )
              {
                if ( (BYTE3(v189->vtable._0_Equals.methodPtr) & 4) != 0 && !v189->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v189);
                  v190 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
                }
                v192 = (Il2CppObject *)v190->__9;
                _9__16_33 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v186, v187);
                System_Action___ctor(_9__16_33, v192, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_33__, 0LL);
                v193 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
                v193->__9__16_33 = _9__16_33;
                sub_B0D840(&v193->__9__16_33, _9__16_33);
              }
              if ( v188 )
              {
                clsQuestCheck__PlayQuestStartAction(v188, _9__16_33, 0LL);
                return;
              }
            }
          }
        }
      }
    }
    goto LABEL_1016;
  }
  if ( id <= 801 )
  {
    if ( id != 700 )
    {
      if ( id != 800 )
      {
        if ( id != 801 )
          return;
        v138 = v106->fields.param;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSe(v138, 0LL);
LABEL_942:
        ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
          this,
          this->klass->vtable._15_onEnd.methodPtr);
        goto LABEL_943;
      }
      v201 = *p_that;
      if ( !*p_that || (updated = (__int64)v201->fields.svtVoices) == 0 )
LABEL_1017:
        sub_B0D97C(updated);
      if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
             (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)updated,
             v201->fields.commandIdx,
             &value,
             (const MethodInfo_2E9214C *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__) )
      {
        updated = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
        if ( !updated )
          goto LABEL_1017;
        AutomatedAction__TerminateMissionAction((AutomatedAction_o *)updated, 0LL);
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_421083D )
        {
          sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v202);
          byte_421083D = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v203 = **(_QWORD **)(updated + 184);
        if ( !v203 )
          goto LABEL_1017;
        if ( !*(_QWORD *)(v203 + 448) )
          goto LABEL_204;
        if ( (*(_BYTE *)(updated + 307) & 4) != 0 && !*(_DWORD *)(updated + 224) )
          j_il2cpp_runtime_class_init_0(updated);
        if ( !byte_421083D )
        {
          sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v202);
          byte_421083D = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v204 = **(_QWORD **)(updated + 184);
        if ( !v204 )
          goto LABEL_1017;
        v205 = *(_QWORD *)(v204 + 448);
        if ( !v205 )
          goto LABEL_1017;
        updated = *(unsigned int *)(v205 + 48);
        if ( !(_DWORD)updated )
        {
LABEL_204:
          if ( !value )
            goto LABEL_1017;
          updated = (unsigned int)value->fields.viewpoint;
        }
        if ( (int)updated < 1 )
        {
          if ( !value )
            goto LABEL_1017;
          v534 = *(System_String_o **)&value->fields.eval;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playVoice(v534, 0LL);
        }
        else
        {
          updated = (__int64)ServantVoiceEntity__getVoiceAssetName_29941680(updated, 0LL);
          if ( !value )
            goto LABEL_1017;
          v206 = (System_String_o *)updated;
          v207 = *(System_String_o **)&value->fields.eval;
          v208 = SeManager_TypeInfo;
          if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SeManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
            v208 = SeManager_TypeInfo;
          }
          DEFAULT_VOLUME = v208->static_fields->DEFAULT_VOLUME;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playVoice_24977528(v206, v207, DEFAULT_VOLUME, 0LL, 0LL);
        }
      }
LABEL_440:
      ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
        this,
        this->klass->vtable._15_onEnd.methodPtr);
      return;
    }
    v224 = v106->fields.param;
    updated = sub_B0D8BC(char___TypeInfo, 1LL);
    if ( !updated )
      goto LABEL_1017;
    if ( *(_DWORD *)(updated + 24) )
    {
      *(_WORD *)(updated + 32) = 44;
      if ( !v224 )
        goto LABEL_1017;
      updated = (__int64)System_String__Split(v224, (System_Char_array *)updated, 0LL);
      if ( !updated )
        goto LABEL_1017;
      v225 = updated;
      if ( *(_DWORD *)(updated + 24) )
      {
        v228 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
        if ( *(int *)(v225 + 24) >= 2 )
          v229 = System_Int32__Parse(*(System_String_o **)(v225 + 40), 0LL) + 1;
        else
          v229 = 0;
        v306 = (SceneJumpInfo_o *)sub_B0D974(SceneJumpInfo_TypeInfo, v226, v227);
        SceneJumpInfo___ctor_16651724(v306, (System_String_o *)StringLiteral_1/*""*/, v228, v229, 0LL);
        updated = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !updated )
          goto LABEL_1017;
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)updated, 72, 1, (Il2CppObject *)v306, 0LL);
        goto LABEL_440;
      }
    }
LABEL_1019:
    v634 = sub_B0D9A8(updated);
    sub_B0D948(v634, 0LL);
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
        goto LABEL_942;
      }
      goto LABEL_1017;
    case 851:
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_421083D )
      {
        sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v112);
        byte_421083D = 1;
      }
      v194 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v194 = TerminalSceneComponent_TypeInfo;
      }
      v195 = v194->static_fields->mInstance;
      updated = (__int64)QuestAfterAction_Command__GetBgmName(v106, v112);
      if ( v195 )
      {
        TerminalSceneComponent__playBgm(v195, (System_String_o *)updated, 0LL);
        if ( *p_that )
        {
          (*p_that)->fields.isRequestedStopBgm = 0;
          goto LABEL_942;
        }
      }
      goto LABEL_1017;
    case 900:
      v115 = (float)System_Int32__Parse(v106->fields.param, 0LL) / 1000.0;
      if ( v115 > 0.0 )
      {
        this->fields.waitTime = v115;
        this->fields.waitStartTime = UnityEngine_Time__get_realtimeSinceStartup(0LL);
        return;
      }
      goto LABEL_942;
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
  TerminalSceneComponent_c *screenCollider; // x0
  struct QuestAfterAction_o *v6; // x8
  __int64 v7; // x1
  struct TerminalSceneComponent_o *mInstance; // x8

  if ( (byte_42121D1 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, that);
    byte_42121D1 = 1;
  }
  this->fields.that = that;
  sub_B0D840(&this->fields, that);
  v6 = this->fields.that;
  if ( !v6 )
    goto LABEL_16;
  screenCollider = (TerminalSceneComponent_c *)v6->fields.screenCollider;
  if ( !screenCollider )
    goto LABEL_16;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)screenCollider, 1, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, v7);
    byte_421083D = 1;
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
    sub_B0D97C(screenCollider);
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
    sub_B0D97C(this);
  return that->fields.commandBuf;
}


int32_t __fastcall QuestAfterAction_StateMain__get_CommandIndex(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_B0D97C(this);
  return that->fields.commandIdx;
}


UnityEngine_GameObject_o *__fastcall QuestAfterAction_StateMain__get_SubGimmickRoot(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  if ( (byte_42121D0 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, method);
    byte_42121D0 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, method);
    byte_421083D = 1;
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
    sub_B0D97C(v2);
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

  if ( (byte_42121D3 & 1) == 0 )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, deleteKey);
    sub_B0D8A4(&StringLiteral_16336/*"afterActionBk"*/, v5);
    byte_42121D3 = 1;
  }
  if ( deleteKey )
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16336/*"afterActionBk"*/, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_421083D )
  {
    sub_B0D8A4(&TerminalSceneComponent_TypeInfo, deleteKey);
    byte_421083D = 1;
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
        (mInstance = (TerminalSceneComponent_o *)this->fields.that) == 0LL) )
  {
    sub_B0D97C(mInstance);
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
    sub_B0D97C(this);
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
  Il2CppObject *v3; // x19
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0

  if ( (byte_4211F9D & 1) == 0 )
  {
    sub_B0D8A4(&QuestAfterAction_StateMain___c_TypeInfo, v1);
    byte_4211F9D = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(QuestAfterAction_StateMain___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
  static_fields->__9 = (struct QuestAfterAction_StateMain___c_o *)v3;
  sub_B0D840(static_fields, v3);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0
  int32_t WarId_k__BackingField; // w19
  int32_t QuestId_k__BackingField; // w20
  QuestAfterAction_StateMain___c_c *v10; // x8
  int32_t PhaseCnt_k__BackingField; // w21
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x9
  int32_t v13; // w21
  ScriptManager_CallbackFunc_o *_9__16_34; // x22
  Il2CppObject *v15; // x23
  struct QuestAfterAction_StateMain___c_StaticFields *v16; // x0

  if ( (byte_4211F9E & 1) == 0 )
  {
    sub_B0D8A4(&ScriptManager_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&ScriptManager_TypeInfo, v3);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v4);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_34__, v5);
    sub_B0D8A4(&QuestAfterAction_StateMain___c_TypeInfo, v6);
    byte_4211F9E = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_421083F )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    byte_421083F = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v7->static_fields->_WarId_k__BackingField;
  if ( !byte_4210852 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4210852 = 1;
  }
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v7->static_fields->_QuestId_k__BackingField;
  if ( !byte_4210853 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, method);
    v7 = TerminalPramsManager_TypeInfo;
    byte_4210853 = 1;
  }
  if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v10 = QuestAfterAction_StateMain___c_TypeInfo;
  PhaseCnt_k__BackingField = v7->static_fields->_PhaseCnt_k__BackingField;
  if ( (BYTE3(QuestAfterAction_StateMain___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
    v10 = QuestAfterAction_StateMain___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  v13 = PhaseCnt_k__BackingField + 1;
  _9__16_34 = static_fields->__9__16_34;
  if ( !_9__16_34 )
  {
    if ( (BYTE3(v10->vtable._0_Equals.methodPtr) & 4) != 0 && !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    }
    v15 = (Il2CppObject *)static_fields->__9;
    _9__16_34 = (ScriptManager_CallbackFunc_o *)sub_B0D974(ScriptManager_CallbackFunc_TypeInfo, method, v2);
    ScriptManager_CallbackFunc___ctor(_9__16_34, v15, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_34__, 0LL);
    v16 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    v16->__9__16_34 = _9__16_34;
    sub_B0D840(&v16->__9__16_34, _9__16_34);
  }
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayBattleStart(
    WarId_k__BackingField,
    QuestId_k__BackingField,
    v13,
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  QuestAfterAction_StateMain___c_c *v9; // x0
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x8
  NetworkManager_ResultCallbackFunc_o *_9__16_35; // x19
  Il2CppObject *v12; // x20
  struct QuestAfterAction_StateMain___c_StaticFields *v13; // x0
  __int64 v14; // x1
  BattleScenarioRequest_o *Request_WarBoardWallAttackRequest; // x19
  TerminalPramsManager_c *v16; // x0
  int32_t QuestId_k__BackingField; // w21
  int32_t PhaseCnt_k__BackingField; // w20
  System_Int32_array *SelectRouteArray; // x0

  if ( (byte_4211F9F & 1) == 0 )
  {
    sub_B0D8A4(&Method_NetworkManager_getRequest_BattleScenarioRequest___, isExit);
    sub_B0D8A4(&NetworkManager_TypeInfo, v3);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_B0D8A4(&ScriptManager_TypeInfo, v5);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v6);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_35__, v7);
    sub_B0D8A4(&QuestAfterAction_StateMain___c_TypeInfo, v8);
    byte_4211F9F = 1;
  }
  v9 = QuestAfterAction_StateMain___c_TypeInfo;
  if ( (BYTE3(QuestAfterAction_StateMain___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
    v9 = QuestAfterAction_StateMain___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__16_35 = static_fields->__9__16_35;
  if ( !_9__16_35 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__16_35 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(
                                                         NetworkManager_ResultCallbackFunc_TypeInfo,
                                                         isExit,
                                                         method);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__16_35,
      v12,
      Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_35__,
      0LL);
    v13 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    v13->__9__16_35 = _9__16_35;
    sub_B0D840(&v13->__9__16_35, _9__16_35);
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (BattleScenarioRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   _9__16_35,
                                                                   (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4210852 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v14);
    byte_4210852 = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v16->static_fields->_QuestId_k__BackingField;
  if ( !byte_4210853 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v14);
    v16 = TerminalPramsManager_TypeInfo;
    byte_4210853 = 1;
  }
  if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v16->static_fields->_PhaseCnt_k__BackingField;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  SelectRouteArray = ScriptManager__GetSelectRouteArray(0LL);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B0D97C(SelectRouteArray);
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

  if ( (byte_4211FA0 & 1) == 0 )
  {
    sub_B0D8A4(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___, jsonstr);
    sub_B0D8A4(&JsonManager_TypeInfo, v4);
    sub_B0D8A4(&ScriptManager_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v7);
    sub_B0D8A4(&StringLiteral_16336/*"afterActionBk"*/, v8);
    sub_B0D8A4(&StringLiteral_15681/*"["*/, v9);
    sub_B0D8A4(&StringLiteral_15917/*"]"*/, v10);
    byte_4211FA0 = 1;
  }
  v11 = (Il2CppObject *)System_String__Concat_43852188(
                          (System_String_o *)StringLiteral_15681/*"["*/,
                          jsonstr,
                          (System_String_o *)StringLiteral_15917/*"]"*/,
                          0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v12 = (BattleResultComponent_resultData_array *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                    v11,
                                                    (const MethodInfo_1B682B0 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16336/*"afterActionBk"*/, 0LL);
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
  if ( !byte_4210848 )
  {
    sub_B0D8A4(&TerminalPramsManager_TypeInfo, v13);
    byte_4210848 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v14->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(_4__this);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(0LL);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *v8; // x19
  UnityEngine_Component_o *mapGimmick; // x0
  UnityEngine_Component_o *v10; // x22
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v11; // x0
  Il2CppObject *v12; // x21
  struct System_String_array *paramsStr; // x8
  struct System_String_array *v14; // x8
  Il2CppClass *klass; // x20
  float v16; // s0
  UITweener_o *v17; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  EventDelegate_Callback_o *v20; // x21
  __int64 v21; // x0
  unsigned __int128 v22; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_4211FA1 & 1) == 0 )
  {
    sub_B0D8A4(&EventDelegate_Callback_TypeInfo, method);
    sub_B0D8A4(&Method_UnityEngine_GameObject_AddComponent_TweenColor___, v4);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v5);
    sub_B0D8A4(&Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__28__, v6);
    sub_B0D8A4(&QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo, v7);
    byte_4211FA1 = 1;
  }
  v22 = 0uLL;
  v8 = (Il2CppObject *)sub_B0D974(QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo, method, v2);
  System_Object___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_18;
  v8[1].monitor = this;
  sub_B0D840(&v8[1].monitor, this);
  mapGimmick = (UnityEngine_Component_o *)this->fields.mapGimmick;
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0LL);
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                            (UnityEngine_GameObject_o *)mapGimmick,
                                            (const MethodInfo_1B62C54 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !mapGimmick )
    goto LABEL_18;
  v10 = mapGimmick;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0LL);
  if ( !mapGimmick )
    goto LABEL_18;
  v11 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
          (UnityEngine_GameObject_o *)mapGimmick,
          (const MethodInfo_1B62AAC *)Method_UnityEngine_GameObject_AddComponent_TweenColor___);
  v8[1].klass = (Il2CppClass *)v11;
  v12 = v8 + 1;
  sub_B0D840(&v8[1], v11);
  paramsStr = this->fields.paramsStr;
  if ( !paramsStr )
    goto LABEL_18;
  if ( paramsStr->max_length <= 1 )
    goto LABEL_19;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                            paramsStr->m_Items[1],
                                            (UnityEngine_Color_o *)&v22,
                                            0LL);
  if ( !v12->klass
    || (*(_OWORD *)&v12->klass->_1.klass = *(_OWORD *)(&v10[5].fields + 1), !v12->klass)
    || (*(_OWORD *)&v12->klass->_1.events = v22, (v14 = this->fields.paramsStr) == 0LL) )
  {
LABEL_18:
    sub_B0D97C(mapGimmick);
  }
  if ( v14->max_length <= 2 )
  {
LABEL_19:
    v21 = sub_B0D9A8(mapGimmick);
    sub_B0D948(v21, 0LL);
  }
  klass = v12->klass;
  v16 = System_Single__Parse(v14->m_Items[2], 0LL);
  if ( !klass )
    goto LABEL_18;
  *(float *)&klass->_1.this_arg.data = v16;
  mapGimmick = (UnityEngine_Component_o *)v12->klass;
  if ( !v12->klass )
    goto LABEL_18;
  UITweener__PlayForward((UITweener_o *)mapGimmick, 0LL);
  v17 = (UITweener_o *)v8[1].klass;
  v20 = (EventDelegate_Callback_o *)sub_B0D974(EventDelegate_Callback_TypeInfo, v18, v19);
  EventDelegate_Callback___ctor(
    v20,
    v8,
    Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__28__,
    0LL);
  if ( !v17 )
    goto LABEL_18;
  UITweener__SetOnFinished(v17, v20, 0LL);
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
  struct QuestAfterAction_StateMain_o *_4__this; // x0
  struct QuestAfterAction_StateMain___c__DisplayClass16_13_o *CS___8__locals14; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals13; // x8

  if ( (byte_4211FA2 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, method);
    byte_4211FA2 = 1;
  }
  tween = (UnityEngine_Object_o *)this->fields.tween;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34935276(tween, 0LL);
  CS___8__locals14 = this->fields.CS___8__locals14;
  if ( !CS___8__locals14
    || (CS___8__locals13 = CS___8__locals14->fields.CS___8__locals13) == 0LL
    || (_4__this = CS___8__locals13->fields.__4__this) == 0LL )
  {
    sub_B0D97C(_4__this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
    sub_B0D97C(this);
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
  System_Action_o *end; // x0
  struct System_Action_o **p_end; // x19

  p_end = &this->fields.end;
  end = this->fields.end;
  if ( end )
    System_Action__Invoke(end, 0LL);
  *p_end = 0LL;
  sub_B0D840(p_end, 0LL);
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
  this->fields.start = startCallback;
  sub_B0D840(&this->fields, startCallback);
}


void __fastcall QuestAfterAction_TitleInfoControlCallback__Start(
        QuestAfterAction_TitleInfoControlCallback_o *this,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  System_Action_o *end; // x0
  struct System_Action_o **p_end; // x20
  const MethodInfo *v7; // x1
  System_Action_o *start; // x0

  p_end = &this->fields.end;
  end = this->fields.end;
  if ( end )
    System_Action__Invoke(end, 0LL);
  this->fields.end = endCallback;
  sub_B0D840(p_end, endCallback);
  start = this->fields.start;
  if ( start )
    System_Action__Invoke(start, 0LL);
  else
    QuestAfterAction_TitleInfoControlCallback__End(this, v7);
}


void __fastcall QuestAfterAction_VoiceInfo___ctor(
        QuestAfterAction_VoiceInfo_o *this,
        int32_t sId,
        System_String_o *vName,
        const MethodInfo *method)
{
  QuestAfterAction_VoiceInfo_o *v6; // x21

  v6 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v6->fields.voiceName = vName;
  v6 = (QuestAfterAction_VoiceInfo_o *)((char *)v6 + 24);
  LODWORD(v6[-1].fields.voiceName) = sId;
  sub_B0D840(v6, vName);
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
  struct QuestAfterAction_o *_4__this; // x8
  Il2CppObject **p__2__current; // x19
  bool result; // w0

  if ( this->fields.__1__state < 2u )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !_4__this )
      sub_B0D97C(this);
    if ( _4__this->fields.isKeepingMainStateButFinished )
    {
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_B0D840(&this->fields.__2__current, 0LL);
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_QuestAfterAction__WaitWhileMainStateFinished_d__73_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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

  if ( (byte_42121C9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__, method);
    byte_42121C9 = 1;
  }
  svtVInfos = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.svtVInfos;
  if ( !svtVInfos
    || (System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          svtVInfos,
          0,
          (const MethodInfo_2FC73D8 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__),
        (svtVInfos = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.__4__this) == 0LL) )
  {
    sub_B0D97C(svtVInfos);
  }
  QuestAfterAction__LoadVoice_24445172(
    (QuestAfterAction_o *)svtVInfos,
    this->fields.svtVInfos,
    this->fields.endAct,
    0LL);
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

  if ( (byte_42121CA & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v3);
    byte_42121CA = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v4 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v4 )
    sub_B0D97C(0LL);
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
  __int64 v3; // x1
  MissionNotifyManager_o *_4__this; // x0

  if ( (byte_42121CB & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B0D8A4(&SingletonTemplate_MissionNotifyManager__TypeInfo, v3);
    byte_42121CB = 1;
  }
  _4__this = (MissionNotifyManager_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  _4__this[2].klass = 0LL;
  sub_B0D840(&_4__this[2], 0LL);
  _4__this = (MissionNotifyManager_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  *(_QWORD *)&_4__this->fields.dispInfosIndex = 0LL;
  sub_B0D840(&_4__this->fields.dispInfosIndex, 0LL);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  _4__this = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A713E8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !_4__this
    || (MissionNotifyManager__EndPause(_4__this, 0LL),
        (_4__this = (MissionNotifyManager_o *)this->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_B0D97C(_4__this);
  }
  QuestAfterAction__SetState((QuestAfterAction_o *)_4__this, 0, 0LL);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass69_0___PlaySpecifiedAction_b__1(
        QuestAfterAction___c__DisplayClass69_0_o *this,
        const MethodInfo *method)
{
  QuestAfterAction_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B0D97C(0LL);
  QuestAfterAction__SetState(_4__this, 2, 0LL);
}