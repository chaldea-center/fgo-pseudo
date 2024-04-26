void __fastcall QuestAfterAction___ctor(QuestAfterAction_o *this, const MethodInfo *method)
{
  QuestAfterAction_TitleInfoControlCallback_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  BlankEarthQuestAfterAction_o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7

  if ( (byte_4351FD1 & 1) == 0 )
  {
    sub_B70694(&BlankEarthQuestAfterAction_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo);
    sub_B70694(&System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
    sub_B70694(&QuestAfterAction_TitleInfoControlCallback_TypeInfo);
    byte_4351FD1 = 1;
  }
  v3 = (QuestAfterAction_TitleInfoControlCallback_o *)sub_B70764(QuestAfterAction_TitleInfoControlCallback_TypeInfo);
  QuestAfterAction_TitleInfoControlCallback___ctor(v3, 0LL);
  this->fields._TitleInfoCtrlCallback_k__BackingField = v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._TitleInfoCtrlCallback_k__BackingField,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (BlankEarthQuestAfterAction_o *)sub_B70764(BlankEarthQuestAfterAction_TypeInfo);
  BlankEarthQuestAfterAction___ctor(v10, 0LL);
  this->fields._BlankEarthQuestAfterAction_k__BackingField = v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields._BlankEarthQuestAfterAction_k__BackingField,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B70764(System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v17,
    (const MethodInfo_2F71470 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
  this->fields.commandTypeIds = (struct System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *)v17;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.commandTypeIds,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B70764(System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v24,
    (const MethodInfo_2FC59B4 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
  this->fields.svtVoices = (struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v24;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.svtVoices,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  this->fields.MapMoveBeforeFocusSpotId = -1;
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2CE9C98 *)Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
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
  sub_B70630(p_endAct, 0LL, v2, v3, v4, v5, v6, v7);
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
  QuestAfterAction_o *v4; // x19
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  TerminalPramsManager_c *v7; // x0
  int32_t QuestId_k__BackingField; // w21
  System_String_array *v9; // x27
  __int64 v10; // x1
  WebViewManager_o *Instance; // x20
  __int64 Master_WarQuestSelectionMaster; // x0
  __int64 v13; // x8
  __int64 v14; // x8
  __int64 v15; // x8
  int32_t v16; // w23
  __int64 v17; // x8
  __int64 v18; // x8
  int32_t v19; // w24
  __int64 v20; // x8
  __int64 v21; // x8
  int32_t v22; // w23
  __int64 v23; // x8
  __int64 v24; // x8
  int32_t v25; // w22
  TerminalPramsManager_c *v26; // x0
  TerminalSceneComponent_c *v27; // x0
  TerminalPramsManager_c *v28; // x0
  System_String_o *String_36095200; // x22
  __int64 v30; // x22
  int32_t v31; // w23
  int32_t v32; // w23
  System_String_o *v33; // x23
  bool v34; // w23
  bool v35; // w22
  WarMaster_o *MasterData_WarQuestSelectionMaster; // x22
  WarEntity_o *QuestId; // x0
  WarEntity_o *v38; // x22
  TerminalPramsManager_c *v39; // x0
  int32_t id; // w23
  bool v41; // w22
  TerminalPramsManager_c *v42; // x0
  TerminalPramsManager_c *v43; // x0
  QuestPhaseDetailAddMaster_o *v44; // x22
  int32_t v45; // w23
  QuestPhaseDetailMaster_o *v46; // x22
  int32_t v47; // w23
  TerminalPramsManager_c *v48; // x0
  int32_t v49; // w21
  WarEntity_o *v50; // x0
  QuestBehaviorMaster_o *v51; // x21
  int32_t v52; // w23
  const MethodInfo *v53; // x1
  bool IsOverwriteCommandNone; // w0
  __int64 v55; // x8
  System_Int32_array **v56; // x0
  unsigned int **p_commandBuf; // x22
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  int *commandBuf; // x8
  unsigned __int64 v65; // x23
  il2cpp_array_size_t v66; // w21
  __int64 v67; // x24
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  __int64 v74; // x8
  System_Int32_array **v75; // x1
  System_String_o **v76; // x20
  const MethodInfo *v77; // x2
  int v78; // w8
  System_String_o *v79; // x26
  int v80; // w8
  unsigned int **v81; // x25
  QuestAfterAction_o *v82; // x22
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *svtVoices; // x26
  System_String_o *v84; // x28
  System_String_array *v85; // x19
  QuestAfterAction_VoiceInfo_o *v86; // x27
  int v87; // w8
  unsigned int v88; // w8
  System_String_o *Item; // x26
  const MethodInfo *v90; // x1
  QuestAfterAction_o *v91; // x0
  const MethodInfo *v92; // x2
  __int64 v93; // x8
  __int64 v94; // x25
  unsigned __int64 v95; // x20
  unsigned int *v96; // x20
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  unsigned int *v103; // x0
  TerminalPramsManager_c *v104; // x0
  QuestMaster_o *v105; // x19
  TerminalPramsManager_c *v106; // x0
  BalanceConfig_c *v107; // x8
  int32_t WarId_k__BackingField; // w19
  int32_t v109; // w19
  TerminalPramsManager_c *v110; // x0
  TerminalPramsManager_c *v111; // x0
  TerminalPramsManager_c *v112; // x0
  BalanceConfig_c *v113; // x8
  int32_t v114; // w20
  TerminalPramsManager_c *v115; // x0
  TerminalPramsManager_c *v116; // x0
  TerminalPramsManager_c *v117; // x0
  __int64 v118; // x0
  __int64 v119; // x0
  int32_t sId; // [xsp+8h] [xbp-68h]
  int32_t svtId; // [xsp+Ch] [xbp-64h] BYREF
  WarEntity_o *v122; // [xsp+10h] [xbp-60h] BYREF
  QuestEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  v4 = this;
  if ( (byte_4351FB7 & 1) == 0 )
  {
    sub_B70694(&BalanceConfig_TypeInfo);
    sub_B70694(&bool_TypeInfo);
    sub_B70694(&char___TypeInfo);
    sub_B70694(&QuestAfterAction_Command___TypeInfo);
    sub_B70694(&QuestAfterAction_Command_TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_WarMaster___);
    sub_B70694(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_B70694(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_B70694(&Method_DataManager_GetMaster_QuestMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ShopMaster___);
    sub_B70694(&Method_DataManager_GetMaster_WarMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    sub_B70694(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    sub_B70694(&QuestAfterAction_VoiceInfo_TypeInfo);
    this = (QuestAfterAction_o *)sub_B70694(&StringLiteral_16529/*"afterActionBk"*/);
    byte_4351FB7 = 1;
  }
  v122 = 0LL;
  entity = 0LL;
  svtId = 0;
  *(_QWORD *)&v4->fields.ActionMapTargetType = -1LL;
  *(_WORD *)&v4->fields.isLoadedVoice = 0;
  if ( isBeforeAction )
  {
    if ( System_Linq_Enumerable__Any_KeyValuePair_int__QuestAfterAction_VoiceInfo__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.svtVoices,
           (const MethodInfo_1CA80C0 *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____) )
    {
      QuestAfterAction__releaseVoice(v4, v5);
    }
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_434DEB6 )
    {
      sub_B70694(&TerminalPramsManager_TypeInfo);
      byte_434DEB6 = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v7->static_fields->_QuestId_k__BackingField;
    if ( !byte_434DEB7 )
    {
      sub_B70694(&TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
      byte_434DEB7 = 1;
    }
    if ( (BYTE3(v7->vtable._0_Equals.methodPtr) & 4) != 0 && !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = TerminalPramsManager_TypeInfo;
    }
    v9 = QuestAfterAction__GetBeforeAction(
           QuestId_k__BackingField,
           v7->static_fields->_PhaseCnt_k__BackingField + 1,
           v6);
    goto LABEL_261;
  }
  QuestAfterAction__LoadTerminalTransitionInfo(this, (const MethodInfo *)isBeforeAction);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
  }
  Master_WarQuestSelectionMaster = (__int64)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)TerminalSceneComponent_TypeInfo;
  }
  v13 = **(_QWORD **)(Master_WarQuestSelectionMaster + 184);
  if ( !v13 )
    goto LABEL_340;
  if ( *(_QWORD *)(v13 + 448) )
  {
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
    }
    if ( !byte_434DEA1 )
    {
      sub_B70694(&TerminalSceneComponent_TypeInfo);
      byte_434DEA1 = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalSceneComponent_TypeInfo;
    }
    v14 = **(_QWORD **)(Master_WarQuestSelectionMaster + 184);
    if ( !v14 )
      goto LABEL_340;
    v15 = *(_QWORD *)(v14 + 448);
    if ( !v15 )
      goto LABEL_340;
    v16 = *(_DWORD *)(v15 + 20);
    if ( !byte_434DEA1 )
    {
      sub_B70694(&TerminalSceneComponent_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalSceneComponent_TypeInfo;
      byte_434DEA1 = 1;
    }
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      Master_WarQuestSelectionMaster = (__int64)TerminalSceneComponent_TypeInfo;
    }
    v17 = **(_QWORD **)(Master_WarQuestSelectionMaster + 184);
    if ( !v17 )
      goto LABEL_340;
    v18 = *(_QWORD *)(v17 + 448);
    if ( !v18 )
      goto LABEL_340;
    v19 = *(_DWORD *)(v18 + 16);
    if ( v19 < 1 )
    {
      if ( v16 < 1 )
        goto LABEL_96;
      if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
        && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
      {
        j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      }
      if ( !byte_434DEA1 )
      {
        sub_B70694(&TerminalSceneComponent_TypeInfo);
        byte_434DEA1 = 1;
      }
      Master_WarQuestSelectionMaster = (__int64)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Master_WarQuestSelectionMaster = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v23 = **(_QWORD **)(Master_WarQuestSelectionMaster + 184);
      if ( !v23 )
        goto LABEL_340;
      v24 = *(_QWORD *)(v23 + 448);
      if ( !v24 )
        goto LABEL_340;
      v9 = *(System_String_array **)(v24 + 32);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_340;
      Master_WarQuestSelectionMaster = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                  v16,
                                                  (const MethodInfo_21C0440 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_340;
      v22 = *(_DWORD *)(Master_WarQuestSelectionMaster + 24);
      Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_WarMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_340;
    }
    else
    {
      if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
        && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
      {
        j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      }
      if ( !byte_434DEA1 )
      {
        sub_B70694(&TerminalSceneComponent_TypeInfo);
        byte_434DEA1 = 1;
      }
      Master_WarQuestSelectionMaster = (__int64)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        Master_WarQuestSelectionMaster = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v20 = **(_QWORD **)(Master_WarQuestSelectionMaster + 184);
      if ( !v20 )
        goto LABEL_340;
      v21 = *(_QWORD *)(v20 + 448);
      if ( !v21 )
        goto LABEL_340;
      if ( !Instance )
        goto LABEL_340;
      v9 = *(System_String_array **)(v21 + 32);
      Master_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)Instance,
                                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_340;
      Master_WarQuestSelectionMaster = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                  v19,
                                                  (const MethodInfo_21C0440 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_340;
      v22 = *(_DWORD *)(Master_WarQuestSelectionMaster + 28);
      Master_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)Instance,
                                                  (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_340;
    }
    Master_WarQuestSelectionMaster = (__int64)WarMaster__getByEventId(
                                                (WarMaster_o *)Master_WarQuestSelectionMaster,
                                                v22,
                                                0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_340;
    v25 = *(_DWORD *)(Master_WarQuestSelectionMaster + 16);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_434DEA5 )
    {
      sub_B70694(&TerminalPramsManager_TypeInfo);
      byte_434DEA5 = 1;
    }
    v26 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v26 = TerminalPramsManager_TypeInfo;
    }
    v26->static_fields->_WarId_k__BackingField = v25;
    if ( !byte_434DEA1 )
    {
      sub_B70694(&TerminalSceneComponent_TypeInfo);
      byte_434DEA1 = 1;
    }
    v27 = TerminalSceneComponent_TypeInfo;
    if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v27 = TerminalSceneComponent_TypeInfo;
    }
    Master_WarQuestSelectionMaster = (__int64)v27->static_fields->mInstance;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_340;
    TerminalSceneComponent__CallQuestInformationCloseAtAll(
      (TerminalSceneComponent_o *)Master_WarQuestSelectionMaster,
      0,
      0LL);
    if ( v9 )
      goto LABEL_261;
  }
LABEL_96:
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_434DEB8 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434DEB8 = 1;
  }
  v28 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v28 = TerminalPramsManager_TypeInfo;
  }
  if ( !v28->static_fields->_IsPhaseClear_k__BackingField
    && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_16529/*"afterActionBk"*/, 0LL) )
  {
    String_36095200 = UnityEngine_PlayerPrefs__GetString_36095200((System_String_o *)StringLiteral_16529/*"afterActionBk"*/, 0LL);
    Master_WarQuestSelectionMaster = sub_B706AC(char___TypeInfo, 1LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_340;
    v10 = Master_WarQuestSelectionMaster;
    if ( !*(_DWORD *)(Master_WarQuestSelectionMaster + 24) )
      goto LABEL_454;
    *(_WORD *)(Master_WarQuestSelectionMaster + 32) = 44;
    if ( !String_36095200 )
      goto LABEL_340;
    Master_WarQuestSelectionMaster = (__int64)System_String__Split(
                                                String_36095200,
                                                (System_Char_array *)Master_WarQuestSelectionMaster,
                                                0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_340;
    v30 = Master_WarQuestSelectionMaster;
    if ( !*(_DWORD *)(Master_WarQuestSelectionMaster + 24) )
      goto LABEL_454;
    v31 = System_Int32__Parse(*(System_String_o **)(Master_WarQuestSelectionMaster + 32), 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_434DEA7 )
    {
      sub_B70694(&TerminalPramsManager_TypeInfo);
      byte_434DEA7 = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 16LL) = v31;
    if ( *(_DWORD *)(v30 + 24) <= 1u )
      goto LABEL_454;
    v32 = System_Int32__Parse(*(System_String_o **)(v30 + 40), 0LL);
    if ( !byte_434DEA8 )
    {
      sub_B70694(&TerminalPramsManager_TypeInfo);
      byte_434DEA8 = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 20LL) = v32;
    if ( *(_DWORD *)(v30 + 24) <= 2u )
      goto LABEL_454;
    v33 = *(System_String_o **)(v30 + 48);
    if ( (BYTE3(bool_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !bool_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
    v34 = System_Boolean__Parse(v33, 0LL);
    if ( !byte_434DED1 )
    {
      sub_B70694(&TerminalPramsManager_TypeInfo);
      byte_434DED1 = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    *(_BYTE *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 100LL) = v34;
    if ( *(_DWORD *)(v30 + 24) <= 3u )
      goto LABEL_454;
    v35 = System_Boolean__Parse(*(System_String_o **)(v30 + 56), 0LL);
    if ( !byte_434DED2 )
    {
      sub_B70694(&TerminalPramsManager_TypeInfo);
      byte_434DED2 = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    *(_BYTE *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 101LL) = v35;
    if ( !byte_434DEC0 )
    {
      sub_B70694(&TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
      byte_434DEC0 = 1;
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
        goto LABEL_340;
      MasterData_WarQuestSelectionMaster = (WarMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                            (DataManager_o *)Instance,
                                                            (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_434DEB6 )
      {
        sub_B70694(&TerminalPramsManager_TypeInfo);
        byte_434DEB6 = 1;
      }
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
      }
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_340;
      QuestId = WarMaster__getByLastQuestId(
                  MasterData_WarQuestSelectionMaster,
                  *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 16LL),
                  0LL);
      if ( QuestId )
      {
        v38 = QuestId;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_434DEBE )
        {
          sub_B70694(&TerminalPramsManager_TypeInfo);
          byte_434DEBE = 1;
        }
        v39 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v39 = TerminalPramsManager_TypeInfo;
        }
        v39->static_fields->_IsWarClear_k__BackingField = 1;
        id = v38->fields.id;
        if ( !byte_434DEA5 )
        {
          sub_B70694(&TerminalPramsManager_TypeInfo);
          v39 = TerminalPramsManager_TypeInfo;
          byte_434DEA5 = 1;
        }
        if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v39);
          v39 = TerminalPramsManager_TypeInfo;
        }
        v39->static_fields->_WarId_k__BackingField = id;
        v41 = TerminalPramsManager__CheckIsOrdealCallWarClear(v38, 0LL);
        if ( !byte_434DEF0 )
        {
          sub_B70694(&TerminalPramsManager_TypeInfo);
          byte_434DEF0 = 1;
        }
        v42 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v42 = TerminalPramsManager_TypeInfo;
        }
        v42->static_fields->_IsOrdealCallWarClear_k__BackingField = v41;
      }
    }
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_434DEBC )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434DEBC = 1;
  }
  v43 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v43 = TerminalPramsManager_TypeInfo;
  }
  if ( v43->static_fields->_IsWarClear_k__BackingField )
  {
    if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v43);
    if ( !byte_434DEBD )
    {
      sub_B70694(&TerminalPramsManager_TypeInfo);
      byte_434DEBD = 1;
    }
    v43 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v43 = TerminalPramsManager_TypeInfo;
    }
    if ( !v43->static_fields->_IsOrdealCallWarClear_k__BackingField )
      goto LABEL_260;
  }
  if ( (BYTE3(v43->vtable._0_Equals.methodPtr) & 4) != 0 && !v43->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v43);
  if ( !byte_434DEB8 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434DEB8 = 1;
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
      goto LABEL_340;
    v44 = (QuestPhaseDetailAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_434DEB6 )
    {
      sub_B70694(&TerminalPramsManager_TypeInfo);
      byte_434DEB6 = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    v45 = *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 16LL);
    if ( !byte_434DEB7 )
    {
      sub_B70694(&TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
      byte_434DEB7 = 1;
    }
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !v44 )
      goto LABEL_340;
    v9 = QuestPhaseDetailAddMaster__GetAfterAction(
           v44,
           v45,
           *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 20LL) + 1,
           0LL);
    if ( v9 )
      goto LABEL_261;
    v46 = (QuestPhaseDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_434DEB6 )
    {
      sub_B70694(&TerminalPramsManager_TypeInfo);
      byte_434DEB6 = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    v47 = *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 16LL);
    if ( !byte_434DEB7 )
    {
      sub_B70694(&TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
      byte_434DEB7 = 1;
    }
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !v46 )
      goto LABEL_340;
    v9 = QuestPhaseDetailMaster__GetAfterAction(
           v46,
           v47,
           *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 20LL) + 1,
           0LL);
    if ( v9 )
      goto LABEL_261;
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0 && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
  if ( !byte_434DEC0 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434DEC0 = 1;
  }
  v48 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v48 = TerminalPramsManager_TypeInfo;
  }
  if ( !v48->static_fields->_IsQuestClear_k__BackingField )
    goto LABEL_260;
  if ( (BYTE3(v48->vtable._0_Equals.methodPtr) & 4) != 0 && !v48->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v48);
  v9 = 0LL;
  if ( TerminalPramsManager__get_Debug_IsQuestReleaseAll(0LL) )
    goto LABEL_261;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_434DEB6 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434DEB6 = 1;
  }
  Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !Instance )
    goto LABEL_340;
  v49 = *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 16LL);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_340;
  v50 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
          v49,
          (const MethodInfo_21C0440 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( v50 )
    v9 = *(System_String_array **)&v50->fields.eventId;
  else
LABEL_260:
    v9 = 0LL;
LABEL_261:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v51 = (QuestBehaviorMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_434DEB6 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434DEB6 = 1;
  }
  Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
  }
  v52 = *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 16LL);
  if ( !byte_434DEB7 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    byte_434DEB7 = 1;
  }
  if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0 && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
  {
    j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !v51 )
    goto LABEL_340;
  if ( QuestBehaviorMaster__IsOpenQuestBehaviorCond(
         v51,
         v52,
         *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 20LL) + 1,
         7,
         0LL)
    || (IsOverwriteCommandNone = QuestAfterAction__IsOverwriteCommandNone(v9, v53), !v9)
    || IsOverwriteCommandNone
    || (v55 = *(_QWORD *)&v9->max_length, (int)v55 < 2)
    || (v55 & 1) != 0 )
  {
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16529/*"afterActionBk"*/, 0LL);
    return;
  }
  v56 = (System_Int32_array **)sub_B706AC(QuestAfterAction_Command___TypeInfo, (unsigned int)v55 >> 1);
  v4->fields.commandBuf = (struct QuestAfterAction_Command_array *)v56;
  p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
  sub_B70630((BattleServantConfConponent_o *)&v4->fields.commandBuf, v56, v58, v59, v60, v61, v62, v63);
  commandBuf = (int *)v4->fields.commandBuf;
  if ( !commandBuf )
    goto LABEL_340;
  v65 = 0LL;
  v66 = 0;
  while ( (__int64)v65 < commandBuf[6] )
  {
    v67 = sub_B70764(QuestAfterAction_Command_TypeInfo);
    QuestAfterAction_Command___ctor((QuestAfterAction_Command_o *)v67, 0LL);
    if ( v66 >= v9->max_length )
      goto LABEL_454;
    Master_WarQuestSelectionMaster = System_Int32__Parse(v9->m_Items[v66], 0LL);
    if ( !v67 )
      goto LABEL_340;
    *(_DWORD *)(v67 + 16) = Master_WarQuestSelectionMaster;
    v74 = (int)v66 | 1LL;
    if ( (unsigned int)v74 >= v9->max_length )
      goto LABEL_454;
    v75 = (System_Int32_array **)v9->m_Items[v74];
    *(_QWORD *)(v67 + 24) = v75;
    v76 = (System_String_o **)(v67 + 24);
    sub_B70630((BattleServantConfConponent_o *)(v67 + 24), v75, v68, v69, v70, v71, v72, v73);
    if ( !v4->fields.hasFadeCommand )
    {
      v78 = *(_DWORD *)(v67 + 16);
      if ( v78 == 520 || v78 == 405 )
        v4->fields.hasFadeCommand = 1;
    }
    if ( !v66 && !v4->fields.isRequestedStopBgm && *(_DWORD *)(v67 + 16) == 850 )
      v4->fields.isRequestedStopBgm = 1;
    if ( (v4->fields.MapMoveBeforeFocusSpotId & 0x80000000) != 0 && *(_DWORD *)(v67 + 16) == 350 )
    {
      v79 = *v76;
      Master_WarQuestSelectionMaster = sub_B706AC(char___TypeInfo, 1LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_340;
      v10 = Master_WarQuestSelectionMaster;
      if ( !*(_DWORD *)(Master_WarQuestSelectionMaster + 24) )
        goto LABEL_454;
      *(_WORD *)(Master_WarQuestSelectionMaster + 32) = 44;
      if ( !v79 )
        goto LABEL_340;
      Master_WarQuestSelectionMaster = (__int64)System_String__Split(
                                                  v79,
                                                  (System_Char_array *)Master_WarQuestSelectionMaster,
                                                  0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_340;
      if ( *(int *)(Master_WarQuestSelectionMaster + 24) >= 4 )
      {
        Master_WarQuestSelectionMaster = System_Int32__Parse(
                                           *(System_String_o **)(Master_WarQuestSelectionMaster + 56),
                                           0LL);
        v4->fields.MapMoveBeforeFocusSpotId = Master_WarQuestSelectionMaster;
      }
    }
    if ( v4->fields.IsMoveToEventRewardShop )
      goto LABEL_309;
    v80 = *(_DWORD *)(v67 + 16);
    if ( v80 == 700 )
    {
      v4->fields.IsMoveToEventRewardShop = 1;
LABEL_309:
      v80 = *(_DWORD *)(v67 + 16);
    }
    if ( v80 == 800 )
    {
      Master_WarQuestSelectionMaster = (__int64)QuestAfterAction_Command__GetAvailableRandomVoice(
                                                  (QuestAfterAction_Command_o *)v67,
                                                  &svtId,
                                                  0LL);
      if ( Master_WarQuestSelectionMaster )
      {
        v81 = p_commandBuf;
        v82 = v4;
        svtVoices = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v4->fields.svtVoices;
        v84 = (System_String_o *)Master_WarQuestSelectionMaster;
        v85 = v9;
        sId = svtId;
        v86 = (QuestAfterAction_VoiceInfo_o *)sub_B70764(QuestAfterAction_VoiceInfo_TypeInfo);
        QuestAfterAction_VoiceInfo___ctor(v86, sId, v84, 0LL);
        if ( !svtVoices )
          goto LABEL_340;
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
          svtVoices,
          v65,
          (WarBoardEvalValueSquare_EvalValueSquare_o *)v86,
          (const MethodInfo_2FC6568 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__);
        v9 = v85;
        v4 = v82;
        p_commandBuf = v81;
      }
    }
    v87 = *(_DWORD *)(v67 + 16);
    if ( v87 <= 114 )
    {
      v88 = v87 - 100;
      if ( v88 >= 0xF || ((0x7C1Fu >> v88) & 1) == 0 )
        goto LABEL_327;
      v10 = 0LL;
    }
    else if ( (unsigned int)(v87 - 200) < 6 )
    {
      v10 = 1LL;
    }
    else if ( (unsigned int)(v87 - 400) < 0xA )
    {
      v10 = 2LL;
    }
    else
    {
      if ( v87 != 550 )
        goto LABEL_327;
      v10 = 3LL;
    }
    Master_WarQuestSelectionMaster = (__int64)v4->fields.commandTypeIds;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_340;
    Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
             (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)Master_WarQuestSelectionMaster,
             v10,
             (const MethodInfo_2F71F60 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    Master_WarQuestSelectionMaster = QuestAfterAction__ExtractCommandTargetId((QuestAfterAction_Command_o *)v67, v90);
    if ( !Item )
      goto LABEL_340;
    System_Collections_Generic_List_int___Add(
      (System_Collections_Generic_List_int__o *)Item,
      Master_WarQuestSelectionMaster,
      (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
LABEL_327:
    if ( v4->fields.ActionMapTargetId <= 0 )
      QuestAfterAction__SetActionMap(v4, (QuestAfterAction_Command_o *)v67, v77);
    if ( *(_DWORD *)(v67 + 16) == 102 )
    {
      v91 = (QuestAfterAction_o *)System_Int32__Parse(*v76, 0LL);
      Master_WarQuestSelectionMaster = (__int64)QuestAfterAction__GetMapGimmickId(v91, (int32_t)v91, v92);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_340;
      v93 = *(_QWORD *)(Master_WarQuestSelectionMaster + 24);
      v94 = Master_WarQuestSelectionMaster;
      if ( (int)v93 >= 1 )
      {
        v95 = 0LL;
        while ( v95 < (unsigned int)v93 )
        {
          Master_WarQuestSelectionMaster = (__int64)v4->fields.invalidMapGimmickIdList;
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_340;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)Master_WarQuestSelectionMaster,
            *(_DWORD *)(v94 + 32 + 4 * v95),
            (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
          LODWORD(v93) = *(_DWORD *)(v94 + 24);
          if ( (__int64)++v95 >= (int)v93 )
            goto LABEL_336;
        }
LABEL_454:
        v118 = sub_B70798(Master_WarQuestSelectionMaster);
        sub_B70738(v118, 0LL);
      }
    }
LABEL_336:
    v96 = *p_commandBuf;
    if ( !*p_commandBuf )
      goto LABEL_340;
    Master_WarQuestSelectionMaster = sub_B70754(v67, *(_QWORD *)(*(_QWORD *)v96 + 64LL));
    if ( !Master_WarQuestSelectionMaster )
    {
      v119 = sub_B7078C(0LL);
      sub_B70738(v119, 0LL);
    }
    if ( v65 >= v96[6] )
      goto LABEL_454;
    v103 = &v96[2 * v65];
    *((_QWORD *)v103 + 4) = v67;
    sub_B70630((BattleServantConfConponent_o *)(v103 + 8), (System_Int32_array **)v67, v97, v98, v99, v100, v101, v102);
    commandBuf = (int *)*p_commandBuf;
    v66 += 2;
    ++v65;
    if ( !*p_commandBuf )
      goto LABEL_340;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_434DEB8 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434DEB8 = 1;
  }
  v104 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v104 = TerminalPramsManager_TypeInfo;
  }
  if ( v104->static_fields->_IsPhaseClear_k__BackingField )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v105 = (QuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_434DEB6 )
    {
      sub_B70694(&TerminalPramsManager_TypeInfo);
      byte_434DEB6 = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !v105 )
      goto LABEL_340;
    if ( QuestMaster__TryGetQuestEntity(
           v105,
           &entity,
           *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 16LL),
           0LL) )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_434DEA3 )
      {
        sub_B70694(&TerminalPramsManager_TypeInfo);
        byte_434DEA3 = 1;
      }
      v106 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v106 = TerminalPramsManager_TypeInfo;
      }
      v107 = BalanceConfig_TypeInfo;
      WarId_k__BackingField = v106->static_fields->_WarId_k__BackingField;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v107 = BalanceConfig_TypeInfo;
      }
      if ( WarId_k__BackingField == v107->static_fields->OrdealCallWarId )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
        if ( entity && Master_WarQuestSelectionMaster )
        {
          Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                             &v122,
                                             entity->fields.spotId,
                                             (const MethodInfo_21C049C *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
          if ( (Master_WarQuestSelectionMaster & 1) == 0 )
            goto LABEL_391;
          if ( v122 )
          {
            v109 = v122->fields.id;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            }
            if ( !byte_434F4D2 )
            {
              sub_B70694(&TerminalPramsManager_TypeInfo);
              byte_434F4D2 = 1;
            }
            v110 = TerminalPramsManager_TypeInfo;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v110 = TerminalPramsManager_TypeInfo;
            }
            v110->static_fields->_BlankEarthAfterActionFocusSpotId_k__BackingField = v109;
            goto LABEL_391;
          }
        }
LABEL_340:
        sub_B7076C(Master_WarQuestSelectionMaster, v10);
      }
    }
  }
LABEL_391:
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_434DEAC )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434DEAC = 1;
  }
  v111 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v111 = TerminalPramsManager_TypeInfo;
  }
  v111->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_434DEAB )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    v111 = TerminalPramsManager_TypeInfo;
    byte_434DEAB = 1;
  }
  if ( (BYTE3(v111->vtable._0_Equals.methodPtr) & 4) != 0 && !v111->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v111);
    v111 = TerminalPramsManager_TypeInfo;
  }
  v111->static_fields->_DispState_k__BackingField = 2;
  if ( !byte_434DEA3 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434DEA3 = 1;
  }
  v112 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v112 = TerminalPramsManager_TypeInfo;
  }
  v113 = BalanceConfig_TypeInfo;
  v114 = v112->static_fields->_WarId_k__BackingField;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v113 = BalanceConfig_TypeInfo;
  }
  v115 = TerminalPramsManager_TypeInfo;
  if ( v114 == v113->static_fields->OrdealCallWarId )
    goto LABEL_458;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_434DEBD )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434DEBD = 1;
  }
  v115 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v115 = TerminalPramsManager_TypeInfo;
  }
  if ( v115->static_fields->_IsOrdealCallWarClear_k__BackingField )
  {
LABEL_458:
    if ( (BYTE3(v115->vtable._0_Equals.methodPtr) & 4) != 0 && !v115->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v115);
    if ( !byte_434EDC7 )
    {
      sub_B70694(&TerminalPramsManager_TypeInfo);
      byte_434EDC7 = 1;
    }
    v115 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v115 = TerminalPramsManager_TypeInfo;
    }
    v115->static_fields->_BlankEarthSpotId_k__BackingField = 0;
    if ( !byte_434DEBD )
    {
      sub_B70694(&TerminalPramsManager_TypeInfo);
      v115 = TerminalPramsManager_TypeInfo;
      byte_434DEBD = 1;
    }
    if ( (BYTE3(v115->vtable._0_Equals.methodPtr) & 4) != 0 && !v115->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v115);
      v115 = TerminalPramsManager_TypeInfo;
    }
    if ( !v115->static_fields->_IsOrdealCallWarClear_k__BackingField )
    {
      if ( (BYTE3(v115->vtable._0_Equals.methodPtr) & 4) != 0 && !v115->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v115);
      if ( !byte_434DEAB )
      {
        sub_B70694(&TerminalPramsManager_TypeInfo);
        byte_434DEAB = 1;
      }
      v116 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v116 = TerminalPramsManager_TypeInfo;
      }
      v116->static_fields->_DispState_k__BackingField = 3;
      v115 = TerminalPramsManager_TypeInfo;
    }
  }
  if ( (BYTE3(v115->vtable._0_Equals.methodPtr) & 4) != 0 && !v115->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v115);
  if ( !byte_434DED8 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434DED8 = 1;
  }
  v117 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v117 = TerminalPramsManager_TypeInfo;
  }
  v117->static_fields->_SpotId_k__BackingField = -1;
}


void __fastcall QuestAfterAction__DeleteContinueData(const MethodInfo *method)
{
  if ( (byte_4351FB5 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_16529/*"afterActionBk"*/);
    byte_4351FB5 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16529/*"afterActionBk"*/, 0LL);
}


int32_t __fastcall QuestAfterAction__ExtractCommandTargetId(
        QuestAfterAction_Command_o *command,
        const MethodInfo *method)
{
  QuestAfterAction_Command_o *v2; // x19
  bool v3; // w0
  System_String_o *param; // x19
  __int64 v6; // x0

  v2 = command;
  if ( (byte_4351FB8 & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    command = (QuestAfterAction_Command_o *)sub_B70694(&StringLiteral_712/*","*/);
    byte_4351FB8 = 1;
  }
  if ( !v2 )
    goto LABEL_13;
  command = (QuestAfterAction_Command_o *)v2->fields.param;
  if ( !command )
    goto LABEL_13;
  v3 = System_String__Contains((System_String_o *)command, (System_String_o *)StringLiteral_712/*","*/, 0LL);
  param = v2->fields.param;
  if ( v3 )
  {
    command = (QuestAfterAction_Command_o *)sub_B706AC(char___TypeInfo, 1LL);
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
          v6 = sub_B70798(command);
          sub_B70738(v6, 0LL);
        }
      }
    }
LABEL_13:
    sub_B7076C(command, method);
  }
  return System_Int32__Parse(param, 0LL);
}


System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved(
        QuestAfterAction_o *this,
        System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *commandEnumerable,
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

  if ( (byte_4351FC5 & 1) == 0 )
  {
    sub_B70694(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_TypeInfo);
    byte_4351FC5 = 1;
  }
  v5 = sub_B70764(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_TypeInfo);
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74___ctor(
    (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *)v5,
    -2,
    0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 56) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 56), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 48) = commandEnumerable;
  sub_B70630(
    (BattleServantConfConponent_o *)(v5 + 48),
    (System_Int32_array **)commandEnumerable,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  return (System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *)v5;
}


QuestAfterAction_Command_array *__fastcall QuestAfterAction__GenerateCommandBuf(
        System_String_array *actionVals,
        const MethodInfo *method)
{
  __int64 IsNullOrEmpty; // x0
  __int64 v4; // x1
  _QWORD **v5; // x20
  __int64 v6; // x19
  __int16 v7; // w8
  __int64 v8; // x19
  __int64 v9; // x19
  __int64 v10; // x19
  QuestAfterAction_Command_array *v11; // x20
  __int64 v12; // x22
  unsigned __int64 v13; // x23
  __int64 v14; // x24
  il2cpp_array_size_t v15; // w25
  __int64 v16; // x21
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_Int32_array **v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v31; // x0
  __int64 v32; // x0

  if ( (byte_4351FB9 & 1) == 0 )
  {
    sub_B70694(&Method_System_Array_Empty_QuestAfterAction_Command___);
    sub_B70694(&QuestAfterAction_Command___TypeInfo);
    sub_B70694(&QuestAfterAction_Command_TypeInfo);
    byte_4351FB9 = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v5 = (_QWORD **)Method_System_Array_Empty_QuestAfterAction_Command___;
    v6 = **((_QWORD **)Method_System_Array_Empty_QuestAfterAction_Command___ + 6);
    v7 = *(_WORD *)(v6 + 306);
    if ( (v7 & 1) == 0 )
    {
      sub_B08394(**((_QWORD **)Method_System_Array_Empty_QuestAfterAction_Command___ + 6));
      v7 = *(_WORD *)(v6 + 306);
    }
    if ( (v7 & 0x400) != 0 )
    {
      v8 = *v5[6];
      if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
        sub_B08394(*v5[6]);
      if ( !*(_DWORD *)(v8 + 224) )
      {
        v9 = *v5[6];
        if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
          sub_B08394(*v5[6]);
        j_il2cpp_runtime_class_init_0(v9);
      }
    }
    v10 = *v5[6];
    if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
      sub_B08394(*v5[6]);
    return **(QuestAfterAction_Command_array ***)(v10 + 184);
  }
  else
  {
    if ( !actionVals
      || (IsNullOrEmpty = sub_B706AC(
                            QuestAfterAction_Command___TypeInfo,
                            (unsigned int)((signed int)actionVals->max_length / 2))) == 0 )
    {
LABEL_28:
      sub_B7076C(IsNullOrEmpty, v4);
    }
    v11 = (QuestAfterAction_Command_array *)IsNullOrEmpty;
    if ( *(int *)(IsNullOrEmpty + 24) >= 1 )
    {
      v12 = 0LL;
      v13 = 0LL;
      v14 = IsNullOrEmpty + 32;
      v15 = 1;
      do
      {
        v16 = sub_B70764(QuestAfterAction_Command_TypeInfo);
        QuestAfterAction_Command___ctor((QuestAfterAction_Command_o *)v16, 0LL);
        if ( v15 - 1 >= actionVals->max_length )
          goto LABEL_27;
        IsNullOrEmpty = System_Int32__Parse(actionVals->m_Items[v15 - 1], 0LL);
        if ( !v16 )
          goto LABEL_28;
        *(_DWORD *)(v16 + 16) = IsNullOrEmpty;
        if ( v15 >= actionVals->max_length )
          goto LABEL_27;
        v23 = (System_Int32_array **)actionVals->m_Items[v15];
        *(_QWORD *)(v16 + 24) = v23;
        sub_B70630((BattleServantConfConponent_o *)(v16 + 24), v23, v17, v18, v19, v20, v21, v22);
        IsNullOrEmpty = sub_B70754(v16, v11->obj.klass->_1.element_class);
        if ( !IsNullOrEmpty )
        {
          v32 = sub_B7078C(0LL);
          sub_B70738(v32, 0LL);
        }
        if ( v13 >= v11->max_length )
        {
LABEL_27:
          v31 = sub_B70798(IsNullOrEmpty);
          sub_B70738(v31, 0LL);
        }
        *(_QWORD *)(v14 + 8 * v13) = v16;
        sub_B70630(
          (BattleServantConfConponent_o *)(v14 + v12),
          (System_Int32_array **)v16,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
        ++v13;
        v15 += 2;
        v12 += 8LL;
      }
      while ( (__int64)v13 < (int)v11->max_length );
    }
  }
  return v11;
}


System_String_array *__fastcall QuestAfterAction__GetAfterAction(
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  QuestPhaseDetailAddMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int32_t items; // w23
  System_String_array *v9; // x22
  const MethodInfo *v10; // x1
  bool IsOverwriteCommandNone; // w8
  System_String_array *result; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x20
  System_String_array *v14; // x19

  if ( (byte_4351FD0 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_B70694(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B70694(&Method_System_Linq_Enumerable_Any_string___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_4351FD0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (QuestPhaseDetailAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        Instance,
                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_434DEB6 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434DEB6 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  items = (int32_t)Instance[1].fields.saveNameList->fields._items;
  if ( !byte_434DEB7 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_434DEB7 = 1;
  }
  if ( (BYTE3(Instance[2].fields.lookup) & 4) != 0 && !Instance[1].fields.nowLoadCount )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_38;
  v9 = QuestPhaseDetailAddMaster__GetAfterAction(
         MasterData_WarQuestSelectionMaster,
         items,
         HIDWORD(Instance[1].fields.saveNameList->fields._items) + 1,
         0LL);
  IsOverwriteCommandNone = QuestAfterAction__IsOverwriteCommandNone(v9, v10);
  result = 0LL;
  if ( IsOverwriteCommandNone )
    return result;
  result = v9;
  if ( v9 )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_38;
  result = QuestPhaseDetailMaster__GetAfterAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         Instance,
                                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_434DEB6 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434DEB6 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v13 )
LABEL_38:
    sub_B7076C(Instance, v6);
  result = (System_String_array *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v13,
                                    (int32_t)Instance[1].fields.saveNameList->fields._items,
                                    (const MethodInfo_21C0440 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( result )
  {
    v14 = result;
    if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result->m_Items[8],
           (const MethodInfo_1CA8B10 *)Method_System_Linq_Enumerable_Any_string___) )
    {
      return (System_String_array *)v14->m_Items[8];
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
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  QuestPhaseDetailAddMaster_o *MasterData_WarQuestSelectionMaster; // x22
  int32_t items; // w23
  System_String_array *v9; // x22
  const MethodInfo *v10; // x1
  bool IsOverwriteCommandNone; // w8
  System_String_array *result; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v13; // x20
  System_String_array *v14; // x19

  if ( (byte_4351FCF & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_B70694(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B70694(&Method_System_Linq_Enumerable_Any_string___);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_4351FCF = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (QuestPhaseDetailAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        Instance,
                                                                        (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_434DEB6 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434DEB6 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  items = (int32_t)Instance[1].fields.saveNameList->fields._items;
  if ( !byte_434DEB7 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_434DEB7 = 1;
  }
  if ( (BYTE3(Instance[2].fields.lookup) & 4) != 0 && !Instance[1].fields.nowLoadCount )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_38;
  v9 = QuestPhaseDetailAddMaster__GetBeforeAction(
         MasterData_WarQuestSelectionMaster,
         items,
         HIDWORD(Instance[1].fields.saveNameList->fields._items) + 1,
         0LL);
  IsOverwriteCommandNone = QuestAfterAction__IsOverwriteCommandNone(v9, v10);
  result = 0LL;
  if ( IsOverwriteCommandNone )
    return result;
  result = v9;
  if ( v9 )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_38;
  result = QuestPhaseDetailMaster__GetBeforeAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  v13 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         Instance,
                                                         (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_434DEB6 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434DEB6 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v13 )
LABEL_38:
    sub_B7076C(Instance, v6);
  result = (System_String_array *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v13,
                                    (int32_t)Instance[1].fields.saveNameList->fields._items,
                                    (const MethodInfo_21C0440 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( result )
  {
    v14 = result;
    if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result->m_Items[7],
           (const MethodInfo_1CA8B10 *)Method_System_Linq_Enumerable_Any_string___) )
    {
      return (System_String_array *)v14->m_Items[7];
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
      return dword_32EB580[commandId - 100];
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
        const MethodInfo_1D5B184 *method)
{
  QuestAfterAction_o *v9; // x23
  UnityEngine_Object_o *MapGameObject; // x20

  v9 = this;
  if ( (byte_4354C48 & 1) == 0 )
  {
    this = (QuestAfterAction_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4354C48 = 1;
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
    sub_B7076C(this, *(_QWORD *)&comType);
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
  UnityEngine_Object_o *v9; // x23
  UnityEngine_Transform_o *transform; // x23
  const MethodInfo *v11; // x3

  v8 = this;
  if ( (byte_4351FCB & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    this = (QuestAfterAction_o *)sub_B70694(&SrcSpotBasePrefab_TypeInfo);
    byte_4351FCB = 1;
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
        sub_B7076C(this, *(_QWORD *)&comType);
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
      v9 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(transform, (System_String_o *)this, 0LL);
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
  v9 = 0LL;
LABEL_31:
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (QuestAfterAction_o *)UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = (QuestAfterAction_o *)QuestAfterAction__IsMapChangeable(this, *(const MethodInfo **)&comType);
    if ( !state )
      goto LABEL_42;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      state->fields.IsAnimDoing = 0;
      QuestAfterAction__RequestMapChange(v8, comType, id, v11);
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
    if ( !v9 )
      goto LABEL_42;
    return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL);
  }
}


System_Int32_array *__fastcall QuestAfterAction__GetMapGimmickId(
        QuestAfterAction_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v4; // x20
  void *Instance; // x0
  __int64 v6; // x1
  int v7; // w8
  _DWORD *v8; // x21
  unsigned int v9; // w23
  char *v10; // x8
  __int64 v11; // x22
  __int64 v13; // x0

  if ( (byte_4351FBA & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_MapGimmickMaster___);
    sub_B70694(&Method_DataMasterBase_getEntitys_MapGimmickEntity___);
    sub_B70694(&Method_System_Collections_Generic_List_int__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351FBA = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
               (DataMasterBase_o *)Instance,
               (const MethodInfo_1CA3E74 *)Method_DataMasterBase_getEntitys_MapGimmickEntity___);
  if ( !Instance )
    goto LABEL_16;
  v7 = *((_DWORD *)Instance + 6);
  v8 = Instance;
  if ( v7 >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= v7 )
      {
        v13 = sub_B70798(Instance);
        sub_B70738(v13, 0LL);
      }
      v10 = (char *)&v8[2 * v9];
      v11 = *((_QWORD *)v10 + 4);
      if ( !v11 )
        break;
      Instance = (void *)MapGimmickEntity__GetRaidDispSpotIdFromScript(*((MapGimmickEntity_o **)v10 + 4), 0LL);
      if ( (_DWORD)Instance == spotId )
      {
        if ( !v4 )
          break;
        System_Collections_Generic_List_int___Add(
          v4,
          *(_DWORD *)(v11 + 16),
          (const MethodInfo_30B61D8 *)Method_System_Collections_Generic_List_int__Add__);
      }
      v7 = v8[6];
      if ( (int)++v9 >= v7 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B7076C(Instance, v6);
  }
LABEL_14:
  if ( !v4 )
    goto LABEL_16;
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall QuestAfterAction__GetState(QuestAfterAction_o *this, const MethodInfo *method)
{
  QuestAfterAction_o *v2; // x19
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  v2 = this;
  if ( (byte_4351FC9 & 1) == 0 )
  {
    this = (QuestAfterAction_o *)sub_B70694(&Method_CStateManager_QuestAfterAction__getState__);
    byte_4351FC9 = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_B7076C(this, method);
  return fsm->fields.m_state;
}


void __fastcall QuestAfterAction__Init(QuestAfterAction_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct CStateManager_QuestAfterAction__o **p_fsm; // x20
  CStateManager_QAASpotStateController_IMapSpot__o *v5; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  struct CStateManager_QuestAfterAction__o *fsm; // x21
  QuestAfterAction_StateNone_o *v13; // x22
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *commandTypeIds; // x0
  __int64 v15; // x1
  CStateManager_QAASpotStateController_IMapSpot__o *v16; // x21
  QuestAfterAction_StateMain_o *v17; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v18; // x21
  QuestAfterAction_StateAdditional_o *v19; // x22
  CStateManager_QAASpotStateController_IMapSpot__o *v20; // x20
  QuestAfterAction_StateInstant_o *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  unsigned int v28; // w25
  int32_t v29; // w20
  System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *v30; // x21
  System_Collections_Generic_List_int__o *v31; // x22
  struct UnityEngine_BoxCollider_o *Component_srcLineSprite; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct SrcSpotBasePrefab_o **p_lastDispSpot; // x19
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  System_Collections_Generic_List_int__o *v46; // x20
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7

  if ( (byte_4351FB6 & 1) == 0 )
  {
    sub_B70694(&Method_CStateManager_QuestAfterAction___ctor__);
    sub_B70694(&Method_CStateManager_QuestAfterAction__add__);
    sub_B70694(&CStateManager_QuestAfterAction__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_B70694(&Method_System_Collections_Generic_List_int__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B70694(&System_Collections_Generic_List_int__TypeInfo);
    sub_B70694(&QuestAfterAction_StateAdditional_TypeInfo);
    sub_B70694(&QuestAfterAction_StateInstant_TypeInfo);
    sub_B70694(&QuestAfterAction_StateMain_TypeInfo);
    sub_B70694(&QuestAfterAction_StateNone_TypeInfo);
    byte_4351FB6 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v5 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B70764(CStateManager_QuestAfterAction__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v5,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2C7FFDC *)Method_CStateManager_QuestAfterAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestAfterAction__o *)v5;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.fsm, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
    fsm = this->fields.fsm;
    v13 = (QuestAfterAction_StateNone_o *)sub_B70764(QuestAfterAction_StateNone_TypeInfo);
    QuestAfterAction_StateNone___ctor(v13, 0LL);
    if ( !fsm )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      0,
      (IState_T__o *)v13,
      (const MethodInfo_2C800A8 *)Method_CStateManager_QuestAfterAction__add__);
    v16 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v17 = (QuestAfterAction_StateMain_o *)sub_B70764(QuestAfterAction_StateMain_TypeInfo);
    QuestAfterAction_StateMain___ctor(v17, 0LL);
    if ( !v16 )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v16,
      1,
      (IState_T__o *)v17,
      (const MethodInfo_2C800A8 *)Method_CStateManager_QuestAfterAction__add__);
    v18 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v19 = (QuestAfterAction_StateAdditional_o *)sub_B70764(QuestAfterAction_StateAdditional_TypeInfo);
    QuestAfterAction_StateAdditional___ctor(v19, 0LL);
    if ( !v18 )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v18,
      2,
      (IState_T__o *)v19,
      (const MethodInfo_2C800A8 *)Method_CStateManager_QuestAfterAction__add__);
    v20 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v21 = (QuestAfterAction_StateInstant_o *)sub_B70764(QuestAfterAction_StateInstant_TypeInfo);
    QuestAfterAction_StateInstant___ctor(v21, 0LL);
    if ( !v20 )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v20,
      3,
      (IState_T__o *)v21,
      (const MethodInfo_2C800A8 *)Method_CStateManager_QuestAfterAction__add__);
  }
  QuestAfterAction__SetState(this, 0, v2);
  this->fields.commandBuf = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.commandBuf, 0LL, v22, v23, v24, v25, v26, v27);
  this->fields.commandIdx = 0;
  v28 = -1;
  do
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.commandTypeIds;
    if ( !commandTypeIds )
      goto LABEL_21;
    v29 = v28 + 1;
    commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
                                                                                        commandTypeIds,
                                                                                        v28 + 1,
                                                                                        (const MethodInfo_2F72298 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    v30 = this->fields.commandTypeIds;
    if ( ((unsigned __int8)commandTypeIds & 1) != 0 )
    {
      if ( !v30 )
        goto LABEL_21;
      commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
                                                                                          (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.commandTypeIds,
                                                                                          v29,
                                                                                          (const MethodInfo_2F71F60 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( !commandTypeIds )
        goto LABEL_21;
      System_Collections_Generic_List_int___Clear(
        (System_Collections_Generic_List_int__o *)commandTypeIds,
        (const MethodInfo_30B65E4 *)Method_System_Collections_Generic_List_int__Clear__);
    }
    else
    {
      v31 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v31,
        (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v30 )
        goto LABEL_21;
      System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____set_Item(
        v30,
        v29,
        v31,
        (const MethodInfo_2F71FFC *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
    }
    ++v28;
  }
  while ( v28 < 3 );
  commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)UnityEngine_Component__get_gameObject(
                                                                                      (UnityEngine_Component_o *)this,
                                                                                      0LL);
  if ( !commandTypeIds
    || (Component_srcLineSprite = (struct UnityEngine_BoxCollider_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                        (UnityEngine_GameObject_o *)commandTypeIds,
                                                                        (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.screenCollider = Component_srcLineSprite,
        sub_B70630(
          (BattleServantConfConponent_o *)&this->fields.screenCollider,
          (System_Int32_array **)Component_srcLineSprite,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38),
        (commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.screenCollider) == 0LL) )
  {
LABEL_21:
    sub_B7076C(commandTypeIds, v15);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)commandTypeIds, 0, 0LL);
  this->fields.lastDispSpot = 0LL;
  p_lastDispSpot = &this->fields.lastDispSpot;
  sub_B70630((BattleServantConfConponent_o *)p_lastDispSpot, 0LL, v40, v41, v42, v43, v44, v45);
  v46 = (System_Collections_Generic_List_int__o *)sub_B70764(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v46,
    (const MethodInfo_30B547C *)Method_System_Collections_Generic_List_int___ctor__);
  *(p_lastDispSpot - 18) = (struct SrcSpotBasePrefab_o *)v46;
  sub_B70630(
    (BattleServantConfConponent_o *)(p_lastDispSpot - 18),
    (System_Int32_array **)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
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
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *commandTypeIds; // x0

  if ( (byte_4351FBD & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    sub_B70694(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4351FBD = 1;
  }
  commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.commandTypeIds;
  if ( !commandTypeIds )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
         commandTypeIds,
         commandType,
         (const MethodInfo_2F72298 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__) )
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.commandTypeIds;
    if ( commandTypeIds )
    {
      commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
                                                                                          commandTypeIds,
                                                                                          commandType,
                                                                                          (const MethodInfo_2F71F60 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( commandTypeIds )
        return System_Collections_Generic_List_int___Contains(
                 (System_Collections_Generic_List_int__o *)commandTypeIds,
                 commandTypeId,
                 (const MethodInfo_30B662C *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_9:
    sub_B7076C(commandTypeIds, *(_QWORD *)&commandType);
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
        v11 = sub_B70798(this);
        sub_B70738(v11, 0LL);
      }
      v8 = commandBuf->m_Items[v6];
      if ( !v8 )
LABEL_11:
        sub_B7076C(this, *(_QWORD *)&spotId);
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
  ScrTerminalMap_o *v2; // x0
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_4351FCE & 1) == 0 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_4351FCE = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
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
    sub_B7076C(v2, method);
  return ScrTerminalMap__IsMapChangeable(v2, 0LL);
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


bool __fastcall QuestAfterAction__IsOverwriteCommandNone(System_String_array *actionCommand, const MethodInfo *method)
{
  __int64 v2; // x8
  __int64 v3; // x0

  if ( actionCommand )
  {
    v2 = *(_QWORD *)&actionCommand->max_length;
    if ( v2 )
    {
      if ( !(_DWORD)v2 )
      {
        v3 = sub_B70798(actionCommand);
        sub_B70738(v3, 0LL);
      }
      LOBYTE(actionCommand) = System_Int32__Parse(actionCommand->m_Items[0], 0LL) == 0;
    }
    else
    {
      LOBYTE(actionCommand) = 0;
    }
  }
  return (char)actionCommand;
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
  TerminalTransitionInfo_o *TerminalTransitionInfoData; // x0
  __int64 v3; // x1
  TerminalTransitionInfo_o *v4; // x19
  char *Master_WarQuestSelectionMaster; // x0
  TerminalSceneComponent_o *v6; // x20
  DataManager_o *v7; // x22
  EventMissionActionAddEntity_o *EntityFromIdProgressTypeAndActionType; // x0
  EventMissionActionAddEntity_o *v9; // x23
  EventMissionActionInfo_o *v10; // x21
  WarEntity_o *Entity; // x0
  WarEntity_o *v12; // x21
  EventEntity_o *v13; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *current; // x21
  TerminalPramsManager_c *v17; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  struct TerminalTransitionInfo_o *TransitionInfo_k__BackingField; // x0
  System_Int32_array **klass; // x1
  __int64 v27; // x0
  __int64 v28; // x1
  struct TerminalTransitionInfo_o *v29; // x8
  EventMissionActionEntity_o *v30; // x0
  EventMissionActionEntity_o *v31; // x23
  WarEntity_o *v32; // x0
  WarEntity_o *v33; // x23
  TerminalPramsManager_c *v34; // x0
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  System_Int32_array **vals; // x1
  struct TerminalTransitionInfo_o *v42; // x8
  System_Collections_Generic_List_Enumerator_T__o v43; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v44; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4351FC1 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_B70694(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_B70694(&Method_DataManager_GetMaster_EventMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ShopActionMaster___);
    sub_B70694(&Method_DataManager_GetMaster_ShopMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__get_Current__);
    sub_B70694(&EventMissionActionInfo_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_4351FC1 = 1;
  }
  memset(&v44, 0, sizeof(v44));
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  TerminalTransitionInfoData = TerminalPramsManager__Load_TerminalTransitionInfoData(0LL);
  if ( !TerminalTransitionInfoData )
    return;
  v4 = TerminalTransitionInfoData;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
  }
  Master_WarQuestSelectionMaster = (char *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    Master_WarQuestSelectionMaster = (char *)TerminalSceneComponent_TypeInfo;
  }
  v6 = (TerminalSceneComponent_o *)**((_QWORD **)Master_WarQuestSelectionMaster + 23);
  if ( !v6 )
    goto LABEL_77;
  if ( v6->fields._TransitionInfo_k__BackingField )
    return;
  if ( v4->fields.missionId < 1 )
  {
    if ( v4->fields.shopId >= 1 )
    {
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (char *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_77;
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                 v4->fields.shopId,
                 (const MethodInfo_21C0440 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( Entity )
      {
        v12 = Entity;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (char *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_EventMaster___);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_77;
        v13 = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                 (int32_t)v12->fields.age,
                                 (const MethodInfo_21C0440 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !v13 || !EventEntity__IsEventPeriod(v13, 0LL, 0LL) )
          goto LABEL_76;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (char *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_ShopActionMaster___);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_77;
        Master_WarQuestSelectionMaster = (char *)ShopActionMaster__GetEntityList(
                                                   (ShopActionMaster_o *)Master_WarQuestSelectionMaster,
                                                   v12->fields.id,
                                                   0LL);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_77;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          &v43,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)Master_WarQuestSelectionMaster,
          (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
        v44 = v43;
        while ( 1 )
        {
          v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v44,
                  (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__);
          if ( !v14 )
            break;
          current = v44.fields.current;
          if ( !v44.fields.current )
            sub_B7076C(v14, v15);
          if ( LODWORD(v44.fields.current[1].monitor) == 4 )
          {
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            }
            if ( !byte_434DEF9 )
            {
              sub_B70694(&TerminalPramsManager_TypeInfo);
              byte_434DEF9 = 1;
            }
            v17 = TerminalPramsManager_TypeInfo;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v17 = TerminalPramsManager_TypeInfo;
            }
            v17->static_fields->meSceneStatus = 2;
            TerminalSceneComponent__CreateTransitionInfo(v6, v4, 0LL);
            TransitionInfo_k__BackingField = v6->fields._TransitionInfo_k__BackingField;
            if ( !TransitionInfo_k__BackingField )
              sub_B7076C(0LL, v18);
            klass = (System_Int32_array **)current[2].klass;
            TransitionInfo_k__BackingField->fields.afterActionVals = (struct System_String_array *)klass;
            sub_B70630(
              (BattleServantConfConponent_o *)&TransitionInfo_k__BackingField->fields.afterActionVals,
              klass,
              v19,
              v20,
              v21,
              v22,
              v23,
              v24);
            v29 = v6->fields._TransitionInfo_k__BackingField;
            if ( !v29 )
              sub_B7076C(v27, v28);
            v29->fields.optionId = (int32_t)current[2].monitor;
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v44,
          (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__);
      }
    }
  }
  else
  {
    Master_WarQuestSelectionMaster = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_77;
    v7 = (DataManager_o *)Master_WarQuestSelectionMaster;
    Master_WarQuestSelectionMaster = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Master_WarQuestSelectionMaster,
                                               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_77;
    EntityFromIdProgressTypeAndActionType = EventMissionActionAddMaster__GetEntityFromIdProgressTypeAndActionType(
                                              (EventMissionActionAddMaster_o *)Master_WarQuestSelectionMaster,
                                              v4->fields.missionId,
                                              5,
                                              4,
                                              0LL);
    if ( EntityFromIdProgressTypeAndActionType )
    {
      v9 = EntityFromIdProgressTypeAndActionType;
      v10 = (EventMissionActionInfo_o *)sub_B70764(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_27396076(v10, v9, 0LL);
    }
    else
    {
      Master_WarQuestSelectionMaster = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 v7,
                                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_77;
      v30 = EventMissionActionMaster__getEntityFromIdProgressTypeAndActionType(
              (EventMissionActionMaster_o *)Master_WarQuestSelectionMaster,
              v4->fields.missionId,
              5,
              4,
              0LL);
      if ( !v30 )
        return;
      v31 = v30;
      v10 = (EventMissionActionInfo_o *)sub_B70764(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v10, v31, 0LL);
    }
    Master_WarQuestSelectionMaster = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               v7,
                                               (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_77;
    v32 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
            (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
            v4->fields.missionId,
            (const MethodInfo_21C0440 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( v32 )
    {
      v33 = v32;
      Master_WarQuestSelectionMaster = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 v7,
                                                 (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_77;
      Master_WarQuestSelectionMaster = (char *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                 (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                 HIDWORD(v33->fields.age),
                                                 (const MethodInfo_21C0440 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_77;
      if ( EventEntity__IsEventPeriod((EventEntity_o *)Master_WarQuestSelectionMaster, 0LL, 0LL) )
      {
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_434DEF9 )
        {
          sub_B70694(&TerminalPramsManager_TypeInfo);
          byte_434DEF9 = 1;
        }
        v34 = TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v34 = TerminalPramsManager_TypeInfo;
        }
        v34->static_fields->meSceneStatus = 2;
        TerminalSceneComponent__CreateTransitionInfo(v6, v4, 0LL);
        if ( v10 )
        {
          Master_WarQuestSelectionMaster = (char *)v6->fields._TransitionInfo_k__BackingField;
          if ( Master_WarQuestSelectionMaster )
          {
            vals = (System_Int32_array **)v10->fields.vals;
            *((_QWORD *)Master_WarQuestSelectionMaster + 4) = vals;
            sub_B70630(
              (BattleServantConfConponent_o *)(Master_WarQuestSelectionMaster + 32),
              vals,
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
LABEL_77:
        sub_B7076C(Master_WarQuestSelectionMaster, v3);
      }
LABEL_76:
      TerminalSceneComponent__ClearTransitionInfo(v6, 0LL);
    }
  }
}


void __fastcall QuestAfterAction__LoadVoice(
        QuestAfterAction_o *this,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *svtVoices; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x21
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v7; // x22
  const MethodInfo *v8; // x3

  if ( (byte_4351FBE & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    sub_B70694(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    sub_B70694(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    byte_4351FBE = 1;
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
      sub_B7076C(0LL, endAct);
    Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
               svtVoices,
               (const MethodInfo_2FC630C *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    v7 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B70764(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)Values,
      (const MethodInfo_3024BBC *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    QuestAfterAction__LoadVoice_25550952(
      this,
      (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)v7,
      endAct,
      v8);
  }
}


void __fastcall QuestAfterAction__LoadVoice_25550952(
        QuestAfterAction_o *this,
        System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *svtVInfos,
        System_Action_o *endAct,
        const MethodInfo *method)
{
  System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *v7; // x19
  QuestAfterAction_VoiceInfo_o *v8; // x8
  CommonUI_o *Instance; // x0
  __int64 v10; // x27
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o **v18; // x28
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Action_o **v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *v32; // x19
  QuestAfterAction_VoiceInfo_o *v33; // x8
  System_String_o *VoiceAssetName_29794896; // x19
  SoundManager_o *v35; // x20
  System_Action_o *v36; // x21

  while ( 1 )
  {
    if ( (byte_4351FBF & 1) == 0 )
    {
      sub_B70694(&System_Action_TypeInfo);
      sub_B70694(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___);
      sub_B70694(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
      sub_B70694(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
      sub_B70694(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sub_B70694(&Method_QuestAfterAction___c__DisplayClass67_0__LoadVoice_b__0__);
      sub_B70694(&QuestAfterAction___c__DisplayClass67_0_TypeInfo);
      byte_4351FBF = 1;
    }
    v10 = sub_B70764(QuestAfterAction___c__DisplayClass67_0_TypeInfo);
    QuestAfterAction___c__DisplayClass67_0___ctor((QuestAfterAction___c__DisplayClass67_0_o *)v10, 0LL);
    if ( !v10 )
      goto LABEL_22;
    *(_QWORD *)(v10 + 16) = svtVInfos;
    v18 = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o **)(v10 + 16);
    sub_B70630(
      (BattleServantConfConponent_o *)(v10 + 16),
      (System_Int32_array **)svtVInfos,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    *(_QWORD *)(v10 + 24) = this;
    sub_B70630((BattleServantConfConponent_o *)(v10 + 24), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
    *(_QWORD *)(v10 + 32) = endAct;
    v25 = (System_Action_o **)(v10 + 32);
    sub_B70630((BattleServantConfConponent_o *)(v10 + 32), (System_Int32_array **)endAct, v26, v27, v28, v29, v30, v31);
    Instance = (CommonUI_o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                               *(System_Collections_Generic_IEnumerable_TSource__o **)(v10 + 16),
                               (const MethodInfo_1CA8B10 *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, 0, 0LL);
        ActionExtensions__Call(*v25, 0LL);
        return;
      }
LABEL_22:
      sub_B7076C(Instance, v11);
    }
    v7 = *v18;
    if ( !*v18 )
      goto LABEL_22;
    if ( !v7->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
    v8 = v7->fields._items->m_Items[0];
    if ( !v8 )
      goto LABEL_22;
    if ( v8->fields.svtId )
      break;
    Instance = (CommonUI_o *)*v18;
    if ( !*v18 )
      goto LABEL_22;
    System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)Instance,
      0,
      (const MethodInfo_3027378 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    svtVInfos = *v18;
    endAct = *v25;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v32 = *v18;
  if ( !*v18 )
    goto LABEL_22;
  if ( !v32->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v33 = v32->fields._items->m_Items[0];
  if ( !v33 )
    goto LABEL_22;
  VoiceAssetName_29794896 = ServantVoiceEntity__getVoiceAssetName_29794896(v33->fields.svtId, 0LL);
  v35 = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v36 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v36, (Il2CppObject *)v10, Method_QuestAfterAction___c__DisplayClass67_0__LoadVoice_b__0__, 0LL);
  if ( !v35 )
    goto LABEL_22;
  SoundManager__LoadAudioAssetStorage(v35, VoiceAssetName_29794896, v36, 1, 0LL);
}


System_String_o *__fastcall QuestAfterAction__MapObjName(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_4351FCD & 1) == 0 )
  {
    sub_B70694(&SrcSpotBasePrefab_TypeInfo);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4351FCD = 1;
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

  if ( (byte_4351FC7 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__Clear__);
    byte_4351FC7 = 1;
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
    sub_B7076C(screenCollider, v4);
  }
  System_Collections_Generic_List_int___Clear(
    (System_Collections_Generic_List_int__o *)screenCollider,
    (const MethodInfo_30B65E4 *)Method_System_Collections_Generic_List_int__Clear__);
  QuestAfterAction__Init(this, v6);
  this->fields.isKeepingMainStateButFinished = 0;
}


void __fastcall QuestAfterAction__Play(QuestAfterAction_o *this, System_Action_o *endAct, const MethodInfo *method)
{
  __int64 v5; // x20
  MissionNotifyManager_o *v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Action_o *v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  const MethodInfo *v21; // x2

  if ( (byte_4351FC3 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B70694(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B70694(&Method_QuestAfterAction___c__DisplayClass71_0__Play_b__0__);
    sub_B70694(&QuestAfterAction___c__DisplayClass71_0_TypeInfo);
    byte_4351FC3 = 1;
  }
  v5 = sub_B70764(QuestAfterAction___c__DisplayClass71_0_TypeInfo);
  QuestAfterAction___c__DisplayClass71_0___ctor((QuestAfterAction___c__DisplayClass71_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_11;
  *(_QWORD *)(v5 + 16) = endAct;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)endAct, v8, v9, v10, v11, v12, v13);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v6 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v6 )
LABEL_11:
    sub_B7076C(v6, v7);
  MissionNotifyManager__StartPause(v6, 0LL);
  v14 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)v5, Method_QuestAfterAction___c__DisplayClass71_0__Play_b__0__, 0LL);
  this->fields.endAct = v14;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.endAct,
    (System_Int32_array **)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  if ( this->fields.commandBuf )
    QuestAfterAction__SetState(this, 1, v21);
  else
    ActionExtensions__Call(this->fields.endAct, 0LL);
}


void __fastcall QuestAfterAction__PlaySpecifiedAction(
        QuestAfterAction_o *this,
        System_String_array *actionVals,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  MissionNotifyManager_o *v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x1
  struct QuestAfterAction_Command_array *CommandBuf; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Action_o *v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Action_o *v37; // x21
  const MethodInfo *v38; // x2
  System_Collections_IEnumerator_o *v39; // x1

  if ( (byte_4351FC4 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B70694(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B70694(&Method_QuestAfterAction___c__DisplayClass72_0__PlaySpecifiedAction_b__0__);
    sub_B70694(&Method_QuestAfterAction___c__DisplayClass72_0__PlaySpecifiedAction_b__1__);
    sub_B70694(&QuestAfterAction___c__DisplayClass72_0_TypeInfo);
    byte_4351FC4 = 1;
  }
  v7 = sub_B70764(QuestAfterAction___c__DisplayClass72_0_TypeInfo);
  QuestAfterAction___c__DisplayClass72_0___ctor((QuestAfterAction___c__DisplayClass72_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_11;
  *(_QWORD *)(v7 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = finishCallback;
  sub_B70630(
    (BattleServantConfConponent_o *)(v7 + 24),
    (System_Int32_array **)finishCallback,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 24), 0LL);
    return;
  }
  CommandBuf = QuestAfterAction__GenerateCommandBuf(actionVals, v22);
  this->fields.temporaryCommandBuf = CommandBuf;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.temporaryCommandBuf,
    (System_Int32_array **)CommandBuf,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v8 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v8 )
LABEL_11:
    sub_B7076C(v8, v9);
  MissionNotifyManager__StartPause(v8, 0LL);
  v30 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v7,
    Method_QuestAfterAction___c__DisplayClass72_0__PlaySpecifiedAction_b__0__,
    0LL);
  this->fields.endAct = v30;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.endAct,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v7,
    Method_QuestAfterAction___c__DisplayClass72_0__PlaySpecifiedAction_b__1__,
    0LL);
  v39 = QuestAfterAction__WaitWhileMainStateFinished(this, v37, v38);
  UnityEngine_MonoBehaviour__StartCoroutine_36062060((UnityEngine_MonoBehaviour_o *)this, v39, 0LL);
}


void __fastcall QuestAfterAction__PlaySpecifiedActionInstantly(
        QuestAfterAction_o *this,
        QuestAfterAction_Command_array *commandArray,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Action_o *v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_4351FC6 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__75_0__);
    byte_4351FC6 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)commandArray, 0LL) )
  {
    this->fields.temporaryCommandBuf = commandArray;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.temporaryCommandBuf,
      (System_Int32_array **)commandArray,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    v11 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(
      v11,
      (Il2CppObject *)this,
      Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__75_0__,
      0LL);
    this->fields.endAct = v11;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.endAct,
      (System_Int32_array **)v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    QuestAfterAction__SetState(this, 3, v18);
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
  TerminalPramsManager_c *v8; // x0
  ScrTerminalMap_o *v9; // x0
  UnityEngine_GameObject_c *klass; // x8

  if ( (byte_4351FCC & 1) == 0 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_4351FCC = 1;
  }
  this->fields.ActionMapTargetType = cType;
  this->fields.ActionMapTargetId = cTarget;
  QuestAfterAction__SetState(this, 0, *(const MethodInfo **)&cTarget);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_434DEAC )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434DEAC = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
  }
  v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v9 = (ScrTerminalMap_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v9->fields.pfbLineP->klass;
  if ( !klass || (v9 = *(ScrTerminalMap_o **)&klass->_2.static_fields_size) == 0LL )
    sub_B7076C(v9, v7);
  ScrTerminalMap__RequestMapChange(v9, 0, -1, -1, 0LL);
}


void __fastcall QuestAfterAction__SetActionMap(
        QuestAfterAction_o *this,
        QuestAfterAction_Command_o *com,
        const MethodInfo *method)
{
  QuestAfterAction_Command_o *v3; // x20
  QuestAfterAction_o *v4; // x19
  int id; // w8
  int v6; // w8
  unsigned int v7; // w8
  unsigned int v8; // w8
  System_String_o *v9; // x20
  Il2CppClass *v10; // x0
  int invalidMapGimmickIdList; // w8
  System_String_o *BlankEarthQuestAfterAction_k__BackingField; // x0
  int32_t SpotId; // w0
  System_String_o *param; // x20
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  System_String_o *v16; // x8
  DataMasterBase_WarMaster__WarEntity__int__o *v17; // x20
  __int64 v18; // x0

  v3 = com;
  v4 = this;
  if ( (byte_4351FBC & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B70694(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    this = (QuestAfterAction_o *)sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351FBC = 1;
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
          this = (QuestAfterAction_o *)sub_B706AC(char___TypeInfo, 1LL);
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
          sub_B7076C(this, com);
        }
        if ( id == 550 )
        {
          v6 = 3;
LABEL_23:
          v4->fields.ActionMapTargetType = v6;
          v9 = v3->fields.param;
          v10 = char___TypeInfo;
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
          this = (QuestAfterAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestMaster___);
            v16 = v3->fields.param;
            v17 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
            this = (QuestAfterAction_o *)System_Int32__Parse(v16, 0LL);
            if ( v17 )
            {
              this = (QuestAfterAction_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             v17,
                                             (int32_t)this,
                                             (const MethodInfo_21C0440 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
      v6 = 2;
      goto LABEL_23;
    }
    if ( id <= 113 )
    {
      v8 = id - 100;
      if ( v8 > 0xD || ((1 << v8) & 0x3C1F) == 0 )
        goto LABEL_45;
    }
    else
    {
      if ( (unsigned int)(id - 200) < 6 )
        goto LABEL_22;
      v7 = id - 300;
      if ( v7 > 7 )
        goto LABEL_45;
      if ( ((1 << v7) & 0x21) == 0 )
      {
        if ( ((1 << v7) & 0x42) == 0 )
        {
          if ( ((1 << v7) & 0x84) == 0 )
            goto LABEL_45;
          goto LABEL_18;
        }
LABEL_22:
        v6 = 1;
        goto LABEL_23;
      }
    }
    v4->fields.ActionMapTargetType = 0;
    v9 = v3->fields.param;
    v10 = char___TypeInfo;
LABEL_24:
    this = (QuestAfterAction_o *)sub_B706AC(v10, 1LL);
    if ( this )
    {
      com = (QuestAfterAction_Command_o *)this;
      if ( !LODWORD(this->fields.invalidMapGimmickIdList) )
        goto LABEL_47;
      LOWORD(this->fields._TitleInfoCtrlCallback_k__BackingField) = 44;
      if ( v9 )
      {
        this = (QuestAfterAction_o *)System_String__Split(v9, (System_Char_array *)this, 0LL);
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
          v18 = sub_B70798(this);
          sub_B70738(v18, 0LL);
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

  if ( (byte_4351FCA & 1) == 0 )
  {
    sub_B70694(&Method_CStateManager_QuestAfterAction__setState__);
    byte_4351FCA = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B7076C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
    state,
    (const MethodInfo_2C8014C *)Method_CStateManager_QuestAfterAction__setState__);
}


void __fastcall QuestAfterAction__SkipToNextAction(QuestAfterAction_o *this, const MethodInfo *method)
{
  this->fields.isSkippedNext = 1;
}


void __fastcall QuestAfterAction__Update(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x0

  if ( (byte_4351FC2 & 1) == 0 )
  {
    sub_B70694(&Method_CStateManager_QuestAfterAction__update__);
    byte_4351FC2 = 1;
  }
  fsm = this->fields.fsm;
  if ( fsm )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      (const MethodInfo_2C80124 *)Method_CStateManager_QuestAfterAction__update__);
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

  if ( (byte_4351FC8 & 1) == 0 )
  {
    sub_B70694(&QuestAfterAction__WaitWhileMainStateFinished_d__78_TypeInfo);
    byte_4351FC8 = 1;
  }
  v5 = sub_B70764(QuestAfterAction__WaitWhileMainStateFinished_d__78_TypeInfo);
  QuestAfterAction__WaitWhileMainStateFinished_d__78___ctor(
    (QuestAfterAction__WaitWhileMainStateFinished_d__78_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = action;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)action, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
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
  sub_B70630((BattleServantConfConponent_o *)&this->fields.endAct, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.temporaryCommandBuf = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.temporaryCommandBuf, 0LL, v9, v10, v11, v12, v13, v14);
  QuestAfterAction__SetState(this, 0, v15);
}


System_Int32_array *__fastcall QuestAfterAction__getMapGmkOffIdList(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *invalidMapGimmickIdList; // x0

  if ( (byte_4351FBB & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_4351FBB = 1;
  }
  invalidMapGimmickIdList = this->fields.invalidMapGimmickIdList;
  if ( !invalidMapGimmickIdList )
    sub_B7076C(0LL, method);
  return System_Collections_Generic_List_int___ToArray(
           invalidMapGimmickIdList,
           (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *svtVoices; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x21
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_String_o *VoiceAssetName_29794896; // x20
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4351FC0 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    sub_B70694(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    byte_4351FC0 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
    goto LABEL_15;
  Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
             svtVoices,
             (const MethodInfo_2FC630C *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
  v5 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B70764(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_3024BBC *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
  if ( !v5 )
    goto LABEL_15;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v5,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v9,
           (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__);
    if ( !v6 )
      break;
    if ( !v9.fields.current )
      sub_B7076C(v6, v7);
    VoiceAssetName_29794896 = ServantVoiceEntity__getVoiceAssetName_29794896((int32_t)v9.fields.current[1].klass, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__releaseAudioAssetStorage(VoiceAssetName_29794896, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
LABEL_15:
    sub_B7076C(svtVoices, method);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)svtVoices,
    (const MethodInfo_2FC6744 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
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
  System_String_o *param; // x21
  __int64 Instance; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_T__o *v8; // x22
  VoicePlayCondMaster_o *MasterData_WarQuestSelectionMaster; // x20
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v10; // x21
  System_Random_o *v11; // x22
  __int64 size; // x1
  unsigned int v13; // w0
  int32_t v14; // w24
  System_String_o *v15; // x25
  int v16; // w8
  __int64 v17; // x25
  System_String_o *v18; // x25
  __int64 v19; // x8
  __int64 v20; // x8
  int32_t v21; // w1
  System_String_o *v22; // x21
  int v23; // w8
  __int64 v24; // x21
  __int64 v26; // x0
  int32_t result; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4351AD5 & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_B70694(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_B70694(&Method_System_Collections_Generic_List_string___ctor___69174624);
    sub_B70694(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_B70694(&System_Collections_Generic_List_string__TypeInfo);
    sub_B70694(&System_Random_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    sub_B70694(&StringLiteral_16127/*"_"*/);
    byte_4351AD5 = 1;
  }
  result = 0;
  *svtId = 0;
  if ( this->fields.id != 800 )
    return 0LL;
  param = this->fields.param;
  Instance = sub_B706AC(char___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_53;
  v7 = Instance;
  if ( !*(_DWORD *)(Instance + 24) )
    goto LABEL_54;
  *(_WORD *)(Instance + 32) = 44;
  if ( !param )
    goto LABEL_53;
  Instance = (__int64)System_String__Split(param, (System_Char_array *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_53;
  v8 = (System_Collections_Generic_IEnumerable_T__o *)Instance;
  if ( *(int *)(Instance + 24) > 1 )
  {
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
      v10 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B70764(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
        v10,
        v8,
        (const MethodInfo_3024BBC *)Method_System_Collections_Generic_List_string___ctor___69174624);
      result = 0;
      v11 = (System_Random_o *)sub_B70764(System_Random_TypeInfo);
      System_Random___ctor(v11, 0LL);
      if ( v10 )
      {
        if ( v11 )
        {
          size = (unsigned int)v10->fields._size;
          while ( 1 )
          {
            v13 = ((__int64 (__fastcall *)(System_Random_o *, __int64, Il2CppMethodPointer))v11->klass->vtable._7_Next.method)(
                    v11,
                    size,
                    v11->klass->vtable._8_NextDouble.methodPtr);
            result = 0;
            v14 = v13;
            if ( v10->fields._size <= v13 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
            v15 = (System_String_o *)v10->fields._items->m_Items[v13];
            Instance = sub_B706AC(char___TypeInfo, 1LL);
            if ( !Instance )
              break;
            v7 = Instance;
            if ( !*(_DWORD *)(Instance + 24) )
              goto LABEL_54;
            *(_WORD *)(Instance + 32) = 95;
            if ( !v15 )
              break;
            Instance = (__int64)System_String__Split(v15, (System_Char_array *)Instance, 0LL);
            if ( !Instance )
              break;
            v16 = *(_DWORD *)(Instance + 24);
            v17 = Instance;
            if ( v16 == 3 )
            {
              Instance = System_Int32__TryParse(*(System_String_o **)(Instance + 32), &result, 0LL);
              if ( *(_DWORD *)(v17 + 24) < 3u )
                goto LABEL_54;
              Instance = (__int64)System_String__Concat_44760452(
                                    *(System_String_o **)(v17 + 40),
                                    (System_String_o *)StringLiteral_16127/*"_"*/,
                                    *(System_String_o **)(v17 + 48),
                                    0LL);
              if ( !MasterData_WarQuestSelectionMaster )
                break;
              v21 = result;
              v18 = (System_String_o *)Instance;
            }
            else
            {
              if ( v16 != 2 )
                goto LABEL_39;
              result = 0;
              if ( v10->fields._size <= (unsigned int)v14 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
              v18 = (System_String_o *)v10->fields._items->m_Items[v14];
              if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              }
              if ( !byte_434DEA1 )
              {
                sub_B70694(&TerminalSceneComponent_TypeInfo);
                byte_434DEA1 = 1;
              }
              Instance = (__int64)TerminalSceneComponent_TypeInfo;
              if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                Instance = (__int64)TerminalSceneComponent_TypeInfo;
              }
              v19 = **(_QWORD **)(Instance + 184);
              if ( !v19 )
                break;
              v20 = *(_QWORD *)(v19 + 448);
              if ( !v20 )
                break;
              Instance = ServantVoiceEntity__getSvtIdfromVoiceAssetName(*(System_String_o **)(v20 + 40), 0LL);
              if ( !MasterData_WarQuestSelectionMaster )
                break;
              v21 = Instance;
            }
            if ( VoicePlayCondMaster__isVoicePlay(MasterData_WarQuestSelectionMaster, v21, v18, 0LL, -1LL, -1, 0LL) )
            {
              *svtId = result;
              return v18;
            }
LABEL_39:
            System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
              (System_Collections_Generic_List_XWeaponTrail_Element__o *)v10,
              v14,
              (const MethodInfo_3027378 *)Method_System_Collections_Generic_List_string__RemoveAt__);
            size = (unsigned int)v10->fields._size;
            if ( !(_DWORD)size )
            {
              v18 = 0LL;
              *svtId = 0;
              return v18;
            }
          }
        }
      }
    }
LABEL_53:
    sub_B7076C(Instance, v7);
  }
  v22 = this->fields.param;
  Instance = sub_B706AC(char___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_53;
  v7 = Instance;
  if ( !*(_DWORD *)(Instance + 24) )
  {
LABEL_54:
    v26 = sub_B70798(Instance);
    sub_B70738(v26, 0LL);
  }
  *(_WORD *)(Instance + 32) = 95;
  if ( !v22 )
    goto LABEL_53;
  Instance = (__int64)System_String__Split(v22, (System_Char_array *)Instance, 0LL);
  if ( !Instance )
    goto LABEL_53;
  v23 = *(_DWORD *)(Instance + 24);
  v24 = Instance;
  if ( v23 == 3 )
  {
    Instance = System_Int32__TryParse(*(System_String_o **)(Instance + 32), svtId, 0LL);
    if ( *(_DWORD *)(v24 + 24) >= 3u )
      return System_String__Concat_44760452(
               *(System_String_o **)(v24 + 40),
               (System_String_o *)StringLiteral_16127/*"_"*/,
               *(System_String_o **)(v24 + 48),
               0LL);
    goto LABEL_54;
  }
  if ( v23 != 2 )
    return 0LL;
  return this->fields.param;
}


System_String_o *__fastcall QuestAfterAction_Command__GetBgmName(
        QuestAfterAction_Command_o *this,
        const MethodInfo *method)
{
  System_String_o *v3; // x0
  bool v4; // w8
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  WarEntity_o *v7; // [xsp+0h] [xbp-20h] BYREF
  int32_t result; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4351AD8 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_B70694(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4351AD8 = 1;
  }
  result = 0;
  v7 = 0LL;
  v3 = 0LL;
  if ( this->fields.id == 851 )
  {
    v4 = System_Int32__TryParse(this->fields.param, &result, 0LL);
    v3 = 0LL;
    if ( v4 )
    {
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_12;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_BgmMaster___);
      if ( !Instance )
        goto LABEL_12;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    &v7,
                                    result,
                                    (const MethodInfo_21C049C *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( v7 )
          return v7->fields.age;
LABEL_12:
        sub_B7076C(Instance, v6);
      }
      return 0LL;
    }
  }
  return v3;
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

  if ( (byte_4351AD6 & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    byte_4351AD6 = 1;
  }
  result = 0;
  v5 = 0;
  if ( this->fields.id == 800 )
  {
    v6 = (System_String_array *)sub_B706AC(char___TypeInfo, 1LL);
    if ( !v6 )
      goto LABEL_14;
    v7 = v6;
    if ( !v6->max_length )
    {
      v8 = sub_B70798(v6);
      sub_B70738(v8, 0LL);
    }
    LOWORD(v6->m_Items[0]) = 95;
    if ( !str || (v6 = System_String__Split(str, (System_Char_array *)v6, 0LL)) == 0LL )
LABEL_14:
      sub_B7076C(v6, v7);
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
  System_String_array *v5; // x0
  System_String_array *v6; // x1
  il2cpp_array_size_t max_length; // w8
  __int64 v9; // x0

  if ( (byte_4351AD7 & 1) == 0 )
  {
    sub_B70694(&char___TypeInfo);
    sub_B70694(&StringLiteral_16127/*"_"*/);
    byte_4351AD7 = 1;
  }
  if ( this->fields.id == 800 )
  {
    v5 = (System_String_array *)sub_B706AC(char___TypeInfo, 1LL);
    if ( !v5 )
      goto LABEL_13;
    v6 = v5;
    if ( !v5->max_length )
    {
      v9 = sub_B70798(v5);
      sub_B70738(v9, 0LL);
    }
    LOWORD(v5->m_Items[0]) = 95;
    if ( !str || (v5 = System_String__Split(str, (System_Char_array *)v5, 0LL)) == 0LL )
LABEL_13:
      sub_B7076C(v5, v6);
    max_length = v5->max_length;
    if ( max_length == 2 )
      return str;
    if ( max_length == 3 )
      return System_String__Concat_44760452(v5->m_Items[1], (System_String_o *)StringLiteral_16127/*"_"*/, v5->m_Items[2], 0LL);
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
    sub_B7076C(this, method);
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
    sub_B7076C(screenCollider, v5);
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
    sub_B7076C(this, 0LL);
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
    sub_B7076C(0LL, v7);
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
    sub_B7076C(0LL, v7);
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
  struct QuestAfterAction_o *that; // x8
  __int64 v4; // x8
  QuestAfterAction_StateMain_o *v5; // x20
  unsigned __int64 v6; // x22
  struct QuestAfterAction_o *v7; // x8
  int32_t v8; // w21
  srcLineSprite_o *MapComponent_srcLineSprite; // x21
  struct UIAtlas_o *mcAtlasP; // x8
  __int64 v11; // x0

  v2 = this;
  if ( (byte_4351ADD & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_int__Remove__);
    sub_B70694(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
    sub_B70694(&Method_SingletonTemplate_QuestTree__get_Instance__);
    this = (QuestAfterAction_StateMain_o *)sub_B70694(&SingletonTemplate_QuestTree__TypeInfo);
    byte_4351ADD = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_26;
  this = (QuestAfterAction_StateMain_o *)that->fields.invalidMapGimmickIdList;
  if ( !this )
    goto LABEL_26;
  this = (QuestAfterAction_StateMain_o *)System_Collections_Generic_List_int___ToArray(
                                           (System_Collections_Generic_List_int__o *)this,
                                           (const MethodInfo_30B82E4 *)Method_System_Collections_Generic_List_int__ToArray__);
  if ( !this )
    goto LABEL_26;
  v4 = *(_QWORD *)&this->fields.IsAnimDoing;
  v5 = this;
  if ( (int)v4 >= 1 )
  {
    v6 = 0LL;
    while ( 1 )
    {
      if ( v6 >= (unsigned int)v4 )
      {
        v11 = sub_B70798(this);
        sub_B70738(v11, 0LL);
      }
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
        (const MethodInfo_30B7B54 *)Method_System_Collections_Generic_List_int__Remove__);
      this = (QuestAfterAction_StateMain_o *)v2->fields.that;
      if ( !this )
        break;
      MapComponent_srcLineSprite = QuestAfterAction__GetMapComponent_srcLineSprite_(
                                     (QuestAfterAction_o *)this,
                                     2,
                                     v8,
                                     v2,
                                     (const MethodInfo_1D5B184 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
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
        this = (QuestAfterAction_StateMain_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapComponent_srcLineSprite || !this )
          break;
        this = (QuestAfterAction_StateMain_o *)QuestTree__CheckMapGimmickCond_22272832(
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
      LODWORD(v4) = *(_DWORD *)&v5->fields.IsAnimDoing;
      if ( (__int64)++v6 >= (int)v4 )
        return;
    }
LABEL_26:
    sub_B7076C(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestAfterAction_StateMain__UpdateAnim(
        QuestAfterAction_StateMain_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 updated; // x0
  const MethodInfo *v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  QuestAfterAction_o **v14; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  QuestAfterAction_StateMain_c *klass; // x8
  __int64 v22; // x22
  QuestAfterAction_Command_o *v23; // x22
  QuestAfterAction_o *v24; // x23
  BlankEarthQuestAfterAction_o *BlankEarthQuestAfterAction_k__BackingField; // x24
  System_Action_o *v26; // x25
  int id; // w8
  float v28; // s0
  float DEFAULT_FADE_TIME; // s8
  AvalonSceneManager_c *v30; // x0
  TerminalSceneComponent_c *v31; // x0
  TerminalSceneComponent_o *mInstance; // x19
  System_Action_o *v33; // x20
  __int64 MyFsmP; // x0
  TerminalSceneComponent_o *v35; // x0
  float v36; // s0
  System_Action_o *v37; // x1
  System_String_o *v38; // x19
  System_String_o *v39; // x20
  System_String_o *v40; // x20
  CommonUI_o *Instance; // x22
  System_Action_o *v42; // x23
  System_String_o *v43; // x23
  __int64 v44; // x8
  __int64 v45; // x24
  float v46; // s0
  System_String_o *v47; // x21
  __int64 v48; // x23
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  __int64 v55; // x20
  System_String_o *v56; // x21
  __int64 v57; // x8
  __int64 v58; // x22
  int32_t v59; // w21
  _BOOL4 v60; // w24
  bool v61; // w25
  System_String_o *v62; // x21
  __int64 v63; // x23
  int32_t v64; // w21
  int32_t v65; // w22
  int32_t v66; // w23
  __int64 v67; // x20
  System_String_array **v68; // x2
  System_String_array **v69; // x3
  System_Boolean_array **v70; // x4
  System_Int32_array **v71; // x5
  System_Int32_array *v72; // x6
  System_Int32_array *v73; // x7
  __int64 v74; // x8
  QuestAfterAction_o *v75; // x21
  System_Int32_array **v76; // x0
  System_String_array **v77; // x2
  System_String_array **v78; // x3
  System_Boolean_array **v79; // x4
  System_Int32_array **v80; // x5
  System_Int32_array *v81; // x6
  System_Int32_array *v82; // x7
  UnityEngine_Object_o *v83; // x19
  SrcSpotBasePrefab_o *v84; // x19
  System_Action_o *v85; // x21
  int32_t v86; // w1
  System_String_o *v87; // x23
  __int64 v88; // x23
  float v89; // s0
  float v90; // s9
  float v91; // s0
  float v92; // s10
  float v93; // s0
  float v94; // s11
  float v95; // s0
  float v96; // s8
  int32_t v97; // w19
  __int64 v98; // x8
  float v99; // s8
  const MethodInfo_243BBB0 *v100; // x2
  float v101; // s0
  float v102; // s1
  float v103; // s2
  float v104; // s10
  float v105; // s9
  float v106; // s11
  MapCamera_o *mMapCamera; // x20
  System_Action_o *v108; // x22
  MapCamera_o *v109; // x0
  float v110; // s0
  float v111; // s1
  float v112; // s2
  float v113; // s3
  int32_t v114; // w1
  System_Action_o *v115; // x2
  __int64 v116; // x20
  System_String_array **v117; // x2
  System_String_array **v118; // x3
  System_Boolean_array **v119; // x4
  System_Int32_array **v120; // x5
  System_Int32_array *v121; // x6
  System_Int32_array *v122; // x7
  __int64 v123; // x8
  QuestAfterAction_o *v124; // x21
  System_Int32_array **v125; // x0
  System_String_array **v126; // x2
  System_String_array **v127; // x3
  System_Boolean_array **v128; // x4
  System_Int32_array **v129; // x5
  System_Int32_array *v130; // x6
  System_Int32_array *v131; // x7
  UnityEngine_Object_o *v132; // x19
  ModelLineComponent_o *v133; // x19
  System_Action_o *v134; // x21
  int32_t v135; // w1
  System_String_o *v136; // x21
  const MethodInfo *v137; // x2
  __int64 v138; // x8
  QuestAfterAction_TitleInfoControlCallback_o *TitleInfoCtrlCallback_k__BackingField; // x21
  int32_t v140; // w20
  QuestEntity_o *v141; // x22
  const MethodInfo *v142; // x2
  __int64 v143; // x21
  TerminalPramsManager_c *v144; // x0
  int32_t v145; // w20
  clsQuestCheck_o *v146; // x19
  QuestAfterAction_StateMain___c_c *v147; // x8
  struct QuestAfterAction_StateMain___c_StaticFields *v148; // x9
  System_Action_o *_9__16_33; // x20
  Il2CppObject *v150; // x21
  struct QuestAfterAction_StateMain___c_StaticFields *v151; // x0
  System_String_array **v152; // x2
  System_String_array **v153; // x3
  System_Boolean_array **v154; // x4
  System_Int32_array **v155; // x5
  System_Int32_array *v156; // x6
  System_Int32_array *v157; // x7
  TerminalSceneComponent_c *v158; // x0
  TerminalSceneComponent_o *v159; // x21
  System_String_o *param; // x21
  __int64 v161; // x22
  int v162; // w23
  float v163; // s8
  int32_t v164; // w21
  QuestAfterAction_o *v165; // x8
  __int64 v166; // x8
  __int64 v167; // x8
  __int64 v168; // x8
  System_String_o *v169; // x20
  System_String_o *v170; // x21
  SeManager_c *v171; // x0
  float DEFAULT_VOLUME; // s8
  __int64 v173; // x8
  PlayMakerFSM_o *v174; // x20
  System_String_o *ActiveStateName; // x0
  __int64 v176; // x8
  __int64 v177; // x8
  QuestBoardListViewManager_o *v178; // x21
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x8
  System_Action_o *_9__16_31; // x22
  Il2CppObject *v181; // x23
  struct QuestAfterAction_StateMain___c_StaticFields *v182; // x0
  System_String_array **v183; // x2
  System_String_array **v184; // x3
  System_Boolean_array **v185; // x4
  System_Int32_array **v186; // x5
  System_Int32_array *v187; // x6
  System_Int32_array *v188; // x7
  TerminalSceneComponent_c *v189; // x0
  System_String_o *v190; // x20
  __int64 v191; // x21
  int32_t v192; // w20
  int32_t v193; // w22
  TerminalPramsManager_c *v194; // x0
  __int64 v195; // x8
  TerminalPramsManager_c *v196; // x0
  System_String_o *v197; // x19
  System_String_o *v198; // x20
  System_String_o *v199; // x20
  CommonUI_o *v200; // x22
  System_Action_o *v201; // x23
  System_String_o *v202; // x19
  System_String_o *v203; // x20
  System_String_o *v204; // x20
  CommonUI_o *v205; // x22
  System_Action_o *v206; // x23
  System_String_o *v207; // x23
  System_String_array **v208; // x2
  System_String_array **v209; // x3
  System_Boolean_array **v210; // x4
  System_Int32_array **v211; // x5
  System_Int32_array *v212; // x6
  System_Int32_array *v213; // x7
  System_String_array *v214; // x20
  System_Int32_array **v215; // x1
  System_String_o *v216; // x23
  System_String_array **v217; // x2
  System_String_array **v218; // x3
  System_Boolean_array **v219; // x4
  System_Int32_array **v220; // x5
  System_Int32_array *v221; // x6
  System_Int32_array *v222; // x7
  System_String_array *v223; // x20
  System_Int32_array **v224; // x1
  UnityEngine_Object_o *MapComponent_srcLineSprite; // x22
  UnityEngine_Component_o *v226; // x20
  __int64 v227; // x8
  ScrTerminalMap_o *v228; // x23
  __int64 v229; // x8
  ScrTerminalMap_o *v230; // x20
  UnityEngine_GameObject_o *gameObject; // x22
  System_Action_o *v232; // x23
  SceneJumpInfo_o *v233; // x21
  System_String_o *v234; // x23
  __int64 v235; // x8
  __int64 v236; // x24
  float v237; // s8
  System_String_o *v238; // x23
  __int64 v239; // x23
  float v240; // s0
  __int64 v241; // x8
  ScrTerminalMap_o *v242; // x24
  float v243; // s0
  float v244; // s9
  float v245; // s0
  const MethodInfo_243BBB0 *v246; // x2
  float v247; // s0
  float v248; // s1
  float v249; // s2
  System_String_o *v250; // x23
  __int64 v251; // x8
  __int64 v252; // x23
  float v253; // s0
  System_String_o *v254; // x20
  __int64 v255; // x22
  int32_t v256; // w0
  int32_t v257; // w20
  float v258; // s8
  int32_t v259; // w19
  System_String_o *v260; // x21
  __int64 v261; // x21
  QuestAfterAction_o *v262; // x22
  srcLineSprite_o *v263; // x22
  QuestAfterAction_o *v264; // x21
  UnityEngine_Object_o *v265; // x21
  _DWORD *v266; // x8
  __int64 v267; // x23
  System_String_array **v268; // x2
  System_String_array **v269; // x3
  System_Boolean_array **v270; // x4
  System_Int32_array **v271; // x5
  System_Int32_array *v272; // x6
  System_Int32_array *v273; // x7
  __int64 v274; // x20
  QuestAfterAction_o *v275; // x21
  System_Int32_array **v276; // x0
  System_Int32_array ***v277; // x19
  System_String_array **v278; // x2
  System_String_array **v279; // x3
  System_Boolean_array **v280; // x4
  System_Int32_array **v281; // x5
  System_Int32_array *v282; // x6
  System_Int32_array *v283; // x7
  UnityEngine_Object_o *v284; // x21
  SrcSpotBasePrefab_o *v285; // x21
  System_Action_o *v286; // x22
  System_String_array **v287; // x2
  System_String_array **v288; // x3
  System_Boolean_array **v289; // x4
  System_Int32_array **v290; // x5
  System_Int32_array *v291; // x6
  System_Int32_array *v292; // x7
  System_Int32_array **v293; // x1
  BattleServantConfConponent_o *v294; // x0
  __int64 v295; // x20
  System_String_array **v296; // x2
  System_String_array **v297; // x3
  System_Boolean_array **v298; // x4
  System_Int32_array **v299; // x5
  System_Int32_array *v300; // x6
  System_Int32_array *v301; // x7
  __int64 v302; // x8
  QuestAfterAction_o *v303; // x21
  System_Int32_array **v304; // x0
  System_String_array **v305; // x2
  System_String_array **v306; // x3
  System_Boolean_array **v307; // x4
  System_Int32_array **v308; // x5
  System_Int32_array *v309; // x6
  System_Int32_array *v310; // x7
  UnityEngine_Object_o *v311; // x19
  QuestAfterAction_o *v312; // x21
  UnityEngine_Object_o *v313; // x21
  _DWORD *monitor; // x8
  SrcSpotBasePrefab_o *v315; // x0
  int32_t v316; // w1
  System_String_o *v317; // x21
  __int64 v318; // x22
  QuestAfterAction_o *v319; // x21
  srcLineSprite_o *v320; // x21
  System_Action_o *v321; // x22
  QuestAfterAction_o *v322; // x21
  _DWORD *v323; // x8
  int32_t v324; // w21
  TerminalPramsManager_c *v325; // x0
  QuestAfterAction_o *v326; // x20
  UnityEngine_Object_o *v327; // x20
  System_Action_o *v328; // x20
  const MethodInfo *v329; // x2
  MapCamera_o *v330; // x20
  float v331; // s0
  System_Action_o *v332; // x22
  MapCamera_o *v333; // x0
  float v334; // s0
  int32_t v335; // w4
  System_Action_o *v336; // x5
  _BOOL4 v337; // w23
  QuestAfterAction_o *v338; // x21
  srcLineSprite_o *v339; // x21
  _DWORD *mcTweenScaleP; // x8
  __int64 v341; // x20
  System_String_array **v342; // x2
  System_String_array **v343; // x3
  System_Boolean_array **v344; // x4
  System_Int32_array **v345; // x5
  System_Int32_array *v346; // x6
  System_Int32_array *v347; // x7
  __int64 v348; // x8
  QuestAfterAction_o *v349; // x21
  System_Int32_array **v350; // x0
  System_String_array **v351; // x2
  System_String_array **v352; // x3
  System_Boolean_array **v353; // x4
  System_Int32_array **v354; // x5
  System_Int32_array *v355; // x6
  System_Int32_array *v356; // x7
  UnityEngine_Object_o *v357; // x19
  _BOOL4 IsMapModel; // w23
  QuestAfterAction_o *v359; // x21
  srcLineSprite_o *v360; // x21
  _DWORD *mcAtlasP; // x8
  __int64 v362; // x20
  System_String_array **v363; // x2
  System_String_array **v364; // x3
  System_Boolean_array **v365; // x4
  System_Int32_array **v366; // x5
  System_Int32_array *v367; // x6
  System_Int32_array *v368; // x7
  __int64 v369; // x8
  QuestAfterAction_o *v370; // x21
  System_Int32_array **v371; // x0
  System_String_array **v372; // x2
  System_String_array **v373; // x3
  System_Boolean_array **v374; // x4
  System_Int32_array **v375; // x5
  System_Int32_array *v376; // x6
  System_Int32_array *v377; // x7
  UnityEngine_Object_o *v378; // x19
  _BOOL4 v379; // w23
  QuestAfterAction_o *v380; // x21
  srcLineSprite_o *v381; // x21
  System_String_o *v382; // x22
  int v383; // w23
  __int64 v384; // x22
  float v385; // s0
  float v386; // s8
  float v387; // s0
  MapCamera_o *v388; // x19
  float v389; // s0
  float v390; // s9
  int32_t v391; // w20
  int v392; // w8
  System_String_o *v393; // x19
  System_String_o *v394; // x20
  int v395; // w8
  System_String_o *v396; // x19
  System_String_o *v397; // x20
  System_String_o *v398; // x20
  System_String_o *v399; // x22
  __int64 v400; // x22
  float v401; // s0
  QuestAfterAction_o *v402; // x20
  float v403; // s8
  UnityEngine_Object_o *v404; // x19
  __int64 v405; // x8
  ScrTerminalMap_o *v406; // x20
  float v407; // s0
  float v408; // s9
  float v409; // s0
  float v410; // s0
  float v411; // s1
  float v412; // s2
  float v413; // s9
  float v414; // s10
  float v415; // s11
  int32_t v416; // w20
  System_Action_o *v417; // x22
  System_String_o *v418; // x21
  __int64 v419; // x8
  __int64 v420; // x22
  int32_t v421; // w21
  bool v422; // w22
  System_String_o *v423; // x21
  __int64 v424; // x8
  __int64 v425; // x22
  int32_t v426; // w21
  bool v427; // w22
  System_String_o *v428; // x21
  __int64 v429; // x8
  __int64 v430; // x22
  int32_t v431; // w21
  bool v432; // w22
  System_String_o *v433; // x21
  __int64 v434; // x21
  QuestAfterAction_o *v435; // x20
  UnityEngine_Object_o *v436; // x20
  UIWidget_o *v437; // x20
  __int64 v438; // x23
  System_String_array **v439; // x2
  System_String_array **v440; // x3
  System_Boolean_array **v441; // x4
  System_Int32_array **v442; // x5
  System_Int32_array *v443; // x6
  System_Int32_array *v444; // x7
  System_String_o *v445; // x21
  __int64 v446; // x8
  __int64 v447; // x22
  int32_t v448; // w21
  _BOOL4 v449; // w24
  bool v450; // w25
  __int64 v451; // x20
  System_String_array **v452; // x2
  System_String_array **v453; // x3
  System_Boolean_array **v454; // x4
  System_Int32_array **v455; // x5
  System_Int32_array *v456; // x6
  System_Int32_array *v457; // x7
  __int64 v458; // x8
  QuestAfterAction_o *v459; // x21
  System_Int32_array **v460; // x0
  System_String_array **v461; // x2
  System_String_array **v462; // x3
  System_Boolean_array **v463; // x4
  System_Int32_array **v464; // x5
  System_Int32_array *v465; // x6
  System_Int32_array *v466; // x7
  UnityEngine_Object_o *v467; // x19
  MapGimmickComponent_o *v468; // x19
  System_Action_o *v469; // x21
  TerminalSceneComponent_o *v470; // x19
  __int64 v471; // x20
  System_String_array **v472; // x2
  System_String_array **v473; // x3
  System_Boolean_array **v474; // x4
  System_Int32_array **v475; // x5
  System_Int32_array *v476; // x6
  System_Int32_array *v477; // x7
  System_String_o *v478; // x21
  System_Int32_array **v479; // x0
  __int64 *v480; // x21
  System_String_array **v481; // x2
  System_String_array **v482; // x3
  System_Boolean_array **v483; // x4
  System_Int32_array **v484; // x5
  System_Int32_array *v485; // x6
  System_Int32_array *v486; // x7
  __int64 v487; // x8
  __int64 v488; // x9
  QuestAfterAction_o *v489; // x21
  System_Int32_array **v490; // x0
  System_String_array **v491; // x2
  System_String_array **v492; // x3
  System_Boolean_array **v493; // x4
  System_Int32_array **v494; // x5
  System_Int32_array *v495; // x6
  System_Int32_array *v496; // x7
  UnityEngine_Object_o *v497; // x19
  MapGimmickComponent_o *v498; // x19
  System_Action_o *v499; // x0
  __int64 *v500; // x8
  System_Action_o *v501; // x21
  System_String_array **v502; // x2
  System_String_array **v503; // x3
  System_Boolean_array **v504; // x4
  System_Int32_array **v505; // x5
  System_Int32_array *v506; // x6
  System_Int32_array *v507; // x7
  __int64 v508; // x8
  QuestAfterAction_o *v509; // x21
  System_Int32_array **v510; // x0
  __int64 v511; // x19
  System_String_array **v512; // x2
  System_String_array **v513; // x3
  System_Boolean_array **v514; // x4
  System_Int32_array **v515; // x5
  System_Int32_array *v516; // x6
  System_Int32_array *v517; // x7
  UnityEngine_Object_o *v518; // x21
  bool v519; // w0
  bool v520; // w22
  int32_t v521; // w1
  CommonUI_o *v522; // x22
  System_Action_o *v523; // x23
  CommonUI_o *v524; // x22
  System_Action_o *v525; // x23
  float v526; // s0
  int v527; // w23
  QuestAfterAction_o *v528; // x25
  UnityEngine_Object_o *v529; // x25
  const MethodInfo_243BBB0 *v530; // x2
  float v531; // s10
  float v532; // s9
  float v533; // s11
  __int64 v534; // x8
  MapCamera_o *v535; // x19
  System_Action_o *v536; // x20
  float v537; // s0
  float v538; // s0
  QuestAfterAction_o *v539; // x25
  UnityEngine_Object_o *MapGameObject; // x25
  float x; // s9
  float y; // s8
  float z; // s10
  __int64 v544; // x8
  const MethodInfo_243BBB0 *v545; // x2
  System_String_o *v546; // x19
  QuestAfterAction_o *v547; // x24
  UnityEngine_Object_o *v548; // x24
  float v549; // s8
  float v550; // s9
  float v551; // s10
  __int64 v552; // x8
  float v553; // s0
  float v554; // s1
  float v555; // s2
  UnityEngine_Object_o *v556; // x21
  int v557; // w9
  __int64 v558; // x20
  System_String_array **v559; // x2
  System_String_array **v560; // x3
  System_Boolean_array **v561; // x4
  System_Int32_array **v562; // x5
  System_Int32_array *v563; // x6
  System_Int32_array *v564; // x7
  __int64 v565; // x8
  QuestAfterAction_o *v566; // x21
  System_Int32_array **v567; // x0
  System_String_array **v568; // x2
  System_String_array **v569; // x3
  System_Boolean_array **v570; // x4
  System_Int32_array **v571; // x5
  System_Int32_array *v572; // x6
  System_Int32_array *v573; // x7
  UnityEngine_Object_o *v574; // x19
  srcLineSprite_o *v575; // x19
  System_Action_o *v576; // x21
  int32_t v577; // w1
  __int64 v578; // x20
  System_String_array **v579; // x2
  System_String_array **v580; // x3
  System_Boolean_array **v581; // x4
  System_Int32_array **v582; // x5
  System_Int32_array *v583; // x6
  System_Int32_array *v584; // x7
  __int64 v585; // x8
  QuestAfterAction_o *v586; // x21
  System_Int32_array **v587; // x0
  System_String_array **v588; // x2
  System_String_array **v589; // x3
  System_Boolean_array **v590; // x4
  System_Int32_array **v591; // x5
  System_Int32_array *v592; // x6
  System_Int32_array *v593; // x7
  UnityEngine_Object_o *v594; // x19
  __int64 v595; // x20
  System_String_array **v596; // x2
  System_String_array **v597; // x3
  System_Boolean_array **v598; // x4
  System_Int32_array **v599; // x5
  System_Int32_array *v600; // x6
  System_Int32_array *v601; // x7
  __int64 v602; // x8
  QuestAfterAction_o *v603; // x21
  System_Int32_array **v604; // x0
  System_String_array **v605; // x2
  System_String_array **v606; // x3
  System_Boolean_array **v607; // x4
  System_Int32_array **v608; // x5
  System_Int32_array *v609; // x6
  System_Int32_array *v610; // x7
  UnityEngine_Object_o *v611; // x19
  UnityEngine_Object_o *v612; // x21
  UnityEngine_Object_o *v613; // x21
  srcLineSprite_o *v614; // x21
  struct UIAtlas_o *v615; // x8
  QuestAfterAction_StateMain_c *v616; // x8
  int v617; // w0
  srcLineSprite_o *v618; // x21
  srcLineSprite_o *v619; // x21
  struct UIAtlas_o *v620; // x8
  System_Action_o *v621; // x22
  float v622; // s8
  float v623; // s10
  float v624; // s9
  const MethodInfo_243BBB0 *v625; // x2
  System_String_o *v626; // x19
  System_Int32_array **v627; // x0
  MapGimmickComponent_o **v628; // x21
  System_String_array **v629; // x2
  System_String_array **v630; // x3
  System_Boolean_array **v631; // x4
  System_Int32_array **v632; // x5
  System_Int32_array *v633; // x6
  System_Int32_array *v634; // x7
  UnityEngine_Object_o *v635; // x22
  MapGimmickComponent_o *v636; // x21
  System_Action_o *v637; // x0
  System_Action_o *v638; // x22
  int32_t v639; // w1
  System_Int32_array **v640; // x0
  MapGimmickComponent_o **v641; // x21
  System_String_array **v642; // x2
  System_String_array **v643; // x3
  System_Boolean_array **v644; // x4
  System_Int32_array **v645; // x5
  System_Int32_array *v646; // x6
  System_Int32_array *v647; // x7
  UnityEngine_Object_o *v648; // x22
  System_Action_o *v649; // x0
  __int64 v650; // x8
  ScrTerminalMap_o *v651; // x22
  System_Action_o *v652; // x23
  MapGimmickComponent_o *v653; // x0
  System_Action_o *v654; // x2
  MapCamera_o *v655; // x19
  float v656; // s0
  System_Action_o *v657; // x20
  MapCamera_o *v658; // x19
  MapCamera_o *v659; // x19
  float v660; // s0
  MapCamera_o *v661; // x19
  MapCamera_o *v662; // x19
  float v663; // s0
  float v664; // s0
  __int64 v665; // x0
  __int64 v666; // x0
  __int64 v667; // x0
  __int64 v668; // x0
  __int64 v669; // x0
  int32_t easeType; // [xsp+34h] [xbp-ACh]
  System_Nullable_float__o size; // [xsp+38h] [xbp-A8h] BYREF
  System_Nullable_Vector3__o v672; // [xsp+40h] [xbp-A0h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+50h] [xbp-90h] BYREF
  WarEntity_o *entity; // [xsp+58h] [xbp-88h] BYREF
  UnityEngine_Color_o color; // [xsp+60h] [xbp-80h] BYREF
  float v676; // [xsp+98h] [xbp-48h]
  bool isQuickUpdate; // [xsp+9Ch] [xbp-44h] BYREF
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v679; // 0:x0.8
  System_Nullable_float__o v680; // 0:x0.8
  System_Nullable_float__o v681; // 0:x0.8
  System_Nullable_float__o v682; // 0:x0.8
  System_Nullable_float__o v683; // 0:x3.8
  System_Nullable_Vector3__o v684; // 0:x0.16
  System_Nullable_Vector3__o v685; // 0:x0.16
  System_Nullable_Vector3__o v686; // 0:x0.16
  System_Nullable_Vector3__o v687; // 0:x0.16
  System_Nullable_Vector3__o v688; // 0:x0.16
  System_Nullable_Vector3__o v689; // 0:x1.16
  UnityEngine_Vector3_o v690; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v691; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v692; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v693; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v694; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v696; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v697; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v699; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v700; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v701; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v702; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4351ADB & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&AvalonSceneManager_TypeInfo);
    sub_B70694(&char___TypeInfo);
    sub_B70694(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B70694(&Method_DataManager_GetMaster_QuestMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B70694(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__);
    sub_B70694(&FSUtility_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&Method_System_Nullable_float___ctor__);
    sub_B70694(&Method_System_Nullable_Vector3___ctor__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
    sub_B70694(&Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
    sub_B70694(&Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
    sub_B70694(&Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
    sub_B70694(&SceneJumpInfo_TypeInfo);
    sub_B70694(&SeManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B70694(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B70694(&SingletonTemplate_QuestTree__TypeInfo);
    sub_B70694(&SingletonTemplate_clsQuestCheck__TypeInfo);
    sub_B70694(&SoundManager_TypeInfo);
    sub_B70694(&string___TypeInfo);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_31__);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_33__);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__13__);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__14__);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__15__);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__16__);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__17__);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__18__);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__19__);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__20__);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__25__);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__36__);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__37__);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__38__);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__39__);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__40__);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__);
    sub_B70694(&QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__21__);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__22__);
    sub_B70694(&QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__23__);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__24__);
    sub_B70694(&QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__26__);
    sub_B70694(&QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__27__);
    sub_B70694(&QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__29__);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__30__);
    sub_B70694(&QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__);
    sub_B70694(&QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__);
    sub_B70694(&QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__);
    sub_B70694(&QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__);
    sub_B70694(&QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__);
    sub_B70694(&QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__);
    sub_B70694(&QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__);
    sub_B70694(&QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__);
    sub_B70694(&QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__);
    sub_B70694(&QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo);
    sub_B70694(&QuestAfterAction_StateMain___c_TypeInfo);
    sub_B70694(&StringLiteral_70/*"\r\n"*/);
    sub_B70694(&StringLiteral_1182/*"30101"*/);
    sub_B70694(&StringLiteral_11038/*"QUEST_AFTER_ACTION_MESSAGE_"*/);
    sub_B70694(&StringLiteral_1183/*"30102"*/);
    sub_B70694(&StringLiteral_1120/*"10703"*/);
    sub_B70694(&StringLiteral_2992/*"CAPTER WAIT"*/);
    sub_B70694(&StringLiteral_1/*""*/);
    sub_B70694(&StringLiteral_19350/*"gevINFOBAR_BACK"*/);
    byte_4351ADB = 1;
  }
  isQuickUpdate = 0;
  *(_QWORD *)&color.fields.b = 0LL;
  entity = 0LL;
  *(_QWORD *)&color.fields.r = 0LL;
  value = 0LL;
  v5 = sub_B70764(QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo);
  QuestAfterAction_StateMain___c__DisplayClass16_0___ctor((QuestAfterAction_StateMain___c__DisplayClass16_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_1022;
  *(_QWORD *)(v5 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = that;
  v14 = (QuestAfterAction_o **)(v5 + 24);
  sub_B70630((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)that, v15, v16, v17, v18, v19, v20);
  if ( this->fields.IsAnimDoing )
    return;
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._10_get_CommandBuf.method)(
              this,
              this->klass->vtable._11_get_CommandIndex.methodPtr);
  if ( !updated )
    return;
  if ( !*v14 )
    goto LABEL_1022;
  if ( (*v14)->fields.isSkippedNext )
  {
    updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                this,
                this->klass->vtable._15_onEnd.methodPtr);
    if ( *v14 )
    {
      (*v14)->fields.isSkippedNext = 0;
      return;
    }
LABEL_1022:
    sub_B7076C(updated, v7);
  }
  klass = this->klass;
  this->fields.IsAnimDoing = 1;
  v22 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))klass->vtable._10_get_CommandBuf.method)(
          this,
          klass->vtable._11_get_CommandIndex.methodPtr);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._11_get_CommandIndex.method)(
              this,
              this->klass->vtable._12_set_CommandIndex.methodPtr);
  if ( !v22 )
    goto LABEL_1022;
  if ( (unsigned int)updated >= *(_DWORD *)(v22 + 24) )
  {
LABEL_1023:
    v665 = sub_B70798(updated);
    sub_B70738(v665, 0LL);
  }
  v23 = *(QuestAfterAction_Command_o **)(v22 + 8LL * (int)updated + 32);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_Command_o *, Il2CppMethodPointer))this->klass->vtable._9_IsUsableCommand.method)(
              this,
              v23,
              this->klass->vtable._10_get_CommandBuf.methodPtr);
  if ( (updated & 1) == 0 )
    goto LABEL_389;
  v24 = *v14;
  if ( !*v14 )
    goto LABEL_1022;
  BlankEarthQuestAfterAction_k__BackingField = v24->fields._BlankEarthQuestAfterAction_k__BackingField;
  v26 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
  if ( !BlankEarthQuestAfterAction_k__BackingField )
    goto LABEL_1022;
  updated = BlankEarthQuestAfterAction__UpdateAnim(
              BlankEarthQuestAfterAction_k__BackingField,
              v24,
              v23,
              v26,
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
        *v14,
        this->klass->vtable._14_EndAnim.methodPtr);
      return;
    }
    return;
  }
  if ( !v23 )
    goto LABEL_1022;
  id = v23->fields.id;
  if ( id <= 520 )
  {
    if ( id > 350 )
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
          if ( !byte_434DEA1 )
          {
            sub_B70694(&TerminalSceneComponent_TypeInfo);
            byte_434DEA1 = 1;
          }
          MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v173 = **(_QWORD **)(MyFsmP + 184);
          if ( v173 )
          {
            MyFsmP = *(_QWORD *)(v173 + 248);
            if ( MyFsmP )
            {
              MyFsmP = (__int64)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)MyFsmP, 0LL);
              if ( MyFsmP )
              {
                v174 = (PlayMakerFSM_o *)MyFsmP;
                ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)MyFsmP, 0LL);
                if ( !System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_2992/*"CAPTER WAIT"*/, 0LL) )
                  goto LABEL_389;
                if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                }
                if ( !byte_434DEA1 )
                {
                  sub_B70694(&TerminalSceneComponent_TypeInfo);
                  byte_434DEA1 = 1;
                }
                MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
                if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v176 = **(_QWORD **)(MyFsmP + 184);
                if ( v176 )
                {
                  v177 = *(_QWORD *)(v176 + 248);
                  if ( v177 )
                  {
                    v178 = *(QuestBoardListViewManager_o **)(v177 + 288);
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
                      v181 = (Il2CppObject *)static_fields->__9;
                      _9__16_31 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
                      System_Action___ctor(
                        _9__16_31,
                        v181,
                        Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_31__,
                        0LL);
                      v182 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
                      v182->__9__16_31 = _9__16_31;
                      sub_B70630(
                        (BattleServantConfConponent_o *)&v182->__9__16_31,
                        (System_Int32_array **)_9__16_31,
                        v183,
                        v184,
                        v185,
                        v186,
                        v187,
                        v188);
                    }
                    if ( v178 )
                    {
                      QuestBoardListViewManager__SetMode(v178, 4, _9__16_31, 0, 0, 0LL);
                      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                      }
                      if ( !byte_434DEA1 )
                      {
                        sub_B70694(&TerminalSceneComponent_TypeInfo);
                        byte_434DEA1 = 1;
                      }
                      v189 = TerminalSceneComponent_TypeInfo;
                      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                        v189 = TerminalSceneComponent_TypeInfo;
                      }
                      MyFsmP = (__int64)v189->static_fields->mInstance;
                      if ( MyFsmP )
                      {
                        TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)MyFsmP, 0LL);
                        PlayMakerFSM__SendEvent(v174, (System_String_o *)StringLiteral_19350/*"gevINFOBAR_BACK"*/, 0LL);
                        goto LABEL_389;
                      }
                    }
                  }
                }
              }
            }
          }
          goto LABEL_1024;
        }
        if ( id != 510 )
        {
          if ( id != 520 )
            return;
          DEFAULT_FADE_TIME = System_Single__Parse(v23->fields.param, 0LL);
          if ( DEFAULT_FADE_TIME <= 0.0 )
          {
            v30 = AvalonSceneManager_TypeInfo;
            if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
              v30 = AvalonSceneManager_TypeInfo;
            }
            DEFAULT_FADE_TIME = v30->static_fields->DEFAULT_FADE_TIME;
          }
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_434DEA1 )
          {
            sub_B70694(&TerminalSceneComponent_TypeInfo);
            byte_434DEA1 = 1;
          }
          v31 = TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v31 = TerminalSceneComponent_TypeInfo;
          }
          mInstance = v31->static_fields->mInstance;
          v33 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
          System_Action___ctor(
            v33,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__,
            0LL);
          if ( mInstance )
          {
            v35 = mInstance;
            v36 = DEFAULT_FADE_TIME;
            v37 = v33;
LABEL_49:
            TerminalSceneComponent__Fadein_MapDisp(v35, v36, v37, 0LL);
            return;
          }
          goto LABEL_1024;
        }
        param = v23->fields.param;
        MyFsmP = sub_B706AC(char___TypeInfo, 1LL);
        if ( !MyFsmP )
          goto LABEL_1024;
        v7 = (const MethodInfo *)MyFsmP;
        if ( *(_DWORD *)(MyFsmP + 24) )
        {
          *(_WORD *)(MyFsmP + 32) = 44;
          if ( !param )
            goto LABEL_1024;
          MyFsmP = (__int64)System_String__Split(param, (System_Char_array *)MyFsmP, 0LL);
          if ( !MyFsmP )
            goto LABEL_1024;
          v161 = MyFsmP;
          if ( *(_DWORD *)(MyFsmP + 24) )
          {
            v162 = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
            v163 = 0.5;
            if ( *(int *)(v161 + 24) >= 2 )
            {
              v164 = System_Int32__Parse(*(System_String_o **)(v161 + 40), 0LL);
              if ( *(int *)(v161 + 24) >= 3 )
                v163 = System_Single__Parse(*(System_String_o **)(v161 + 48), 0LL);
            }
            else
            {
              v164 = v162;
              v162 = -1;
            }
            MyFsmP = (__int64)*v14;
            if ( *v14 )
            {
              MapComponent_srcLineSprite = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                                     (QuestAfterAction_o *)MyFsmP,
                                                                     0,
                                                                     v164,
                                                                     this,
                                                                     (const MethodInfo_1D5B184 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Equality(MapComponent_srcLineSprite, 0LL, 0LL) )
                return;
              if ( v162 >= 1 )
              {
                MyFsmP = (__int64)*v14;
                if ( !*v14 )
                  goto LABEL_1024;
                v226 = (UnityEngine_Component_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                    (QuestAfterAction_o *)MyFsmP,
                                                    0,
                                                    v162,
                                                    this,
                                                    (const MethodInfo_1D5B184 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v226, 0LL, 0LL) )
                {
                  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  }
                  if ( !byte_434DEA1 )
                  {
                    sub_B70694(&TerminalSceneComponent_TypeInfo);
                    byte_434DEA1 = 1;
                  }
                  MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
                  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
                  }
                  v227 = **(_QWORD **)(MyFsmP + 184);
                  if ( !v227 )
                    goto LABEL_1024;
                  if ( !v226 )
                    goto LABEL_1024;
                  v228 = *(ScrTerminalMap_o **)(v227 + 256);
                  MyFsmP = (__int64)UnityEngine_Component__get_gameObject(v226, 0LL);
                  if ( !v228 )
                    goto LABEL_1024;
                  ScrTerminalMap__SetPlayerIcon(v228, (UnityEngine_GameObject_o *)MyFsmP, 0LL);
                }
              }
              if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              }
              if ( !byte_434DEA1 )
              {
                sub_B70694(&TerminalSceneComponent_TypeInfo);
                byte_434DEA1 = 1;
              }
              MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
              if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
              }
              v229 = **(_QWORD **)(MyFsmP + 184);
              if ( v229 )
              {
                if ( MapComponent_srcLineSprite )
                {
                  v230 = *(ScrTerminalMap_o **)(v229 + 256);
                  gameObject = UnityEngine_Component__get_gameObject(
                                 (UnityEngine_Component_o *)MapComponent_srcLineSprite,
                                 0LL);
                  v232 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
                  System_Action___ctor(
                    v232,
                    (Il2CppObject *)this,
                    (intptr_t)this->klass->vtable._15_onEnd.methodPtr,
                    0LL);
                  if ( v230 )
                  {
                    ScrTerminalMap__MovePlayerIcon(v230, gameObject, v164, v232, v163, 0LL);
                    return;
                  }
                }
              }
            }
LABEL_1024:
            sub_B7076C(MyFsmP, v7);
          }
        }
LABEL_1026:
        v666 = sub_B70798(MyFsmP);
        sub_B70738(v666, 0LL);
      }
      if ( (unsigned int)(id - 351) >= 2 )
      {
        switch ( id )
        {
          case 400:
            v48 = sub_B70764(QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo);
            QuestAfterAction_StateMain___c__DisplayClass16_10___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_10_o *)v48,
              0LL);
            if ( !v48 )
              goto LABEL_1024;
            *(_QWORD *)(v48 + 24) = v5;
            v55 = v48 + 24;
            sub_B70630(
              (BattleServantConfConponent_o *)(v48 + 24),
              (System_Int32_array **)v5,
              v49,
              v50,
              v51,
              v52,
              v53,
              v54);
            v56 = v23->fields.param;
            MyFsmP = sub_B706AC(char___TypeInfo, 1LL);
            if ( !MyFsmP )
              goto LABEL_1024;
            v7 = (const MethodInfo *)MyFsmP;
            if ( !*(_DWORD *)(MyFsmP + 24) )
              goto LABEL_1026;
            *(_WORD *)(MyFsmP + 32) = 44;
            if ( !v56 )
              goto LABEL_1024;
            MyFsmP = (__int64)System_String__Split(v56, (System_Char_array *)MyFsmP, 0LL);
            if ( !MyFsmP )
              goto LABEL_1024;
            v57 = *(_QWORD *)(MyFsmP + 24);
            v58 = MyFsmP;
            if ( v57 )
            {
              if ( !(_DWORD)v57 )
                goto LABEL_1026;
              MyFsmP = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
              v59 = MyFsmP;
              if ( *(int *)(v58 + 24) < 2 )
              {
                v60 = 0;
              }
              else
              {
                MyFsmP = System_Int32__Parse(*(System_String_o **)(v58 + 40), 0LL);
                v60 = (int)MyFsmP > 0;
                if ( *(int *)(v58 + 24) >= 3 )
                {
                  MyFsmP = System_Int32__Parse(*(System_String_o **)(v58 + 48), 0LL);
                  v61 = (int)MyFsmP > 0;
LABEL_940:
                  if ( !*(_QWORD *)v55 )
                    goto LABEL_1024;
                  MyFsmP = *(_QWORD *)(*(_QWORD *)v55 + 24LL);
                  if ( !MyFsmP )
                    goto LABEL_1024;
                  v627 = (System_Int32_array **)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                  (QuestAfterAction_o *)MyFsmP,
                                                  2,
                                                  v59,
                                                  this,
                                                  (const MethodInfo_1D5B184 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
                  *(_QWORD *)(v48 + 16) = v627;
                  v628 = (MapGimmickComponent_o **)(v48 + 16);
                  sub_B70630((BattleServantConfConponent_o *)(v48 + 16), v627, v629, v630, v631, v632, v633, v634);
                  v635 = *(UnityEngine_Object_o **)(v48 + 16);
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  MyFsmP = UnityEngine_Object__op_Equality(v635, 0LL, 0LL);
                  if ( (MyFsmP & 1) != 0 )
                    return;
                  if ( !*v628 )
                    goto LABEL_1024;
                  (*v628)->fields.isForceNotActive = v61;
                  v636 = *v628;
                  v637 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
                  v638 = v637;
                  if ( v60 )
                  {
                    System_Action___ctor(
                      v637,
                      (Il2CppObject *)v48,
                      Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__21__,
                      0LL);
                    if ( !v636 )
                      goto LABEL_1024;
                    v639 = 2;
LABEL_963:
                    MapGimmickComponent__SetState(v636, v639, v638, 0LL);
                    MyFsmP = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
                               this,
                               this->klass->vtable._15_onEnd.methodPtr);
                    if ( *(_QWORD *)v55 )
                    {
                      ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._13_UpdateAnim.method)(
                        this,
                        *(_QWORD *)(*(_QWORD *)v55 + 24LL),
                        this->klass->vtable._14_EndAnim.methodPtr);
                      return;
                    }
                    goto LABEL_1024;
                  }
                  System_Action___ctor(
                    v637,
                    (Il2CppObject *)v48,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__22__,
                    0LL);
                  if ( !v636 )
                    goto LABEL_1024;
                  v521 = 2;
                  goto LABEL_985;
                }
              }
            }
            else
            {
              v60 = 0;
              v59 = 0;
            }
            v61 = 0;
            goto LABEL_940;
          case 401:
            v438 = sub_B70764(QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo);
            QuestAfterAction_StateMain___c__DisplayClass16_11___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_11_o *)v438,
              0LL);
            if ( !v438 )
              goto LABEL_1024;
            *(_QWORD *)(v438 + 24) = v5;
            v55 = v438 + 24;
            sub_B70630(
              (BattleServantConfConponent_o *)(v438 + 24),
              (System_Int32_array **)v5,
              v439,
              v440,
              v441,
              v442,
              v443,
              v444);
            v445 = v23->fields.param;
            MyFsmP = sub_B706AC(char___TypeInfo, 1LL);
            if ( !MyFsmP )
              goto LABEL_1024;
            v7 = (const MethodInfo *)MyFsmP;
            if ( !*(_DWORD *)(MyFsmP + 24) )
              goto LABEL_1026;
            *(_WORD *)(MyFsmP + 32) = 44;
            if ( !v445 )
              goto LABEL_1024;
            MyFsmP = (__int64)System_String__Split(v445, (System_Char_array *)MyFsmP, 0LL);
            if ( !MyFsmP )
              goto LABEL_1024;
            v446 = *(_QWORD *)(MyFsmP + 24);
            v447 = MyFsmP;
            if ( v446 )
            {
              if ( !(_DWORD)v446 )
                goto LABEL_1026;
              MyFsmP = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
              v448 = MyFsmP;
              if ( *(int *)(v447 + 24) < 2 )
              {
                v449 = 0;
              }
              else
              {
                MyFsmP = System_Int32__Parse(*(System_String_o **)(v447 + 40), 0LL);
                v449 = (int)MyFsmP > 0;
                if ( *(int *)(v447 + 24) >= 3 )
                {
                  MyFsmP = System_Int32__Parse(*(System_String_o **)(v447 + 48), 0LL);
                  v450 = (int)MyFsmP > 0;
LABEL_952:
                  if ( !*(_QWORD *)v55 )
                    goto LABEL_1024;
                  MyFsmP = *(_QWORD *)(*(_QWORD *)v55 + 24LL);
                  if ( !MyFsmP )
                    goto LABEL_1024;
                  v640 = (System_Int32_array **)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                  (QuestAfterAction_o *)MyFsmP,
                                                  2,
                                                  v448,
                                                  this,
                                                  (const MethodInfo_1D5B184 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
                  *(_QWORD *)(v438 + 16) = v640;
                  v641 = (MapGimmickComponent_o **)(v438 + 16);
                  sub_B70630((BattleServantConfConponent_o *)(v438 + 16), v640, v642, v643, v644, v645, v646, v647);
                  v648 = *(UnityEngine_Object_o **)(v438 + 16);
                  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                  }
                  MyFsmP = UnityEngine_Object__op_Equality(v648, 0LL, 0LL);
                  if ( (MyFsmP & 1) != 0 )
                    return;
                  if ( !*v641 )
                    goto LABEL_1024;
                  (*v641)->fields.isForceLoop = v450;
                  if ( !*v641 )
                    goto LABEL_1024;
                  (*v641)->fields.isForceNotActive = 0;
                  v636 = *v641;
                  v649 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
                  v638 = v649;
                  if ( v449 )
                  {
                    System_Action___ctor(
                      v649,
                      (Il2CppObject *)v438,
                      Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__23__,
                      0LL);
                    if ( !v636 )
                      goto LABEL_1024;
                    v639 = 3;
                    goto LABEL_963;
                  }
                  System_Action___ctor(
                    v649,
                    (Il2CppObject *)v438,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__24__,
                    0LL);
                  if ( !v636 )
                    goto LABEL_1024;
                  v521 = 3;
LABEL_985:
                  v653 = v636;
                  v654 = v638;
LABEL_986:
                  MapGimmickComponent__SetState(v653, v521, v654, 0LL);
                  return;
                }
              }
            }
            else
            {
              v449 = 0;
              v448 = 0;
            }
            v450 = 0;
            goto LABEL_952;
          case 402:
            v423 = v23->fields.param;
            MyFsmP = sub_B706AC(char___TypeInfo, 1LL);
            if ( !MyFsmP )
              goto LABEL_1024;
            v7 = (const MethodInfo *)MyFsmP;
            if ( !*(_DWORD *)(MyFsmP + 24) )
              goto LABEL_1026;
            *(_WORD *)(MyFsmP + 32) = 44;
            if ( !v423 )
              goto LABEL_1024;
            MyFsmP = (__int64)System_String__Split(v423, (System_Char_array *)MyFsmP, 0LL);
            if ( !MyFsmP )
              goto LABEL_1024;
            v424 = *(_QWORD *)(MyFsmP + 24);
            v425 = MyFsmP;
            if ( v424 )
            {
              if ( !(_DWORD)v424 )
                goto LABEL_1026;
              v426 = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
              if ( *(int *)(v425 + 24) >= 2 )
              {
                v427 = System_Int32__Parse(*(System_String_o **)(v425 + 40), 0LL) > 0;
                goto LABEL_906;
              }
            }
            else
            {
              v426 = 0;
            }
            v427 = 0;
LABEL_906:
            MyFsmP = (__int64)*v14;
            if ( *v14 )
            {
              v618 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                       (QuestAfterAction_o *)MyFsmP,
                       2,
                       v426,
                       this,
                       (const MethodInfo_1D5B184 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              MyFsmP = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v618, 0LL, 0LL);
              if ( (MyFsmP & 1) != 0 )
                return;
              if ( v618 )
              {
                BYTE1(v618->fields.mcTo.fields.y) = v427;
                MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)v618, 0, 0LL);
                mcAtlasP = v618->fields.mcAtlasP;
                if ( mcAtlasP )
                {
LABEL_913:
                  mcAtlasP[4] = 0;
                  goto LABEL_18;
                }
              }
            }
            goto LABEL_1024;
          case 403:
            v428 = v23->fields.param;
            MyFsmP = sub_B706AC(char___TypeInfo, 1LL);
            if ( !MyFsmP )
              goto LABEL_1024;
            v7 = (const MethodInfo *)MyFsmP;
            if ( !*(_DWORD *)(MyFsmP + 24) )
              goto LABEL_1026;
            *(_WORD *)(MyFsmP + 32) = 44;
            if ( !v428 )
              goto LABEL_1024;
            MyFsmP = (__int64)System_String__Split(v428, (System_Char_array *)MyFsmP, 0LL);
            if ( !MyFsmP )
              goto LABEL_1024;
            v429 = *(_QWORD *)(MyFsmP + 24);
            v430 = MyFsmP;
            if ( v429 )
            {
              if ( !(_DWORD)v429 )
                goto LABEL_1026;
              v431 = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
              if ( *(int *)(v430 + 24) >= 2 )
              {
                v432 = System_Int32__Parse(*(System_String_o **)(v430 + 40), 0LL) > 0;
                goto LABEL_916;
              }
            }
            else
            {
              v431 = 0;
            }
            v432 = 0;
LABEL_916:
            MyFsmP = (__int64)*v14;
            if ( *v14 )
            {
              v619 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                       (QuestAfterAction_o *)MyFsmP,
                       2,
                       v431,
                       this,
                       (const MethodInfo_1D5B184 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              MyFsmP = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v619, 0LL, 0LL);
              if ( (MyFsmP & 1) != 0 )
                return;
              if ( v619 )
              {
                LOBYTE(v619->fields.mcTo.fields.y) = v432;
                BYTE1(v619->fields.mcTo.fields.y) = 0;
                MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)v619, 1, 0LL);
                v620 = v619->fields.mcAtlasP;
                if ( v620 )
                {
                  v620->fields.m_CachedPtr = 1;
                  goto LABEL_18;
                }
              }
            }
            goto LABEL_1024;
          case 404:
            v399 = v23->fields.param;
            MyFsmP = sub_B706AC(char___TypeInfo, 1LL);
            if ( !MyFsmP )
              goto LABEL_1024;
            v7 = (const MethodInfo *)MyFsmP;
            if ( !*(_DWORD *)(MyFsmP + 24) )
              goto LABEL_1026;
            *(_WORD *)(MyFsmP + 32) = 44;
            if ( !v399 )
              goto LABEL_1024;
            MyFsmP = (__int64)System_String__Split(v399, (System_Char_array *)MyFsmP, 0LL);
            if ( !MyFsmP )
              goto LABEL_1024;
            v400 = MyFsmP;
            if ( *(int *)(MyFsmP + 24) <= 4 )
              goto LABEL_389;
            v401 = System_Single__Parse(*(System_String_o **)(MyFsmP + 56), 0LL);
            if ( !*(_DWORD *)(v400 + 24) )
              goto LABEL_1026;
            v402 = *v14;
            v403 = v401;
            MyFsmP = System_Int32__Parse(*(System_String_o **)(v400 + 32), 0LL);
            if ( !v402 )
              goto LABEL_1024;
            v404 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                             v402,
                                             2,
                                             MyFsmP,
                                             this,
                                             (const MethodInfo_1D5B184 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Equality(v404, 0LL, 0LL) )
              return;
            if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            }
            if ( !byte_434DEA1 )
            {
              sub_B70694(&TerminalSceneComponent_TypeInfo);
              byte_434DEA1 = 1;
            }
            MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
            if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v405 = **(_QWORD **)(MyFsmP + 184);
            if ( !v405 )
              goto LABEL_1024;
            if ( *(_DWORD *)(v400 + 24) <= 1u )
              goto LABEL_1026;
            v406 = *(ScrTerminalMap_o **)(v405 + 256);
            v407 = System_Single__Parse(*(System_String_o **)(v400 + 40), 0LL);
            if ( *(_DWORD *)(v400 + 24) <= 2u )
              goto LABEL_1026;
            v408 = v407;
            v409 = System_Single__Parse(*(System_String_o **)(v400 + 48), 0LL);
            if ( !v406 )
              goto LABEL_1024;
            *(UnityEngine_Vector3_o *)&v410 = ScrTerminalMap__LocalPosFromCoord(v406, v408, v409, 0.0, 0.0, 0LL);
            if ( *(_DWORD *)(v400 + 24) <= 4u )
              goto LABEL_1026;
            v413 = v410;
            v414 = v411;
            v415 = v412;
            v416 = System_Int32__Parse(*(System_String_o **)(v400 + 64), 0LL);
            v417 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
            System_Action___ctor(
              v417,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__25__,
              0LL);
            if ( !v404 )
              goto LABEL_1024;
            v691.fields.y = v414;
            v691.fields.z = v415;
            v691.fields.x = v413;
            MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v404, v691, v403 * 0.001, v416, v417, 0LL);
            return;
          case 405:
            v451 = sub_B70764(QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo);
            QuestAfterAction_StateMain___c__DisplayClass16_12___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_12_o *)v451,
              0LL);
            if ( !v451 )
              goto LABEL_1024;
            *(_QWORD *)(v451 + 24) = v5;
            sub_B70630(
              (BattleServantConfConponent_o *)(v451 + 24),
              (System_Int32_array **)v5,
              v452,
              v453,
              v454,
              v455,
              v456,
              v457);
            v458 = *(_QWORD *)(v451 + 24);
            if ( !v458 )
              goto LABEL_1024;
            v459 = *(QuestAfterAction_o **)(v458 + 24);
            MyFsmP = System_Int32__Parse(v23->fields.param, 0LL);
            if ( !v459 )
              goto LABEL_1024;
            v460 = (System_Int32_array **)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                            v459,
                                            2,
                                            MyFsmP,
                                            this,
                                            (const MethodInfo_1D5B184 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v451 + 16) = v460;
            sub_B70630((BattleServantConfConponent_o *)(v451 + 16), v460, v461, v462, v463, v464, v465, v466);
            v467 = *(UnityEngine_Object_o **)(v451 + 16);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Equality(v467, 0LL, 0LL) )
              return;
            v468 = *(MapGimmickComponent_o **)(v451 + 16);
            v469 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
            System_Action___ctor(
              v469,
              (Il2CppObject *)v451,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__26__,
              0LL);
            if ( !v468 )
              goto LABEL_1024;
            MapGimmickComponent__SetState(v468, 3, v469, 0LL);
            if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            }
            if ( !byte_434DEA1 )
            {
              sub_B70694(&TerminalSceneComponent_TypeInfo);
              byte_434DEA1 = 1;
            }
            MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
            if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v470 = **(TerminalSceneComponent_o ***)(MyFsmP + 184);
            if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
            }
            if ( !v470 )
              goto LABEL_1024;
            v35 = v470;
            v37 = 0LL;
            v36 = AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME;
            goto LABEL_49;
          case 406:
            v471 = sub_B70764(QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo);
            QuestAfterAction_StateMain___c__DisplayClass16_13___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_13_o *)v471,
              0LL);
            if ( !v471 )
              goto LABEL_1024;
            *(_QWORD *)(v471 + 32) = v5;
            sub_B70630(
              (BattleServantConfConponent_o *)(v471 + 32),
              (System_Int32_array **)v5,
              v472,
              v473,
              v474,
              v475,
              v476,
              v477);
            v478 = v23->fields.param;
            MyFsmP = sub_B706AC(char___TypeInfo, 1LL);
            if ( !MyFsmP )
              goto LABEL_1024;
            v7 = (const MethodInfo *)MyFsmP;
            if ( !*(_DWORD *)(MyFsmP + 24) )
              goto LABEL_1026;
            *(_WORD *)(MyFsmP + 32) = 44;
            if ( !v478 )
              goto LABEL_1024;
            v479 = (System_Int32_array **)System_String__Split(v478, (System_Char_array *)MyFsmP, 0LL);
            *(_QWORD *)(v471 + 24) = v479;
            v480 = (__int64 *)(v471 + 24);
            sub_B70630((BattleServantConfConponent_o *)(v471 + 24), v479, v481, v482, v483, v484, v485, v486);
            v487 = *(_QWORD *)(v471 + 32);
            if ( !v487 )
              goto LABEL_1024;
            v488 = *v480;
            if ( !*v480 )
              goto LABEL_1024;
            if ( !*(_DWORD *)(v488 + 24) )
              goto LABEL_1026;
            v489 = *(QuestAfterAction_o **)(v487 + 24);
            MyFsmP = System_Int32__Parse(*(System_String_o **)(v488 + 32), 0LL);
            if ( !v489 )
              goto LABEL_1024;
            v490 = (System_Int32_array **)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                            v489,
                                            2,
                                            MyFsmP,
                                            this,
                                            (const MethodInfo_1D5B184 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v471 + 16) = v490;
            sub_B70630((BattleServantConfConponent_o *)(v471 + 16), v490, v491, v492, v493, v494, v495, v496);
            v497 = *(UnityEngine_Object_o **)(v471 + 16);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Equality(v497, 0LL, 0LL) )
              return;
            v498 = *(MapGimmickComponent_o **)(v471 + 16);
            v499 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
            v500 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__27__;
            v501 = v499;
            goto LABEL_755;
          case 407:
            v433 = v23->fields.param;
            MyFsmP = sub_B706AC(char___TypeInfo, 1LL);
            if ( !MyFsmP )
              goto LABEL_1024;
            v7 = (const MethodInfo *)MyFsmP;
            if ( !*(_DWORD *)(MyFsmP + 24) )
              goto LABEL_1026;
            *(_WORD *)(MyFsmP + 32) = 44;
            if ( !v433 )
              goto LABEL_1024;
            MyFsmP = (__int64)System_String__Split(v433, (System_Char_array *)MyFsmP, 0LL);
            if ( !MyFsmP )
              goto LABEL_1024;
            v434 = MyFsmP;
            if ( !*(_DWORD *)(MyFsmP + 24) )
              goto LABEL_1026;
            v435 = *v14;
            MyFsmP = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
            if ( !v435 )
              goto LABEL_1024;
            v436 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                             v435,
                                             2,
                                             MyFsmP,
                                             this,
                                             (const MethodInfo_1D5B184 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            MyFsmP = UnityEngine_Object__op_Equality(v436, 0LL, 0LL);
            if ( (MyFsmP & 1) != 0 )
              return;
            if ( !v436 )
              goto LABEL_1024;
            MyFsmP = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v436, 0LL);
            if ( !MyFsmP )
              goto LABEL_1024;
            MyFsmP = (__int64)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                (UnityEngine_GameObject_o *)MyFsmP,
                                (const MethodInfo_1D4AED4 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
            if ( *(_DWORD *)(v434 + 24) <= 1u )
              goto LABEL_1026;
            v437 = (UIWidget_o *)MyFsmP;
            MyFsmP = UnityEngine_ColorUtility__TryParseHtmlString(*(System_String_o **)(v434 + 40), &color, 0LL);
            if ( !v437 )
              goto LABEL_1024;
            UIWidget__set_color(v437, color, 0LL);
            goto LABEL_389;
          case 408:
            v471 = sub_B70764(QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo);
            QuestAfterAction_StateMain___c__DisplayClass16_15___ctor(
              (QuestAfterAction_StateMain___c__DisplayClass16_15_o *)v471,
              0LL);
            if ( !v471 )
              goto LABEL_1024;
            *(_QWORD *)(v471 + 24) = v5;
            sub_B70630(
              (BattleServantConfConponent_o *)(v471 + 24),
              (System_Int32_array **)v5,
              v502,
              v503,
              v504,
              v505,
              v506,
              v507);
            v508 = *(_QWORD *)(v471 + 24);
            if ( !v508 )
              goto LABEL_1024;
            v509 = *(QuestAfterAction_o **)(v508 + 24);
            MyFsmP = System_Int32__Parse(v23->fields.param, 0LL);
            if ( !v509 )
              goto LABEL_1024;
            v510 = (System_Int32_array **)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                            v509,
                                            2,
                                            MyFsmP,
                                            this,
                                            (const MethodInfo_1D5B184 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            *(_QWORD *)(v471 + 16) = v510;
            v511 = v471 + 16;
            sub_B70630((BattleServantConfConponent_o *)(v471 + 16), v510, v512, v513, v514, v515, v516, v517);
            v518 = *(UnityEngine_Object_o **)(v471 + 16);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            if ( UnityEngine_Object__op_Equality(v518, 0LL, 0LL) )
              return;
            if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
            }
            MyFsmP = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
            if ( !*(_QWORD *)v511 || !MyFsmP )
              goto LABEL_1024;
            v519 = QuestTree__CheckMapGimmickCond_22272832(
                     (QuestTree_o *)MyFsmP,
                     *(MapControl_MapGimmickInfo_o **)(*(_QWORD *)v511 + 104LL),
                     0LL);
            v498 = *(MapGimmickComponent_o **)v511;
            v520 = v519;
            v499 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
            v501 = v499;
            if ( v520 )
            {
              v500 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__29__;
LABEL_755:
              System_Action___ctor(v499, (Il2CppObject *)v471, *v500, 0LL);
              if ( !v498 )
                goto LABEL_1024;
              v521 = 3;
            }
            else
            {
              System_Action___ctor(
                v499,
                (Il2CppObject *)v471,
                Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__30__,
                0LL);
              if ( !v498 )
                goto LABEL_1024;
              v521 = 2;
            }
            v653 = v498;
            v654 = v501;
            goto LABEL_986;
          case 409:
            v418 = v23->fields.param;
            MyFsmP = sub_B706AC(char___TypeInfo, 1LL);
            if ( !MyFsmP )
              goto LABEL_1024;
            v7 = (const MethodInfo *)MyFsmP;
            if ( !*(_DWORD *)(MyFsmP + 24) )
              goto LABEL_1026;
            *(_WORD *)(MyFsmP + 32) = 44;
            if ( !v418 )
              goto LABEL_1024;
            MyFsmP = (__int64)System_String__Split(v418, (System_Char_array *)MyFsmP, 0LL);
            if ( !MyFsmP )
              goto LABEL_1024;
            v419 = *(_QWORD *)(MyFsmP + 24);
            v420 = MyFsmP;
            if ( v419 )
            {
              if ( !(_DWORD)v419 )
                goto LABEL_1026;
              v421 = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
              if ( *(int *)(v420 + 24) >= 2 )
              {
                v422 = System_Int32__Parse(*(System_String_o **)(v420 + 40), 0LL) > 0;
                goto LABEL_896;
              }
            }
            else
            {
              v421 = 0;
            }
            v422 = 0;
LABEL_896:
            MyFsmP = (__int64)*v14;
            if ( *v14 )
            {
              v614 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                       (QuestAfterAction_o *)MyFsmP,
                       2,
                       v421,
                       this,
                       (const MethodInfo_1D5B184 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              MyFsmP = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v614, 0LL, 0LL);
              if ( (MyFsmP & 1) != 0 )
                return;
              if ( v614 )
              {
                LOBYTE(v614->fields.mcTo.fields.y) = v422;
                BYTE1(v614->fields.mcTo.fields.y) = 0;
                MapGimmickComponent__SetDispAnim((MapGimmickComponent_o *)v614, 1, 0LL);
                v615 = v614->fields.mcAtlasP;
                if ( v615 )
                {
                  v615->fields.m_CachedPtr = 1;
                  v616 = this->klass;
                  this->fields.IsAnimDoing = 0;
                  v617 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))v616->vtable._11_get_CommandIndex.method)(
                           this,
                           v616->vtable._12_set_CommandIndex.methodPtr);
                  ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_CommandIndex.method)(
                    this,
                    (unsigned int)(v617 + 1),
                    this->klass->vtable._13_UpdateAnim.methodPtr);
                  goto LABEL_19;
                }
              }
            }
            goto LABEL_1024;
          default:
            if ( id != 500 )
              return;
            v324 = System_Int32__Parse(v23->fields.param, 0LL);
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            }
            if ( !byte_434DEF2 )
            {
              sub_B70694(&TerminalPramsManager_TypeInfo);
              byte_434DEF2 = 1;
            }
            v325 = TerminalPramsManager_TypeInfo;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v325 = TerminalPramsManager_TypeInfo;
            }
            v325->static_fields->_AfterActionFocusQuestId_k__BackingField = v324;
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            MyFsmP = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_QuestMaster___);
            if ( !MyFsmP )
              goto LABEL_1024;
            if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                    (DataMasterBase_WarMaster__WarEntity__int__o *)MyFsmP,
                    &entity,
                    v324,
                    (const MethodInfo_21C049C *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
              goto LABEL_389;
            MyFsmP = (__int64)entity;
            if ( !entity )
              goto LABEL_1024;
            v326 = *v14;
            MyFsmP = QuestEntity__getSpotId((QuestEntity_o *)entity, 0LL);
            if ( !v326 )
              goto LABEL_1024;
            v327 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                             v326,
                                             0,
                                             MyFsmP,
                                             this,
                                             (const MethodInfo_1D5B184 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            MyFsmP = UnityEngine_Object__op_Inequality(v327, 0LL, 0LL);
            if ( (MyFsmP & 1) == 0 )
              goto LABEL_389;
            if ( !v327 )
              goto LABEL_1024;
            SrcSpotBasePrefab__SelectSpot((SrcSpotBasePrefab_o *)v327, 0, 0LL);
            goto LABEL_389;
        }
      }
      v87 = v23->fields.param;
      MyFsmP = sub_B706AC(char___TypeInfo, 1LL);
      if ( !MyFsmP )
        goto LABEL_1024;
      v7 = (const MethodInfo *)MyFsmP;
      if ( !*(_DWORD *)(MyFsmP + 24) )
        goto LABEL_1026;
      *(_WORD *)(MyFsmP + 32) = 44;
      if ( !v87 )
        goto LABEL_1024;
      MyFsmP = (__int64)System_String__Split(v87, (System_Char_array *)MyFsmP, 0LL);
      if ( !MyFsmP )
        goto LABEL_1024;
      v88 = MyFsmP;
      if ( *(int *)(MyFsmP + 24) <= 4 )
        goto LABEL_389;
      v89 = System_Single__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
      if ( *(_DWORD *)(v88 + 24) <= 1u )
        goto LABEL_1026;
      v90 = v89;
      v91 = System_Single__Parse(*(System_String_o **)(v88 + 40), 0LL);
      if ( *(_DWORD *)(v88 + 24) <= 2u )
        goto LABEL_1026;
      v92 = v91;
      v93 = System_Single__Parse(*(System_String_o **)(v88 + 48), 0LL);
      if ( *(_DWORD *)(v88 + 24) <= 3u )
        goto LABEL_1026;
      v94 = v93;
      v95 = System_Single__Parse(*(System_String_o **)(v88 + 56), 0LL);
      if ( *(_DWORD *)(v88 + 24) <= 4u )
        goto LABEL_1026;
      v96 = v95;
      v97 = System_Int32__Parse(*(System_String_o **)(v88 + 64), 0LL);
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_434DEA1 )
      {
        sub_B70694(&TerminalSceneComponent_TypeInfo);
        byte_434DEA1 = 1;
      }
      MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v98 = **(_QWORD **)(MyFsmP + 184);
      if ( !v98 )
        goto LABEL_1024;
      MyFsmP = *(_QWORD *)(v98 + 256);
      if ( !MyFsmP )
        goto LABEL_1024;
      v690.fields.y = v92;
      v690.fields.z = v94;
      v99 = v96 * 0.001;
      v690.fields.x = v90;
      *(UnityEngine_Vector3_o *)&v101 = ScrTerminalMap__ConvertLocalToScreenPosition(
                                          (ScrTerminalMap_o *)MyFsmP,
                                          v690,
                                          0LL);
      v104 = v101;
      v105 = v102;
      v106 = v103;
      if ( v23->fields.id != 352 || *(int *)(v88 + 24) < 6 )
      {
        if ( !*v14 )
          goto LABEL_1024;
        mMapCamera = (*v14)->fields.mMapCamera;
        v108 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        System_Action___ctor(
          v108,
          (Il2CppObject *)v5,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__20__,
          0LL);
        if ( !mMapCamera )
          goto LABEL_1024;
        goto LABEL_128;
      }
      if ( !*v14 )
        goto LABEL_1024;
      v330 = (*v14)->fields.mMapCamera;
      *(_QWORD *)&v684.fields.value.fields.x = &v672;
      *(_QWORD *)&v684.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
      *(_QWORD *)&v672.fields.value.fields.x = 0LL;
      *(_QWORD *)&v672.fields.value.fields.z = 0LL;
      System_Nullable_Vector3____ctor(v684, *(UnityEngine_Vector3_o *)&v101, v100);
      if ( *(_DWORD *)(v88 + 24) <= 5u )
        goto LABEL_1026;
      v331 = System_Single__Parse(*(System_String_o **)(v88 + 72), 0LL);
      p_size = (System_Nullable_float__o)&size;
      size = 0LL;
      System_Nullable_float____ctor(p_size, v331, (const MethodInfo_2439C24 *)Method_System_Nullable_float___ctor__);
      v332 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(
        v332,
        (Il2CppObject *)v5,
        Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__19__,
        0LL);
      if ( !v330 )
        goto LABEL_1024;
LABEL_551:
      v689 = v672;
      v683 = size;
      v333 = v330;
      v334 = v99;
      v335 = v97;
      v336 = v332;
LABEL_1018:
      MapCamera__StartAutoWork(v333, v334, v689, v683, v335, v336, 0LL);
      return;
    }
    if ( id <= 113 )
    {
      switch ( id )
      {
        case 'd':
          v67 = sub_B70764(QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_1___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_1_o *)v67,
            0LL);
          if ( !v67 )
            goto LABEL_1022;
          *(_QWORD *)(v67 + 24) = v5;
          sub_B70630(
            (BattleServantConfConponent_o *)(v67 + 24),
            (System_Int32_array **)v5,
            v68,
            v69,
            v70,
            v71,
            v72,
            v73);
          v74 = *(_QWORD *)(v67 + 24);
          if ( !v74 )
            goto LABEL_1022;
          v75 = *(QuestAfterAction_o **)(v74 + 24);
          updated = System_Int32__Parse(v23->fields.param, 0LL);
          if ( !v75 )
            goto LABEL_1022;
          v76 = (System_Int32_array **)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                         v75,
                                         0,
                                         updated,
                                         this,
                                         (const MethodInfo_1D5B184 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v67 + 16) = v76;
          sub_B70630((BattleServantConfConponent_o *)(v67 + 16), v76, v77, v78, v79, v80, v81, v82);
          v83 = *(UnityEngine_Object_o **)(v67 + 16);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v83, 0LL, 0LL) )
            return;
          v84 = *(SrcSpotBasePrefab_o **)(v67 + 16);
          v85 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
          System_Action___ctor(
            v85,
            (Il2CppObject *)v67,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__,
            0LL);
          if ( !v84 )
            goto LABEL_1022;
          v86 = 2;
          goto LABEL_490;
        case 'e':
          v295 = sub_B70764(QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_2___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_2_o *)v295,
            0LL);
          if ( !v295 )
            goto LABEL_1022;
          *(_QWORD *)(v295 + 24) = v5;
          sub_B70630(
            (BattleServantConfConponent_o *)(v295 + 24),
            (System_Int32_array **)v5,
            v296,
            v297,
            v298,
            v299,
            v300,
            v301);
          v302 = *(_QWORD *)(v295 + 24);
          if ( !v302 )
            goto LABEL_1022;
          v303 = *(QuestAfterAction_o **)(v302 + 24);
          updated = System_Int32__Parse(v23->fields.param, 0LL);
          if ( !v303 )
            goto LABEL_1022;
          v304 = (System_Int32_array **)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                          v303,
                                          0,
                                          updated,
                                          this,
                                          (const MethodInfo_1D5B184 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v295 + 16) = v304;
          sub_B70630((BattleServantConfConponent_o *)(v295 + 16), v304, v305, v306, v307, v308, v309, v310);
          v311 = *(UnityEngine_Object_o **)(v295 + 16);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v311, 0LL, 0LL) )
            return;
          v84 = *(SrcSpotBasePrefab_o **)(v295 + 16);
          v85 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
          System_Action___ctor(
            v85,
            (Il2CppObject *)v295,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__,
            0LL);
          if ( !v84 )
            goto LABEL_1022;
          v86 = 3;
LABEL_490:
          SrcSpotBasePrefab__SetState(v84, v86, v85, 0LL);
          return;
        case 'f':
          v267 = sub_B70764(QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_3___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_3_o *)v267,
            0LL);
          if ( !v267 )
            goto LABEL_1022;
          *(_QWORD *)(v267 + 24) = v5;
          v274 = v267 + 24;
          sub_B70630(
            (BattleServantConfConponent_o *)(v267 + 24),
            (System_Int32_array **)v5,
            v268,
            v269,
            v270,
            v271,
            v272,
            v273);
          if ( !*(_QWORD *)(v267 + 24) )
            goto LABEL_1022;
          v275 = *(QuestAfterAction_o **)(*(_QWORD *)(v267 + 24) + 24LL);
          updated = System_Int32__Parse(v23->fields.param, 0LL);
          if ( !v275 )
            goto LABEL_1022;
          v276 = (System_Int32_array **)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                          v275,
                                          0,
                                          updated,
                                          this,
                                          (const MethodInfo_1D5B184 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          *(_QWORD *)(v267 + 16) = v276;
          v277 = (System_Int32_array ***)(v267 + 16);
          sub_B70630((BattleServantConfConponent_o *)(v267 + 16), v276, v278, v279, v280, v281, v282, v283);
          v284 = *(UnityEngine_Object_o **)(v267 + 16);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v284, 0LL, 0LL) )
            return;
          v285 = *(SrcSpotBasePrefab_o **)(v267 + 16);
          v286 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
          System_Action___ctor(
            v286,
            (Il2CppObject *)v267,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__,
            0LL);
          if ( !v285 )
            goto LABEL_1022;
          SrcSpotBasePrefab__SetState(v285, 4, v286, 0LL);
          if ( !*(_QWORD *)v274 )
            goto LABEL_1022;
          updated = *(_QWORD *)(*(_QWORD *)v274 + 24LL);
          if ( !updated )
            goto LABEL_1022;
          v293 = *v277;
          *(_QWORD *)(updated + 168) = *v277;
          v294 = (BattleServantConfConponent_o *)(updated + 168);
          goto LABEL_513;
        case 'g':
          v317 = v23->fields.param;
          updated = sub_B706AC(char___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_1022;
          v7 = (const MethodInfo *)updated;
          if ( !*(_DWORD *)(updated + 24) )
            goto LABEL_1023;
          *(_WORD *)(updated + 32) = 44;
          if ( !v317 )
            goto LABEL_1022;
          updated = (__int64)System_String__Split(v317, (System_Char_array *)updated, 0LL);
          if ( !updated )
            goto LABEL_1022;
          v318 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_389;
          v319 = *v14;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v319 )
            goto LABEL_1022;
          v320 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                   v319,
                   0,
                   updated,
                   this,
                   (const MethodInfo_1D5B184 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v320, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v318 + 24) <= 1u )
            goto LABEL_1023;
          updated = System_Int32__Parse(*(System_String_o **)(v318 + 40), 0LL);
          if ( !v320 )
            goto LABEL_1022;
          v320[1].fields.miLineH = updated;
          v321 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
          System_Action___ctor(v321, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          SrcSpotBasePrefab__SetState((SrcSpotBasePrefab_o *)v320, 5, v321, 0LL);
          updated = (__int64)*v14;
          if ( !*v14 )
            goto LABEL_1022;
          *(_QWORD *)(updated + 168) = v320;
          v294 = (BattleServantConfConponent_o *)(updated + 168);
          v293 = (System_Int32_array **)v320;
LABEL_513:
          sub_B70630(v294, v293, v287, v288, v289, v290, v291, v292);
          return;
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
          return;
        case 'n':
          v312 = *v14;
          updated = System_Int32__Parse(v23->fields.param, 0LL);
          if ( !v312 )
            goto LABEL_1022;
          v313 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                           v312,
                                           0,
                                           updated,
                                           this,
                                           (const MethodInfo_1D5B184 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          updated = UnityEngine_Object__op_Equality(v313, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v313 )
            goto LABEL_1022;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v313, 0, 0LL);
          monitor = v313[9].monitor;
          if ( !monitor )
            goto LABEL_1022;
          monitor[5] = 0;
          v315 = (SrcSpotBasePrefab_o *)v313;
          v316 = 0;
          goto LABEL_523;
        case 'o':
          v322 = *v14;
          updated = System_Int32__Parse(v23->fields.param, 0LL);
          if ( !v322 )
            goto LABEL_1022;
          v265 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                           v322,
                                           0,
                                           updated,
                                           this,
                                           (const MethodInfo_1D5B184 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          updated = UnityEngine_Object__op_Equality(v265, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v265 )
            goto LABEL_1022;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v265, 1, 0LL);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v265, 0, 0LL);
          v323 = v265[9].monitor;
          if ( !v323 )
            goto LABEL_1022;
          v323[5] = 2;
          goto LABEL_522;
        case 'p':
          v264 = *v14;
          updated = System_Int32__Parse(v23->fields.param, 0LL);
          if ( !v264 )
            goto LABEL_1022;
          v265 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                           v264,
                                           0,
                                           updated,
                                           this,
                                           (const MethodInfo_1D5B184 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          updated = UnityEngine_Object__op_Equality(v265, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v265 )
            goto LABEL_1022;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v265, 1, 0LL);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v265, 1, 0LL);
          v266 = v265[9].monitor;
          if ( !v266 )
            goto LABEL_1022;
          v266[5] = 1;
LABEL_522:
          v316 = 1;
          v315 = (SrcSpotBasePrefab_o *)v265;
LABEL_523:
          SrcSpotBasePrefab__SetTouchType(v315, v316, 0LL);
          goto LABEL_18;
        case 'q':
          v260 = v23->fields.param;
          updated = sub_B706AC(char___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_1022;
          v7 = (const MethodInfo *)updated;
          if ( !*(_DWORD *)(updated + 24) )
            goto LABEL_1023;
          *(_WORD *)(updated + 32) = 44;
          if ( !v260 )
            goto LABEL_1022;
          updated = (__int64)System_String__Split(v260, (System_Char_array *)updated, 0LL);
          if ( !updated )
            goto LABEL_1022;
          v261 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_389;
          v262 = *v14;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v262 )
            goto LABEL_1022;
          v263 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                   v262,
                   0,
                   updated,
                   this,
                   (const MethodInfo_1D5B184 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v263, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v261 + 24) <= 1u )
            goto LABEL_1023;
          updated = System_Int32__Parse(*(System_String_o **)(v261 + 40), 0LL);
          if ( !v263 )
            goto LABEL_1022;
          v263[1].fields.miLineH = updated;
          SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)v263, 1, 0LL);
          break;
        default:
          if ( id )
            return;
          goto LABEL_18;
      }
      goto LABEL_18;
    }
    switch ( id )
    {
      case 300:
      case 305:
        v43 = v23->fields.param;
        updated = sub_B706AC(char___TypeInfo, 1LL);
        if ( !updated )
          goto LABEL_1022;
        v7 = (const MethodInfo *)updated;
        if ( !*(_DWORD *)(updated + 24) )
          goto LABEL_1023;
        *(_WORD *)(updated + 32) = 44;
        if ( !v43 )
          goto LABEL_1022;
        updated = (__int64)System_String__Split(v43, (System_Char_array *)updated, 0LL);
        if ( !updated )
          goto LABEL_1022;
        v44 = *(_QWORD *)(updated + 24);
        v45 = updated;
        if ( (int)v44 <= 0 )
          goto LABEL_389;
        if ( (int)v44 > 2 )
        {
          v537 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v44 = *(_QWORD *)(v45 + 24);
          v46 = v537 * 0.001;
        }
        else
        {
          v46 = 0.5;
        }
        v676 = v46;
        if ( (int)v44 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v45 + 40), 0LL);
          v527 = updated;
          if ( !(unsigned int)*(_QWORD *)(v45 + 24) )
            goto LABEL_1023;
        }
        else
        {
          v527 = 15;
          if ( !(_DWORD)v44 )
            goto LABEL_1023;
        }
        v539 = *v14;
        updated = System_Int32__Parse(*(System_String_o **)(v45 + 32), 0LL);
        if ( !v539 )
          goto LABEL_1022;
        MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v539, 0, updated, this, 0LL);
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
          if ( !byte_434DEA1 )
          {
            sub_B70694(&TerminalSceneComponent_TypeInfo);
            byte_434DEA1 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v544 = **(_QWORD **)(updated + 184);
          if ( !v544 )
            goto LABEL_1022;
          updated = *(_QWORD *)(v544 + 256);
          if ( !updated )
            goto LABEL_1022;
          v696.fields.x = x;
          v696.fields.y = y;
          v696.fields.z = z;
          v697 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v696, 0LL);
          x = v697.fields.x;
          y = v697.fields.y;
          z = v697.fields.z;
        }
        if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0LL);
        if ( (updated & 1) == 0 )
        {
          if ( !*(_DWORD *)(v45 + 24) )
            goto LABEL_1023;
          v546 = *(System_String_o **)(v45 + 32);
          if ( v546 )
          {
            updated = System_String__op_Equality(
                        *(System_String_o **)(v45 + 32),
                        (System_String_o *)StringLiteral_1120/*"10703"*/,
                        0LL);
            if ( (updated & 1) != 0 )
            {
              y = y + -50.0;
            }
            else
            {
              updated = System_String__op_Equality(v546, (System_String_o *)StringLiteral_1182/*"30101"*/, 0LL);
              if ( (updated & 1) != 0 )
                y = y + -50.0;
            }
          }
        }
        if ( v23->fields.id != 305 || *(int *)(v45 + 24) < 4 )
        {
          if ( !*v14 )
            goto LABEL_1022;
          v658 = (*v14)->fields.mMapCamera;
          v536 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
          System_Action___ctor(
            v536,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__,
            0LL);
          if ( !v658 )
            goto LABEL_1022;
          v113 = v676;
          v109 = v658;
          v110 = x;
          v111 = y;
          v112 = z;
LABEL_998:
          v114 = v527;
LABEL_1011:
          v115 = v536;
          goto LABEL_1012;
        }
        if ( !*v14 )
          goto LABEL_1022;
        v659 = (*v14)->fields.mMapCamera;
        *(_QWORD *)&v686.fields.value.fields.x = &v672;
        v701.fields.x = x;
        v701.fields.y = y;
        *(_QWORD *)&v686.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
        v701.fields.z = z;
        v672 = (System_Nullable_Vector3__o)0LL;
        System_Nullable_Vector3____ctor(v686, v701, v545);
        if ( *(_DWORD *)(v45 + 24) <= 3u )
          goto LABEL_1023;
        v660 = System_Single__Parse(*(System_String_o **)(v45 + 56), 0LL);
        v680 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v680, v660, (const MethodInfo_2439C24 *)Method_System_Nullable_float___ctor__);
        v657 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        System_Action___ctor(
          v657,
          (Il2CppObject *)v5,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__,
          0LL);
        if ( !v659 )
          goto LABEL_1022;
        v689 = v672;
        v683 = size;
        v334 = v676;
        v333 = v659;
        break;
      case 301:
      case 306:
        v250 = v23->fields.param;
        updated = sub_B706AC(char___TypeInfo, 1LL);
        if ( !updated )
          goto LABEL_1022;
        v7 = (const MethodInfo *)updated;
        if ( !*(_DWORD *)(updated + 24) )
          goto LABEL_1023;
        *(_WORD *)(updated + 32) = 44;
        if ( !v250 )
          goto LABEL_1022;
        updated = (__int64)System_String__Split(v250, (System_Char_array *)updated, 0LL);
        if ( !updated )
          goto LABEL_1022;
        v251 = *(_QWORD *)(updated + 24);
        v252 = updated;
        if ( (int)v251 <= 0 )
          goto LABEL_389;
        if ( (int)v251 > 2 )
        {
          v538 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v251 = *(_QWORD *)(v252 + 24);
          v253 = v538 * 0.001;
        }
        else
        {
          v253 = 0.5;
        }
        v676 = v253;
        if ( (int)v251 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v252 + 40), 0LL);
          v251 = *(_QWORD *)(v252 + 24);
        }
        else
        {
          updated = 15LL;
        }
        easeType = updated;
        if ( !(_DWORD)v251 )
          goto LABEL_1023;
        v547 = *v14;
        updated = System_Int32__Parse(*(System_String_o **)(v252 + 32), 0LL);
        if ( !v547 )
          goto LABEL_1022;
        v548 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v547, 1, updated, this, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        updated = UnityEngine_Object__op_Equality(v548, 0LL, 0LL);
        if ( (updated & 1) != 0 )
          return;
        if ( this->fields.IsMapModel )
        {
          if ( !v548 )
            goto LABEL_1022;
          updated = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               (UnityEngine_GameObject_o *)v548,
                               (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
          if ( !updated )
            goto LABEL_1022;
          Position = GameObjectExtensions__GetPosition((UnityEngine_GameObject_o *)*(_QWORD *)(updated + 24), 0LL);
          v549 = Position.fields.x;
          v550 = Position.fields.y;
          v551 = Position.fields.z;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_434DEA1 )
          {
            sub_B70694(&TerminalSceneComponent_TypeInfo);
            byte_434DEA1 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v552 = **(_QWORD **)(updated + 184);
          if ( !v552 )
            goto LABEL_1022;
          updated = *(_QWORD *)(v552 + 256);
          if ( !updated )
            goto LABEL_1022;
          v699.fields.x = v549;
          v699.fields.y = v550;
          v699.fields.z = v551;
          *(UnityEngine_Vector3_o *)&v553 = ScrTerminalMap__ConvertWorldToScreenPosition(
                                              (ScrTerminalMap_o *)updated,
                                              v699,
                                              0LL);
        }
        else
        {
          *(UnityEngine_Vector3_o *)&v553 = GameObjectExtensions__GetLocalPosition(
                                              (UnityEngine_GameObject_o *)v548,
                                              0LL);
        }
        v622 = v553;
        v623 = v554;
        v624 = v555;
        if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0LL);
        if ( (updated & 1) != 0 )
          goto LABEL_1006;
        if ( !*(_DWORD *)(v252 + 24) )
          goto LABEL_1023;
        v626 = *(System_String_o **)(v252 + 32);
        if ( v626 )
        {
          updated = System_String__op_Equality(
                      *(System_String_o **)(v252 + 32),
                      (System_String_o *)StringLiteral_1120/*"10703"*/,
                      0LL);
          if ( (updated & 1) != 0 )
          {
            v623 = v623 + -95.0;
          }
          else
          {
            updated = System_String__op_Equality(v626, (System_String_o *)StringLiteral_1183/*"30102"*/, 0LL);
            if ( (updated & 1) != 0 )
              v623 = v623 + 45.0;
          }
        }
LABEL_1006:
        if ( v23->fields.id != 306 || *(int *)(v252 + 24) < 4 )
        {
          if ( !*v14 )
            goto LABEL_1022;
          v661 = (*v14)->fields.mMapCamera;
          v536 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
          System_Action___ctor(
            v536,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__,
            0LL);
          if ( !v661 )
            goto LABEL_1022;
          v113 = v676;
          v114 = easeType;
          v109 = v661;
          v110 = v622;
          v111 = v623;
          v112 = v624;
          goto LABEL_1011;
        }
        if ( !*v14 )
          goto LABEL_1022;
        v662 = (*v14)->fields.mMapCamera;
        *(_QWORD *)&v687.fields.value.fields.x = &v672;
        v702.fields.x = v622;
        v702.fields.y = v623;
        *(_QWORD *)&v687.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
        v702.fields.z = v624;
        v672 = (System_Nullable_Vector3__o)0LL;
        System_Nullable_Vector3____ctor(v687, v702, v625);
        if ( *(_DWORD *)(v252 + 24) <= 3u )
          goto LABEL_1023;
        v663 = System_Single__Parse(*(System_String_o **)(v252 + 56), 0LL);
        v681 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v681, v663, (const MethodInfo_2439C24 *)Method_System_Nullable_float___ctor__);
        v657 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        System_Action___ctor(
          v657,
          (Il2CppObject *)v5,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__,
          0LL);
        if ( !v662 )
          goto LABEL_1022;
        v689 = v672;
        v683 = size;
        v334 = v676;
        v335 = easeType;
        v333 = v662;
        goto LABEL_1017;
      case 302:
      case 307:
        v234 = v23->fields.param;
        updated = sub_B706AC(char___TypeInfo, 1LL);
        if ( !updated )
          goto LABEL_1022;
        v7 = (const MethodInfo *)updated;
        if ( !*(_DWORD *)(updated + 24) )
          goto LABEL_1023;
        *(_WORD *)(updated + 32) = 44;
        if ( !v234 )
          goto LABEL_1022;
        updated = (__int64)System_String__Split(v234, (System_Char_array *)updated, 0LL);
        if ( !updated )
          goto LABEL_1022;
        v235 = *(_QWORD *)(updated + 24);
        v236 = updated;
        if ( (int)v235 <= 0 )
          goto LABEL_389;
        if ( (int)v235 > 2 )
        {
          v526 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v235 = *(_QWORD *)(v236 + 24);
          v237 = v526 * 0.001;
        }
        else
        {
          v237 = 0.5;
        }
        if ( (int)v235 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v236 + 40), 0LL);
          v527 = updated;
          if ( !(unsigned int)*(_QWORD *)(v236 + 24) )
            goto LABEL_1023;
        }
        else
        {
          v527 = 15;
          if ( !(_DWORD)v235 )
            goto LABEL_1023;
        }
        v528 = *v14;
        updated = System_Int32__Parse(*(System_String_o **)(v236 + 32), 0LL);
        if ( !v528 )
          goto LABEL_1022;
        v529 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v528, 2, updated, this, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(v529, 0LL, 0LL) )
          return;
        v692 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v529, 0LL);
        v531 = v692.fields.x;
        v532 = v692.fields.y;
        v533 = v692.fields.z;
        if ( this->fields.IsMapModel )
        {
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_434DEA1 )
          {
            sub_B70694(&TerminalSceneComponent_TypeInfo);
            byte_434DEA1 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v534 = **(_QWORD **)(updated + 184);
          if ( !v534 )
            goto LABEL_1022;
          updated = *(_QWORD *)(v534 + 256);
          if ( !updated )
            goto LABEL_1022;
          v693.fields.x = v531;
          v693.fields.y = v532;
          v693.fields.z = v533;
          v694 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v693, 0LL);
          v531 = v694.fields.x;
          v532 = v694.fields.y;
          v533 = v694.fields.z;
        }
        if ( v23->fields.id != 307 || *(int *)(v236 + 24) < 4 )
        {
          if ( !*v14 )
            goto LABEL_1022;
          v535 = (*v14)->fields.mMapCamera;
          v536 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
          System_Action___ctor(
            v536,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__14__,
            0LL);
          if ( !v535 )
            goto LABEL_1022;
          v109 = v535;
          v110 = v531;
          v111 = v532;
          v112 = v533;
          v113 = v237;
          goto LABEL_998;
        }
        if ( !*v14 )
          goto LABEL_1022;
        v655 = (*v14)->fields.mMapCamera;
        *(_QWORD *)&v685.fields.value.fields.x = &v672;
        v700.fields.x = v531;
        v700.fields.y = v532;
        *(_QWORD *)&v685.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
        v700.fields.z = v533;
        v672 = (System_Nullable_Vector3__o)0LL;
        System_Nullable_Vector3____ctor(v685, v700, v530);
        if ( *(_DWORD *)(v236 + 24) <= 3u )
          goto LABEL_1023;
        v656 = System_Single__Parse(*(System_String_o **)(v236 + 56), 0LL);
        v679 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v679, v656, (const MethodInfo_2439C24 *)Method_System_Nullable_float___ctor__);
        v657 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        System_Action___ctor(
          v657,
          (Il2CppObject *)v5,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__13__,
          0LL);
        if ( !v655 )
          goto LABEL_1022;
        v689 = v672;
        v683 = size;
        v333 = v655;
        v334 = v237;
        break;
      case 303:
      case 308:
        v238 = v23->fields.param;
        updated = sub_B706AC(char___TypeInfo, 1LL);
        if ( !updated )
          goto LABEL_1022;
        v7 = (const MethodInfo *)updated;
        if ( !*(_DWORD *)(updated + 24) )
          goto LABEL_1023;
        *(_WORD *)(updated + 32) = 44;
        if ( !v238 )
          goto LABEL_1022;
        updated = (__int64)System_String__Split(v238, (System_Char_array *)updated, 0LL);
        if ( !updated )
          goto LABEL_1022;
        v239 = updated;
        if ( *(int *)(updated + 24) < 4 )
          goto LABEL_389;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_435189A )
        {
          sub_B70694(&TerminalPramsManager_TypeInfo);
          byte_435189A = 1;
        }
        updated = (__int64)TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          updated = (__int64)TerminalPramsManager_TypeInfo;
        }
        if ( *(_BYTE *)(*(_QWORD *)(updated + 184) + 104LL) )
          goto LABEL_389;
        if ( *(_DWORD *)(v239 + 24) <= 2u )
          goto LABEL_1023;
        v240 = System_Single__Parse(*(System_String_o **)(v239 + 48), 0LL) * 0.001;
        v99 = v240 >= 0.0 ? v240 : 0.5;
        if ( *(_DWORD *)(v239 + 24) <= 3u )
          goto LABEL_1023;
        v97 = System_Int32__Parse(*(System_String_o **)(v239 + 56), 0LL);
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_434DEA1 )
        {
          sub_B70694(&TerminalSceneComponent_TypeInfo);
          byte_434DEA1 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v241 = **(_QWORD **)(updated + 184);
        if ( !v241 )
          goto LABEL_1022;
        if ( !*(_DWORD *)(v239 + 24) )
          goto LABEL_1023;
        v242 = *(ScrTerminalMap_o **)(v241 + 256);
        v243 = System_Single__Parse(*(System_String_o **)(v239 + 32), 0LL);
        if ( *(_DWORD *)(v239 + 24) <= 1u )
          goto LABEL_1023;
        v244 = v243;
        v245 = System_Single__Parse(*(System_String_o **)(v239 + 40), 0LL);
        if ( !v242 )
          goto LABEL_1022;
        *(UnityEngine_Vector3_o *)&v247 = ScrTerminalMap__LocalPosFromCoord(v242, v244, v245, 0.0, 0.0, 0LL);
        v104 = v247;
        v105 = v248;
        v106 = v249;
        if ( v23->fields.id != 308 || *(int *)(v239 + 24) < 5 )
        {
          if ( !*v14 )
            goto LABEL_1022;
          mMapCamera = (*v14)->fields.mMapCamera;
          v108 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
          System_Action___ctor(
            v108,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__16__,
            0LL);
          if ( !mMapCamera )
            goto LABEL_1022;
LABEL_128:
          v109 = mMapCamera;
          v110 = v104;
          v111 = v105;
          v112 = v106;
          v113 = v99;
          v114 = v97;
          v115 = v108;
LABEL_1012:
          MapCamera__StartAutoMove(v109, *(UnityEngine_Vector3_o *)&v110, v113, v114, v115, 0LL);
          return;
        }
        if ( !*v14 )
          goto LABEL_1022;
        v330 = (*v14)->fields.mMapCamera;
        *(_QWORD *)&v688.fields.value.fields.x = &v672;
        *(_QWORD *)&v688.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
        v672 = (System_Nullable_Vector3__o)0LL;
        System_Nullable_Vector3____ctor(v688, *(UnityEngine_Vector3_o *)&v247, v246);
        if ( *(_DWORD *)(v239 + 24) <= 4u )
          goto LABEL_1023;
        v664 = System_Single__Parse(*(System_String_o **)(v239 + 64), 0LL);
        v682 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v682, v664, (const MethodInfo_2439C24 *)Method_System_Nullable_float___ctor__);
        v332 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        System_Action___ctor(
          v332,
          (Il2CppObject *)v5,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__15__,
          0LL);
        if ( !v330 )
          goto LABEL_1022;
        goto LABEL_551;
      case 304:
        v382 = v23->fields.param;
        updated = sub_B706AC(char___TypeInfo, 1LL);
        if ( !updated )
          goto LABEL_1022;
        v7 = (const MethodInfo *)updated;
        if ( !*(_DWORD *)(updated + 24) )
          goto LABEL_1023;
        *(_WORD *)(updated + 32) = 44;
        if ( !v382 )
          goto LABEL_1022;
        updated = (__int64)System_String__Split(v382, (System_Char_array *)updated, 0LL);
        if ( !updated )
          goto LABEL_1022;
        v383 = *(_DWORD *)(updated + 24);
        v384 = updated;
        if ( v383 <= 1 )
          goto LABEL_389;
        v385 = System_Single__Parse(*(System_String_o **)(updated + 32), 0LL);
        if ( *(_DWORD *)(v384 + 24) <= 1u )
          goto LABEL_1023;
        v386 = v385;
        v387 = System_Single__Parse(*(System_String_o **)(v384 + 40), 0LL);
        if ( !*v14 )
          goto LABEL_1022;
        v388 = (*v14)->fields.mMapCamera;
        v389 = v387 * 0.001;
        if ( v389 >= 0.0 )
          v390 = v389;
        else
          v390 = 0.5;
        if ( v383 < 3 )
        {
          v391 = 5;
        }
        else
        {
          if ( *(_DWORD *)(v384 + 24) <= 2u )
            goto LABEL_1023;
          v391 = System_Int32__Parse(*(System_String_o **)(v384 + 48), 0LL);
        }
        v621 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
        System_Action___ctor(
          v621,
          (Il2CppObject *)v5,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__17__,
          0LL);
        if ( v388 )
        {
          MapCamera__StartAutoZoom(v388, v386, v390, v391, v621, 0LL);
          return;
        }
        goto LABEL_1024;
      default:
        switch ( id )
        {
          case 200:
            if ( this->fields.IsMapModel )
            {
              v116 = sub_B70764(QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo);
              QuestAfterAction_StateMain___c__DisplayClass16_4___ctor(
                (QuestAfterAction_StateMain___c__DisplayClass16_4_o *)v116,
                0LL);
              if ( !v116 )
                goto LABEL_1022;
              *(_QWORD *)(v116 + 24) = v5;
              sub_B70630(
                (BattleServantConfConponent_o *)(v116 + 24),
                (System_Int32_array **)v5,
                v117,
                v118,
                v119,
                v120,
                v121,
                v122);
              v123 = *(_QWORD *)(v116 + 24);
              if ( !v123 )
                goto LABEL_1022;
              v124 = *(QuestAfterAction_o **)(v123 + 24);
              updated = System_Int32__Parse(v23->fields.param, 0LL);
              if ( !v124 )
                goto LABEL_1022;
              v125 = (System_Int32_array **)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                              v124,
                                              1,
                                              updated,
                                              this,
                                              (const MethodInfo_1D5B184 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v116 + 16) = v125;
              sub_B70630((BattleServantConfConponent_o *)(v116 + 16), v125, v126, v127, v128, v129, v130, v131);
              v132 = *(UnityEngine_Object_o **)(v116 + 16);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Equality(v132, 0LL, 0LL) )
              {
                v133 = *(ModelLineComponent_o **)(v116 + 16);
                v134 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
                System_Action___ctor(
                  v134,
                  (Il2CppObject *)v116,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__,
                  0LL);
                if ( !v133 )
                  goto LABEL_1022;
                v135 = 2;
                goto LABEL_590;
              }
            }
            else
            {
              v578 = sub_B70764(QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo);
              QuestAfterAction_StateMain___c__DisplayClass16_5___ctor(
                (QuestAfterAction_StateMain___c__DisplayClass16_5_o *)v578,
                0LL);
              if ( !v578 )
                goto LABEL_1022;
              *(_QWORD *)(v578 + 24) = v5;
              sub_B70630(
                (BattleServantConfConponent_o *)(v578 + 24),
                (System_Int32_array **)v5,
                v579,
                v580,
                v581,
                v582,
                v583,
                v584);
              v585 = *(_QWORD *)(v578 + 24);
              if ( !v585 )
                goto LABEL_1022;
              v586 = *(QuestAfterAction_o **)(v585 + 24);
              updated = System_Int32__Parse(v23->fields.param, 0LL);
              if ( !v586 )
                goto LABEL_1022;
              v587 = (System_Int32_array **)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                              v586,
                                              1,
                                              updated,
                                              this,
                                              (const MethodInfo_1D5B184 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v578 + 16) = v587;
              sub_B70630((BattleServantConfConponent_o *)(v578 + 16), v587, v588, v589, v590, v591, v592, v593);
              v594 = *(UnityEngine_Object_o **)(v578 + 16);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Equality(v594, 0LL, 0LL) )
              {
                v575 = *(srcLineSprite_o **)(v578 + 16);
                v576 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
                System_Action___ctor(
                  v576,
                  (Il2CppObject *)v578,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__,
                  0LL);
                if ( !v575 )
                  goto LABEL_1022;
                v577 = 2;
                goto LABEL_878;
              }
            }
            return;
          case 201:
            if ( this->fields.IsMapModel )
            {
              v362 = sub_B70764(QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo);
              QuestAfterAction_StateMain___c__DisplayClass16_6___ctor(
                (QuestAfterAction_StateMain___c__DisplayClass16_6_o *)v362,
                0LL);
              if ( !v362 )
                goto LABEL_1022;
              *(_QWORD *)(v362 + 24) = v5;
              sub_B70630(
                (BattleServantConfConponent_o *)(v362 + 24),
                (System_Int32_array **)v5,
                v363,
                v364,
                v365,
                v366,
                v367,
                v368);
              v369 = *(_QWORD *)(v362 + 24);
              if ( !v369 )
                goto LABEL_1022;
              v370 = *(QuestAfterAction_o **)(v369 + 24);
              updated = System_Int32__Parse(v23->fields.param, 0LL);
              if ( !v370 )
                goto LABEL_1022;
              v371 = (System_Int32_array **)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                              v370,
                                              1,
                                              updated,
                                              this,
                                              (const MethodInfo_1D5B184 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v362 + 16) = v371;
              sub_B70630((BattleServantConfConponent_o *)(v362 + 16), v371, v372, v373, v374, v375, v376, v377);
              v378 = *(UnityEngine_Object_o **)(v362 + 16);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Equality(v378, 0LL, 0LL) )
              {
                v133 = *(ModelLineComponent_o **)(v362 + 16);
                v134 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
                System_Action___ctor(
                  v134,
                  (Il2CppObject *)v362,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__,
                  0LL);
                if ( !v133 )
                  goto LABEL_1022;
                v135 = 3;
                goto LABEL_590;
              }
            }
            else
            {
              v595 = sub_B70764(QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo);
              QuestAfterAction_StateMain___c__DisplayClass16_7___ctor(
                (QuestAfterAction_StateMain___c__DisplayClass16_7_o *)v595,
                0LL);
              if ( !v595 )
                goto LABEL_1022;
              *(_QWORD *)(v595 + 24) = v5;
              sub_B70630(
                (BattleServantConfConponent_o *)(v595 + 24),
                (System_Int32_array **)v5,
                v596,
                v597,
                v598,
                v599,
                v600,
                v601);
              v602 = *(_QWORD *)(v595 + 24);
              if ( !v602 )
                goto LABEL_1022;
              v603 = *(QuestAfterAction_o **)(v602 + 24);
              updated = System_Int32__Parse(v23->fields.param, 0LL);
              if ( !v603 )
                goto LABEL_1022;
              v604 = (System_Int32_array **)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                              v603,
                                              1,
                                              updated,
                                              this,
                                              (const MethodInfo_1D5B184 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v595 + 16) = v604;
              sub_B70630((BattleServantConfConponent_o *)(v595 + 16), v604, v605, v606, v607, v608, v609, v610);
              v611 = *(UnityEngine_Object_o **)(v595 + 16);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Equality(v611, 0LL, 0LL) )
              {
                v575 = *(srcLineSprite_o **)(v595 + 16);
                v576 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
                System_Action___ctor(
                  v576,
                  (Il2CppObject *)v595,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__,
                  0LL);
                if ( !v575 )
                  goto LABEL_1022;
                v577 = 3;
                goto LABEL_878;
              }
            }
            return;
          case 202:
            if ( this->fields.IsMapModel )
            {
              v341 = sub_B70764(QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo);
              QuestAfterAction_StateMain___c__DisplayClass16_8___ctor(
                (QuestAfterAction_StateMain___c__DisplayClass16_8_o *)v341,
                0LL);
              if ( !v341 )
                goto LABEL_1022;
              *(_QWORD *)(v341 + 24) = v5;
              sub_B70630(
                (BattleServantConfConponent_o *)(v341 + 24),
                (System_Int32_array **)v5,
                v342,
                v343,
                v344,
                v345,
                v346,
                v347);
              v348 = *(_QWORD *)(v341 + 24);
              if ( !v348 )
                goto LABEL_1022;
              v349 = *(QuestAfterAction_o **)(v348 + 24);
              updated = System_Int32__Parse(v23->fields.param, 0LL);
              if ( !v349 )
                goto LABEL_1022;
              v350 = (System_Int32_array **)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                              v349,
                                              1,
                                              updated,
                                              this,
                                              (const MethodInfo_1D5B184 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              *(_QWORD *)(v341 + 16) = v350;
              sub_B70630((BattleServantConfConponent_o *)(v341 + 16), v350, v351, v352, v353, v354, v355, v356);
              v357 = *(UnityEngine_Object_o **)(v341 + 16);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Equality(v357, 0LL, 0LL) )
              {
                v133 = *(ModelLineComponent_o **)(v341 + 16);
                v134 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
                System_Action___ctor(
                  v134,
                  (Il2CppObject *)v341,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__,
                  0LL);
                if ( !v133 )
                  goto LABEL_1022;
                v135 = 4;
LABEL_590:
                ModelLineComponent__SetState(v133, v135, v134, 0LL);
              }
            }
            else
            {
              v558 = sub_B70764(QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo);
              QuestAfterAction_StateMain___c__DisplayClass16_9___ctor(
                (QuestAfterAction_StateMain___c__DisplayClass16_9_o *)v558,
                0LL);
              if ( !v558 )
                goto LABEL_1022;
              *(_QWORD *)(v558 + 24) = v5;
              sub_B70630(
                (BattleServantConfConponent_o *)(v558 + 24),
                (System_Int32_array **)v5,
                v559,
                v560,
                v561,
                v562,
                v563,
                v564);
              v565 = *(_QWORD *)(v558 + 24);
              if ( !v565 )
                goto LABEL_1022;
              v566 = *(QuestAfterAction_o **)(v565 + 24);
              updated = System_Int32__Parse(v23->fields.param, 0LL);
              if ( !v566 )
                goto LABEL_1022;
              v567 = (System_Int32_array **)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                              v566,
                                              1,
                                              updated,
                                              this,
                                              (const MethodInfo_1D5B184 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              *(_QWORD *)(v558 + 16) = v567;
              sub_B70630((BattleServantConfConponent_o *)(v558 + 16), v567, v568, v569, v570, v571, v572, v573);
              v574 = *(UnityEngine_Object_o **)(v558 + 16);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( !UnityEngine_Object__op_Equality(v574, 0LL, 0LL) )
              {
                v575 = *(srcLineSprite_o **)(v558 + 16);
                v576 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
                System_Action___ctor(
                  v576,
                  (Il2CppObject *)v558,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__,
                  0LL);
                if ( !v575 )
                  goto LABEL_1022;
                v577 = 4;
LABEL_878:
                srcLineSprite__SetState(v575, v577, v576, 0LL);
              }
            }
            return;
          case 203:
            IsMapModel = this->fields.IsMapModel;
            v359 = *v14;
            updated = System_Int32__Parse(v23->fields.param, 0LL);
            if ( !v359 )
              goto LABEL_1022;
            if ( IsMapModel )
            {
              v360 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                       v359,
                       1,
                       updated,
                       this,
                       (const MethodInfo_1D5B184 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v360, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v360 )
                goto LABEL_1022;
              ModelLineComponent__SetQuestAfterActionScaleAnimQuick((ModelLineComponent_o *)v360, 0, 0LL);
              mcAtlasP = v360->fields.mcTweenScaleP;
              if ( !mcAtlasP )
                goto LABEL_1022;
            }
            else
            {
              v612 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                               v359,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_1D5B184 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              updated = UnityEngine_Object__op_Equality(v612, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v612 )
                goto LABEL_1022;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v612, 0, 0LL);
              mcAtlasP = v612[5].klass;
              if ( !mcAtlasP )
                goto LABEL_1022;
            }
            goto LABEL_913;
          case 204:
            v337 = this->fields.IsMapModel;
            v338 = *v14;
            updated = System_Int32__Parse(v23->fields.param, 0LL);
            if ( !v338 )
              goto LABEL_1022;
            if ( v337 )
            {
              v339 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                       v338,
                       1,
                       updated,
                       this,
                       (const MethodInfo_1D5B184 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v339, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v339 )
                goto LABEL_1022;
              ModelLineComponent__SetQuestAfterActionScaleAnimQuick((ModelLineComponent_o *)v339, 1, 0LL);
              ModelLineComponent__SetQuestAfterActionColorAnimQuick((ModelLineComponent_o *)v339, 0, 0LL);
              mcTweenScaleP = v339->fields.mcTweenScaleP;
              if ( !mcTweenScaleP )
                goto LABEL_1022;
            }
            else
            {
              v556 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                               v338,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_1D5B184 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              updated = UnityEngine_Object__op_Equality(v556, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v556 )
                goto LABEL_1022;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v556, 1, 0LL);
              srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v556, 0, 0LL);
              mcTweenScaleP = v556[5].klass;
              if ( !mcTweenScaleP )
                goto LABEL_1022;
            }
            v557 = 2;
            goto LABEL_893;
          case 205:
            v379 = this->fields.IsMapModel;
            v380 = *v14;
            updated = System_Int32__Parse(v23->fields.param, 0LL);
            if ( !v380 )
              goto LABEL_1022;
            if ( v379 )
            {
              v381 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                       v380,
                       1,
                       updated,
                       this,
                       (const MethodInfo_1D5B184 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v381, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v381 )
                goto LABEL_1022;
              ModelLineComponent__SetQuestAfterActionScaleAnimQuick((ModelLineComponent_o *)v381, 1, 0LL);
              ModelLineComponent__SetQuestAfterActionColorAnimQuick((ModelLineComponent_o *)v381, 1, 0LL);
              mcTweenScaleP = v381->fields.mcTweenScaleP;
              if ( !mcTweenScaleP )
                goto LABEL_1022;
            }
            else
            {
              v613 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                               v380,
                                               1,
                                               updated,
                                               this,
                                               (const MethodInfo_1D5B184 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              updated = UnityEngine_Object__op_Equality(v613, 0LL, 0LL);
              if ( (updated & 1) != 0 )
                return;
              if ( !v613 )
                goto LABEL_1022;
              srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v613, 1, 0LL);
              srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v613, 1, 0LL);
              mcTweenScaleP = v613[5].klass;
              if ( !mcTweenScaleP )
                goto LABEL_1022;
            }
            v557 = 1;
LABEL_893:
            mcTweenScaleP[4] = v557;
            goto LABEL_18;
          default:
            if ( id != 350 )
              return;
            v254 = v23->fields.param;
            MyFsmP = sub_B706AC(char___TypeInfo, 1LL);
            if ( !MyFsmP )
              goto LABEL_1024;
            v7 = (const MethodInfo *)MyFsmP;
            if ( !*(_DWORD *)(MyFsmP + 24) )
              goto LABEL_1026;
            *(_WORD *)(MyFsmP + 32) = 44;
            if ( !v254 )
              goto LABEL_1024;
            MyFsmP = (__int64)System_String__Split(v254, (System_Char_array *)MyFsmP, 0LL);
            if ( !MyFsmP )
              goto LABEL_1024;
            v255 = MyFsmP;
            if ( *(int *)(MyFsmP + 24) <= 0 )
              goto LABEL_389;
            v256 = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
            if ( v256 < 1 )
              goto LABEL_389;
            v257 = v256;
            v258 = 0.5;
            if ( *(int *)(v255 + 24) > 1 )
            {
              v259 = System_Int32__Parse(*(System_String_o **)(v255 + 40), 0LL);
              if ( *(int *)(v255 + 24) >= 3 )
                v258 = System_Single__Parse(*(System_String_o **)(v255 + 48), 0LL) * 0.001;
            }
            else
            {
              v259 = 15;
            }
            if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            }
            if ( !byte_434DEA1 )
            {
              sub_B70694(&TerminalSceneComponent_TypeInfo);
              byte_434DEA1 = 1;
            }
            MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
            if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v650 = **(_QWORD **)(MyFsmP + 184);
            if ( !v650 )
              goto LABEL_1024;
            v651 = *(ScrTerminalMap_o **)(v650 + 256);
            v652 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
            System_Action___ctor(
              v652,
              (Il2CppObject *)v5,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__18__,
              0LL);
            if ( !v651 )
              goto LABEL_1024;
            ScrTerminalMap__RequestMapMove_24661828(v651, v257, v258, v259, v652, 0LL);
            return;
        }
    }
    v335 = v527;
LABEL_1017:
    v336 = v657;
    goto LABEL_1018;
  }
  if ( id <= 604 )
  {
    if ( id > 540 )
    {
      switch ( id )
      {
        case 600:
          v38 = (System_String_o *)StringLiteral_1/*""*/;
          v39 = System_String__Concat_44758168((System_String_o *)StringLiteral_11038/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v23->fields.param, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v40 = LocalizationManager__Get(v39, 0LL);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v42 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
          System_Action___ctor(
            v42,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__36__,
            0LL);
          if ( !Instance )
            goto LABEL_1024;
          CommonUI__OpenNotificationDialog(Instance, v38, v40, v42, 210, 0, 0, 0, 1, 0, 0, 0, 0LL, 0LL);
          return;
        case 601:
          v216 = (System_String_o *)StringLiteral_1/*""*/;
          MyFsmP = sub_B706AC(string___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1024;
          v223 = (System_String_array *)MyFsmP;
          MyFsmP = StringLiteral_70/*"\r\n"*/;
          if ( StringLiteral_70/*"\r\n"*/ )
          {
            MyFsmP = sub_B70754(StringLiteral_70/*"\r\n"*/, v223->obj.klass->_1.element_class);
            if ( !MyFsmP )
            {
              v669 = sub_B7078C(0LL);
              sub_B70738(v669, 0LL);
            }
            v224 = (System_Int32_array **)StringLiteral_70/*"\r\n"*/;
          }
          else
          {
            v224 = 0LL;
          }
          if ( !v223->max_length )
            goto LABEL_1026;
          v223->m_Items[0] = (System_String_o *)v224;
          sub_B70630((BattleServantConfConponent_o *)v223->m_Items, v224, v217, v218, v219, v220, v221, v222);
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1025;
          updated = (__int64)System_String__Split_44820788((System_String_o *)updated, v223, 0, 0LL);
          if ( !updated )
            goto LABEL_1025;
          v395 = *(_DWORD *)(updated + 24);
          if ( v395 <= 0 )
            goto LABEL_389;
          v396 = *(System_String_o **)(updated + 32);
          if ( v395 == 1 )
          {
            v397 = *(System_String_o **)(updated + 32);
            v396 = v216;
          }
          else
          {
            v397 = *(System_String_o **)(updated + 40);
          }
          v524 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v525 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
          System_Action___ctor(
            v525,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__37__,
            0LL);
          if ( !v524 )
            goto LABEL_1025;
          CommonUI__OpenNotificationDialog(v524, v396, v397, v525, 210, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
          return;
        case 602:
          v202 = (System_String_o *)StringLiteral_1/*""*/;
          v203 = System_String__Concat_44758168((System_String_o *)StringLiteral_11038/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v23->fields.param, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v204 = LocalizationManager__Get(v203, 0LL);
          v205 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v206 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
          System_Action___ctor(
            v206,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__38__,
            0LL);
          if ( !v205 )
            goto LABEL_1025;
          CommonUI__OpenNotificationDialog_17905144(
            v205,
            v202,
            v204,
            v206,
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
          v207 = (System_String_o *)StringLiteral_1/*""*/;
          updated = sub_B706AC(string___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_1025;
          v214 = (System_String_array *)updated;
          updated = StringLiteral_70/*"\r\n"*/;
          if ( StringLiteral_70/*"\r\n"*/ )
          {
            updated = sub_B70754(StringLiteral_70/*"\r\n"*/, v214->obj.klass->_1.element_class);
            if ( !updated )
            {
              v668 = sub_B7078C(0LL);
              sub_B70738(v668, 0LL);
            }
            v215 = (System_Int32_array **)StringLiteral_70/*"\r\n"*/;
          }
          else
          {
            v215 = 0LL;
          }
          if ( !v214->max_length )
            goto LABEL_1027;
          v214->m_Items[0] = (System_String_o *)v215;
          sub_B70630((BattleServantConfConponent_o *)v214->m_Items, v215, v208, v209, v210, v211, v212, v213);
          updated = (__int64)v23->fields.param;
          if ( !updated )
            goto LABEL_1025;
          updated = (__int64)System_String__Split_44820788((System_String_o *)updated, v214, 0, 0LL);
          if ( !updated )
            goto LABEL_1025;
          v392 = *(_DWORD *)(updated + 24);
          if ( v392 <= 0 )
            goto LABEL_389;
          v393 = *(System_String_o **)(updated + 32);
          if ( v392 == 1 )
          {
            v394 = *(System_String_o **)(updated + 32);
            v393 = v207;
          }
          else
          {
            v394 = *(System_String_o **)(updated + 40);
          }
          v522 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v523 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
          System_Action___ctor(
            v523,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__39__,
            0LL);
          if ( !v522 )
            goto LABEL_1025;
          CommonUI__OpenNotificationDialog_17905144(
            v522,
            v393,
            v394,
            v523,
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
          v197 = (System_String_o *)StringLiteral_1/*""*/;
          v198 = System_String__Concat_44758168((System_String_o *)StringLiteral_11038/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v23->fields.param, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v199 = LocalizationManager__Get(v198, 0LL);
          v200 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v201 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
          System_Action___ctor(
            v201,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__40__,
            0LL);
          if ( !v200 )
            goto LABEL_1025;
          CommonUI__OpenNotificationDialog_17905144(
            v200,
            v197,
            v199,
            v201,
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
          v136 = v23->fields.param;
          updated = sub_B706AC(char___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_1025;
          v7 = (const MethodInfo *)updated;
          if ( !*(_DWORD *)(updated + 24) )
            goto LABEL_1027;
          *(_WORD *)(updated + 32) = 44;
          if ( !v136 )
            goto LABEL_1025;
          updated = (__int64)System_String__Split(v136, (System_Char_array *)updated, 0LL);
          if ( !updated )
            goto LABEL_1025;
          v138 = *(_QWORD *)(updated + 24);
          if ( !v138 )
            goto LABEL_149;
          if ( !(_DWORD)v138 )
            goto LABEL_1027;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          LODWORD(v138) = (int)updated > 0;
LABEL_149:
          if ( !*v14 )
            goto LABEL_1025;
          TitleInfoCtrlCallback_k__BackingField = (*v14)->fields._TitleInfoCtrlCallback_k__BackingField;
          if ( (_DWORD)v138 )
          {
            if ( TitleInfoCtrlCallback_k__BackingField )
            {
              QuestAfterAction_TitleInfoControlCallback__Start(
                (*v14)->fields._TitleInfoCtrlCallback_k__BackingField,
                0LL,
                v137);
              goto LABEL_18;
            }
          }
          else
          {
            v328 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
            System_Action___ctor(v328, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( TitleInfoCtrlCallback_k__BackingField )
            {
              QuestAfterAction_TitleInfoControlCallback__Start(TitleInfoCtrlCallback_k__BackingField, v328, v329);
              return;
            }
          }
          break;
      }
      goto LABEL_1025;
    }
    if ( id != 530 )
    {
      if ( id != 540 )
        return;
      v62 = v23->fields.param;
      updated = sub_B706AC(char___TypeInfo, 1LL);
      if ( !updated )
        goto LABEL_1025;
      v7 = (const MethodInfo *)updated;
      if ( !*(_DWORD *)(updated + 24) )
        goto LABEL_1027;
      *(_WORD *)(updated + 32) = 44;
      if ( !v62 )
        goto LABEL_1025;
      updated = (__int64)System_String__Split(v62, (System_Char_array *)updated, 0LL);
      if ( !updated )
        goto LABEL_1025;
      v63 = updated;
      if ( !*(_DWORD *)(updated + 24) )
        goto LABEL_1027;
      v64 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
      if ( *(int *)(v63 + 24) < 2 )
      {
        v65 = -1;
      }
      else
      {
        v65 = System_Int32__Parse(*(System_String_o **)(v63 + 40), 0LL);
        if ( *(int *)(v63 + 24) >= 3 )
        {
          v66 = System_Int32__Parse(*(System_String_o **)(v63 + 48), 0LL);
          goto LABEL_299;
        }
      }
      v66 = -1;
LABEL_299:
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_434DEAC )
      {
        sub_B70694(&TerminalPramsManager_TypeInfo);
        byte_434DEAC = 1;
      }
      v194 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v194 = TerminalPramsManager_TypeInfo;
      }
      v194->static_fields->_IsAutoResume_k__BackingField = 1;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_434DEA1 )
      {
        sub_B70694(&TerminalSceneComponent_TypeInfo);
        byte_434DEA1 = 1;
      }
      updated = (__int64)TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        updated = (__int64)TerminalSceneComponent_TypeInfo;
      }
      v195 = **(_QWORD **)(updated + 184);
      if ( v195 )
      {
        updated = *(_QWORD *)(v195 + 256);
        if ( updated )
        {
          if ( !ScrTerminalMap__RequestMapChange((ScrTerminalMap_o *)updated, v64, v65, v66, 0LL) )
          {
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            }
            if ( !byte_434DEAC )
            {
              sub_B70694(&TerminalPramsManager_TypeInfo);
              byte_434DEAC = 1;
            }
            v196 = TerminalPramsManager_TypeInfo;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v196 = TerminalPramsManager_TypeInfo;
            }
            v196->static_fields->_IsAutoResume_k__BackingField = 0;
            goto LABEL_18;
          }
          ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
            this,
            this->klass->vtable._15_onEnd.methodPtr);
          updated = (__int64)*v14;
          if ( *v14 )
          {
            QuestAfterAction__SetState((QuestAfterAction_o *)updated, 0, 0LL);
            return;
          }
        }
      }
      goto LABEL_1025;
    }
    v140 = System_Int32__Parse(v23->fields.param, 0LL);
    MyFsmP = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( MyFsmP )
    {
      MyFsmP = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)MyFsmP,
                          (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( MyFsmP )
      {
        v141 = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                  (DataMasterBase_WarMaster__WarEntity__int__o *)MyFsmP,
                                  v140,
                                  (const MethodInfo_21C0440 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
        }
        MyFsmP = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( MyFsmP )
        {
          MyFsmP = (__int64)QuestTree__GetQuestInfo((QuestTree_o *)MyFsmP, v140, 0LL);
          if ( MyFsmP )
          {
            v143 = MyFsmP;
            if ( *(_DWORD *)(MyFsmP + 32) != 1 )
            {
              QuestAfterAction_StateMain__ForceEndAnim(this, 1, v142);
              return;
            }
            if ( v141 )
            {
              if ( !QuestEntity__HasFlag(v141, 2LL, 0LL) )
                return;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              }
              if ( !byte_434DEA7 )
              {
                sub_B70694(&TerminalPramsManager_TypeInfo);
                byte_434DEA7 = 1;
              }
              v144 = TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v144 = TerminalPramsManager_TypeInfo;
              }
              v144->static_fields->_QuestId_k__BackingField = v140;
              v145 = *(_DWORD *)(v143 + 44);
              if ( !byte_434DEA8 )
              {
                sub_B70694(&TerminalPramsManager_TypeInfo);
                v144 = TerminalPramsManager_TypeInfo;
                byte_434DEA8 = 1;
              }
              if ( (BYTE3(v144->vtable._0_Equals.methodPtr) & 4) != 0 && !v144->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v144);
                v144 = TerminalPramsManager_TypeInfo;
              }
              v144->static_fields->_PhaseCnt_k__BackingField = v145;
              if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
              }
              MyFsmP = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
              v146 = (clsQuestCheck_o *)MyFsmP;
              v147 = QuestAfterAction_StateMain___c_TypeInfo;
              if ( (BYTE3(QuestAfterAction_StateMain___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
                v147 = QuestAfterAction_StateMain___c_TypeInfo;
              }
              v148 = v147->static_fields;
              _9__16_33 = v148->__9__16_33;
              if ( !_9__16_33 )
              {
                if ( (BYTE3(v147->vtable._0_Equals.methodPtr) & 4) != 0 && !v147->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v147);
                  v148 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
                }
                v150 = (Il2CppObject *)v148->__9;
                _9__16_33 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
                System_Action___ctor(_9__16_33, v150, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_33__, 0LL);
                v151 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
                v151->__9__16_33 = _9__16_33;
                sub_B70630(
                  (BattleServantConfConponent_o *)&v151->__9__16_33,
                  (System_Int32_array **)_9__16_33,
                  v152,
                  v153,
                  v154,
                  v155,
                  v156,
                  v157);
              }
              if ( v146 )
              {
                clsQuestCheck__PlayQuestStartAction(v146, _9__16_33, 0LL);
                return;
              }
            }
          }
        }
      }
    }
    goto LABEL_1024;
  }
  if ( id <= 801 )
  {
    if ( id != 700 )
    {
      if ( id != 800 )
      {
        if ( id == 801 )
        {
          v47 = v23->fields.param;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSe(v47, 0LL);
          goto LABEL_18;
        }
        return;
      }
      v165 = *v14;
      if ( *v14 )
      {
        updated = (__int64)v165->fields.svtVoices;
        if ( updated )
        {
          if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
                 (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)updated,
                 v165->fields.commandIdx,
                 &value,
                 (const MethodInfo_2FC828C *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__) )
          {
            updated = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
            if ( !updated )
              goto LABEL_1025;
            AutomatedAction__TerminateMissionAction((AutomatedAction_o *)updated, 0LL);
            if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            }
            if ( !byte_434DEA1 )
            {
              sub_B70694(&TerminalSceneComponent_TypeInfo);
              byte_434DEA1 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v166 = **(_QWORD **)(updated + 184);
            if ( !v166 )
              goto LABEL_1025;
            if ( !*(_QWORD *)(v166 + 448) )
              goto LABEL_232;
            if ( (*(_BYTE *)(updated + 307) & 4) != 0 && !*(_DWORD *)(updated + 224) )
              j_il2cpp_runtime_class_init_0(updated);
            if ( !byte_434DEA1 )
            {
              sub_B70694(&TerminalSceneComponent_TypeInfo);
              byte_434DEA1 = 1;
            }
            updated = (__int64)TerminalSceneComponent_TypeInfo;
            if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              updated = (__int64)TerminalSceneComponent_TypeInfo;
            }
            v167 = **(_QWORD **)(updated + 184);
            if ( !v167 )
              goto LABEL_1025;
            v168 = *(_QWORD *)(v167 + 448);
            if ( !v168 )
              goto LABEL_1025;
            updated = *(unsigned int *)(v168 + 48);
            if ( !(_DWORD)updated )
            {
LABEL_232:
              if ( !value )
                goto LABEL_1025;
              updated = (unsigned int)value->fields.viewpoint;
            }
            if ( (int)updated < 1 )
            {
              if ( !value )
                goto LABEL_1025;
              v398 = *(System_String_o **)&value->fields.eval;
              if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SoundManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
              }
              SoundManager__playVoice(v398, 0LL);
            }
            else
            {
              updated = (__int64)ServantVoiceEntity__getVoiceAssetName_29794896(updated, 0LL);
              if ( !value )
                goto LABEL_1025;
              v169 = (System_String_o *)updated;
              v170 = *(System_String_o **)&value->fields.eval;
              v171 = SeManager_TypeInfo;
              if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SeManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
                v171 = SeManager_TypeInfo;
              }
              DEFAULT_VOLUME = v171->static_fields->DEFAULT_VOLUME;
              if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SoundManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
              }
              SoundManager__playVoice_23183232(v169, v170, DEFAULT_VOLUME, 0LL, 0LL);
            }
          }
LABEL_389:
          ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
            this,
            this->klass->vtable._15_onEnd.methodPtr);
          return;
        }
      }
LABEL_1025:
      sub_B7076C(updated, v7);
    }
    v190 = v23->fields.param;
    updated = sub_B706AC(char___TypeInfo, 1LL);
    if ( !updated )
      goto LABEL_1025;
    v7 = (const MethodInfo *)updated;
    if ( *(_DWORD *)(updated + 24) )
    {
      *(_WORD *)(updated + 32) = 44;
      if ( !v190 )
        goto LABEL_1025;
      updated = (__int64)System_String__Split(v190, (System_Char_array *)updated, 0LL);
      if ( !updated )
        goto LABEL_1025;
      v191 = updated;
      if ( *(_DWORD *)(updated + 24) )
      {
        v192 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
        if ( *(int *)(v191 + 24) >= 2 )
          v193 = System_Int32__Parse(*(System_String_o **)(v191 + 40), 0LL) + 1;
        else
          v193 = 0;
        v233 = (SceneJumpInfo_o *)sub_B70764(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_17523832(v233, (System_String_o *)StringLiteral_1/*""*/, v192, v193, 0LL);
        updated = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !updated )
          goto LABEL_1025;
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)updated, 72, 1, (Il2CppObject *)v233, 0LL);
        goto LABEL_389;
      }
    }
LABEL_1027:
    v667 = sub_B70798(updated);
    sub_B70738(v667, 0LL);
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
      if ( *v14 )
      {
        (*v14)->fields.isRequestedStopBgm = 1;
        goto LABEL_18;
      }
      goto LABEL_1025;
    case 851:
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_434DEA1 )
      {
        sub_B70694(&TerminalSceneComponent_TypeInfo);
        byte_434DEA1 = 1;
      }
      v158 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v158 = TerminalSceneComponent_TypeInfo;
      }
      v159 = v158->static_fields->mInstance;
      updated = (__int64)QuestAfterAction_Command__GetBgmName(v23, v7);
      if ( v159 )
      {
        TerminalSceneComponent__playBgm(v159, (System_String_o *)updated, 0LL);
        if ( *v14 )
        {
          (*v14)->fields.isRequestedStopBgm = 0;
          goto LABEL_18;
        }
      }
      goto LABEL_1025;
    case 900:
      v28 = (float)System_Int32__Parse(v23->fields.param, 0LL) / 1000.0;
      if ( v28 <= 0.0 )
        goto LABEL_18;
      this->fields.waitTime = v28;
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  TerminalSceneComponent_c *screenCollider; // x0
  __int64 v11; // x1
  struct QuestAfterAction_o *v12; // x8
  struct TerminalSceneComponent_o *mInstance; // x8

  if ( (byte_4351ADA & 1) == 0 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_4351ADA = 1;
  }
  this->fields.that = that;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)that,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v12 = this->fields.that;
  if ( !v12 )
    goto LABEL_16;
  screenCollider = (TerminalSceneComponent_c *)v12->fields.screenCollider;
  if ( !screenCollider )
    goto LABEL_16;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)screenCollider, 1, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
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
    sub_B7076C(screenCollider, v11);
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
    sub_B7076C(this, method);
  return that->fields.commandBuf;
}


int32_t __fastcall QuestAfterAction_StateMain__get_CommandIndex(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_B7076C(this, method);
  return that->fields.commandIdx;
}


UnityEngine_GameObject_o *__fastcall QuestAfterAction_StateMain__get_SubGimmickRoot(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  if ( (byte_4351AD9 & 1) == 0 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_4351AD9 = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
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
    sub_B7076C(v2, method);
  return mTerminalMap->fields.rootEffectP;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestAfterAction_StateMain__onEnd(
        QuestAfterAction_StateMain_o *this,
        bool deleteKey,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v5; // x0
  TerminalSceneComponent_o *mInstance; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4351ADC & 1) == 0 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    sub_B70694(&StringLiteral_16529/*"afterActionBk"*/);
    byte_4351ADC = 1;
  }
  if ( deleteKey )
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16529/*"afterActionBk"*/, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_434DEA1 )
  {
    sub_B70694(&TerminalSceneComponent_TypeInfo);
    byte_434DEA1 = 1;
  }
  v5 = TerminalSceneComponent_TypeInfo;
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v5 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = v5->static_fields->mInstance;
  if ( !mInstance
    || (TerminalSceneComponent__ClearTransitionInfo(mInstance, 0LL),
        QuestAfterAction_StateMain__StartMapGimmick(this, v7),
        (mInstance = (TerminalSceneComponent_o *)this->fields.that) == 0LL) )
  {
    sub_B7076C(mInstance, deleteKey);
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
    sub_B7076C(this, value);
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
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_43515CB & 1) == 0 )
  {
    sub_B70694(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_43515CB = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(QuestAfterAction_StateMain___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)QuestAfterAction_StateMain___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
  TerminalPramsManager_c *v2; // x0
  int32_t WarId_k__BackingField; // w19
  int32_t QuestId_k__BackingField; // w20
  QuestAfterAction_StateMain___c_c *v5; // x8
  int32_t PhaseCnt_k__BackingField; // w21
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x9
  int32_t v8; // w21
  ScriptManager_CallbackFunc_o *_9__16_34; // x22
  Il2CppObject *v10; // x23
  struct QuestAfterAction_StateMain___c_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_43515CC & 1) == 0 )
  {
    sub_B70694(&ScriptManager_CallbackFunc_TypeInfo);
    sub_B70694(&ScriptManager_TypeInfo);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_34__);
    sub_B70694(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_43515CC = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_434DEA3 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434DEA3 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v2->static_fields->_WarId_k__BackingField;
  if ( !byte_434DEB6 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_434DEB6 = 1;
  }
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v2->static_fields->_QuestId_k__BackingField;
  if ( !byte_434DEB7 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_434DEB7 = 1;
  }
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v5 = QuestAfterAction_StateMain___c_TypeInfo;
  PhaseCnt_k__BackingField = v2->static_fields->_PhaseCnt_k__BackingField;
  if ( (BYTE3(QuestAfterAction_StateMain___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
    v5 = QuestAfterAction_StateMain___c_TypeInfo;
  }
  static_fields = v5->static_fields;
  v8 = PhaseCnt_k__BackingField + 1;
  _9__16_34 = static_fields->__9__16_34;
  if ( !_9__16_34 )
  {
    if ( (BYTE3(v5->vtable._0_Equals.methodPtr) & 4) != 0 && !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    }
    v10 = (Il2CppObject *)static_fields->__9;
    _9__16_34 = (ScriptManager_CallbackFunc_o *)sub_B70764(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(_9__16_34, v10, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_34__, 0LL);
    v11 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    v11->__9__16_34 = _9__16_34;
    sub_B70630(
      (BattleServantConfConponent_o *)&v11->__9__16_34,
      (System_Int32_array **)_9__16_34,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__PlayBattleStart(
    WarId_k__BackingField,
    QuestId_k__BackingField,
    v8,
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
  QuestAfterAction_StateMain___c_c *v3; // x0
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x8
  NetworkManager_ResultCallbackFunc_o *_9__16_35; // x19
  Il2CppObject *v6; // x20
  struct QuestAfterAction_StateMain___c_StaticFields *v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  BattleScenarioRequest_o *Request_WarBoardWallAttackRequest; // x19
  TerminalPramsManager_c *v15; // x0
  int32_t QuestId_k__BackingField; // w21
  int32_t PhaseCnt_k__BackingField; // w20
  System_Int32_array *SelectRouteArray; // x0
  __int64 v19; // x1

  if ( (byte_43515CD & 1) == 0 )
  {
    sub_B70694(&Method_NetworkManager_getRequest_BattleScenarioRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&ScriptManager_TypeInfo);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_35__);
    sub_B70694(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_43515CD = 1;
  }
  v3 = QuestAfterAction_StateMain___c_TypeInfo;
  if ( (BYTE3(QuestAfterAction_StateMain___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
    v3 = QuestAfterAction_StateMain___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__16_35 = static_fields->__9__16_35;
  if ( !_9__16_35 )
  {
    if ( (BYTE3(v3->vtable._0_Equals.methodPtr) & 4) != 0 && !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    }
    v6 = (Il2CppObject *)static_fields->__9;
    _9__16_35 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__16_35,
      v6,
      Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_35__,
      0LL);
    v7 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    v7->__9__16_35 = _9__16_35;
    sub_B70630(
      (BattleServantConfConponent_o *)&v7->__9__16_35,
      (System_Int32_array **)_9__16_35,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (BattleScenarioRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   _9__16_35,
                                                                   (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_434DEB6 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434DEB6 = 1;
  }
  v15 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v15->static_fields->_QuestId_k__BackingField;
  if ( !byte_434DEB7 )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    v15 = TerminalPramsManager_TypeInfo;
    byte_434DEB7 = 1;
  }
  if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v15);
    v15 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v15->static_fields->_PhaseCnt_k__BackingField;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  SelectRouteArray = ScriptManager__GetSelectRouteArray(0LL);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B7076C(SelectRouteArray, v19);
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
  Il2CppObject *v4; // x19
  BattleResultComponent_resultData_array *v5; // x19
  TerminalPramsManager_c *v6; // x0
  AvalonSceneManager_o *Instance; // x0
  __int64 v8; // x1

  if ( (byte_43515CE & 1) == 0 )
  {
    sub_B70694(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
    sub_B70694(&JsonManager_TypeInfo);
    sub_B70694(&ScriptManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B70694(&TerminalPramsManager_TypeInfo);
    sub_B70694(&StringLiteral_16529/*"afterActionBk"*/);
    sub_B70694(&StringLiteral_15855/*"["*/);
    sub_B70694(&StringLiteral_16092/*"]"*/);
    byte_43515CE = 1;
  }
  v4 = (Il2CppObject *)System_String__Concat_44760452(
                         (System_String_o *)StringLiteral_15855/*"["*/,
                         jsonstr,
                         (System_String_o *)StringLiteral_16092/*"]"*/,
                         0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v5 = (BattleResultComponent_resultData_array *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                   v4,
                                                   (const MethodInfo_1D50530 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16529/*"afterActionBk"*/, 0LL);
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
  TerminalPramsManager__ReceiveQuestEndResultInfo(v5, 1, 0LL);
  if ( !byte_434DEAC )
  {
    sub_B70694(&TerminalPramsManager_TypeInfo);
    byte_434DEAC = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B7076C(0LL, v8);
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
    sub_B7076C(0LL, method);
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
    sub_B7076C(0LL, method);
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
    sub_B7076C(0LL, method);
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
    sub_B7076C(0LL, method);
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
    sub_B7076C(0LL, method);
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
    sub_B7076C(0LL, method);
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
    sub_B7076C(0LL, method);
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
    sub_B7076C(0LL, method);
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
    sub_B7076C(0LL, method);
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
    sub_B7076C(0LL, method);
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
    sub_B7076C(0LL, method);
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
    sub_B7076C(0LL, method);
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
    sub_B7076C(_4__this, method);
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
    sub_B7076C(0LL, method);
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
    sub_B7076C(0LL, method);
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
    sub_B7076C(0LL, method);
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
    sub_B7076C(0LL, method);
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
    sub_B7076C(0LL, method);
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
    sub_B7076C(0LL, method);
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
    sub_B7076C(this, method);
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
    sub_B7076C(this, method);
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
    sub_B7076C(this, method);
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
    sub_B7076C(this, method);
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
    sub_B7076C(this, method);
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
    sub_B7076C(this, method);
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
  __int64 v3; // x19
  UnityEngine_Component_o *mapGimmick; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UnityEngine_Component_o *v12; // x22
  System_Int32_array **v13; // x0
  __int64 v14; // x21
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct System_String_array *paramsStr; // x8
  struct System_String_array *v22; // x8
  __int64 v23; // x20
  float v24; // s0
  UITweener_o *v25; // x20
  EventDelegate_Callback_o *v26; // x21
  __int64 v27; // x0
  unsigned __int128 v28; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_43515CF & 1) == 0 )
  {
    sub_B70694(&EventDelegate_Callback_TypeInfo);
    sub_B70694(&Method_UnityEngine_GameObject_AddComponent_TweenColor___);
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_B70694(&Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__28__);
    sub_B70694(&QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo);
    byte_43515CF = 1;
  }
  v28 = 0uLL;
  v3 = sub_B70764(QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_18;
  *(_QWORD *)(v3 + 24) = this;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 24), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  mapGimmick = (UnityEngine_Component_o *)this->fields.mapGimmick;
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0LL);
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                            (UnityEngine_GameObject_o *)mapGimmick,
                                            (const MethodInfo_1D4AED4 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !mapGimmick )
    goto LABEL_18;
  v12 = mapGimmick;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0LL);
  if ( !mapGimmick )
    goto LABEL_18;
  v13 = (System_Int32_array **)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                 (UnityEngine_GameObject_o *)mapGimmick,
                                 (const MethodInfo_1D4AD2C *)Method_UnityEngine_GameObject_AddComponent_TweenColor___);
  *(_QWORD *)(v3 + 16) = v13;
  v14 = v3 + 16;
  sub_B70630((BattleServantConfConponent_o *)(v3 + 16), v13, v15, v16, v17, v18, v19, v20);
  paramsStr = this->fields.paramsStr;
  if ( !paramsStr )
    goto LABEL_18;
  if ( paramsStr->max_length <= 1 )
    goto LABEL_19;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                            paramsStr->m_Items[1],
                                            (UnityEngine_Color_o *)&v28,
                                            0LL);
  if ( !*(_QWORD *)v14
    || (*(_OWORD *)(*(_QWORD *)v14 + 120LL) = *(_OWORD *)(&v12[5].fields + 1), !*(_QWORD *)v14)
    || (*(_OWORD *)(*(_QWORD *)v14 + 136LL) = v28, (v22 = this->fields.paramsStr) == 0LL) )
  {
LABEL_18:
    sub_B7076C(mapGimmick, v5);
  }
  if ( v22->max_length <= 2 )
  {
LABEL_19:
    v27 = sub_B70798(mapGimmick);
    sub_B70738(v27, 0LL);
  }
  v23 = *(_QWORD *)v14;
  v24 = System_Single__Parse(v22->m_Items[2], 0LL);
  if ( !v23 )
    goto LABEL_18;
  *(float *)(v23 + 48) = v24;
  mapGimmick = *(UnityEngine_Component_o **)v14;
  if ( !*(_QWORD *)v14 )
    goto LABEL_18;
  UITweener__PlayForward((UITweener_o *)mapGimmick, 0LL);
  v25 = *(UITweener_o **)(v3 + 16);
  v26 = (EventDelegate_Callback_o *)sub_B70764(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v26,
    (Il2CppObject *)v3,
    Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__28__,
    0LL);
  if ( !v25 )
    goto LABEL_18;
  UITweener__SetOnFinished(v25, v26, 0LL);
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

  if ( (byte_43515D0 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43515D0 = 1;
  }
  tween = (UnityEngine_Object_o *)this->fields.tween;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_36067208(tween, 0LL);
  CS___8__locals14 = this->fields.CS___8__locals14;
  if ( !CS___8__locals14
    || (CS___8__locals13 = CS___8__locals14->fields.CS___8__locals13) == 0LL
    || (_4__this = CS___8__locals13->fields.__4__this) == 0LL )
  {
    sub_B7076C(_4__this, v5);
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
    sub_B7076C(this, method);
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
    sub_B7076C(this, method);
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
    sub_B7076C(this, method);
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
    sub_B7076C(this, method);
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
    sub_B7076C(this, method);
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
    sub_B7076C(this, method);
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
    sub_B7076C(this, method);
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
    sub_B7076C(this, method);
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
    sub_B7076C(this, method);
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
    sub_B7076C(this, method);
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
  sub_B70630(p_end, 0LL, v2, v3, v4, v5, v6, v7);
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
  sub_B70630(
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
  sub_B70630(
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
  sub_B70630(v6, (System_Int32_array **)vName, v7, v8, v9, v10, v11, v12);
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
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *v2; // x19
  int32_t _1__state; // w8
  QuestAfterAction_o *_4__this; // x20
  struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *commandEnumerable; // x21
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__c *klass; // x8
  unsigned __int64 v7; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  BattleServantConfConponent_o *p__7__wrap1; // x21
  System_Int32_array **v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  BattleServantConfConponent_c *v18; // x22
  _QWORD *image; // x8
  unsigned __int64 v20; // x10
  int *v21; // x11
  __int64 v22; // x0
  __int64 v23; // x0
  const MethodInfo *v24; // x1
  BattleServantConfConponent_c *v25; // x22
  _QWORD *v26; // x8
  unsigned __int64 v27; // x10
  int *v28; // x11
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x1
  QuestAfterAction_Command_o *v32; // x22
  int32_t CommandType; // w23
  int32_t CommandTargetId; // w2
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  bool result; // w0
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7

  v2 = this;
  if ( (byte_4351AD2 & 1) == 0 )
  {
    sub_B70694(&System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *)sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    byte_4351AD2 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 1 )
  {
    p__7__wrap1 = (BattleServantConfConponent_o *)&v2->fields.__7__wrap1;
  }
  else
  {
    if ( _1__state )
      return 0;
    commandEnumerable = v2->fields.commandEnumerable;
    v2->fields.__1__state = -1;
    if ( !commandEnumerable )
      sub_B7076C(this, method);
    klass = commandEnumerable->klass;
    if ( *(_WORD *)&commandEnumerable->klass->_2.bitflags1 )
    {
      v7 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_QuestAfterAction_Command__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo )
      {
        ++v7;
        p_offset += 4;
        if ( v7 >= *(unsigned __int16 *)&commandEnumerable->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_B08590(
                   commandEnumerable,
                   System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo,
                   0LL);
    }
    v11 = (System_Int32_array **)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *, _QWORD))p_method)(
                                   commandEnumerable,
                                   *(_QWORD *)(p_method + 8));
    v2->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)v11;
    p__7__wrap1 = (BattleServantConfConponent_o *)&v2->fields.__7__wrap1;
    sub_B70630((BattleServantConfConponent_o *)&v2->fields.__7__wrap1, v11, v12, v13, v14, v15, v16, v17);
  }
  v2->fields.__1__state = -3;
  while ( 1 )
  {
    v18 = p__7__wrap1->klass;
    if ( !p__7__wrap1->klass )
      sub_B7076C(this, method);
    image = v18->_1.image;
    if ( *((_WORD *)v18->_1.image + 149) )
    {
      v20 = 0LL;
      v21 = (int *)(image[22] + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v21 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v20;
        v21 += 4;
        if ( v20 >= *((unsigned __int16 *)v18->_1.image + 149) )
          goto LABEL_20;
      }
      v22 = (__int64)&image[2 * *v21 + 39];
    }
    else
    {
LABEL_20:
      v22 = sub_B08590(p__7__wrap1->klass, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v23 = (*(__int64 (__fastcall **)(BattleServantConfConponent_c *, _QWORD))v22)(v18, *(_QWORD *)(v22 + 8));
    if ( (v23 & 1) == 0 )
      break;
    v25 = p__7__wrap1->klass;
    if ( !p__7__wrap1->klass )
      sub_B7076C(v23, v24);
    v26 = v25->_1.image;
    if ( *((_WORD *)v25->_1.image + 149) )
    {
      v27 = 0LL;
      v28 = (int *)(v26[22] + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c **)v28 - 1) != System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo )
      {
        ++v27;
        v28 += 4;
        if ( v27 >= *((unsigned __int16 *)v25->_1.image + 149) )
          goto LABEL_28;
      }
      v29 = (__int64)&v26[2 * *v28 + 39];
    }
    else
    {
LABEL_28:
      v29 = sub_B08590(
              p__7__wrap1->klass,
              System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo,
              0LL);
    }
    v30 = (*(__int64 (__fastcall **)(BattleServantConfConponent_c *, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8));
    v32 = (QuestAfterAction_Command_o *)v30;
    if ( !v30 )
      sub_B7076C(0LL, v31);
    if ( !_4__this )
      sub_B7076C(v30, v31);
    CommandType = QuestAfterAction__GetCommandType(_4__this, *(_DWORD *)(v30 + 16), 0LL);
    CommandTargetId = QuestAfterAction__ExtractCommandTargetId(v32, 0LL);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *)QuestAfterAction__IsExistCommand(
                                                                                    _4__this,
                                                                                    CommandType,
                                                                                    CommandTargetId,
                                                                                    0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v2->fields.__2__current = v32;
      sub_B70630(
        (BattleServantConfConponent_o *)&v2->fields.__2__current,
        (System_Int32_array **)v32,
        v35,
        v36,
        v37,
        v38,
        v39,
        v40);
      result = 1;
      v2->fields.__1__state = 1;
      return result;
    }
  }
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74____m__Finally1(v2, v24);
  p__7__wrap1->klass = 0LL;
  sub_B70630(p__7__wrap1, 0LL, v42, v43, v44, v45, v46, v47);
  return 0;
}


System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74__System_Collections_Generic_IEnumerable_QuestAfterAction_Command__GetEnumerator(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *v10; // x20
  __int64 CurrentManagedThreadId; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **_4__this; // x1
  System_Int32_array **_3__commandEnumerable; // x1

  if ( (byte_4351AD4 & 1) == 0 )
  {
    sub_B70694(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_TypeInfo);
    byte_4351AD4 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v10 = this;
  }
  else
  {
    v10 = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_o *)sub_B70764(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0LL);
    v10->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    v10->fields.__l__initialThreadId = CurrentManagedThreadId;
    if ( !v10 )
      sub_B7076C(CurrentManagedThreadId, v12);
    _4__this = (System_Int32_array **)this->fields.__4__this;
    v10->fields.__4__this = (struct QuestAfterAction_o *)_4__this;
    sub_B70630((BattleServantConfConponent_o *)&v10->fields.__4__this, _4__this, v13, v14, v15, v16, v17, v18);
  }
  _3__commandEnumerable = (System_Int32_array **)this->fields.__3__commandEnumerable;
  v10->fields.commandEnumerable = (struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *)_3__commandEnumerable;
  sub_B70630(
    (BattleServantConfConponent_o *)&v10->fields.commandEnumerable,
    _3__commandEnumerable,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  return (System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)v10;
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

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__74_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
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
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *klass; // x8
  unsigned __int64 v5; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_4351AD3 & 1) == 0 )
  {
    sub_B70694(&System_IDisposable_TypeInfo);
    byte_4351AD3 = 1;
  }
  _7__wrap1 = this->fields.__7__wrap1;
  this->fields.__1__state = -1;
  if ( _7__wrap1 )
  {
    klass = _7__wrap1->klass;
    if ( *(_WORD *)&_7__wrap1->klass->_2.bitflags1 )
    {
      v5 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v5;
        p_offset += 4;
        if ( v5 >= *(unsigned __int16 *)&_7__wrap1->klass->_2.bitflags1 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_8:
      p_method = sub_B08590(_7__wrap1, System_IDisposable_TypeInfo, 0LL);
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
      sub_B7076C(this, method);
    if ( _4__this->fields.isKeepingMainStateButFinished )
    {
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_B70630((BattleServantConfConponent_o *)&this->fields.__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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

  v2 = sub_B70698(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B70764(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B70698(&Method_QuestAfterAction__WaitWhileMainStateFinished_d__78_System_Collections_IEnumerator_Reset__);
  sub_B70738(v3, v4);
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
  System_Collections_Generic_List_XWeaponTrail_Element__o *svtVInfos; // x0

  if ( (byte_4351ACF & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    byte_4351ACF = 1;
  }
  svtVInfos = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.svtVInfos;
  if ( !svtVInfos
    || (System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          svtVInfos,
          0,
          (const MethodInfo_3027378 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__),
        (svtVInfos = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.__4__this) == 0LL) )
  {
    sub_B7076C(svtVInfos, method);
  }
  QuestAfterAction__LoadVoice_25550952(
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
  MissionNotifyManager_o *v3; // x0
  __int64 v4; // x1

  if ( (byte_4351AD0 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B70694(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    byte_4351AD0 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v3 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v3 )
    sub_B7076C(0LL, v4);
  MissionNotifyManager__EndPause(v3, 0LL);
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
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  char *_4__this; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  if ( (byte_4351AD1 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B70694(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    byte_4351AD1 = 1;
  }
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  *((_QWORD *)_4__this + 20) = 0LL;
  sub_B70630((BattleServantConfConponent_o *)(_4__this + 160), 0LL, v2, v3, v4, v5, v6, v7);
  _4__this = (char *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  *((_QWORD *)_4__this + 8) = 0LL;
  sub_B70630((BattleServantConfConponent_o *)(_4__this + 64), 0LL, v10, v11, v12, v13, v14, v15);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  _4__this = (char *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2CE9CB0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !_4__this
    || (MissionNotifyManager__EndPause((MissionNotifyManager_o *)_4__this, 0LL),
        (_4__this = (char *)this->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_B7076C(_4__this, method);
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
    sub_B7076C(0LL, method);
  QuestAfterAction__SetState(_4__this, 2, 0LL);
}