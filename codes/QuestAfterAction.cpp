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

  if ( (byte_42AFC52 & 1) == 0 )
  {
    sub_B52984(&BlankEarthQuestAfterAction_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
    sub_B52984(&System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo);
    sub_B52984(&System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
    sub_B52984(&QuestAfterAction_TitleInfoControlCallback_TypeInfo);
    byte_42AFC52 = 1;
  }
  v3 = (QuestAfterAction_TitleInfoControlCallback_o *)sub_B52A54(QuestAfterAction_TitleInfoControlCallback_TypeInfo);
  QuestAfterAction_TitleInfoControlCallback___ctor(v3, 0LL);
  this->fields._TitleInfoCtrlCallback_k__BackingField = v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._TitleInfoCtrlCallback_k__BackingField,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (BlankEarthQuestAfterAction_o *)sub_B52A54(BlankEarthQuestAfterAction_TypeInfo);
  BlankEarthQuestAfterAction___ctor(v10, 0LL);
  this->fields._BlankEarthQuestAfterAction_k__BackingField = v10;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields._BlankEarthQuestAfterAction_k__BackingField,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B52A54(System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v17,
    (const MethodInfo_2F3E9EC *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____ctor__);
  this->fields.commandTypeIds = (struct System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___o *)v17;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.commandTypeIds,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)sub_B52A54(System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare____ctor(
    v24,
    (const MethodInfo_2F27154 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___ctor__);
  this->fields.svtVoices = (struct System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__o *)v24;
  sub_B52920(
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
    (const MethodInfo_2B7611C *)Method_SingletonMonoBehaviour_QuestAfterAction___ctor__);
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
  sub_B52920(p_endAct, 0LL, v2, v3, v4, v5, v6, v7);
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
  System_String_o *String_35644948; // x22
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
  bool IsOpenQuestBehaviorCond; // w0
  __int64 v54; // x8
  System_Int32_array **v55; // x0
  unsigned int **p_commandBuf; // x21
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  int *commandBuf; // x8
  unsigned __int64 v64; // x23
  il2cpp_array_size_t v65; // w22
  __int64 v66; // x24
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  __int64 v73; // x8
  System_Int32_array **v74; // x1
  System_String_o **v75; // x20
  const MethodInfo *v76; // x2
  int v77; // w8
  System_String_o *v78; // x26
  int v79; // w8
  unsigned int **v80; // x25
  QuestAfterAction_o *v81; // x21
  System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *svtVoices; // x26
  System_String_o *v83; // x28
  System_String_array *v84; // x19
  QuestAfterAction_VoiceInfo_o *v85; // x27
  int v86; // w8
  unsigned int v87; // w8
  System_String_o *Item; // x26
  const MethodInfo *v89; // x1
  QuestAfterAction_o *v90; // x0
  const MethodInfo *v91; // x2
  __int64 v92; // x8
  __int64 v93; // x25
  unsigned __int64 v94; // x20
  unsigned int *v95; // x20
  System_String_array **v96; // x2
  System_String_array **v97; // x3
  System_Boolean_array **v98; // x4
  System_Int32_array **v99; // x5
  System_Int32_array *v100; // x6
  System_Int32_array *v101; // x7
  unsigned int *v102; // x0
  TerminalPramsManager_c *v103; // x0
  QuestMaster_o *v104; // x19
  TerminalPramsManager_c *v105; // x0
  BalanceConfig_c *v106; // x8
  int32_t WarId_k__BackingField; // w19
  int32_t v108; // w19
  TerminalPramsManager_c *v109; // x0
  TerminalPramsManager_c *v110; // x0
  TerminalPramsManager_c *v111; // x0
  BalanceConfig_c *v112; // x8
  int32_t v113; // w20
  TerminalPramsManager_c *v114; // x0
  TerminalPramsManager_c *v115; // x0
  TerminalPramsManager_c *v116; // x0
  __int64 v117; // x0
  __int64 v118; // x0
  int32_t sId; // [xsp+8h] [xbp-68h]
  int32_t svtId; // [xsp+Ch] [xbp-64h] BYREF
  WarEntity_o *v121; // [xsp+10h] [xbp-60h] BYREF
  QuestEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  v4 = this;
  if ( (byte_42AFC38 & 1) == 0 )
  {
    sub_B52984(&BalanceConfig_TypeInfo);
    sub_B52984(&bool_TypeInfo);
    sub_B52984(&char___TypeInfo);
    sub_B52984(&QuestAfterAction_Command___TypeInfo);
    sub_B52984(&QuestAfterAction_Command_TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_WarMaster___);
    sub_B52984(&Method_DataManager_GetMaster_BlankEarthSpotMaster___);
    sub_B52984(&Method_DataManager_GetMaster_QuestBehaviorMaster___);
    sub_B52984(&Method_DataManager_GetMaster_QuestMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ShopMaster___);
    sub_B52984(&Method_DataManager_GetMaster_WarMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    sub_B52984(&Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    sub_B52984(&QuestAfterAction_VoiceInfo_TypeInfo);
    this = (QuestAfterAction_o *)sub_B52984(&StringLiteral_16399/*"afterActionBk"*/);
    byte_42AFC38 = 1;
  }
  v121 = 0LL;
  entity = 0LL;
  svtId = 0;
  *(_QWORD *)&v4->fields.ActionMapTargetType = -1LL;
  *(_WORD *)&v4->fields.isLoadedVoice = 0;
  if ( isBeforeAction )
  {
    if ( System_Linq_Enumerable__Any_KeyValuePair_int__QuestAfterAction_VoiceInfo__(
           (System_Collections_Generic_IEnumerable_TSource__o *)v4->fields.svtVoices,
           (const MethodInfo_1B4FDBC *)Method_System_Linq_Enumerable_Any_KeyValuePair_int__QuestAfterAction_VoiceInfo____) )
    {
      QuestAfterAction__releaseVoice(v4, v5);
    }
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42AC2B5 )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC2B5 = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    QuestId_k__BackingField = v7->static_fields->_QuestId_k__BackingField;
    if ( !byte_42AC2B6 )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
      byte_42AC2B6 = 1;
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
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42AC2A0 )
  {
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AC2A0 = 1;
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
    goto LABEL_338;
  if ( *(_QWORD *)(v13 + 448) )
  {
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
    }
    if ( !byte_42AC2A0 )
    {
      sub_B52984(&TerminalSceneComponent_TypeInfo);
      byte_42AC2A0 = 1;
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
      goto LABEL_338;
    v15 = *(_QWORD *)(v14 + 448);
    if ( !v15 )
      goto LABEL_338;
    v16 = *(_DWORD *)(v15 + 20);
    if ( !byte_42AC2A0 )
    {
      sub_B52984(&TerminalSceneComponent_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalSceneComponent_TypeInfo;
      byte_42AC2A0 = 1;
    }
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      Master_WarQuestSelectionMaster = (__int64)TerminalSceneComponent_TypeInfo;
    }
    v17 = **(_QWORD **)(Master_WarQuestSelectionMaster + 184);
    if ( !v17 )
      goto LABEL_338;
    v18 = *(_QWORD *)(v17 + 448);
    if ( !v18 )
      goto LABEL_338;
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
      if ( !byte_42AC2A0 )
      {
        sub_B52984(&TerminalSceneComponent_TypeInfo);
        byte_42AC2A0 = 1;
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
        goto LABEL_338;
      v24 = *(_QWORD *)(v23 + 448);
      if ( !v24 )
        goto LABEL_338;
      v9 = *(System_String_array **)(v24 + 32);
      if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !DataManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      }
      Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_338;
      Master_WarQuestSelectionMaster = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                  v16,
                                                  (const MethodInfo_23E22D8 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_338;
      v22 = *(_DWORD *)(Master_WarQuestSelectionMaster + 24);
      Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_WarMaster___);
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
      if ( !byte_42AC2A0 )
      {
        sub_B52984(&TerminalSceneComponent_TypeInfo);
        byte_42AC2A0 = 1;
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
        goto LABEL_338;
      v21 = *(_QWORD *)(v20 + 448);
      if ( !v21 )
        goto LABEL_338;
      if ( !Instance )
        goto LABEL_338;
      v9 = *(System_String_array **)(v21 + 32);
      Master_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)Instance,
                                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMissionMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_338;
      Master_WarQuestSelectionMaster = (__int64)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                  v19,
                                                  (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_338;
      v22 = *(_DWORD *)(Master_WarQuestSelectionMaster + 28);
      Master_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                  (DataManager_o *)Instance,
                                                  (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_338;
    }
    Master_WarQuestSelectionMaster = (__int64)WarMaster__getByEventId(
                                                (WarMaster_o *)Master_WarQuestSelectionMaster,
                                                v22,
                                                0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_338;
    v25 = *(_DWORD *)(Master_WarQuestSelectionMaster + 16);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42AC2A4 )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC2A4 = 1;
    }
    v26 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v26 = TerminalPramsManager_TypeInfo;
    }
    v26->static_fields->_WarId_k__BackingField = v25;
    if ( !byte_42AC2A0 )
    {
      sub_B52984(&TerminalSceneComponent_TypeInfo);
      byte_42AC2A0 = 1;
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
      goto LABEL_338;
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
  if ( !byte_42AC2B7 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2B7 = 1;
  }
  v28 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v28 = TerminalPramsManager_TypeInfo;
  }
  if ( !v28->static_fields->_IsPhaseClear_k__BackingField
    && UnityEngine_PlayerPrefs__HasKey((System_String_o *)StringLiteral_16399/*"afterActionBk"*/, 0LL) )
  {
    String_35644948 = UnityEngine_PlayerPrefs__GetString_35644948((System_String_o *)StringLiteral_16399/*"afterActionBk"*/, 0LL);
    Master_WarQuestSelectionMaster = sub_B5299C(char___TypeInfo, 1LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_338;
    v10 = Master_WarQuestSelectionMaster;
    if ( !*(_DWORD *)(Master_WarQuestSelectionMaster + 24) )
      goto LABEL_453;
    *(_WORD *)(Master_WarQuestSelectionMaster + 32) = 44;
    if ( !String_35644948 )
      goto LABEL_338;
    Master_WarQuestSelectionMaster = (__int64)System_String__Split(
                                                String_35644948,
                                                (System_Char_array *)Master_WarQuestSelectionMaster,
                                                0LL);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_338;
    v30 = Master_WarQuestSelectionMaster;
    if ( !*(_DWORD *)(Master_WarQuestSelectionMaster + 24) )
      goto LABEL_453;
    v31 = System_Int32__Parse(*(System_String_o **)(Master_WarQuestSelectionMaster + 32), 0LL);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42AC2A6 )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC2A6 = 1;
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
      goto LABEL_453;
    v32 = System_Int32__Parse(*(System_String_o **)(v30 + 40), 0LL);
    if ( !byte_42AC2A7 )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC2A7 = 1;
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
      goto LABEL_453;
    v33 = *(System_String_o **)(v30 + 48);
    if ( (BYTE3(bool_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !bool_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(bool_TypeInfo);
    v34 = System_Boolean__Parse(v33, 0LL);
    if ( !byte_42AC2D0 )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC2D0 = 1;
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
      goto LABEL_453;
    v35 = System_Boolean__Parse(*(System_String_o **)(v30 + 56), 0LL);
    if ( !byte_42AC2D1 )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC2D1 = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    *(_BYTE *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 101LL) = v35;
    if ( !byte_42AC2C7 )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
      byte_42AC2C7 = 1;
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
                                                            (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_WarMaster___);
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42AC2B5 )
      {
        sub_B52984(&TerminalPramsManager_TypeInfo);
        byte_42AC2B5 = 1;
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
        v38 = QuestId;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_42AC2BD )
        {
          sub_B52984(&TerminalPramsManager_TypeInfo);
          byte_42AC2BD = 1;
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
        if ( !byte_42AC2A4 )
        {
          sub_B52984(&TerminalPramsManager_TypeInfo);
          v39 = TerminalPramsManager_TypeInfo;
          byte_42AC2A4 = 1;
        }
        if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v39);
          v39 = TerminalPramsManager_TypeInfo;
        }
        v39->static_fields->_WarId_k__BackingField = id;
        v41 = TerminalPramsManager__CheckIsOrdealCallWarClear(v38, 0LL);
        if ( !byte_42AC2EF )
        {
          sub_B52984(&TerminalPramsManager_TypeInfo);
          byte_42AC2EF = 1;
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
  if ( !byte_42AC2BB )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2BB = 1;
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
    if ( !byte_42AC2BC )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC2BC = 1;
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
  if ( !byte_42AC2B7 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2B7 = 1;
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
    v44 = (QuestPhaseDetailAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42AC2B5 )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC2B5 = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    v45 = *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 16LL);
    if ( !byte_42AC2B6 )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
      byte_42AC2B6 = 1;
    }
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !v44 )
      goto LABEL_338;
    v9 = QuestPhaseDetailAddMaster__GetAfterAction(
           v44,
           v45,
           *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 20LL) + 1,
           0LL);
    if ( v9 )
      goto LABEL_261;
    v46 = (QuestPhaseDetailMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                        (DataManager_o *)Instance,
                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42AC2B5 )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC2B5 = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    v47 = *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 16LL);
    if ( !byte_42AC2B6 )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
      byte_42AC2B6 = 1;
    }
    if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0
      && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
    {
      j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !v46 )
      goto LABEL_338;
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
  if ( !byte_42AC2C7 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2C7 = 1;
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
  if ( !byte_42AC2B5 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2B5 = 1;
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
  v49 = *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 16LL);
  Master_WarQuestSelectionMaster = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_338;
  v50 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
          v49,
          (const MethodInfo_23E22D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( v50 )
    v9 = *(System_String_array **)&v50->fields.eventId;
  else
LABEL_260:
    v9 = 0LL;
LABEL_261:
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v51 = (QuestBehaviorMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestBehaviorMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2B5 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2B5 = 1;
  }
  Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
  }
  v52 = *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 16LL);
  if ( !byte_42AC2B6 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    byte_42AC2B6 = 1;
  }
  if ( (*(_BYTE *)(Master_WarQuestSelectionMaster + 307) & 4) != 0 && !*(_DWORD *)(Master_WarQuestSelectionMaster + 224) )
  {
    j_il2cpp_runtime_class_init_0(Master_WarQuestSelectionMaster);
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
  }
  if ( !v51 )
    goto LABEL_338;
  IsOpenQuestBehaviorCond = QuestBehaviorMaster__IsOpenQuestBehaviorCond(
                              v51,
                              v52,
                              *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 20LL) + 1,
                              7,
                              0LL);
  if ( !v9 || IsOpenQuestBehaviorCond || (v54 = *(_QWORD *)&v9->max_length, (int)v54 < 2) || (v54 & 1) != 0 )
  {
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16399/*"afterActionBk"*/, 0LL);
    return;
  }
  v55 = (System_Int32_array **)sub_B5299C(QuestAfterAction_Command___TypeInfo, (unsigned int)v54 >> 1);
  v4->fields.commandBuf = (struct QuestAfterAction_Command_array *)v55;
  p_commandBuf = (unsigned int **)&v4->fields.commandBuf;
  sub_B52920((BattleServantConfConponent_o *)&v4->fields.commandBuf, v55, v57, v58, v59, v60, v61, v62);
  commandBuf = (int *)v4->fields.commandBuf;
  if ( !commandBuf )
    goto LABEL_338;
  v64 = 0LL;
  v65 = 0;
  while ( (__int64)v64 < commandBuf[6] )
  {
    v66 = sub_B52A54(QuestAfterAction_Command_TypeInfo);
    QuestAfterAction_Command___ctor((QuestAfterAction_Command_o *)v66, 0LL);
    if ( v65 >= v9->max_length )
      goto LABEL_453;
    Master_WarQuestSelectionMaster = System_Int32__Parse(v9->m_Items[v65], 0LL);
    if ( !v66 )
      goto LABEL_338;
    *(_DWORD *)(v66 + 16) = Master_WarQuestSelectionMaster;
    v73 = (int)v65 | 1LL;
    if ( (unsigned int)v73 >= v9->max_length )
      goto LABEL_453;
    v74 = (System_Int32_array **)v9->m_Items[v73];
    *(_QWORD *)(v66 + 24) = v74;
    v75 = (System_String_o **)(v66 + 24);
    sub_B52920((BattleServantConfConponent_o *)(v66 + 24), v74, v67, v68, v69, v70, v71, v72);
    if ( !v4->fields.hasFadeCommand )
    {
      v77 = *(_DWORD *)(v66 + 16);
      if ( v77 == 520 || v77 == 405 )
        v4->fields.hasFadeCommand = 1;
    }
    if ( !v65 && !v4->fields.isRequestedStopBgm && *(_DWORD *)(v66 + 16) == 850 )
      v4->fields.isRequestedStopBgm = 1;
    if ( (v4->fields.MapMoveBeforeFocusSpotId & 0x80000000) != 0 && *(_DWORD *)(v66 + 16) == 350 )
    {
      v78 = *v75;
      Master_WarQuestSelectionMaster = sub_B5299C(char___TypeInfo, 1LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_338;
      v10 = Master_WarQuestSelectionMaster;
      if ( !*(_DWORD *)(Master_WarQuestSelectionMaster + 24) )
        goto LABEL_453;
      *(_WORD *)(Master_WarQuestSelectionMaster + 32) = 44;
      if ( !v78 )
        goto LABEL_338;
      Master_WarQuestSelectionMaster = (__int64)System_String__Split(
                                                  v78,
                                                  (System_Char_array *)Master_WarQuestSelectionMaster,
                                                  0LL);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_338;
      if ( *(int *)(Master_WarQuestSelectionMaster + 24) >= 4 )
      {
        Master_WarQuestSelectionMaster = System_Int32__Parse(
                                           *(System_String_o **)(Master_WarQuestSelectionMaster + 56),
                                           0LL);
        v4->fields.MapMoveBeforeFocusSpotId = Master_WarQuestSelectionMaster;
      }
    }
    if ( v4->fields.IsMoveToEventRewardShop )
      goto LABEL_307;
    v79 = *(_DWORD *)(v66 + 16);
    if ( v79 == 700 )
    {
      v4->fields.IsMoveToEventRewardShop = 1;
LABEL_307:
      v79 = *(_DWORD *)(v66 + 16);
    }
    if ( v79 == 800 )
    {
      Master_WarQuestSelectionMaster = (__int64)QuestAfterAction_Command__GetAvailableRandomVoice(
                                                  (QuestAfterAction_Command_o *)v66,
                                                  &svtId,
                                                  0LL);
      if ( Master_WarQuestSelectionMaster )
      {
        v80 = p_commandBuf;
        v81 = v4;
        svtVoices = (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare__o *)v4->fields.svtVoices;
        v83 = (System_String_o *)Master_WarQuestSelectionMaster;
        v84 = v9;
        sId = svtId;
        v85 = (QuestAfterAction_VoiceInfo_o *)sub_B52A54(QuestAfterAction_VoiceInfo_TypeInfo);
        QuestAfterAction_VoiceInfo___ctor(v85, sId, v83, 0LL);
        if ( !svtVoices )
          goto LABEL_338;
        System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_EvalValueSquare___Add(
          svtVoices,
          v64,
          (WarBoardEvalValueSquare_EvalValueSquare_o *)v85,
          (const MethodInfo_2F27D08 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Add__);
        v9 = v84;
        v4 = v81;
        p_commandBuf = v80;
      }
    }
    v86 = *(_DWORD *)(v66 + 16);
    if ( v86 <= 114 )
    {
      v87 = v86 - 100;
      if ( v87 >= 0xF || ((0x7C1Fu >> v87) & 1) == 0 )
        goto LABEL_325;
      v10 = 0LL;
    }
    else if ( (unsigned int)(v86 - 200) < 6 )
    {
      v10 = 1LL;
    }
    else if ( (unsigned int)(v86 - 400) < 0xA )
    {
      v10 = 2LL;
    }
    else
    {
      if ( v86 != 550 )
        goto LABEL_325;
      v10 = 3LL;
    }
    Master_WarQuestSelectionMaster = (__int64)v4->fields.commandTypeIds;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_338;
    Item = System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
             (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)Master_WarQuestSelectionMaster,
             v10,
             (const MethodInfo_2F3F4DC *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    Master_WarQuestSelectionMaster = QuestAfterAction__ExtractCommandTargetId((QuestAfterAction_Command_o *)v66, v89);
    if ( !Item )
      goto LABEL_338;
    System_Collections_Generic_List_int___Add(
      (System_Collections_Generic_List_int__o *)Item,
      Master_WarQuestSelectionMaster,
      (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
LABEL_325:
    if ( v4->fields.ActionMapTargetId <= 0 )
      QuestAfterAction__SetActionMap(v4, (QuestAfterAction_Command_o *)v66, v76);
    if ( *(_DWORD *)(v66 + 16) == 102 )
    {
      v90 = (QuestAfterAction_o *)System_Int32__Parse(*v75, 0LL);
      Master_WarQuestSelectionMaster = (__int64)QuestAfterAction__GetMapGimmickId(v90, (int32_t)v90, v91);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_338;
      v92 = *(_QWORD *)(Master_WarQuestSelectionMaster + 24);
      v93 = Master_WarQuestSelectionMaster;
      if ( (int)v92 >= 1 )
      {
        v94 = 0LL;
        while ( v94 < (unsigned int)v92 )
        {
          Master_WarQuestSelectionMaster = (__int64)v4->fields.invalidMapGimmickIdList;
          if ( !Master_WarQuestSelectionMaster )
            goto LABEL_338;
          System_Collections_Generic_List_int___Add(
            (System_Collections_Generic_List_int__o *)Master_WarQuestSelectionMaster,
            *(_DWORD *)(v93 + 32 + 4 * v94),
            (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
          LODWORD(v92) = *(_DWORD *)(v93 + 24);
          if ( (__int64)++v94 >= (int)v92 )
            goto LABEL_334;
        }
LABEL_453:
        v117 = sub_B52A88(Master_WarQuestSelectionMaster);
        sub_B52A28(v117, 0LL);
      }
    }
LABEL_334:
    v95 = *p_commandBuf;
    if ( !*p_commandBuf )
      goto LABEL_338;
    Master_WarQuestSelectionMaster = sub_B52A44(v66, *(_QWORD *)(*(_QWORD *)v95 + 64LL));
    if ( !Master_WarQuestSelectionMaster )
    {
      v118 = sub_B52A7C(0LL);
      sub_B52A28(v118, 0LL);
    }
    if ( v64 >= v95[6] )
      goto LABEL_453;
    v102 = &v95[2 * v64];
    *((_QWORD *)v102 + 4) = v66;
    sub_B52920((BattleServantConfConponent_o *)(v102 + 8), (System_Int32_array **)v66, v96, v97, v98, v99, v100, v101);
    commandBuf = (int *)*p_commandBuf;
    v65 += 2;
    ++v64;
    if ( !*p_commandBuf )
      goto LABEL_338;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2B7 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2B7 = 1;
  }
  v103 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v103 = TerminalPramsManager_TypeInfo;
  }
  if ( v103->static_fields->_IsPhaseClear_k__BackingField )
  {
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v104 = (QuestMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestMaster___);
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    }
    if ( !byte_42AC2B5 )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AC2B5 = 1;
    }
    Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      Master_WarQuestSelectionMaster = (__int64)TerminalPramsManager_TypeInfo;
    }
    if ( !v104 )
      goto LABEL_338;
    if ( QuestMaster__TryGetQuestEntity(
           v104,
           &entity,
           *(_DWORD *)(*(_QWORD *)(Master_WarQuestSelectionMaster + 184) + 16LL),
           0LL) )
    {
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      }
      if ( !byte_42AC2A2 )
      {
        sub_B52984(&TerminalPramsManager_TypeInfo);
        byte_42AC2A2 = 1;
      }
      v105 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v105 = TerminalPramsManager_TypeInfo;
      }
      v106 = BalanceConfig_TypeInfo;
      WarId_k__BackingField = v105->static_fields->_WarId_k__BackingField;
      if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v106 = BalanceConfig_TypeInfo;
      }
      if ( WarId_k__BackingField == v106->static_fields->OrdealCallWarId )
      {
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_BlankEarthSpotMaster___);
        if ( entity && Master_WarQuestSelectionMaster )
        {
          Master_WarQuestSelectionMaster = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                             (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                             &v121,
                                             entity->fields.spotId,
                                             (const MethodInfo_23E2334 *)Method_DataMasterBase_BlankEarthSpotMaster__BlankEarthSpotEntity__int__TryGetEntity__);
          if ( (Master_WarQuestSelectionMaster & 1) == 0 )
            goto LABEL_390;
          if ( v121 )
          {
            v108 = v121->fields.id;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            }
            if ( !byte_42ADADB )
            {
              sub_B52984(&TerminalPramsManager_TypeInfo);
              byte_42ADADB = 1;
            }
            v109 = TerminalPramsManager_TypeInfo;
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              v109 = TerminalPramsManager_TypeInfo;
            }
            v109->static_fields->_BlankEarthAfterActionFocusSpotId_k__BackingField = v108;
            goto LABEL_390;
          }
        }
LABEL_338:
        sub_B52A5C(Master_WarQuestSelectionMaster, v10);
      }
    }
  }
LABEL_390:
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2AB )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2AB = 1;
  }
  v110 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v110 = TerminalPramsManager_TypeInfo;
  }
  v110->static_fields->_IsAutoResume_k__BackingField = 1;
  if ( !byte_42AC2AA )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    v110 = TerminalPramsManager_TypeInfo;
    byte_42AC2AA = 1;
  }
  if ( (BYTE3(v110->vtable._0_Equals.methodPtr) & 4) != 0 && !v110->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v110);
    v110 = TerminalPramsManager_TypeInfo;
  }
  v110->static_fields->_DispState_k__BackingField = 2;
  if ( !byte_42AC2A2 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2A2 = 1;
  }
  v111 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v111 = TerminalPramsManager_TypeInfo;
  }
  v112 = BalanceConfig_TypeInfo;
  v113 = v111->static_fields->_WarId_k__BackingField;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v112 = BalanceConfig_TypeInfo;
  }
  v114 = TerminalPramsManager_TypeInfo;
  if ( v113 == v112->static_fields->OrdealCallWarId )
    goto LABEL_457;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2BC )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2BC = 1;
  }
  v114 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v114 = TerminalPramsManager_TypeInfo;
  }
  if ( v114->static_fields->_IsOrdealCallWarClear_k__BackingField )
  {
LABEL_457:
    if ( (BYTE3(v114->vtable._0_Equals.methodPtr) & 4) != 0 && !v114->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v114);
    if ( !byte_42AD172 )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      byte_42AD172 = 1;
    }
    v114 = TerminalPramsManager_TypeInfo;
    if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v114 = TerminalPramsManager_TypeInfo;
    }
    v114->static_fields->_BlankEarthSpotId_k__BackingField = 0;
    if ( !byte_42AC2BC )
    {
      sub_B52984(&TerminalPramsManager_TypeInfo);
      v114 = TerminalPramsManager_TypeInfo;
      byte_42AC2BC = 1;
    }
    if ( (BYTE3(v114->vtable._0_Equals.methodPtr) & 4) != 0 && !v114->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v114);
      v114 = TerminalPramsManager_TypeInfo;
    }
    if ( !v114->static_fields->_IsOrdealCallWarClear_k__BackingField )
    {
      if ( (BYTE3(v114->vtable._0_Equals.methodPtr) & 4) != 0 && !v114->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v114);
      if ( !byte_42AC2AA )
      {
        sub_B52984(&TerminalPramsManager_TypeInfo);
        byte_42AC2AA = 1;
      }
      v115 = TerminalPramsManager_TypeInfo;
      if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v115 = TerminalPramsManager_TypeInfo;
      }
      v115->static_fields->_DispState_k__BackingField = 3;
      v114 = TerminalPramsManager_TypeInfo;
    }
  }
  if ( (BYTE3(v114->vtable._0_Equals.methodPtr) & 4) != 0 && !v114->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v114);
  if ( !byte_42AC2D7 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2D7 = 1;
  }
  v116 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v116 = TerminalPramsManager_TypeInfo;
  }
  v116->static_fields->_SpotId_k__BackingField = -1;
}


void __fastcall QuestAfterAction__DeleteContinueData(const MethodInfo *method)
{
  if ( (byte_42AFC36 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_16399/*"afterActionBk"*/);
    byte_42AFC36 = 1;
  }
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16399/*"afterActionBk"*/, 0LL);
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
  if ( (byte_42AFC39 & 1) == 0 )
  {
    sub_B52984(&char___TypeInfo);
    command = (QuestAfterAction_Command_o *)sub_B52984(&StringLiteral_709/*","*/);
    byte_42AFC39 = 1;
  }
  if ( !v2 )
    goto LABEL_13;
  command = (QuestAfterAction_Command_o *)v2->fields.param;
  if ( !command )
    goto LABEL_13;
  v3 = System_String__Contains((System_String_o *)command, (System_String_o *)StringLiteral_709/*","*/, 0LL);
  param = v2->fields.param;
  if ( v3 )
  {
    command = (QuestAfterAction_Command_o *)sub_B5299C(char___TypeInfo, 1LL);
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
          v6 = sub_B52A88(command);
          sub_B52A28(v6, 0LL);
        }
      }
    }
LABEL_13:
    sub_B52A5C(command, method);
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

  if ( (byte_42AFC46 & 1) == 0 )
  {
    sub_B52984(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__73_TypeInfo);
    byte_42AFC46 = 1;
  }
  v5 = sub_B52A54(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__73_TypeInfo);
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__73___ctor(
    (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__73_o *)v5,
    -2,
    0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  *(_QWORD *)(v5 + 56) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 56), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 48) = commandEnumerable;
  sub_B52920(
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

  if ( (byte_42AFC3A & 1) == 0 )
  {
    sub_B52984(&Method_System_Array_Empty_QuestAfterAction_Command___);
    sub_B52984(&QuestAfterAction_Command___TypeInfo);
    sub_B52984(&QuestAfterAction_Command_TypeInfo);
    byte_42AFC3A = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)actionVals, 0LL);
  if ( (IsNullOrEmpty & 1) != 0 )
  {
    v5 = (_QWORD **)Method_System_Array_Empty_QuestAfterAction_Command___;
    v6 = **((_QWORD **)Method_System_Array_Empty_QuestAfterAction_Command___ + 6);
    v7 = *(_WORD *)(v6 + 306);
    if ( (v7 & 1) == 0 )
    {
      sub_AEB684(**((_QWORD **)Method_System_Array_Empty_QuestAfterAction_Command___ + 6));
      v7 = *(_WORD *)(v6 + 306);
    }
    if ( (v7 & 0x400) != 0 )
    {
      v8 = *v5[6];
      if ( (*(_BYTE *)(v8 + 306) & 1) == 0 )
        sub_AEB684(*v5[6]);
      if ( !*(_DWORD *)(v8 + 224) )
      {
        v9 = *v5[6];
        if ( (*(_BYTE *)(v9 + 306) & 1) == 0 )
          sub_AEB684(*v5[6]);
        j_il2cpp_runtime_class_init_0(v9);
      }
    }
    v10 = *v5[6];
    if ( (*(_BYTE *)(v10 + 306) & 1) == 0 )
      sub_AEB684(*v5[6]);
    return **(QuestAfterAction_Command_array ***)(v10 + 184);
  }
  else
  {
    if ( !actionVals
      || (IsNullOrEmpty = sub_B5299C(
                            QuestAfterAction_Command___TypeInfo,
                            (unsigned int)((signed int)actionVals->max_length / 2))) == 0 )
    {
LABEL_28:
      sub_B52A5C(IsNullOrEmpty, v4);
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
        v16 = sub_B52A54(QuestAfterAction_Command_TypeInfo);
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
        sub_B52920((BattleServantConfConponent_o *)(v16 + 24), v23, v17, v18, v19, v20, v21, v22);
        IsNullOrEmpty = sub_B52A44(v16, v11->obj.klass->_1.element_class);
        if ( !IsNullOrEmpty )
        {
          v32 = sub_B52A7C(0LL);
          sub_B52A28(v32, 0LL);
        }
        if ( v13 >= v11->max_length )
        {
LABEL_27:
          v31 = sub_B52A88(IsNullOrEmpty);
          sub_B52A28(v31, 0LL);
        }
        *(_QWORD *)(v14 + 8 * v13) = v16;
        sub_B52920(
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
  System_String_array *result; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x20
  System_String_array *v11; // x19

  if ( (byte_42AFC51 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_B52984(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B52984(&Method_System_Linq_Enumerable_Any_string___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AFC51 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = (QuestPhaseDetailAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        Instance,
                                                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2B5 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2B5 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  items = (int32_t)Instance[1].fields.saveNameList->fields._items;
  if ( !byte_42AC2B6 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_42AC2B6 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_37;
  result = QuestPhaseDetailMaster__GetAfterAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         Instance,
                                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2B5 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2B5 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v10 )
LABEL_37:
    sub_B52A5C(Instance, v6);
  result = (System_String_array *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v10,
                                    (int32_t)Instance[1].fields.saveNameList->fields._items,
                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( result )
  {
    v11 = result;
    if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result->m_Items[8],
           (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_string___) )
    {
      return (System_String_array *)v11->m_Items[8];
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
  System_String_array *result; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *v10; // x20
  System_String_array *v11; // x19

  if ( (byte_42AFC50 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_B52984(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B52984(&Method_System_Linq_Enumerable_Any_string___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AFC50 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  MasterData_WarQuestSelectionMaster = (QuestPhaseDetailAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                        Instance,
                                                                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestPhaseDetailAddMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2B5 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2B5 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  items = (int32_t)Instance[1].fields.saveNameList->fields._items;
  if ( !byte_42AC2B6 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
    byte_42AC2B6 = 1;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
  if ( !Instance )
    goto LABEL_37;
  result = QuestPhaseDetailMaster__GetBeforeAction((QuestPhaseDetailMaster_o *)Instance, questId, phase, 0LL);
  if ( result )
    return result;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_37;
  v10 = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                         Instance,
                                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestMaster___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2B5 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2B5 = 1;
  }
  Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    Instance = (DataManager_o *)TerminalPramsManager_TypeInfo;
  }
  if ( !v10 )
LABEL_37:
    sub_B52A5C(Instance, v6);
  result = (System_String_array *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                    v10,
                                    (int32_t)Instance[1].fields.saveNameList->fields._items,
                                    (const MethodInfo_23E22D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
  if ( result )
  {
    v11 = result;
    if ( System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
           (System_Collections_Generic_IEnumerable_TSource__o *)result->m_Items[7],
           (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_string___) )
    {
      return (System_String_array *)v11->m_Items[7];
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
      return dword_327BDB0[commandId - 100];
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
        const MethodInfo_1F73BD8 *method)
{
  QuestAfterAction_o *v9; // x23
  UnityEngine_Object_o *MapGameObject; // x20

  v9 = this;
  if ( (byte_42B41B8 & 1) == 0 )
  {
    this = (QuestAfterAction_o *)sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B41B8 = 1;
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
    sub_B52A5C(this, *(_QWORD *)&comType);
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
  if ( (byte_42AFC4C & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    this = (QuestAfterAction_o *)sub_B52984(&SrcSpotBasePrefab_TypeInfo);
    byte_42AFC4C = 1;
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
        sub_B52A5C(this, *(_QWORD *)&comType);
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

  if ( (byte_42AFC3B & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_MapGimmickMaster___);
    sub_B52984(&Method_DataMasterBase_getEntitys_MapGimmickEntity___);
    sub_B52984(&Method_System_Collections_Generic_List_int__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AFC3B = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
               (DataManager_o *)Instance,
               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_MapGimmickMaster___);
  if ( !Instance )
    goto LABEL_16;
  Instance = DataMasterBase__getEntitys_WarQuestSelectionEntity_(
               (DataMasterBase_o *)Instance,
               (const MethodInfo_1A4FA58 *)Method_DataMasterBase_getEntitys_MapGimmickEntity___);
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
        v13 = sub_B52A88(Instance);
        sub_B52A28(v13, 0LL);
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
          (const MethodInfo_3056FB0 *)Method_System_Collections_Generic_List_int__Add__);
      }
      v7 = v8[6];
      if ( (int)++v9 >= v7 )
        goto LABEL_14;
    }
LABEL_16:
    sub_B52A5C(Instance, v6);
  }
LABEL_14:
  if ( !v4 )
    goto LABEL_16;
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall QuestAfterAction__GetState(QuestAfterAction_o *this, const MethodInfo *method)
{
  QuestAfterAction_o *v2; // x19
  struct CStateManager_QuestAfterAction__o *fsm; // x8

  v2 = this;
  if ( (byte_42AFC4A & 1) == 0 )
  {
    this = (QuestAfterAction_o *)sub_B52984(&Method_CStateManager_QuestAfterAction__getState__);
    byte_42AFC4A = 1;
  }
  fsm = v2->fields.fsm;
  if ( !fsm )
    sub_B52A5C(this, method);
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

  if ( (byte_42AFC37 & 1) == 0 )
  {
    sub_B52984(&Method_CStateManager_QuestAfterAction___ctor__);
    sub_B52984(&Method_CStateManager_QuestAfterAction__add__);
    sub_B52984(&CStateManager_QuestAfterAction__TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_B52984(&Method_System_Collections_Generic_List_int__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_int___ctor__);
    sub_B52984(&System_Collections_Generic_List_int__TypeInfo);
    sub_B52984(&QuestAfterAction_StateAdditional_TypeInfo);
    sub_B52984(&QuestAfterAction_StateInstant_TypeInfo);
    sub_B52984(&QuestAfterAction_StateMain_TypeInfo);
    sub_B52984(&QuestAfterAction_StateNone_TypeInfo);
    byte_42AFC37 = 1;
  }
  p_fsm = &this->fields.fsm;
  if ( !this->fields.fsm )
  {
    v5 = (CStateManager_QAASpotStateController_IMapSpot__o *)sub_B52A54(CStateManager_QuestAfterAction__TypeInfo);
    CStateManager_QAASpotStateController_IMapSpot____ctor(
      v5,
      (QAASpotStateController_IMapSpot_o *)this,
      4,
      (const MethodInfo_2B925C4 *)Method_CStateManager_QuestAfterAction___ctor__);
    this->fields.fsm = (struct CStateManager_QuestAfterAction__o *)v5;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.fsm, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
    fsm = this->fields.fsm;
    v13 = (QuestAfterAction_StateNone_o *)sub_B52A54(QuestAfterAction_StateNone_TypeInfo);
    QuestAfterAction_StateNone___ctor(v13, 0LL);
    if ( !fsm )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      0,
      (IState_T__o *)v13,
      (const MethodInfo_2B92690 *)Method_CStateManager_QuestAfterAction__add__);
    v16 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v17 = (QuestAfterAction_StateMain_o *)sub_B52A54(QuestAfterAction_StateMain_TypeInfo);
    QuestAfterAction_StateMain___ctor(v17, 0LL);
    if ( !v16 )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v16,
      1,
      (IState_T__o *)v17,
      (const MethodInfo_2B92690 *)Method_CStateManager_QuestAfterAction__add__);
    v18 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v19 = (QuestAfterAction_StateAdditional_o *)sub_B52A54(QuestAfterAction_StateAdditional_TypeInfo);
    QuestAfterAction_StateAdditional___ctor(v19, 0LL);
    if ( !v18 )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v18,
      2,
      (IState_T__o *)v19,
      (const MethodInfo_2B92690 *)Method_CStateManager_QuestAfterAction__add__);
    v20 = (CStateManager_QAASpotStateController_IMapSpot__o *)*p_fsm;
    v21 = (QuestAfterAction_StateInstant_o *)sub_B52A54(QuestAfterAction_StateInstant_TypeInfo);
    QuestAfterAction_StateInstant___ctor(v21, 0LL);
    if ( !v20 )
      goto LABEL_21;
    CStateManager_QAASpotStateController_IMapSpot___add(
      v20,
      3,
      (IState_T__o *)v21,
      (const MethodInfo_2B92690 *)Method_CStateManager_QuestAfterAction__add__);
  }
  QuestAfterAction__SetState(this, 0, v2);
  this->fields.commandBuf = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.commandBuf, 0LL, v22, v23, v24, v25, v26, v27);
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
                                                                                        (const MethodInfo_2F3F814 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    v30 = this->fields.commandTypeIds;
    if ( ((unsigned __int8)commandTypeIds & 1) != 0 )
    {
      if ( !v30 )
        goto LABEL_21;
      commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
                                                                                          (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.commandTypeIds,
                                                                                          v29,
                                                                                          (const MethodInfo_2F3F4DC *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( !commandTypeIds )
        goto LABEL_21;
      System_Collections_Generic_List_int___Clear(
        (System_Collections_Generic_List_int__o *)commandTypeIds,
        (const MethodInfo_30573BC *)Method_System_Collections_Generic_List_int__Clear__);
    }
    else
    {
      v31 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v31,
        (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
      if ( !v30 )
        goto LABEL_21;
      System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int____set_Item(
        v30,
        v29,
        v31,
        (const MethodInfo_2F3F578 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___set_Item__);
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
                                                                        (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        this->fields.screenCollider = Component_srcLineSprite,
        sub_B52920(
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
    sub_B52A5C(commandTypeIds, v15);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)commandTypeIds, 0, 0LL);
  this->fields.lastDispSpot = 0LL;
  p_lastDispSpot = &this->fields.lastDispSpot;
  sub_B52920((BattleServantConfConponent_o *)p_lastDispSpot, 0LL, v40, v41, v42, v43, v44, v45);
  v46 = (System_Collections_Generic_List_int__o *)sub_B52A54(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v46,
    (const MethodInfo_3056254 *)Method_System_Collections_Generic_List_int___ctor__);
  *(p_lastDispSpot - 18) = (struct SrcSpotBasePrefab_o *)v46;
  sub_B52920(
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

  if ( (byte_42AFC3E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    byte_42AFC3E = 1;
  }
  commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.commandTypeIds;
  if ( !commandTypeIds )
    goto LABEL_9;
  if ( System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
         commandTypeIds,
         commandType,
         (const MethodInfo_2F3F814 *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___ContainsKey__) )
  {
    commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)this->fields.commandTypeIds;
    if ( commandTypeIds )
    {
      commandTypeIds = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
                                                                                          commandTypeIds,
                                                                                          commandType,
                                                                                          (const MethodInfo_2F3F4DC *)Method_System_Collections_Generic_Dictionary_QuestAfterAction_COMMAND_TYPE__List_int___get_Item__);
      if ( commandTypeIds )
        return System_Collections_Generic_List_int___Contains(
                 (System_Collections_Generic_List_int__o *)commandTypeIds,
                 commandTypeId,
                 (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__);
    }
LABEL_9:
    sub_B52A5C(commandTypeIds, *(_QWORD *)&commandType);
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
        v11 = sub_B52A88(this);
        sub_B52A28(v11, 0LL);
      }
      v8 = commandBuf->m_Items[v6];
      if ( !v8 )
LABEL_11:
        sub_B52A5C(this, *(_QWORD *)&spotId);
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

  if ( (byte_42AFC4F & 1) == 0 )
  {
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AFC4F = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42AC2A0 )
  {
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AC2A0 = 1;
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
    sub_B52A5C(v2, method);
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

  if ( (byte_42AFC42 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventMissionActionMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_EventMissionMaster___);
    sub_B52984(&Method_DataManager_GetMaster_EventMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ShopActionMaster___);
    sub_B52984(&Method_DataManager_GetMaster_ShopMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__get_Current__);
    sub_B52984(&EventMissionActionInfo_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AFC42 = 1;
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
  if ( !byte_42AC2A0 )
  {
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AC2A0 = 1;
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
      Master_WarQuestSelectionMaster = (char *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ShopMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_77;
      Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                 (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                 v4->fields.shopId,
                 (const MethodInfo_23E22D8 *)Method_DataMasterBase_ShopMaster__ShopEntity__int__GetEntity__);
      if ( Entity )
      {
        v12 = Entity;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (char *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_EventMaster___);
        if ( !Master_WarQuestSelectionMaster )
          goto LABEL_77;
        v13 = (EventEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                 (int32_t)v12->fields.age,
                                 (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
        if ( !v13 || !EventEntity__IsEventPeriod(v13, 0LL, 0LL) )
          goto LABEL_76;
        if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !DataManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        }
        Master_WarQuestSelectionMaster = (char *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_ShopActionMaster___);
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
          (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_ShopActionEntity__GetEnumerator__);
        v44 = v43;
        while ( 1 )
        {
          v14 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v44,
                  (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__MoveNext__);
          if ( !v14 )
            break;
          current = v44.fields.current;
          if ( !v44.fields.current )
            sub_B52A5C(v14, v15);
          if ( LODWORD(v44.fields.current[1].monitor) == 4 )
          {
            if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            }
            if ( !byte_42AC2F8 )
            {
              sub_B52984(&TerminalPramsManager_TypeInfo);
              byte_42AC2F8 = 1;
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
              sub_B52A5C(0LL, v18);
            klass = (System_Int32_array **)current[2].klass;
            TransitionInfo_k__BackingField->fields.afterActionVals = (struct System_String_array *)klass;
            sub_B52920(
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
              sub_B52A5C(v27, v28);
            v29->fields.optionId = (int32_t)current[2].monitor;
            break;
          }
        }
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v44,
          (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_ShopActionEntity__Dispose__);
      }
    }
  }
  else
  {
    Master_WarQuestSelectionMaster = (char *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_77;
    v7 = (DataManager_o *)Master_WarQuestSelectionMaster;
    Master_WarQuestSelectionMaster = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               (DataManager_o *)Master_WarQuestSelectionMaster,
                                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMissionActionAddMaster___);
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
      v10 = (EventMissionActionInfo_o *)sub_B52A54(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor_26957056(v10, v9, 0LL);
    }
    else
    {
      Master_WarQuestSelectionMaster = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 v7,
                                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMissionActionMaster___);
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
      v10 = (EventMissionActionInfo_o *)sub_B52A54(EventMissionActionInfo_TypeInfo);
      EventMissionActionInfo___ctor(v10, v31, 0LL);
    }
    Master_WarQuestSelectionMaster = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                               v7,
                                               (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMissionMaster___);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_77;
    v32 = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
            (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
            v4->fields.missionId,
            (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventMissionMaster__EventMissionEntity__int__GetEntity__);
    if ( v32 )
    {
      v33 = v32;
      Master_WarQuestSelectionMaster = (char *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                 v7,
                                                 (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventMaster___);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_77;
      Master_WarQuestSelectionMaster = (char *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                                 (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                 HIDWORD(v33->fields.age),
                                                 (const MethodInfo_23E22D8 *)Method_DataMasterBase_EventMaster__EventEntity__int__GetEntity__);
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_77;
      if ( EventEntity__IsEventPeriod((EventEntity_o *)Master_WarQuestSelectionMaster, 0LL, 0LL) )
      {
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_42AC2F8 )
        {
          sub_B52984(&TerminalPramsManager_TypeInfo);
          byte_42AC2F8 = 1;
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
            sub_B52920(
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
        sub_B52A5C(Master_WarQuestSelectionMaster, v3);
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

  if ( (byte_42AFC3F & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    sub_B52984(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    byte_42AFC3F = 1;
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
      sub_B52A5C(0LL, endAct);
    Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
               svtVoices,
               (const MethodInfo_2F27AAC *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    v7 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B52A54(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
      v7,
      (System_Collections_Generic_IEnumerable_T__o *)Values,
      (const MethodInfo_2FF0B38 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    QuestAfterAction__LoadVoice_24764820(
      this,
      (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o *)v7,
      endAct,
      v8);
  }
}


void __fastcall QuestAfterAction__LoadVoice_24764820(
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
  System_String_o *VoiceAssetName_30972712; // x19
  SoundManager_o *v35; // x20
  System_Action_o *v36; // x21

  while ( 1 )
  {
    if ( (byte_42AFC40 & 1) == 0 )
    {
      sub_B52984(&System_Action_TypeInfo);
      sub_B52984(&Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___);
      sub_B52984(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
      sub_B52984(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__get_Item__);
      sub_B52984(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      sub_B52984(&Method_QuestAfterAction___c__DisplayClass66_0__LoadVoice_b__0__);
      sub_B52984(&QuestAfterAction___c__DisplayClass66_0_TypeInfo);
      byte_42AFC40 = 1;
    }
    v10 = sub_B52A54(QuestAfterAction___c__DisplayClass66_0_TypeInfo);
    QuestAfterAction___c__DisplayClass66_0___ctor((QuestAfterAction___c__DisplayClass66_0_o *)v10, 0LL);
    if ( !v10 )
      goto LABEL_22;
    *(_QWORD *)(v10 + 16) = svtVInfos;
    v18 = (System_Collections_Generic_List_QuestAfterAction_VoiceInfo__o **)(v10 + 16);
    sub_B52920(
      (BattleServantConfConponent_o *)(v10 + 16),
      (System_Int32_array **)svtVInfos,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    *(_QWORD *)(v10 + 24) = this;
    sub_B52920((BattleServantConfConponent_o *)(v10 + 24), (System_Int32_array **)this, v19, v20, v21, v22, v23, v24);
    *(_QWORD *)(v10 + 32) = endAct;
    v25 = (System_Action_o **)(v10 + 32);
    sub_B52920((BattleServantConfConponent_o *)(v10 + 32), (System_Int32_array **)endAct, v26, v27, v28, v29, v30, v31);
    Instance = (CommonUI_o *)System_Linq_Enumerable__Any_WarBoardMovieHistoryManager_HistoryInfo_(
                               *(System_Collections_Generic_IEnumerable_TSource__o **)(v10 + 16),
                               (const MethodInfo_1B5080C *)Method_System_Linq_Enumerable_Any_QuestAfterAction_VoiceInfo___);
    if ( ((unsigned __int8)Instance & 1) == 0 )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, 0, 0LL);
        ActionExtensions__Call(*v25, 0LL);
        return;
      }
LABEL_22:
      sub_B52A5C(Instance, v11);
    }
    v7 = *v18;
    if ( !*v18 )
      goto LABEL_22;
    if ( !v7->fields._size )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
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
      (const MethodInfo_2FF32F4 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    svtVInfos = *v18;
    endAct = *v25;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v32 = *v18;
  if ( !*v18 )
    goto LABEL_22;
  if ( !v32->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
  v33 = v32->fields._items->m_Items[0];
  if ( !v33 )
    goto LABEL_22;
  VoiceAssetName_30972712 = ServantVoiceEntity__getVoiceAssetName_30972712(v33->fields.svtId, 0LL);
  v35 = (SoundManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  v36 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v36, (Il2CppObject *)v10, Method_QuestAfterAction___c__DisplayClass66_0__LoadVoice_b__0__, 0LL);
  if ( !v35 )
    goto LABEL_22;
  SoundManager__LoadAudioAssetStorage(v35, VoiceAssetName_30972712, v36, 1, 0LL);
}


System_String_o *__fastcall QuestAfterAction__MapObjName(
        QuestAfterAction_o *this,
        int32_t comType,
        int32_t id,
        const MethodInfo *method)
{
  if ( (byte_42AFC4E & 1) == 0 )
  {
    sub_B52984(&SrcSpotBasePrefab_TypeInfo);
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42AFC4E = 1;
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

  if ( (byte_42AFC48 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Clear__);
    byte_42AFC48 = 1;
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
    sub_B52A5C(screenCollider, v4);
  }
  System_Collections_Generic_List_int___Clear(
    (System_Collections_Generic_List_int__o *)screenCollider,
    (const MethodInfo_30573BC *)Method_System_Collections_Generic_List_int__Clear__);
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

  if ( (byte_42AFC44 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B52984(&Method_QuestAfterAction___c__DisplayClass70_0__Play_b__0__);
    sub_B52984(&QuestAfterAction___c__DisplayClass70_0_TypeInfo);
    byte_42AFC44 = 1;
  }
  v5 = sub_B52A54(QuestAfterAction___c__DisplayClass70_0_TypeInfo);
  QuestAfterAction___c__DisplayClass70_0___ctor((QuestAfterAction___c__DisplayClass70_0_o *)v5, 0LL);
  if ( !v5 )
    goto LABEL_11;
  *(_QWORD *)(v5 + 16) = endAct;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)endAct, v8, v9, v10, v11, v12, v13);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v6 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v6 )
LABEL_11:
    sub_B52A5C(v6, v7);
  MissionNotifyManager__StartPause(v6, 0LL);
  v14 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)v5, Method_QuestAfterAction___c__DisplayClass70_0__Play_b__0__, 0LL);
  this->fields.endAct = v14;
  sub_B52920(
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

  if ( (byte_42AFC45 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    sub_B52984(&Method_QuestAfterAction___c__DisplayClass71_0__PlaySpecifiedAction_b__0__);
    sub_B52984(&Method_QuestAfterAction___c__DisplayClass71_0__PlaySpecifiedAction_b__1__);
    sub_B52984(&QuestAfterAction___c__DisplayClass71_0_TypeInfo);
    byte_42AFC45 = 1;
  }
  v7 = sub_B52A54(QuestAfterAction___c__DisplayClass71_0_TypeInfo);
  QuestAfterAction___c__DisplayClass71_0___ctor((QuestAfterAction___c__DisplayClass71_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_11;
  *(_QWORD *)(v7 + 16) = this;
  sub_B52920((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = finishCallback;
  sub_B52920(
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
  sub_B52920(
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
  v8 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v8 )
LABEL_11:
    sub_B52A5C(v8, v9);
  MissionNotifyManager__StartPause(v8, 0LL);
  v30 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v7,
    Method_QuestAfterAction___c__DisplayClass71_0__PlaySpecifiedAction_b__0__,
    0LL);
  this->fields.endAct = v30;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.endAct,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  v37 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v7,
    Method_QuestAfterAction___c__DisplayClass71_0__PlaySpecifiedAction_b__1__,
    0LL);
  v39 = QuestAfterAction__WaitWhileMainStateFinished(this, v37, v38);
  UnityEngine_MonoBehaviour__StartCoroutine_35611808((UnityEngine_MonoBehaviour_o *)this, v39, 0LL);
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

  if ( (byte_42AFC47 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__74_0__);
    byte_42AFC47 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)commandArray, 0LL) )
  {
    this->fields.temporaryCommandBuf = commandArray;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.temporaryCommandBuf,
      (System_Int32_array **)commandArray,
      v5,
      v6,
      v7,
      v8,
      v9,
      v10);
    v11 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
    System_Action___ctor(
      v11,
      (Il2CppObject *)this,
      Method_QuestAfterAction__PlaySpecifiedActionInstantly_b__74_0__,
      0LL);
    this->fields.endAct = v11;
    sub_B52920(
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

  if ( (byte_42AFC4D & 1) == 0 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AFC4D = 1;
  }
  this->fields.ActionMapTargetType = cType;
  this->fields.ActionMapTargetId = cTarget;
  QuestAfterAction__SetState(this, 0, *(const MethodInfo **)&cTarget);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2AB )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2AB = 1;
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
  if ( !byte_42AC2A0 )
  {
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AC2A0 = 1;
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
    sub_B52A5C(v9, v7);
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
  if ( (byte_42AFC3D & 1) == 0 )
  {
    sub_B52984(&char___TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B52984(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    this = (QuestAfterAction_o *)sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AFC3D = 1;
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
          this = (QuestAfterAction_o *)sub_B5299C(char___TypeInfo, 1LL);
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
          sub_B52A5C(this, com);
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
          this = (QuestAfterAction_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
          if ( this )
          {
            MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                   (DataManager_o *)this,
                                                   (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestMaster___);
            v16 = v3->fields.param;
            v17 = (DataMasterBase_WarMaster__WarEntity__int__o *)MasterData_WarQuestSelectionMaster;
            this = (QuestAfterAction_o *)System_Int32__Parse(v16, 0LL);
            if ( v17 )
            {
              this = (QuestAfterAction_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                             v17,
                                             (int32_t)this,
                                             (const MethodInfo_23E22D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
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
    this = (QuestAfterAction_o *)sub_B5299C(v10, 1LL);
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
          v18 = sub_B52A88(this);
          sub_B52A28(v18, 0LL);
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

  if ( (byte_42AFC4B & 1) == 0 )
  {
    sub_B52984(&Method_CStateManager_QuestAfterAction__setState__);
    byte_42AFC4B = 1;
  }
  fsm = this->fields.fsm;
  if ( !fsm )
    sub_B52A5C(0LL, *(_QWORD *)&state);
  CStateManager_QAASpotStateController_IMapSpot___setState(
    (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
    state,
    (const MethodInfo_2B92734 *)Method_CStateManager_QuestAfterAction__setState__);
}


void __fastcall QuestAfterAction__SkipToNextAction(QuestAfterAction_o *this, const MethodInfo *method)
{
  this->fields.isSkippedNext = 1;
}


void __fastcall QuestAfterAction__Update(QuestAfterAction_o *this, const MethodInfo *method)
{
  struct CStateManager_QuestAfterAction__o *fsm; // x0

  if ( (byte_42AFC43 & 1) == 0 )
  {
    sub_B52984(&Method_CStateManager_QuestAfterAction__update__);
    byte_42AFC43 = 1;
  }
  fsm = this->fields.fsm;
  if ( fsm )
    CStateManager_QAASpotStateController_IMapSpot___update(
      (CStateManager_QAASpotStateController_IMapSpot__o *)fsm,
      (const MethodInfo_2B9270C *)Method_CStateManager_QuestAfterAction__update__);
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

  if ( (byte_42AFC49 & 1) == 0 )
  {
    sub_B52984(&QuestAfterAction__WaitWhileMainStateFinished_d__77_TypeInfo);
    byte_42AFC49 = 1;
  }
  v5 = sub_B52A54(QuestAfterAction__WaitWhileMainStateFinished_d__77_TypeInfo);
  QuestAfterAction__WaitWhileMainStateFinished_d__77___ctor(
    (QuestAfterAction__WaitWhileMainStateFinished_d__77_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_B52A5C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = action;
  sub_B52920((BattleServantConfConponent_o *)(v5 + 40), (System_Int32_array **)action, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall QuestAfterAction___PlaySpecifiedActionInstantly_b__74_0(
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
  sub_B52920((BattleServantConfConponent_o *)&this->fields.endAct, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields.temporaryCommandBuf = 0LL;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.temporaryCommandBuf, 0LL, v9, v10, v11, v12, v13, v14);
  QuestAfterAction__SetState(this, 0, v15);
}


System_Int32_array *__fastcall QuestAfterAction__getMapGmkOffIdList(QuestAfterAction_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *invalidMapGimmickIdList; // x0

  if ( (byte_42AFC3C & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    byte_42AFC3C = 1;
  }
  invalidMapGimmickIdList = this->fields.invalidMapGimmickIdList;
  if ( !invalidMapGimmickIdList )
    sub_B52A5C(0LL, method);
  return System_Collections_Generic_List_int___ToArray(
           invalidMapGimmickIdList,
           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
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
  System_String_o *VoiceAssetName_30972712; // x20
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42AFC41 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
    sub_B52984(&System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    byte_42AFC41 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
    goto LABEL_15;
  Values = System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo___get_Values(
             svtVoices,
             (const MethodInfo_2F27AAC *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__get_Values__);
  v5 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B52A54(System_Collections_Generic_List_QuestAfterAction_VoiceInfo__TypeInfo);
  System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
    v5,
    (System_Collections_Generic_IEnumerable_T__o *)Values,
    (const MethodInfo_2FF0B38 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo___ctor__);
  if ( !v5 )
    goto LABEL_15;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v9,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v5,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
           &v9,
           (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__MoveNext__);
    if ( !v6 )
      break;
    if ( !v9.fields.current )
      sub_B52A5C(v6, v7);
    VoiceAssetName_30972712 = ServantVoiceEntity__getVoiceAssetName_30972712((int32_t)v9.fields.current[1].klass, 0LL);
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__releaseAudioAssetStorage(VoiceAssetName_30972712, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v9,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_QuestAfterAction_VoiceInfo__Dispose__);
  svtVoices = this->fields.svtVoices;
  if ( !svtVoices )
LABEL_15:
    sub_B52A5C(svtVoices, method);
  System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality___Clear(
    (System_Collections_Generic_Dictionary_int__WarBoardAIRoute_PiecePersonality__o *)svtVoices,
    (const MethodInfo_2F27EE4 *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__Clear__);
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

  if ( (byte_42AD466 & 1) == 0 )
  {
    sub_B52984(&char___TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_VoicePlayCondMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_B52984(&Method_System_Collections_Generic_List_string___ctor___68522456);
    sub_B52984(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_B52984(&System_Collections_Generic_List_string__TypeInfo);
    sub_B52984(&System_Random_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    sub_B52984(&StringLiteral_16011/*"_"*/);
    byte_42AD466 = 1;
  }
  result = 0;
  *svtId = 0;
  if ( this->fields.id != 800 )
    return 0LL;
  param = this->fields.param;
  Instance = sub_B5299C(char___TypeInfo, 1LL);
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
    Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      MasterData_WarQuestSelectionMaster = (VoicePlayCondMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                      (DataManager_o *)Instance,
                                                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_VoicePlayCondMaster___);
      v10 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B52A54(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
        v10,
        v8,
        (const MethodInfo_2FF0B38 *)Method_System_Collections_Generic_List_string___ctor___68522456);
      result = 0;
      v11 = (System_Random_o *)sub_B52A54(System_Random_TypeInfo);
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
              System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
            v15 = (System_String_o *)v10->fields._items->m_Items[v13];
            Instance = sub_B5299C(char___TypeInfo, 1LL);
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
              Instance = (__int64)System_String__Concat_44570600(
                                    *(System_String_o **)(v17 + 40),
                                    (System_String_o *)StringLiteral_16011/*"_"*/,
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
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
              v18 = (System_String_o *)v10->fields._items->m_Items[v14];
              if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              }
              if ( !byte_42AC2A0 )
              {
                sub_B52984(&TerminalSceneComponent_TypeInfo);
                byte_42AC2A0 = 1;
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
              (const MethodInfo_2FF32F4 *)Method_System_Collections_Generic_List_string__RemoveAt__);
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
    sub_B52A5C(Instance, v7);
  }
  v22 = this->fields.param;
  Instance = sub_B5299C(char___TypeInfo, 1LL);
  if ( !Instance )
    goto LABEL_53;
  v7 = Instance;
  if ( !*(_DWORD *)(Instance + 24) )
  {
LABEL_54:
    v26 = sub_B52A88(Instance);
    sub_B52A28(v26, 0LL);
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
      return System_String__Concat_44570600(
               *(System_String_o **)(v24 + 40),
               (System_String_o *)StringLiteral_16011/*"_"*/,
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

  if ( (byte_42AD469 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_B52984(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42AD469 = 1;
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
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_12;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_BgmMaster___);
      if ( !Instance )
        goto LABEL_12;
      Instance = (DataManager_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                    (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                                    &v7,
                                    result,
                                    (const MethodInfo_23E2334 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( v7 )
          return v7->fields.age;
LABEL_12:
        sub_B52A5C(Instance, v6);
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

  if ( (byte_42AD467 & 1) == 0 )
  {
    sub_B52984(&char___TypeInfo);
    byte_42AD467 = 1;
  }
  result = 0;
  v5 = 0;
  if ( this->fields.id == 800 )
  {
    v6 = (System_String_array *)sub_B5299C(char___TypeInfo, 1LL);
    if ( !v6 )
      goto LABEL_14;
    v7 = v6;
    if ( !v6->max_length )
    {
      v8 = sub_B52A88(v6);
      sub_B52A28(v8, 0LL);
    }
    LOWORD(v6->m_Items[0]) = 95;
    if ( !str || (v6 = System_String__Split(str, (System_Char_array *)v6, 0LL)) == 0LL )
LABEL_14:
      sub_B52A5C(v6, v7);
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

  if ( (byte_42AD468 & 1) == 0 )
  {
    sub_B52984(&char___TypeInfo);
    sub_B52984(&StringLiteral_16011/*"_"*/);
    byte_42AD468 = 1;
  }
  if ( this->fields.id == 800 )
  {
    v5 = (System_String_array *)sub_B5299C(char___TypeInfo, 1LL);
    if ( !v5 )
      goto LABEL_13;
    v6 = v5;
    if ( !v5->max_length )
    {
      v9 = sub_B52A88(v5);
      sub_B52A28(v9, 0LL);
    }
    LOWORD(v5->m_Items[0]) = 95;
    if ( !str || (v5 = System_String__Split(str, (System_Char_array *)v5, 0LL)) == 0LL )
LABEL_13:
      sub_B52A5C(v5, v6);
    max_length = v5->max_length;
    if ( max_length == 2 )
      return str;
    if ( max_length == 3 )
      return System_String__Concat_44570600(v5->m_Items[1], (System_String_o *)StringLiteral_16011/*"_"*/, v5->m_Items[2], 0LL);
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
    sub_B52A5C(this, method);
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
    sub_B52A5C(screenCollider, v5);
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
    sub_B52A5C(this, 0LL);
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
    sub_B52A5C(0LL, v7);
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
    sub_B52A5C(0LL, v7);
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
  if ( (byte_42AD46E & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_int__Remove__);
    sub_B52984(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
    sub_B52984(&Method_SingletonTemplate_QuestTree__get_Instance__);
    this = (QuestAfterAction_StateMain_o *)sub_B52984(&SingletonTemplate_QuestTree__TypeInfo);
    byte_42AD46E = 1;
  }
  that = v2->fields.that;
  if ( !that )
    goto LABEL_26;
  this = (QuestAfterAction_StateMain_o *)that->fields.invalidMapGimmickIdList;
  if ( !this )
    goto LABEL_26;
  this = (QuestAfterAction_StateMain_o *)System_Collections_Generic_List_int___ToArray(
                                           (System_Collections_Generic_List_int__o *)this,
                                           (const MethodInfo_30590BC *)Method_System_Collections_Generic_List_int__ToArray__);
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
        v11 = sub_B52A88(this);
        sub_B52A28(v11, 0LL);
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
        (const MethodInfo_305892C *)Method_System_Collections_Generic_List_int__Remove__);
      this = (QuestAfterAction_StateMain_o *)v2->fields.that;
      if ( !this )
        break;
      MapComponent_srcLineSprite = QuestAfterAction__GetMapComponent_srcLineSprite_(
                                     (QuestAfterAction_o *)this,
                                     2,
                                     v8,
                                     v2,
                                     (const MethodInfo_1F73BD8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
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
        this = (QuestAfterAction_StateMain_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( !MapComponent_srcLineSprite || !this )
          break;
        this = (QuestAfterAction_StateMain_o *)QuestTree__CheckMapGimmickCond_22028516(
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
    sub_B52A5C(this, method);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall QuestAfterAction_StateMain__UpdateAnim(
        QuestAfterAction_StateMain_o *this,
        QuestAfterAction_o *that,
        const MethodInfo *method)
{
  QuestAfterAction_StateMain___c__DisplayClass16_0_o *v5; // x21
  __int64 updated; // x0
  const MethodInfo *v7; // x1
  QuestAfterAction_o **p_that; // x20
  long double v9; // q0
  QuestAfterAction_StateMain_c *klass; // x8
  __int64 v11; // x22
  QuestAfterAction_Command_o *v12; // x22
  QuestAfterAction_o *v13; // x23
  BlankEarthQuestAfterAction_o *BlankEarthQuestAfterAction_k__BackingField; // x24
  System_Action_o *v15; // x25
  int id; // w8
  float v17; // s0
  float DEFAULT_FADE_TIME; // s8
  AvalonSceneManager_c *v19; // x0
  TerminalSceneComponent_c *v20; // x0
  TerminalSceneComponent_o *mInstance; // x19
  System_Action_o *v22; // x20
  __int64 MyFsmP; // x0
  TerminalSceneComponent_o *v24; // x0
  float v25; // s0
  System_Action_o *v26; // x1
  System_String_o *v27; // x19
  System_String_o *v28; // x20
  System_String_o *v29; // x20
  CommonUI_o *Instance; // x22
  System_Action_o *v31; // x23
  System_String_o *v32; // x23
  __int64 v33; // x8
  __int64 v34; // x24
  float v35; // s8
  System_String_o *v36; // x21
  QuestAfterAction_StateMain___c__DisplayClass16_10_o *v37; // x23
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o **p_CS___8__locals10; // x20
  System_String_o *v39; // x21
  __int64 v40; // x8
  __int64 v41; // x22
  int32_t v42; // w21
  _BOOL4 v43; // w24
  bool v44; // w25
  System_String_o *v45; // x21
  __int64 v46; // x23
  int32_t v47; // w21
  int32_t v48; // w22
  int32_t v49; // w23
  QuestAfterAction_StateMain___c__DisplayClass16_1_o *v50; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals1; // x8
  QuestAfterAction_o *v52; // x21
  UnityEngine_Object_o *spot; // x19
  SrcSpotBasePrefab_o *v54; // x19
  System_Action_o *v55; // x21
  int32_t v56; // w1
  QuestAfterAction_StateMain___c__DisplayClass16_4_o *v57; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals4; // x8
  QuestAfterAction_o *v59; // x21
  UnityEngine_Object_o *roadModel; // x19
  ModelLineComponent_o *v61; // x19
  System_Action_o *v62; // x21
  int32_t v63; // w1
  System_String_o *v64; // x21
  __int64 v65; // x8
  QuestAfterAction_TitleInfoControlCallback_o *TitleInfoCtrlCallback_k__BackingField; // x21
  int32_t v67; // w20
  QuestEntity_o *v68; // x22
  const MethodInfo *v69; // x2
  __int64 v70; // x21
  TerminalPramsManager_c *v71; // x0
  int32_t v72; // w20
  clsQuestCheck_o *v73; // x19
  QuestAfterAction_StateMain___c_c *v74; // x8
  struct QuestAfterAction_StateMain___c_StaticFields *v75; // x9
  System_Action_o *_9__16_33; // x20
  Il2CppObject *v77; // x21
  struct QuestAfterAction_StateMain___c_StaticFields *v78; // x0
  TerminalSceneComponent_c *v79; // x0
  TerminalSceneComponent_o *v80; // x21
  System_String_o *param; // x21
  __int64 v82; // x22
  int v83; // w23
  float v84; // s8
  int32_t v85; // w21
  QuestAfterAction_o *v86; // x8
  __int64 v87; // x8
  __int64 v88; // x8
  __int64 v89; // x8
  System_String_o *v90; // x20
  System_String_o *v91; // x21
  SeManager_c *v92; // x0
  float DEFAULT_VOLUME; // s8
  __int64 v94; // x8
  PlayMakerFSM_o *v95; // x20
  System_String_o *ActiveStateName; // x0
  __int64 v97; // x8
  __int64 v98; // x8
  QuestBoardListViewManager_o *v99; // x21
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x8
  System_Action_o *_9__16_31; // x22
  Il2CppObject *v102; // x23
  struct QuestAfterAction_StateMain___c_StaticFields *v103; // x0
  TerminalSceneComponent_c *v104; // x0
  System_String_o *v105; // x20
  __int64 v106; // x21
  int32_t v107; // w20
  int32_t v108; // w22
  System_String_o *v109; // x23
  __int64 v110; // x8
  __int64 v111; // x24
  System_String_o *v112; // x23
  __int64 v113; // x23
  float v114; // s0
  float v115; // s8
  int32_t v116; // w19
  __int64 v117; // x8
  ScrTerminalMap_o *v118; // x24
  float v119; // s0
  float v120; // s9
  float v121; // s0
  const MethodInfo_2175340 *v122; // x2
  float v123; // s0
  float v124; // s1
  float v125; // s2
  float v126; // s10
  float v127; // s9
  float v128; // s11
  MapCamera_o *v129; // x20
  System_Action_o *v130; // x22
  System_String_o *v131; // x23
  __int64 v132; // x8
  __int64 v133; // x24
  System_String_o *v134; // x20
  __int64 v135; // x22
  int32_t v136; // w0
  int32_t v137; // w20
  float v138; // s8
  int32_t v139; // w19
  TerminalPramsManager_c *v140; // x0
  __int64 v141; // x8
  TerminalPramsManager_c *v142; // x0
  int32_t v143; // w21
  TerminalPramsManager_c *v144; // x0
  QuestAfterAction_o *v145; // x20
  UnityEngine_Object_o *v146; // x20
  System_String_o *v147; // x19
  System_String_o *v148; // x20
  System_String_o *v149; // x20
  CommonUI_o *v150; // x22
  System_Action_o *v151; // x23
  System_String_o *v152; // x19
  System_String_o *v153; // x20
  System_String_o *v154; // x20
  CommonUI_o *v155; // x22
  System_Action_o *v156; // x23
  System_String_o *v157; // x23
  System_String_array *v158; // x20
  __int64 v159; // x1
  System_String_o *v160; // x23
  System_String_array *v161; // x20
  __int64 v162; // x1
  UnityEngine_Object_o *MapComponent_srcLineSprite; // x22
  UnityEngine_Component_o *v164; // x20
  __int64 v165; // x8
  ScrTerminalMap_o *v166; // x23
  __int64 v167; // x8
  ScrTerminalMap_o *v168; // x20
  UnityEngine_GameObject_o *gameObject; // x22
  System_Action_o *v170; // x23
  SceneJumpInfo_o *v171; // x21
  System_String_o *v172; // x22
  int v173; // w23
  __int64 v174; // x22
  float v175; // s0
  float v176; // s8
  float v177; // s0
  MapCamera_o *v178; // x19
  float v179; // s0
  float v180; // s9
  int32_t v181; // w20
  System_String_o *v182; // x23
  __int64 v183; // x23
  float v184; // s0
  float v185; // s9
  float v186; // s0
  float v187; // s10
  float v188; // s0
  float v189; // s11
  float v190; // s0
  float v191; // s8
  __int64 v192; // x8
  const MethodInfo_2175340 *v193; // x2
  float v194; // s0
  float v195; // s1
  float v196; // s2
  MapCamera_o *v197; // x0
  float v198; // s0
  float v199; // s1
  float v200; // s2
  float v201; // s3
  int32_t v202; // w1
  System_Action_o *v203; // x2
  System_String_o *v204; // x22
  __int64 v205; // x22
  float v206; // s0
  QuestAfterAction_o *v207; // x20
  float v208; // s8
  UnityEngine_Object_o *v209; // x19
  __int64 v210; // x8
  ScrTerminalMap_o *v211; // x20
  float v212; // s0
  float v213; // s9
  float v214; // s0
  float v215; // s0
  float v216; // s1
  float v217; // s2
  float v218; // s9
  float v219; // s10
  float v220; // s11
  int32_t v221; // w20
  System_Action_o *v222; // x22
  System_String_o *v223; // x21
  __int64 v224; // x8
  __int64 v225; // x22
  int32_t v226; // w21
  bool v227; // w22
  System_String_o *v228; // x21
  __int64 v229; // x8
  __int64 v230; // x22
  int32_t v231; // w21
  bool v232; // w22
  System_String_o *v233; // x21
  __int64 v234; // x8
  __int64 v235; // x22
  int32_t v236; // w21
  bool v237; // w22
  System_String_o *v238; // x21
  __int64 v239; // x21
  QuestAfterAction_o *v240; // x20
  UnityEngine_Object_o *v241; // x20
  UIWidget_o *v242; // x20
  QuestAfterAction_StateMain___c__DisplayClass16_11_o *v243; // x23
  System_String_o *v244; // x21
  __int64 v245; // x8
  __int64 v246; // x22
  int32_t v247; // w21
  _BOOL4 v248; // w24
  bool v249; // w25
  QuestAfterAction_StateMain___c__DisplayClass16_12_o *v250; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals12; // x8
  QuestAfterAction_o *v252; // x21
  UnityEngine_Object_o *v253; // x19
  MapGimmickComponent_o *v254; // x19
  System_Action_o *v255; // x21
  TerminalSceneComponent_o *v256; // x19
  QuestAfterAction_StateMain___c__DisplayClass16_13_o *v257; // x20
  System_String_o *v258; // x21
  struct System_String_array **p_paramsStr; // x21
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals13; // x8
  struct System_String_array *v261; // x9
  QuestAfterAction_o *v262; // x21
  UnityEngine_Object_o *v263; // x19
  MapGimmickComponent_o *v264; // x19
  System_Action_o *v265; // x0
  __int64 *v266; // x8
  System_Action_o *v267; // x21
  struct System_String_array *paramsStr; // x8
  QuestAfterAction_o *v269; // x21
  QuestAfterAction_StateMain___c__DisplayClass16_13_Fields *v270; // x19
  UnityEngine_Object_o *v271; // x21
  bool v272; // w0
  bool v273; // w22
  int32_t v274; // w1
  System_String_o *v275; // x21
  __int64 v276; // x21
  QuestAfterAction_o *v277; // x22
  srcLineSprite_o *v278; // x22
  QuestAfterAction_StateMain___c__DisplayClass16_3_o *v279; // x23
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o **p_CS___8__locals3; // x20
  QuestAfterAction_o *v281; // x21
  UnityEngine_Object_o *v282; // x21
  SrcSpotBasePrefab_o *v283; // x21
  System_Action_o *v284; // x22
  __int64 v285; // x0
  System_String_o *v286; // x21
  __int64 v287; // x22
  QuestAfterAction_o *v288; // x21
  srcLineSprite_o *v289; // x21
  System_Action_o *v290; // x22
  QuestAfterAction_o *v291; // x21
  UnityEngine_Object_o *v292; // x21
  _DWORD *monitor; // x8
  SrcSpotBasePrefab_o *v294; // x0
  int32_t v295; // w1
  QuestAfterAction_StateMain___c__DisplayClass16_2_o *v296; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals2; // x8
  QuestAfterAction_o *v298; // x21
  UnityEngine_Object_o *v299; // x19
  QuestAfterAction_o *v300; // x21
  UnityEngine_Object_o *v301; // x21
  _DWORD *v302; // x8
  QuestAfterAction_o *v303; // x21
  _DWORD *v304; // x8
  System_Action_o *v305; // x20
  _BOOL4 v306; // w23
  QuestAfterAction_o *v307; // x21
  srcLineSprite_o *v308; // x21
  _DWORD *mcTweenScaleP; // x8
  QuestAfterAction_StateMain___c__DisplayClass16_8_o *v310; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals8; // x8
  QuestAfterAction_o *v312; // x21
  UnityEngine_Object_o *v313; // x19
  _BOOL4 IsMapModel; // w23
  QuestAfterAction_o *v315; // x21
  srcLineSprite_o *v316; // x21
  _DWORD *mcAtlasP; // x8
  QuestAfterAction_StateMain___c__DisplayClass16_6_o *v318; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals6; // x8
  QuestAfterAction_o *v320; // x21
  UnityEngine_Object_o *v321; // x19
  _BOOL4 v322; // w23
  QuestAfterAction_o *v323; // x21
  srcLineSprite_o *v324; // x21
  float v325; // s0
  int v326; // w23
  QuestAfterAction_o *v327; // x25
  UnityEngine_Object_o *v328; // x25
  const MethodInfo_2175340 *v329; // x2
  float x; // s10
  float y; // s9
  float z; // s11
  __int64 v333; // x8
  MapCamera_o *mMapCamera; // x19
  System_Action_o *v335; // x0
  __int64 *v336; // x8
  float v337; // s0
  float v338; // s0
  QuestAfterAction_o *v339; // x25
  UnityEngine_Object_o *MapGameObject; // x25
  __int64 v341; // x8
  const MethodInfo_2175340 *v342; // x2
  System_String_o *v343; // x19
  QuestAfterAction_o *v344; // x25
  UnityEngine_Object_o *v345; // x25
  float v346; // s9
  float v347; // s10
  float v348; // s11
  __int64 v349; // x8
  float v350; // s0
  float v351; // s1
  float v352; // s2
  int v353; // w8
  System_String_o *v354; // x19
  System_String_o *v355; // x20
  int v356; // w8
  System_String_o *v357; // x19
  System_String_o *v358; // x20
  System_String_o *v359; // x20
  CommonUI_o *v360; // x22
  System_Action_o *v361; // x23
  CommonUI_o *v362; // x22
  System_Action_o *v363; // x23
  srcLineSprite_o *v364; // x21
  struct UIAtlas_o *v365; // x8
  QuestAfterAction_StateMain_c *v366; // x8
  int v367; // w0
  srcLineSprite_o *v368; // x21
  srcLineSprite_o *v369; // x21
  struct UIAtlas_o *v370; // x8
  QuestAfterAction_StateMain___c__DisplayClass16_10_Fields *p_fields; // x21
  UnityEngine_Object_o *mapGimmick; // x22
  MapGimmickComponent_o *v373; // x21
  System_Action_o *v374; // x0
  System_Action_o *v375; // x22
  int32_t v376; // w1
  QuestAfterAction_StateMain___c__DisplayClass16_11_Fields *v377; // x21
  UnityEngine_Object_o *v378; // x22
  System_Action_o *v379; // x0
  UnityEngine_Object_o *v380; // x21
  int v381; // w9
  QuestAfterAction_StateMain___c__DisplayClass16_9_o *v382; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals9; // x8
  QuestAfterAction_o *v384; // x21
  UnityEngine_Object_o *v385; // x19
  srcLineSprite_o *v386; // x19
  System_Action_o *v387; // x21
  int32_t v388; // w1
  QuestAfterAction_StateMain___c__DisplayClass16_5_o *v389; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals5; // x8
  QuestAfterAction_o *v391; // x21
  UnityEngine_Object_o *roadSprite; // x19
  QuestAfterAction_StateMain___c__DisplayClass16_7_o *v393; // x20
  struct QuestAfterAction_StateMain___c__DisplayClass16_0_o *CS___8__locals7; // x8
  QuestAfterAction_o *v395; // x21
  UnityEngine_Object_o *v396; // x19
  UnityEngine_Object_o *v397; // x21
  UnityEngine_Object_o *v398; // x21
  System_Action_o *v399; // x22
  float v400; // s9
  float v401; // s11
  float v402; // s10
  const MethodInfo_2175340 *v403; // x2
  System_String_o *v404; // x19
  MapGimmickComponent_o *v405; // x0
  System_Action_o *v406; // x2
  __int64 v407; // x8
  ScrTerminalMap_o *v408; // x22
  System_Action_o *v409; // x23
  MapCamera_o *v410; // x19
  float v411; // s0
  System_Action_o *v412; // x0
  __int64 *v413; // x8
  System_Action_o *v414; // x20
  float v415; // s0
  MapCamera_o *v416; // x19
  float v417; // s0
  System_Action_o *v418; // x20
  MapCamera_o *v419; // x0
  float v420; // s0
  int32_t v421; // w4
  System_Action_o *v422; // x5
  MapCamera_o *v423; // x20
  float v424; // s0
  System_Action_o *v425; // x22
  float v426; // s0
  __int64 v427; // x0
  __int64 v428; // x0
  __int64 v429; // x0
  __int64 v430; // x0
  __int64 v431; // x0
  System_Nullable_float__o size; // [xsp+30h] [xbp-A0h] BYREF
  System_Nullable_Vector3__o v433; // [xsp+38h] [xbp-98h] BYREF
  WarBoardEvalValueSquare_CalcEval_o *value; // [xsp+48h] [xbp-88h] BYREF
  UnityEngine_Color_o color; // [xsp+50h] [xbp-80h] BYREF
  WarEntity_o *entity; // [xsp+88h] [xbp-48h] BYREF
  System_Nullable_float__o v437; // 0:x0.8
  System_Nullable_float__o p_size; // 0:x0.8
  System_Nullable_float__o v439; // 0:x0.8
  System_Nullable_float__o v440; // 0:x0.8
  System_Nullable_float__o v441; // 0:x0.8
  System_Nullable_float__o v442; // 0:x3.8
  System_Nullable_Vector3__o v443; // 0:x0.16
  System_Nullable_Vector3__o v444; // 0:x0.16
  System_Nullable_Vector3__o v445; // 0:x0.16
  System_Nullable_Vector3__o v446; // 0:x0.16
  System_Nullable_Vector3__o v447; // 0:x0.16
  System_Nullable_Vector3__o v448; // 0:x1.16
  UnityEngine_Vector3_o v449; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v450; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v451; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v452; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v453; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v455; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v456; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v458; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v459; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v460; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v461; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42AD46C & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AvalonSceneManager_TypeInfo);
    sub_B52984(&char___TypeInfo);
    sub_B52984(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_B52984(&Method_DataManager_GetMaster_QuestMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
    sub_B52984(&Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__);
    sub_B52984(&FSUtility_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_System_Nullable_float___ctor__);
    sub_B52984(&Method_System_Nullable_Vector3___ctor__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
    sub_B52984(&Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
    sub_B52984(&Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
    sub_B52984(&Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
    sub_B52984(&SceneJumpInfo_TypeInfo);
    sub_B52984(&SeManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_clsQuestCheck__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B52984(&SingletonTemplate_QuestTree__TypeInfo);
    sub_B52984(&SingletonTemplate_clsQuestCheck__TypeInfo);
    sub_B52984(&SoundManager_TypeInfo);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_31__);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_33__);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__13__);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__14__);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__15__);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__16__);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__17__);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__18__);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__19__);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__20__);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__25__);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__36__);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__37__);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__38__);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__39__);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__40__);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__);
    sub_B52984(&QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__21__);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__22__);
    sub_B52984(&QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__23__);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__24__);
    sub_B52984(&QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__26__);
    sub_B52984(&QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__27__);
    sub_B52984(&QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__29__);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__30__);
    sub_B52984(&QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__);
    sub_B52984(&QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__);
    sub_B52984(&QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__);
    sub_B52984(&QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__);
    sub_B52984(&QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__);
    sub_B52984(&QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__);
    sub_B52984(&QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__);
    sub_B52984(&QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__);
    sub_B52984(&QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__);
    sub_B52984(&QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo);
    sub_B52984(&QuestAfterAction_StateMain___c_TypeInfo);
    sub_B52984(&StringLiteral_69/*"\r\n"*/);
    sub_B52984(&StringLiteral_1172/*"30101"*/);
    sub_B52984(&StringLiteral_10971/*"QUEST_AFTER_ACTION_MESSAGE_"*/);
    sub_B52984(&StringLiteral_1173/*"30102"*/);
    sub_B52984(&StringLiteral_1111/*"10703"*/);
    sub_B52984(&StringLiteral_2956/*"CAPTER WAIT"*/);
    sub_B52984(&StringLiteral_1/*""*/);
    sub_B52984(&StringLiteral_19196/*"gevINFOBAR_BACK"*/);
    byte_42AD46C = 1;
  }
  *(_QWORD *)&color.fields.b = 0LL;
  value = 0LL;
  *(_QWORD *)&color.fields.r = 0LL;
  entity = 0LL;
  v5 = (QuestAfterAction_StateMain___c__DisplayClass16_0_o *)sub_B52A54(QuestAfterAction_StateMain___c__DisplayClass16_0_TypeInfo);
  QuestAfterAction_StateMain___c__DisplayClass16_0___ctor(v5, 0LL);
  if ( !v5 )
    goto LABEL_1010;
  v5->fields.__4__this = this;
  sub_B52920(&v5->fields);
  v5->fields.that = that;
  p_that = &v5->fields.that;
  *(__n128 *)&v9 = sub_B52920(&v5->fields.that);
  if ( this->fields.IsAnimDoing )
    return;
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer, long double))this->klass->vtable._10_get_CommandBuf.method)(
              this,
              this->klass->vtable._11_get_CommandIndex.methodPtr,
              v9);
  if ( !updated )
    return;
  if ( !*p_that )
    goto LABEL_1010;
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
LABEL_1010:
    sub_B52A5C(updated, v7);
  }
  klass = this->klass;
  this->fields.IsAnimDoing = 1;
  v11 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))klass->vtable._10_get_CommandBuf.method)(
          this,
          klass->vtable._11_get_CommandIndex.methodPtr);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._11_get_CommandIndex.method)(
              this,
              this->klass->vtable._12_set_CommandIndex.methodPtr);
  if ( !v11 )
    goto LABEL_1010;
  if ( (unsigned int)updated >= *(_DWORD *)(v11 + 24) )
  {
LABEL_1016:
    v427 = sub_B52A88(updated);
    sub_B52A28(v427, 0LL);
  }
  v12 = *(QuestAfterAction_Command_o **)(v11 + 8LL * (int)updated + 32);
  updated = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_Command_o *, Il2CppMethodPointer))this->klass->vtable._9_IsUsableCommand.method)(
              this,
              v12,
              this->klass->vtable._10_get_CommandBuf.methodPtr);
  if ( (updated & 1) == 0 )
    goto LABEL_440;
  v13 = *p_that;
  if ( !*p_that )
    goto LABEL_1010;
  BlankEarthQuestAfterAction_k__BackingField = v13->fields._BlankEarthQuestAfterAction_k__BackingField;
  v15 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
  if ( !BlankEarthQuestAfterAction_k__BackingField )
    goto LABEL_1010;
  updated = BlankEarthQuestAfterAction__UpdateAnim(BlankEarthQuestAfterAction_k__BackingField, v13, v12, v15, 0LL);
  if ( (updated & 1) != 0 )
    return;
  if ( !v12 )
    goto LABEL_1010;
  id = v12->fields.id;
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
          if ( !byte_42AC2A0 )
          {
            sub_B52984(&TerminalSceneComponent_TypeInfo);
            byte_42AC2A0 = 1;
          }
          MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v94 = **(_QWORD **)(MyFsmP + 184);
          if ( v94 )
          {
            MyFsmP = *(_QWORD *)(v94 + 248);
            if ( MyFsmP )
            {
              MyFsmP = (__int64)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)MyFsmP, 0LL);
              if ( MyFsmP )
              {
                v95 = (PlayMakerFSM_o *)MyFsmP;
                ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)MyFsmP, 0LL);
                if ( !System_String__op_Equality(ActiveStateName, (System_String_o *)StringLiteral_2956/*"CAPTER WAIT"*/, 0LL) )
                  goto LABEL_440;
                if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                }
                if ( !byte_42AC2A0 )
                {
                  sub_B52984(&TerminalSceneComponent_TypeInfo);
                  byte_42AC2A0 = 1;
                }
                MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
                if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v97 = **(_QWORD **)(MyFsmP + 184);
                if ( v97 )
                {
                  v98 = *(_QWORD *)(v97 + 248);
                  if ( v98 )
                  {
                    v99 = *(QuestBoardListViewManager_o **)(v98 + 288);
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
                      v102 = (Il2CppObject *)static_fields->__9;
                      _9__16_31 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                      System_Action___ctor(
                        _9__16_31,
                        v102,
                        Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_31__,
                        0LL);
                      v103 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
                      v103->__9__16_31 = _9__16_31;
                      sub_B52920(&v103->__9__16_31);
                    }
                    if ( v99 )
                    {
                      QuestBoardListViewManager__SetMode(v99, 4, _9__16_31, 0, 0, 0LL);
                      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                      }
                      if ( !byte_42AC2A0 )
                      {
                        sub_B52984(&TerminalSceneComponent_TypeInfo);
                        byte_42AC2A0 = 1;
                      }
                      v104 = TerminalSceneComponent_TypeInfo;
                      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                      {
                        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                        v104 = TerminalSceneComponent_TypeInfo;
                      }
                      MyFsmP = (__int64)v104->static_fields->mInstance;
                      if ( MyFsmP )
                      {
                        TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)MyFsmP, 0LL);
                        PlayMakerFSM__SendEvent(v95, (System_String_o *)StringLiteral_19196/*"gevINFOBAR_BACK"*/, 0LL);
                        goto LABEL_440;
                      }
                    }
                  }
                }
              }
            }
          }
          goto LABEL_1017;
        }
        if ( id != 510 )
        {
          if ( id != 520 )
            return;
          DEFAULT_FADE_TIME = System_Single__Parse(v12->fields.param, 0LL);
          if ( DEFAULT_FADE_TIME <= 0.0 )
          {
            v19 = AvalonSceneManager_TypeInfo;
            if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
              v19 = AvalonSceneManager_TypeInfo;
            }
            DEFAULT_FADE_TIME = v19->static_fields->DEFAULT_FADE_TIME;
          }
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_42AC2A0 )
          {
            sub_B52984(&TerminalSceneComponent_TypeInfo);
            byte_42AC2A0 = 1;
          }
          v20 = TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v20 = TerminalSceneComponent_TypeInfo;
          }
          mInstance = v20->static_fields->mInstance;
          v22 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(
            v22,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__32__,
            0LL);
          if ( mInstance )
          {
            v24 = mInstance;
            v25 = DEFAULT_FADE_TIME;
            v26 = v22;
LABEL_46:
            TerminalSceneComponent__Fadein_MapDisp(v24, v25, v26, 0LL);
            return;
          }
          goto LABEL_1017;
        }
        param = v12->fields.param;
        MyFsmP = sub_B5299C(char___TypeInfo, 1LL);
        if ( !MyFsmP )
          goto LABEL_1017;
        v7 = (const MethodInfo *)MyFsmP;
        if ( *(_DWORD *)(MyFsmP + 24) )
        {
          *(_WORD *)(MyFsmP + 32) = 44;
          if ( !param )
            goto LABEL_1017;
          MyFsmP = (__int64)System_String__Split(param, (System_Char_array *)MyFsmP, 0LL);
          if ( !MyFsmP )
            goto LABEL_1017;
          v82 = MyFsmP;
          if ( *(_DWORD *)(MyFsmP + 24) )
          {
            v83 = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
            v84 = 0.5;
            if ( *(int *)(v82 + 24) >= 2 )
            {
              v85 = System_Int32__Parse(*(System_String_o **)(v82 + 40), 0LL);
              if ( *(int *)(v82 + 24) >= 3 )
                v84 = System_Single__Parse(*(System_String_o **)(v82 + 48), 0LL);
            }
            else
            {
              v85 = v83;
              v83 = -1;
            }
            MyFsmP = (__int64)*p_that;
            if ( *p_that )
            {
              MapComponent_srcLineSprite = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                                     (QuestAfterAction_o *)MyFsmP,
                                                                     0,
                                                                     v85,
                                                                     this,
                                                                     (const MethodInfo_1F73BD8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
              if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              }
              if ( UnityEngine_Object__op_Equality(MapComponent_srcLineSprite, 0LL, 0LL) )
                return;
              if ( v83 >= 1 )
              {
                MyFsmP = (__int64)*p_that;
                if ( !*p_that )
                  goto LABEL_1017;
                v164 = (UnityEngine_Component_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                    (QuestAfterAction_o *)MyFsmP,
                                                    0,
                                                    v83,
                                                    this,
                                                    (const MethodInfo_1F73BD8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v164, 0LL, 0LL) )
                {
                  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  }
                  if ( !byte_42AC2A0 )
                  {
                    sub_B52984(&TerminalSceneComponent_TypeInfo);
                    byte_42AC2A0 = 1;
                  }
                  MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
                  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                    MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
                  }
                  v165 = **(_QWORD **)(MyFsmP + 184);
                  if ( !v165 )
                    goto LABEL_1017;
                  if ( !v164 )
                    goto LABEL_1017;
                  v166 = *(ScrTerminalMap_o **)(v165 + 256);
                  MyFsmP = (__int64)UnityEngine_Component__get_gameObject(v164, 0LL);
                  if ( !v166 )
                    goto LABEL_1017;
                  ScrTerminalMap__SetPlayerIcon(v166, (UnityEngine_GameObject_o *)MyFsmP, 0LL);
                }
              }
              if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
              }
              if ( !byte_42AC2A0 )
              {
                sub_B52984(&TerminalSceneComponent_TypeInfo);
                byte_42AC2A0 = 1;
              }
              MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
              if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
              }
              v167 = **(_QWORD **)(MyFsmP + 184);
              if ( v167 )
              {
                if ( MapComponent_srcLineSprite )
                {
                  v168 = *(ScrTerminalMap_o **)(v167 + 256);
                  gameObject = UnityEngine_Component__get_gameObject(
                                 (UnityEngine_Component_o *)MapComponent_srcLineSprite,
                                 0LL);
                  v170 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                  System_Action___ctor(
                    v170,
                    (Il2CppObject *)this,
                    (intptr_t)this->klass->vtable._15_onEnd.methodPtr,
                    0LL);
                  if ( v168 )
                  {
                    ScrTerminalMap__MovePlayerIcon(v168, gameObject, v85, v170, v84, 0LL);
                    return;
                  }
                }
              }
            }
LABEL_1017:
            sub_B52A5C(MyFsmP, v7);
          }
        }
LABEL_1019:
        v428 = sub_B52A88(MyFsmP);
        sub_B52A28(v428, 0LL);
      }
      switch ( id )
      {
        case 400:
          v37 = (QuestAfterAction_StateMain___c__DisplayClass16_10_o *)sub_B52A54(QuestAfterAction_StateMain___c__DisplayClass16_10_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_10___ctor(v37, 0LL);
          if ( !v37 )
            goto LABEL_1017;
          v37->fields.CS___8__locals10 = v5;
          p_CS___8__locals10 = &v37->fields.CS___8__locals10;
          sub_B52920(&v37->fields.CS___8__locals10);
          v39 = v12->fields.param;
          MyFsmP = sub_B5299C(char___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1017;
          v7 = (const MethodInfo *)MyFsmP;
          if ( !*(_DWORD *)(MyFsmP + 24) )
            goto LABEL_1019;
          *(_WORD *)(MyFsmP + 32) = 44;
          if ( !v39 )
            goto LABEL_1017;
          MyFsmP = (__int64)System_String__Split(v39, (System_Char_array *)MyFsmP, 0LL);
          if ( !MyFsmP )
            goto LABEL_1017;
          v40 = *(_QWORD *)(MyFsmP + 24);
          v41 = MyFsmP;
          if ( v40 )
          {
            if ( !(_DWORD)v40 )
              goto LABEL_1019;
            MyFsmP = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
            v42 = MyFsmP;
            if ( *(int *)(v41 + 24) < 2 )
            {
              v43 = 0;
            }
            else
            {
              MyFsmP = System_Int32__Parse(*(System_String_o **)(v41 + 40), 0LL);
              v43 = (int)MyFsmP > 0;
              if ( *(int *)(v41 + 24) >= 3 )
              {
                MyFsmP = System_Int32__Parse(*(System_String_o **)(v41 + 48), 0LL);
                v44 = (int)MyFsmP > 0;
LABEL_868:
                if ( !*p_CS___8__locals10 )
                  goto LABEL_1017;
                MyFsmP = (__int64)(*p_CS___8__locals10)->fields.that;
                if ( !MyFsmP )
                  goto LABEL_1017;
                v37->fields.mapGimmick = (struct MapGimmickComponent_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                                           (QuestAfterAction_o *)MyFsmP,
                                                                           2,
                                                                           v42,
                                                                           this,
                                                                           (const MethodInfo_1F73BD8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
                p_fields = &v37->fields;
                sub_B52920(&v37->fields);
                mapGimmick = (UnityEngine_Object_o *)v37->fields.mapGimmick;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                MyFsmP = UnityEngine_Object__op_Equality(mapGimmick, 0LL, 0LL);
                if ( (MyFsmP & 1) != 0 )
                  return;
                if ( !p_fields->mapGimmick )
                  goto LABEL_1017;
                p_fields->mapGimmick->fields.isForceNotActive = v44;
                v373 = p_fields->mapGimmick;
                v374 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                v375 = v374;
                if ( v43 )
                {
                  System_Action___ctor(
                    v374,
                    (Il2CppObject *)v37,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__21__,
                    0LL);
                  if ( !v373 )
                    goto LABEL_1017;
                  v376 = 2;
LABEL_891:
                  MapGimmickComponent__SetState(v373, v376, v375, 0LL);
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
                  goto LABEL_1017;
                }
                System_Action___ctor(
                  v374,
                  (Il2CppObject *)v37,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_10__UpdateAnim_b__22__,
                  0LL);
                if ( !v373 )
                  goto LABEL_1017;
                v274 = 2;
                goto LABEL_964;
              }
            }
          }
          else
          {
            v43 = 0;
            v42 = 0;
          }
          v44 = 0;
          goto LABEL_868;
        case 401:
          v243 = (QuestAfterAction_StateMain___c__DisplayClass16_11_o *)sub_B52A54(QuestAfterAction_StateMain___c__DisplayClass16_11_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_11___ctor(v243, 0LL);
          if ( !v243 )
            goto LABEL_1017;
          v243->fields.CS___8__locals11 = v5;
          p_CS___8__locals10 = &v243->fields.CS___8__locals11;
          sub_B52920(&v243->fields.CS___8__locals11);
          v244 = v12->fields.param;
          MyFsmP = sub_B5299C(char___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1017;
          v7 = (const MethodInfo *)MyFsmP;
          if ( !*(_DWORD *)(MyFsmP + 24) )
            goto LABEL_1019;
          *(_WORD *)(MyFsmP + 32) = 44;
          if ( !v244 )
            goto LABEL_1017;
          MyFsmP = (__int64)System_String__Split(v244, (System_Char_array *)MyFsmP, 0LL);
          if ( !MyFsmP )
            goto LABEL_1017;
          v245 = *(_QWORD *)(MyFsmP + 24);
          v246 = MyFsmP;
          if ( v245 )
          {
            if ( !(_DWORD)v245 )
              goto LABEL_1019;
            MyFsmP = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
            v247 = MyFsmP;
            if ( *(int *)(v246 + 24) < 2 )
            {
              v248 = 0;
            }
            else
            {
              MyFsmP = System_Int32__Parse(*(System_String_o **)(v246 + 40), 0LL);
              v248 = (int)MyFsmP > 0;
              if ( *(int *)(v246 + 24) >= 3 )
              {
                MyFsmP = System_Int32__Parse(*(System_String_o **)(v246 + 48), 0LL);
                v249 = (int)MyFsmP > 0;
LABEL_880:
                if ( !*p_CS___8__locals10 )
                  goto LABEL_1017;
                MyFsmP = (__int64)(*p_CS___8__locals10)->fields.that;
                if ( !MyFsmP )
                  goto LABEL_1017;
                v243->fields.mapGimmick = (struct MapGimmickComponent_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                                            (QuestAfterAction_o *)MyFsmP,
                                                                            2,
                                                                            v247,
                                                                            this,
                                                                            (const MethodInfo_1F73BD8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
                v377 = &v243->fields;
                sub_B52920(&v243->fields);
                v378 = (UnityEngine_Object_o *)v243->fields.mapGimmick;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                MyFsmP = UnityEngine_Object__op_Equality(v378, 0LL, 0LL);
                if ( (MyFsmP & 1) != 0 )
                  return;
                if ( !v377->mapGimmick )
                  goto LABEL_1017;
                v377->mapGimmick->fields.isForceLoop = v249;
                if ( !v377->mapGimmick )
                  goto LABEL_1017;
                v377->mapGimmick->fields.isForceNotActive = 0;
                v373 = v377->mapGimmick;
                v379 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                v375 = v379;
                if ( v248 )
                {
                  System_Action___ctor(
                    v379,
                    (Il2CppObject *)v243,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__23__,
                    0LL);
                  if ( !v373 )
                    goto LABEL_1017;
                  v376 = 3;
                  goto LABEL_891;
                }
                System_Action___ctor(
                  v379,
                  (Il2CppObject *)v243,
                  Method_QuestAfterAction_StateMain___c__DisplayClass16_11__UpdateAnim_b__24__,
                  0LL);
                if ( !v373 )
                  goto LABEL_1017;
                v274 = 3;
LABEL_964:
                v405 = v373;
                v406 = v375;
LABEL_965:
                MapGimmickComponent__SetState(v405, v274, v406, 0LL);
                return;
              }
            }
          }
          else
          {
            v248 = 0;
            v247 = 0;
          }
          v249 = 0;
          goto LABEL_880;
        case 402:
          v228 = v12->fields.param;
          MyFsmP = sub_B5299C(char___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1017;
          v7 = (const MethodInfo *)MyFsmP;
          if ( !*(_DWORD *)(MyFsmP + 24) )
            goto LABEL_1019;
          *(_WORD *)(MyFsmP + 32) = 44;
          if ( !v228 )
            goto LABEL_1017;
          MyFsmP = (__int64)System_String__Split(v228, (System_Char_array *)MyFsmP, 0LL);
          if ( !MyFsmP )
            goto LABEL_1017;
          v229 = *(_QWORD *)(MyFsmP + 24);
          v230 = MyFsmP;
          if ( v229 )
          {
            if ( !(_DWORD)v229 )
              goto LABEL_1019;
            v231 = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
            if ( *(int *)(v230 + 24) >= 2 )
            {
              v232 = System_Int32__Parse(*(System_String_o **)(v230 + 40), 0LL) > 0;
LABEL_846:
              MyFsmP = (__int64)*p_that;
              if ( *p_that )
              {
                v368 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         (QuestAfterAction_o *)MyFsmP,
                         2,
                         v231,
                         this,
                         (const MethodInfo_1F73BD8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                MyFsmP = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v368, 0LL, 0LL);
                if ( (MyFsmP & 1) != 0 )
                  return;
                if ( v368 )
                {
                  BYTE1(v368->fields.mcTo.fields.y) = v232;
                  MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)v368, 0, 0LL);
                  mcAtlasP = v368->fields.mcAtlasP;
                  if ( mcAtlasP )
                  {
LABEL_934:
                    mcAtlasP[4] = 0;
                    goto LABEL_943;
                  }
                }
              }
              goto LABEL_1017;
            }
          }
          else
          {
            v231 = 0;
          }
          v232 = 0;
          goto LABEL_846;
        case 403:
          v233 = v12->fields.param;
          MyFsmP = sub_B5299C(char___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1017;
          v7 = (const MethodInfo *)MyFsmP;
          if ( !*(_DWORD *)(MyFsmP + 24) )
            goto LABEL_1019;
          *(_WORD *)(MyFsmP + 32) = 44;
          if ( !v233 )
            goto LABEL_1017;
          MyFsmP = (__int64)System_String__Split(v233, (System_Char_array *)MyFsmP, 0LL);
          if ( !MyFsmP )
            goto LABEL_1017;
          v234 = *(_QWORD *)(MyFsmP + 24);
          v235 = MyFsmP;
          if ( v234 )
          {
            if ( !(_DWORD)v234 )
              goto LABEL_1019;
            v236 = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
            if ( *(int *)(v235 + 24) >= 2 )
            {
              v237 = System_Int32__Parse(*(System_String_o **)(v235 + 40), 0LL) > 0;
LABEL_856:
              MyFsmP = (__int64)*p_that;
              if ( *p_that )
              {
                v369 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         (QuestAfterAction_o *)MyFsmP,
                         2,
                         v236,
                         this,
                         (const MethodInfo_1F73BD8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                MyFsmP = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v369, 0LL, 0LL);
                if ( (MyFsmP & 1) != 0 )
                  return;
                if ( v369 )
                {
                  LOBYTE(v369->fields.mcTo.fields.y) = v237;
                  BYTE1(v369->fields.mcTo.fields.y) = 0;
                  MapGimmickComponent__SetDispAnimQuick((MapGimmickComponent_o *)v369, 1, 0LL);
                  v370 = v369->fields.mcAtlasP;
                  if ( v370 )
                  {
                    v370->fields.m_CachedPtr = 1;
                    goto LABEL_943;
                  }
                }
              }
              goto LABEL_1017;
            }
          }
          else
          {
            v236 = 0;
          }
          v237 = 0;
          goto LABEL_856;
        case 404:
          v204 = v12->fields.param;
          MyFsmP = sub_B5299C(char___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1017;
          v7 = (const MethodInfo *)MyFsmP;
          if ( !*(_DWORD *)(MyFsmP + 24) )
            goto LABEL_1019;
          *(_WORD *)(MyFsmP + 32) = 44;
          if ( !v204 )
            goto LABEL_1017;
          MyFsmP = (__int64)System_String__Split(v204, (System_Char_array *)MyFsmP, 0LL);
          if ( !MyFsmP )
            goto LABEL_1017;
          v205 = MyFsmP;
          if ( *(int *)(MyFsmP + 24) <= 4 )
            goto LABEL_440;
          v206 = System_Single__Parse(*(System_String_o **)(MyFsmP + 56), 0LL);
          if ( !*(_DWORD *)(v205 + 24) )
            goto LABEL_1019;
          v207 = *p_that;
          v208 = v206;
          MyFsmP = System_Int32__Parse(*(System_String_o **)(v205 + 32), 0LL);
          if ( !v207 )
            goto LABEL_1017;
          v209 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                           v207,
                                           2,
                                           MyFsmP,
                                           this,
                                           (const MethodInfo_1F73BD8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v209, 0LL, 0LL) )
            return;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_42AC2A0 )
          {
            sub_B52984(&TerminalSceneComponent_TypeInfo);
            byte_42AC2A0 = 1;
          }
          MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v210 = **(_QWORD **)(MyFsmP + 184);
          if ( !v210 )
            goto LABEL_1017;
          if ( *(_DWORD *)(v205 + 24) <= 1u )
            goto LABEL_1019;
          v211 = *(ScrTerminalMap_o **)(v210 + 256);
          v212 = System_Single__Parse(*(System_String_o **)(v205 + 40), 0LL);
          if ( *(_DWORD *)(v205 + 24) <= 2u )
            goto LABEL_1019;
          v213 = v212;
          v214 = System_Single__Parse(*(System_String_o **)(v205 + 48), 0LL);
          if ( !v211 )
            goto LABEL_1017;
          *(UnityEngine_Vector3_o *)&v215 = ScrTerminalMap__LocalPosFromCoord(v211, v213, v214, 0.0, 0.0, 0LL);
          if ( *(_DWORD *)(v205 + 24) <= 4u )
            goto LABEL_1019;
          v218 = v215;
          v219 = v216;
          v220 = v217;
          v221 = System_Int32__Parse(*(System_String_o **)(v205 + 64), 0LL);
          v222 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(
            v222,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__25__,
            0LL);
          if ( !v209 )
            goto LABEL_1017;
          v450.fields.y = v219;
          v450.fields.z = v220;
          v450.fields.x = v218;
          MapGimmickComponent__SetMoveAnim((MapGimmickComponent_o *)v209, v450, v208 * 0.001, v221, v222, 0LL);
          return;
        case 405:
          v250 = (QuestAfterAction_StateMain___c__DisplayClass16_12_o *)sub_B52A54(QuestAfterAction_StateMain___c__DisplayClass16_12_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_12___ctor(v250, 0LL);
          if ( !v250 )
            goto LABEL_1017;
          v250->fields.CS___8__locals12 = v5;
          sub_B52920(&v250->fields.CS___8__locals12);
          CS___8__locals12 = v250->fields.CS___8__locals12;
          if ( !CS___8__locals12 )
            goto LABEL_1017;
          v252 = CS___8__locals12->fields.that;
          MyFsmP = System_Int32__Parse(v12->fields.param, 0LL);
          if ( !v252 )
            goto LABEL_1017;
          v250->fields.mapGimmick = (struct MapGimmickComponent_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                                      v252,
                                                                      2,
                                                                      MyFsmP,
                                                                      this,
                                                                      (const MethodInfo_1F73BD8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          sub_B52920(&v250->fields);
          v253 = (UnityEngine_Object_o *)v250->fields.mapGimmick;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v253, 0LL, 0LL) )
            return;
          v254 = v250->fields.mapGimmick;
          v255 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(
            v255,
            (Il2CppObject *)v250,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_12__UpdateAnim_b__26__,
            0LL);
          if ( !v254 )
            goto LABEL_1017;
          MapGimmickComponent__SetState(v254, 3, v255, 0LL);
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_42AC2A0 )
          {
            sub_B52984(&TerminalSceneComponent_TypeInfo);
            byte_42AC2A0 = 1;
          }
          MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v256 = **(TerminalSceneComponent_o ***)(MyFsmP + 184);
          if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
          }
          if ( !v256 )
            goto LABEL_1017;
          v24 = v256;
          v26 = 0LL;
          v25 = AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME;
          goto LABEL_46;
        case 406:
          v257 = (QuestAfterAction_StateMain___c__DisplayClass16_13_o *)sub_B52A54(QuestAfterAction_StateMain___c__DisplayClass16_13_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_13___ctor(v257, 0LL);
          if ( !v257 )
            goto LABEL_1017;
          v257->fields.CS___8__locals13 = v5;
          sub_B52920(&v257->fields.CS___8__locals13);
          v258 = v12->fields.param;
          MyFsmP = sub_B5299C(char___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1017;
          v7 = (const MethodInfo *)MyFsmP;
          if ( !*(_DWORD *)(MyFsmP + 24) )
            goto LABEL_1019;
          *(_WORD *)(MyFsmP + 32) = 44;
          if ( !v258 )
            goto LABEL_1017;
          v257->fields.paramsStr = System_String__Split(v258, (System_Char_array *)MyFsmP, 0LL);
          p_paramsStr = &v257->fields.paramsStr;
          sub_B52920(&v257->fields.paramsStr);
          CS___8__locals13 = v257->fields.CS___8__locals13;
          if ( !CS___8__locals13 )
            goto LABEL_1017;
          v261 = *p_paramsStr;
          if ( !*p_paramsStr )
            goto LABEL_1017;
          if ( !v261->max_length )
            goto LABEL_1019;
          v262 = CS___8__locals13->fields.that;
          MyFsmP = System_Int32__Parse(v261->m_Items[0], 0LL);
          if ( !v262 )
            goto LABEL_1017;
          v257->fields.mapGimmick = (struct MapGimmickComponent_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                                      v262,
                                                                      2,
                                                                      MyFsmP,
                                                                      this,
                                                                      (const MethodInfo_1F73BD8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          sub_B52920(&v257->fields);
          v263 = (UnityEngine_Object_o *)v257->fields.mapGimmick;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v263, 0LL, 0LL) )
            return;
          v264 = v257->fields.mapGimmick;
          v265 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          v266 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_13__UpdateAnim_b__27__;
          v267 = v265;
          goto LABEL_602;
        case 407:
          v238 = v12->fields.param;
          MyFsmP = sub_B5299C(char___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1017;
          v7 = (const MethodInfo *)MyFsmP;
          if ( !*(_DWORD *)(MyFsmP + 24) )
            goto LABEL_1019;
          *(_WORD *)(MyFsmP + 32) = 44;
          if ( !v238 )
            goto LABEL_1017;
          MyFsmP = (__int64)System_String__Split(v238, (System_Char_array *)MyFsmP, 0LL);
          if ( !MyFsmP )
            goto LABEL_1017;
          v239 = MyFsmP;
          if ( !*(_DWORD *)(MyFsmP + 24) )
            goto LABEL_1019;
          v240 = *p_that;
          MyFsmP = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
          if ( !v240 )
            goto LABEL_1017;
          v241 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                           v240,
                                           2,
                                           MyFsmP,
                                           this,
                                           (const MethodInfo_1F73BD8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          MyFsmP = UnityEngine_Object__op_Equality(v241, 0LL, 0LL);
          if ( (MyFsmP & 1) != 0 )
            return;
          if ( !v241 )
            goto LABEL_1017;
          MyFsmP = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v241, 0LL);
          if ( !MyFsmP )
            goto LABEL_1017;
          MyFsmP = (__int64)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                              (UnityEngine_GameObject_o *)MyFsmP,
                              (const MethodInfo_1B7B264 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
          if ( *(_DWORD *)(v239 + 24) <= 1u )
            goto LABEL_1019;
          v242 = (UIWidget_o *)MyFsmP;
          MyFsmP = UnityEngine_ColorUtility__TryParseHtmlString(*(System_String_o **)(v239 + 40), &color, 0LL);
          if ( !v242 )
            goto LABEL_1017;
          UIWidget__set_color(v242, color, 0LL);
          goto LABEL_440;
        case 408:
          v257 = (QuestAfterAction_StateMain___c__DisplayClass16_13_o *)sub_B52A54(QuestAfterAction_StateMain___c__DisplayClass16_15_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_15___ctor(
            (QuestAfterAction_StateMain___c__DisplayClass16_15_o *)v257,
            0LL);
          if ( !v257 )
            goto LABEL_1017;
          v257->fields.paramsStr = (struct System_String_array *)v5;
          sub_B52920(&v257->fields.paramsStr);
          paramsStr = v257->fields.paramsStr;
          if ( !paramsStr )
            goto LABEL_1017;
          v269 = *(QuestAfterAction_o **)&paramsStr->max_length;
          MyFsmP = System_Int32__Parse(v12->fields.param, 0LL);
          if ( !v269 )
            goto LABEL_1017;
          v257->fields.mapGimmick = (struct MapGimmickComponent_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                                      v269,
                                                                      2,
                                                                      MyFsmP,
                                                                      this,
                                                                      (const MethodInfo_1F73BD8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
          v270 = &v257->fields;
          sub_B52920(&v257->fields);
          v271 = (UnityEngine_Object_o *)v257->fields.mapGimmick;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v271, 0LL, 0LL) )
            return;
          if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
          }
          MyFsmP = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_QuestTree__get_Instance__);
          if ( !v270->mapGimmick || !MyFsmP )
            goto LABEL_1017;
          v272 = QuestTree__CheckMapGimmickCond_22028516(
                   (QuestTree_o *)MyFsmP,
                   v270->mapGimmick->fields.mMapCtrl_MapGimmickInfo,
                   0LL);
          v264 = v270->mapGimmick;
          v273 = v272;
          v265 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          v267 = v265;
          if ( v273 )
          {
            v266 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__29__;
LABEL_602:
            System_Action___ctor(v265, (Il2CppObject *)v257, *v266, 0LL);
            if ( !v264 )
              goto LABEL_1017;
            v274 = 3;
          }
          else
          {
            System_Action___ctor(
              v265,
              (Il2CppObject *)v257,
              Method_QuestAfterAction_StateMain___c__DisplayClass16_15__UpdateAnim_b__30__,
              0LL);
            if ( !v264 )
              goto LABEL_1017;
            v274 = 2;
          }
          v405 = v264;
          v406 = v267;
          goto LABEL_965;
        case 409:
          v223 = v12->fields.param;
          MyFsmP = sub_B5299C(char___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1017;
          v7 = (const MethodInfo *)MyFsmP;
          if ( !*(_DWORD *)(MyFsmP + 24) )
            goto LABEL_1019;
          *(_WORD *)(MyFsmP + 32) = 44;
          if ( !v223 )
            goto LABEL_1017;
          MyFsmP = (__int64)System_String__Split(v223, (System_Char_array *)MyFsmP, 0LL);
          if ( !MyFsmP )
            goto LABEL_1017;
          v224 = *(_QWORD *)(MyFsmP + 24);
          v225 = MyFsmP;
          if ( v224 )
          {
            if ( !(_DWORD)v224 )
              goto LABEL_1019;
            v226 = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
            if ( *(int *)(v225 + 24) >= 2 )
            {
              v227 = System_Int32__Parse(*(System_String_o **)(v225 + 40), 0LL) > 0;
              goto LABEL_836;
            }
          }
          else
          {
            v226 = 0;
          }
          v227 = 0;
LABEL_836:
          MyFsmP = (__int64)*p_that;
          if ( *p_that )
          {
            v364 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                     (QuestAfterAction_o *)MyFsmP,
                     2,
                     v226,
                     this,
                     (const MethodInfo_1F73BD8 *)Method_QuestAfterAction_GetMapComponent_MapGimmickComponent___);
            if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            }
            MyFsmP = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v364, 0LL, 0LL);
            if ( (MyFsmP & 1) != 0 )
              return;
            if ( v364 )
            {
              LOBYTE(v364->fields.mcTo.fields.y) = v227;
              BYTE1(v364->fields.mcTo.fields.y) = 0;
              MapGimmickComponent__SetDispAnim((MapGimmickComponent_o *)v364, 1, 0LL);
              v365 = v364->fields.mcAtlasP;
              if ( v365 )
              {
                v365->fields.m_CachedPtr = 1;
                v366 = this->klass;
                this->fields.IsAnimDoing = 0;
                v367 = ((__int64 (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))v366->vtable._11_get_CommandIndex.method)(
                         this,
                         v366->vtable._12_set_CommandIndex.methodPtr);
                ((void (__fastcall *)(QuestAfterAction_StateMain_o *, _QWORD, Il2CppMethodPointer))this->klass->vtable._12_set_CommandIndex.method)(
                  this,
                  (unsigned int)(v367 + 1),
                  this->klass->vtable._13_UpdateAnim.methodPtr);
LABEL_944:
                ((void (__fastcall *)(QuestAfterAction_StateMain_o *, QuestAfterAction_o *, Il2CppMethodPointer))this->klass->vtable._13_UpdateAnim.method)(
                  this,
                  *p_that,
                  this->klass->vtable._14_EndAnim.methodPtr);
                return;
              }
            }
          }
          goto LABEL_1017;
        default:
          if ( id != 500 )
            return;
          v143 = System_Int32__Parse(v12->fields.param, 0LL);
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_42AC2F1 )
          {
            sub_B52984(&TerminalPramsManager_TypeInfo);
            byte_42AC2F1 = 1;
          }
          v144 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v144 = TerminalPramsManager_TypeInfo;
          }
          v144->static_fields->_AfterActionFocusQuestId_k__BackingField = v143;
          if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !DataManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
          }
          MyFsmP = (__int64)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_QuestMaster___);
          if ( !MyFsmP )
            goto LABEL_1017;
          if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                  (DataMasterBase_WarMaster__WarEntity__int__o *)MyFsmP,
                  &entity,
                  v143,
                  (const MethodInfo_23E2334 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__TryGetEntity__) )
            goto LABEL_440;
          MyFsmP = (__int64)entity;
          if ( !entity )
            goto LABEL_1017;
          v145 = *p_that;
          MyFsmP = QuestEntity__getSpotId((QuestEntity_o *)entity, 0LL);
          if ( !v145 )
            goto LABEL_1017;
          v146 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                           v145,
                                           0,
                                           MyFsmP,
                                           this,
                                           (const MethodInfo_1F73BD8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          MyFsmP = UnityEngine_Object__op_Inequality(v146, 0LL, 0LL);
          if ( (MyFsmP & 1) == 0 )
            goto LABEL_440;
          if ( !v146 )
            goto LABEL_1017;
          SrcSpotBasePrefab__SelectSpot((SrcSpotBasePrefab_o *)v146, 0, 0LL);
          goto LABEL_440;
      }
    }
    if ( id <= 205 )
    {
      switch ( id )
      {
        case 'd':
          v50 = (QuestAfterAction_StateMain___c__DisplayClass16_1_o *)sub_B52A54(QuestAfterAction_StateMain___c__DisplayClass16_1_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_1___ctor(v50, 0LL);
          if ( !v50 )
            goto LABEL_1010;
          v50->fields.CS___8__locals1 = v5;
          sub_B52920(&v50->fields.CS___8__locals1);
          CS___8__locals1 = v50->fields.CS___8__locals1;
          if ( !CS___8__locals1 )
            goto LABEL_1010;
          v52 = CS___8__locals1->fields.that;
          updated = System_Int32__Parse(v12->fields.param, 0LL);
          if ( !v52 )
            goto LABEL_1010;
          v50->fields.spot = (struct SrcSpotBasePrefab_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                             v52,
                                                             0,
                                                             updated,
                                                             this,
                                                             (const MethodInfo_1F73BD8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          sub_B52920(&v50->fields);
          spot = (UnityEngine_Object_o *)v50->fields.spot;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(spot, 0LL, 0LL) )
            return;
          v54 = v50->fields.spot;
          v55 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(
            v55,
            (Il2CppObject *)v50,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_1__UpdateAnim_b__0__,
            0LL);
          if ( !v54 )
            goto LABEL_1010;
          v56 = 2;
          goto LABEL_660;
        case 'e':
          v296 = (QuestAfterAction_StateMain___c__DisplayClass16_2_o *)sub_B52A54(QuestAfterAction_StateMain___c__DisplayClass16_2_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_2___ctor(v296, 0LL);
          if ( !v296 )
            goto LABEL_1010;
          v296->fields.CS___8__locals2 = v5;
          sub_B52920(&v296->fields.CS___8__locals2);
          CS___8__locals2 = v296->fields.CS___8__locals2;
          if ( !CS___8__locals2 )
            goto LABEL_1010;
          v298 = CS___8__locals2->fields.that;
          updated = System_Int32__Parse(v12->fields.param, 0LL);
          if ( !v298 )
            goto LABEL_1010;
          v296->fields.spot = (struct SrcSpotBasePrefab_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                              v298,
                                                              0,
                                                              updated,
                                                              this,
                                                              (const MethodInfo_1F73BD8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          sub_B52920(&v296->fields);
          v299 = (UnityEngine_Object_o *)v296->fields.spot;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v299, 0LL, 0LL) )
            return;
          v54 = v296->fields.spot;
          v55 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(
            v55,
            (Il2CppObject *)v296,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_2__UpdateAnim_b__1__,
            0LL);
          if ( !v54 )
            goto LABEL_1010;
          v56 = 3;
LABEL_660:
          SrcSpotBasePrefab__SetState(v54, v56, v55, 0LL);
          return;
        case 'f':
          v279 = (QuestAfterAction_StateMain___c__DisplayClass16_3_o *)sub_B52A54(QuestAfterAction_StateMain___c__DisplayClass16_3_TypeInfo);
          QuestAfterAction_StateMain___c__DisplayClass16_3___ctor(v279, 0LL);
          if ( !v279 )
            goto LABEL_1010;
          v279->fields.CS___8__locals3 = v5;
          p_CS___8__locals3 = &v279->fields.CS___8__locals3;
          sub_B52920(&v279->fields.CS___8__locals3);
          if ( !v279->fields.CS___8__locals3 )
            goto LABEL_1010;
          v281 = v279->fields.CS___8__locals3->fields.that;
          updated = System_Int32__Parse(v12->fields.param, 0LL);
          if ( !v281 )
            goto LABEL_1010;
          v279->fields.spot = (struct SrcSpotBasePrefab_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                              v281,
                                                              0,
                                                              updated,
                                                              this,
                                                              (const MethodInfo_1F73BD8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          sub_B52920(&v279->fields);
          v282 = (UnityEngine_Object_o *)v279->fields.spot;
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Equality(v282, 0LL, 0LL) )
            return;
          v283 = v279->fields.spot;
          v284 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(
            v284,
            (Il2CppObject *)v279,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_3__UpdateAnim_b__2__,
            0LL);
          if ( !v283 )
            goto LABEL_1010;
          SrcSpotBasePrefab__SetState(v283, 4, v284, 0LL);
          if ( !*p_CS___8__locals3 )
            goto LABEL_1010;
          updated = (__int64)(*p_CS___8__locals3)->fields.that;
          if ( !updated )
            goto LABEL_1010;
          *(_QWORD *)(updated + 168) = v279->fields.spot;
          v285 = updated + 168;
          goto LABEL_642;
        case 'g':
          v286 = v12->fields.param;
          updated = sub_B5299C(char___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_1010;
          v7 = (const MethodInfo *)updated;
          if ( !*(_DWORD *)(updated + 24) )
            goto LABEL_1016;
          *(_WORD *)(updated + 32) = 44;
          if ( !v286 )
            goto LABEL_1010;
          updated = (__int64)System_String__Split(v286, (System_Char_array *)updated, 0LL);
          if ( !updated )
            goto LABEL_1010;
          v287 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_440;
          v288 = *p_that;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v288 )
            goto LABEL_1010;
          v289 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                   v288,
                   0,
                   updated,
                   this,
                   (const MethodInfo_1F73BD8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v289, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v287 + 24) <= 1u )
            goto LABEL_1016;
          updated = System_Int32__Parse(*(System_String_o **)(v287 + 40), 0LL);
          if ( !v289 )
            goto LABEL_1010;
          v289[1].fields.miLineH = updated;
          v290 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(v290, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
          SrcSpotBasePrefab__SetState((SrcSpotBasePrefab_o *)v289, 5, v290, 0LL);
          updated = (__int64)*p_that;
          if ( !*p_that )
            goto LABEL_1010;
          *(_QWORD *)(updated + 168) = v289;
          v285 = updated + 168;
LABEL_642:
          sub_B52920(v285);
          return;
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
          return;
        case 'n':
          v291 = *p_that;
          updated = System_Int32__Parse(v12->fields.param, 0LL);
          if ( !v291 )
            goto LABEL_1010;
          v292 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                           v291,
                                           0,
                                           updated,
                                           this,
                                           (const MethodInfo_1F73BD8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          updated = UnityEngine_Object__op_Equality(v292, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v292 )
            goto LABEL_1010;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v292, 0, 0LL);
          monitor = v292[9].monitor;
          if ( !monitor )
            goto LABEL_1010;
          monitor[5] = 0;
          v294 = (SrcSpotBasePrefab_o *)v292;
          v295 = 0;
          goto LABEL_678;
        case 'o':
          v303 = *p_that;
          updated = System_Int32__Parse(v12->fields.param, 0LL);
          if ( !v303 )
            goto LABEL_1010;
          v301 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                           v303,
                                           0,
                                           updated,
                                           this,
                                           (const MethodInfo_1F73BD8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          updated = UnityEngine_Object__op_Equality(v301, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v301 )
            goto LABEL_1010;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v301, 1, 0LL);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v301, 0, 0LL);
          v304 = v301[9].monitor;
          if ( !v304 )
            goto LABEL_1010;
          v304[5] = 2;
          goto LABEL_677;
        case 'p':
          v300 = *p_that;
          updated = System_Int32__Parse(v12->fields.param, 0LL);
          if ( !v300 )
            goto LABEL_1010;
          v301 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                           v300,
                                           0,
                                           updated,
                                           this,
                                           (const MethodInfo_1F73BD8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          updated = UnityEngine_Object__op_Equality(v301, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( !v301 )
            goto LABEL_1010;
          SrcSpotBasePrefab__SetQaaScaleAnimQuick((SrcSpotBasePrefab_o *)v301, 1, 0LL);
          SrcSpotBasePrefab__SetQaaColorAnimQuick((SrcSpotBasePrefab_o *)v301, 1, 0LL);
          v302 = v301[9].monitor;
          if ( !v302 )
            goto LABEL_1010;
          v302[5] = 1;
LABEL_677:
          v295 = 1;
          v294 = (SrcSpotBasePrefab_o *)v301;
LABEL_678:
          SrcSpotBasePrefab__SetTouchType(v294, v295, 0LL);
          goto LABEL_943;
        case 'q':
          v275 = v12->fields.param;
          updated = sub_B5299C(char___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_1010;
          v7 = (const MethodInfo *)updated;
          if ( !*(_DWORD *)(updated + 24) )
            goto LABEL_1016;
          *(_WORD *)(updated + 32) = 44;
          if ( !v275 )
            goto LABEL_1010;
          updated = (__int64)System_String__Split(v275, (System_Char_array *)updated, 0LL);
          if ( !updated )
            goto LABEL_1010;
          v276 = updated;
          if ( *(int *)(updated + 24) <= 1 )
            goto LABEL_440;
          v277 = *p_that;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          if ( !v277 )
            goto LABEL_1010;
          v278 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                   v277,
                   0,
                   updated,
                   this,
                   (const MethodInfo_1F73BD8 *)Method_QuestAfterAction_GetMapComponent_SrcSpotBasePrefab___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v278, 0LL, 0LL);
          if ( (updated & 1) != 0 )
            return;
          if ( *(_DWORD *)(v276 + 24) <= 1u )
            goto LABEL_1016;
          updated = System_Int32__Parse(*(System_String_o **)(v276 + 40), 0LL);
          if ( !v278 )
            goto LABEL_1010;
          v278[1].fields.miLineH = updated;
          SrcSpotBasePrefab__UpdateDisp((SrcSpotBasePrefab_o *)v278, 1, 0LL);
          goto LABEL_943;
        default:
          switch ( id )
          {
            case 200:
              if ( this->fields.IsMapModel )
              {
                v57 = (QuestAfterAction_StateMain___c__DisplayClass16_4_o *)sub_B52A54(QuestAfterAction_StateMain___c__DisplayClass16_4_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_4___ctor(v57, 0LL);
                if ( !v57 )
                  goto LABEL_1010;
                v57->fields.CS___8__locals4 = v5;
                sub_B52920(&v57->fields.CS___8__locals4);
                CS___8__locals4 = v57->fields.CS___8__locals4;
                if ( !CS___8__locals4 )
                  goto LABEL_1010;
                v59 = CS___8__locals4->fields.that;
                updated = System_Int32__Parse(v12->fields.param, 0LL);
                if ( !v59 )
                  goto LABEL_1010;
                v57->fields.roadModel = (struct ModelLineComponent_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                                         v59,
                                                                         1,
                                                                         updated,
                                                                         this,
                                                                         (const MethodInfo_1F73BD8 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                sub_B52920(&v57->fields);
                roadModel = (UnityEngine_Object_o *)v57->fields.roadModel;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Equality(roadModel, 0LL, 0LL) )
                {
                  v61 = v57->fields.roadModel;
                  v62 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                  System_Action___ctor(
                    v62,
                    (Il2CppObject *)v57,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_4__UpdateAnim_b__3__,
                    0LL);
                  if ( !v61 )
                    goto LABEL_1010;
                  v63 = 2;
                  goto LABEL_719;
                }
              }
              else
              {
                v389 = (QuestAfterAction_StateMain___c__DisplayClass16_5_o *)sub_B52A54(QuestAfterAction_StateMain___c__DisplayClass16_5_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_5___ctor(v389, 0LL);
                if ( !v389 )
                  goto LABEL_1010;
                v389->fields.CS___8__locals5 = v5;
                sub_B52920(&v389->fields.CS___8__locals5);
                CS___8__locals5 = v389->fields.CS___8__locals5;
                if ( !CS___8__locals5 )
                  goto LABEL_1010;
                v391 = CS___8__locals5->fields.that;
                updated = System_Int32__Parse(v12->fields.param, 0LL);
                if ( !v391 )
                  goto LABEL_1010;
                v389->fields.roadSprite = QuestAfterAction__GetMapComponent_srcLineSprite_(
                                            v391,
                                            1,
                                            updated,
                                            this,
                                            (const MethodInfo_1F73BD8 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                sub_B52920(&v389->fields);
                roadSprite = (UnityEngine_Object_o *)v389->fields.roadSprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Equality(roadSprite, 0LL, 0LL) )
                {
                  v386 = v389->fields.roadSprite;
                  v387 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                  System_Action___ctor(
                    v387,
                    (Il2CppObject *)v389,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_5__UpdateAnim_b__4__,
                    0LL);
                  if ( !v386 )
                    goto LABEL_1010;
                  v388 = 2;
                  goto LABEL_927;
                }
              }
              return;
            case 201:
              if ( this->fields.IsMapModel )
              {
                v318 = (QuestAfterAction_StateMain___c__DisplayClass16_6_o *)sub_B52A54(QuestAfterAction_StateMain___c__DisplayClass16_6_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_6___ctor(v318, 0LL);
                if ( !v318 )
                  goto LABEL_1010;
                v318->fields.CS___8__locals6 = v5;
                sub_B52920(&v318->fields.CS___8__locals6);
                CS___8__locals6 = v318->fields.CS___8__locals6;
                if ( !CS___8__locals6 )
                  goto LABEL_1010;
                v320 = CS___8__locals6->fields.that;
                updated = System_Int32__Parse(v12->fields.param, 0LL);
                if ( !v320 )
                  goto LABEL_1010;
                v318->fields.roadModel = (struct ModelLineComponent_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                                          v320,
                                                                          1,
                                                                          updated,
                                                                          this,
                                                                          (const MethodInfo_1F73BD8 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                sub_B52920(&v318->fields);
                v321 = (UnityEngine_Object_o *)v318->fields.roadModel;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Equality(v321, 0LL, 0LL) )
                {
                  v61 = v318->fields.roadModel;
                  v62 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                  System_Action___ctor(
                    v62,
                    (Il2CppObject *)v318,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_6__UpdateAnim_b__5__,
                    0LL);
                  if ( !v61 )
                    goto LABEL_1010;
                  v63 = 3;
                  goto LABEL_719;
                }
              }
              else
              {
                v393 = (QuestAfterAction_StateMain___c__DisplayClass16_7_o *)sub_B52A54(QuestAfterAction_StateMain___c__DisplayClass16_7_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_7___ctor(v393, 0LL);
                if ( !v393 )
                  goto LABEL_1010;
                v393->fields.CS___8__locals7 = v5;
                sub_B52920(&v393->fields.CS___8__locals7);
                CS___8__locals7 = v393->fields.CS___8__locals7;
                if ( !CS___8__locals7 )
                  goto LABEL_1010;
                v395 = CS___8__locals7->fields.that;
                updated = System_Int32__Parse(v12->fields.param, 0LL);
                if ( !v395 )
                  goto LABEL_1010;
                v393->fields.roadSprite = QuestAfterAction__GetMapComponent_srcLineSprite_(
                                            v395,
                                            1,
                                            updated,
                                            this,
                                            (const MethodInfo_1F73BD8 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                sub_B52920(&v393->fields);
                v396 = (UnityEngine_Object_o *)v393->fields.roadSprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Equality(v396, 0LL, 0LL) )
                {
                  v386 = v393->fields.roadSprite;
                  v387 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                  System_Action___ctor(
                    v387,
                    (Il2CppObject *)v393,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_7__UpdateAnim_b__6__,
                    0LL);
                  if ( !v386 )
                    goto LABEL_1010;
                  v388 = 3;
                  goto LABEL_927;
                }
              }
              return;
            case 202:
              if ( this->fields.IsMapModel )
              {
                v310 = (QuestAfterAction_StateMain___c__DisplayClass16_8_o *)sub_B52A54(QuestAfterAction_StateMain___c__DisplayClass16_8_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_8___ctor(v310, 0LL);
                if ( !v310 )
                  goto LABEL_1010;
                v310->fields.CS___8__locals8 = v5;
                sub_B52920(&v310->fields.CS___8__locals8);
                CS___8__locals8 = v310->fields.CS___8__locals8;
                if ( !CS___8__locals8 )
                  goto LABEL_1010;
                v312 = CS___8__locals8->fields.that;
                updated = System_Int32__Parse(v12->fields.param, 0LL);
                if ( !v312 )
                  goto LABEL_1010;
                v310->fields.roadModel = (struct ModelLineComponent_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                                          v312,
                                                                          1,
                                                                          updated,
                                                                          this,
                                                                          (const MethodInfo_1F73BD8 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                sub_B52920(&v310->fields);
                v313 = (UnityEngine_Object_o *)v310->fields.roadModel;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Equality(v313, 0LL, 0LL) )
                {
                  v61 = v310->fields.roadModel;
                  v62 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                  System_Action___ctor(
                    v62,
                    (Il2CppObject *)v310,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_8__UpdateAnim_b__7__,
                    0LL);
                  if ( !v61 )
                    goto LABEL_1010;
                  v63 = 4;
LABEL_719:
                  ModelLineComponent__SetState(v61, v63, v62, 0LL);
                }
              }
              else
              {
                v382 = (QuestAfterAction_StateMain___c__DisplayClass16_9_o *)sub_B52A54(QuestAfterAction_StateMain___c__DisplayClass16_9_TypeInfo);
                QuestAfterAction_StateMain___c__DisplayClass16_9___ctor(v382, 0LL);
                if ( !v382 )
                  goto LABEL_1010;
                v382->fields.CS___8__locals9 = v5;
                sub_B52920(&v382->fields.CS___8__locals9);
                CS___8__locals9 = v382->fields.CS___8__locals9;
                if ( !CS___8__locals9 )
                  goto LABEL_1010;
                v384 = CS___8__locals9->fields.that;
                updated = System_Int32__Parse(v12->fields.param, 0LL);
                if ( !v384 )
                  goto LABEL_1010;
                v382->fields.roadSprite = QuestAfterAction__GetMapComponent_srcLineSprite_(
                                            v384,
                                            1,
                                            updated,
                                            this,
                                            (const MethodInfo_1F73BD8 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                sub_B52920(&v382->fields);
                v385 = (UnityEngine_Object_o *)v382->fields.roadSprite;
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                if ( !UnityEngine_Object__op_Equality(v385, 0LL, 0LL) )
                {
                  v386 = v382->fields.roadSprite;
                  v387 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                  System_Action___ctor(
                    v387,
                    (Il2CppObject *)v382,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_9__UpdateAnim_b__8__,
                    0LL);
                  if ( !v386 )
                    goto LABEL_1010;
                  v388 = 4;
LABEL_927:
                  srcLineSprite__SetState(v386, v388, v387, 0LL);
                }
              }
              return;
            case 203:
              IsMapModel = this->fields.IsMapModel;
              v315 = *p_that;
              updated = System_Int32__Parse(v12->fields.param, 0LL);
              if ( !v315 )
                goto LABEL_1010;
              if ( IsMapModel )
              {
                v316 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         v315,
                         1,
                         updated,
                         this,
                         (const MethodInfo_1F73BD8 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v316, 0LL, 0LL);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v316 )
                  goto LABEL_1010;
                ModelLineComponent__SetQuestAfterActionScaleAnimQuick((ModelLineComponent_o *)v316, 0, 0LL);
                mcAtlasP = v316->fields.mcTweenScaleP;
                if ( !mcAtlasP )
                  goto LABEL_1010;
              }
              else
              {
                v397 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                 v315,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_1F73BD8 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                updated = UnityEngine_Object__op_Equality(v397, 0LL, 0LL);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v397 )
                  goto LABEL_1010;
                srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v397, 0, 0LL);
                mcAtlasP = v397[5].klass;
                if ( !mcAtlasP )
                  goto LABEL_1010;
              }
              goto LABEL_934;
            case 204:
              v306 = this->fields.IsMapModel;
              v307 = *p_that;
              updated = System_Int32__Parse(v12->fields.param, 0LL);
              if ( !v307 )
                goto LABEL_1010;
              if ( v306 )
              {
                v308 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         v307,
                         1,
                         updated,
                         this,
                         (const MethodInfo_1F73BD8 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v308, 0LL, 0LL);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v308 )
                  goto LABEL_1010;
                ModelLineComponent__SetQuestAfterActionScaleAnimQuick((ModelLineComponent_o *)v308, 1, 0LL);
                ModelLineComponent__SetQuestAfterActionColorAnimQuick((ModelLineComponent_o *)v308, 0, 0LL);
                mcTweenScaleP = v308->fields.mcTweenScaleP;
                if ( !mcTweenScaleP )
                  goto LABEL_1010;
              }
              else
              {
                v380 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                 v307,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_1F73BD8 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                updated = UnityEngine_Object__op_Equality(v380, 0LL, 0LL);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v380 )
                  goto LABEL_1010;
                srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v380, 1, 0LL);
                srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v380, 0, 0LL);
                mcTweenScaleP = v380[5].klass;
                if ( !mcTweenScaleP )
                  goto LABEL_1010;
              }
              v381 = 2;
              goto LABEL_942;
            case 205:
              v322 = this->fields.IsMapModel;
              v323 = *p_that;
              updated = System_Int32__Parse(v12->fields.param, 0LL);
              if ( !v323 )
                goto LABEL_1010;
              if ( v322 )
              {
                v324 = QuestAfterAction__GetMapComponent_srcLineSprite_(
                         v323,
                         1,
                         updated,
                         this,
                         (const MethodInfo_1F73BD8 *)Method_QuestAfterAction_GetMapComponent_ModelLineComponent___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                updated = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v324, 0LL, 0LL);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v324 )
                  goto LABEL_1010;
                ModelLineComponent__SetQuestAfterActionScaleAnimQuick((ModelLineComponent_o *)v324, 1, 0LL);
                ModelLineComponent__SetQuestAfterActionColorAnimQuick((ModelLineComponent_o *)v324, 1, 0LL);
                mcTweenScaleP = v324->fields.mcTweenScaleP;
                if ( !mcTweenScaleP )
                  goto LABEL_1010;
              }
              else
              {
                v398 = (UnityEngine_Object_o *)QuestAfterAction__GetMapComponent_srcLineSprite_(
                                                 v323,
                                                 1,
                                                 updated,
                                                 this,
                                                 (const MethodInfo_1F73BD8 *)Method_QuestAfterAction_GetMapComponent_srcLineSprite___);
                if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                }
                updated = UnityEngine_Object__op_Equality(v398, 0LL, 0LL);
                if ( (updated & 1) != 0 )
                  return;
                if ( !v398 )
                  goto LABEL_1010;
                srcLineSprite__SetQaaScaleAnimQuick((srcLineSprite_o *)v398, 1, 0LL);
                srcLineSprite__SetQaaColorAnimQuick((srcLineSprite_o *)v398, 1, 0LL);
                mcTweenScaleP = v398[5].klass;
                if ( !mcTweenScaleP )
                  goto LABEL_1010;
              }
              v381 = 1;
LABEL_942:
              mcTweenScaleP[4] = v381;
              goto LABEL_943;
            default:
              return;
          }
      }
    }
    switch ( id )
    {
      case 300:
      case 305:
        v32 = v12->fields.param;
        updated = sub_B5299C(char___TypeInfo, 1LL);
        if ( !updated )
          goto LABEL_1010;
        v7 = (const MethodInfo *)updated;
        if ( !*(_DWORD *)(updated + 24) )
          goto LABEL_1016;
        *(_WORD *)(updated + 32) = 44;
        if ( !v32 )
          goto LABEL_1010;
        updated = (__int64)System_String__Split(v32, (System_Char_array *)updated, 0LL);
        if ( !updated )
          goto LABEL_1010;
        v33 = *(_QWORD *)(updated + 24);
        v34 = updated;
        if ( (int)v33 <= 0 )
          goto LABEL_440;
        if ( (int)v33 > 2 )
        {
          v337 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v33 = *(_QWORD *)(v34 + 24);
          v35 = v337 * 0.001;
        }
        else
        {
          v35 = 0.5;
        }
        if ( (int)v33 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v34 + 40), 0LL);
          v326 = updated;
          if ( !(unsigned int)*(_QWORD *)(v34 + 24) )
            goto LABEL_1016;
        }
        else
        {
          v326 = 15;
          if ( !(_DWORD)v33 )
            goto LABEL_1016;
        }
        v339 = *p_that;
        updated = System_Int32__Parse(*(System_String_o **)(v34 + 32), 0LL);
        if ( !v339 )
          goto LABEL_1010;
        MapGameObject = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v339, 0, updated, this, 0LL);
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
          if ( !byte_42AC2A0 )
          {
            sub_B52984(&TerminalSceneComponent_TypeInfo);
            byte_42AC2A0 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v341 = **(_QWORD **)(updated + 184);
          if ( !v341 )
            goto LABEL_1010;
          updated = *(_QWORD *)(v341 + 256);
          if ( !updated )
            goto LABEL_1010;
          v455.fields.x = x;
          v455.fields.y = y;
          v455.fields.z = z;
          v456 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v455, 0LL);
          x = v456.fields.x;
          y = v456.fields.y;
          z = v456.fields.z;
        }
        if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0LL);
        if ( (updated & 1) == 0 )
        {
          if ( !*(_DWORD *)(v34 + 24) )
            goto LABEL_1016;
          v343 = *(System_String_o **)(v34 + 32);
          if ( v343 )
          {
            updated = System_String__op_Equality(
                        *(System_String_o **)(v34 + 32),
                        (System_String_o *)StringLiteral_1111/*"10703"*/,
                        0LL);
            if ( (updated & 1) != 0 )
            {
              y = y + -50.0;
            }
            else
            {
              updated = System_String__op_Equality(v343, (System_String_o *)StringLiteral_1172/*"30101"*/, 0LL);
              if ( (updated & 1) != 0 )
                y = y + -50.0;
            }
          }
        }
        if ( v12->fields.id != 305 || *(int *)(v34 + 24) < 4 )
        {
          if ( !*p_that )
            goto LABEL_1010;
          mMapCamera = (*p_that)->fields.mMapCamera;
          v335 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          v336 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__10__;
          goto LABEL_988;
        }
        if ( !*p_that )
          goto LABEL_1010;
        v410 = (*p_that)->fields.mMapCamera;
        *(_QWORD *)&v444.fields.value.fields.x = &v433;
        v460.fields.x = x;
        v460.fields.y = y;
        *(_QWORD *)&v444.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
        v460.fields.z = z;
        *(_QWORD *)&v433.fields.value.fields.x = 0LL;
        *(_QWORD *)&v433.fields.value.fields.z = 0LL;
        System_Nullable_Vector3____ctor(v444, v460, v342);
        if ( *(_DWORD *)(v34 + 24) <= 3u )
          goto LABEL_1016;
        v415 = System_Single__Parse(*(System_String_o **)(v34 + 56), 0LL);
        p_size = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(p_size, v415, (const MethodInfo_21733B4 *)Method_System_Nullable_float___ctor__);
        v412 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        v413 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__9__;
        goto LABEL_1005;
      case 301:
      case 306:
        v131 = v12->fields.param;
        updated = sub_B5299C(char___TypeInfo, 1LL);
        if ( !updated )
          goto LABEL_1010;
        v7 = (const MethodInfo *)updated;
        if ( !*(_DWORD *)(updated + 24) )
          goto LABEL_1016;
        *(_WORD *)(updated + 32) = 44;
        if ( !v131 )
          goto LABEL_1010;
        updated = (__int64)System_String__Split(v131, (System_Char_array *)updated, 0LL);
        if ( !updated )
          goto LABEL_1010;
        v132 = *(_QWORD *)(updated + 24);
        v133 = updated;
        if ( (int)v132 <= 0 )
          goto LABEL_440;
        if ( (int)v132 > 2 )
        {
          v338 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v132 = *(_QWORD *)(v133 + 24);
          v35 = v338 * 0.001;
        }
        else
        {
          v35 = 0.5;
        }
        if ( (int)v132 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v133 + 40), 0LL);
          v326 = updated;
          if ( !(unsigned int)*(_QWORD *)(v133 + 24) )
            goto LABEL_1016;
        }
        else
        {
          v326 = 15;
          if ( !(_DWORD)v132 )
            goto LABEL_1016;
        }
        v344 = *p_that;
        updated = System_Int32__Parse(*(System_String_o **)(v133 + 32), 0LL);
        if ( !v344 )
          goto LABEL_1010;
        v345 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v344, 1, updated, this, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        updated = UnityEngine_Object__op_Equality(v345, 0LL, 0LL);
        if ( (updated & 1) != 0 )
          return;
        if ( this->fields.IsMapModel )
        {
          if ( !v345 )
            goto LABEL_1010;
          updated = (__int64)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                               (UnityEngine_GameObject_o *)v345,
                               (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_ModelLineComponent___);
          if ( !updated )
            goto LABEL_1010;
          Position = GameObjectExtensions__GetPosition((UnityEngine_GameObject_o *)*(_QWORD *)(updated + 24), 0LL);
          v346 = Position.fields.x;
          v347 = Position.fields.y;
          v348 = Position.fields.z;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_42AC2A0 )
          {
            sub_B52984(&TerminalSceneComponent_TypeInfo);
            byte_42AC2A0 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v349 = **(_QWORD **)(updated + 184);
          if ( !v349 )
            goto LABEL_1010;
          updated = *(_QWORD *)(v349 + 256);
          if ( !updated )
            goto LABEL_1010;
          v458.fields.x = v346;
          v458.fields.y = v347;
          v458.fields.z = v348;
          *(UnityEngine_Vector3_o *)&v350 = ScrTerminalMap__ConvertWorldToScreenPosition(
                                              (ScrTerminalMap_o *)updated,
                                              v458,
                                              0LL);
        }
        else
        {
          *(UnityEngine_Vector3_o *)&v350 = GameObjectExtensions__GetLocalPosition(
                                              (UnityEngine_GameObject_o *)v345,
                                              0LL);
        }
        v400 = v350;
        v401 = v351;
        v402 = v352;
        if ( (BYTE3(FSUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !FSUtility_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(FSUtility_TypeInfo);
        updated = FSUtility__IsUnderVista(0LL);
        if ( (updated & 1) == 0 )
        {
          if ( !*(_DWORD *)(v133 + 24) )
            goto LABEL_1016;
          v404 = *(System_String_o **)(v133 + 32);
          if ( v404 )
          {
            updated = System_String__op_Equality(
                        *(System_String_o **)(v133 + 32),
                        (System_String_o *)StringLiteral_1111/*"10703"*/,
                        0LL);
            if ( (updated & 1) != 0 )
            {
              v401 = v401 + -95.0;
            }
            else
            {
              updated = System_String__op_Equality(v404, (System_String_o *)StringLiteral_1173/*"30102"*/, 0LL);
              if ( (updated & 1) != 0 )
                v401 = v401 + 45.0;
            }
          }
        }
        if ( v12->fields.id != 306 || *(int *)(v133 + 24) < 4 )
        {
          if ( !*p_that )
            goto LABEL_1010;
          v416 = (*p_that)->fields.mMapCamera;
          v414 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(
            v414,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__12__,
            0LL);
          if ( !v416 )
            goto LABEL_1010;
          v197 = v416;
          v198 = v400;
          v199 = v401;
          v200 = v402;
          goto LABEL_1000;
        }
        if ( !*p_that )
          goto LABEL_1010;
        v410 = (*p_that)->fields.mMapCamera;
        *(_QWORD *)&v445.fields.value.fields.x = &v433;
        v461.fields.x = v400;
        v461.fields.y = v401;
        *(_QWORD *)&v445.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
        v461.fields.z = v402;
        *(_QWORD *)&v433.fields.value.fields.x = 0LL;
        *(_QWORD *)&v433.fields.value.fields.z = 0LL;
        System_Nullable_Vector3____ctor(v445, v461, v403);
        if ( *(_DWORD *)(v133 + 24) <= 3u )
          goto LABEL_1016;
        v417 = System_Single__Parse(*(System_String_o **)(v133 + 56), 0LL);
        v439 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v439, v417, (const MethodInfo_21733B4 *)Method_System_Nullable_float___ctor__);
        v412 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        v413 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__11__;
LABEL_1005:
        v418 = v412;
        System_Action___ctor(v412, (Il2CppObject *)v5, *v413, 0LL);
        if ( !v410 )
          goto LABEL_1010;
        v448 = v433;
        v442 = size;
        v419 = v410;
        v420 = v35;
        v421 = v326;
        v422 = v418;
        goto LABEL_1015;
      case 302:
      case 307:
        v109 = v12->fields.param;
        updated = sub_B5299C(char___TypeInfo, 1LL);
        if ( !updated )
          goto LABEL_1010;
        v7 = (const MethodInfo *)updated;
        if ( !*(_DWORD *)(updated + 24) )
          goto LABEL_1016;
        *(_WORD *)(updated + 32) = 44;
        if ( !v109 )
          goto LABEL_1010;
        updated = (__int64)System_String__Split(v109, (System_Char_array *)updated, 0LL);
        if ( !updated )
          goto LABEL_1010;
        v110 = *(_QWORD *)(updated + 24);
        v111 = updated;
        if ( (int)v110 <= 0 )
          goto LABEL_440;
        if ( (int)v110 > 2 )
        {
          v325 = System_Single__Parse(*(System_String_o **)(updated + 48), 0LL);
          v110 = *(_QWORD *)(v111 + 24);
          v35 = v325 * 0.001;
        }
        else
        {
          v35 = 0.5;
        }
        if ( (int)v110 >= 2 )
        {
          updated = System_Int32__Parse(*(System_String_o **)(v111 + 40), 0LL);
          v326 = updated;
          if ( !(unsigned int)*(_QWORD *)(v111 + 24) )
            goto LABEL_1016;
        }
        else
        {
          v326 = 15;
          if ( !(_DWORD)v110 )
            goto LABEL_1016;
        }
        v327 = *p_that;
        updated = System_Int32__Parse(*(System_String_o **)(v111 + 32), 0LL);
        if ( !v327 )
          goto LABEL_1010;
        v328 = (UnityEngine_Object_o *)QuestAfterAction__GetMapGameObject(v327, 2, updated, this, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Equality(v328, 0LL, 0LL) )
          return;
        v451 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)v328, 0LL);
        x = v451.fields.x;
        y = v451.fields.y;
        z = v451.fields.z;
        if ( this->fields.IsMapModel )
        {
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_42AC2A0 )
          {
            sub_B52984(&TerminalSceneComponent_TypeInfo);
            byte_42AC2A0 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v333 = **(_QWORD **)(updated + 184);
          if ( !v333 )
            goto LABEL_1010;
          updated = *(_QWORD *)(v333 + 256);
          if ( !updated )
            goto LABEL_1010;
          v452.fields.x = x;
          v452.fields.y = y;
          v452.fields.z = z;
          v453 = ScrTerminalMap__ConvertLocalToScreenPosition((ScrTerminalMap_o *)updated, v452, 0LL);
          x = v453.fields.x;
          y = v453.fields.y;
          z = v453.fields.z;
        }
        if ( v12->fields.id != 307 || *(int *)(v111 + 24) < 4 )
        {
          if ( !*p_that )
            goto LABEL_1010;
          mMapCamera = (*p_that)->fields.mMapCamera;
          v335 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          v336 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__14__;
LABEL_988:
          v414 = v335;
          System_Action___ctor(v335, (Il2CppObject *)v5, *v336, 0LL);
          if ( !mMapCamera )
            goto LABEL_1010;
          v197 = mMapCamera;
          v198 = x;
          v199 = y;
          v200 = z;
LABEL_1000:
          v201 = v35;
          v202 = v326;
          v203 = v414;
          goto LABEL_1001;
        }
        if ( !*p_that )
          goto LABEL_1010;
        v410 = (*p_that)->fields.mMapCamera;
        *(_QWORD *)&v443.fields.value.fields.x = &v433;
        v459.fields.x = x;
        v459.fields.y = y;
        *(_QWORD *)&v443.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
        v459.fields.z = z;
        *(_QWORD *)&v433.fields.value.fields.x = 0LL;
        *(_QWORD *)&v433.fields.value.fields.z = 0LL;
        System_Nullable_Vector3____ctor(v443, v459, v329);
        if ( *(_DWORD *)(v111 + 24) <= 3u )
          goto LABEL_1016;
        v411 = System_Single__Parse(*(System_String_o **)(v111 + 56), 0LL);
        v437 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v437, v411, (const MethodInfo_21733B4 *)Method_System_Nullable_float___ctor__);
        v412 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        v413 = &Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__13__;
        goto LABEL_1005;
      case 303:
      case 308:
        v112 = v12->fields.param;
        updated = sub_B5299C(char___TypeInfo, 1LL);
        if ( !updated )
          goto LABEL_1010;
        v7 = (const MethodInfo *)updated;
        if ( !*(_DWORD *)(updated + 24) )
          goto LABEL_1016;
        *(_WORD *)(updated + 32) = 44;
        if ( !v112 )
          goto LABEL_1010;
        updated = (__int64)System_String__Split(v112, (System_Char_array *)updated, 0LL);
        if ( !updated )
          goto LABEL_1010;
        v113 = updated;
        if ( *(int *)(updated + 24) < 4 )
          goto LABEL_440;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        }
        if ( !byte_42AD474 )
        {
          sub_B52984(&TerminalPramsManager_TypeInfo);
          byte_42AD474 = 1;
        }
        updated = (__int64)TerminalPramsManager_TypeInfo;
        if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          updated = (__int64)TerminalPramsManager_TypeInfo;
        }
        if ( *(_BYTE *)(*(_QWORD *)(updated + 184) + 104LL) )
          goto LABEL_440;
        if ( *(_DWORD *)(v113 + 24) <= 2u )
          goto LABEL_1016;
        v114 = System_Single__Parse(*(System_String_o **)(v113 + 48), 0LL) * 0.001;
        v115 = v114 >= 0.0 ? v114 : 0.5;
        if ( *(_DWORD *)(v113 + 24) <= 3u )
          goto LABEL_1016;
        v116 = System_Int32__Parse(*(System_String_o **)(v113 + 56), 0LL);
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_42AC2A0 )
        {
          sub_B52984(&TerminalSceneComponent_TypeInfo);
          byte_42AC2A0 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v117 = **(_QWORD **)(updated + 184);
        if ( !v117 )
          goto LABEL_1010;
        if ( !*(_DWORD *)(v113 + 24) )
          goto LABEL_1016;
        v118 = *(ScrTerminalMap_o **)(v117 + 256);
        v119 = System_Single__Parse(*(System_String_o **)(v113 + 32), 0LL);
        if ( *(_DWORD *)(v113 + 24) <= 1u )
          goto LABEL_1016;
        v120 = v119;
        v121 = System_Single__Parse(*(System_String_o **)(v113 + 40), 0LL);
        if ( !v118 )
          goto LABEL_1010;
        *(UnityEngine_Vector3_o *)&v123 = ScrTerminalMap__LocalPosFromCoord(v118, v120, v121, 0.0, 0.0, 0LL);
        v126 = v123;
        v127 = v124;
        v128 = v125;
        if ( v12->fields.id != 308 || *(int *)(v113 + 24) < 5 )
        {
          if ( !*p_that )
            goto LABEL_1010;
          v129 = (*p_that)->fields.mMapCamera;
          v130 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(
            v130,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__16__,
            0LL);
          if ( !v129 )
            goto LABEL_1010;
LABEL_478:
          v197 = v129;
          v198 = v126;
          v199 = v127;
          v200 = v128;
          v201 = v115;
          v202 = v116;
          v203 = v130;
LABEL_1001:
          MapCamera__StartAutoMove(v197, *(UnityEngine_Vector3_o *)&v198, v201, v202, v203, 0LL);
          return;
        }
        if ( !*p_that )
          goto LABEL_1010;
        v423 = (*p_that)->fields.mMapCamera;
        *(_QWORD *)&v446.fields.value.fields.x = &v433;
        *(_QWORD *)&v446.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
        v433 = (System_Nullable_Vector3__o)0LL;
        System_Nullable_Vector3____ctor(v446, *(UnityEngine_Vector3_o *)&v123, v122);
        if ( *(_DWORD *)(v113 + 24) <= 4u )
          goto LABEL_1016;
        v424 = System_Single__Parse(*(System_String_o **)(v113 + 64), 0LL);
        v440 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v440, v424, (const MethodInfo_21733B4 *)Method_System_Nullable_float___ctor__);
        v425 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(
          v425,
          (Il2CppObject *)v5,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__15__,
          0LL);
        if ( !v423 )
          goto LABEL_1010;
LABEL_1014:
        v448 = v433;
        v442 = size;
        v419 = v423;
        v420 = v115;
        v421 = v116;
        v422 = v425;
LABEL_1015:
        MapCamera__StartAutoWork(v419, v420, v448, v442, v421, v422, 0LL);
        return;
      case 304:
        v172 = v12->fields.param;
        updated = sub_B5299C(char___TypeInfo, 1LL);
        if ( !updated )
          goto LABEL_1010;
        v7 = (const MethodInfo *)updated;
        if ( !*(_DWORD *)(updated + 24) )
          goto LABEL_1016;
        *(_WORD *)(updated + 32) = 44;
        if ( !v172 )
          goto LABEL_1010;
        updated = (__int64)System_String__Split(v172, (System_Char_array *)updated, 0LL);
        if ( !updated )
          goto LABEL_1010;
        v173 = *(_DWORD *)(updated + 24);
        v174 = updated;
        if ( v173 <= 1 )
          goto LABEL_440;
        v175 = System_Single__Parse(*(System_String_o **)(updated + 32), 0LL);
        if ( *(_DWORD *)(v174 + 24) <= 1u )
          goto LABEL_1016;
        v176 = v175;
        v177 = System_Single__Parse(*(System_String_o **)(v174 + 40), 0LL);
        if ( !*p_that )
          goto LABEL_1010;
        v178 = (*p_that)->fields.mMapCamera;
        v179 = v177 * 0.001;
        if ( v179 >= 0.0 )
          v180 = v179;
        else
          v180 = 0.5;
        if ( v173 < 3 )
        {
          v181 = 5;
        }
        else
        {
          if ( *(_DWORD *)(v174 + 24) <= 2u )
            goto LABEL_1016;
          v181 = System_Int32__Parse(*(System_String_o **)(v174 + 48), 0LL);
        }
        v399 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(
          v399,
          (Il2CppObject *)v5,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__17__,
          0LL);
        if ( v178 )
        {
          MapCamera__StartAutoZoom(v178, v176, v180, v181, v399, 0LL);
          return;
        }
        goto LABEL_1017;
      default:
        if ( id == 350 )
        {
          v134 = v12->fields.param;
          MyFsmP = sub_B5299C(char___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1017;
          v7 = (const MethodInfo *)MyFsmP;
          if ( *(_DWORD *)(MyFsmP + 24) )
          {
            *(_WORD *)(MyFsmP + 32) = 44;
            if ( v134 )
            {
              MyFsmP = (__int64)System_String__Split(v134, (System_Char_array *)MyFsmP, 0LL);
              if ( MyFsmP )
              {
                v135 = MyFsmP;
                if ( *(int *)(MyFsmP + 24) <= 0 )
                  goto LABEL_440;
                v136 = System_Int32__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
                if ( v136 < 1 )
                  goto LABEL_440;
                v137 = v136;
                v138 = 0.5;
                if ( *(int *)(v135 + 24) > 1 )
                {
                  v139 = System_Int32__Parse(*(System_String_o **)(v135 + 40), 0LL);
                  if ( *(int *)(v135 + 24) >= 3 )
                    v138 = System_Single__Parse(*(System_String_o **)(v135 + 48), 0LL) * 0.001;
                }
                else
                {
                  v139 = 15;
                }
                if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                }
                if ( !byte_42AC2A0 )
                {
                  sub_B52984(&TerminalSceneComponent_TypeInfo);
                  byte_42AC2A0 = 1;
                }
                MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
                if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
                  MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
                }
                v407 = **(_QWORD **)(MyFsmP + 184);
                if ( v407 )
                {
                  v408 = *(ScrTerminalMap_o **)(v407 + 256);
                  v409 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                  System_Action___ctor(
                    v409,
                    (Il2CppObject *)v5,
                    Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__18__,
                    0LL);
                  if ( v408 )
                  {
                    ScrTerminalMap__RequestMapMove_23703100(v408, v137, v138, v139, v409, 0LL);
                    return;
                  }
                }
              }
            }
            goto LABEL_1017;
          }
          goto LABEL_1019;
        }
        if ( (unsigned int)(id - 351) >= 2 )
          return;
        v182 = v12->fields.param;
        MyFsmP = sub_B5299C(char___TypeInfo, 1LL);
        if ( !MyFsmP )
          goto LABEL_1017;
        v7 = (const MethodInfo *)MyFsmP;
        if ( !*(_DWORD *)(MyFsmP + 24) )
          goto LABEL_1019;
        *(_WORD *)(MyFsmP + 32) = 44;
        if ( !v182 )
          goto LABEL_1017;
        MyFsmP = (__int64)System_String__Split(v182, (System_Char_array *)MyFsmP, 0LL);
        if ( !MyFsmP )
          goto LABEL_1017;
        v183 = MyFsmP;
        if ( *(int *)(MyFsmP + 24) <= 4 )
          goto LABEL_440;
        v184 = System_Single__Parse(*(System_String_o **)(MyFsmP + 32), 0LL);
        if ( *(_DWORD *)(v183 + 24) <= 1u )
          goto LABEL_1019;
        v185 = v184;
        v186 = System_Single__Parse(*(System_String_o **)(v183 + 40), 0LL);
        if ( *(_DWORD *)(v183 + 24) <= 2u )
          goto LABEL_1019;
        v187 = v186;
        v188 = System_Single__Parse(*(System_String_o **)(v183 + 48), 0LL);
        if ( *(_DWORD *)(v183 + 24) <= 3u )
          goto LABEL_1019;
        v189 = v188;
        v190 = System_Single__Parse(*(System_String_o **)(v183 + 56), 0LL);
        if ( *(_DWORD *)(v183 + 24) <= 4u )
          goto LABEL_1019;
        v191 = v190;
        v116 = System_Int32__Parse(*(System_String_o **)(v183 + 64), 0LL);
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_42AC2A0 )
        {
          sub_B52984(&TerminalSceneComponent_TypeInfo);
          byte_42AC2A0 = 1;
        }
        MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          MyFsmP = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v192 = **(_QWORD **)(MyFsmP + 184);
        if ( !v192 )
          goto LABEL_1017;
        MyFsmP = *(_QWORD *)(v192 + 256);
        if ( !MyFsmP )
          goto LABEL_1017;
        v449.fields.y = v187;
        v449.fields.z = v189;
        v115 = v191 * 0.001;
        v449.fields.x = v185;
        *(UnityEngine_Vector3_o *)&v194 = ScrTerminalMap__ConvertLocalToScreenPosition(
                                            (ScrTerminalMap_o *)MyFsmP,
                                            v449,
                                            0LL);
        v126 = v194;
        v127 = v195;
        v128 = v196;
        if ( v12->fields.id != 352 || *(int *)(v183 + 24) < 6 )
        {
          if ( !*p_that )
            goto LABEL_1017;
          v129 = (*p_that)->fields.mMapCamera;
          v130 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(
            v130,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__20__,
            0LL);
          if ( !v129 )
            goto LABEL_1017;
          goto LABEL_478;
        }
        if ( !*p_that )
          goto LABEL_1017;
        v423 = (*p_that)->fields.mMapCamera;
        *(_QWORD *)&v447.fields.value.fields.x = &v433;
        *(_QWORD *)&v447.fields.value.fields.z = Method_System_Nullable_Vector3___ctor__;
        v433 = (System_Nullable_Vector3__o)0LL;
        System_Nullable_Vector3____ctor(v447, *(UnityEngine_Vector3_o *)&v194, v193);
        if ( *(_DWORD *)(v183 + 24) <= 5u )
          goto LABEL_1019;
        v426 = System_Single__Parse(*(System_String_o **)(v183 + 72), 0LL);
        v441 = (System_Nullable_float__o)&size;
        size = 0LL;
        System_Nullable_float____ctor(v441, v426, (const MethodInfo_21733B4 *)Method_System_Nullable_float___ctor__);
        v425 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
        System_Action___ctor(
          v425,
          (Il2CppObject *)v5,
          Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__19__,
          0LL);
        if ( !v423 )
          goto LABEL_1017;
        goto LABEL_1014;
    }
  }
  if ( id <= 604 )
  {
    if ( id > 540 )
    {
      switch ( id )
      {
        case 600:
          v27 = (System_String_o *)StringLiteral_1/*""*/;
          v28 = System_String__Concat_44568316((System_String_o *)StringLiteral_10971/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v12->fields.param, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v29 = LocalizationManager__Get(v28, 0LL);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v31 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(
            v31,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__36__,
            0LL);
          if ( !Instance )
            goto LABEL_1017;
          CommonUI__OpenNotificationDialog(Instance, v27, v29, v31, 210, 0, 0, 0, 1, 0, 0, 0, 0LL, 0LL);
          return;
        case 601:
          v160 = (System_String_o *)StringLiteral_1/*""*/;
          MyFsmP = sub_B5299C(string___TypeInfo, 1LL);
          if ( !MyFsmP )
            goto LABEL_1017;
          v161 = (System_String_array *)MyFsmP;
          MyFsmP = StringLiteral_69/*"\r\n"*/;
          if ( StringLiteral_69/*"\r\n"*/ )
          {
            MyFsmP = sub_B52A44(StringLiteral_69/*"\r\n"*/, v161->obj.klass->_1.element_class);
            if ( !MyFsmP )
            {
              v431 = sub_B52A7C();
              sub_B52A28(v431, 0LL);
            }
            v162 = StringLiteral_69/*"\r\n"*/;
          }
          else
          {
            v162 = 0LL;
          }
          if ( !v161->max_length )
            goto LABEL_1019;
          v161->m_Items[0] = (System_String_o *)v162;
          sub_B52920(v161->m_Items);
          updated = (__int64)v12->fields.param;
          if ( !updated )
            goto LABEL_1018;
          updated = (__int64)System_String__Split_44630936((System_String_o *)updated, v161, 0, 0LL);
          if ( !updated )
            goto LABEL_1018;
          v356 = *(_DWORD *)(updated + 24);
          if ( v356 <= 0 )
            goto LABEL_440;
          v357 = *(System_String_o **)(updated + 32);
          if ( v356 == 1 )
          {
            v358 = *(System_String_o **)(updated + 32);
            v357 = v160;
          }
          else
          {
            v358 = *(System_String_o **)(updated + 40);
          }
          v362 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v363 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(
            v363,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__37__,
            0LL);
          if ( !v362 )
            goto LABEL_1018;
          CommonUI__OpenNotificationDialog(v362, v357, v358, v363, 210, 0, 0, 0, 1, 0, 1, 0, 0LL, 0LL);
          return;
        case 602:
          v152 = (System_String_o *)StringLiteral_1/*""*/;
          v153 = System_String__Concat_44568316((System_String_o *)StringLiteral_10971/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v12->fields.param, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v154 = LocalizationManager__Get(v153, 0LL);
          v155 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v156 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(
            v156,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__38__,
            0LL);
          if ( !v155 )
            goto LABEL_1018;
          CommonUI__OpenNotificationDialog_18159032(
            v155,
            v152,
            v154,
            v156,
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
          v157 = (System_String_o *)StringLiteral_1/*""*/;
          updated = sub_B5299C(string___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_1018;
          v158 = (System_String_array *)updated;
          updated = StringLiteral_69/*"\r\n"*/;
          if ( StringLiteral_69/*"\r\n"*/ )
          {
            updated = sub_B52A44(StringLiteral_69/*"\r\n"*/, v158->obj.klass->_1.element_class);
            if ( !updated )
            {
              v430 = sub_B52A7C();
              sub_B52A28(v430, 0LL);
            }
            v159 = StringLiteral_69/*"\r\n"*/;
          }
          else
          {
            v159 = 0LL;
          }
          if ( !v158->max_length )
            goto LABEL_1020;
          v158->m_Items[0] = (System_String_o *)v159;
          sub_B52920(v158->m_Items);
          updated = (__int64)v12->fields.param;
          if ( !updated )
            goto LABEL_1018;
          updated = (__int64)System_String__Split_44630936((System_String_o *)updated, v158, 0, 0LL);
          if ( !updated )
            goto LABEL_1018;
          v353 = *(_DWORD *)(updated + 24);
          if ( v353 <= 0 )
            goto LABEL_440;
          v354 = *(System_String_o **)(updated + 32);
          if ( v353 == 1 )
          {
            v355 = *(System_String_o **)(updated + 32);
            v354 = v157;
          }
          else
          {
            v355 = *(System_String_o **)(updated + 40);
          }
          v360 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v361 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(
            v361,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__39__,
            0LL);
          if ( !v360 )
            goto LABEL_1018;
          CommonUI__OpenNotificationDialog_18159032(
            v360,
            v354,
            v355,
            v361,
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
          v147 = (System_String_o *)StringLiteral_1/*""*/;
          v148 = System_String__Concat_44568316((System_String_o *)StringLiteral_10971/*"QUEST_AFTER_ACTION_MESSAGE_"*/, v12->fields.param, 0LL);
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v149 = LocalizationManager__Get(v148, 0LL);
          v150 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v151 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
          System_Action___ctor(
            v151,
            (Il2CppObject *)v5,
            Method_QuestAfterAction_StateMain___c__DisplayClass16_0__UpdateAnim_b__40__,
            0LL);
          if ( !v150 )
            goto LABEL_1018;
          CommonUI__OpenNotificationDialog_18159032(
            v150,
            v147,
            v149,
            v151,
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
            break;
          if ( id != 560 )
            return;
          v64 = v12->fields.param;
          updated = sub_B5299C(char___TypeInfo, 1LL);
          if ( !updated )
            goto LABEL_1018;
          v7 = (const MethodInfo *)updated;
          if ( !*(_DWORD *)(updated + 24) )
            goto LABEL_1020;
          *(_WORD *)(updated + 32) = 44;
          if ( !v64 )
            goto LABEL_1018;
          updated = (__int64)System_String__Split(v64, (System_Char_array *)updated, 0LL);
          if ( !updated )
            goto LABEL_1018;
          v65 = *(_QWORD *)(updated + 24);
          if ( !v65 )
            goto LABEL_121;
          if ( !(_DWORD)v65 )
            goto LABEL_1020;
          updated = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
          LODWORD(v65) = (int)updated > 0;
LABEL_121:
          if ( !*p_that )
            goto LABEL_1018;
          TitleInfoCtrlCallback_k__BackingField = (*p_that)->fields._TitleInfoCtrlCallback_k__BackingField;
          if ( !(_DWORD)v65 )
          {
            v305 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
            System_Action___ctor(v305, (Il2CppObject *)this, (intptr_t)this->klass->vtable._15_onEnd.methodPtr, 0LL);
            if ( TitleInfoCtrlCallback_k__BackingField )
            {
              QuestAfterAction_TitleInfoControlCallback__Start(TitleInfoCtrlCallback_k__BackingField, v305, 0LL);
              return;
            }
            goto LABEL_1018;
          }
          if ( !TitleInfoCtrlCallback_k__BackingField )
            goto LABEL_1018;
          QuestAfterAction_TitleInfoControlCallback__Start(
            (*p_that)->fields._TitleInfoCtrlCallback_k__BackingField,
            0LL,
            0LL);
          break;
      }
LABEL_943:
      ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
        this,
        this->klass->vtable._15_onEnd.methodPtr);
      goto LABEL_944;
    }
    if ( id != 530 )
    {
      if ( id != 540 )
        return;
      v45 = v12->fields.param;
      updated = sub_B5299C(char___TypeInfo, 1LL);
      if ( !updated )
        goto LABEL_1018;
      v7 = (const MethodInfo *)updated;
      if ( !*(_DWORD *)(updated + 24) )
        goto LABEL_1020;
      *(_WORD *)(updated + 32) = 44;
      if ( !v45 )
        goto LABEL_1018;
      updated = (__int64)System_String__Split(v45, (System_Char_array *)updated, 0LL);
      if ( !updated )
        goto LABEL_1018;
      v46 = updated;
      if ( !*(_DWORD *)(updated + 24) )
        goto LABEL_1020;
      v47 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
      if ( *(int *)(v46 + 24) < 2 )
      {
        v48 = -1;
      }
      else
      {
        v48 = System_Int32__Parse(*(System_String_o **)(v46 + 40), 0LL);
        if ( *(int *)(v46 + 24) >= 3 )
        {
          v49 = System_Int32__Parse(*(System_String_o **)(v46 + 48), 0LL);
LABEL_330:
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          }
          if ( !byte_42AC2AB )
          {
            sub_B52984(&TerminalPramsManager_TypeInfo);
            byte_42AC2AB = 1;
          }
          v140 = TerminalPramsManager_TypeInfo;
          if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v140 = TerminalPramsManager_TypeInfo;
          }
          v140->static_fields->_IsAutoResume_k__BackingField = 1;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          }
          if ( !byte_42AC2A0 )
          {
            sub_B52984(&TerminalSceneComponent_TypeInfo);
            byte_42AC2A0 = 1;
          }
          updated = (__int64)TerminalSceneComponent_TypeInfo;
          if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            updated = (__int64)TerminalSceneComponent_TypeInfo;
          }
          v141 = **(_QWORD **)(updated + 184);
          if ( v141 )
          {
            updated = *(_QWORD *)(v141 + 256);
            if ( updated )
            {
              if ( !ScrTerminalMap__RequestMapChange((ScrTerminalMap_o *)updated, v47, v48, v49, 0LL) )
              {
                if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                }
                if ( !byte_42AC2AB )
                {
                  sub_B52984(&TerminalPramsManager_TypeInfo);
                  byte_42AC2AB = 1;
                }
                v142 = TerminalPramsManager_TypeInfo;
                if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                  && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                  v142 = TerminalPramsManager_TypeInfo;
                }
                v142->static_fields->_IsAutoResume_k__BackingField = 0;
                goto LABEL_943;
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
          goto LABEL_1018;
        }
      }
      v49 = -1;
      goto LABEL_330;
    }
    v67 = System_Int32__Parse(v12->fields.param, 0LL);
    MyFsmP = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( MyFsmP )
    {
      MyFsmP = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                          (DataManager_o *)MyFsmP,
                          (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_QuestMaster___);
      if ( MyFsmP )
      {
        v68 = (QuestEntity_o *)DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                                 (DataMasterBase_WarMaster__WarEntity__int__o *)MyFsmP,
                                 v67,
                                 (const MethodInfo_23E22D8 *)Method_DataMasterBase_QuestMaster__QuestEntity__int__GetEntity__);
        if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
        }
        MyFsmP = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_QuestTree__get_Instance__);
        if ( MyFsmP )
        {
          MyFsmP = (__int64)QuestTree__GetQuestInfo((QuestTree_o *)MyFsmP, v67, 0LL);
          if ( MyFsmP )
          {
            v70 = MyFsmP;
            if ( *(_DWORD *)(MyFsmP + 32) != 1 )
            {
              QuestAfterAction_StateMain__ForceEndAnim(this, 1, v69);
              return;
            }
            if ( v68 )
            {
              if ( !QuestEntity__HasFlag(v68, 2LL, 0LL) )
                return;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
              }
              if ( !byte_42AC2A6 )
              {
                sub_B52984(&TerminalPramsManager_TypeInfo);
                byte_42AC2A6 = 1;
              }
              v71 = TerminalPramsManager_TypeInfo;
              if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
                v71 = TerminalPramsManager_TypeInfo;
              }
              v71->static_fields->_QuestId_k__BackingField = v67;
              v72 = *(_DWORD *)(v70 + 44);
              if ( !byte_42AC2A7 )
              {
                sub_B52984(&TerminalPramsManager_TypeInfo);
                v71 = TerminalPramsManager_TypeInfo;
                byte_42AC2A7 = 1;
              }
              if ( (BYTE3(v71->vtable._0_Equals.methodPtr) & 4) != 0 && !v71->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v71);
                v71 = TerminalPramsManager_TypeInfo;
              }
              v71->static_fields->_PhaseCnt_k__BackingField = v72;
              if ( (BYTE3(SingletonTemplate_clsQuestCheck__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !SingletonTemplate_clsQuestCheck__TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(SingletonTemplate_clsQuestCheck__TypeInfo);
              }
              MyFsmP = (__int64)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_clsQuestCheck__get_Instance__);
              v73 = (clsQuestCheck_o *)MyFsmP;
              v74 = QuestAfterAction_StateMain___c_TypeInfo;
              if ( (BYTE3(QuestAfterAction_StateMain___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !QuestAfterAction_StateMain___c_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(QuestAfterAction_StateMain___c_TypeInfo);
                v74 = QuestAfterAction_StateMain___c_TypeInfo;
              }
              v75 = v74->static_fields;
              _9__16_33 = v75->__9__16_33;
              if ( !_9__16_33 )
              {
                if ( (BYTE3(v74->vtable._0_Equals.methodPtr) & 4) != 0 && !v74->_2.cctor_finished )
                {
                  j_il2cpp_runtime_class_init_0(v74);
                  v75 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
                }
                v77 = (Il2CppObject *)v75->__9;
                _9__16_33 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
                System_Action___ctor(_9__16_33, v77, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_33__, 0LL);
                v78 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
                v78->__9__16_33 = _9__16_33;
                sub_B52920(&v78->__9__16_33);
              }
              if ( v73 )
              {
                clsQuestCheck__PlayQuestStartAction(v73, _9__16_33, 0LL);
                return;
              }
            }
          }
        }
      }
    }
    goto LABEL_1017;
  }
  if ( id <= 801 )
  {
    if ( id != 700 )
    {
      if ( id != 800 )
      {
        if ( id != 801 )
          return;
        v36 = v12->fields.param;
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSe(v36, 0LL);
        goto LABEL_943;
      }
      v86 = *p_that;
      if ( !*p_that )
        goto LABEL_1018;
      updated = (__int64)v86->fields.svtVoices;
      if ( !updated )
        goto LABEL_1018;
      if ( System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval___TryGetValue(
             (System_Collections_Generic_Dictionary_int__WarBoardEvalValueSquare_CalcEval__o *)updated,
             v86->fields.commandIdx,
             &value,
             (const MethodInfo_2F29A2C *)Method_System_Collections_Generic_Dictionary_int__QuestAfterAction_VoiceInfo__TryGetValue__) )
      {
        updated = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AutomatedAction__get_Instance__);
        if ( !updated )
          goto LABEL_1018;
        AutomatedAction__TerminateMissionAction((AutomatedAction_o *)updated, 0LL);
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        }
        if ( !byte_42AC2A0 )
        {
          sub_B52984(&TerminalSceneComponent_TypeInfo);
          byte_42AC2A0 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v87 = **(_QWORD **)(updated + 184);
        if ( !v87 )
          goto LABEL_1018;
        if ( !*(_QWORD *)(v87 + 448) )
          goto LABEL_204;
        if ( (*(_BYTE *)(updated + 307) & 4) != 0 && !*(_DWORD *)(updated + 224) )
          j_il2cpp_runtime_class_init_0(updated);
        if ( !byte_42AC2A0 )
        {
          sub_B52984(&TerminalSceneComponent_TypeInfo);
          byte_42AC2A0 = 1;
        }
        updated = (__int64)TerminalSceneComponent_TypeInfo;
        if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
          updated = (__int64)TerminalSceneComponent_TypeInfo;
        }
        v88 = **(_QWORD **)(updated + 184);
        if ( !v88 )
          goto LABEL_1018;
        v89 = *(_QWORD *)(v88 + 448);
        if ( !v89 )
          goto LABEL_1018;
        updated = *(unsigned int *)(v89 + 48);
        if ( !(_DWORD)updated )
        {
LABEL_204:
          if ( !value )
            goto LABEL_1018;
          updated = (unsigned int)value->fields.viewpoint;
        }
        if ( (int)updated < 1 )
        {
          if ( !value )
            goto LABEL_1018;
          v359 = *(System_String_o **)&value->fields.eval;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playVoice(v359, 0LL);
        }
        else
        {
          updated = (__int64)ServantVoiceEntity__getVoiceAssetName_30972712(updated, 0LL);
          if ( !value )
            goto LABEL_1018;
          v90 = (System_String_o *)updated;
          v91 = *(System_String_o **)&value->fields.eval;
          v92 = SeManager_TypeInfo;
          if ( (BYTE3(SeManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SeManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
            v92 = SeManager_TypeInfo;
          }
          DEFAULT_VOLUME = v92->static_fields->DEFAULT_VOLUME;
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playVoice_23788136(v90, v91, DEFAULT_VOLUME, 0LL, 0LL);
        }
      }
LABEL_440:
      ((void (__fastcall *)(QuestAfterAction_StateMain_o *, Il2CppMethodPointer))this->klass->vtable._14_EndAnim.method)(
        this,
        this->klass->vtable._15_onEnd.methodPtr);
      return;
    }
    v105 = v12->fields.param;
    updated = sub_B5299C(char___TypeInfo, 1LL);
    if ( !updated )
      goto LABEL_1018;
    v7 = (const MethodInfo *)updated;
    if ( *(_DWORD *)(updated + 24) )
    {
      *(_WORD *)(updated + 32) = 44;
      if ( !v105 )
        goto LABEL_1018;
      updated = (__int64)System_String__Split(v105, (System_Char_array *)updated, 0LL);
      if ( !updated )
        goto LABEL_1018;
      v106 = updated;
      if ( *(_DWORD *)(updated + 24) )
      {
        v107 = System_Int32__Parse(*(System_String_o **)(updated + 32), 0LL);
        if ( *(int *)(v106 + 24) >= 2 )
          v108 = System_Int32__Parse(*(System_String_o **)(v106 + 40), 0LL) + 1;
        else
          v108 = 0;
        v171 = (SceneJumpInfo_o *)sub_B52A54(SceneJumpInfo_TypeInfo);
        SceneJumpInfo___ctor_17466296(v171, (System_String_o *)StringLiteral_1/*""*/, v107, v108, 0LL);
        updated = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !updated )
          goto LABEL_1018;
        AvalonSceneManager__transitionScene((AvalonSceneManager_o *)updated, 72, 1, (Il2CppObject *)v171, 0LL);
        goto LABEL_440;
      }
    }
LABEL_1020:
    v429 = sub_B52A88(updated);
    sub_B52A28(v429, 0LL);
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
        goto LABEL_943;
      }
      goto LABEL_1018;
    case 851:
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      }
      if ( !byte_42AC2A0 )
      {
        sub_B52984(&TerminalSceneComponent_TypeInfo);
        byte_42AC2A0 = 1;
      }
      v79 = TerminalSceneComponent_TypeInfo;
      if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        v79 = TerminalSceneComponent_TypeInfo;
      }
      v80 = v79->static_fields->mInstance;
      updated = (__int64)QuestAfterAction_Command__GetBgmName(v12, v7);
      if ( v80 )
      {
        TerminalSceneComponent__playBgm(v80, (System_String_o *)updated, 0LL);
        if ( *p_that )
        {
          (*p_that)->fields.isRequestedStopBgm = 0;
          goto LABEL_943;
        }
      }
LABEL_1018:
      sub_B52A5C(updated, v7);
    case 900:
      v17 = (float)System_Int32__Parse(v12->fields.param, 0LL) / 1000.0;
      if ( v17 > 0.0 )
      {
        this->fields.waitTime = v17;
        this->fields.waitStartTime = UnityEngine_Time__get_realtimeSinceStartup(0LL);
        return;
      }
      goto LABEL_943;
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

  if ( (byte_42AD46B & 1) == 0 )
  {
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AD46B = 1;
  }
  this->fields.that = that;
  sub_B52920(&this->fields);
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
  if ( !byte_42AC2A0 )
  {
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AC2A0 = 1;
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
    sub_B52A5C(screenCollider, v6);
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
    sub_B52A5C(this, method);
  return that->fields.commandBuf;
}


int32_t __fastcall QuestAfterAction_StateMain__get_CommandIndex(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  struct QuestAfterAction_o *that; // x8

  that = this->fields.that;
  if ( !that )
    sub_B52A5C(this, method);
  return that->fields.commandIdx;
}


UnityEngine_GameObject_o *__fastcall QuestAfterAction_StateMain__get_SubGimmickRoot(
        QuestAfterAction_StateMain_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *v2; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalMap_o *mTerminalMap; // x8

  if ( (byte_42AD46A & 1) == 0 )
  {
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AD46A = 1;
  }
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42AC2A0 )
  {
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AC2A0 = 1;
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
    sub_B52A5C(v2, method);
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

  if ( (byte_42AD46D & 1) == 0 )
  {
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    sub_B52984(&StringLiteral_16399/*"afterActionBk"*/);
    byte_42AD46D = 1;
  }
  if ( deleteKey )
    UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16399/*"afterActionBk"*/, 0LL);
  if ( (BYTE3(TerminalSceneComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  }
  if ( !byte_42AC2A0 )
  {
    sub_B52984(&TerminalSceneComponent_TypeInfo);
    byte_42AC2A0 = 1;
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
    sub_B52A5C(mInstance, deleteKey);
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
    sub_B52A5C(this, value);
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
  struct QuestAfterAction_StateMain___c_StaticFields *static_fields; // x0

  if ( (byte_42AD7E3 & 1) == 0 )
  {
    sub_B52984(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_42AD7E3 = 1;
  }
  v1 = (Il2CppObject *)sub_B52A54(QuestAfterAction_StateMain___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
  static_fields->__9 = (struct QuestAfterAction_StateMain___c_o *)v1;
  sub_B52920(static_fields);
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

  if ( (byte_42AD7E4 & 1) == 0 )
  {
    sub_B52984(&ScriptManager_CallbackFunc_TypeInfo);
    sub_B52984(&ScriptManager_TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_34__);
    sub_B52984(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_42AD7E4 = 1;
  }
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2A2 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2A2 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  WarId_k__BackingField = v2->static_fields->_WarId_k__BackingField;
  if ( !byte_42AC2B5 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_42AC2B5 = 1;
  }
  if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v2);
    v2 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v2->static_fields->_QuestId_k__BackingField;
  if ( !byte_42AC2B6 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
    byte_42AC2B6 = 1;
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
    _9__16_34 = (ScriptManager_CallbackFunc_o *)sub_B52A54(ScriptManager_CallbackFunc_TypeInfo);
    ScriptManager_CallbackFunc___ctor(_9__16_34, v10, Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_34__, 0LL);
    v11 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    v11->__9__16_34 = _9__16_34;
    sub_B52920(&v11->__9__16_34);
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
  BattleScenarioRequest_o *Request_WarBoardWallAttackRequest; // x19
  TerminalPramsManager_c *v9; // x0
  int32_t QuestId_k__BackingField; // w21
  int32_t PhaseCnt_k__BackingField; // w20
  System_Int32_array *SelectRouteArray; // x0
  __int64 v13; // x1

  if ( (byte_42AD7E5 & 1) == 0 )
  {
    sub_B52984(&Method_NetworkManager_getRequest_BattleScenarioRequest___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B52984(&ScriptManager_TypeInfo);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_35__);
    sub_B52984(&QuestAfterAction_StateMain___c_TypeInfo);
    byte_42AD7E5 = 1;
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
    _9__16_35 = (NetworkManager_ResultCallbackFunc_o *)sub_B52A54(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      _9__16_35,
      v6,
      Method_QuestAfterAction_StateMain___c__UpdateAnim_b__16_35__,
      0LL);
    v7 = QuestAfterAction_StateMain___c_TypeInfo->static_fields;
    v7->__9__16_35 = _9__16_35;
    sub_B52920(&v7->__9__16_35);
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (BattleScenarioRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                   _9__16_35,
                                                                   (const MethodInfo_1F705CC *)Method_NetworkManager_getRequest_BattleScenarioRequest___);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42AC2B5 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2B5 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  QuestId_k__BackingField = v9->static_fields->_QuestId_k__BackingField;
  if ( !byte_42AC2B6 )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
    byte_42AC2B6 = 1;
  }
  if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = TerminalPramsManager_TypeInfo;
  }
  PhaseCnt_k__BackingField = v9->static_fields->_PhaseCnt_k__BackingField;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  SelectRouteArray = ScriptManager__GetSelectRouteArray(0LL);
  if ( !Request_WarBoardWallAttackRequest )
    sub_B52A5C(SelectRouteArray, v13);
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

  if ( (byte_42AD7E6 & 1) == 0 )
  {
    sub_B52984(&Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&ScriptManager_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_B52984(&TerminalPramsManager_TypeInfo);
    sub_B52984(&StringLiteral_16399/*"afterActionBk"*/);
    sub_B52984(&StringLiteral_15739/*"["*/);
    sub_B52984(&StringLiteral_15976/*"]"*/);
    byte_42AD7E6 = 1;
  }
  v4 = (Il2CppObject *)System_String__Concat_44570600(
                         (System_String_o *)StringLiteral_15739/*"["*/,
                         jsonstr,
                         (System_String_o *)StringLiteral_15976/*"]"*/,
                         0LL);
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v5 = (BattleResultComponent_resultData_array *)JsonManager__DeserializeArray_UserPresentBoxWindow_resData_(
                                                   v4,
                                                   (const MethodInfo_1F690B0 *)Method_JsonManager_DeserializeArray_BattleResultComponent_resultData___);
  UnityEngine_PlayerPrefs__DeleteKey((System_String_o *)StringLiteral_16399/*"afterActionBk"*/, 0LL);
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
  if ( !byte_42AC2AB )
  {
    sub_B52984(&TerminalPramsManager_TypeInfo);
    byte_42AC2AB = 1;
  }
  v6 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v6 = TerminalPramsManager_TypeInfo;
  }
  v6->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B52A5C(0LL, v8);
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
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(_4__this, method);
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
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(0LL, method);
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
    sub_B52A5C(this, method);
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
    sub_B52A5C(this, method);
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
    sub_B52A5C(this, method);
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
    sub_B52A5C(this, method);
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
    sub_B52A5C(this, method);
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
    sub_B52A5C(this, method);
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
  Il2CppObject *v3; // x19
  UnityEngine_Component_o *mapGimmick; // x0
  __int64 v5; // x1
  UnityEngine_Component_o *v6; // x22
  Il2CppObject *v7; // x21
  struct System_String_array *paramsStr; // x8
  struct System_String_array *v9; // x8
  Il2CppClass *klass; // x20
  float v11; // s0
  UITweener_o *v12; // x20
  EventDelegate_Callback_o *v13; // x21
  __int64 v14; // x0
  unsigned __int128 v15; // [xsp+0h] [xbp-30h] BYREF

  if ( (byte_42AD7E7 & 1) == 0 )
  {
    sub_B52984(&EventDelegate_Callback_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_AddComponent_TweenColor___);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
    sub_B52984(&Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__28__);
    sub_B52984(&QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo);
    byte_42AD7E7 = 1;
  }
  v15 = 0uLL;
  v3 = (Il2CppObject *)sub_B52A54(QuestAfterAction_StateMain___c__DisplayClass16_14_TypeInfo);
  System_Object___ctor(v3, 0LL);
  if ( !v3 )
    goto LABEL_18;
  v3[1].monitor = this;
  sub_B52920(&v3[1].monitor);
  mapGimmick = (UnityEngine_Component_o *)this->fields.mapGimmick;
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0LL);
  if ( !mapGimmick )
    goto LABEL_18;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponentInChildren_Dropdown_DropdownItem_(
                                            (UnityEngine_GameObject_o *)mapGimmick,
                                            (const MethodInfo_1B7B264 *)Method_UnityEngine_GameObject_GetComponentInChildren_UISprite___);
  if ( !mapGimmick )
    goto LABEL_18;
  v6 = mapGimmick;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mapGimmick, 0LL);
  if ( !mapGimmick )
    goto LABEL_18;
  v3[1].klass = (Il2CppClass *)UnityEngine_GameObject__AddComponent_UnitySynchronizationContext_SynchronizationContextBehavoir_(
                                 (UnityEngine_GameObject_o *)mapGimmick,
                                 (const MethodInfo_1B7B0BC *)Method_UnityEngine_GameObject_AddComponent_TweenColor___);
  v7 = v3 + 1;
  sub_B52920(&v3[1]);
  paramsStr = this->fields.paramsStr;
  if ( !paramsStr )
    goto LABEL_18;
  if ( paramsStr->max_length <= 1 )
    goto LABEL_19;
  mapGimmick = (UnityEngine_Component_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                            paramsStr->m_Items[1],
                                            (UnityEngine_Color_o *)&v15,
                                            0LL);
  if ( !v7->klass
    || (*(_OWORD *)&v7->klass->_1.klass = *(_OWORD *)(&v6[5].fields + 1), !v7->klass)
    || (*(_OWORD *)&v7->klass->_1.events = v15, (v9 = this->fields.paramsStr) == 0LL) )
  {
LABEL_18:
    sub_B52A5C(mapGimmick, v5);
  }
  if ( v9->max_length <= 2 )
  {
LABEL_19:
    v14 = sub_B52A88(mapGimmick);
    sub_B52A28(v14, 0LL);
  }
  klass = v7->klass;
  v11 = System_Single__Parse(v9->m_Items[2], 0LL);
  if ( !klass )
    goto LABEL_18;
  *(float *)&klass->_1.this_arg.data = v11;
  mapGimmick = (UnityEngine_Component_o *)v7->klass;
  if ( !v7->klass )
    goto LABEL_18;
  UITweener__PlayForward((UITweener_o *)mapGimmick, 0LL);
  v12 = (UITweener_o *)v3[1].klass;
  v13 = (EventDelegate_Callback_o *)sub_B52A54(EventDelegate_Callback_TypeInfo);
  EventDelegate_Callback___ctor(
    v13,
    v3,
    Method_QuestAfterAction_StateMain___c__DisplayClass16_14__UpdateAnim_b__28__,
    0LL);
  if ( !v12 )
    goto LABEL_18;
  UITweener__SetOnFinished(v12, v13, 0LL);
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

  if ( (byte_42AD7E8 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AD7E8 = 1;
  }
  tween = (UnityEngine_Object_o *)this->fields.tween;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35616956(tween, 0LL);
  CS___8__locals14 = this->fields.CS___8__locals14;
  if ( !CS___8__locals14
    || (CS___8__locals13 = CS___8__locals14->fields.CS___8__locals13) == 0LL
    || (_4__this = CS___8__locals13->fields.__4__this) == 0LL )
  {
    sub_B52A5C(_4__this, v5);
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
    sub_B52A5C(this, method);
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
    sub_B52A5C(this, method);
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
    sub_B52A5C(this, method);
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
    sub_B52A5C(this, method);
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
    sub_B52A5C(this, method);
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
    sub_B52A5C(this, method);
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
    sub_B52A5C(this, method);
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
    sub_B52A5C(this, method);
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
    sub_B52A5C(this, method);
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
    sub_B52A5C(this, method);
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
  sub_B52920(p_end, 0LL, v2, v3, v4, v5, v6, v7);
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
  sub_B52920(
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
  sub_B52920(
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
  sub_B52920(v6, (System_Int32_array **)vName, v7, v8, v9, v10, v11, v12);
}


void __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__73___ctor(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__73_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__73__MoveNext(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__73_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x3
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__73_o *v3; // x19
  int32_t _1__state; // w8
  QuestAfterAction_o *_4__this; // x20
  struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *commandEnumerable; // x21
  System_Collections_Generic_IEnumerable_QuestAfterAction_Command__c *klass; // x8
  unsigned __int64 v8; // x10
  int *p_offset; // x11
  __int64 p_method; // x0
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o **p__7__wrap1; // x21
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *v12; // x22
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *v13; // x8
  unsigned __int64 v14; // x10
  int *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  const MethodInfo *v18; // x1
  __int64 v19; // x3
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *v20; // x22
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *v21; // x8
  unsigned __int64 v22; // x10
  int *v23; // x11
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x1
  QuestAfterAction_Command_o *v27; // x22
  int32_t CommandType; // w23
  int32_t CommandTargetId; // w2
  bool result; // w0

  v3 = this;
  if ( (byte_42AD463 & 1) == 0 )
  {
    sub_B52984(&System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo);
    sub_B52984(&System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__73_o *)sub_B52984(&System_Collections_IEnumerator_TypeInfo);
    byte_42AD463 = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    p__7__wrap1 = &v3->fields.__7__wrap1;
  }
  else
  {
    if ( _1__state )
      return 0;
    commandEnumerable = v3->fields.commandEnumerable;
    v3->fields.__1__state = -1;
    if ( !commandEnumerable )
      sub_B52A5C(this, method);
    klass = commandEnumerable->klass;
    if ( *(_WORD *)&commandEnumerable->klass->_2.bitflags1 )
    {
      v8 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_QuestAfterAction_Command__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo )
      {
        ++v8;
        p_offset += 4;
        if ( v8 >= *(unsigned __int16 *)&commandEnumerable->klass->_2.bitflags1 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_AEB880(
                   commandEnumerable,
                   System_Collections_Generic_IEnumerable_QuestAfterAction_Command__TypeInfo,
                   0LL,
                   v2);
    }
    v3->fields.__7__wrap1 = (struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)(*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerable_QuestAfterAction_Command__o *, _QWORD))p_method)(commandEnumerable, *(_QWORD *)(p_method + 8));
    p__7__wrap1 = &v3->fields.__7__wrap1;
    sub_B52920(&v3->fields.__7__wrap1);
  }
  v3->fields.__1__state = -3;
  while ( 1 )
  {
    v12 = *p__7__wrap1;
    if ( !*p__7__wrap1 )
      sub_B52A5C(this, method);
    v13 = v12->klass;
    if ( *(_WORD *)&v12->klass->_2.bitflags1 )
    {
      v14 = 0LL;
      v15 = &v13->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        ++v14;
        v15 += 4;
        if ( v14 >= *(unsigned __int16 *)&v12->klass->_2.bitflags1 )
          goto LABEL_20;
      }
      v16 = (__int64)&v13->vtable[*v15].method;
    }
    else
    {
LABEL_20:
      v16 = sub_AEB880(*p__7__wrap1, System_Collections_IEnumerator_TypeInfo, 0LL, v2);
    }
    v17 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v16)(
            v12,
            *(_QWORD *)(v16 + 8));
    if ( (v17 & 1) == 0 )
      break;
    v20 = *p__7__wrap1;
    if ( !*p__7__wrap1 )
      sub_B52A5C(v17, v18);
    v21 = v20->klass;
    if ( *(_WORD *)&v20->klass->_2.bitflags1 )
    {
      v22 = 0LL;
      v23 = &v21->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c **)v23 - 1) != System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo )
      {
        ++v22;
        v23 += 4;
        if ( v22 >= *(unsigned __int16 *)&v20->klass->_2.bitflags1 )
          goto LABEL_28;
      }
      v24 = (__int64)&v21->vtable[*v23].method;
    }
    else
    {
LABEL_28:
      v24 = sub_AEB880(
              *p__7__wrap1,
              System_Collections_Generic_IEnumerator_QuestAfterAction_Command__TypeInfo,
              0LL,
              v19);
    }
    v25 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))v24)(
            v20,
            *(_QWORD *)(v24 + 8));
    v27 = (QuestAfterAction_Command_o *)v25;
    if ( !v25 )
      sub_B52A5C(0LL, v26);
    if ( !_4__this )
      sub_B52A5C(v25, v26);
    CommandType = QuestAfterAction__GetCommandType(_4__this, *(_DWORD *)(v25 + 16), 0LL);
    CommandTargetId = QuestAfterAction__ExtractCommandTargetId(v27, 0LL);
    this = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__73_o *)QuestAfterAction__IsExistCommand(
                                                                                    _4__this,
                                                                                    CommandType,
                                                                                    CommandTargetId,
                                                                                    0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v3->fields.__2__current = v27;
      sub_B52920(&v3->fields.__2__current);
      result = 1;
      v3->fields.__1__state = 1;
      return result;
    }
  }
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__73____m__Finally1(v3, v18);
  *p__7__wrap1 = 0LL;
  sub_B52920(p__7__wrap1);
  return 0;
}


System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__73__System_Collections_Generic_IEnumerable_QuestAfterAction_Command__GetEnumerator(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__73_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__73_o *v4; // x20
  __int64 CurrentManagedThreadId; // x0
  __int64 v6; // x1

  if ( (byte_42AD465 & 1) == 0 )
  {
    sub_B52984(&QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__73_TypeInfo);
    byte_42AD465 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v4 = this;
  }
  else
  {
    v4 = (QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__73_o *)sub_B52A54(QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__73_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    v4->fields.__1__state = 0;
    CurrentManagedThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    v4->fields.__l__initialThreadId = CurrentManagedThreadId;
    if ( !v4 )
      sub_B52A5C(CurrentManagedThreadId, v6);
    v4->fields.__4__this = this->fields.__4__this;
    sub_B52920(&v4->fields.__4__this);
  }
  v4->fields.commandEnumerable = this->fields.__3__commandEnumerable;
  sub_B52920(&v4->fields.commandEnumerable);
  return (System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *)v4;
}


QuestAfterAction_Command_o *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__73__System_Collections_Generic_IEnumerator_QuestAfterAction_Command__get_Current(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__73_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__73__System_Collections_IEnumerator_Reset(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__73_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__73_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
}


Il2CppObject *__fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__73__System_Collections_IEnumerator_get_Current(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__73_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__73__System_IDisposable_Dispose(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__73_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__73____m__Finally1(this, method);
}


void __fastcall QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__73____m__Finally1(
        QuestAfterAction__FilterCommandsMainActionConflictsResolved_d__73_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x3
  struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *_7__wrap1; // x19
  System_Collections_Generic_IEnumerator_QuestAfterAction_Command__c *klass; // x8
  unsigned __int64 v6; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0

  if ( (byte_42AD464 & 1) == 0 )
  {
    sub_B52984(&System_IDisposable_TypeInfo);
    byte_42AD464 = 1;
  }
  _7__wrap1 = this->fields.__7__wrap1;
  this->fields.__1__state = -1;
  if ( _7__wrap1 )
  {
    klass = _7__wrap1->klass;
    if ( *(_WORD *)&_7__wrap1->klass->_2.bitflags1 )
    {
      v6 = 0LL;
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        ++v6;
        p_offset += 4;
        if ( v6 >= *(unsigned __int16 *)&_7__wrap1->klass->_2.bitflags1 )
          goto LABEL_8;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_8:
      p_method = sub_AEB880(_7__wrap1, System_IDisposable_TypeInfo, 0LL, v2);
    }
    (*(void (__fastcall **)(struct System_Collections_Generic_IEnumerator_QuestAfterAction_Command__o *, _QWORD))p_method)(
      _7__wrap1,
      *(_QWORD *)(p_method + 8));
  }
}


void __fastcall QuestAfterAction__WaitWhileMainStateFinished_d__77___ctor(
        QuestAfterAction__WaitWhileMainStateFinished_d__77_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall QuestAfterAction__WaitWhileMainStateFinished_d__77__MoveNext(
        QuestAfterAction__WaitWhileMainStateFinished_d__77_o *this,
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
      sub_B52A5C(this, method);
    if ( _4__this->fields.isKeepingMainStateButFinished )
    {
      this->fields.__2__current = 0LL;
      p__2__current = &this->fields.__2__current;
      sub_B52920(&this->fields.__2__current);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    }
    ActionExtensions__Call(this->fields.action, 0LL);
  }
  return 0;
}


Il2CppObject *__fastcall QuestAfterAction__WaitWhileMainStateFinished_d__77__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        QuestAfterAction__WaitWhileMainStateFinished_d__77_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn QuestAfterAction__WaitWhileMainStateFinished_d__77__System_Collections_IEnumerator_Reset(
        QuestAfterAction__WaitWhileMainStateFinished_d__77_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B52988(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B52A54(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B52988(&Method_QuestAfterAction__WaitWhileMainStateFinished_d__77_System_Collections_IEnumerator_Reset__);
  sub_B52A28(v3, v4);
}


Il2CppObject *__fastcall QuestAfterAction__WaitWhileMainStateFinished_d__77__System_Collections_IEnumerator_get_Current(
        QuestAfterAction__WaitWhileMainStateFinished_d__77_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall QuestAfterAction__WaitWhileMainStateFinished_d__77__System_IDisposable_Dispose(
        QuestAfterAction__WaitWhileMainStateFinished_d__77_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall QuestAfterAction___c__DisplayClass66_0___ctor(
        QuestAfterAction___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass66_0___LoadVoice_b__0(
        QuestAfterAction___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_XWeaponTrail_Element__o *svtVInfos; // x0

  if ( (byte_42AD460 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__);
    byte_42AD460 = 1;
  }
  svtVInfos = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.svtVInfos;
  if ( !svtVInfos
    || (System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          svtVInfos,
          0,
          (const MethodInfo_2FF32F4 *)Method_System_Collections_Generic_List_QuestAfterAction_VoiceInfo__RemoveAt__),
        (svtVInfos = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.__4__this) == 0LL) )
  {
    sub_B52A5C(svtVInfos, method);
  }
  QuestAfterAction__LoadVoice_24764820(
    (QuestAfterAction_o *)svtVInfos,
    this->fields.svtVInfos,
    this->fields.endAct,
    0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass70_0___ctor(
        QuestAfterAction___c__DisplayClass70_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass70_0___Play_b__0(
        QuestAfterAction___c__DisplayClass70_0_o *this,
        const MethodInfo *method)
{
  MissionNotifyManager_o *v3; // x0
  __int64 v4; // x1

  if ( (byte_42AD461 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    byte_42AD461 = 1;
  }
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  v3 = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !v3 )
    sub_B52A5C(0LL, v4);
  MissionNotifyManager__EndPause(v3, 0LL);
  ActionExtensions__Call(this->fields.endAct, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass71_0___ctor(
        QuestAfterAction___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass71_0___PlaySpecifiedAction_b__0(
        QuestAfterAction___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  MissionNotifyManager_o *_4__this; // x0

  if ( (byte_42AD462 & 1) == 0 )
  {
    sub_B52984(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_B52984(&SingletonTemplate_MissionNotifyManager__TypeInfo);
    byte_42AD462 = 1;
  }
  _4__this = (MissionNotifyManager_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  _4__this[2].klass = 0LL;
  sub_B52920(&_4__this[2]);
  _4__this = (MissionNotifyManager_o *)this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  *(_QWORD *)&_4__this->fields.dispInfosIndex = 0LL;
  sub_B52920(&_4__this->fields.dispInfosIndex);
  if ( (BYTE3(SingletonTemplate_MissionNotifyManager__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SingletonTemplate_MissionNotifyManager__TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SingletonTemplate_MissionNotifyManager__TypeInfo);
  }
  _4__this = (MissionNotifyManager_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !_4__this
    || (MissionNotifyManager__EndPause(_4__this, 0LL),
        (_4__this = (MissionNotifyManager_o *)this->fields.__4__this) == 0LL) )
  {
LABEL_11:
    sub_B52A5C(_4__this, method);
  }
  QuestAfterAction__SetState((QuestAfterAction_o *)_4__this, 0, 0LL);
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall QuestAfterAction___c__DisplayClass71_0___PlaySpecifiedAction_b__1(
        QuestAfterAction___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  QuestAfterAction_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B52A5C(0LL, method);
  QuestAfterAction__SetState(_4__this, 2, 0LL);
}