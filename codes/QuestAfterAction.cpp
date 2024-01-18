void __fastcall QuestAfterAction___ctor(QuestAfterAction_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  QuestAfterAction_TitleInfoControlCallback_o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  BlankEarthQuestAfterAction_o *v16; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v23; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v30; // x20
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7

  if ( (byte_4187B15 & 1) == 0 )
  {
    sub_B2C35C(&BlankEarthQuestAfterAction_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo, v5);
    sub_B2C35C(&System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_QuestAfterAction___ctor__, v7);
    sub_B2C35C(&QuestAfterAction_TitleInfoControlCallback_TypeInfo, v8);
    byte_4187B15 = 1;
  }
  v9 = (QuestAfterAction_TitleInfoControlCallback_o *)sub_B2C42C(QuestAfterAction_TitleInfoControlCallback_TypeInfo);
  QuestAfterAction_TitleInfoControlCallback___ctor(v9, 0LL);
  this->fields._TitleInfoCtrlCallback_k__BackingField = v9;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._TitleInfoCtrlCallback_k__BackingField,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  v16 = (BlankEarthQuestAfterAction_o *)sub_B2C42C(BlankEarthQuestAfterAction_TypeInfo);
  BlankEarthQuestAfterAction___ctor(v16, 0LL);
  this->fields._BlankEarthQuestAfterAction_k__BackingField = v16;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._BlankEarthQuestAfterAction_k__BackingField,
    (System_Int32_array **)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v23 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B2C42C(System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v23,
    (const MethodInfo_2E457D0 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
  this->fields.commandTypeIds = (struct System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *)v23;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.commandTypeIds,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v30 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B2C42C(System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v30,
    (const MethodInfo_2E63B98 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
  this->fields.svtVoices = (struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v30;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.svtVoices,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this->fields.MapMoveBeforeFocusSpotId = -1;
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_28419D4 *)Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
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
  sub_B2C2F8(p_endAct, 0LL, v2, v3, v4, v5, v6, v7);
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
  int32_t v54; // w22
  TerminalPramsManager_c *v55; // x0
  TerminalSceneComponent_c *v56; // x0
  TerminalPramsManager_c *v57; // x0
  System_String_o *String_35342888; // x22
  __int64 v59; // x22
  __int64 v60; // x1
  int32_t v61; // w23
  __int64 v62; // x1
  int32_t v63; // w23
  System_String_o *v64; // x23
  __int64 v65; // x1
  bool v66; // w23
  bool v67; // w22
  WarMaster_o *MasterData_WarQuestSelectionMaster; // x22
  WarEntity_o *QuestId; // x0
  WarEntity_o *v70; // x22
  TerminalPramsManager_c *v71; // x0
  int32_t id; // w23
  bool v73; // w22
  TerminalPramsManager_c *v74; // x0
  TerminalPramsManager_c *v75; // x0
  QuestPhaseDetailAddMaster_o *v76; // x22
  int32_t v77; // w23
  QuestPhaseDetailMaster_o *v78; // x22
  int32_t v79; // w23
  TerminalPramsManager_c *v80; // x0
  int32_t v81; // w21
  WarEntity_o *v82; // x0
  QuestBehaviorMaster_o *v83; // x21
  int32_t v84; // w23
  bool IsOpenQuestBehaviorCond; // w0
  __int64 v86; // x8
  System_Int32_array **v87; // x0
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  int *commandBuf; // x8
  unsigned __int64 v95; // x23
  il2cpp_array_size_t v96; // w21
  __int64 v97; // x24
  System_String_array **v98; // x2
  System_String_array **v99; // x3
  System_Boolean_array **v100; // x4
  System_Int32_array **v101; // x5
  System_Int32_array *v102; // x6
  System_Int32_array *v103; // x7
  __int64 v104; // x8
  System_Int32_array **v105; // x1
  System_String_o **v106; // x25
  const MethodInfo *v107; // x2
  int v108; // w8
  int v109; // w8
  QuestAfterAction_o *v110; // x19
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *svtVoices; // x26
  int32_t v112; // w20
  System_String_o *v113; // x28
  QuestAfterAction_VoiceInfo_o *v114; // x27
  int v115; // w8
  int32_t v116; // w26
  unsigned int v117; // w8
  System_String_o *v118; // x26
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *commandTypeIds; // x8
  char v120; // w28
  System_String_o *Item; // x0
  System_String_o *v122; // x27
  System_Collections_Generic_List_int__o *v123; // x26
  QuestAfterAction_o *v124; // x0
  const MethodInfo *v125; // x2
  __int64 v126; // x8
  __int64 v127; // x25
  unsigned __int64 v128; // x20
  unsigned int *v129; // x20
  System_String_array **v130; // x2
  System_String_array **v131; // x3
  System_Boolean_array **v132; // x4
  System_Int32_array **v133; // x5
  System_Int32_array *v134; // x6
  System_Int32_array *v135; // x7
  unsigned int *v136; // x0
  TerminalPramsManager_c *v137; // x0
  QuestMaster_o *v138; // x19
  TerminalPramsManager_c *v139; // x0
  BalanceConfig_c *v140; // x8
  int32_t WarId_k__BackingField; // w19
  int32_t v142; // w19
  TerminalPramsManager_c *v143; // x0
  TerminalPramsManager_c *v144; // x0
  TerminalPramsManager_c *v145; // x0
  BalanceConfig_c *v146; // x8
  int32_t v147; // w20
  TerminalPramsManager_c *v148; // x0
  TerminalPramsManager_c *v149; // x0
  TerminalPramsManager_c *v150; // x0
  __int64 v151; // x0
  __int64 v152; // x0
  System_String_array *v153; // [xsp+8h] [xbp-78h]
  unsigned int **p_commandBuf; // [xsp+10h] [xbp-70h]
  int32_t svtId; // [xsp+1Ch] [xbp-64h] BYREF
  WarEntity_o *v156; // [xsp+20h] [xbp-60h] BYREF
  QuestEntity_o *entity; // [xsp+28h] [xbp-58h] BYREF

  v4 = this;
  if ( (byte_4187AFD & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, isBeforeAction);
    sub_B2C35C(&bool_TypeInfo, v5);
    sub_B2C35C(&char___TypeInfo, v6);
    sub_B2C35C(&QuestAfterAction_Command___TypeInfo, v7);
    sub_B2C35C(&QuestAfterAction_Command_TypeInfo, v8);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionMaster___, v9);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, v10);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v11);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v12);
    sub_B2C35C(&Method_DataManager_GetMasterData_WarMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMaster_BlankEarthSpotMaster___, v14);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestBehaviorMaster___, v15);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestMaster___, v16);
    sub_B2C35C(&Method_DataManager_GetMaster_ShopMaster___, v17);
    sub_B2C35C(&Method_DataManager_GetMaster_WarMaster___, v18);
    sub_B2C35C(&DataManager_TypeInfo, v19);
    sub_B2C35C(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v20);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v21);
    sub_B2C35C(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v22);
    sub_B2C35C(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__, v23);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__, v24);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v25);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____, v26);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v27);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v28);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v29);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v30);
    sub_B2C35C(&QuestAfterAction_VoiceInfo_TypeInfo, v31);
    sub_B2C35C(&StringLiteral_16287/*"afterActionBk"*/, v32);
    this = (QuestAfterAction_o *)sub_B2C35C(&StringLiteral_699/*","*/, v33);
    byte_4187AFD = 1;
  }
  v156 = 0LL;
  entity = 0LL;
  svtId = 0;
  *(_QWORD *)&v4->fields.ActionMapTargetType = -1LL;
  *(_WORD *)&v4->fields.isLoadedVoice = 0;
  if ( isBeforeAction )
  {
    if ( System_Linq_Enumerable__Any_KeyValuePair_int__QuestAfterAction_VoiceInfo__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.svtVoices,
           (const MethodInfo_1737B70 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____) )
    {
      QuestAfterAction__releaseVoice(v4, v34);
    }
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C7A )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v34);
      byte_4183C7A = 1;
    }
    v36 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v36 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v36->static_fields->_QuestId_k__BackingField;
    if ( !byte_4183C7B )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v34);
      v36 = TerminalPramsManager_TypeInfo;
      byte_4183C7B = 1;
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v39);
    byte_4183C65 = 1;
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
    if ( !byte_4183C65 )
    {
      sub_B2C35C(&TerminalSceneComponent_TypeInfo, v39);
      byte_4183C65 = 1;
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
    if ( !byte_4183C65 )
    {
      sub_B2C35C(&TerminalSceneComponent_TypeInfo, v39);
      Master_WarQuestSelectionMaster = (__int64)TerminalSceneComponent_TypeInfo;
      byte_4183C65 = 1;
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
      if ( !byte_4183C65 )
      {
        sub_B2C35C(&TerminalSceneComponent_TypeInfo, v39);
        byte_4183C65 = 1;
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
      Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_344;
      Master_WarQuestSelectionMaster = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                  v45,
                                                  (const MethodInfo_24E40D0 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_344;
      v51 = *(_DWORD *)(Master_WarQuestSelectionMaster + 24);
      Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_WarMaster___);
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
      if ( !byte_4183C65 )
      {
        sub_B2C35C(&TerminalSceneComponent_TypeInfo, v39);
        byte_4183C65 = 1;
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
                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_344;
      Master_WarQuestSelectionMaster = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                  v48,
                                                  (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_344;
      v51 = *(_DWORD *)(Master_WarQuestSelectionMaster + 28);
      Master_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)Instance,
                                                  (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_344;
    }
    Master_WarQuestSelectionMaster = (__int64)WarMaster__getByEventId(
                                                (WarMaster_o *)Master_WarQuestSelectionMaster,
                                                v51,
                                                0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_344;
    v54 = *(_DWORD *)(Master_WarQuestSelectionMaster + 16);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C69 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v39);
      byte_4183C69 = 1;
    }
    v55 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v55 = TerminalPramsManager_TypeInfo;
    }
    v55->static_fields->_WarId_k__BackingField = v54;
    if ( !byte_4183C65 )
    {
      sub_B2C35C(&TerminalSceneComponent_TypeInfo, v39);
      byte_4183C65 = 1;
    }
    v56 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v56 = TerminalSceneComponent_TypeInfo;
    }
    Master_WarQuestSelectionMaster = (__int64)v56->static_fields->mInstance;
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
  if ( !byte_4183C7C )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v39);
    byte_4183C7C = 1;
  }
  v57 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v57 = TerminalPramsManager_TypeInfo;
  }
  if ( !v57->static_fields->_IsPhaseClear_k__BackingField
    && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_16287/*"afterActionBk"*/, 0LL) )
  {
    String_35342888 = UnityEngine_PlayerPrefs__GetString_35342888((System_String_o *)StringLiteral_16287/*"afterActionBk"*/, 0LL);
    Master_WarQuestSelectionMaster = sub_B2C374(char___TypeInfo, 1LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_344;
    v39 = Master_WarQuestSelectionMaster;
    if ( !*(_DWORD *)(Master_WarQuestSelectionMaster + 24) )
      goto LABEL_459;
    *(_WORD *)(Master_WarQuestSelectionMaster + 32) = 44;
    if ( !String_35342888 )
      goto LABEL_344;
    Master_WarQuestSelectionMaster = (__int64)System_String__Split(
                                                String_35342888,
                                                (System_Char_array *)Master_WarQuestSelectionMaster,
                                                0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_344;
    v59 = Master_WarQuestSelectionMaster;
    if ( !*(_DWORD *)(Master_WarQuestSelectionMaster + 24) )
      goto LABEL_459;
    v61 = System_Int32__Parse(*(System_String_o **)(Master_WarQuestSelectionMaster + 32), 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C6B )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v60);
      byte_4183C6B = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 16LL) = v61;
    if ( *(_DWORD *)(v59 + 24) <= 1u )
      goto LABEL_459;
    v63 = System_Int32__Parse(*(System_String_o **)(v59 + 40), 0LL);
    if ( !byte_4183C6C )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v62);
      byte_4183C6C = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 20LL) = v63;
    if ( *(_DWORD *)(v59 + 24) <= 2u )
      goto LABEL_459;
    v64 = *(System_String_o **)(v59 + 48);
    if ( (BYTE3(bool_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !bool_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
    v66 = System_Boolean__Parse(v64, 0LL);
    if ( !byte_4183C95 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v65);
      byte_4183C95 = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    *(_BYTE *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 84LL) = v66;
    if ( *(_DWORD *)(v59 + 24) <= 3u )
      goto LABEL_459;
    v67 = System_Boolean__Parse(*(System_String_o **)(v59 + 56), 0LL);
    if ( !byte_4183C96 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v39);
      byte_4183C96 = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    *(_BYTE *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 85LL) = v67;
    if ( !byte_4183C8C )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v39);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
      byte_4183C8C = 1;
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
                                                            (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_WarMaster___);
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4183C7A )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v39);
        byte_4183C7A = 1;
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
        v70 = QuestId;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_4183C82 )
        {
          sub_B2C35C(&TerminalPramsManager_TypeInfo, v39);
          byte_4183C82 = 1;
        }
        v71 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v71 = TerminalPramsManager_TypeInfo;
        }
        v71->static_fields->_IsWarClear_k__BackingField = 1;
        id = v70->fields.id;
        if ( !byte_4183C69 )
        {
          sub_B2C35C(&TerminalPramsManager_TypeInfo, v39);
          v71 = TerminalPramsManager_TypeInfo;
          byte_4183C69 = 1;
        }
        if ( (BYTE3(v71->vtable._0_Equals.methodPtr) & 4) != 0 && !v71->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v71);
          v71 = TerminalPramsManager_TypeInfo;
        }
        v71->static_fields->_WarId_k__BackingField = id;
        v73 = TerminalPramsManager__CheckIsOrdealCallWarClear(v70, 0LL);
        if ( !byte_4183CB1 )
        {
          sub_B2C35C(&TerminalPramsManager_TypeInfo, v39);
          byte_4183CB1 = 1;
        }
        v74 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v74 = TerminalPramsManager_TypeInfo;
        }
        v74->static_fields->_IsOrdealCallWarClear_k__BackingField = v73;
      }
    }
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C80 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v39);
    byte_4183C80 = 1;
  }
  v75 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v75 = TerminalPramsManager_TypeInfo;
  }
  if ( v75->static_fields->_IsWarClear_k__BackingField )
  {
    if ( (BYTE3(v75->vtable._0_Equals.methodPtr) & 4) != 0 && !v75->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v75);
    if ( !byte_4183C81 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v39);
      byte_4183C81 = 1;
    }
    v75 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v75 = TerminalPramsManager_TypeInfo;
    }
    if ( !v75->static_fields->_IsOrdealCallWarClear_k__BackingField )
      goto LABEL_260;
  }
  if ( (BYTE3(v75->vtable._0_Equals.methodPtr) & 4) != 0 && !v75->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v75);
  if ( !byte_4183C7C )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v39);
    byte_4183C7C = 1;
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
    v76 = (QuestPhaseDetailAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C7A )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v39);
      byte_4183C7A = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    v77 = *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 16LL);
    if ( !byte_4183C7B )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v39);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
      byte_4183C7B = 1;
    }
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !v76 )
      goto LABEL_344;
    v38 = QuestPhaseDetailAddMaster__GetAfterAction(
            v76,
            v77,
            *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 20LL) + 1,
            0LL);
    if ( v38 )
      goto LABEL_261;
    v78 = (QuestPhaseDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C7A )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v39);
      byte_4183C7A = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    v79 = *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 16LL);
    if ( !byte_4183C7B )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v39);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
      byte_4183C7B = 1;
    }
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !v78 )
      goto LABEL_344;
    v38 = QuestPhaseDetailMaster__GetAfterAction(
            v78,
            v79,
            *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 20LL) + 1,
            0LL);
    if ( v38 )
      goto LABEL_261;
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0 && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
  if ( !byte_4183C8C )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v39);
    byte_4183C8C = 1;
  }
  v80 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v80 = TerminalPramsManager_TypeInfo;
  }
  if ( !v80->static_fields->_IsQuestClear_k__BackingField )
    goto LABEL_260;
  if ( (BYTE3(v80->vtable._0_Equals.methodPtr) & 4) != 0 && !v80->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v80);
  v38 = 0LL;
  if ( TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL) )
    goto LABEL_261;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C7A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v39);
    byte_4183C7A = 1;
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
  v81 = *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 16LL);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_344;
  v82 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
          v81,
          (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( v82 )
    v38 = *(System_String_array **)&v82->fields.eventId;
  else
LABEL_260:
    v38 = 0LL;
LABEL_261:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v83 = (QuestBehaviorMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C7A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v39);
    byte_4183C7A = 1;
  }
  Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
  }
  v84 = *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 16LL);
  if ( !byte_4183C7B )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v39);
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    byte_4183C7B = 1;
  }
  if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0 && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
  {
    j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !v83 )
    goto LABEL_344;
  IsOpenQuestBehaviorCond = QuestBehaviorMaster__IsOpenQuestBehaviorCond(
                              v83,
                              v84,
                              *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 20LL) + 1,
                              7,
                              0LL);
  if ( !v38 || IsOpenQuestBehaviorCond || (v86 = *(_QWORD *)&v38->max_length, (int)v86 < 2) || (v86 & 1) != 0 )
  {
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16287/*"afterActionBk"*/, 0LL);
    return;
  }
  v87 = (System_Int32_array **)sub_B2C374(QuestAfterAction_Command___TypeInfo, (unsigned int)v86 >> 1);
  v4->fields.commandBuf = (struct QuestAfterAction_Command_array *)v87;
  sub_B2C2F8((BattleServantConfConponent_o *)&v4->fields.commandBuf, v87, v88, v89, v90, v91, v92, v93);
  commandBuf = (int *)v4->fields.commandBuf;
  if ( !commandBuf )
    goto LABEL_344;
  v95 = 0LL;
  v96 = 0;
  v153 = v38;
  p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
  while ( (__int64)v95 < commandBuf[6] )
  {
    v97 = sub_B2C42C(QuestAfterAction_Command_TypeInfo);
    QuestAfterAction_Command___ctor((QuestAfterAction_Command_o *)v97, 0LL);
    if ( v96 >= v38->max_length )
      goto LABEL_459;
    Master_WarQuestSelectionMaster = System_Int32__Parse(v38->m_Items[v96], 0LL);
    if ( !v97 )
      goto LABEL_344;
    *(_DWORD *)(v97 + 16) = Master_WarQuestSelectionMaster;
    v104 = (int)v96 | 1LL;
    if ( (unsigned int)v104 >= v38->max_length )
      goto LABEL_459;
    v105 = (System_Int32_array **)v38->m_Items[v104];
    *(_QWORD *)(v97 + 24) = v105;
    v106 = (System_String_o **)(v97 + 24);
    sub_B2C2F8((BattleServantConfConponent_o *)(v97 + 24), v105, v98, v99, v100, v101, v102, v103);
    if ( !v4->fields.hasFadeCommand )
    {
      v108 = *(_DWORD *)(v97 + 16);
      if ( v108 == 520 || v108 == 405 )
        v4->fields.hasFadeCommand = 1;
    }
    if ( !v96 && !v4->fields.isRequestedStopBgm && *(_DWORD *)(v97 + 16) == 850 )
      v4->fields.isRequestedStopBgm = 1;
    if ( (v4->fields.MapMoveBeforeFocusSpotId & 0x80000000) != 0 )
    {
      v109 = *(_DWORD *)(v97 + 16);
      if ( v109 != 350 )
        goto LABEL_298;
      v118 = *v106;
      Master_WarQuestSelectionMaster = sub_B2C374(char___TypeInfo, 1LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_344;
      v39 = Master_WarQuestSelectionMaster;
      if ( !*(_DWORD *)(Master_WarQuestSelectionMaster + 24) )
        goto LABEL_459;
      *(_WORD *)(Master_WarQuestSelectionMaster + 32) = 44;
      if ( !v118 )
        goto LABEL_344;
      Master_WarQuestSelectionMaster = (__int64)System_String__Split(
                                                  v118,
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
    v109 = *(_DWORD *)(v97 + 16);
LABEL_298:
    v110 = v4;
    if ( v109 == 800 )
    {
      Master_WarQuestSelectionMaster = (__int64)QuestAfterAction_Command__GetAvailableRandomVoice(
                                                  (QuestAfterAction_Command_o *)v97,
                                                  &svtId,
                                                  0LL);
      if ( Master_WarQuestSelectionMaster )
      {
        svtVoices = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v4->fields.svtVoices;
        v112 = svtId;
        v113 = (System_String_o *)Master_WarQuestSelectionMaster;
        v114 = (QuestAfterAction_VoiceInfo_o *)sub_B2C42C(QuestAfterAction_VoiceInfo_TypeInfo);
        QuestAfterAction_VoiceInfo___ctor(v114, v112, v113, 0LL);
        if ( !svtVoices )
          goto LABEL_344;
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
          svtVoices,
          v95,
          (WarBoardEvalValueSquare_EvalValueSquare_o *)v114,
          (const MethodInfo_2E6474C *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__);
        v38 = v153;
      }
    }
    v115 = *(_DWORD *)(v97 + 16);
    if ( v115 <= 113 )
    {
      v117 = v115 - 100;
      v4 = v110;
      if ( v117 >= 0xE || ((0x3C1Fu >> v117) & 1) == 0 )
        goto LABEL_331;
      v116 = 0;
    }
    else if ( (unsigned int)(v115 - 200) < 6 )
    {
      v116 = 1;
      v4 = v110;
    }
    else
    {
      v4 = v110;
      if ( (unsigned int)(v115 - 400) < 0xA )
      {
        v116 = 2;
      }
      else
      {
        if ( v115 != 550 )
          goto LABEL_331;
        v116 = 3;
      }
    }
    Master_WarQuestSelectionMaster = (__int64)*v106;
    if ( !*v106 )
      goto LABEL_344;
    Master_WarQuestSelectionMaster = System_String__Contains(
                                       (System_String_o *)Master_WarQuestSelectionMaster,
                                       (System_String_o *)StringLiteral_699/*","*/,
                                       0LL);
    commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v4->fields.commandTypeIds;
    if ( !commandTypeIds )
      goto LABEL_344;
    v120 = Master_WarQuestSelectionMaster;
    Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
             commandTypeIds,
             v116,
             (const MethodInfo_2E462C0 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    v122 = *v106;
    v123 = (System_Collections_Generic_List_int__o *)Item;
    if ( (v120 & 1) != 0 )
    {
      Master_WarQuestSelectionMaster = sub_B2C374(char___TypeInfo, 1LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_344;
      v39 = Master_WarQuestSelectionMaster;
      if ( !*(_DWORD *)(Master_WarQuestSelectionMaster + 24) )
        goto LABEL_459;
      *(_WORD *)(Master_WarQuestSelectionMaster + 32) = 44;
      if ( !v122 )
        goto LABEL_344;
      Master_WarQuestSelectionMaster = (__int64)System_String__Split(
                                                  v122,
                                                  (System_Char_array *)Master_WarQuestSelectionMaster,
                                                  0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_344;
      v38 = v153;
      if ( !*(_DWORD *)(Master_WarQuestSelectionMaster + 24) )
        goto LABEL_459;
      v4 = v110;
      Master_WarQuestSelectionMaster = System_Int32__Parse(
                                         *(System_String_o **)(Master_WarQuestSelectionMaster + 32),
                                         0LL);
      if ( !v123 )
        goto LABEL_344;
      System_Collections_Generic_List_int___Add(
        v123,
        Master_WarQuestSelectionMaster,
        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
    }
    else
    {
      Master_WarQuestSelectionMaster = System_Int32__Parse(*v106, 0LL);
      if ( !v123 )
        goto LABEL_344;
      System_Collections_Generic_List_int___Add(
        v123,
        Master_WarQuestSelectionMaster,
        (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      v38 = v153;
      v4 = v110;
    }
LABEL_331:
    if ( v4->fields.ActionMapTargetId <= 0 )
      QuestAfterAction__SetActionMap(v4, (QuestAfterAction_Command_o *)v97, v107);
    if ( *(_DWORD *)(v97 + 16) == 102 )
    {
      v124 = (QuestAfterAction_o *)System_Int32__Parse(*v106, 0LL);
      Master_WarQuestSelectionMaster = (__int64)QuestAfterAction__GetMapGimmickId(v124, (int32_t)v124, v125);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_344;
      v126 = *(_QWORD *)(Master_WarQuestSelectionMaster + 24);
      v127 = Master_WarQuestSelectionMaster;
      if ( (int)v126 >= 1 )
      {
        v128 = 0LL;
        while ( v128 < (unsigned int)v126 )
        {
          Master_WarQuestSelectionMaster = (__int64)v4->fields.invalidMapGimmickIdList;
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_344;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)Master_WarQuestSelectionMaster,
            *(_DWORD *)(v127 + 32 + 4 * v128),
            (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
          LODWORD(v126) = *(_DWORD *)(v127 + 24);
          if ( (__int64)++v128 >= (int)v126 )
            goto LABEL_340;
        }
LABEL_459:
        v151 = sub_B2C460(Master_WarQuestSelectionMaster);
        sub_B2C400(v151, 0LL);
      }
    }
LABEL_340:
    v129 = *p_commandBuf;
    if ( !*p_commandBuf )
      goto LABEL_344;
    Master_WarQuestSelectionMaster = sub_B2C41C(v97, *(_QWORD *)(*(_QWORD *)v129 + 64LL));
    if ( !Master_WarQuestSelectionMaster )
    {
      v152 = sub_B2C454(0LL);
      sub_B2C400(v152, 0LL);
    }
    if ( v95 >= v129[6] )
      goto LABEL_459;
    v136 = &v129[2 * v95];
    *((_QWORD *)v136 + 4) = v97;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)(v136 + 8),
      (System_Int32_array **)v97,
      v130,
      v131,
      v132,
      v133,
      v134,
      v135);
    commandBuf = (int *)*p_commandBuf;
    v96 += 2;
    ++v95;
    if ( !*p_commandBuf )
      goto LABEL_344;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C7C )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v39);
    byte_4183C7C = 1;
  }
  v137 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v137 = TerminalPramsManager_TypeInfo;
  }
  if ( v137->static_fields->_IsPhaseClear_k__BackingField )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v138 = (QuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestMaster___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_4183C7A )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v39);
      byte_4183C7A = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !v138 )
      goto LABEL_344;
    if ( QuestMaster__TryGetQuestEntity(
           v138,
           &entity,
           *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 16LL),
           0LL) )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_4183C67 )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v39);
        byte_4183C67 = 1;
      }
      v139 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v139 = TerminalPramsManager_TypeInfo;
      }
      v140 = BalanceConfig_TypeInfo;
      WarId_k__BackingField = v139->static_fields->_WarId_k__BackingField;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v140 = BalanceConfig_TypeInfo;
      }
      if ( WarId_k__BackingField == v140->static_fields->OrdealCallWarId )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
        if ( entity && Master_WarQuestSelectionMaster )
        {
          Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                             &v156,
                                             entity->fields.spotId,
                                             (const MethodInfo_24E412C *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
          if ( (Master_WarQuestSelectionMaster & 1) == 0 )
            goto LABEL_396;
          if ( v156 )
          {
            v142 = v156->fields.id;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            }
            if ( !byte_418554C )
            {
              sub_B2C35C(&TerminalPramsManager_TypeInfo, v39);
              byte_418554C = 1;
            }
            v143 = TerminalPramsManager_TypeInfo;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v143 = TerminalPramsManager_TypeInfo;
            }
            v143->static_fields->_BlankEarthAfterActionFocusSpotId_k__BackingField = v142;
            goto LABEL_396;
          }
        }
LABEL_344:
        sub_B2C434(Master_WarQuestSelectionMaster, v39);
      }
    }
  }
LABEL_396:
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C70 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v39);
    byte_4183C70 = 1;
  }
  v144 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v144 = TerminalPramsManager_TypeInfo;
  }
  v144->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_4183C6F )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v39);
    v144 = TerminalPramsManager_TypeInfo;
    byte_4183C6F = 1;
  }
  if ( (BYTE3(v144->vtable._0_Equals.methodPtr) & 4) != 0 && !v144->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v144);
    v144 = TerminalPramsManager_TypeInfo;
  }
  v144->static_fields->_DispState_k__BackingField = 2;
  if ( !byte_4183C67 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v39);
    byte_4183C67 = 1;
  }
  v145 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v145 = TerminalPramsManager_TypeInfo;
  }
  v146 = BalanceConfig_TypeInfo;
  v147 = v145->static_fields->_WarId_k__BackingField;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v146 = BalanceConfig_TypeInfo;
  }
  v148 = TerminalPramsManager_TypeInfo;
  if ( v147 == v146->static_fields->OrdealCallWarId )
    goto LABEL_463;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C81 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v39);
    byte_4183C81 = 1;
  }
  v148 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v148 = TerminalPramsManager_TypeInfo;
  }
  if ( v148->static_fields->_IsOrdealCallWarClear_k__BackingField )
  {
LABEL_463:
    if ( (BYTE3(v148->vtable._0_Equals.methodPtr) & 4) != 0 && !v148->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v148);
    if ( !byte_41846F7 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v39);
      byte_41846F7 = 1;
    }
    v148 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v148 = TerminalPramsManager_TypeInfo;
    }
    v148->static_fields->_BlankEarthSpotId_k__BackingField = 0;
    if ( !byte_4183C81 )
    {
      sub_B2C35C(&TerminalPramsManager_TypeInfo, v39);
      v148 = TerminalPramsManager_TypeInfo;
      byte_4183C81 = 1;
    }
    if ( (BYTE3(v148->vtable._0_Equals.methodPtr) & 4) != 0 && !v148->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v148);
      v148 = TerminalPramsManager_TypeInfo;
    }
    if ( !v148->static_fields->_IsOrdealCallWarClear_k__BackingField )
    {
      if ( (BYTE3(v148->vtable._0_Equals.methodPtr) & 4) != 0 && !v148->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v148);
      if ( !byte_4183C6F )
      {
        sub_B2C35C(&TerminalPramsManager_TypeInfo, v39);
        byte_4183C6F = 1;
      }
      v149 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v149 = TerminalPramsManager_TypeInfo;
      }
      v149->static_fields->_DispState_k__BackingField = 3;
      v148 = TerminalPramsManager_TypeInfo;
    }
  }
  if ( (BYTE3(v148->vtable._0_Equals.methodPtr) & 4) != 0 && !v148->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v148);
  if ( !byte_4183C9C )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v39);
    byte_4183C9C = 1;
  }
  v150 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v150 = TerminalPramsManager_TypeInfo;
  }
  v150->static_fields->_SpotId_k__BackingField = -1;
}


void __fastcall QuestAfterAction__DeleteContinueData(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4187AFB & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16287/*"afterActionBk"*/, v1);
    byte_4187AFB = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16287/*"afterActionBk"*/, 0LL);
}


QuestAfterAction_Command_array *__fastcall QuestAfterAction__GenerateCommandBuf(
        System_String_array *actionVals,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 IsNullOrEmpty; // x0
  __int64 v6; // x1
  _QWORD **v7; // x20
  __int64 v8; // x19
  __int16 v9; // w8
  __int64 v10; // x19
  __int64 v11; // x19
  __int64 v12; // x19
  QuestAfterAction_Command_array *v13; // x20
  __int64 v14; // x22
  unsigned __int64 v15; // x23
  __int64 v16; // x24
  il2cpp_array_size_t v17; // w25
  __int64 v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v33; // x0
  __int64 v34; // x0

  if ( (byte_4187AFE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_Empty_QuestAfterAction_Command___, method);
    sub_B2C35C(&QuestAfterAction_Command___TypeInfo, v3);
    sub_B2C35C(&QuestAfterAction_Command_TypeInfo, v4);
    byte_4187AFE = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v7 = (_QWORD **)Method_System_Array_Empty_QuestAfterAction_Command___;
    v8 = **((_QWORD **)Method_System_Array_Empty_QuestAfterAction_Command___ + 6);
    v9 = *(_WORD *)(v8 + 306);
    if ( (v9 & 1) == 0 )
    {
      sub_AC505C(**((_QWORD **)Method_System_Array_Empty_QuestAfterAction_Command___ + 6));
      v9 = *(_WORD *)(v8 + 306);
    }
    if ( (v9 & 0x400) != 0 )
    {
      v10 = *v7[6];
      if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
        sub_AC505C(*v7[6]);
      if ( !*(_DWORD *)(v10 + 224) )
      {
        v11 = *v7[6];
        if ( (*(_BYTE *)(v11 + 306) & 1) == 0 )
          sub_AC505C(*v7[6]);
        j_il2cpp_runtime_class_init_0(v11);
      }
    }
    v12 = *v7[6];
    if ( (*(_BYTE *)(v12 + 306) & 1) == 0 )
      sub_AC505C(*v7[6]);
    return **(QuestAfterAction_Command_array ***)(v12 + 184);
  }
  else
  {
    if ( !actionVals
      || (IsNullOrEmpty = sub_B2C374(
                            QuestAfterAction_Command___TypeInfo,
                            (unsigned int)((signed int)actionVals->max_length / 2))) == 0 )
    {
LABEL_28:
      sub_B2C434(IsNullOrEmpty, v6);
    }
    v13 = (QuestAfterAction_Command_array *)IsNullOrEmpty;
    if ( *(int *)(IsNullOrEmpty + 24) >= 1 )
    {
      v14 = 0LL;
      v15 = 0LL;
      v16 = IsNullOrEmpty + 32;
      v17 = 1;
      do
      {
        v18 = sub_B2C42C(QuestAfterAction_Command_TypeInfo);
        QuestAfterAction_Command___ctor((QuestAfterAction_Command_o *)v18, 0LL);
        if ( v17 - 1 >= actionVals->max_length )
          goto LABEL_27;
        IsNullOrEmpty = System_Int32__Parse(actionVals->m_Items[v17 - 1], 0LL);
        if ( !v18 )
          goto LABEL_28;
        *(_DWORD *)(v18 + 16) = IsNullOrEmpty;
        if ( v17 >= actionVals->max_length )
          goto LABEL_27;
        v25 = (System_Int32_array **)actionVals->m_Items[v17];
        *(_QWORD *)(v18 + 24) = v25;
        sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 24), v25, v19, v20, v21, v22, v23, v24);
        IsNullOrEmpty = sub_B2C41C(v18, v13->obj.klass->_1.element_class);
        if ( !IsNullOrEmpty )
        {
          v34 = sub_B2C454(0LL);
          sub_B2C400(v34, 0LL);
        }
        if ( v15 >= v13->max_length )
        {
LABEL_27:
          v33 = sub_B2C460(IsNullOrEmpty);
          sub_B2C400(v33, 0LL);
        }
        *(_QWORD *)(v16 + 8 * v15) = v18;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)(v16 + v14),
          (System_Int32_array **)v18,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
        ++v15;
        v17 += 2;
        v14 += 8LL;
      }
      while ( (__int64)v15 < (int)v13->max_length );
    }
  }
  return v13;
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
  DataMasterBase_WarMaster__WarEntity__int__o *v16; // x20
  System_String_array *v17; // x19

  if ( (byte_4187B14 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&phase);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_string___, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v10);
    byte_4187B14 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = (QuestPhaseDetailAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        Instance,
                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C7A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v12);
    byte_4183C7A = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  items = (int32_t)Instance[1].fields.saveNameList->fields._items;
  if ( !byte_4183C7B )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v12);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_4183C7B = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_37;
  result = QuestPhaseDetailMaster__GetAfterAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  v16 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         Instance,
                                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C7A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v12);
    byte_4183C7A = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v16 )
LABEL_37:
    sub_B2C434(Instance, v12);
  result = (System_String_array *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v16,
                                    (int32_t)Instance[1].fields.saveNameList->fields._items,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( result )
  {
    v17 = result;
    if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result->m_Items[8],
           (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_string___) )
    {
      return (System_String_array *)v17->m_Items[8];
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
  DataMasterBase_WarMaster__WarEntity__int__o *v16; // x20
  System_String_array *v17; // x19

  if ( (byte_4187B13 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, *(_QWORD *)&phase);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v7);
    sub_B2C35C(&Method_System_Linq_Enumerable_Any_string___, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v10);
    byte_4187B13 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = (QuestPhaseDetailAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        Instance,
                                                                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C7A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v12);
    byte_4183C7A = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  items = (int32_t)Instance[1].fields.saveNameList->fields._items;
  if ( !byte_4183C7B )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v12);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_4183C7B = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_37;
  result = QuestPhaseDetailMaster__GetBeforeAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  v16 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         Instance,
                                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C7A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v12);
    byte_4183C7A = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v16 )
LABEL_37:
    sub_B2C434(Instance, v12);
  result = (System_String_array *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v16,
                                    (int32_t)Instance[1].fields.saveNameList->fields._items,
                                    (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( result )
  {
    v17 = result;
    if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result->m_Items[7],
           (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_string___) )
    {
      return (System_String_array *)v17->m_Items[7];
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
      return dword_31A1F10[commandId - 100];
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
        const MethodInfo_2098774 *method)
{
  QuestAfterAction_o *v9; // x23
  UnityEngine_Object_o *MapGameObject; // x20

  v9 = this;
  if ( (byte_418D1BE & 1) == 0 )
  {
    this = (QuestAfterAction_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&comType);
    byte_418D1BE = 1;
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
    sub_B2C434(this, *(_QWORD *)&comType);
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
  const MethodInfo *v12; // x3

  v8 = this;
  if ( (byte_4187B0F & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, *(_QWORD *)&comType);
    this = (QuestAfterAction_o *)sub_B2C35C(&SrcSpotBasePrefab_TypeInfo, v9);
    byte_4187B0F = 1;
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
        sub_B2C434(this, *(_QWORD *)&comType);
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
    this = (QuestAfterAction_o *)QuestAfterAction__IsMapChangeable(this, *(const MethodInfo **)&comType);
    if ( !state )
      goto LABEL_42;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      state->fields.IsAnimDoing = 0;
      QuestAfterAction__RequestMapChange(v8, comType, id, v12);
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
  __int64 v12; // x1
  int v13; // w8
  _DWORD *v14; // x21
  unsigned int v15; // w23
  char *v16; // x8
  __int64 v17; // x22
  __int64 v19; // x0

  if ( (byte_4187AFF & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_MapGimmickMaster___, *(_QWORD *)&spotId);
    sub_B2C35C(&Method_DataMasterBase_getEntitys_MapGimmickEntity___, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    byte_4187AFF = 1;
  }
  v10 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_MapGimmickMaster___);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
               (DataMasterBase_o *)Instance,
               (const MethodInfo_17342C0 *)Method_DataMasterBase_getEntitys_MapGimmickEntity___);
  if ( !Instance )
    goto LABEL_16;
  v13 = *((_DWORD *)Instance + 6);
  v14 = Instance;
  if ( v13 >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= v13 )
      {
        v19 = sub_B2C460(Instance);
        sub_B2C400(v19, 0LL);
      }
      v16 = (char *)&v14[2 * v15];
      v17 = *((_QWORD *)v16 + 4);
      if ( !v17 )
        break;
      Instance = (void *)MapGimmickEntity__GetRaidDispSpotIdFromScript(*((MapGimmickEntity_o **)v16 + 4), 0LL);
      if ( (_DWORD)Instance == spotId )
      {
        if ( !v10 )
          break;
        System_Collections_Generic_List_int___Add(
          v10,
          *(_DWORD *)(v17 + 16),
          (const MethodInfo_2F66FF8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      v13 = v14[6];
      if ( (int)++v15 >= v13 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B2C434(Instance, v12);
  }
LABEL_14:
  if ( !v10 )
    goto LABEL_16;
  return System_Collections_Generic_List_int___ToArray(
           v10,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall QuestAfterAction__GetState(QuestAfterAction_o *this, const MethodInfo *method)
{
  QuestAfterAction_o *v2; // x19
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  v2 = this;
  if ( (byte_4187B0D & 1) == 0 )
  {
    this = (QuestAfterAction_o *)sub_B2C35C(&Method_CStateManager_QuestAfterAction__getState__, method);
    byte_4187B0D = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_B2C434(this, method);
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
  QuestAfterAction_StateNone_o *v26; // x22
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *commandTypeIds; // x0
  __int64 v28; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v29; // x21
  QuestAfterAction_StateMain_o *v30; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v31; // x21
  QuestAfterAction_StateAdditional_o *v32; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v33; // x20
  QuestAfterAction_StateInstant_o *v34; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  unsigned int v41; // w25
  int32_t v42; // w20
  System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *v43; // x21
  System_Collections_Generic_List_int__o *v44; // x22
  struct UnityEngine_BoxCollider_o *Component_srcLineSprite; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  struct SrcSpotBasePrefab_o **p_lastDispSpot; // x19
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Collections_Generic_List_int__o *v59; // x20
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7

  if ( (byte_4187AFC & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_QuestAfterAction___ctor__, method);
    sub_B2C35C(&Method_CStateManager_QuestAfterAction__add__, v4);
    sub_B2C35C(&CStateManager_QuestAfterAction__TypeInfo, v5);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__,
      v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__, v8);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Clear__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_B2C35C(&QuestAfterAction_StateAdditional_TypeInfo, v13);
    sub_B2C35C(&QuestAfterAction_StateInstant_TypeInfo, v14);
    sub_B2C35C(&QuestAfterAction_StateMain_TypeInfo, v15);
    sub_B2C35C(&QuestAfterAction_StateNone_TypeInfo, v16);
    byte_4187AFC = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v18 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B2C42C(CStateManager_QuestAfterAction__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v18,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2A08354 *)Method_CStateManager_QuestAfterAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestAfterAction__o *)v18;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.fsm,
      (System_Int32_array **)v18,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    fsm = this->fields.fsm;
    v26 = (QuestAfterAction_StateNone_o *)sub_B2C42C(QuestAfterAction_StateNone_TypeInfo);
    QuestAfterAction_StateNone___ctor(v26, 0LL);
    if ( !fsm )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      0,
      (IState_T__o *)v26,
      (const MethodInfo_2A08420 *)Method_CStateManager_QuestAfterAction__add__);
    v29 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v30 = (QuestAfterAction_StateMain_o *)sub_B2C42C(QuestAfterAction_StateMain_TypeInfo);
    QuestAfterAction_StateMain___ctor(v30, 0LL);
    if ( !v29 )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v29,
      1,
      (IState_T__o *)v30,
      (const MethodInfo_2A08420 *)Method_CStateManager_QuestAfterAction__add__);
    v31 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v32 = (QuestAfterAction_StateAdditional_o *)sub_B2C42C(QuestAfterAction_StateAdditional_TypeInfo);
    QuestAfterAction_StateAdditional___ctor(v32, 0LL);
    if ( !v31 )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v31,
      2,
      (IState_T__o *)v32,
      (const MethodInfo_2A08420 *)Method_CStateManager_QuestAfterAction__add__);
    v33 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v34 = (QuestAfterAction_StateInstant_o *)sub_B2C42C(QuestAfterAction_StateInstant_TypeInfo);
    QuestAfterAction_StateInstant___ctor(v34, 0LL);
    if ( !v33 )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v33,
      3,
      (IState_T__o *)v34,
      (const MethodInfo_2A08420 *)Method_CStateManager_QuestAfterAction__add__);
  }
  QuestAfterAction__SetState(this, 0, v2);
  this->fields.commandBuf = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.commandBuf, 0LL, v35, v36, v37, v38, v39, v40);
  this->fields.commandIdx = 0;
  v41 = -1;
  do
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.commandTypeIds;
    if ( !commandTypeIds )
      goto LABEL_21;
    v42 = v41 + 1;
    commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
                                                                                        commandTypeIds,
                                                                                        v41 + 1,
                                                                                        (const MethodInfo_2E465F8 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    v43 = this->fields.commandTypeIds;
    if ( ((unsigned __int8)commandTypeIds & 1) != 0 )
    {
      if ( !v43 )
        goto LABEL_21;
      commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
                                                                                          (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.commandTypeIds,
                                                                                          v42,
                                                                                          (const MethodInfo_2E462C0 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( !commandTypeIds )
        goto LABEL_21;
      System_Collections_Generic_List_int___Clear(
        (System_Collections_Generic_List_int__o *)commandTypeIds,
        (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__);
    }
    else
    {
      v44 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v44,
        (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v43 )
        goto LABEL_21;
      System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____set_Item(
        v43,
        v42,
        v44,
        (const MethodInfo_2E4635C *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
    }
    ++v41;
  }
  while ( v41 < 3 );
  commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)UnityEngine_Component__get_gameObject(
                                                                                      (UnityEngine_Component_o *)this,
                                                                                      0LL);
  if ( !commandTypeIds
    || (Component_srcLineSprite = (struct UnityEngine_BoxCollider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        (UnityEngine_GameObject_o *)commandTypeIds,
                                                                        (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.screenCollider = Component_srcLineSprite,
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.screenCollider,
          (System_Int32_array **)Component_srcLineSprite,
          v46,
          v47,
          v48,
          v49,
          v50,
          v51),
        (commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.screenCollider) == 0LL) )
  {
LABEL_21:
    sub_B2C434(commandTypeIds, v28);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)commandTypeIds, 0, 0LL);
  this->fields.lastDispSpot = 0LL;
  p_lastDispSpot = &this->fields.lastDispSpot;
  sub_B2C2F8((BattleServantConfConponent_o *)p_lastDispSpot, 0LL, v53, v54, v55, v56, v57, v58);
  v59 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v59,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  *(p_lastDispSpot - 18) = (struct SrcSpotBasePrefab_o *)v59;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(p_lastDispSpot - 18),
    (System_Int32_array **)v59,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
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

  if ( (byte_4187B02 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__,
      *(_QWORD *)&commandType);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v8);
    byte_4187B02 = 1;
  }
  commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.commandTypeIds;
  if ( !commandTypeIds )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
         commandTypeIds,
         commandType,
         (const MethodInfo_2E465F8 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__) )
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.commandTypeIds;
    if ( commandTypeIds )
    {
      commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
                                                                                          commandTypeIds,
                                                                                          commandType,
                                                                                          (const MethodInfo_2E462C0 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( commandTypeIds )
        return System_Collections_Generic_List_int___Contains(
                 (System_Collections_Generic_List_int__o *)commandTypeIds,
                 commandTypeId,
                 (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_9:
    sub_B2C434(commandTypeIds, *(_QWORD *)&commandType);
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
        v11 = sub_B2C460(this);
        sub_B2C400(v11, 0LL);
      }
      v8 = commandBuf->m_Items[v6];
      if ( !v8 )
LABEL_11:
        sub_B2C434(this, *(_QWORD *)&spotId);
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

  if ( (byte_4187B12 & 1) == 0 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, method);
    byte_4187B12 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, method);
    byte_4183C65 = 1;
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
    sub_B2C434(v2, method);
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
  EventMissionActionAddEntity_o *v27; // x23
  EventMissionActionInfo_o *v28; // x21
  WarEntity_o *Entity; // x0
  WarEntity_o *v30; // x21
  EventEntity_o *v31; // x0
  _BOOL8 v32; // x0
  __int64 v33; // x1
  Il2CppObject *current; // x21
  TerminalPramsManager_c *v35; // x0
  __int64 v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x0
  System_Int32_array **klass; // x1
  __int64 v45; // x0
  __int64 v46; // x1
  struct TerminalTransitionInfo_o *v47; // x8
  EventMissionActionEntity_o *v48; // x0
  EventMissionActionEntity_o *v49; // x23
  WarEntity_o *v50; // x0
  WarEntity_o *v51; // x23
  __int64 v52; // x1
  TerminalPramsManager_c *v53; // x0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **vals; // x1
  struct TerminalTransitionInfo_o *v61; // x8
  System_Collections_Generic_List_Enumerator_T__o v62; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v63; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4187B06 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMaster___, method);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___, v2);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionActionMaster___, v3);
    sub_B2C35C(&Method_DataManager_GetMasterData_EventMissionMaster___, v4);
    sub_B2C35C(&Method_DataManager_GetMaster_EventMaster___, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_ShopActionMaster___, v6);
    sub_B2C35C(&Method_DataManager_GetMaster_ShopMaster___, v7);
    sub_B2C35C(&DataManager_TypeInfo, v8);
    sub_B2C35C(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__, v9);
    sub_B2C35C(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__, v10);
    sub_B2C35C(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__get_Current__, v14);
    sub_B2C35C(&EventMissionActionInfo_TypeInfo, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__, v16);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v18);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v19);
    byte_4187B06 = 1;
  }
  memset(&v63, 0, sizeof(v63));
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
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v21);
    byte_4183C65 = 1;
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
      Master_WarQuestSelectionMaster = (char *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_77;
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                 v22->fields.shopId,
                 (const MethodInfo_24E40D0 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( Entity )
      {
        v30 = Entity;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (char *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_EventMaster___);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_77;
        v31 = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                 (int32_t)v30->fields.age,
                                 (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !v31 || !EventEntity__IsEventPeriod(v31, 0LL, 0LL) )
          goto LABEL_76;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (char *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ShopActionMaster___);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_77;
        Master_WarQuestSelectionMaster = (char *)ShopActionMaster__GetEntityList(
                                                   (ShopActionMaster_o *)Master_WarQuestSelectionMaster,
                                                   v30->fields.id,
                                                   0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_77;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v62,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Master_WarQuestSelectionMaster,
          (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
        v63 = v62;
        while ( 1 )
        {
          v32 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v63,
                  (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__);
          if ( !v32 )
            break;
          current = v63.fields.current;
          if ( !v63.fields.current )
            sub_B2C434(v32, v33);
          if ( LODWORD(v63.fields.current[1].monitor) == 4 )
          {
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            }
            if ( !byte_4183CBA )
            {
              sub_B2C35C(&TerminalPramsManager_TypeInfo, v33);
              byte_4183CBA = 1;
            }
            v35 = TerminalPramsManager_TypeInfo;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v35 = TerminalPramsManager_TypeInfo;
            }
            v35->static_fields->meSceneStatus = 2;
            TerminalSceneComponent__CreateTransitionInfo(v24, v22, 0LL);
            TransitionInfo_k__BackingField = v24->fields._TransitionInfo_k__BackingField;
            if ( !TransitionInfo_k__BackingField )
              sub_B2C434(0LL, v36);
            klass = (System_Int32_array **)current[2].klass;
            TransitionInfo_k__BackingField->fields.afterActionVals = (struct System_String_array *)klass;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)&TransitionInfo_k__BackingField->fields.afterActionVals,
              klass,
              v37,
              v38,
              v39,
              v40,
              v41,
              v42);
            v47 = v24->fields._TransitionInfo_k__BackingField;
            if ( !v47 )
              sub_B2C434(v45, v46);
            v47->fields.optionId = (int32_t)current[2].monitor;
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v63,
          (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__);
      }
    }
  }
  else
  {
    Master_WarQuestSelectionMaster = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_77;
    v25 = (DataManager_o *)Master_WarQuestSelectionMaster;
    Master_WarQuestSelectionMaster = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Master_WarQuestSelectionMaster,
                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
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
      v27 = EntityFromIdProgressTypeAndActionType;
      v28 = (EventMissionActionInfo_o *)sub_B2C42C(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_27194656(v28, v27, 0LL);
    }
    else
    {
      Master_WarQuestSelectionMaster = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 v25,
                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
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
      v49 = v48;
      v28 = (EventMissionActionInfo_o *)sub_B2C42C(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v28, v49, 0LL);
    }
    Master_WarQuestSelectionMaster = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               v25,
                                               (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_77;
    v50 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
            (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
            v22->fields.missionId,
            (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( v50 )
    {
      v51 = v50;
      Master_WarQuestSelectionMaster = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 v25,
                                                 (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_77;
      Master_WarQuestSelectionMaster = (char *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                 (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                 HIDWORD(v51->fields.age),
                                                 (const MethodInfo_24E40D0 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_77;
      if ( EventEntity__IsEventPeriod((EventEntity_o *)Master_WarQuestSelectionMaster, 0LL, 0LL) )
      {
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_4183CBA )
        {
          sub_B2C35C(&TerminalPramsManager_TypeInfo, v52);
          byte_4183CBA = 1;
        }
        v53 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v53 = TerminalPramsManager_TypeInfo;
        }
        v53->static_fields->meSceneStatus = 2;
        TerminalSceneComponent__CreateTransitionInfo(v24, v22, 0LL);
        if ( v28 )
        {
          Master_WarQuestSelectionMaster = (char *)v24->fields._TransitionInfo_k__BackingField;
          if ( Master_WarQuestSelectionMaster )
          {
            vals = (System_Int32_array **)v28->fields.vals;
            *((_QWORD *)Master_WarQuestSelectionMaster + 4) = vals;
            sub_B2C2F8(
              (BattleServantConfConponent_o *)(Master_WarQuestSelectionMaster + 32),
              vals,
              v54,
              v55,
              v56,
              v57,
              v58,
              v59);
            v61 = v24->fields._TransitionInfo_k__BackingField;
            if ( v61 )
            {
              v61->fields.optionId = v28->fields.optionId;
              return;
            }
          }
        }
LABEL_77:
        sub_B2C434(Master_WarQuestSelectionMaster, v21);
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
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v9; // x22
  const MethodInfo *v10; // x3

  if ( (byte_4187B03 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__, endAct);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__, v5);
    sub_B2C35C(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo, v6);
    byte_4187B03 = 1;
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
      sub_B2C434(0LL, endAct);
    Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
               svtVoices,
               (const MethodInfo_2E644F0 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    v9 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v9,
      (System_Collections_Generic_IEnumerable_T__o *)Values,
      (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    QuestAfterAction__LoadVoice_25281076(
      this,
      (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)v9,
      endAct,
      v10);
  }
}


void __fastcall QuestAfterAction__LoadVoice_25281076(
        QuestAfterAction_o *this,
        System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *svtVInfos,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  System_Int32_array **v5; // x22
  System_Int32_array **v7; // x20
  __int64 v8; // x8
  CommonUI_o *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x28
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array ***v26; // x27
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Action_o **v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x19
  __int64 v41; // x8
  int32_t v42; // w19
  System_String_o *VoiceAssetName_31404932; // x19
  SoundManager_o *v44; // x20
  System_Action_o *v45; // x21

  v5 = (System_Int32_array **)svtVInfos;
  while ( 1 )
  {
    if ( (byte_4187B04 & 1) == 0 )
    {
      sub_B2C35C(&System_Action_TypeInfo, svtVInfos);
      sub_B2C35C(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___, v10);
      sub_B2C35C(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__, v11);
      sub_B2C35C(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__, v12);
      sub_B2C35C(&ServantVoiceEntity_TypeInfo, v13);
      sub_B2C35C(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v14);
      sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
      sub_B2C35C(&Method_QuestAfterAction___c__DisplayClass64_0__LoadVoice_b__0__, v16);
      sub_B2C35C(&QuestAfterAction___c__DisplayClass64_0_TypeInfo, v17);
      byte_4187B04 = 1;
    }
    v18 = sub_B2C42C(QuestAfterAction___c__DisplayClass64_0_TypeInfo);
    QuestAfterAction___c__DisplayClass64_0___ctor((QuestAfterAction___c__DisplayClass64_0_o *)v18, 0LL);
    if ( !v18 )
      goto LABEL_25;
    *(_QWORD *)(v18 + 16) = v5;
    v26 = (System_Int32_array ***)(v18 + 16);
    sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 16), v5, v20, v21, v22, v23, v24, v25);
    *(_QWORD *)(v18 + 24) = this;
    sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 24), (System_Int32_array **)this, v27, v28, v29, v30, v31, v32);
    *(_QWORD *)(v18 + 32) = endAct;
    v33 = (System_Action_o **)(v18 + 32);
    sub_B2C2F8((BattleServantConfConponent_o *)(v18 + 32), (System_Int32_array **)endAct, v34, v35, v36, v37, v38, v39);
    Instance = (CommonUI_o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                               *(System_Collections_Generic_IEnumerable_TSource__o **)(v18 + 16),
                               (const MethodInfo_17385C0 *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, 0, 0LL);
        ActionExtensions__Call(*v33, 0LL);
        return;
      }
LABEL_25:
      sub_B2C434(Instance, v19);
    }
    v7 = *v26;
    if ( !*v26 )
      goto LABEL_25;
    if ( !*((_DWORD *)v7 + 6) )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    v8 = *(_QWORD *)&v7[2]->m_Items[1];
    if ( !v8 )
      goto LABEL_25;
    if ( *(_DWORD *)(v8 + 16) )
      break;
    Instance = (CommonUI_o *)*v26;
    if ( !*v26 )
      goto LABEL_25;
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)Instance,
      0,
      (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    v5 = *v26;
    endAct = *v33;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_25;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v40 = *v26;
  if ( !*v26 )
    goto LABEL_25;
  if ( !*((_DWORD *)v40 + 6) )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v41 = *(_QWORD *)&v40[2]->m_Items[1];
  if ( !v41 )
    goto LABEL_25;
  v42 = *(_DWORD *)(v41 + 16);
  if ( (BYTE3(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantVoiceEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantVoiceEntity_TypeInfo);
  }
  VoiceAssetName_31404932 = ServantVoiceEntity__getVoiceAssetName_31404932(v42, 0LL);
  v44 = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v45 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v45, (Il2CppObject *)v18, Method_QuestAfterAction___c__DisplayClass64_0__LoadVoice_b__0__, 0LL);
  if ( !v44 )
    goto LABEL_25;
  SoundManager__LoadAudioAssetStorage(v44, VoiceAssetName_31404932, v45, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall QuestAfterAction__MapObjName(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        const MethodInfo *method)
{
  __int64 v6; // x1

  if ( (byte_4187B11 & 1) == 0 )
  {
    sub_B2C35C(&SrcSpotBasePrefab_TypeInfo, *(_QWORD *)&comType);
    sub_B2C35C(&StringLiteral_1/*""*/, v6);
    byte_4187B11 = 1;
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
  __int64 v4; // x1
  UnityEngine_Collider_o *screenCollider; // x0
  const MethodInfo *v6; // x1

  if ( (byte_4187B0B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Clear__, method);
    byte_4187B0B = 1;
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
    sub_B2C434(screenCollider, v4);
  }
  System_Collections_Generic_List_int___Clear(
    (System_Collections_Generic_List_int__o *)screenCollider,
    (const MethodInfo_2F67404 *)Method_System_Collections_Generic_List_int__Clear__);
  QuestAfterAction__Init(this, v6);
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
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Action_o *v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x2

  if ( (byte_4187B08 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, endAct);
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v5);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v6);
    sub_B2C35C(&Method_QuestAfterAction___c__DisplayClass68_0__Play_b__0__, v7);
    sub_B2C35C(&QuestAfterAction___c__DisplayClass68_0_TypeInfo, v8);
    byte_4187B08 = 1;
  }
  v9 = sub_B2C42C(QuestAfterAction___c__DisplayClass68_0_TypeInfo);
  QuestAfterAction___c__DisplayClass68_0___ctor((QuestAfterAction___c__DisplayClass68_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_11;
  *(_QWORD *)(v9 + 16) = endAct;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)endAct, v12, v13, v14, v15, v16, v17);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v10 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v10 )
LABEL_11:
    sub_B2C434(v10, v11);
  MissionNotifyManager__StartPause(v10, 0LL);
  v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)v9, Method_QuestAfterAction___c__DisplayClass68_0__Play_b__0__, 0LL);
  this->fields.endAct = v18;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.endAct,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  if ( this->fields.commandBuf )
    QuestAfterAction__SetState(this, 1, v25);
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
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  const MethodInfo *v27; // x1
  struct QuestAfterAction_Command_array *CommandBuf; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  System_Action_o *v35; // x21
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  System_Action_o *v42; // x21
  const MethodInfo *v43; // x2
  System_Collections_IEnumerator_o *v44; // x1

  if ( (byte_4187B09 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, actionVals);
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v8);
    sub_B2C35C(&Method_QuestAfterAction___c__DisplayClass69_0__PlaySpecifiedAction_b__0__, v9);
    sub_B2C35C(&Method_QuestAfterAction___c__DisplayClass69_0__PlaySpecifiedAction_b__1__, v10);
    sub_B2C35C(&QuestAfterAction___c__DisplayClass69_0_TypeInfo, v11);
    byte_4187B09 = 1;
  }
  v12 = sub_B2C42C(QuestAfterAction___c__DisplayClass69_0_TypeInfo);
  QuestAfterAction___c__DisplayClass69_0___ctor((QuestAfterAction___c__DisplayClass69_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_11;
  *(_QWORD *)(v12 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v12 + 16), (System_Int32_array **)this, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = finishCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v12 + 24),
    (System_Int32_array **)finishCallback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v12 + 24), 0LL);
    return;
  }
  CommandBuf = QuestAfterAction__GenerateCommandBuf(actionVals, v27);
  this->fields.temporaryCommandBuf = CommandBuf;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.temporaryCommandBuf,
    (System_Int32_array **)CommandBuf,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v13 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v13 )
LABEL_11:
    sub_B2C434(v13, v14);
  MissionNotifyManager__StartPause(v13, 0LL);
  v35 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v12,
    Method_QuestAfterAction___c__DisplayClass69_0__PlaySpecifiedAction_b__0__,
    0LL);
  this->fields.endAct = v35;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.endAct,
    (System_Int32_array **)v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v42,
    (Il2CppObject *)v12,
    Method_QuestAfterAction___c__DisplayClass69_0__PlaySpecifiedAction_b__1__,
    0LL);
  v44 = QuestAfterAction__WaitWhileMainStateFinished(this, v42, v43);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, v44, 0LL);
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
  System_Action_o *v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  const MethodInfo *v21; // x2

  if ( (byte_4187B0A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, actionVals);
    sub_B2C35C(&Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__70_0__, v5);
    byte_4187B0A = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL) )
  {
    CommandBuf = QuestAfterAction__GenerateCommandBuf(actionVals, v6);
    this->fields.temporaryCommandBuf = CommandBuf;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.temporaryCommandBuf,
      (System_Int32_array **)CommandBuf,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
    v14 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(
      v14,
      (Il2CppObject *)this,
      Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__70_0__,
      0LL);
    this->fields.endAct = v14;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.endAct,
      (System_Int32_array **)v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    QuestAfterAction__SetState(this, 3, v21);
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

  if ( (byte_4187B10 & 1) == 0 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, *(_QWORD *)&cType);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v7);
    byte_4187B10 = 1;
  }
  this->fields.ActionMapTargetType = cType;
  this->fields.ActionMapTargetId = cTarget;
  QuestAfterAction__SetState(this, 0, *(const MethodInfo **)&cTarget);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C70 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v8);
    byte_4183C70 = 1;
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
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v8);
    byte_4183C65 = 1;
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
    sub_B2C434(v10, v8);
  ScrTerminalMap__RequestMapChange(v10, 0, -1, -1, 0LL);
}


void __fastcall QuestAfterAction__SetActionMap(
        QuestAfterAction_o *this,
        QuestAfterAction_Command_o *com,
        const MethodInfo *method)
{
  QuestAfterAction_Command_o *v3; // x20
  QuestAfterAction_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int id; // w8
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

  v3 = com;
  v4 = this;
  if ( (byte_4187B01 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, com);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, v5);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v6);
    this = (QuestAfterAction_o *)sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_4187B01 = 1;
  }
  if ( v4->fields.ActionMapTargetType == -1 )
  {
    if ( !v3 )
      goto LABEL_46;
    id = v3->fields.id;
    if ( id > 307 )
    {
      if ( id > 500 )
      {
        if ( id == 510 )
        {
          v4->fields.ActionMapTargetType = 0;
          param = v3->fields.param;
          this = (QuestAfterAction_o *)sub_B2C374(char___TypeInfo, 1LL);
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
          sub_B2C434(this, com);
        }
        if ( id == 550 )
        {
          v9 = 3;
LABEL_23:
          v4->fields.ActionMapTargetType = v9;
          v12 = v3->fields.param;
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
          this = (QuestAfterAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
            v19 = v3->fields.param;
            v20 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
            this = (QuestAfterAction_o *)System_Int32__Parse(v19, 0LL);
            if ( v20 )
            {
              this = (QuestAfterAction_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             v20,
                                             (int32_t)this,
                                             (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
    v12 = v3->fields.param;
    v13 = char___TypeInfo;
LABEL_24:
    this = (QuestAfterAction_o *)sub_B2C374(v13, 1LL);
    if ( this )
    {
      com = (QuestAfterAction_Command_o *)this;
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
          v21 = sub_B2C460(this);
          sub_B2C400(v21, 0LL);
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

  if ( (byte_4187B0E & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_QuestAfterAction__setState__, *(_QWORD *)&state);
    byte_4187B0E = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B2C434(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
    state,
    (const MethodInfo_2A084C4 *)Method_CStateManager_QuestAfterAction__setState__);
}


void __fastcall QuestAfterAction__SkipToNextAction(QuestAfterAction_o *this, const MethodInfo *method)
{
  this->fields.isSkippedNext = 1;
}


void __fastcall QuestAfterAction__Update(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x0

  if ( (byte_4187B07 & 1) == 0 )
  {
    sub_B2C35C(&Method_CStateManager_QuestAfterAction__update__, method);
    byte_4187B07 = 1;
  }
  fsm = this->fields.fsm;
  if ( fsm )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      (const MethodInfo_2A0849C *)Method_CStateManager_QuestAfterAction__update__);
}


System_Collections_IEnumerator_o *__fastcall QuestAfterAction__WaitWhileMainStateFinished(
        QuestAfterAction_o *this,
        System_Action_o *action,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
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

  if ( (byte_4187B0C & 1) == 0 )
  {
    sub_B2C35C(&QuestAfterAction__WaitWhileMainStateFinished_d__73_TypeInfo, action);
    byte_4187B0C = 1;
  }
  v5 = sub_B2C42C(QuestAfterAction__WaitWhileMainStateFinished_d__73_TypeInfo);
  QuestAfterAction__WaitWhileMainStateFinished_d__73___ctor(
    (QuestAfterAction__WaitWhileMainStateFinished_d__73_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B2C434(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = action;
  sub_B2C2F8((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)action, v14, v15, v16, v17, v18, v19);
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.endAct, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.temporaryCommandBuf = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.temporaryCommandBuf, 0LL, v9, v10, v11, v12, v13, v14);
  QuestAfterAction__SetState(this, 0, v15);
}


System_Int32_array *__fastcall QuestAfterAction__getMapGmkOffIdList(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *invalidMapGimmickIdList; // x0

  if ( (byte_4187B00 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, method);
    byte_4187B00 = 1;
  }
  invalidMapGimmickIdList = this->fields.invalidMapGimmickIdList;
  if ( !invalidMapGimmickIdList )
    sub_B2C434(0LL, method);
  return System_Collections_Generic_List_int___ToArray(
           invalidMapGimmickIdList,
           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v14; // x20
  _BOOL8 v15; // x0
  __int64 v16; // x1
  int32_t klass; // w20
  System_String_o *VoiceAssetName_31404932; // x20
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4187B05 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__, v8);
    sub_B2C35C(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo, v9);
    sub_B2C35C(&ServantVoiceEntity_TypeInfo, v10);
    sub_B2C35C(&SoundManager_TypeInfo, v11);
    byte_4187B05 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
    goto LABEL_18;
  Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
             svtVoices,
             (const MethodInfo_2E644F0 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
  v14 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v14,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
  if ( !v14 )
    goto LABEL_18;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v19,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v14,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v19,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__);
    if ( !v15 )
      break;
    if ( !v19.fields.current )
      sub_B2C434(v15, v16);
    klass = (int32_t)v19.fields.current[1].klass;
    if ( (BYTE3(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ServantVoiceEntity_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ServantVoiceEntity_TypeInfo);
    }
    VoiceAssetName_31404932 = ServantVoiceEntity__getVoiceAssetName_31404932(klass, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__releaseAudioAssetStorage(VoiceAssetName_31404932, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v19,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
LABEL_18:
    sub_B2C434(svtVoices, method);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)svtVoices,
    (const MethodInfo_2E64928 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
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
  __int64 Instance; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerable_T__o *v19; // x22
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v21; // x21
  System_Random_o *v22; // x22
  __int64 size; // x1
  unsigned int v24; // w0
  int32_t v25; // w24
  System_String_o *v26; // x25
  int v27; // w8
  __int64 v28; // x25
  System_String_o *v29; // x25
  __int64 v30; // x8
  __int64 v31; // x8
  System_String_o *v32; // x26
  int32_t v33; // w1
  System_String_o *v34; // x21
  int v35; // w8
  __int64 v36; // x21
  __int64 v38; // x0
  int32_t result; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_41852D9 & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, svtId);
    sub_B2C35C(&Method_DataManager_GetMasterData_VoicePlayCondMaster___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__RemoveAt__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Count__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__get_Item__, v9);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v10);
    sub_B2C35C(&System_Random_TypeInfo, v11);
    sub_B2C35C(&ServantVoiceEntity_TypeInfo, v12);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_15905/*"_"*/, v15);
    byte_41852D9 = 1;
  }
  result = 0;
  *svtId = 0;
  if ( this->fields.id != 800 )
    return 0LL;
  param = this->fields.param;
  Instance = sub_B2C374(char___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_56;
  v18 = Instance;
  if ( !*(_DWORD *)(Instance + 24) )
    goto LABEL_57;
  *(_WORD *)(Instance + 32) = 44;
  if ( !param )
    goto LABEL_56;
  Instance = (__int64)System_String__Split(param, (System_Char_array *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_56;
  v19 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
  if ( *(int *)(Instance + 24) > 1 )
  {
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
      v21 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
        v21,
        v19,
        (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_string___ctor__);
      result = 0;
      v22 = (System_Random_o *)sub_B2C42C(System_Random_TypeInfo);
      System_Random___ctor(v22, 0LL);
      if ( v21 )
      {
        if ( v22 )
        {
          size = (unsigned int)v21->fields._size;
          while ( 1 )
          {
            v24 = ((__int64 (__fastcall *)(System_Random_o *, __int64, Il2CppMethodPointer))v22->klass->vtable._7_Next.method)(
                    v22,
                    size,
                    v22->klass->vtable._8_NextDouble.methodPtr);
            result = 0;
            v25 = v24;
            if ( v21->fields._size <= v24 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
            v26 = (System_String_o *)v21->fields._items->m_Items[v24];
            Instance = sub_B2C374(char___TypeInfo, 1LL);
            if ( !Instance )
              break;
            v18 = Instance;
            if ( !*(_DWORD *)(Instance + 24) )
              goto LABEL_57;
            *(_WORD *)(Instance + 32) = 95;
            if ( !v26 )
              break;
            Instance = (__int64)System_String__Split(v26, (System_Char_array *)Instance, 0LL);
            if ( !Instance )
              break;
            v27 = *(_DWORD *)(Instance + 24);
            v28 = Instance;
            if ( v27 == 3 )
            {
              Instance = System_Int32__TryParse(*(System_String_o **)(Instance + 32), &result, 0LL);
              if ( *(_DWORD *)(v28 + 24) < 3u )
                goto LABEL_57;
              Instance = (__int64)System_String__Concat_44307816(
                                    *(System_String_o **)(v28 + 40),
                                    (System_String_o *)StringLiteral_15905/*"_"*/,
                                    *(System_String_o **)(v28 + 48),
                                    0LL);
              if ( !MasterData_WarQuestSelectionMaster )
                break;
              v33 = result;
              v29 = (System_String_o *)Instance;
            }
            else
            {
              if ( v27 != 2 )
                goto LABEL_42;
              result = 0;
              if ( v21->fields._size <= (unsigned int)v25 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
              v29 = (System_String_o *)v21->fields._items->m_Items[v25];
              if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              }
              if ( !byte_4183C65 )
              {
                sub_B2C35C(&TerminalSceneComponent_TypeInfo, v18);
                byte_4183C65 = 1;
              }
              Instance = (__int64)TerminalSceneComponent_TypeInfo;
              if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                Instance = (__int64)TerminalSceneComponent_TypeInfo;
              }
              v30 = **(_QWORD **)(Instance + 184);
              if ( !v30 )
                break;
              v31 = *(_QWORD *)(v30 + 448);
              if ( !v31 )
                break;
              v32 = *(System_String_o **)(v31 + 40);
              if ( (BYTE3(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !ServantVoiceEntity_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(ServantVoiceEntity_TypeInfo);
              }
              Instance = ServantVoiceEntity__getSvtIdfromVoiceAssetName(v32, 0LL);
              if ( !MasterData_WarQuestSelectionMaster )
                break;
              v33 = Instance;
            }
            if ( VoicePlayCondMaster__isVoicePlay(MasterData_WarQuestSelectionMaster, v33, v29, 0LL, -1LL, -1, 0LL) )
            {
              *svtId = result;
              return v29;
            }
LABEL_42:
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              (System_Collections_Generic_List_XWeaponTrail_Element__o *)v21,
              v25,
              (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_string__RemoveAt__);
            size = (unsigned int)v21->fields._size;
            if ( !(_DWORD)size )
            {
              v29 = 0LL;
              *svtId = 0;
              return v29;
            }
          }
        }
      }
    }
LABEL_56:
    sub_B2C434(Instance, v18);
  }
  v34 = this->fields.param;
  Instance = sub_B2C374(char___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_56;
  v18 = Instance;
  if ( !*(_DWORD *)(Instance + 24) )
  {
LABEL_57:
    v38 = sub_B2C460(Instance);
    sub_B2C400(v38, 0LL);
  }
  *(_WORD *)(Instance + 32) = 95;
  if ( !v34 )
    goto LABEL_56;
  Instance = (__int64)System_String__Split(v34, (System_Char_array *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_56;
  v35 = *(_DWORD *)(Instance + 24);
  v36 = Instance;
  if ( v35 == 3 )
  {
    Instance = System_Int32__TryParse(*(System_String_o **)(Instance + 32), svtId, 0LL);
    if ( *(_DWORD *)(v36 + 24) >= 3u )
      return System_String__Concat_44307816(
               *(System_String_o **)(v36 + 40),
               (System_String_o *)StringLiteral_15905/*"_"*/,
               *(System_String_o **)(v36 + 48),
               0LL);
    goto LABEL_57;
  }
  if ( v35 != 2 )
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
  __int64 v8; // x1
  WarEntity_o *v9; // [xsp+0h] [xbp-20h] BYREF
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_41852DC & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_BgmMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_41852DC = 1;
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_12;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_BgmMaster___);
      if ( !Instance )
        goto LABEL_12;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    &v9,
                                    result,
                                    (const MethodInfo_24E412C *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( v9 )
          return v9->fields.age;
LABEL_12:
        sub_B2C434(Instance, v8);
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
  System_String_array *v7; // x1
  __int64 v8; // x0
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_41852DA & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, str);
    byte_41852DA = 1;
  }
  result = 0;
  v5 = 0;
  if ( this->fields.id == 800 )
  {
    v6 = (System_String_array *)sub_B2C374(char___TypeInfo, 1LL);
    if ( !v6 )
      goto LABEL_14;
    v7 = v6;
    if ( !v6->max_length )
    {
      v8 = sub_B2C460(v6);
      sub_B2C400(v8, 0LL);
    }
    LOWORD(v6->m_Items[0]) = 95;
    if ( !str || (v6 = System_String__Split(str, (System_Char_array *)v6, 0LL)) == 0LL )
LABEL_14:
      sub_B2C434(v6, v7);
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
  System_String_array *v7; // x1
  il2cpp_array_size_t max_length; // w8
  __int64 v10; // x0

  v3 = str;
  if ( (byte_41852DB & 1) == 0 )
  {
    sub_B2C35C(&char___TypeInfo, str);
    sub_B2C35C(&StringLiteral_15905/*"_"*/, v5);
    byte_41852DB = 1;
  }
  if ( this->fields.id == 800 )
  {
    v6 = (System_String_array *)sub_B2C374(char___TypeInfo, 1LL);
    if ( !v6 )
      goto LABEL_13;
    v7 = v6;
    if ( !v6->max_length )
    {
      v10 = sub_B2C460(v6);
      sub_B2C400(v10, 0LL);
    }
    LOWORD(v6->m_Items[0]) = 95;
    if ( !v3 || (v6 = System_String__Split(v3, (System_Char_array *)v6, 0LL)) == 0LL )
LABEL_13:
      sub_B2C434(v6, v7);
    max_length = v6->max_length;
    if ( max_length == 2 )
      return v3;
    if ( max_length == 3 )
      return System_String__Concat_44307816(v6->m_Items[1], (System_String_o *)StringLiteral_15905/*"_"*/, v6->m_Items[2], 0LL);
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
    sub_B2C434(this, method);
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
    sub_B2C434(screenCollider, v5);
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
    sub_B2C434(this, 0LL);
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
    sub_B2C434(0LL, v7);
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
    sub_B2C434(0LL, v7);
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
  if ( (byte_41852E1 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Remove__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__ToArray__, v3);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v4);
    sub_B2C35C(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___, v5);
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, v6);
    this = (QuestAfterAction_StateMain_o *)sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v7);
    byte_41852E1 = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_26;
  this = (QuestAfterAction_StateMain_o *)that->fields.invalidMapGimmickIdList;
  if ( !this )
    goto LABEL_26;
  this = (QuestAfterAction_StateMain_o *)System_Collections_Generic_List_int___ToArray(
                                           (System_Collections_Generic_List_int__o *)this,
                                           (const MethodInfo_2F69104 *)Method_System_Collections_Generic_List_int__ToArray__);
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
        v16 = sub_B2C460(this);
        sub_B2C400(v16, 0LL);
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
        (const MethodInfo_2F68974 *)Method_System_Collections_Generic_List_int__Remove__);
      this = (QuestAfterAction_StateMain_o *)v2->fields.that;
      if ( !this )
        break;
      MapComponent_srcLineSprite = QuestAfterAction__GetMapComponent_srcLineSprite_(
                                     (QuestAfterAction_o *)this,
                                     2,
                                     v13,
                                     v2,
                                     (const MethodInfo_2098774 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
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
        this = (QuestAfterAction_StateMain_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapComponent_srcLineSprite || !this )
          break;
        this = (QuestAfterAction_StateMain_o *)QuestTree__CheckMapGimmickCond_21872636(
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
    sub_B2C434(this, method);
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
  __int64 v100; // x1
  QuestAfterAction_StateMain___c__DisplayClass16_0_o *v101; // x21
  __int64 updated; // x0
  const MethodInfo *v103; // x1
  QuestAfterAction_o **p_that; // x20
  long double v105; // q0
  QuestAfterAction_StateMain_c *klass; // x8
  __int64 v107; // x22
  QuestAfterAction_Command_o *v108; // x22
  QuestAfterAction_o *v109; // x23
  BlankEarthQuestAfterAction_o *BlankEarthQuestAfterAction_k__BackingField; // x24
  System_Action_o *v111; // x25
  int id; // w8
  float v113; // s0
  __int64 v114; // x1
  float DEFAULT_FADE_TIME; // s8
  AvalonSceneManager_c *v116; // x0
  TerminalSceneComponent_c *v117; // x0
  TerminalSceneComponent_o *mInstance; // x19
  System_Action_o *v119; // x20
  __int64 MyFsmP; // x0
  TerminalSceneComponent_o *v121; // x0
  float v122; // s0
  System_Action_o *v123; // x1
  System_String_o *v124; // x19
  System_String_o *v125; // x20
  System_String_o *v126; // x20
  CommonUI_o *Instance; // x22
  System_Action_o *v128; // x23
  System_String_o *v129; // x23
  __int64 v130; // x8
  __int64 v131; // x24
  float v132; // s8
  System_String_o *v133; // x21
  QuestAfterAction_StateMain___c__DisplayClass16_10_o *v134; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o **p_CS___8__locals10; // x23
  System_String_o *v136; // x21
  __int64 v137; // x8
  __int64 v138; // x22
  int32_t v139; // w21
  _BOOL4 v140; // w24
  bool v141; // w25
  System_String_o *v142; // x21
  __int64 v143; // x23
  int32_t v144; // w21
  int32_t v145; // w22
  int32_t v146; // w23
  QuestAfterAction_StateMain___c__DisplayClass16_1_o *v147; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals1; // x8
  QuestAfterAction_o *v149; // x21
  srcLineSprite_o *v150; // x0
  UnityEngine_Object_o *spot; // x19
  SrcSpotBasePrefab_o *v152; // x19
  System_Action_o *v153; // x21
  int32_t v154; // w1
  QuestAfterAction_StateMain___c__DisplayClass16_4_o *v155; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals4; // x8
  QuestAfterAction_o *v157; // x21
  srcLineSprite_o *v158; // x0
  UnityEngine_Object_o *roadModel; // x19
  ModelLineComponent_o *v160; // x19
  System_Action_o *v161; // x21
  int32_t v162; // w1
  System_String_o *v163; // x21
  const MethodInfo *v164; // x2
  __int64 v165; // x8
  QuestAfterAction_o *v166; // x9
  QuestAfterAction_TitleInfoControlCallback_o *TitleInfoCtrlCallback_k__BackingField; // x20
  int32_t v168; // w20
  QuestEntity_o *v169; // x22
  const MethodInfo *v170; // x2
  __int64 v171; // x21
  __int64 v172; // x1
  TerminalPramsManager_c *v173; // x0
  int32_t v174; // w20
  clsQuestCheck_o *v175; // x19
  QuestAfterAction_StateMain___c_c *v176; // x8
  struct QuestAfterAction_StateMain___c_StaticFields *v177; // x9
  System_Action_o *_9__16_33; // x20
  Il2CppObject *v179; // x21
  struct QuestAfterAction_StateMain___c_StaticFields *v180; // x0
  TerminalSceneComponent_c *v181; // x0
  TerminalSceneComponent_o *v182; // x21
  System_String_o *param; // x21
  __int64 v184; // x22
  int v185; // w23
  float v186; // s8
  int32_t v187; // w21
  QuestAfterAction_o *v188; // x8
  __int64 v189; // x8
  __int64 v190; // x8
  __int64 v191; // x8
  int viewpoint; // w20
  System_String_o *v193; // x20
  System_String_o *v194; // x21
  SeManager_c *v195; // x0
  float DEFAULT_VOLUME; // s8
  __int64 v197; // x8
  PlayMakerFSM_o *v198; // x20
  System_String_o *ActiveStateName; // x0
  __int64 v200; // x8
  __int64 v201; // x8
  QuestBoardListViewManager_o *v202; // x21
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x8
  System_Action_o *_9__16_31; // x22
  Il2CppObject *v205; // x23
  struct QuestAfterAction_StateMain___c_StaticFields *v206; // x0
  TerminalSceneComponent_c *v207; // x0
  System_String_o *v208; // x20
  __int64 v209; // x21
  int32_t v210; // w20
  int32_t v211; // w22
  System_String_o *v212; // x23
  __int64 v213; // x8
  __int64 v214; // x24
  System_String_o *v215; // x23
  __int64 v216; // x23
  float v217; // s0
  float v218; // s8
  int32_t v219; // w19
  __int64 v220; // x8
  ScrTerminalMap_o *v221; // x24
  float v222; // s0
  float v223; // s9
  float v224; // s0
  const MethodInfo_2155668 *v225; // x2
  float v226; // s0
  float v227; // s1
  float v228; // s2
  float v229; // s10
  float v230; // s9
  float v231; // s11
  MapCamera_o *v232; // x20
  System_Action_o *v233; // x22
  System_String_o *v234; // x23
  __int64 v235; // x8
  __int64 v236; // x24
  System_String_o *v237; // x20
  __int64 v238; // x22
  int32_t v239; // w0
  int32_t v240; // w20
  float v241; // s8
  int32_t v242; // w19
  TerminalPramsManager_c *v243; // x0
  __int64 v244; // x8
  __int64 v245; // x1
  TerminalPramsManager_c *v246; // x0
  __int64 v247; // x1
  int32_t v248; // w21
  TerminalPramsManager_c *v249; // x0
  QuestAfterAction_o *v250; // x20
  UnityEngine_Object_o *v251; // x20
  System_String_o *v252; // x19
  System_String_o *v253; // x20
  System_String_o *v254; // x20
  CommonUI_o *v255; // x22
  System_Action_o *v256; // x23
  System_String_o *v257; // x19
  System_String_o *v258; // x20
  System_String_o *v259; // x20
  CommonUI_o *v260; // x22
  System_Action_o *v261; // x23
  System_String_o *v262; // x23
  System_String_array *v263; // x20
  __int64 v264; // x1
  System_String_o *v265; // x23
  System_String_array *v266; // x20
  __int64 v267; // x1
  UnityEngine_Object_o *MapComponent_srcLineSprite; // x22
  UnityEngine_Component_o *v269; // x20
  __int64 v270; // x8
  ScrTerminalMap_o *v271; // x23
  __int64 v272; // x8
  ScrTerminalMap_o *v273; // x20
  UnityEngine_GameObject_o *gameObject; // x22
  System_Action_o *v275; // x23
  SceneJumpInfo_o *v276; // x21
  System_String_o *v277; // x22
  int v278; // w23
  __int64 v279; // x22
  float v280; // s0
  float v281; // s8
  float v282; // s0
  MapCamera_o *v283; // x19
  float v284; // s0
  float v285; // s9
  int32_t v286; // w20
  System_String_o *v287; // x23
  __int64 v288; // x23
  float v289; // s0
  float v290; // s9
  float v291; // s0
  float v292; // s10
  float v293; // s0
  float v294; // s11
  float v295; // s0
  float v296; // s8
  __int64 v297; // x8
  const MethodInfo_2155668 *v298; // x2
  float v299; // s0
  float v300; // s1
  float v301; // s2
  MapCamera_o *v302; // x0
  float v303; // s0
  float v304; // s1
  float v305; // s2
  float v306; // s3
  int32_t v307; // w1
  System_Action_o *v308; // x2
  System_String_o *v309; // x22
  __int64 v310; // x22
  float v311; // s0
  QuestAfterAction_o *v312; // x20
  float v313; // s8
  UnityEngine_Object_o *v314; // x19
  __int64 v315; // x8
  ScrTerminalMap_o *v316; // x20
  float v317; // s0
  float v318; // s9
  float v319; // s0
  float v320; // s0
  float v321; // s1
  float v322; // s2
  float v323; // s9
  float v324; // s10
  float v325; // s11
  int32_t v326; // w20
  System_Action_o *v327; // x22
  System_String_o *v328; // x21
  __int64 v329; // x8
  __int64 v330; // x22
  int32_t v331; // w21
  bool v332; // w22
  System_String_o *v333; // x21
  __int64 v334; // x8
  __int64 v335; // x22
  int32_t v336; // w21
  bool v337; // w22
  System_String_o *v338; // x21
  __int64 v339; // x8
  __int64 v340; // x22
  int32_t v341; // w21
  bool v342; // w22
  System_String_o *v343; // x21
  __int64 v344; // x21
  QuestAfterAction_o *v345; // x20
  UnityEngine_Object_o *v346; // x20
  UIWidget_o *v347; // x20
  QuestAfterAction_StateMain___c__DisplayClass16_11_o *v348; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o **p_CS___8__locals11; // x23
  System_String_o *v350; // x21
  __int64 v351; // x8
  __int64 v352; // x22
  int32_t v353; // w21
  _BOOL4 v354; // w24
  bool v355; // w25
  QuestAfterAction_StateMain___c__DisplayClass16_12_o *v356; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals12; // x8
  QuestAfterAction_o *v358; // x21
  srcLineSprite_o *v359; // x0
  UnityEngine_Object_o *v360; // x19
  MapGimmickComponent_o *v361; // x19
  System_Action_o *v362; // x21
  TerminalSceneComponent_o *v363; // x19
  QuestAfterAction_StateMain___c__DisplayClass16_13_o *v364; // x20
  System_String_o *v365; // x21
  System_String_array *v366; // x0
  struct System_String_array **p_paramsStr; // x21
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals13; // x8
  struct System_String_array *v369; // x9
  QuestAfterAction_o *v370; // x21
  srcLineSprite_o *v371; // x0
  UnityEngine_Object_o *v372; // x19
  MapGimmickComponent_o *v373; // x19
  System_Action_o *v374; // x0
  __int64 *v375; // x8
  System_Action_o *v376; // x21
  struct System_String_array *paramsStr; // x8
  QuestAfterAction_o *v378; // x21
  srcLineSprite_o *v379; // x0
  QuestAfterAction_StateMain___c__DisplayClass16_13_Fields *v380; // x19
  UnityEngine_Object_o *v381; // x21
  bool v382; // w0
  bool v383; // w22
  int32_t v384; // w1
  System_String_o *v385; // x21
  __int64 v386; // x21
  QuestAfterAction_o *v387; // x22
  srcLineSprite_o *v388; // x22
  QuestAfterAction_StateMain___c__DisplayClass16_3_o *v389; // x23
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o **p_CS___8__locals3; // x20
  QuestAfterAction_o *v391; // x21
  srcLineSprite_o *v392; // x0
  QuestAfterAction_StateMain___c__DisplayClass16_3_Fields *v393; // x19
  UnityEngine_Object_o *v394; // x21
  SrcSpotBasePrefab_o *v395; // x21
  System_Action_o *v396; // x22
  srcLineSprite_o *v397; // x1
  __int64 v398; // x0
  System_String_o *v399; // x21
  __int64 v400; // x22
  QuestAfterAction_o *v401; // x21
  srcLineSprite_o *v402; // x21
  System_Action_o *v403; // x22
  QuestAfterAction_o *v404; // x21
  UnityEngine_Object_o *v405; // x21
  _DWORD *monitor; // x8
  SrcSpotBasePrefab_o *v407; // x0
  int32_t v408; // w1
  QuestAfterAction_StateMain___c__DisplayClass16_2_o *v409; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals2; // x8
  QuestAfterAction_o *v411; // x21
  srcLineSprite_o *v412; // x0
  UnityEngine_Object_o *v413; // x19
  QuestAfterAction_o *v414; // x21
  UnityEngine_Object_o *v415; // x21
  _DWORD *v416; // x8
  QuestAfterAction_o *v417; // x21
  _DWORD *v418; // x8
  System_Action_o *v419; // x21
  const MethodInfo *v420; // x2
  _BOOL4 v421; // w23
  QuestAfterAction_o *v422; // x21
  srcLineSprite_o *v423; // x21
  _DWORD *mcTweenScaleP; // x8
  QuestAfterAction_StateMain___c__DisplayClass16_8_o *v425; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals8; // x8
  QuestAfterAction_o *v427; // x21
  srcLineSprite_o *v428; // x0
  UnityEngine_Object_o *v429; // x19
  _BOOL4 IsMapModel; // w23
  QuestAfterAction_o *v431; // x21
  srcLineSprite_o *v432; // x21
  _DWORD *mcAtlasP; // x8
  QuestAfterAction_StateMain___c__DisplayClass16_6_o *v434; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals6; // x8
  QuestAfterAction_o *v436; // x21
  srcLineSprite_o *v437; // x0
  UnityEngine_Object_o *v438; // x19
  _BOOL4 v439; // w23
  QuestAfterAction_o *v440; // x21
  srcLineSprite_o *v441; // x21
  float v442; // s0
  int v443; // w23
  QuestAfterAction_o *v444; // x25
  UnityEngine_Object_o *v445; // x25
  const MethodInfo_2155668 *v446; // x2
  float x; // s10
  float y; // s9
  float z; // s11
  __int64 v450; // x8
  MapCamera_o *mMapCamera; // x19
  System_Action_o *v452; // x0
  __int64 *v453; // x8
  float v454; // s0
  float v455; // s0
  QuestAfterAction_o *v456; // x25
  UnityEngine_Object_o *MapGameObject; // x25
  __int64 v458; // x8
  const MethodInfo_2155668 *v459; // x2
  System_String_o *v460; // x19
  QuestAfterAction_o *v461; // x25
  UnityEngine_Object_o *v462; // x25
  float v463; // s9
  float v464; // s10
  float v465; // s11
  __int64 v466; // x8
  float v467; // s0
  float v468; // s1
  float v469; // s2
  int v470; // w8
  System_String_o *v471; // x19
  System_String_o *v472; // x20
  int v473; // w8
  System_String_o *v474; // x19
  System_String_o *v475; // x20
  System_String_o *v476; // x20
  CommonUI_o *v477; // x22
  System_Action_o *v478; // x23
  CommonUI_o *v479; // x22
  System_Action_o *v480; // x23
  srcLineSprite_o *v481; // x21
  struct UIAtlas_o *v482; // x8
  QuestAfterAction_StateMain_c *v483; // x8
  int v484; // w0
  srcLineSprite_o *v485; // x21
  srcLineSprite_o *v486; // x21
  struct UIAtlas_o *v487; // x8
  srcLineSprite_o *v488; // x0
  QuestAfterAction_StateMain___c__DisplayClass16_10_Fields *p_fields; // x21
  UnityEngine_Object_o *mapGimmick; // x22
  MapGimmickComponent_o *v491; // x21
  System_Action_o *v492; // x0
  System_Action_o *v493; // x22
  int32_t v494; // w1
  srcLineSprite_o *v495; // x0
  QuestAfterAction_StateMain___c__DisplayClass16_11_Fields *v496; // x21
  UnityEngine_Object_o *v497; // x22
  System_Action_o *v498; // x0
  UnityEngine_Object_o *v499; // x21
  int v500; // w9
  QuestAfterAction_StateMain___c__DisplayClass16_9_o *v501; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals9; // x8
  QuestAfterAction_o *v503; // x21
  srcLineSprite_o *v504; // x0
  UnityEngine_Object_o *v505; // x19
  srcLineSprite_o *v506; // x19
  System_Action_o *v507; // x21
  int32_t v508; // w1
  QuestAfterAction_StateMain___c__DisplayClass16_5_o *v509; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals5; // x8
  QuestAfterAction_o *v511; // x21
  srcLineSprite_o *v512; // x0
  UnityEngine_Object_o *roadSprite; // x19
  QuestAfterAction_StateMain___c__DisplayClass16_7_o *v514; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals7; // x8
  QuestAfterAction_o *v516; // x21
  srcLineSprite_o *v517; // x0
  UnityEngine_Object_o *v518; // x19
  UnityEngine_Object_o *v519; // x21
  UnityEngine_Object_o *v520; // x21
  System_Action_o *v521; // x22
  float v522; // s9
  float v523; // s11
  float v524; // s10
  const MethodInfo_2155668 *v525; // x2
  System_String_o *v526; // x19
  MapGimmickComponent_o *v527; // x0
  System_Action_o *v528; // x2
  __int64 v529; // x8
  ScrTerminalMap_o *v530; // x22
  System_Action_o *v531; // x23
  MapCamera_o *v532; // x19
  float v533; // s0
  System_Action_o *v534; // x0
  __int64 *v535; // x8
  System_Action_o *v536; // x20
  float v537; // s0
  MapCamera_o *v538; // x19
  float v539; // s0
  System_Action_o *v540; // x20
  MapCamera_o *v541; // x0
  float v542; // s0
  int32_t v543; // w4
  System_Action_o *v544; // x5
  MapCamera_o *v545; // x20
  float v546; // s0
  System_Action_o *v547; // x22
  float v548; // s0
  __int64 v549; // x0
  __int64 v550; // x0
  __int64 v551; // x0
  __int64 v552; // x0
  __int64 v553; // x0
  System_Nullable_float__o size; // [xsp+30h] [xbp-A0h] BYREF
  System_Nullable_Vector3__o v555; // [xsp+38h] [xbp-98h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+48h] [xbp-88h] BYREF
  UnityEngine_Color_o color; // [xsp+50h] [xbp-80h] BYREF
  WarEntity_o *entity; // [xsp+88h] [xbp-48h] BYREF
  System_Nullable_float__o v559; // 0:x0.8
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v561; // 0:x0.8
  System_Nullable_float__o v562; // 0:x0.8
  System_Nullable_float__o v563; // 0:x0.8
  System_Nullable_float__o v564; // 0:x3.8
  System_Nullable_Vector3__o v565; // 0:x0.16
  System_Nullable_Vector3__o v566; // 0:x0.16
  System_Nullable_Vector3__o v567; // 0:x0.16
  System_Nullable_Vector3__o v568; // 0:x0.16
  System_Nullable_Vector3__o v569; // 0:x0.16
  System_Nullable_Vector3__o v570; // 0:x1.16
  UnityEngine_Vector3_o v571; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v572; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v573; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v574; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v575; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v577; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v578; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v580; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v581; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v582; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v583; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_41852DF & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, that);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v5);
    sub_B2C35C(&char___TypeInfo, v6);
    sub_B2C35C(&Method_DataManager_GetMasterData_QuestMaster___, v7);
    sub_B2C35C(&Method_DataManager_GetMaster_QuestMaster___, v8);
    sub_B2C35C(&DataManager_TypeInfo, v9);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__, v10);
    sub_B2C35C(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__, v12);
    sub_B2C35C(&FSUtility_TypeInfo, v13);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v14);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___, v15);
    sub_B2C35C(&LocalizationManager_TypeInfo, v16);
    sub_B2C35C(&Method_System_Nullable_float___ctor__, v17);
    sub_B2C35C(&Method_System_Nullable_Vector3___ctor__, v18);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v19);
    sub_B2C35C(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___, v20);
    sub_B2C35C(&Method_QuestAfterAction_GetMapComponent_ModelLineComponent___, v21);
    sub_B2C35C(&Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___, v22);
    sub_B2C35C(&Method_QuestAfterAction_GetMapComponent_srcLineSprite___, v23);
    sub_B2C35C(&SceneJumpInfo_TypeInfo, v24);
    sub_B2C35C(&SeManager_TypeInfo, v25);
    sub_B2C35C(&ServantVoiceEntity_TypeInfo, v26);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v27);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__, v28);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v29);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v30);
    sub_B2C35C(&Method_SingletonTemplate_clsQuestCheck__get_Instance__, v31);
    sub_B2C35C(&Method_SingletonTemplate_QuestTree__get_Instance__, v32);
    sub_B2C35C(&SingletonTemplate_QuestTree__TypeInfo, v33);
    sub_B2C35C(&SingletonTemplate_clsQuestCheck__TypeInfo, v34);
    sub_B2C35C(&SoundManager_TypeInfo, v35);
    sub_B2C35C(&string___TypeInfo, v36);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v37);
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v38);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_31__, v39);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_33__, v40);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__, v41);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__, v42);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__, v43);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__13__, v44);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__14__, v45);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__15__, v46);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__16__, v47);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__17__, v48);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__18__, v49);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__19__, v50);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__20__, v51);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__25__, v52);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__, v53);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__36__, v54);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__37__, v55);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__38__, v56);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__39__, v57);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__40__, v58);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__, v59);
    sub_B2C35C(&QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo, v60);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__21__, v61);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__22__, v62);
    sub_B2C35C(&QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo, v63);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__23__, v64);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__24__, v65);
    sub_B2C35C(&QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo, v66);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__26__, v67);
    sub_B2C35C(&QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo, v68);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__27__, v69);
    sub_B2C35C(&QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo, v70);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__29__, v71);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__30__, v72);
    sub_B2C35C(&QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo, v73);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__, v74);
    sub_B2C35C(&QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo, v75);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__, v76);
    sub_B2C35C(&QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo, v77);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__, v78);
    sub_B2C35C(&QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo, v79);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__, v80);
    sub_B2C35C(&QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo, v81);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__, v82);
    sub_B2C35C(&QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo, v83);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__, v84);
    sub_B2C35C(&QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo, v85);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__, v86);
    sub_B2C35C(&QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo, v87);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__, v88);
    sub_B2C35C(&QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo, v89);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__, v90);
    sub_B2C35C(&QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo, v91);
    sub_B2C35C(&QuestAfterAction_StateMain___c_TypeInfo, v92);
    sub_B2C35C(&StringLiteral_68/*"\r\n"*/, v93);
    sub_B2C35C(&StringLiteral_1157/*"30101"*/, v94);
    sub_B2C35C(&StringLiteral_10887/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v95);
    sub_B2C35C(&StringLiteral_1158/*"30102"*/, v96);
    sub_B2C35C(&StringLiteral_1095/*"10703"*/, v97);
    sub_B2C35C(&StringLiteral_2924/*"CAPTER WAIT"*/, v98);
    sub_B2C35C(&StringLiteral_1/*""*/, v99);
    sub_B2C35C(&StringLiteral_19054/*"gevINFOBAR_BACK"*/, v100);
    byte_41852DF = 1;
  }
  *(_QWORD *)&color.fields.b = 0LL;
  value = 0LL;
  *(_QWORD *)&color.fields.r = 0LL;
  entity = 0LL;
  v101 = (QuestAfterAction_StateMain___c__DisplayClass16_0_o *)sub_B2C42C(QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo);
  QuestAfterAction_StateMain___c__DisplayClass16_0___ctor(v101, 0LL);
  if ( !v101 )
    goto LABEL_1012;
  v101->fields.__4__this = this;
  sub_B2C2F8(&v101->fields, this);
  v101->fields.that = that;
  p_that = &v101->fields.that;
  *(__n128 *)&v105 = sub_B2C2F8(&v101->fields.that, that);
  if ( this->fields.IsAnimDoing )
    return;
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer, long double))this->klass->vtable._10_get_CommandBuf.method)(
              this,
              this->klass->vtable._11_get_CommandIndex.methodPtr,
              v105);
  if ( !updated )
    return;
  if ( !*p_that )
    goto LABEL_1012;
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
LABEL_1012:
    sub_B2C434(updated, v103);
  }
  klass = this->klass;
  this->fields.IsAnimDoing = 1;
  v107 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))klass->vtable._10_get_CommandBuf.method)(
           this,
           klass->vtable._11_get_CommandIndex.methodPtr);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._11_get_CommandIndex.method)(
              this,
              this->klass->vtable._12_set_CommandIndex.methodPtr);
  if ( !v107 )
    goto LABEL_1012;
  if ( (unsigned int)updated >= *(_DWORD *)(v107 + 24) )
  {
LABEL_1018:
    v549 = sub_B2C460(updated);
    sub_B2C400(v549, 0LL);
  }
  v108 = *(QuestAfterAction_Command_o **)(v107 + 8LL * (int)updated + 32);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_Command_o *, Il2CppMethodPointer))this->klass->vtable._9_IsUsableCommand.method)(
              this,
              v108,
              this->klass->vtable._10_get_CommandBuf.methodPtr);
  if ( (updated & 1) == 0 )
    goto LABEL_443;
  v109 = *p_that;
  if ( !*p_that )
    goto LABEL_1012;
  BlankEarthQuestAfterAction_k__BackingField = v109->fields._BlankEarthQuestAfterAction_k__BackingField;
  v111 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v111, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
  if ( !BlankEarthQuestAfterAction_k__BackingField )
    goto LABEL_1012;
  updated = BlankEarthQuestAfterAction__UpdateAnim(BlankEarthQuestAfterAction_k__BackingField, v109, v108, v111, 0LL);
  if ( (updated & 1) != 0 )
    return;
  if ( !v108 )
    goto LABEL_1012;
  id = v108->fields.id;
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
          if ( !byte_4183C65 )
          {
            sub_B2C35C(&TerminalSceneComponent_TypeInfo, v103);
            byte_4183C65 = 1;
          }
          MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v197 = **(_QWORD **)(MyFsmP + 184);
          if ( v197 )
          {
            MyFsmP = *(_QWORD *)(v197 + 248);
            if ( MyFsmP )
            {
              MyFsmP = (__int64)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)MyFsmP, 0LL);
              if ( MyFsmP )
              {
                v198 = (PlayMakerFSM_o *)MyFsmP;
                ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)MyFsmP, 0LL);
                if ( !System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_2924/*"CAPTER WAIT"*/, 0LL) )
                  goto LABEL_443;
                if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                }
                if ( !byte_4183C65 )
                {
                  sub_B2C35C(&TerminalSceneComponent_TypeInfo, v103);
                  byte_4183C65 = 1;
                }
                MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
                if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v200 = **(_QWORD **)(MyFsmP + 184);
                if ( v200 )
                {
                  v201 = *(_QWORD *)(v200 + 248);
                  if ( v201 )
                  {
                    v202 = *(QuestBoardListViewManager_o **)(v201 + 288);
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
                      v205 = (Il2CppObject *)static_fields->__9;
                      _9__16_31 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                      System_Action___ctor(
                        _9__16_31,
                        v205,
                        Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_31__,
                        0LL);
                      v206 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
                      v206->__9__16_31 = _9__16_31;
                      sub_B2C2F8(&v206->__9__16_31, _9__16_31);
                    }
                    if ( v202 )
                    {
                      QuestBoardListViewManager__SetMode(v202, 4, _9__16_31, 0, 0, 0LL);
                      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                      }
                      if ( !byte_4183C65 )
                      {
                        sub_B2C35C(&TerminalSceneComponent_TypeInfo, v103);
                        byte_4183C65 = 1;
                      }
                      v207 = TerminalSceneComponent_TypeInfo;
                      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                        v207 = TerminalSceneComponent_TypeInfo;
                      }
                      MyFsmP = (__int64)v207->static_fields->mInstance;
                      if ( MyFsmP )
                      {
                        TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)MyFsmP, 0LL);
                        PlayMakerFSM__SendEvent(v198, (System_String_o *)StringLiteral_19054/*"gevINFOBAR_BACK"*/, 0LL);
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
          DEFAULT_FADE_TIME = System_Single__Parse(v108->fields.param, 0LL);
          if ( DEFAULT_FADE_TIME <= 0.0 )
          {
            v116 = AvalonSceneManager_TypeInfo;
            if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
              v116 = AvalonSceneManager_TypeInfo;
            }
            DEFAULT_FADE_TIME = v116->static_fields->DEFAULT_FADE_TIME;
          }
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_4183C65 )
          {
            sub_B2C35C(&TerminalSceneComponent_TypeInfo, v114);
            byte_4183C65 = 1;
          }
          v117 = TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v117 = TerminalSceneComponent_TypeInfo;
          }
          mInstance = v117->static_fields->mInstance;
          v119 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            v119,
            (Il2CppObject *)v101,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__,
            0LL);
          if ( mInstance )
          {
            v121 = mInstance;
            v122 = DEFAULT_FADE_TIME;
            v123 = v119;
LABEL_46:
            TerminalSceneComponent__Fadein_MapDisp(v121, v122, v123, 0LL);
            return;
          }
          goto LABEL_1019;
        }
        param = v108->fields.param;
        MyFsmP = sub_B2C374(char___TypeInfo, 1LL);
        if ( !MyFsmP )
          goto LABEL_1019;
        v103 = (const MethodInfo *)MyFsmP;
        if ( *(_DWORD *)(MyFsmP + 24) )
        {
          *(_WORD *)(MyFsmP + 32) = 44;
          if ( !param )
            goto LABEL_1019;
          MyFsmP = (__int64)System_String__Split(param, (System_Char_array *)MyFsmP, 0LL);
          if ( !MyFsmP )
            goto LABEL_1019;
          v184 = MyFsmP;
          if ( *(_DWORD *)(MyFsmP + 24) )
          {
            v185 = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
            v186 = 0.5;
            if ( *(int *)(v184 + 24) >= 2 )
            {
              v187 = System_Int32__Parse(*(System_String_o **)(v184 + 40), 0LL);
              if ( *(int *)(v184 + 24) >= 3 )
                v186 = System_Single__Parse(*(System_String_o **)(v184 + 48), 0LL);
            }
            else
            {
              v187 = v185;
              v185 = -1;
            }
            MyFsmP = (__int64)*p_that;
            if ( *p_that )
            {
              MapComponent_srcLineSprite = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                                     (QuestAfterAction_o *)MyFsmP,
                                                                     0,
                                                                     v187,
                                                                     this,
                                                                     (const MethodInfo_2098774 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Equality(MapComponent_srcLineSprite, 0LL, 0LL) )
                return;
              if ( v185 >= 1 )
              {
                MyFsmP = (__int64)*p_that;
                if ( !*p_that )
                  goto LABEL_1019;
                v269 = (UnityEngine_Component_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                    (QuestAfterAction_o *)MyFsmP,
                                                    0,
                                                    v185,
                                                    this,
                                                    (const MethodInfo_2098774 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v269, 0LL, 0LL) )
                {
                  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  }
                  if ( !byte_4183C65 )
                  {
                    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v103);
                    byte_4183C65 = 1;
                  }
                  MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
                  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
                  }
                  v270 = **(_QWORD **)(MyFsmP + 184);
                  if ( !v270 )
                    goto LABEL_1019;
                  if ( !v269 )
                    goto LABEL_1019;
                  v271 = *(ScrTerminalMap_o **)(v270 + 256);
                  MyFsmP = (__int64)UnityEngine_Component__get_gameObject(v269, 0LL);
                  if ( !v271 )
                    goto LABEL_1019;
                  ScrTerminalMap__SetPlayerIcon(v271, (UnityEngine_GameObject_o *)MyFsmP, 0LL);
                }
              }
              if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              }
              if ( !byte_4183C65 )
              {
                sub_B2C35C(&TerminalSceneComponent_TypeInfo, v103);
                byte_4183C65 = 1;
              }
              MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
              if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
              }
              v272 = **(_QWORD **)(MyFsmP + 184);
              if ( v272 )
              {
                if ( MapComponent_srcLineSprite )
                {
                  v273 = *(ScrTerminalMap_o **)(v272 + 256);
                  gameObject = UnityEngine_Component__get_gameObject(
                                 (UnityEngine_Component_o *)MapComponent_srcLineSprite,
                                 0LL);
                  v275 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                  System_Action___ctor(
                    v275,
                    (Il2CppObject *)this,
                    (intptr_t)this->klass->vtable._15_onEnd.methodPtr,
                    0LL);
                  if ( v273 )
                  {
                    ScrTerminalMap__MovePlayerIcon(v273, gameObject, v187, v275, v186, 0LL);
                    return;
                  }
                }
              }
            }
LABEL_1019:
            sub_B2C434(MyFsmP, v103);
          }
        }
LABEL_1021:
        v550 = sub_B2C460(MyFsmP);
        sub_B2C400(v550, 0LL);
      }
      switch ( id )
      {
        case 400:
          v134 = (QuestAfterAction_StateMain___c__DisplayClass16_10_o *)sub_B2C42C(QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_10___ctor(v134, 0LL);
          if ( !v134 )
            goto LABEL_1019;
          v134->fields.CS___8__locals10 = v101;
          p_CS___8__locals10 = &v134->fields.CS___8__locals10;
          sub_B2C2F8(&v134->fields.CS___8__locals10, v101);
          v136 = v108->fields.param;
          MyFsmP = sub_B2C374(char___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1019;
          v103 = (const MethodInfo *)MyFsmP;
          if ( !*(_DWORD *)(MyFsmP + 24) )
            goto LABEL_1021;
          *(_WORD *)(MyFsmP + 32) = 44;
          if ( !v136 )
            goto LABEL_1019;
          MyFsmP = (__int64)System_String__Split(v136, (System_Char_array *)MyFsmP, 0LL);
          if ( !MyFsmP )
            goto LABEL_1019;
          v137 = *(_QWORD *)(MyFsmP + 24);
          v138 = MyFsmP;
          if ( v137 )
          {
            if ( !(_DWORD)v137 )
              goto LABEL_1021;
            MyFsmP = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
            v139 = MyFsmP;
            if ( *(int *)(v138 + 24) < 2 )
            {
              v140 = 0;
            }
            else
            {
              MyFsmP = System_Int32__Parse(*(System_String_o **)(v138 + 40), 0LL);
              v140 = (int)MyFsmP > 0;
              if ( *(int *)(v138 + 24) >= 3 )
              {
                MyFsmP = System_Int32__Parse(*(System_String_o **)(v138 + 48), 0LL);
                v141 = (int)MyFsmP > 0;
LABEL_871:
                if ( !*p_CS___8__locals10 )
                  goto LABEL_1019;
                MyFsmP = (__int64)(*p_CS___8__locals10)->fields.that;
                if ( !MyFsmP )
                  goto LABEL_1019;
                v488 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         (QuestAfterAction_o *)MyFsmP,
                         2,
                         v139,
                         this,
                         (const MethodInfo_2098774 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
                v134->fields.mapGimmick = (struct MapGimmickComponent_o *)v488;
                p_fields = &v134->fields;
                sub_B2C2F8(&v134->fields, v488);
                mapGimmick = (UnityEngine_Object_o *)v134->fields.mapGimmick;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                MyFsmP = UnityEngine_Object__op_Equality(mapGimmick, 0LL, 0LL);
                if ( (MyFsmP & 1) != 0 )
                  return;
                if ( !p_fields->mapGimmick )
                  goto LABEL_1019;
                p_fields->mapGimmick->fields.isForceNotActive = v141;
                v491 = p_fields->mapGimmick;
                v492 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                v493 = v492;
                if ( v140 )
                {
                  System_Action___ctor(
                    v492,
                    (Il2CppObject *)v134,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__21__,
                    0LL);
                  if ( !v491 )
                    goto LABEL_1019;
                  v494 = 2;
                  goto LABEL_894;
                }
                System_Action___ctor(
                  v492,
                  (Il2CppObject *)v134,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__22__,
                  0LL);
                if ( !v491 )
                  goto LABEL_1019;
                v384 = 2;
                goto LABEL_966;
              }
            }
          }
          else
          {
            v140 = 0;
            v139 = 0;
          }
          v141 = 0;
          goto LABEL_871;
        case 401:
          v348 = (QuestAfterAction_StateMain___c__DisplayClass16_11_o *)sub_B2C42C(QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_11___ctor(v348, 0LL);
          if ( !v348 )
            goto LABEL_1019;
          v348->fields.CS___8__locals11 = v101;
          p_CS___8__locals11 = &v348->fields.CS___8__locals11;
          sub_B2C2F8(&v348->fields.CS___8__locals11, v101);
          v350 = v108->fields.param;
          MyFsmP = sub_B2C374(char___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1019;
          v103 = (const MethodInfo *)MyFsmP;
          if ( !*(_DWORD *)(MyFsmP + 24) )
            goto LABEL_1021;
          *(_WORD *)(MyFsmP + 32) = 44;
          if ( !v350 )
            goto LABEL_1019;
          MyFsmP = (__int64)System_String__Split(v350, (System_Char_array *)MyFsmP, 0LL);
          if ( !MyFsmP )
            goto LABEL_1019;
          v351 = *(_QWORD *)(MyFsmP + 24);
          v352 = MyFsmP;
          if ( v351 )
          {
            if ( !(_DWORD)v351 )
              goto LABEL_1021;
            MyFsmP = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
            v353 = MyFsmP;
            if ( *(int *)(v352 + 24) < 2 )
            {
              v354 = 0;
            }
            else
            {
              MyFsmP = System_Int32__Parse(*(System_String_o **)(v352 + 40), 0LL);
              v354 = (int)MyFsmP > 0;
              if ( *(int *)(v352 + 24) >= 3 )
              {
                MyFsmP = System_Int32__Parse(*(System_String_o **)(v352 + 48), 0LL);
                v355 = (int)MyFsmP > 0;
LABEL_883:
                if ( !*p_CS___8__locals11 )
                  goto LABEL_1019;
                MyFsmP = (__int64)(*p_CS___8__locals11)->fields.that;
                if ( !MyFsmP )
                  goto LABEL_1019;
                v495 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         (QuestAfterAction_o *)MyFsmP,
                         2,
                         v353,
                         this,
                         (const MethodInfo_2098774 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
                v348->fields.mapGimmick = (struct MapGimmickComponent_o *)v495;
                v496 = &v348->fields;
                sub_B2C2F8(&v348->fields, v495);
                v497 = (UnityEngine_Object_o *)v348->fields.mapGimmick;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                MyFsmP = UnityEngine_Object__op_Equality(v497, 0LL, 0LL);
                if ( (MyFsmP & 1) != 0 )
                  return;
                if ( !v496->mapGimmick )
                  goto LABEL_1019;
                v496->mapGimmick->fields.isForceLoop = v355;
                if ( !v496->mapGimmick )
                  goto LABEL_1019;
                v496->mapGimmick->fields.isForceNotActive = 0;
                v491 = v496->mapGimmick;
                v498 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                v493 = v498;
                if ( v354 )
                {
                  System_Action___ctor(
                    v498,
                    (Il2CppObject *)v348,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__23__,
                    0LL);
                  if ( !v491 )
                    goto LABEL_1019;
                  v494 = 3;
LABEL_894:
                  MapGimmickComponent__SetState(v491, v494, v493, 0LL);
                  goto LABEL_443;
                }
                System_Action___ctor(
                  v498,
                  (Il2CppObject *)v348,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__24__,
                  0LL);
                if ( !v491 )
                  goto LABEL_1019;
                v384 = 3;
LABEL_966:
                v527 = v491;
                v528 = v493;
LABEL_967:
                MapGimmickComponent__SetState(v527, v384, v528, 0LL);
                return;
              }
            }
          }
          else
          {
            v354 = 0;
            v353 = 0;
          }
          v355 = 0;
          goto LABEL_883;
        case 402:
          v333 = v108->fields.param;
          MyFsmP = sub_B2C374(char___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1019;
          v103 = (const MethodInfo *)MyFsmP;
          if ( !*(_DWORD *)(MyFsmP + 24) )
            goto LABEL_1021;
          *(_WORD *)(MyFsmP + 32) = 44;
          if ( !v333 )
            goto LABEL_1019;
          MyFsmP = (__int64)System_String__Split(v333, (System_Char_array *)MyFsmP, 0LL);
          if ( !MyFsmP )
            goto LABEL_1019;
          v334 = *(_QWORD *)(MyFsmP + 24);
          v335 = MyFsmP;
          if ( v334 )
          {
            if ( !(_DWORD)v334 )
              goto LABEL_1021;
            v336 = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
            if ( *(int *)(v335 + 24) >= 2 )
            {
              v337 = System_Int32__Parse(*(System_String_o **)(v335 + 40), 0LL) > 0;
LABEL_849:
              MyFsmP = (__int64)*p_that;
              if ( *p_that )
              {
                v485 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         (QuestAfterAction_o *)MyFsmP,
                         2,
                         v336,
                         this,
                         (const MethodInfo_2098774 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                MyFsmP = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v485, 0LL, 0LL);
                if ( (MyFsmP & 1) != 0 )
                  return;
                if ( v485 )
                {
                  BYTE1(v485->fields.mcTo.fields.y) = v337;
                  MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)v485, 0, 0LL);
                  mcAtlasP = v485->fields.mcAtlasP;
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
            v336 = 0;
          }
          v337 = 0;
          goto LABEL_849;
        case 403:
          v338 = v108->fields.param;
          MyFsmP = sub_B2C374(char___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1019;
          v103 = (const MethodInfo *)MyFsmP;
          if ( !*(_DWORD *)(MyFsmP + 24) )
            goto LABEL_1021;
          *(_WORD *)(MyFsmP + 32) = 44;
          if ( !v338 )
            goto LABEL_1019;
          MyFsmP = (__int64)System_String__Split(v338, (System_Char_array *)MyFsmP, 0LL);
          if ( !MyFsmP )
            goto LABEL_1019;
          v339 = *(_QWORD *)(MyFsmP + 24);
          v340 = MyFsmP;
          if ( v339 )
          {
            if ( !(_DWORD)v339 )
              goto LABEL_1021;
            v341 = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
            if ( *(int *)(v340 + 24) >= 2 )
            {
              v342 = System_Int32__Parse(*(System_String_o **)(v340 + 40), 0LL) > 0;
LABEL_859:
              MyFsmP = (__int64)*p_that;
              if ( *p_that )
              {
                v486 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         (QuestAfterAction_o *)MyFsmP,
                         2,
                         v341,
                         this,
                         (const MethodInfo_2098774 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                MyFsmP = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v486, 0LL, 0LL);
                if ( (MyFsmP & 1) != 0 )
                  return;
                if ( v486 )
                {
                  LOBYTE(v486->fields.mcTo.fields.y) = v342;
                  BYTE1(v486->fields.mcTo.fields.y) = 0;
                  MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)v486, 1, 0LL);
                  v487 = v486->fields.mcAtlasP;
                  if ( v487 )
                  {
                    v487->fields.m_CachedPtr = 1;
                    goto LABEL_945;
                  }
                }
              }
              goto LABEL_1019;
            }
          }
          else
          {
            v341 = 0;
          }
          v342 = 0;
          goto LABEL_859;
        case 404:
          v309 = v108->fields.param;
          MyFsmP = sub_B2C374(char___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1019;
          v103 = (const MethodInfo *)MyFsmP;
          if ( !*(_DWORD *)(MyFsmP + 24) )
            goto LABEL_1021;
          *(_WORD *)(MyFsmP + 32) = 44;
          if ( !v309 )
            goto LABEL_1019;
          MyFsmP = (__int64)System_String__Split(v309, (System_Char_array *)MyFsmP, 0LL);
          if ( !MyFsmP )
            goto LABEL_1019;
          v310 = MyFsmP;
          if ( *(int *)(MyFsmP + 24) <= 4 )
            goto LABEL_443;
          v311 = System_Single__Parse(*(System_String_o **)(MyFsmP + 56), 0LL);
          if ( !*(_DWORD *)(v310 + 24) )
            goto LABEL_1021;
          v312 = *p_that;
          v313 = v311;
          MyFsmP = System_Int32__Parse(*(System_String_o **)(v310 + 32), 0LL);
          if ( !v312 )
            goto LABEL_1019;
          v314 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                           v312,
                                           2,
                                           MyFsmP,
                                           this,
                                           (const MethodInfo_2098774 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v314, 0LL, 0LL) )
            return;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_4183C65 )
          {
            sub_B2C35C(&TerminalSceneComponent_TypeInfo, v103);
            byte_4183C65 = 1;
          }
          MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v315 = **(_QWORD **)(MyFsmP + 184);
          if ( !v315 )
            goto LABEL_1019;
          if ( *(_DWORD *)(v310 + 24) <= 1u )
            goto LABEL_1021;
          v316 = *(ScrTerminalMap_o **)(v315 + 256);
          v317 = System_Single__Parse(*(System_String_o **)(v310 + 40), 0LL);
          if ( *(_DWORD *)(v310 + 24) <= 2u )
            goto LABEL_1021;
          v318 = v317;
          v319 = System_Single__Parse(*(System_String_o **)(v310 + 48), 0LL);
          if ( !v316 )
            goto LABEL_1019;
          *(UnityEngine_Vector3_o *)&v320 = ScrTerminalMap__LocalPosFromCoord(v316, v318, v319, 0.0, 0.0, 0LL);
          if ( *(_DWORD *)(v310 + 24) <= 4u )
            goto LABEL_1021;
          v323 = v320;
          v324 = v321;
          v325 = v322;
          v326 = System_Int32__Parse(*(System_String_o **)(v310 + 64), 0LL);
          v327 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            v327,
            (Il2CppObject *)v101,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__25__,
            0LL);
          if ( !v314 )
            goto LABEL_1019;
          v572.fields.y = v324;
          v572.fields.z = v325;
          v572.fields.x = v323;
          MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v314, v572, v313 * 0.001, v326, v327, 0LL);
          return;
        case 405:
          v356 = (QuestAfterAction_StateMain___c__DisplayClass16_12_o *)sub_B2C42C(QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_12___ctor(v356, 0LL);
          if ( !v356 )
            goto LABEL_1019;
          v356->fields.CS___8__locals12 = v101;
          sub_B2C2F8(&v356->fields.CS___8__locals12, v101);
          CS___8__locals12 = v356->fields.CS___8__locals12;
          if ( !CS___8__locals12 )
            goto LABEL_1019;
          v358 = CS___8__locals12->fields.that;
          MyFsmP = System_Int32__Parse(v108->fields.param, 0LL);
          if ( !v358 )
            goto LABEL_1019;
          v359 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                   v358,
                   2,
                   MyFsmP,
                   this,
                   (const MethodInfo_2098774 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          v356->fields.mapGimmick = (struct MapGimmickComponent_o *)v359;
          sub_B2C2F8(&v356->fields, v359);
          v360 = (UnityEngine_Object_o *)v356->fields.mapGimmick;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v360, 0LL, 0LL) )
            return;
          v361 = v356->fields.mapGimmick;
          v362 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            v362,
            (Il2CppObject *)v356,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__26__,
            0LL);
          if ( !v361 )
            goto LABEL_1019;
          MapGimmickComponent__SetState(v361, 3, v362, 0LL);
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_4183C65 )
          {
            sub_B2C35C(&TerminalSceneComponent_TypeInfo, v103);
            byte_4183C65 = 1;
          }
          MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v363 = **(TerminalSceneComponent_o ***)(MyFsmP + 184);
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          }
          if ( !v363 )
            goto LABEL_1019;
          v121 = v363;
          v123 = 0LL;
          v122 = AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME;
          goto LABEL_46;
        case 406:
          v364 = (QuestAfterAction_StateMain___c__DisplayClass16_13_o *)sub_B2C42C(QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_13___ctor(v364, 0LL);
          if ( !v364 )
            goto LABEL_1019;
          v364->fields.CS___8__locals13 = v101;
          sub_B2C2F8(&v364->fields.CS___8__locals13, v101);
          v365 = v108->fields.param;
          MyFsmP = sub_B2C374(char___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1019;
          v103 = (const MethodInfo *)MyFsmP;
          if ( !*(_DWORD *)(MyFsmP + 24) )
            goto LABEL_1021;
          *(_WORD *)(MyFsmP + 32) = 44;
          if ( !v365 )
            goto LABEL_1019;
          v366 = System_String__Split(v365, (System_Char_array *)MyFsmP, 0LL);
          v364->fields.paramsStr = v366;
          p_paramsStr = &v364->fields.paramsStr;
          sub_B2C2F8(&v364->fields.paramsStr, v366);
          CS___8__locals13 = v364->fields.CS___8__locals13;
          if ( !CS___8__locals13 )
            goto LABEL_1019;
          v369 = *p_paramsStr;
          if ( !*p_paramsStr )
            goto LABEL_1019;
          if ( !v369->max_length )
            goto LABEL_1021;
          v370 = CS___8__locals13->fields.that;
          MyFsmP = System_Int32__Parse(v369->m_Items[0], 0LL);
          if ( !v370 )
            goto LABEL_1019;
          v371 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                   v370,
                   2,
                   MyFsmP,
                   this,
                   (const MethodInfo_2098774 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          v364->fields.mapGimmick = (struct MapGimmickComponent_o *)v371;
          sub_B2C2F8(&v364->fields, v371);
          v372 = (UnityEngine_Object_o *)v364->fields.mapGimmick;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v372, 0LL, 0LL) )
            return;
          v373 = v364->fields.mapGimmick;
          v374 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          v375 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__27__;
          v376 = v374;
          goto LABEL_605;
        case 407:
          v343 = v108->fields.param;
          MyFsmP = sub_B2C374(char___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1019;
          v103 = (const MethodInfo *)MyFsmP;
          if ( !*(_DWORD *)(MyFsmP + 24) )
            goto LABEL_1021;
          *(_WORD *)(MyFsmP + 32) = 44;
          if ( !v343 )
            goto LABEL_1019;
          MyFsmP = (__int64)System_String__Split(v343, (System_Char_array *)MyFsmP, 0LL);
          if ( !MyFsmP )
            goto LABEL_1019;
          v344 = MyFsmP;
          if ( !*(_DWORD *)(MyFsmP + 24) )
            goto LABEL_1021;
          v345 = *p_that;
          MyFsmP = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
          if ( !v345 )
            goto LABEL_1019;
          v346 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                           v345,
                                           2,
                                           MyFsmP,
                                           this,
                                           (const MethodInfo_2098774 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          MyFsmP = UnityEngine_Object__op_Equality(v346, 0LL, 0LL);
          if ( (MyFsmP & 1) != 0 )
            return;
          if ( !v346 )
            goto LABEL_1019;
          MyFsmP = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v346, 0LL);
          if ( !MyFsmP )
            goto LABEL_1019;
          MyFsmP = (__int64)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                              (UnityEngine_GameObject_o *)MyFsmP,
                              (const MethodInfo_1AA7988 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
          if ( *(_DWORD *)(v344 + 24) <= 1u )
            goto LABEL_1021;
          v347 = (UIWidget_o *)MyFsmP;
          MyFsmP = UnityEngine_ColorUtility__TryParseHtmlString(*(System_String_o **)(v344 + 40), &color, 0LL);
          if ( !v347 )
            goto LABEL_1019;
          UIWidget__set_color(v347, color, 0LL);
          goto LABEL_443;
        case 408:
          v364 = (QuestAfterAction_StateMain___c__DisplayClass16_13_o *)sub_B2C42C(QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_15___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_15_o *)v364,
            0LL);
          if ( !v364 )
            goto LABEL_1019;
          v364->fields.paramsStr = (struct System_String_array *)v101;
          sub_B2C2F8(&v364->fields.paramsStr, v101);
          paramsStr = v364->fields.paramsStr;
          if ( !paramsStr )
            goto LABEL_1019;
          v378 = *(QuestAfterAction_o **)&paramsStr->max_length;
          MyFsmP = System_Int32__Parse(v108->fields.param, 0LL);
          if ( !v378 )
            goto LABEL_1019;
          v379 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                   v378,
                   2,
                   MyFsmP,
                   this,
                   (const MethodInfo_2098774 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          v364->fields.mapGimmick = (struct MapGimmickComponent_o *)v379;
          v380 = &v364->fields;
          sub_B2C2F8(&v364->fields, v379);
          v381 = (UnityEngine_Object_o *)v364->fields.mapGimmick;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v381, 0LL, 0LL) )
            return;
          if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
          }
          MyFsmP = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !v380->mapGimmick || !MyFsmP )
            goto LABEL_1019;
          v382 = QuestTree__CheckMapGimmickCond_21872636(
                   (QuestTree_o *)MyFsmP,
                   v380->mapGimmick->fields.mMapCtrl_MapGimmickInfo,
                   0LL);
          v373 = v380->mapGimmick;
          v383 = v382;
          v374 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          v376 = v374;
          if ( v383 )
          {
            v375 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__29__;
LABEL_605:
            System_Action___ctor(v374, (Il2CppObject *)v364, *v375, 0LL);
            if ( !v373 )
              goto LABEL_1019;
            v384 = 3;
          }
          else
          {
            System_Action___ctor(
              v374,
              (Il2CppObject *)v364,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__30__,
              0LL);
            if ( !v373 )
              goto LABEL_1019;
            v384 = 2;
          }
          v527 = v373;
          v528 = v376;
          goto LABEL_967;
        case 409:
          v328 = v108->fields.param;
          MyFsmP = sub_B2C374(char___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1019;
          v103 = (const MethodInfo *)MyFsmP;
          if ( !*(_DWORD *)(MyFsmP + 24) )
            goto LABEL_1021;
          *(_WORD *)(MyFsmP + 32) = 44;
          if ( !v328 )
            goto LABEL_1019;
          MyFsmP = (__int64)System_String__Split(v328, (System_Char_array *)MyFsmP, 0LL);
          if ( !MyFsmP )
            goto LABEL_1019;
          v329 = *(_QWORD *)(MyFsmP + 24);
          v330 = MyFsmP;
          if ( v329 )
          {
            if ( !(_DWORD)v329 )
              goto LABEL_1021;
            v331 = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
            if ( *(int *)(v330 + 24) >= 2 )
            {
              v332 = System_Int32__Parse(*(System_String_o **)(v330 + 40), 0LL) > 0;
              goto LABEL_839;
            }
          }
          else
          {
            v331 = 0;
          }
          v332 = 0;
LABEL_839:
          MyFsmP = (__int64)*p_that;
          if ( *p_that )
          {
            v481 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                     (QuestAfterAction_o *)MyFsmP,
                     2,
                     v331,
                     this,
                     (const MethodInfo_2098774 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            MyFsmP = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v481, 0LL, 0LL);
            if ( (MyFsmP & 1) != 0 )
              return;
            if ( v481 )
            {
              LOBYTE(v481->fields.mcTo.fields.y) = v332;
              BYTE1(v481->fields.mcTo.fields.y) = 0;
              MapGimmickComponent__SetDispAnim((MapGimmickComponent_o *)v481, 1, 0LL);
              v482 = v481->fields.mcAtlasP;
              if ( v482 )
              {
                v482->fields.m_CachedPtr = 1;
                v483 = this->klass;
                this->fields.IsAnimDoing = 0;
                v484 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))v483->vtable._11_get_CommandIndex.method)(
                         this,
                         v483->vtable._12_set_CommandIndex.methodPtr);
                ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_CommandIndex.method)(
                  this,
                  (unsigned int)(v484 + 1),
                  this->klass->vtable._13_UpdateAnim.methodPtr);
LABEL_946:
                ((void (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_o *, Il2CppMethodPointer))this->klass->vtable._13_UpdateAnim.method)(
                  this,
                  *p_that,
                  this->klass->vtable._14_EndAnim.methodPtr);
                return;
              }
            }
          }
          goto LABEL_1019;
        default:
          if ( id != 500 )
            return;
          v248 = System_Int32__Parse(v108->fields.param, 0LL);
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_4183CB3 )
          {
            sub_B2C35C(&TerminalPramsManager_TypeInfo, v247);
            byte_4183CB3 = 1;
          }
          v249 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v249 = TerminalPramsManager_TypeInfo;
          }
          v249->static_fields->_AfterActionFocusQuestId_k__BackingField = v248;
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          MyFsmP = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_QuestMaster___);
          if ( !MyFsmP )
            goto LABEL_1019;
          if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                  (DataMasterBase_WarMaster__WarEntity__int__o *)MyFsmP,
                  &entity,
                  v248,
                  (const MethodInfo_24E412C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
            goto LABEL_443;
          MyFsmP = (__int64)entity;
          if ( !entity )
            goto LABEL_1019;
          v250 = *p_that;
          MyFsmP = QuestEntity__getSpotId((QuestEntity_o *)entity, 0LL);
          if ( !v250 )
            goto LABEL_1019;
          v251 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                           v250,
                                           0,
                                           MyFsmP,
                                           this,
                                           (const MethodInfo_2098774 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          MyFsmP = UnityEngine_Object__op_Inequality(v251, 0LL, 0LL);
          if ( (MyFsmP & 1) == 0 )
            goto LABEL_443;
          if ( !v251 )
            goto LABEL_1019;
          SrcSpotBasePrefab__SelectSpot((SrcSpotBasePrefab_o *)v251, 0, 0LL);
          goto LABEL_443;
      }
    }
    if ( id <= 205 )
    {
      switch ( id )
      {
        case 'd':
          v147 = (QuestAfterAction_StateMain___c__DisplayClass16_1_o *)sub_B2C42C(QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_1___ctor(v147, 0LL);
          if ( !v147 )
            goto LABEL_1012;
          v147->fields.CS___8__locals1 = v101;
          sub_B2C2F8(&v147->fields.CS___8__locals1, v101);
          CS___8__locals1 = v147->fields.CS___8__locals1;
          if ( !CS___8__locals1 )
            goto LABEL_1012;
          v149 = CS___8__locals1->fields.that;
          updated = System_Int32__Parse(v108->fields.param, 0LL);
          if ( !v149 )
            goto LABEL_1012;
          v150 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                   v149,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2098774 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          v147->fields.spot = (struct SrcSpotBasePrefab_o *)v150;
          sub_B2C2F8(&v147->fields, v150);
          spot = (UnityEngine_Object_o *)v147->fields.spot;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(spot, 0LL, 0LL) )
            return;
          v152 = v147->fields.spot;
          v153 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            v153,
            (Il2CppObject *)v147,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__,
            0LL);
          if ( !v152 )
            goto LABEL_1012;
          v154 = 2;
          goto LABEL_663;
        case 'e':
          v409 = (QuestAfterAction_StateMain___c__DisplayClass16_2_o *)sub_B2C42C(QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_2___ctor(v409, 0LL);
          if ( !v409 )
            goto LABEL_1012;
          v409->fields.CS___8__locals2 = v101;
          sub_B2C2F8(&v409->fields.CS___8__locals2, v101);
          CS___8__locals2 = v409->fields.CS___8__locals2;
          if ( !CS___8__locals2 )
            goto LABEL_1012;
          v411 = CS___8__locals2->fields.that;
          updated = System_Int32__Parse(v108->fields.param, 0LL);
          if ( !v411 )
            goto LABEL_1012;
          v412 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                   v411,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2098774 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          v409->fields.spot = (struct SrcSpotBasePrefab_o *)v412;
          sub_B2C2F8(&v409->fields, v412);
          v413 = (UnityEngine_Object_o *)v409->fields.spot;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v413, 0LL, 0LL) )
            return;
          v152 = v409->fields.spot;
          v153 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            v153,
            (Il2CppObject *)v409,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__,
            0LL);
          if ( !v152 )
            goto LABEL_1012;
          v154 = 3;
LABEL_663:
          SrcSpotBasePrefab__SetState(v152, v154, v153, 0LL);
          return;
        case 'f':
          v389 = (QuestAfterAction_StateMain___c__DisplayClass16_3_o *)sub_B2C42C(QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_3___ctor(v389, 0LL);
          if ( !v389 )
            goto LABEL_1012;
          v389->fields.CS___8__locals3 = v101;
          p_CS___8__locals3 = &v389->fields.CS___8__locals3;
          sub_B2C2F8(&v389->fields.CS___8__locals3, v101);
          if ( !v389->fields.CS___8__locals3 )
            goto LABEL_1012;
          v391 = v389->fields.CS___8__locals3->fields.that;
          updated = System_Int32__Parse(v108->fields.param, 0LL);
          if ( !v391 )
            goto LABEL_1012;
          v392 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                   v391,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2098774 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          v389->fields.spot = (struct SrcSpotBasePrefab_o *)v392;
          v393 = &v389->fields;
          sub_B2C2F8(&v389->fields, v392);
          v394 = (UnityEngine_Object_o *)v389->fields.spot;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v394, 0LL, 0LL) )
            return;
          v395 = v389->fields.spot;
          v396 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            v396,
            (Il2CppObject *)v389,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__,
            0LL);
          if ( !v395 )
            goto LABEL_1012;
          SrcSpotBasePrefab__SetState(v395, 4, v396, 0LL);
          if ( !*p_CS___8__locals3 )
            goto LABEL_1012;
          updated = (__int64)(*p_CS___8__locals3)->fields.that;
          if ( !updated )
            goto LABEL_1012;
          v397 = (srcLineSprite_o *)v393->spot;
          *(_QWORD *)(updated + 168) = v393->spot;
          v398 = updated + 168;
          goto LABEL_645;
        case 'g':
          v399 = v108->fields.param;
          updated = sub_B2C374(char___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_1012;
          v103 = (const MethodInfo *)updated;
          if ( !*(_DWORD *)(updated + 24) )
            goto LABEL_1018;
          *(_WORD *)(updated + 32) = 44;
          if ( !v399 )
            goto LABEL_1012;
          updated = (__int64)System_String__Split(v399, (System_Char_array *)updated, 0LL);
          if ( !updated )
            goto LABEL_1012;
          v400 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_443;
          v401 = *p_that;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v401 )
            goto LABEL_1012;
          v402 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                   v401,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2098774 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v402, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v400 + 24) <= 1u )
            goto LABEL_1018;
          updated = System_Int32__Parse(*(System_String_o **)(v400 + 40), 0LL);
          if ( !v402 )
            goto LABEL_1012;
          v402[1].fields.miLineH = updated;
          v403 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(v403, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          SrcSpotBasePrefab__SetState((SrcSpotBasePrefab_o *)v402, 5, v403, 0LL);
          updated = (__int64)*p_that;
          if ( !*p_that )
            goto LABEL_1012;
          *(_QWORD *)(updated + 168) = v402;
          v398 = updated + 168;
          v397 = v402;
LABEL_645:
          sub_B2C2F8(v398, v397);
          return;
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
          return;
        case 'n':
          v404 = *p_that;
          updated = System_Int32__Parse(v108->fields.param, 0LL);
          if ( !v404 )
            goto LABEL_1012;
          v405 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                           v404,
                                           0,
                                           updated,
                                           this,
                                           (const MethodInfo_2098774 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          updated = UnityEngine_Object__op_Equality(v405, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v405 )
            goto LABEL_1012;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v405, 0, 0LL);
          monitor = v405[9].monitor;
          if ( !monitor )
            goto LABEL_1012;
          monitor[5] = 0;
          v407 = (SrcSpotBasePrefab_o *)v405;
          v408 = 0;
          goto LABEL_681;
        case 'o':
          v417 = *p_that;
          updated = System_Int32__Parse(v108->fields.param, 0LL);
          if ( !v417 )
            goto LABEL_1012;
          v415 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                           v417,
                                           0,
                                           updated,
                                           this,
                                           (const MethodInfo_2098774 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          updated = UnityEngine_Object__op_Equality(v415, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v415 )
            goto LABEL_1012;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v415, 1, 0LL);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v415, 0, 0LL);
          v418 = v415[9].monitor;
          if ( !v418 )
            goto LABEL_1012;
          v418[5] = 2;
          goto LABEL_680;
        case 'p':
          v414 = *p_that;
          updated = System_Int32__Parse(v108->fields.param, 0LL);
          if ( !v414 )
            goto LABEL_1012;
          v415 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                           v414,
                                           0,
                                           updated,
                                           this,
                                           (const MethodInfo_2098774 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          updated = UnityEngine_Object__op_Equality(v415, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v415 )
            goto LABEL_1012;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v415, 1, 0LL);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v415, 1, 0LL);
          v416 = v415[9].monitor;
          if ( !v416 )
            goto LABEL_1012;
          v416[5] = 1;
LABEL_680:
          v408 = 1;
          v407 = (SrcSpotBasePrefab_o *)v415;
LABEL_681:
          SrcSpotBasePrefab__SetTouchType(v407, v408, 0LL);
          goto LABEL_945;
        case 'q':
          v385 = v108->fields.param;
          updated = sub_B2C374(char___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_1012;
          v103 = (const MethodInfo *)updated;
          if ( !*(_DWORD *)(updated + 24) )
            goto LABEL_1018;
          *(_WORD *)(updated + 32) = 44;
          if ( !v385 )
            goto LABEL_1012;
          updated = (__int64)System_String__Split(v385, (System_Char_array *)updated, 0LL);
          if ( !updated )
            goto LABEL_1012;
          v386 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_443;
          v387 = *p_that;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v387 )
            goto LABEL_1012;
          v388 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                   v387,
                   0,
                   updated,
                   this,
                   (const MethodInfo_2098774 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v388, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v386 + 24) <= 1u )
            goto LABEL_1018;
          updated = System_Int32__Parse(*(System_String_o **)(v386 + 40), 0LL);
          if ( !v388 )
            goto LABEL_1012;
          v388[1].fields.miLineH = updated;
          SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)v388, 1, 0LL);
          goto LABEL_945;
        default:
          switch ( id )
          {
            case 200:
              if ( this->fields.IsMapModel )
              {
                v155 = (QuestAfterAction_StateMain___c__DisplayClass16_4_o *)sub_B2C42C(QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_4___ctor(v155, 0LL);
                if ( !v155 )
                  goto LABEL_1012;
                v155->fields.CS___8__locals4 = v101;
                sub_B2C2F8(&v155->fields.CS___8__locals4, v101);
                CS___8__locals4 = v155->fields.CS___8__locals4;
                if ( !CS___8__locals4 )
                  goto LABEL_1012;
                v157 = CS___8__locals4->fields.that;
                updated = System_Int32__Parse(v108->fields.param, 0LL);
                if ( !v157 )
                  goto LABEL_1012;
                v158 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         v157,
                         1,
                         updated,
                         this,
                         (const MethodInfo_2098774 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                v155->fields.roadModel = (struct ModelLineComponent_o *)v158;
                sub_B2C2F8(&v155->fields, v158);
                roadModel = (UnityEngine_Object_o *)v155->fields.roadModel;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Equality(roadModel, 0LL, 0LL) )
                {
                  v160 = v155->fields.roadModel;
                  v161 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                  System_Action___ctor(
                    v161,
                    (Il2CppObject *)v155,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__,
                    0LL);
                  if ( !v160 )
                    goto LABEL_1012;
                  v162 = 2;
                  goto LABEL_722;
                }
              }
              else
              {
                v509 = (QuestAfterAction_StateMain___c__DisplayClass16_5_o *)sub_B2C42C(QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_5___ctor(v509, 0LL);
                if ( !v509 )
                  goto LABEL_1012;
                v509->fields.CS___8__locals5 = v101;
                sub_B2C2F8(&v509->fields.CS___8__locals5, v101);
                CS___8__locals5 = v509->fields.CS___8__locals5;
                if ( !CS___8__locals5 )
                  goto LABEL_1012;
                v511 = CS___8__locals5->fields.that;
                updated = System_Int32__Parse(v108->fields.param, 0LL);
                if ( !v511 )
                  goto LABEL_1012;
                v512 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         v511,
                         1,
                         updated,
                         this,
                         (const MethodInfo_2098774 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                v509->fields.roadSprite = v512;
                sub_B2C2F8(&v509->fields, v512);
                roadSprite = (UnityEngine_Object_o *)v509->fields.roadSprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Equality(roadSprite, 0LL, 0LL) )
                {
                  v506 = v509->fields.roadSprite;
                  v507 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                  System_Action___ctor(
                    v507,
                    (Il2CppObject *)v509,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__,
                    0LL);
                  if ( !v506 )
                    goto LABEL_1012;
                  v508 = 2;
                  goto LABEL_929;
                }
              }
              return;
            case 201:
              if ( this->fields.IsMapModel )
              {
                v434 = (QuestAfterAction_StateMain___c__DisplayClass16_6_o *)sub_B2C42C(QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_6___ctor(v434, 0LL);
                if ( !v434 )
                  goto LABEL_1012;
                v434->fields.CS___8__locals6 = v101;
                sub_B2C2F8(&v434->fields.CS___8__locals6, v101);
                CS___8__locals6 = v434->fields.CS___8__locals6;
                if ( !CS___8__locals6 )
                  goto LABEL_1012;
                v436 = CS___8__locals6->fields.that;
                updated = System_Int32__Parse(v108->fields.param, 0LL);
                if ( !v436 )
                  goto LABEL_1012;
                v437 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         v436,
                         1,
                         updated,
                         this,
                         (const MethodInfo_2098774 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                v434->fields.roadModel = (struct ModelLineComponent_o *)v437;
                sub_B2C2F8(&v434->fields, v437);
                v438 = (UnityEngine_Object_o *)v434->fields.roadModel;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Equality(v438, 0LL, 0LL) )
                {
                  v160 = v434->fields.roadModel;
                  v161 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                  System_Action___ctor(
                    v161,
                    (Il2CppObject *)v434,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__,
                    0LL);
                  if ( !v160 )
                    goto LABEL_1012;
                  v162 = 3;
                  goto LABEL_722;
                }
              }
              else
              {
                v514 = (QuestAfterAction_StateMain___c__DisplayClass16_7_o *)sub_B2C42C(QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_7___ctor(v514, 0LL);
                if ( !v514 )
                  goto LABEL_1012;
                v514->fields.CS___8__locals7 = v101;
                sub_B2C2F8(&v514->fields.CS___8__locals7, v101);
                CS___8__locals7 = v514->fields.CS___8__locals7;
                if ( !CS___8__locals7 )
                  goto LABEL_1012;
                v516 = CS___8__locals7->fields.that;
                updated = System_Int32__Parse(v108->fields.param, 0LL);
                if ( !v516 )
                  goto LABEL_1012;
                v517 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         v516,
                         1,
                         updated,
                         this,
                         (const MethodInfo_2098774 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                v514->fields.roadSprite = v517;
                sub_B2C2F8(&v514->fields, v517);
                v518 = (UnityEngine_Object_o *)v514->fields.roadSprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Equality(v518, 0LL, 0LL) )
                {
                  v506 = v514->fields.roadSprite;
                  v507 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                  System_Action___ctor(
                    v507,
                    (Il2CppObject *)v514,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__,
                    0LL);
                  if ( !v506 )
                    goto LABEL_1012;
                  v508 = 3;
                  goto LABEL_929;
                }
              }
              return;
            case 202:
              if ( this->fields.IsMapModel )
              {
                v425 = (QuestAfterAction_StateMain___c__DisplayClass16_8_o *)sub_B2C42C(QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_8___ctor(v425, 0LL);
                if ( !v425 )
                  goto LABEL_1012;
                v425->fields.CS___8__locals8 = v101;
                sub_B2C2F8(&v425->fields.CS___8__locals8, v101);
                CS___8__locals8 = v425->fields.CS___8__locals8;
                if ( !CS___8__locals8 )
                  goto LABEL_1012;
                v427 = CS___8__locals8->fields.that;
                updated = System_Int32__Parse(v108->fields.param, 0LL);
                if ( !v427 )
                  goto LABEL_1012;
                v428 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         v427,
                         1,
                         updated,
                         this,
                         (const MethodInfo_2098774 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                v425->fields.roadModel = (struct ModelLineComponent_o *)v428;
                sub_B2C2F8(&v425->fields, v428);
                v429 = (UnityEngine_Object_o *)v425->fields.roadModel;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Equality(v429, 0LL, 0LL) )
                {
                  v160 = v425->fields.roadModel;
                  v161 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                  System_Action___ctor(
                    v161,
                    (Il2CppObject *)v425,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__,
                    0LL);
                  if ( !v160 )
                    goto LABEL_1012;
                  v162 = 4;
LABEL_722:
                  ModelLineComponent__SetState(v160, v162, v161, 0LL);
                }
              }
              else
              {
                v501 = (QuestAfterAction_StateMain___c__DisplayClass16_9_o *)sub_B2C42C(QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_9___ctor(v501, 0LL);
                if ( !v501 )
                  goto LABEL_1012;
                v501->fields.CS___8__locals9 = v101;
                sub_B2C2F8(&v501->fields.CS___8__locals9, v101);
                CS___8__locals9 = v501->fields.CS___8__locals9;
                if ( !CS___8__locals9 )
                  goto LABEL_1012;
                v503 = CS___8__locals9->fields.that;
                updated = System_Int32__Parse(v108->fields.param, 0LL);
                if ( !v503 )
                  goto LABEL_1012;
                v504 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         v503,
                         1,
                         updated,
                         this,
                         (const MethodInfo_2098774 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                v501->fields.roadSprite = v504;
                sub_B2C2F8(&v501->fields, v504);
                v505 = (UnityEngine_Object_o *)v501->fields.roadSprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Equality(v505, 0LL, 0LL) )
                {
                  v506 = v501->fields.roadSprite;
                  v507 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                  System_Action___ctor(
                    v507,
                    (Il2CppObject *)v501,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__,
                    0LL);
                  if ( !v506 )
                    goto LABEL_1012;
                  v508 = 4;
LABEL_929:
                  srcLineSprite__SetState(v506, v508, v507, 0LL);
                }
              }
              return;
            case 203:
              IsMapModel = this->fields.IsMapModel;
              v431 = *p_that;
              updated = System_Int32__Parse(v108->fields.param, 0LL);
              if ( !v431 )
                goto LABEL_1012;
              if ( IsMapModel )
              {
                v432 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         v431,
                         1,
                         updated,
                         this,
                         (const MethodInfo_2098774 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v432, 0LL, 0LL);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v432 )
                  goto LABEL_1012;
                ModelLineComponent__SetQuestAfterActionScaleAnimQuick((ModelLineComponent_o *)v432, 0, 0LL);
                mcAtlasP = v432->fields.mcTweenScaleP;
                if ( !mcAtlasP )
                  goto LABEL_1012;
              }
              else
              {
                v519 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                 v431,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_2098774 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                updated = UnityEngine_Object__op_Equality(v519, 0LL, 0LL);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v519 )
                  goto LABEL_1012;
                srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v519, 0, 0LL);
                mcAtlasP = v519[5].klass;
                if ( !mcAtlasP )
                  goto LABEL_1012;
              }
              goto LABEL_936;
            case 204:
              v421 = this->fields.IsMapModel;
              v422 = *p_that;
              updated = System_Int32__Parse(v108->fields.param, 0LL);
              if ( !v422 )
                goto LABEL_1012;
              if ( v421 )
              {
                v423 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         v422,
                         1,
                         updated,
                         this,
                         (const MethodInfo_2098774 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v423, 0LL, 0LL);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v423 )
                  goto LABEL_1012;
                ModelLineComponent__SetQuestAfterActionScaleAnimQuick((ModelLineComponent_o *)v423, 1, 0LL);
                ModelLineComponent__SetQuestAfterActionColorAnimQuick((ModelLineComponent_o *)v423, 0, 0LL);
                mcTweenScaleP = v423->fields.mcTweenScaleP;
                if ( !mcTweenScaleP )
                  goto LABEL_1012;
              }
              else
              {
                v499 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                 v422,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_2098774 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                updated = UnityEngine_Object__op_Equality(v499, 0LL, 0LL);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v499 )
                  goto LABEL_1012;
                srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v499, 1, 0LL);
                srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v499, 0, 0LL);
                mcTweenScaleP = v499[5].klass;
                if ( !mcTweenScaleP )
                  goto LABEL_1012;
              }
              v500 = 2;
              goto LABEL_944;
            case 205:
              v439 = this->fields.IsMapModel;
              v440 = *p_that;
              updated = System_Int32__Parse(v108->fields.param, 0LL);
              if ( !v440 )
                goto LABEL_1012;
              if ( v439 )
              {
                v441 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         v440,
                         1,
                         updated,
                         this,
                         (const MethodInfo_2098774 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v441, 0LL, 0LL);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v441 )
                  goto LABEL_1012;
                ModelLineComponent__SetQuestAfterActionScaleAnimQuick((ModelLineComponent_o *)v441, 1, 0LL);
                ModelLineComponent__SetQuestAfterActionColorAnimQuick((ModelLineComponent_o *)v441, 1, 0LL);
                mcTweenScaleP = v441->fields.mcTweenScaleP;
                if ( !mcTweenScaleP )
                  goto LABEL_1012;
              }
              else
              {
                v520 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                 v440,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_2098774 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                updated = UnityEngine_Object__op_Equality(v520, 0LL, 0LL);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v520 )
                  goto LABEL_1012;
                srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v520, 1, 0LL);
                srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v520, 1, 0LL);
                mcTweenScaleP = v520[5].klass;
                if ( !mcTweenScaleP )
                  goto LABEL_1012;
              }
              v500 = 1;
LABEL_944:
              mcTweenScaleP[4] = v500;
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
        v129 = v108->fields.param;
        updated = sub_B2C374(char___TypeInfo, 1LL);
        if ( !updated )
          goto LABEL_1012;
        v103 = (const MethodInfo *)updated;
        if ( !*(_DWORD *)(updated + 24) )
          goto LABEL_1018;
        *(_WORD *)(updated + 32) = 44;
        if ( !v129 )
          goto LABEL_1012;
        updated = (__int64)System_String__Split(v129, (System_Char_array *)updated, 0LL);
        if ( !updated )
          goto LABEL_1012;
        v130 = *(_QWORD *)(updated + 24);
        v131 = updated;
        if ( (int)v130 <= 0 )
          goto LABEL_443;
        if ( (int)v130 > 2 )
        {
          v454 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v130 = *(_QWORD *)(v131 + 24);
          v132 = v454 * 0.001;
        }
        else
        {
          v132 = 0.5;
        }
        if ( (int)v130 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v131 + 40), 0LL);
          v443 = updated;
          if ( !(unsigned int)*(_QWORD *)(v131 + 24) )
            goto LABEL_1018;
        }
        else
        {
          v443 = 15;
          if ( !(_DWORD)v130 )
            goto LABEL_1018;
        }
        v456 = *p_that;
        updated = System_Int32__Parse(*(System_String_o **)(v131 + 32), 0LL);
        if ( !v456 )
          goto LABEL_1012;
        MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v456, 0, updated, this, 0LL);
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
          if ( !byte_4183C65 )
          {
            sub_B2C35C(&TerminalSceneComponent_TypeInfo, v103);
            byte_4183C65 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v458 = **(_QWORD **)(updated + 184);
          if ( !v458 )
            goto LABEL_1012;
          updated = *(_QWORD *)(v458 + 256);
          if ( !updated )
            goto LABEL_1012;
          v577.fields.x = x;
          v577.fields.y = y;
          v577.fields.z = z;
          v578 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v577, 0LL);
          x = v578.fields.x;
          y = v578.fields.y;
          z = v578.fields.z;
        }
        if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0LL);
        if ( (updated & 1) == 0 )
        {
          if ( !*(_DWORD *)(v131 + 24) )
            goto LABEL_1018;
          v460 = *(System_String_o **)(v131 + 32);
          if ( v460 )
          {
            updated = System_String__op_Equality(
                        *(System_String_o **)(v131 + 32),
                        (System_String_o *)StringLiteral_1095/*"10703"*/,
                        0LL);
            if ( (updated & 1) != 0 )
            {
              y = y + -50.0;
            }
            else
            {
              updated = System_String__op_Equality(v460, (System_String_o *)StringLiteral_1157/*"30101"*/, 0LL);
              if ( (updated & 1) != 0 )
                y = y + -50.0;
            }
          }
        }
        if ( v108->fields.id != 305 || *(int *)(v131 + 24) < 4 )
        {
          if ( !*p_that )
            goto LABEL_1012;
          mMapCamera = (*p_that)->fields.mMapCamera;
          v452 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          v453 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__;
          goto LABEL_990;
        }
        if ( !*p_that )
          goto LABEL_1012;
        v532 = (*p_that)->fields.mMapCamera;
        *(_QWORD *)&v566.fields.value.fields.x = &v555;
        v582.fields.x = x;
        v582.fields.y = y;
        *(_QWORD *)&v566.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
        v582.fields.z = z;
        *(_QWORD *)&v555.fields.value.fields.x = 0LL;
        *(_QWORD *)&v555.fields.value.fields.z = 0LL;
        System_Nullable_Vector3____ctor(v566, v582, v459);
        if ( *(_DWORD *)(v131 + 24) <= 3u )
          goto LABEL_1018;
        v537 = System_Single__Parse(*(System_String_o **)(v131 + 56), 0LL);
        p_size = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(p_size, v537, (const MethodInfo_21536DC *)Method_System_Nullable_float___ctor__);
        v534 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        v535 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__;
        goto LABEL_1007;
      case 301:
      case 306:
        v234 = v108->fields.param;
        updated = sub_B2C374(char___TypeInfo, 1LL);
        if ( !updated )
          goto LABEL_1012;
        v103 = (const MethodInfo *)updated;
        if ( !*(_DWORD *)(updated + 24) )
          goto LABEL_1018;
        *(_WORD *)(updated + 32) = 44;
        if ( !v234 )
          goto LABEL_1012;
        updated = (__int64)System_String__Split(v234, (System_Char_array *)updated, 0LL);
        if ( !updated )
          goto LABEL_1012;
        v235 = *(_QWORD *)(updated + 24);
        v236 = updated;
        if ( (int)v235 <= 0 )
          goto LABEL_443;
        if ( (int)v235 > 2 )
        {
          v455 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v235 = *(_QWORD *)(v236 + 24);
          v132 = v455 * 0.001;
        }
        else
        {
          v132 = 0.5;
        }
        if ( (int)v235 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v236 + 40), 0LL);
          v443 = updated;
          if ( !(unsigned int)*(_QWORD *)(v236 + 24) )
            goto LABEL_1018;
        }
        else
        {
          v443 = 15;
          if ( !(_DWORD)v235 )
            goto LABEL_1018;
        }
        v461 = *p_that;
        updated = System_Int32__Parse(*(System_String_o **)(v236 + 32), 0LL);
        if ( !v461 )
          goto LABEL_1012;
        v462 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v461, 1, updated, this, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        updated = UnityEngine_Object__op_Equality(v462, 0LL, 0LL);
        if ( (updated & 1) != 0 )
          return;
        if ( this->fields.IsMapModel )
        {
          if ( !v462 )
            goto LABEL_1012;
          updated = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               (UnityEngine_GameObject_o *)v462,
                               (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
          if ( !updated )
            goto LABEL_1012;
          Position = GameObjectExtensions__GetPosition((UnityEngine_GameObject_o *)*(_QWORD *)(updated + 24), 0LL);
          v463 = Position.fields.x;
          v464 = Position.fields.y;
          v465 = Position.fields.z;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_4183C65 )
          {
            sub_B2C35C(&TerminalSceneComponent_TypeInfo, v103);
            byte_4183C65 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v466 = **(_QWORD **)(updated + 184);
          if ( !v466 )
            goto LABEL_1012;
          updated = *(_QWORD *)(v466 + 256);
          if ( !updated )
            goto LABEL_1012;
          v580.fields.x = v463;
          v580.fields.y = v464;
          v580.fields.z = v465;
          *(UnityEngine_Vector3_o *)&v467 = ScrTerminalMap__ConvertWorldToScreenPosition(
                                              (ScrTerminalMap_o *)updated,
                                              v580,
                                              0LL);
        }
        else
        {
          *(UnityEngine_Vector3_o *)&v467 = GameObjectExtensions__GetLocalPosition(
                                              (UnityEngine_GameObject_o *)v462,
                                              0LL);
        }
        v522 = v467;
        v523 = v468;
        v524 = v469;
        if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0LL);
        if ( (updated & 1) == 0 )
        {
          if ( !*(_DWORD *)(v236 + 24) )
            goto LABEL_1018;
          v526 = *(System_String_o **)(v236 + 32);
          if ( v526 )
          {
            updated = System_String__op_Equality(
                        *(System_String_o **)(v236 + 32),
                        (System_String_o *)StringLiteral_1095/*"10703"*/,
                        0LL);
            if ( (updated & 1) != 0 )
            {
              v523 = v523 + -95.0;
            }
            else
            {
              updated = System_String__op_Equality(v526, (System_String_o *)StringLiteral_1158/*"30102"*/, 0LL);
              if ( (updated & 1) != 0 )
                v523 = v523 + 45.0;
            }
          }
        }
        if ( v108->fields.id != 306 || *(int *)(v236 + 24) < 4 )
        {
          if ( !*p_that )
            goto LABEL_1012;
          v538 = (*p_that)->fields.mMapCamera;
          v536 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            v536,
            (Il2CppObject *)v101,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__,
            0LL);
          if ( !v538 )
            goto LABEL_1012;
          v302 = v538;
          v303 = v522;
          v304 = v523;
          v305 = v524;
          goto LABEL_1002;
        }
        if ( !*p_that )
          goto LABEL_1012;
        v532 = (*p_that)->fields.mMapCamera;
        *(_QWORD *)&v567.fields.value.fields.x = &v555;
        v583.fields.x = v522;
        v583.fields.y = v523;
        *(_QWORD *)&v567.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
        v583.fields.z = v524;
        *(_QWORD *)&v555.fields.value.fields.x = 0LL;
        *(_QWORD *)&v555.fields.value.fields.z = 0LL;
        System_Nullable_Vector3____ctor(v567, v583, v525);
        if ( *(_DWORD *)(v236 + 24) <= 3u )
          goto LABEL_1018;
        v539 = System_Single__Parse(*(System_String_o **)(v236 + 56), 0LL);
        v561 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v561, v539, (const MethodInfo_21536DC *)Method_System_Nullable_float___ctor__);
        v534 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        v535 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__;
LABEL_1007:
        v540 = v534;
        System_Action___ctor(v534, (Il2CppObject *)v101, *v535, 0LL);
        if ( !v532 )
          goto LABEL_1012;
        v570 = v555;
        v564 = size;
        v541 = v532;
        v542 = v132;
        v543 = v443;
        v544 = v540;
        goto LABEL_1017;
      case 302:
      case 307:
        v212 = v108->fields.param;
        updated = sub_B2C374(char___TypeInfo, 1LL);
        if ( !updated )
          goto LABEL_1012;
        v103 = (const MethodInfo *)updated;
        if ( !*(_DWORD *)(updated + 24) )
          goto LABEL_1018;
        *(_WORD *)(updated + 32) = 44;
        if ( !v212 )
          goto LABEL_1012;
        updated = (__int64)System_String__Split(v212, (System_Char_array *)updated, 0LL);
        if ( !updated )
          goto LABEL_1012;
        v213 = *(_QWORD *)(updated + 24);
        v214 = updated;
        if ( (int)v213 <= 0 )
          goto LABEL_443;
        if ( (int)v213 > 2 )
        {
          v442 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v213 = *(_QWORD *)(v214 + 24);
          v132 = v442 * 0.001;
        }
        else
        {
          v132 = 0.5;
        }
        if ( (int)v213 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v214 + 40), 0LL);
          v443 = updated;
          if ( !(unsigned int)*(_QWORD *)(v214 + 24) )
            goto LABEL_1018;
        }
        else
        {
          v443 = 15;
          if ( !(_DWORD)v213 )
            goto LABEL_1018;
        }
        v444 = *p_that;
        updated = System_Int32__Parse(*(System_String_o **)(v214 + 32), 0LL);
        if ( !v444 )
          goto LABEL_1012;
        v445 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v444, 2, updated, this, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(v445, 0LL, 0LL) )
          return;
        v573 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v445, 0LL);
        x = v573.fields.x;
        y = v573.fields.y;
        z = v573.fields.z;
        if ( this->fields.IsMapModel )
        {
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_4183C65 )
          {
            sub_B2C35C(&TerminalSceneComponent_TypeInfo, v103);
            byte_4183C65 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v450 = **(_QWORD **)(updated + 184);
          if ( !v450 )
            goto LABEL_1012;
          updated = *(_QWORD *)(v450 + 256);
          if ( !updated )
            goto LABEL_1012;
          v574.fields.x = x;
          v574.fields.y = y;
          v574.fields.z = z;
          v575 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v574, 0LL);
          x = v575.fields.x;
          y = v575.fields.y;
          z = v575.fields.z;
        }
        if ( v108->fields.id != 307 || *(int *)(v214 + 24) < 4 )
        {
          if ( !*p_that )
            goto LABEL_1012;
          mMapCamera = (*p_that)->fields.mMapCamera;
          v452 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          v453 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__14__;
LABEL_990:
          v536 = v452;
          System_Action___ctor(v452, (Il2CppObject *)v101, *v453, 0LL);
          if ( !mMapCamera )
            goto LABEL_1012;
          v302 = mMapCamera;
          v303 = x;
          v304 = y;
          v305 = z;
LABEL_1002:
          v306 = v132;
          v307 = v443;
          v308 = v536;
          goto LABEL_1003;
        }
        if ( !*p_that )
          goto LABEL_1012;
        v532 = (*p_that)->fields.mMapCamera;
        *(_QWORD *)&v565.fields.value.fields.x = &v555;
        v581.fields.x = x;
        v581.fields.y = y;
        *(_QWORD *)&v565.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
        v581.fields.z = z;
        *(_QWORD *)&v555.fields.value.fields.x = 0LL;
        *(_QWORD *)&v555.fields.value.fields.z = 0LL;
        System_Nullable_Vector3____ctor(v565, v581, v446);
        if ( *(_DWORD *)(v214 + 24) <= 3u )
          goto LABEL_1018;
        v533 = System_Single__Parse(*(System_String_o **)(v214 + 56), 0LL);
        v559 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v559, v533, (const MethodInfo_21536DC *)Method_System_Nullable_float___ctor__);
        v534 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        v535 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__13__;
        goto LABEL_1007;
      case 303:
      case 308:
        v215 = v108->fields.param;
        updated = sub_B2C374(char___TypeInfo, 1LL);
        if ( !updated )
          goto LABEL_1012;
        v103 = (const MethodInfo *)updated;
        if ( !*(_DWORD *)(updated + 24) )
          goto LABEL_1018;
        *(_WORD *)(updated + 32) = 44;
        if ( !v215 )
          goto LABEL_1012;
        updated = (__int64)System_String__Split(v215, (System_Char_array *)updated, 0LL);
        if ( !updated )
          goto LABEL_1012;
        v216 = updated;
        if ( *(int *)(updated + 24) < 4 )
          goto LABEL_443;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_41852FF )
        {
          sub_B2C35C(&TerminalPramsManager_TypeInfo, v103);
          byte_41852FF = 1;
        }
        updated = (__int64)TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          updated = (__int64)TerminalPramsManager_TypeInfo;
        }
        if ( *(_BYTE *)(*(_QWORD *)(updated + 184) + 88LL) )
          goto LABEL_443;
        if ( *(_DWORD *)(v216 + 24) <= 2u )
          goto LABEL_1018;
        v217 = System_Single__Parse(*(System_String_o **)(v216 + 48), 0LL) * 0.001;
        v218 = v217 >= 0.0 ? v217 : 0.5;
        if ( *(_DWORD *)(v216 + 24) <= 3u )
          goto LABEL_1018;
        v219 = System_Int32__Parse(*(System_String_o **)(v216 + 56), 0LL);
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_4183C65 )
        {
          sub_B2C35C(&TerminalSceneComponent_TypeInfo, v103);
          byte_4183C65 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v220 = **(_QWORD **)(updated + 184);
        if ( !v220 )
          goto LABEL_1012;
        if ( !*(_DWORD *)(v216 + 24) )
          goto LABEL_1018;
        v221 = *(ScrTerminalMap_o **)(v220 + 256);
        v222 = System_Single__Parse(*(System_String_o **)(v216 + 32), 0LL);
        if ( *(_DWORD *)(v216 + 24) <= 1u )
          goto LABEL_1018;
        v223 = v222;
        v224 = System_Single__Parse(*(System_String_o **)(v216 + 40), 0LL);
        if ( !v221 )
          goto LABEL_1012;
        *(UnityEngine_Vector3_o *)&v226 = ScrTerminalMap__LocalPosFromCoord(v221, v223, v224, 0.0, 0.0, 0LL);
        v229 = v226;
        v230 = v227;
        v231 = v228;
        if ( v108->fields.id != 308 || *(int *)(v216 + 24) < 5 )
        {
          if ( !*p_that )
            goto LABEL_1012;
          v232 = (*p_that)->fields.mMapCamera;
          v233 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            v233,
            (Il2CppObject *)v101,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__16__,
            0LL);
          if ( !v232 )
            goto LABEL_1012;
LABEL_481:
          v302 = v232;
          v303 = v229;
          v304 = v230;
          v305 = v231;
          v306 = v218;
          v307 = v219;
          v308 = v233;
LABEL_1003:
          MapCamera__StartAutoMove(v302, *(UnityEngine_Vector3_o *)&v303, v306, v307, v308, 0LL);
          return;
        }
        if ( !*p_that )
          goto LABEL_1012;
        v545 = (*p_that)->fields.mMapCamera;
        *(_QWORD *)&v568.fields.value.fields.x = &v555;
        *(_QWORD *)&v568.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
        v555 = (System_Nullable_Vector3__o)0LL;
        System_Nullable_Vector3____ctor(v568, *(UnityEngine_Vector3_o *)&v226, v225);
        if ( *(_DWORD *)(v216 + 24) <= 4u )
          goto LABEL_1018;
        v546 = System_Single__Parse(*(System_String_o **)(v216 + 64), 0LL);
        v562 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v562, v546, (const MethodInfo_21536DC *)Method_System_Nullable_float___ctor__);
        v547 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(
          v547,
          (Il2CppObject *)v101,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__15__,
          0LL);
        if ( !v545 )
          goto LABEL_1012;
LABEL_1016:
        v570 = v555;
        v564 = size;
        v541 = v545;
        v542 = v218;
        v543 = v219;
        v544 = v547;
LABEL_1017:
        MapCamera__StartAutoWork(v541, v542, v570, v564, v543, v544, 0LL);
        return;
      case 304:
        v277 = v108->fields.param;
        updated = sub_B2C374(char___TypeInfo, 1LL);
        if ( !updated )
          goto LABEL_1012;
        v103 = (const MethodInfo *)updated;
        if ( !*(_DWORD *)(updated + 24) )
          goto LABEL_1018;
        *(_WORD *)(updated + 32) = 44;
        if ( !v277 )
          goto LABEL_1012;
        updated = (__int64)System_String__Split(v277, (System_Char_array *)updated, 0LL);
        if ( !updated )
          goto LABEL_1012;
        v278 = *(_DWORD *)(updated + 24);
        v279 = updated;
        if ( v278 <= 1 )
          goto LABEL_443;
        v280 = System_Single__Parse(*(System_String_o **)(updated + 32), 0LL);
        if ( *(_DWORD *)(v279 + 24) <= 1u )
          goto LABEL_1018;
        v281 = v280;
        v282 = System_Single__Parse(*(System_String_o **)(v279 + 40), 0LL);
        if ( !*p_that )
          goto LABEL_1012;
        v283 = (*p_that)->fields.mMapCamera;
        v284 = v282 * 0.001;
        if ( v284 >= 0.0 )
          v285 = v284;
        else
          v285 = 0.5;
        if ( v278 < 3 )
        {
          v286 = 5;
        }
        else
        {
          if ( *(_DWORD *)(v279 + 24) <= 2u )
            goto LABEL_1018;
          v286 = System_Int32__Parse(*(System_String_o **)(v279 + 48), 0LL);
        }
        v521 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(
          v521,
          (Il2CppObject *)v101,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__17__,
          0LL);
        if ( v283 )
        {
          MapCamera__StartAutoZoom(v283, v281, v285, v286, v521, 0LL);
          return;
        }
        goto LABEL_1019;
      default:
        if ( id == 350 )
        {
          v237 = v108->fields.param;
          MyFsmP = sub_B2C374(char___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1019;
          v103 = (const MethodInfo *)MyFsmP;
          if ( *(_DWORD *)(MyFsmP + 24) )
          {
            *(_WORD *)(MyFsmP + 32) = 44;
            if ( v237 )
            {
              MyFsmP = (__int64)System_String__Split(v237, (System_Char_array *)MyFsmP, 0LL);
              if ( MyFsmP )
              {
                v238 = MyFsmP;
                if ( *(int *)(MyFsmP + 24) <= 0 )
                  goto LABEL_443;
                v239 = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
                if ( v239 < 1 )
                  goto LABEL_443;
                v240 = v239;
                v241 = 0.5;
                if ( *(int *)(v238 + 24) > 1 )
                {
                  v242 = System_Int32__Parse(*(System_String_o **)(v238 + 40), 0LL);
                  if ( *(int *)(v238 + 24) >= 3 )
                    v241 = System_Single__Parse(*(System_String_o **)(v238 + 48), 0LL) * 0.001;
                }
                else
                {
                  v242 = 15;
                }
                if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                }
                if ( !byte_4183C65 )
                {
                  sub_B2C35C(&TerminalSceneComponent_TypeInfo, v103);
                  byte_4183C65 = 1;
                }
                MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
                if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v529 = **(_QWORD **)(MyFsmP + 184);
                if ( v529 )
                {
                  v530 = *(ScrTerminalMap_o **)(v529 + 256);
                  v531 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                  System_Action___ctor(
                    v531,
                    (Il2CppObject *)v101,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__18__,
                    0LL);
                  if ( v530 )
                  {
                    ScrTerminalMap__RequestMapMove_23668476(v530, v240, v241, v242, v531, 0LL);
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
        v287 = v108->fields.param;
        MyFsmP = sub_B2C374(char___TypeInfo, 1LL);
        if ( !MyFsmP )
          goto LABEL_1019;
        v103 = (const MethodInfo *)MyFsmP;
        if ( !*(_DWORD *)(MyFsmP + 24) )
          goto LABEL_1021;
        *(_WORD *)(MyFsmP + 32) = 44;
        if ( !v287 )
          goto LABEL_1019;
        MyFsmP = (__int64)System_String__Split(v287, (System_Char_array *)MyFsmP, 0LL);
        if ( !MyFsmP )
          goto LABEL_1019;
        v288 = MyFsmP;
        if ( *(int *)(MyFsmP + 24) <= 4 )
          goto LABEL_443;
        v289 = System_Single__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
        if ( *(_DWORD *)(v288 + 24) <= 1u )
          goto LABEL_1021;
        v290 = v289;
        v291 = System_Single__Parse(*(System_String_o **)(v288 + 40), 0LL);
        if ( *(_DWORD *)(v288 + 24) <= 2u )
          goto LABEL_1021;
        v292 = v291;
        v293 = System_Single__Parse(*(System_String_o **)(v288 + 48), 0LL);
        if ( *(_DWORD *)(v288 + 24) <= 3u )
          goto LABEL_1021;
        v294 = v293;
        v295 = System_Single__Parse(*(System_String_o **)(v288 + 56), 0LL);
        if ( *(_DWORD *)(v288 + 24) <= 4u )
          goto LABEL_1021;
        v296 = v295;
        v219 = System_Int32__Parse(*(System_String_o **)(v288 + 64), 0LL);
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_4183C65 )
        {
          sub_B2C35C(&TerminalSceneComponent_TypeInfo, v103);
          byte_4183C65 = 1;
        }
        MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v297 = **(_QWORD **)(MyFsmP + 184);
        if ( !v297 )
          goto LABEL_1019;
        MyFsmP = *(_QWORD *)(v297 + 256);
        if ( !MyFsmP )
          goto LABEL_1019;
        v571.fields.y = v292;
        v571.fields.z = v294;
        v218 = v296 * 0.001;
        v571.fields.x = v290;
        *(UnityEngine_Vector3_o *)&v299 = ScrTerminalMap__ConvertLocalToScreenPosition(
                                            (ScrTerminalMap_o *)MyFsmP,
                                            v571,
                                            0LL);
        v229 = v299;
        v230 = v300;
        v231 = v301;
        if ( v108->fields.id != 352 || *(int *)(v288 + 24) < 6 )
        {
          if ( !*p_that )
            goto LABEL_1019;
          v232 = (*p_that)->fields.mMapCamera;
          v233 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            v233,
            (Il2CppObject *)v101,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__20__,
            0LL);
          if ( !v232 )
            goto LABEL_1019;
          goto LABEL_481;
        }
        if ( !*p_that )
          goto LABEL_1019;
        v545 = (*p_that)->fields.mMapCamera;
        *(_QWORD *)&v569.fields.value.fields.x = &v555;
        *(_QWORD *)&v569.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
        v555 = (System_Nullable_Vector3__o)0LL;
        System_Nullable_Vector3____ctor(v569, *(UnityEngine_Vector3_o *)&v299, v298);
        if ( *(_DWORD *)(v288 + 24) <= 5u )
          goto LABEL_1021;
        v548 = System_Single__Parse(*(System_String_o **)(v288 + 72), 0LL);
        v563 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v563, v548, (const MethodInfo_21536DC *)Method_System_Nullable_float___ctor__);
        v547 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
        System_Action___ctor(
          v547,
          (Il2CppObject *)v101,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__19__,
          0LL);
        if ( !v545 )
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
          v124 = (System_String_o *)StringLiteral_1/*""*/;
          v125 = System_String__Concat_44305532((System_String_o *)StringLiteral_10887/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v108->fields.param, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v126 = LocalizationManager__Get(v125, 0LL);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v128 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            v128,
            (Il2CppObject *)v101,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__36__,
            0LL);
          if ( !Instance )
            goto LABEL_1019;
          CommonUI__OpenNotificationDialog(Instance, v124, v126, v128, 210, 0, 0, 0, 1, 0, 0, 0, 0LL, 0LL);
          return;
        case 601:
          v265 = (System_String_o *)StringLiteral_1/*""*/;
          MyFsmP = sub_B2C374(string___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1019;
          v266 = (System_String_array *)MyFsmP;
          MyFsmP = StringLiteral_68/*"\r\n"*/;
          if ( StringLiteral_68/*"\r\n"*/ )
          {
            MyFsmP = sub_B2C41C(StringLiteral_68/*"\r\n"*/, v266->obj.klass->_1.element_class);
            if ( !MyFsmP )
            {
              v553 = sub_B2C454();
              sub_B2C400(v553, 0LL);
            }
            v267 = StringLiteral_68/*"\r\n"*/;
          }
          else
          {
            v267 = 0LL;
          }
          if ( !v266->max_length )
            goto LABEL_1021;
          v266->m_Items[0] = (System_String_o *)v267;
          sub_B2C2F8(v266->m_Items, v267);
          MyFsmP = (__int64)v108->fields.param;
          if ( !MyFsmP )
            goto LABEL_1019;
          MyFsmP = (__int64)System_String__Split_44368152((System_String_o *)MyFsmP, v266, 0, 0LL);
          if ( !MyFsmP )
            goto LABEL_1019;
          v473 = *(_DWORD *)(MyFsmP + 24);
          if ( v473 <= 0 )
            goto LABEL_443;
          v474 = *(System_String_o **)(MyFsmP + 32);
          if ( v473 == 1 )
          {
            v475 = *(System_String_o **)(MyFsmP + 32);
            v474 = v265;
          }
          else
          {
            v475 = *(System_String_o **)(MyFsmP + 40);
          }
          v479 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v480 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            v480,
            (Il2CppObject *)v101,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__37__,
            0LL);
          if ( !v479 )
            goto LABEL_1020;
          CommonUI__OpenNotificationDialog(v479, v474, v475, v480, 210, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
          return;
        case 602:
          v257 = (System_String_o *)StringLiteral_1/*""*/;
          v258 = System_String__Concat_44305532((System_String_o *)StringLiteral_10887/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v108->fields.param, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v259 = LocalizationManager__Get(v258, 0LL);
          v260 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v261 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            v261,
            (Il2CppObject *)v101,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__38__,
            0LL);
          if ( !v260 )
            goto LABEL_1020;
          CommonUI__OpenNotificationDialog_17972208(
            v260,
            v257,
            v259,
            v261,
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
          v262 = (System_String_o *)StringLiteral_1/*""*/;
          updated = sub_B2C374(string___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_1020;
          v263 = (System_String_array *)updated;
          updated = StringLiteral_68/*"\r\n"*/;
          if ( StringLiteral_68/*"\r\n"*/ )
          {
            updated = sub_B2C41C(StringLiteral_68/*"\r\n"*/, v263->obj.klass->_1.element_class);
            if ( !updated )
            {
              v552 = sub_B2C454();
              sub_B2C400(v552, 0LL);
            }
            v264 = StringLiteral_68/*"\r\n"*/;
          }
          else
          {
            v264 = 0LL;
          }
          if ( !v263->max_length )
            goto LABEL_1022;
          v263->m_Items[0] = (System_String_o *)v264;
          sub_B2C2F8(v263->m_Items, v264);
          updated = (__int64)v108->fields.param;
          if ( !updated )
            goto LABEL_1020;
          updated = (__int64)System_String__Split_44368152((System_String_o *)updated, v263, 0, 0LL);
          if ( !updated )
            goto LABEL_1020;
          v470 = *(_DWORD *)(updated + 24);
          if ( v470 <= 0 )
            goto LABEL_443;
          v471 = *(System_String_o **)(updated + 32);
          if ( v470 == 1 )
          {
            v472 = *(System_String_o **)(updated + 32);
            v471 = v262;
          }
          else
          {
            v472 = *(System_String_o **)(updated + 40);
          }
          v477 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v478 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            v478,
            (Il2CppObject *)v101,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__39__,
            0LL);
          if ( !v477 )
            goto LABEL_1020;
          CommonUI__OpenNotificationDialog_17972208(
            v477,
            v471,
            v472,
            v478,
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
          v252 = (System_String_o *)StringLiteral_1/*""*/;
          v253 = System_String__Concat_44305532((System_String_o *)StringLiteral_10887/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v108->fields.param, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v254 = LocalizationManager__Get(v253, 0LL);
          v255 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v256 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(
            v256,
            (Il2CppObject *)v101,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__40__,
            0LL);
          if ( !v255 )
            goto LABEL_1020;
          CommonUI__OpenNotificationDialog_17972208(
            v255,
            v252,
            v254,
            v256,
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
          v163 = v108->fields.param;
          updated = sub_B2C374(char___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_1020;
          v103 = (const MethodInfo *)updated;
          if ( !*(_DWORD *)(updated + 24) )
            goto LABEL_1022;
          *(_WORD *)(updated + 32) = 44;
          if ( !v163 )
            goto LABEL_1020;
          updated = (__int64)System_String__Split(v163, (System_Char_array *)updated, 0LL);
          if ( !updated )
            goto LABEL_1020;
          v165 = *(_QWORD *)(updated + 24);
          if ( !v165 )
            goto LABEL_121;
          if ( !(_DWORD)v165 )
            goto LABEL_1022;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          LODWORD(v165) = (int)updated > 0;
LABEL_121:
          if ( !*p_that )
            goto LABEL_1020;
          v166 = *p_that;
          TitleInfoCtrlCallback_k__BackingField = (*p_that)->fields._TitleInfoCtrlCallback_k__BackingField;
          if ( !(_DWORD)v165 )
          {
            v419 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
            System_Action___ctor(v419, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( TitleInfoCtrlCallback_k__BackingField )
            {
              QuestAfterAction_TitleInfoControlCallback__Start(TitleInfoCtrlCallback_k__BackingField, v419, v420);
              return;
            }
            goto LABEL_1020;
          }
          if ( !TitleInfoCtrlCallback_k__BackingField )
            goto LABEL_1020;
          QuestAfterAction_TitleInfoControlCallback__Start(
            v166->fields._TitleInfoCtrlCallback_k__BackingField,
            0LL,
            v164);
          break;
      }
      goto LABEL_443;
    }
    if ( id != 530 )
    {
      if ( id != 540 )
        return;
      v142 = v108->fields.param;
      updated = sub_B2C374(char___TypeInfo, 1LL);
      if ( !updated )
        goto LABEL_1020;
      v103 = (const MethodInfo *)updated;
      if ( !*(_DWORD *)(updated + 24) )
        goto LABEL_1022;
      *(_WORD *)(updated + 32) = 44;
      if ( !v142 )
        goto LABEL_1020;
      updated = (__int64)System_String__Split(v142, (System_Char_array *)updated, 0LL);
      if ( !updated )
        goto LABEL_1020;
      v143 = updated;
      if ( !*(_DWORD *)(updated + 24) )
        goto LABEL_1022;
      v144 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
      if ( *(int *)(v143 + 24) < 2 )
      {
        v145 = -1;
      }
      else
      {
        v145 = System_Int32__Parse(*(System_String_o **)(v143 + 40), 0LL);
        if ( *(int *)(v143 + 24) >= 3 )
        {
          v146 = System_Int32__Parse(*(System_String_o **)(v143 + 48), 0LL);
LABEL_333:
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_4183C70 )
          {
            sub_B2C35C(&TerminalPramsManager_TypeInfo, v103);
            byte_4183C70 = 1;
          }
          v243 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v243 = TerminalPramsManager_TypeInfo;
          }
          v243->static_fields->_IsAutoResume_k__BackingField = 1;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_4183C65 )
          {
            sub_B2C35C(&TerminalSceneComponent_TypeInfo, v103);
            byte_4183C65 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v244 = **(_QWORD **)(updated + 184);
          if ( v244 )
          {
            updated = *(_QWORD *)(v244 + 256);
            if ( updated )
            {
              if ( !ScrTerminalMap__RequestMapChange((ScrTerminalMap_o *)updated, v144, v145, v146, 0LL) )
              {
                if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                }
                if ( !byte_4183C70 )
                {
                  sub_B2C35C(&TerminalPramsManager_TypeInfo, v245);
                  byte_4183C70 = 1;
                }
                v246 = TerminalPramsManager_TypeInfo;
                if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v246 = TerminalPramsManager_TypeInfo;
                }
                v246->static_fields->_IsAutoResume_k__BackingField = 0;
                goto LABEL_945;
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
          goto LABEL_1020;
        }
      }
      v146 = -1;
      goto LABEL_333;
    }
    v168 = System_Int32__Parse(v108->fields.param, 0LL);
    MyFsmP = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( MyFsmP )
    {
      MyFsmP = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)MyFsmP,
                          (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( MyFsmP )
      {
        v169 = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)MyFsmP,
                                  v168,
                                  (const MethodInfo_24E40D0 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
        }
        MyFsmP = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( MyFsmP )
        {
          MyFsmP = (__int64)QuestTree__GetQuestInfo((QuestTree_o *)MyFsmP, v168, 0LL);
          if ( MyFsmP )
          {
            v171 = MyFsmP;
            if ( *(_DWORD *)(MyFsmP + 32) != 1 )
            {
              QuestAfterAction_StateMain__ForceEndAnim(this, 1, v170);
              return;
            }
            if ( v169 )
            {
              if ( !QuestEntity__HasFlag(v169, 2LL, 0LL) )
                return;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              }
              if ( !byte_4183C6B )
              {
                sub_B2C35C(&TerminalPramsManager_TypeInfo, v172);
                byte_4183C6B = 1;
              }
              v173 = TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v173 = TerminalPramsManager_TypeInfo;
              }
              v173->static_fields->_QuestId_k__BackingField = v168;
              v174 = *(_DWORD *)(v171 + 44);
              if ( !byte_4183C6C )
              {
                sub_B2C35C(&TerminalPramsManager_TypeInfo, v172);
                v173 = TerminalPramsManager_TypeInfo;
                byte_4183C6C = 1;
              }
              if ( (BYTE3(v173->vtable._0_Equals.methodPtr) & 4) != 0 && !v173->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v173);
                v173 = TerminalPramsManager_TypeInfo;
              }
              v173->static_fields->_PhaseCnt_k__BackingField = v174;
              if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
              }
              MyFsmP = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
              v175 = (clsQuestCheck_o *)MyFsmP;
              v176 = QuestAfterAction_StateMain___c_TypeInfo;
              if ( (BYTE3(QuestAfterAction_StateMain___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
                v176 = QuestAfterAction_StateMain___c_TypeInfo;
              }
              v177 = v176->static_fields;
              _9__16_33 = v177->__9__16_33;
              if ( !_9__16_33 )
              {
                if ( (BYTE3(v176->vtable._0_Equals.methodPtr) & 4) != 0 && !v176->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v176);
                  v177 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
                }
                v179 = (Il2CppObject *)v177->__9;
                _9__16_33 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
                System_Action___ctor(_9__16_33, v179, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_33__, 0LL);
                v180 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
                v180->__9__16_33 = _9__16_33;
                sub_B2C2F8(&v180->__9__16_33, _9__16_33);
              }
              if ( v175 )
              {
                clsQuestCheck__PlayQuestStartAction(v175, _9__16_33, 0LL);
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
        v133 = v108->fields.param;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSe(v133, 0LL);
LABEL_945:
        ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
          this,
          this->klass->vtable._15_onEnd.methodPtr);
        goto LABEL_946;
      }
      v188 = *p_that;
      if ( !*p_that || (updated = (__int64)v188->fields.svtVoices) == 0 )
LABEL_1020:
        sub_B2C434(updated, v103);
      if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
             (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)updated,
             v188->fields.commandIdx,
             &value,
             (const MethodInfo_2E66470 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__) )
      {
        updated = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
        if ( !updated )
          goto LABEL_1020;
        AutomatedAction__TerminateMissionAction((AutomatedAction_o *)updated, 0LL);
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_4183C65 )
        {
          sub_B2C35C(&TerminalSceneComponent_TypeInfo, v103);
          byte_4183C65 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v189 = **(_QWORD **)(updated + 184);
        if ( !v189 )
          goto LABEL_1020;
        if ( !*(_QWORD *)(v189 + 448) )
          goto LABEL_204;
        if ( (*(_BYTE *)(updated + 307) & 4) != 0 && !*(_DWORD *)(updated + 224) )
          j_il2cpp_runtime_class_init_0(updated);
        if ( !byte_4183C65 )
        {
          sub_B2C35C(&TerminalSceneComponent_TypeInfo, v103);
          byte_4183C65 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v190 = **(_QWORD **)(updated + 184);
        if ( !v190 )
          goto LABEL_1020;
        v191 = *(_QWORD *)(v190 + 448);
        if ( !v191 )
          goto LABEL_1020;
        viewpoint = *(_DWORD *)(v191 + 48);
        if ( !viewpoint )
        {
LABEL_204:
          if ( !value )
            goto LABEL_1020;
          viewpoint = value->fields.viewpoint;
        }
        if ( viewpoint < 1 )
        {
          if ( !value )
            goto LABEL_1020;
          v476 = *(System_String_o **)&value->fields.eval;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playVoice(v476, 0LL);
        }
        else
        {
          if ( (BYTE3(ServantVoiceEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantVoiceEntity_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantVoiceEntity_TypeInfo);
          }
          updated = (__int64)ServantVoiceEntity__getVoiceAssetName_31404932(viewpoint, 0LL);
          if ( !value )
            goto LABEL_1020;
          v193 = (System_String_o *)updated;
          v194 = *(System_String_o **)&value->fields.eval;
          v195 = SeManager_TypeInfo;
          if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SeManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
            v195 = SeManager_TypeInfo;
          }
          DEFAULT_VOLUME = v195->static_fields->DEFAULT_VOLUME;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playVoice_24786800(v193, v194, DEFAULT_VOLUME, 0LL, 0LL);
        }
      }
LABEL_443:
      ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
        this,
        this->klass->vtable._15_onEnd.methodPtr);
      return;
    }
    v208 = v108->fields.param;
    updated = sub_B2C374(char___TypeInfo, 1LL);
    if ( !updated )
      goto LABEL_1020;
    v103 = (const MethodInfo *)updated;
    if ( *(_DWORD *)(updated + 24) )
    {
      *(_WORD *)(updated + 32) = 44;
      if ( !v208 )
        goto LABEL_1020;
      updated = (__int64)System_String__Split(v208, (System_Char_array *)updated, 0LL);
      if ( !updated )
        goto LABEL_1020;
      v209 = updated;
      if ( *(_DWORD *)(updated + 24) )
      {
        v210 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
        if ( *(int *)(v209 + 24) >= 2 )
          v211 = System_Int32__Parse(*(System_String_o **)(v209 + 40), 0LL) + 1;
        else
          v211 = 0;
        v276 = (SceneJumpInfo_o *)sub_B2C42C(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_17293040(v276, (System_String_o *)StringLiteral_1/*""*/, v210, v211, 0LL);
        updated = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !updated )
          goto LABEL_1020;
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)updated, 72, 1, (Il2CppObject *)v276, 0LL);
        goto LABEL_443;
      }
    }
LABEL_1022:
    v551 = sub_B2C460(updated);
    sub_B2C400(v551, 0LL);
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
        goto LABEL_945;
      }
      goto LABEL_1020;
    case 851:
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_4183C65 )
      {
        sub_B2C35C(&TerminalSceneComponent_TypeInfo, v103);
        byte_4183C65 = 1;
      }
      v181 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v181 = TerminalSceneComponent_TypeInfo;
      }
      v182 = v181->static_fields->mInstance;
      updated = (__int64)QuestAfterAction_Command__GetBgmName(v108, v103);
      if ( v182 )
      {
        TerminalSceneComponent__playBgm(v182, (System_String_o *)updated, 0LL);
        if ( *p_that )
        {
          (*p_that)->fields.isRequestedStopBgm = 0;
          goto LABEL_945;
        }
      }
      goto LABEL_1020;
    case 900:
      v113 = (float)System_Int32__Parse(v108->fields.param, 0LL) / 1000.0;
      if ( v113 > 0.0 )
      {
        this->fields.waitTime = v113;
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
  TerminalSceneComponent_c *screenCollider; // x0
  __int64 v6; // x1
  struct QuestAfterAction_o *v7; // x8
  struct TerminalSceneComponent_o *mInstance; // x8

  if ( (byte_41852DE & 1) == 0 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, that);
    byte_41852DE = 1;
  }
  this->fields.that = that;
  sub_B2C2F8(&this->fields, that);
  v7 = this->fields.that;
  if ( !v7 )
    goto LABEL_16;
  screenCollider = (TerminalSceneComponent_c *)v7->fields.screenCollider;
  if ( !screenCollider )
    goto LABEL_16;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)screenCollider, 1, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, v6);
    byte_4183C65 = 1;
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
    sub_B2C434(screenCollider, v6);
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
    sub_B2C434(this, method);
  return that->fields.commandBuf;
}


int32_t __fastcall QuestAfterAction_StateMain__get_CommandIndex(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_B2C434(this, method);
  return that->fields.commandIdx;
}


UnityEngine_GameObject_o *__fastcall QuestAfterAction_StateMain__get_SubGimmickRoot(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  if ( (byte_41852DD & 1) == 0 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, method);
    byte_41852DD = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, method);
    byte_4183C65 = 1;
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
    sub_B2C434(v2, method);
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

  if ( (byte_41852E0 & 1) == 0 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, deleteKey);
    sub_B2C35C(&StringLiteral_16287/*"afterActionBk"*/, v5);
    byte_41852E0 = 1;
  }
  if ( deleteKey )
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16287/*"afterActionBk"*/, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_4183C65 )
  {
    sub_B2C35C(&TerminalSceneComponent_TypeInfo, deleteKey);
    byte_4183C65 = 1;
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
    sub_B2C434(mInstance, deleteKey);
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
    sub_B2C434(this, value);
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
  Il2CppObject *v2; // x19
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0

  if ( (byte_41855C6 & 1) == 0 )
  {
    sub_B2C35C(&QuestAfterAction_StateMain___c_TypeInfo, v1);
    byte_41855C6 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(QuestAfterAction_StateMain___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
  static_fields->__9 = (struct QuestAfterAction_StateMain___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  TerminalPramsManager_c *v6; // x0
  int32_t WarId_k__BackingField; // w19
  int32_t QuestId_k__BackingField; // w20
  QuestAfterAction_StateMain___c_c *v9; // x8
  int32_t PhaseCnt_k__BackingField; // w21
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x9
  int32_t v12; // w21
  ScriptManager_CallbackFunc_o *_9__16_34; // x22
  Il2CppObject *v14; // x23
  struct QuestAfterAction_StateMain___c_StaticFields *v15; // x0

  if ( (byte_41855C7 & 1) == 0 )
  {
    sub_B2C35C(&ScriptManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&ScriptManager_TypeInfo, v2);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v3);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_34__, v4);
    sub_B2C35C(&QuestAfterAction_StateMain___c_TypeInfo, v5);
    byte_41855C7 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C67 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    byte_4183C67 = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v6->static_fields->_WarId_k__BackingField;
  if ( !byte_4183C7A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4183C7A = 1;
  }
  if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v6->static_fields->_QuestId_k__BackingField;
  if ( !byte_4183C7B )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, method);
    v6 = TerminalPramsManager_TypeInfo;
    byte_4183C7B = 1;
  }
  if ( (BYTE3(v6->vtable._0_Equals.methodPtr) & 4) != 0 && !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v9 = QuestAfterAction_StateMain___c_TypeInfo;
  PhaseCnt_k__BackingField = v6->static_fields->_PhaseCnt_k__BackingField;
  if ( (BYTE3(QuestAfterAction_StateMain___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
    v9 = QuestAfterAction_StateMain___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  v12 = PhaseCnt_k__BackingField + 1;
  _9__16_34 = static_fields->__9__16_34;
  if ( !_9__16_34 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__16_34 = (ScriptManager_CallbackFunc_o *)sub_B2C42C(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(_9__16_34, v14, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_34__, 0LL);
    v15 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    v15->__9__16_34 = _9__16_34;
    sub_B2C2F8(&v15->__9__16_34, _9__16_34);
  }
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayBattleStart(
    WarId_k__BackingField,
    QuestId_k__BackingField,
    v12,
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
  __int64 v20; // x1

  if ( (byte_41855C8 & 1) == 0 )
  {
    sub_B2C35C(&Method_NetworkManager_getRequest_BattleScenarioRequest___, isExit);
    sub_B2C35C(&NetworkManager_TypeInfo, v3);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v4);
    sub_B2C35C(&ScriptManager_TypeInfo, v5);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v6);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_35__, v7);
    sub_B2C35C(&QuestAfterAction_StateMain___c_TypeInfo, v8);
    byte_41855C8 = 1;
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
    _9__16_35 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__16_35,
      v12,
      Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_35__,
      0LL);
    v13 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    v13->__9__16_35 = _9__16_35;
    sub_B2C2F8(&v13->__9__16_35, _9__16_35);
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (BattleScenarioRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   _9__16_35,
                                                                   (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_4183C7A )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v14);
    byte_4183C7A = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v16 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v16->static_fields->_QuestId_k__BackingField;
  if ( !byte_4183C7B )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v14);
    v16 = TerminalPramsManager_TypeInfo;
    byte_4183C7B = 1;
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
    sub_B2C434(SelectRouteArray, v20);
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
  __int64 v16; // x1

  if ( (byte_41855C9 & 1) == 0 )
  {
    sub_B2C35C(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___, jsonstr);
    sub_B2C35C(&JsonManager_TypeInfo, v4);
    sub_B2C35C(&ScriptManager_TypeInfo, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_16287/*"afterActionBk"*/, v8);
    sub_B2C35C(&StringLiteral_15634/*"["*/, v9);
    sub_B2C35C(&StringLiteral_15870/*"]"*/, v10);
    byte_41855C9 = 1;
  }
  v11 = (Il2CppObject *)System_String__Concat_44307816(
                          (System_String_o *)StringLiteral_15634/*"["*/,
                          jsonstr,
                          (System_String_o *)StringLiteral_15870/*"]"*/,
                          0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v12 = (BattleResultComponent_resultData_array *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                    v11,
                                                    (const MethodInfo_1AACFE4 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16287/*"afterActionBk"*/, 0LL);
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
  if ( !byte_4183C70 )
  {
    sub_B2C35C(&TerminalPramsManager_TypeInfo, v13);
    byte_4183C70 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v14->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v16);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(_4__this, method);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(this, method);
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
    sub_B2C434(this, method);
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
    sub_B2C434(this, method);
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
    sub_B2C434(this, method);
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
    sub_B2C434(this, method);
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
    sub_B2C434(this, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *v7; // x19
  UnityEngine_Component_o *mapGimmick; // x0
  __int64 v9; // x1
  UnityEngine_Component_o *v10; // x22
  Firebase_Unity_UnitySynchronizationContext_SynchronizationContextBehavoir_o *v11; // x0
  Il2CppObject *v12; // x21
  struct System_String_array *paramsStr; // x8
  struct System_String_array *v14; // x8
  Il2CppClass *klass; // x20
  float v16; // s0
  UITweener_o *v17; // x20
  EventDelegate_Callback_o *v18; // x21
  __int64 v19; // x0
  unsigned __int128 v20; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_41855CA & 1) == 0 )
  {
    sub_B2C35C(&EventDelegate_Callback_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_AddComponent_TweenColor___, v3);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___, v4);
    sub_B2C35C(&Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__28__, v5);
    sub_B2C35C(&QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo, v6);
    byte_41855CA = 1;
  }
  v20 = 0uLL;
  v7 = (Il2CppObject *)sub_B2C42C(QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo);
  System_Object___ctor(v7, 0LL);
  if ( !v7 )
    goto LABEL_18;
  v7[1].monitor = this;
  sub_B2C2F8(&v7[1].monitor, this);
  mapGimmick = (UnityEngine_Component_o *)this->fields.mapGimmick;
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0LL);
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                            (UnityEngine_GameObject_o *)mapGimmick,
                                            (const MethodInfo_1AA7988 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !mapGimmick )
    goto LABEL_18;
  v10 = mapGimmick;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0LL);
  if ( !mapGimmick )
    goto LABEL_18;
  v11 = UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
          (UnityEngine_GameObject_o *)mapGimmick,
          (const MethodInfo_1AA77E0 *)Method_UnityEngine_GameObject_AddComponent_TweenColor___);
  v7[1].klass = (Il2CppClass *)v11;
  v12 = v7 + 1;
  sub_B2C2F8(&v7[1], v11);
  paramsStr = this->fields.paramsStr;
  if ( !paramsStr )
    goto LABEL_18;
  if ( paramsStr->max_length <= 1 )
    goto LABEL_19;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                            paramsStr->m_Items[1],
                                            (UnityEngine_Color_o *)&v20,
                                            0LL);
  if ( !v12->klass
    || (*(_OWORD *)&v12->klass->_1.klass = *(_OWORD *)(&v10[5].fields + 1), !v12->klass)
    || (*(_OWORD *)&v12->klass->_1.events = v20, (v14 = this->fields.paramsStr) == 0LL) )
  {
LABEL_18:
    sub_B2C434(mapGimmick, v9);
  }
  if ( v14->max_length <= 2 )
  {
LABEL_19:
    v19 = sub_B2C460(mapGimmick);
    sub_B2C400(v19, 0LL);
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
  v17 = (UITweener_o *)v7[1].klass;
  v18 = (EventDelegate_Callback_o *)sub_B2C42C(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v18,
    v7,
    Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__28__,
    0LL);
  if ( !v17 )
    goto LABEL_18;
  UITweener__SetOnFinished(v17, v18, 0LL);
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
  __int64 v5; // x1
  struct QuestAfterAction_StateMain___c__DisplayClass16_13_o *CS___8__locals14; // x8
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals13; // x8

  if ( (byte_41855CB & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_41855CB = 1;
  }
  tween = (UnityEngine_Object_o *)this->fields.tween;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35314896(tween, 0LL);
  CS___8__locals14 = this->fields.CS___8__locals14;
  if ( !CS___8__locals14
    || (CS___8__locals13 = CS___8__locals14->fields.CS___8__locals13) == 0LL
    || (_4__this = CS___8__locals13->fields.__4__this) == 0LL )
  {
    sub_B2C434(_4__this, v5);
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
    sub_B2C434(this, method);
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
    sub_B2C434(this, method);
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
    sub_B2C434(this, method);
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
    sub_B2C434(this, method);
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
    sub_B2C434(this, method);
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
    sub_B2C434(this, method);
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
    sub_B2C434(this, method);
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
    sub_B2C434(this, method);
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
    sub_B2C434(this, method);
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
    sub_B2C434(this, method);
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
  sub_B2C2F8(p_end, 0LL);
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
  sub_B2C2F8(&this->fields, startCallback);
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
  sub_B2C2F8(p_end, endCallback);
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
  sub_B2C2F8(v6, vName);
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
      sub_B2C434(this, method);
    if ( _4__this->fields.isKeepingMainStateButFinished )
    {
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_B2C2F8(&this->fields.__2__current, 0LL);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_QuestAfterAction__WaitWhileMainStateFinished_d__73_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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

  if ( (byte_41852D6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__, method);
    byte_41852D6 = 1;
  }
  svtVInfos = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.svtVInfos;
  if ( !svtVInfos
    || (System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          svtVInfos,
          0,
          (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__),
        (svtVInfos = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.__4__this) == 0LL) )
  {
    sub_B2C434(svtVInfos, method);
  }
  QuestAfterAction__LoadVoice_25281076(
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
  __int64 v5; // x1

  if ( (byte_41852D7 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v3);
    byte_41852D7 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v4 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v4 )
    sub_B2C434(0LL, v5);
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

  if ( (byte_41852D8 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    sub_B2C35C(&SingletonTemplate_MissionNotifyManager__TypeInfo, v3);
    byte_41852D8 = 1;
  }
  _4__this = (MissionNotifyManager_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  _4__this[2].klass = 0LL;
  sub_B2C2F8(&_4__this[2], 0LL);
  _4__this = (MissionNotifyManager_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  *(_QWORD *)&_4__this->fields.dispInfosIndex = 0LL;
  sub_B2C2F8(&_4__this->fields.dispInfosIndex, 0LL);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  _4__this = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_28419EC *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !_4__this
    || (MissionNotifyManager__EndPause(_4__this, 0LL),
        (_4__this = (MissionNotifyManager_o *)this->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_B2C434(_4__this, method);
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
    sub_B2C434(0LL, method);
  QuestAfterAction__SetState(_4__this, 2, 0LL);
}